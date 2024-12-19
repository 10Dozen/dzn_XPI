#include "script_component.hpp"

/*
    Draws dialog with item's modes.

    Params: none
    Returns: BOOL - is dialog shown or for some reason skipped
*/

private _player = [] call CBA_fnc_currentUnit;
if !(_player call CBA_fnc_canUseWeapon) exitWith { false };

// Get current pointer class and pointer options
(_self call [F(getCurrentWeaponInfo), [_player]]) params [
    "_currentWeapon",
    "_pointer",
    "_weaponType"
];

// -- No weapon or no pointer installed
if (_weaponType == WEAPON_TYPE_NONE || _pointer == "") exitWith { false };

// -- Check that item is bundled
private _bundle = _self call [F(getBundleOptions), [_pointer]];
if (_bundle isEqualTo []) exitWith { false };

_bundle params ["_irOptions", "_visibleOptions"];
(_self call [F(getItemXPIConfig), [_pointer]]) params ["_pointerName"];

// -- Save weapon/pointer at the time of menu opening, in case it changed once
//    player finally clicks button - any actions should be prevented
_self set [Q(OnMenuOpenWeaponInfo), [_currentWeapon, _pointer, _weaponType]];

// Draw UI
// Draw options by type, highlight currently selected one
private _menu = [
    ["HEADER", _pointerName]
];

(_self call [F(fillMenuOptions), [
    _pointer, _irOptions, "IR light"
]]) params ["_irMenuItems", "_irItemsHeight"];

(_self call [F(fillMenuOptions), [
    _pointer, _visibleOptions, "Visible light"
]]) params ["_visibleMenuItems", "_visibleItemsHeight"];

_menu append _irMenuItems;
_menu append _visibleMenuItems;

// -- Set dialog position (according to settins + align to vertical center)
private _dialogX = 0.75;
switch (GVAR(MenuPositionSetting)) do {
    case SETTING_POS_LEFT: { _dialogX = DIALOG_POS_LEFT; };
    case SETTING_POS_CENTER: { _dialogX = DIALOG_POS_CENTER; };
    case SETTING_POS_RIGHT: { _dialogX = DIALOG_POS_RIGHT; };
};
private _dialogY = (1 - (_irItemsHeight + _visibleItemsHeight + 0.04)) / 2;

_menu pushBack ["DIALOG", [
        ["x", _dialogX],
        ["y", _dialogY],
        ["w", 0.25]
]];

DIALOG_COB call [F(ShowDialog), _menu];

true

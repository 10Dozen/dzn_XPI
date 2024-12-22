#include "script_component.hpp"

// -- Settings
[
    Q(GVAR(MenuScaleSetting)),
    "LIST",
    localize "STR_XPI_Settings_MenuScale",
    TITLE,
    [
        [SETTING_SCALE_S, SETTING_SCALE_M, SETTING_SCALE_L],
        [
            localize "STR_XPI_Settings_MenuScale_Small",
            localize "STR_XPI_Settings_MenuScale_Normal",
            localize "STR_XPI_Settings_MenuScale_Large"
        ],
        1
    ],
    2
] call CBA_fnc_addSetting;

[
    Q(GVAR(MenuPositionSetting)),
    "LIST",
    localize "STR_XPI_Settings_MenuPosition",
    TITLE,
    [
        [SETTING_POS_LEFT, SETTING_POS_CENTER, SETTING_POS_RIGHT],
        [
            localize "STR_XPI_Settings_MenuPosition_Left",
            localize "STR_XPI_Settings_MenuPosition_Center",
            localize "STR_XPI_Settings_MenuPosition_Right"
        ],
        1
    ],
    2
] call CBA_fnc_addSetting;


// --- Keybinding
#include "\a3\ui_f\hpp\definedikcodes.inc"
[
    TITLE,
    "dzn_XPI_MenuKey",
    localize "STR_XPI_Keybinds_OpenMenu",
    { COB call [F(openMenu)] },
    {},
    [DIK_L, [false, false, true]]
] call CBA_fnc_addKeybind;

[
    TITLE,
    "dzn_XIP_TempUseKey",
    localize "STR_XPI_Keybinds_OnHoldToggle",
    {
        private _player = call CBA_fnc_currentUnit;
        if !(_player call CBA_fnc_canUseWeapon) exitWith {};

        (COB call [F(getCurrentWeaponInfo), [_player]]) params [
            "_currentWeapon", "", "_weaponType"
        ];
        if (_weaponType != WEAPON_TYPE_PRIMARY) exitWith {};

        private _state = _player isFlashlightOn _currentWeapon || _player isIRLaserOn _currentWeapon;
        _player setVariable [Q(GVAR(TempState)), _state];
        COB call [F(setPointerState), [_player, !_state]];
    },
    {
        private _player = call CBA_fnc_currentUnit;
        if !(_player call CBA_fnc_canUseWeapon) exitWith {};
        COB call [
            F(setPointerState),
            [_player, _player getVariable [Q(GVAR(TempState)), false]]
        ];
    }
] call CBA_fnc_addKeybind;


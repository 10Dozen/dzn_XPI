#include "script_component.hpp"

// -- Settings
[
    Q(GVAR(MenuScaleSetting)),
    "LIST",
    "Menu scale",
    TITLE,
    [
        [SETTING_SCALE_S, SETTING_SCALE_M, SETTING_SCALE_L],
        ["Small", "Normal", "Large"],
        1
    ],
    2
] call CBA_fnc_addSetting;

[
    Q(GVAR(MenuPositionSetting)),
    "LIST",
    "Menu position",
    TITLE,
    [
        [SETTING_POS_LEFT, SETTING_POS_CENTER, SETTING_POS_RIGHT],
        ["Left", "Center", "Right"],
        1
    ],
    2
] call CBA_fnc_addSetting;


// --- Keybinding
#include "\a3\ui_f\hpp\definedikcodes.inc"
[
    TITLE,
    "dzn_XIP_MenuKey",
    "Open XIP menu",
    { COB call [F(openMenu)] },
    {},
    [DIK_L, [false, false, true]]
] call CBA_fnc_addKeybind;

[
    TITLE,
    "dzn_XIP_TempUseKey",
    "Temporary Turn On/Off pointer",
    {
        private _player = call CBA_fnc_currentUnit;
        private _state = _player isFlashlightOn (currentWeapon _player) || _player isIRLaserOn (currentWeapon _player);
        _player setVariable [Q(GVAR(TempState)), _state];
        COB call [F(setPointerState), [_player, !_state]];
    },
    {
        private _player = call CBA_fnc_currentUnit;
        COB call [
            F(setPointerState),
            [_player, _player getVariable [Q(GVAR(TempState)), false]]
        ];
    }
] call CBA_fnc_addKeybind;


#include "script_component.hpp"

/*
    Switches current weapon item to given switchToClass.
    Restores previously used state of the poiner (on/off).
    Called from onMenuButtonClick.

    Params:
    0: _switchToClass (STRING) - classname to switch to.
    1: _title (STRING) - title to be shown.
    2: _icon (STRING) - icon to be shown.

    Returns: BOOL - true if switch was scheduled, otherwise false
*/

params ["_switchToClass", "_title", "_icon"];

private _player = [] call CBA_fnc_currentUnit;
private _currentWeaponInfo = _self call [F(getCurrentWeaponInfo), [_player]];
private _weaponBeforeInfo = _self getOrDefault [Q(OnMenuOpenWeapon), _currentWeapon];

if (_currentWeaponInfo isNotEqualTo _weaponBeforeInfo) exitWith { false };

// -- Notify
[[_icon, 2.0], [_title], true] call CBA_fnc_notify;
playSound "ClickSoft";

_self set [Q(OnMenuOpenWeapon), nil];

// -- Schedule item switch
_currentWeaponInfo params ["_currentWeapon", "_itemToRemove", "_weaponType"];
private _pointerState = _player isFlashlightOn _currentWeapon || _player isIRLaserOn _currentWeapon;

// -- Primary weapon items
if (_weaponType == WEAPON_TYPE_PRIMARY) exitWith {
    _player removePrimaryWeaponItem _itemToRemove;
    [{
        params ["_player", "_switchToClass", "_pointerState"];
        _player addPrimaryWeaponItem _switchToClass;
        COB call [F(setPointerState), [_player, _pointerState, false]];
    }, [_player, _switchToClass, _pointerState]] call CBA_fnc_execNextFrame;
};

// -- Secondary weapon items
if (_weaponType == WEAPON_TYPE_SECONDARY) exitWith {
    _player removeSecondaryWeaponItem _itemToRemove;
    [{
        params ["_player", "_switchToClass", "_pointerState"];
        _player addSecondaryWeaponItem _switchToClass;
        // COB call [F(setPointerState), [_player, _pointerState, true]];
    }, [_player, _switchToClass, _pointerState]] call CBA_fnc_execNextFrame;
};

// -- Handgun item
_player removeHandgunItem _itemToRemove;
[{
    params ["_player", "_switchToClass", "_pointerState"];
    _player addHandgunItem _switchToClass;
    // COB call [F(setPointerState), [_player, _pointerState, true]];
}, [_player, _switchToClass, _pointerState]] call CBA_fnc_execNextFrame;

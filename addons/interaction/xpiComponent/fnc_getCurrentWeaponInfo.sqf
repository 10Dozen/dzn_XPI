#include "script_component.hpp"
/*
    Returns current weapon, pointer item and weapon type of given unit.

    Params:
    0: _unit (OBJECT) - unit to look for.

    Returns: Array of
        0: _weapon (STRING) - classname of the current weapon
        1: _pointer (STRING) - classname of the curent weapon's pointer
        2: _weaponType (NUMBER) - weapon type (primary/secondary/handgun)
*/

params ["_unit"];

private _weapon = currentWeapon _unit;

if (_weapon isEqualTo "") exitWith { ["", "", WEAPON_TYPE_NONE] };
if (_weapon isEqualTo primaryWeapon _unit) exitWith {
    [_weapon, (primaryWeaponItems _unit) # 1, WEAPON_TYPE_PRIMARY]
};
if (_weapon isEqualTo secondaryWeapon _unit) exitWith {
    [_weapon, (secondaryWeaponItems _unit) # 1, WEAPON_TYPE_SECONDARY]
};
if (_weapon isEqualTo handgunWeapon _unit) exitWith {
    [_weapon, (handgunItems _unit) # 1, WEAPON_TYPE_HANDGUN]
};

["", "", WEAPON_TYPE_NONE]

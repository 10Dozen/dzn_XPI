#include "script_component.hpp"

/*
    Sets pointer state (on/off).

    Params:
    0: _unit (OBJECT) - target unit.
    1: _state (BOOL) - On (true) or Off (false) state.

    Returns: nothing
*/

params ["_unit", "_state"];

_unit action [["IRLaserOff", "IRLaserOn"] select _state, _unit];
_unit action [["GunLightOff", "GunLightOn"] select _state, _unit];

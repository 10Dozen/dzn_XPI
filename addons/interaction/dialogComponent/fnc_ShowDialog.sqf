#include "script_component.hpp"

disableSerialization;

/*
    Shows dialog of given structure.

    Params:
        0...n: _itemDescription (Array) - describes control and it's attributes:


    Returns:
        nothing - shows dialog
*/

if (!isNull (_self getOrDefault [Q(Dialog), displayNull])) exitWith {
    _self call [F(Close)];
    [
        { DIALOG_COB call [F(ShowDialog), _this]; },
        _this
    ] call CBA_fnc_execNextFrame;
};
// Resets COB state
_self call [F(reset)];
if (_this isEqualTo []) exitWith {};

forceUnicode 0;

// Set Descriptors
_self set [Q(Descriptors), _this];

// Parse descriptors
_self call [F(parseParams)];

// Render parsed descriptors
_self call [F(render)];

forceUnicode -1;

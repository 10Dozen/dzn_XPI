#include "script_component.hpp"

/*
    Handle menu button click.
    Invoked from Dialog COB onButtonClick event.

    Params:
    0: _dialogCob (HASHMAPOBJECT) - Dialog COB
    1: _args (ARRAY) - assigned arguments
*/

params ["_dialogCob", "_args"];
_dialogCob call [F(Close)];

_args params ["_xpiCob", "_switchToClass", "_title", "_icon"];
_xpiCob call [F(switchMode), [_switchToClass, _title, _icon]];

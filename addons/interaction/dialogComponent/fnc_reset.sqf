#include "script_component.hpp"

/*
    Resets state of the Component object.

    Params:
        none

    Returns:
        nothing
*/

_self set [Q(Dialog), nil];
_self set [
    Q(DialogAttributes),
    createHashMapFromArray [
        [A_W, 1],
        [A_H, 1],
        [A_X, 0],
        [A_Y, 0]
    ]
];

_self set [Q(Descriptors), nil];
_self set [Q(Items), []];
_self set [Q(LineHeights), []];

_self set [Q(Controls), []];
_self set [Q(ControlsPerLines), []];

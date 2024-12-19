#include "script_component.hpp"

private _cob = createHashMapObject [[
    ["#str", { Q(DIALOG_COB) }],
    [Q(Dialog), nil],
    [Q(DialogAttributes), createHashMapFromArray [
        [A_W, 1],
        [A_H, 1],
        [A_X, 0],
        [A_Y, 0]
    ]],

    [Q(Parsers), createHashMap],
    [Q(Renderers), createHashMap],

    [Q(Descriptors), []],
    [Q(Items), []],
    [Q(LineHeights), []],

    // Main functions
    PREP_COMPONENT_FUNCTION(ShowDialog),
    PREP_COMPONENT_FUNCTION(RegisterControlType),
    PREP_COMPONENT_FUNCTION(MergeAttributes),
    PREP_COMPONENT_FUNCTION(AppendLinebreak),
    PREP_COMPONENT_FUNCTION(Close),

    PREP_COMPONENT_FUNCTION(init),
    PREP_COMPONENT_FUNCTION(reset),
    PREP_COMPONENT_FUNCTION(parseParams),
    PREP_COMPONENT_FUNCTION(render),

    PREP_COMPONENT_FUNCTION(onButtonClick)
]];

diag_log "(dzn_XPI_DialogComponent) Calling init";
_cob call [F(init)];

_cob

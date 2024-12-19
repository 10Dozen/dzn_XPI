#include "script_component.hpp"

params ["_cob"];

// Header
private _typeNames = Q(ICON_BUTTON);

private _parse = {
    // LOG_ "[parse.IconButton] Parsing. Params: %1", _this EOL;

    params ["_cob", "_item", "_itemDescriptor", "_idx"];
    // [ 0@Type("ICON_BUTTON"), 1@Icon, 2@Code, 3(optional)@Args, 4(optional)@Attributes, 5(optional)@Events]
    _itemDescriptor params [
        "",
        "_icon",
        "_callback",
        ["_args", []],
        ["_attrs", []]
    ];

    _item set [A_ICON, _icon];
    _item set [A_CALLBACK, _callback];
    _item set [A_CALLBACK_ARGS, _args];
    _item set [A_BG, ITEM_BG_COLOR_RGBA];
    PARSING_APPLY_ATTRIBUTES;

    // Make icon squared
    private _desiredSize = _item get A_SIZE;
    _item set [A_H, _desiredSize];
    _item set [A_W, _desiredSize * SAFEZONE_ASPECT_RATIO];
};

private _render = {
    // LOG_ "[render.IconButton] Rendering. Params: %1", _this EOL;

    params ["_cob", "_item", "_xOffset", "_yOffset", "_itemWidth", "_itemHeight", "_dialog", "_ctrlGroup"];
    private _ctrl = _dialog ctrlCreate [RSC_BUTTON_PICTURE, -1, _ctrlGroup];
    _ctrl ctrlSetText (_item get A_ICON);

    // -- Icon width is locked to icon height, so redefine width to save aspect ratio
    _itemWidth = _itemHeight * SAFEZONE_ASPECT_RATIO;

    SET_POSITION(_ctrl,_item,_xOffset + BUTTON_OFFSET,_yOffset + BUTTON_OFFSET,_itemWidth - 2*BUTTON_OFFSET,_itemHeight - 2*BUTTON_OFFSET);
    SET_ATTRIBURES(_ctrl);

    _ctrl setVariable [Q(DialogCOB), _self];
    _ctrl ctrlAddEventHandler ["ButtonClick", _cob get F(onButtonClick)];
    _ctrl setVariable [Q(callback), _item get A_CALLBACK];
    _ctrl setVariable [Q(callbackArgs), _item get A_CALLBACK_ARGS];
    // LOG_ "[render.IconButton] Rendering. forcedWidth=%1", _itemWidth EOL;
    _ctrl setVariable [Q(forcedWidth), _itemWidth];

    _ctrl
};

_cob call [F(RegisterControlType), [_typeNames, _parse, _render]];

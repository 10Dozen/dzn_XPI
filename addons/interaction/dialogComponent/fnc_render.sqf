#include "script_component.hpp"

/*
    Renders COB.Items and shows dialog on screen.

    Params:
        nothing (refers to COB.Items and COB.LineHeights properties)
    Retunrs:
        nothing
*/


// LOG_ "[render] Rendering started" EOL;

createDialog DIALOG_NAME;
private _dialog = findDisplay DIALOG_ID;
_self set [Q(Dialog), _dialog];

private _dialogAttrs = _self get Q(DialogAttributes);
private _dialogX = _dialogAttrs get A_X;
private _dialogY = _dialogAttrs get A_Y;
private _dialogW = _dialogAttrs get A_W;
private _dialogH = _dialogAttrs get A_H;

private _ctrlGroup = _dialog ctrlCreate [RSC_GROUP, -1];
_ctrlGroup ctrlSetPosition [_dialogX + _dialogW/2, 0, 0, 0];
_ctrlGroup ctrlCommit 0;

private _background = _dialog ctrlCreate [RSC_BG, -1, _ctrlGroup];

private _plainControlsList = [];
private _controls = [];
private _inputs = [];
private _taggedControls = createHashMap;

private _linesHeights = _self get Q(LineHeights);
private _yOffset = 0;

{
    private _lineNo = _forEachIndex;
    private _lineControls = [];
    private _lineItems = _x;
    private _lineHeight = _linesHeights # _lineNo;
    private _xOffset = 0;

    // LOG_ "[render] Line number = %1, with %2 items", _lineNo, count _lineItems EOL;
    // LOG_ "[render] Line height: %1", _lineHeight EOL;

    {
        // LOG_ "[render] Adding new control to line %1, descriptor: %2", _lineNo + 1, _x EOL;

        private _item = _x;
        private _itemType = _item get A_TYPE;
        private _itemWidth = _dialogW * (_item get A_W);
        private _itemHeight = _item get A_H;

        // LOG_ "[render] Auto-layout for item: x=%1, y=%2, width=%3, height=%4", _xOffset, _yOffset, _itemWidth, _itemHeight EOL;
        // LOG_ "[render] Invoking Render function for control type %1", _itemType EOL;
        private _ctrl = [
            _self, _item,
            _xOffset, _yOffset, _itemWidth, _itemHeight,
            _dialog, _ctrlGroup
        ] call (_self get Q(Renderers) get _itemType);

        // Position adjusting - if rendered updated
        private _forcedWidth = _ctrl getVariable [Q(forcedWidth), _itemWidth];
        (ctrlPosition _ctrl) params ["_x", "_y", "_h", "_w"];
        if (_itemWidth != _forcedWidth) then {
            // LOG_ "[render] Item width updated: expected=%1 actual=%2",_itemWidth, _forcedWidth EOL;
            _itemWidth = _forcedWidth;
        };

        // LOG_ "[render] Finalizing item: _enabled=%1", _item get A_ENABLED EOL;
        _ctrl ctrlEnable (_item get A_ENABLED);
        _taggedControls set [_item get A_TAG, _ctrl];

        if (_ctrl getVariable [Q(isInput), false]) then {
            _inputs pushBack _ctrl;
        };

        // LOG_ "[render] X Offset=%1",_xOffset, _w EOL;
        _xOffset = _xOffset + _itemWidth;
        // LOG_ "[render] X Offset after=%1",_xOffset, _w EOL;
        _lineControls pushBack _ctrl;
        _plainControlsList pushBack _ctrl;
    } forEach _lineItems;

    _controls pushBack _lineControls;
    _yOffset = _yOffset + _lineHeight;
} forEach (_self get Q(Items));

_background ctrlSetBackgroundColor (_dialogAttrs getOrDefault [A_BG, BG_COLOR_RGBA]);

// If first item is a Header -- do not draw background underneath and start BG from next line
// otherwise - fill bg starting from 1st line.
private _topItemIsHeader = ((_self get Q(Items)) # 0 # 0) get A_TYPE == Q(HEADER);
_background ctrlSetPosition ([
    [0, 0, _dialogW, _yOffset],
    [0, (_linesHeights # 0), _dialogW,  _yOffset - (_linesHeights # 0)]
] select _topItemIsHeader);

_background ctrlCommit 0;

_ctrlGroup ctrlSetPosition [_dialogX, _dialogY, _dialogW, _dialogH];
_ctrlGroup ctrlCommit DIALOG_SHOW_TIME;

// Force mouse to be centered
setMousePosition [0.5, 0.5];

// LOG_ "[render] Rendered!" EOL;

#include "script_component.hpp"

/*
    Composes menu options.

    Params:
    0: _currentItem (STRING) - current pointer item class, to highlight selected mode.
    1: _options (ARRAY) - list of available items
    2: _title (STRING) - title of the menu section

    Returns: ARRAY of
        0: _menuItems (ARRAY) - menu item descriptors.
        1: _height (NUMBER) - items total height
*/

params ["_currentItem", "_options", "_title"];

private _menuItems = [];
private _height = 0;
private _itemPerRowCounter = 0;

if (_options isEqualTo []) exitWith { [_menuItems, _height] };

private ["_itemLimit", "_itemSize"];
switch (GVAR(MenuScaleSetting)) do {
    case SETTING_SCALE_S: {
        _itemLimit = DIALOG_ITEMS_COUNT_SMALL;
        _itemSize = DIALOG_ITEM_ICON_SIZE_SMALL;
    };
    case SETTING_SCALE_M: {
        _itemLimit = DIALOG_ITEMS_COUNT_MEDIUM;
        _itemSize = DIALOG_ITEM_ICON_SIZE_MEDIUM;

    };
    case SETTING_SCALE_L: {
        _itemLimit = DIALOG_ITEMS_COUNT_LARGE;
        _itemSize = DIALOG_ITEM_ICON_SIZE_LARGE;
    };
};

_menuItems = [["LABEL", _title, [["enabled", false]]], ["BR"]];
_height = _height + 0.04; // size of the default font
{
    if (_itemPerRowCounter == _itemLimit) then {
        _menuItems pushBack ["BR"];
        _height = _height + _itemSize; // Handle multiline options
        _itemPerRowCounter = 0;
    };
    _x params ["_class", "_title", "_icons"];
    _menuItems pushBack [
        "ICON_BUTTON",
        _icons select (_class isEqualTo _currentItem),
        _self get F(onMenuButtonClick),
        [_self, _class, _title, _icons # 1],
        [
            ["tooltip", _title],
            ["size", _itemSize],
            ["bg", [0,0,0,0]]
        ]
    ];
    _itemPerRowCounter = _itemPerRowCounter + 1;
} forEach _options;
_height = _height + _itemSize; // Handle last line options

_menuItems pushBack ["BR"];

[_menuItems, _height]

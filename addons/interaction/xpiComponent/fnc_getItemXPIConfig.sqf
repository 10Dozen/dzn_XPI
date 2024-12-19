#include "script_component.hpp"

/*
    Reads and caches item's XPI config.

    Params:
    0: _itemClass (STRING) - classname of item.

    Returns: Array of:
    0: _displayName(STRING) - items display name
    1: _type(STRING) - item type - visible or IR
    2: _mode(STRING) - item mode (e.g. laser, illuminator, etc.)
    3: _bundleName(STRING) - name of the item's bundle
*/

params ["_itemClass"];

private _itemXPI = (_self get Q(ItemCache)) getOrDefaultCall [
    _itemClass,
    {
        private _itemXPICfg = configFile >> "CfgWeapons" >> _itemClass >> "dzn_XPI";
        private _cfg = [];
        if (!isNull _itemXPICfg) then {
            _cfg = [
                getText(configFile >> "CfgWeapons" >> _itemClass >> "displayName"),
                getText(_itemXPICfg >> "type"),
                getText(_itemXPICfg >> "mode"),
                getText(_itemXPICfg >> "bundle")
            ]
        };
        _cfg
    },
    true
];

_itemXPI

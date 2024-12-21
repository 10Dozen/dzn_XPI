#include "script_component.hpp"

/*
    Reads and caches bundle of given item.
    If item is not bundled - return empty array.

    Params:
    0: _itemClass (STRING) - item class to get bundle from.

    Returns:
    ARRAY [
        _irModes(ordered ARRAY [[_itemClass, _modeTitle, _modeIcons]])
        _visibleModes(ordered ARRAY [[_itemClass, _modeTitle, _modeIcons]])
    ]
*/

params ["_itemClass"];

private _xpiData = _self call [F(getItemXPIConfig), [_itemClass]];
if (_xpiData isEqualTo []) exitWith { [] };
_xpiData params ["", "_type", "_mode", "_bundleName"];

// -- Get from cache
private _bundle = _self get Q(BundlesCache) get _bundleName;
if (!isNil "_bundle") exitWith { _bundle };

// -- Find and cache bundle data
private _bundleCfg = configFile >> "CfgDznXPI" >> "Bundles" >> _bundleName;
if (!isClass _bundleCfg) exitWith {
    (_self get Q(BundlesCache)) set [_bundleName, []];
    []
};

private _bundleItems = configProperties [_bundleCfg, "getNumber(_x) == 1"];
private _irModes = _self get Q(XPI_T_IR);
private _visibleModes = _self get Q(XPI_T_VISIBLE);

private _irOptions = [];
private _visibleOptions = [];
_irOptions resize [count Q(_irModes), []];
_visibleOptions resize [count Q(_visibleModes), []];

private ["_options", "_modesMap"];
{
    (_self call [F(getItemXPIConfig), [configName _x]]) params ["", "_type", "_mode"];

    _modesMap = _irModes;
    _options = _irOptions;
    if (_type == Q(XPI_T_VISIBLE)) then {
        _modesMap = _visibleModes;
        _options = _visibleOptions;
    };

    (_modesMap get _mode) params ["_title", "_icons", "_order"];
    _options set [_order, [configName _x, _title, _icons]];
} forEach _bundleItems;


// Return: lightOptions, pointerOptions
_bundle = [
    _irOptions select { _x isNotEqualTo [] },
    _visibleOptions select { _x isNotEqualTo [] }
];
(_self get Q(BundlesCache)) set [_bundleName, _bundle];

_bundle

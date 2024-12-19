#include "script_component.hpp"

/*
    Initializes COB caches.
    Params: none
    Returns: nothing
*/

private _irModesCfg = configFile >> "CfgDznXPI" >> Q(XPI_T_IR);
private _irModesMap = _self get Q(XPI_T_IR);
{
    _irModesMap set [
        configName _x,
        [
            getText (_x >> "title"),
            getArray (_x >> "icons"),
            getNumber (_x >> "order")
        ]
    ];
} forEach ("true" configClasses _irModesCfg);

private _visibleModesCfg = configFile >> "CfgDznXPI" >> Q(XPI_T_VISIBLE);
private _visibleModesMap = _self get Q(XPI_T_VISIBLE);
{
    _visibleModesMap set [
        configName _x,
        [
            getText (_x >> "title"),
            getArray (_x >> "icons"),
            getNumber (_x >> "order")
        ]
    ];
} forEach ("true" configClasses _visibleModesCfg);

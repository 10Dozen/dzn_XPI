#include "script_component.hpp"

/*
    Component object (COB) definition
*/
private _declaration = [
    [Q(XPI_T_IR), createHashMap],
    [Q(XPI_T_VISIBLE), createHashMap],
    [Q(ItemCache), createHashMap],
    [Q(BundlesCache), createHashMap],
    [Q(OnMenuOpenWeaponInfo), nil],

    PREP_COMPONENT_FUNCTION(init),
    PREP_COMPONENT_FUNCTION(getItemXPIConfig),
    PREP_COMPONENT_FUNCTION(getBundleOptions),
    PREP_COMPONENT_FUNCTION(getCurrentWeaponInfo),
    PREP_COMPONENT_FUNCTION(fillMenuOptions),
    PREP_COMPONENT_FUNCTION(openMenu),
    PREP_COMPONENT_FUNCTION(onMenuButtonClick),
    PREP_COMPONENT_FUNCTION(switchMode),
    PREP_COMPONENT_FUNCTION(setPointerState)
];

private _cob = createHashMapObject [_declaration];
_cob call [F(init)];

_cob

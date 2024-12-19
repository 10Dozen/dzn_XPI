
#define COB PREFIX##_Component
#define DIALOG_COB PREFIX##_DialogComponent

#define F_WRAP(NAME) fnc_##NAME
#define F(NAME) Q(F_WRAP(NAME))

#define FNC_SUBPATH component
#define COMPONENT_FNC_PATH(FILE) gADDON_PATH##\##FNC_SUBPATH##\fnc_##FILE##.sqf
#define PREP_COMPONENT_FUNCTION(NAME) \
    [F(NAME), compileScript [Q(COMPONENT_FNC_PATH(NAME))]]
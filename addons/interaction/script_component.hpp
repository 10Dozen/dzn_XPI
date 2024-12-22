#include "\z\dzn_XPI\addons\main\script_component.hpp"
#include "script_cob.hpp"

#undef gADDON
#define gADDON interaction

#define GVAR(X) gADDON_NAME##_##X
#define QGVAR(X) Q(GVAR(X))

#define COMPILE_FILE(FILE) compileScript ['gADDON_PATH\##FILE.sqf']
#define COMPILE_FILE_2(SUB,FILE) compileScript ['gADDON_PATH\##SUB##\##FILE.sqf']

#define SETTING_SCALE_S 0
#define SETTING_SCALE_M 10
#define SETTING_SCALE_L 20

#define SETTING_POS_LEFT 0
#define SETTING_POS_CENTER 1
#define SETTING_POS_RIGHT 2


#define WEAPON_TYPE_NONE -1
#define WEAPON_TYPE_PRIMARY 0
#define WEAPON_TYPE_SECONDARY 1
#define WEAPON_TYPE_HANDGUN 2

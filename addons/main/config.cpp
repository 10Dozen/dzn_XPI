#include "script_component.hpp"

class CfgPatches
{
    class dzn_XPI
    {
		name = Q(ADDON_TITLE);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"CBA_MAIN"};
        author[] = {"10Dozen"};
        version = VERSION_STR;
        versionStr = VERSION_STR;
        versionAr[] = VERSION_ARR;
    };
};

class CfgDznXPI
{
	class XPI_T_VISIBLE
	{
		class XPI_M_VISIBLE_LASER
		{
			title = "$STR_XPI_Modes_VisibleLaser";
			icons[] = ICONS(btn_Laser);
			order = 0;
		};
		class XPI_M_VISIBLE_LASER_x_LIGTH_WIDE
		{
			title = "$STR_XPI_Modes_VisibleLaser_x_FlashlightWide";
			icons[] = ICONS(btn_Laser_x_Flashlight_Wide);
			order = 1;
		};
		class XPI_M_VISIBLE_LASER_x_LIGTH
		{
			title = "$STR_XPI_Modes_VisibleLaser_x_Flashlight";
			icons[] = ICONS(btn_Laser_x_Flashlight);
			order = 2;
		};
		class XPI_M_LIGHT_W
		{
			title = "$STR_XPI_Modes_FlashlightWide";
			icons[] = ICONS(btn_Flashlight_Wide);
			order = 3;
		};
		class XPI_M_LIGHT
		{
			title = "$STR_XPI_Modes_Flashlight";
			icons[] = ICONS(btn_Flashlight);
			order = 4;
		};
	};

	class XPI_T_IR
	{
		class XPI_M_IR_LASER
		{
			title = "$STR_XPI_Modes_IRLaser";
			icons[] = ICONS(btn_IRLaser);
			order = 0;
		};
		class XPI_M_IR_LASER_x_IR_ILLUM_W
		{
			title = "$STR_XPI_Modes_IRLaser_x_IRIlluminatorWide";
			icons[] = ICONS(btn_IRLaser_x_Flashlight_Wide);
			order = 1;
		};
		class XPI_M_IR_LASER_x_IR_ILLUM
		{
			title = "$STR_XPI_Modes_IRLaser_x_IRIlluminator";
			icons[] = ICONS(btn_IRLaser_x_Flashlight);
			order = 2;
		};
		class XPI_M_IR_ILLUM_W
		{
			title = "$STR_XPI_Modes_IRIlluminatorWide";
			icons[] = ICONS(btn_IRFlashlight_Wide);
			order = 3;
		};
		class XPI_M_IR_ILLUM
		{
			title = "$STR_XPI_Modes_IRIlluminator";
			icons[] = ICONS(btn_IRFlashlight);
			order = 4;
		};
		class XPI_M_IR_LIGHT_WIDE
		{
			title = "$STR_XPI_Modes_IRFlashlightWide";
			icons[] = ICONS(btn_IRFlashlight_Wide);
			order = 5;
		};
		class XPI_M_IR_LIGHT
		{
			title = "$STR_XPI_Modes_IRFlashlight";
			icons[] = ICONS(btn_IRFlashlight);
			order = 6;
		};
		class XPI_M_IR_ILLUM_POINTER
		{
			title = "$STR_XPI_Modes_IRIlluminatorPointer";
			icons[] = ICONS(btn_IRIlluminatorPointer);
			order = 7;
		};
	};

	class Bundles {};
};
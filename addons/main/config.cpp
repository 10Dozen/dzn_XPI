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
			title = "Visible Laser";
			icons[] = ICONS(btn_Laser);
			order = 0;
		};
		class XPI_M_VISIBLE_LASER_x_LIGTH_WIDE
		{
			title = "Visible Laser/Flashlight (Wide)";
			icons[] = ICONS(btn_Laser_x_Flashlight_Wide);
			order = 1;
		};
		class XPI_M_VISIBLE_LASER_x_LIGTH
		{
			title = "Visible Laser/Flashlight";
			icons[] = ICONS(btn_Laser_x_Flashlight);
			order = 2;
		};
		class XPI_M_LIGHT_W
		{
			title = "Flashlight (Wide)";
			icons[] = ICONS(btn_Flashlight_Wide);
			order = 3;
		};
		class XPI_M_LIGHT
		{
			title = "Flashlight";
			icons[] = ICONS(btn_Flashlight);
			order = 4;
		};
	};

	class XPI_T_IR
	{
		class XPI_M_IR_LASER
		{
			title = "IR Laser";
			icons[] = ICONS(btn_IRLaser);
			order = 0;
		};
		class XPI_M_IR_LASER_x_IR_ILLUM_W
		{
			title = "IR Laser/Illuminator (Wide)";
			icons[] = ICONS(btn_IRLaser_x_Flashlight_Wide);
			order = 1;
		};
		class XPI_M_IR_LASER_x_IR_ILLUM
		{
			title = "IR Laser/Illuminator (Narrow)";
			icons[] = ICONS(btn_IRLaser_x_Flashlight);
			order = 2;
		};
		class XPI_M_IR_ILLUM_W
		{
			title = "IR Illuminator (Wide)";
			icons[] = ICONS(btn_IRFlashlight_Wide);
			order = 3;
		};
		class XPI_M_IR_ILLUM
		{
			title = "IR Illuminator (Narrow)";
			icons[] = ICONS(btn_IRFlashlight);
			order = 4;
		};
		class XPI_M_IR_LIGHT_WIDE
		{
			title = "IR Flashlight (Wide)";
			icons[] = ICONS(btn_IRFlashlight_Wide);
			order = 5;
		};
		class XPI_M_IR_LIGHT
		{
			title = "IR Flashlight";
			icons[] = ICONS(btn_IRFlashlight);
			order = 6;
		};
		class XPI_M_IR_ILLUM_POINTER
		{
			title = "IR Illuminator Pointer";
			icons[] = ICONS(btn_IRIlluminatorPointer);
			order = 7;
		};
	};

	class Bundles {};
};
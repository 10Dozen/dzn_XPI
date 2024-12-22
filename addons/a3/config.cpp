#include "script_component.hpp"

class CfgPatches
{
	class gADDON_NAME
	{
		name = "A3";
		author = "10Dozen";
		requiredaddons[]=
		{
            #include "CfgPatches_requiredAddons.hpp"
		};
		requiredversion=REQUIRED_VERSION;
		skipWhenMissingDependencies = 1;
		units[]={};
		weapons[]={
            #include "CfgPatches_weapons.hpp"
		};
		magazines[]={};
	};
};

class CfgDznXPI
{
	class Bundles
	{
		#include "CfgDznXPI_bundles.hpp"
	};

};


class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo
{
	class compatibleItems
	{
        #include "asdg_rifle_rails.hpp"
	};
};
class PointerSlot;
class PointerSlot_Rail: PointerSlot
{
	class compatibleItems
	{
        #include "asdg_rifle_rails.hpp"
	};
};
class asdg_PistolUnderRail: asdg_SlotInfo
{
	class compatibleItems
	{
		dzn_XPI_acc_pistol_flashlight = 1;
        #include "asdg_pistol_rails.hpp"
	};
};
class PointerSlot_Pistol: PointerSlot
{
	class compatibleItems
	{
		dzn_XPI_acc_pistol_flashlight = 1;
        #include "asdg_pistol_rails.hpp"
	};
};


class CfgWeapons
{
	class ItemCore;
	class InventoryFlashLightItem_Base_F;

	class acc_pointer_IR;
	class acc_flashlight;
	class acc_flashlight_pistol;

	class dzn_XPI_acc_DBAL_A3_base: acc_pointer_IR
	{
		scope=0;
		displayName="$STR_XPI_Weapons_DBAL_A3";
		descriptionShort = "$STR_XPI_Weapons_DBAL_A3_desc";
		author = "10Dozen";
	};
	class dzn_XPI_acc_flashlight_DualMode_base: acc_flashlight
	{
		scope=0;
		displayName="$STR_XPI_Weapons_Flashlight_DualMode";
		descriptionShort = "$STR_XPI_Weapons_Flashlight_DualMode_desc";
		author = "10Dozen";
	};
	class dzn_XPI_acc_flashlight_DualLense_base: acc_flashlight
	{
		scope=0;
		displayName="$STR_XPI_Weapons_Flashlight_DualLense";
		descriptionShort = "$STR_XPI_Weapons_Flashlight_DualLense_desc";
		author = "10Dozen";
	};


	class dzn_XPI_acc_pistol_flashlight: acc_flashlight_pistol
	{
		scope=2;
		scopeArsenal=2;
		displayName="$STR_XPI_Weapons_PistolFlashlight";
		descriptionShort = "$STR_XPI_Weapons_PistolFlashlight_desc";
		author = "10Dozen";
		class dzn_XPI
		{
			bundle="dzn_XPI_PistolFlashlight";
			type=Q(XPI_T_VISIBLE);
			mode=Q(XPI_M_LIGHT_W);
		};

		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			PISTOL_LIGHT_WIDE(flash dir,flash);
			class Pointer {};
		};
	};

    #include "CfgWeapons_items.hpp"
};
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
        #include "asdg_pistol_rails.hpp"
	};
};
class PointerSlot_Pistol: PointerSlot
{
	class compatibleItems
	{
        #include "asdg_pistol_rails.hpp"
	};
};


class CfgWeapons
{
	class ItemCore;
	class InventoryFlashLightItem_Base_F;

	class acc_pointer_IR;
	class acc_flashlight;

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

    #include "CfgWeapons_items.hpp"
};
/*
	class acc_flashlight_pistol: ItemCore
	{
		MRT_SwitchItemNextClass="acc_flashlight_pistol_Narrow";
		MRT_SwitchItemPrevClass="acc_flashlight_pistol_Narrow";
		MRT_switchItemHintText="Wide Lens";
		displayName = "Handgun Flashlight (Wide Lens)";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				ambient[]={9,7.5,6};
				color[]={1200,1500,1800};
				conefadecoef=150;
				daylight=1;
				direction="flash";
				flaremaxdistance=600;
				flaresize=1;
				innerangle=40;
				intensity=0.3;
				outerangle=140;
				position="flash dir";
				scale[]={0};
				size=1;
				useflare=1;
				class Attenuation
				{
					constant=1;
					hardlimitend=55;
					hardlimitstart=10;
					linear=1;
					quadratic=0;
					start=0.1;
				};
			};
		};
	};
	class acc_flashlight_pistol_Narrow: acc_flashlight_pistol
	{
		MRT_SwitchItemNextClass="acc_flashlight_pistol";
		MRT_SwitchItemPrevClass="acc_flashlight_pistol";
		MRT_switchItemHintText="Narrow Lens";
		displayName = "Handgun Flashlight (Narrow Lens)";
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			class FlashLight
			{
				ambient[]={9,7.5,6};
				color[]={1200,1500,1800};
				conefadecoef=150;
				daylight=1;
				direction="flash";
				flaremaxdistance=600;
				flaresize=1;
				innerangle=15;
				intensity=2.1;
				outerangle=120;
				position="flash dir";
				scale[]={0};
				size=1;
				useflare=1;
				class Attenuation
				{
					constant=1;
					hardlimitend=100;
					hardlimitstart=40;
					linear=1;
					quadratic=0;
					start=0.1;
				};
			};
		};
	};

};
*/
#include "script_component.hpp"

class CfgPatches
{
	class gADDON_NAME
	{
		name = Q(ADDON_TITLE);
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

class SlotInfo;
class rhs_russian_ak_barrel_slot: SlotInfo
{
	class compatibleItems
	{
        #include "asdg_rhs_russian_ak_barrel_slot.hpp"
	};
};
class rhs_russian_ris_handguard_slot: asdg_FrontSideRail
{
	class compatibleItems: compatibleItems
	{
        #include "asdg_rhs_russian_ris_handguard_slot.hpp"
	};
};

class CfgWeapons
{
	class ItemCore;
	class InventoryFlashLightItem_Base_F;
	class rhs_acc_perst1ik;
	class acc_flashlight;

    #include "CfgWeapons_items.hpp"
};
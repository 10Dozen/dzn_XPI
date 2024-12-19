#include "script_component.hpp"

class CfgPatches
{
	class gADDON_NAME
	{
		name = Q(ADDON_TITLE);
		author = "10Dozen";
		requiredaddons[]= {"dzn_XPI"};
		requiredversion=REQUIRED_VERSION;
		skipWhenMissingDependencies = 1;
		units[]={};
		weapons[]={};
		magazines[]={};
	};
};

#include "CfgEventHandlers.hpp"
#include "ui.hpp"
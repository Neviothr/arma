class CfgPatches
{
	class ace_sys_craters
	{
		units[]=
		{
			"ACE_Crater_Base",
			"ACE_BombCrater",
			"ACE_HEShellCrater",
			"ACE_ArtyShellCrater",
			"ACE_HERocketCrater",
			"ACE_NukeCrater"
		};
		requiredVersion=1.62;
		requiredAddons[]=
		{
			"Extended_EventHandlers",
			"ace_main",
			"CAMisc_E"
		};
		version="1.14.0.581";
		author[]=
		{
			"Rocko"
		};
	};
};
class CfgAddons
{
	class PreloadAddons
	{
		class ace_sys_craters
		{
			list[]=
			{
				"ace_sys_craters"
			};
		};
	};
};
class Extended_PreInit_EventHandlers
{
	class ace_sys_craters
	{
		init="call ('\x\ace\addons\sys_craters\XEH_preInit.sqf' call SLX_XEH_COMPILE)";
	};
};
class Extended_FiredBIS_EventHandlers
{
	class StaticCannon
	{
		ace_sys_craters="_this call ace_sys_craters_fnc_fired";
	};
	class Tank
	{
		ace_sys_craters="_this call ace_sys_craters_fnc_fired";
	};
	class Plane
	{
		ace_sys_craters="_this call ace_sys_craters_fnc_fired";
	};
	class Helicopter
	{
		ace_sys_craters="_this call ace_sys_craters_fnc_fired";
	};
};
class CfgVehicles
{
	class Land_Dirthump01_EP1;
	class ACE_Crater_Base: Land_Dirthump01_EP1
	{
		scope=1;
		icon="";
		destrType="DestructNo";
		displayName="";
		accuracy=0;
		ace_nuke_resistant=1;
	};
	class ACE_BombCrater: ACE_Crater_Base
	{
		model="\x\ace\addons\sys_craters\rocko_bombcrater.p3d";
	};
	class ACE_HEShellCrater: ACE_Crater_Base
	{
		model="\x\ace\addons\sys_craters\rocko_hecrater.p3d";
	};
	class ACE_ArtyShellCrater: ACE_Crater_Base
	{
		model="\x\ace\addons\sys_craters\rocko_artycrater.p3d";
	};
	class ACE_HERocketCrater: ACE_HEShellCrater
	{
	};
	class ACE_NukeCrater: ACE_Crater_Base
	{
		model="\x\ace\addons\sys_craters\rocko_nukecrater.p3d";
	};
	class ACE_RunwayCrater: ACE_Crater_Base
	{
		model="\x\ace\addons\sys_craters\rocko_runwaycrater.p3d";
	};
};

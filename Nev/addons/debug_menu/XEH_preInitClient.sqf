#include "script_component.hpp"

#include "XEH_PREP.hpp"

// Keybind
[
	"Debug Menu",
	"debug_menu_key",
	"Open debug menu",
	{
		if ((IS_ADMIN || (!isMultiplayer) || (isServer && hasInterface)) && !dialog) then {
			createDialog QGVAR(debugMenuDisplay);
		};

		// Check if the AI counter display is shown, if not - load it
		if (isNull (uiNamespace getVariable [QGVAR(aiCountDisplay), displayNull])) then {
			10 cutRsc [QGVAR(aiCount), "PLAIN", -1, true];
		};
	},
	""
] call CBA_fnc_addKeybind;

// Max distance
[
	QGVAR(maxDistance),
	"SLIDER",
	["Max spawn distance", "The max distance from the player at which units will be spawned."],
	"Debug Menu Groups",
	[0, 12000, 325, 0],
	true,
	{
		params ["_value"];
		GVAR(maxDistance) = _value;
	}
] call CBA_Settings_fnc_init;

// Min distance
[
	QGVAR(minDistance),
	"SLIDER",
	["Min spawn distance", "The min distance from the player at which units will be spawned."],
	"Debug Menu Groups",
	[0, 12000, 250, 0],
	true,
	{
		params ["_value"];
		GVAR(minDistance) = _value;
	}
] call CBA_Settings_fnc_init;

// Group side
[
	QGVAR(groupSide),
	"LIST",
	["Unit side", "The side of spawned units."],
	"Debug Menu Groups",
	[[west, east, independent, civilian], ["West", "East", "Independent", "Civilian"], 0],
	true,
	{
		params ["_value"];
		GVAR(groupSide) = _value;
	}
] call CBA_Settings_fnc_init;

// Group array
[
	QGVAR(groupArray),
	"EDITBOX",
	["Unit array", "Unit group array (class names sperated by a single space)."],
	"Debug Menu Groups",
	"",
	true,
	{
		params ["_value"];
		GVAR(groupArray) = _value splitString " "; // Turns editbox's `name1 name2` into ["name1", "name2"]
	}
] call CBA_Settings_fnc_init;

// Code to run on spawned units
[
	QGVAR(unitCode),
	"EDITBOX",
	["Unit code", "The code which will be ran on every spawned unit. Code will be ran though a forEach loop - _x, etc."],
	"Debug Menu Groups",
	"",
	true,
	{
		params ["_value"];
		GVAR(unitCode) = _value;
	}
] call CBA_Settings_fnc_init;

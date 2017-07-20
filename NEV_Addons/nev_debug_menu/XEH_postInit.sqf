#include "script_component.hpp"

if ( 													// Add an addAction only if the follow is true
		(serverCommandAvailable "#logout") || 			// If the player is an admin
		(!isMultiplayer) || 							// If gamemode is SP
		(getPlayerUID player == "76561198141761169") || // If player is mod author
		(isServer && hasInterface) 						// If player is host on a non-dedicated server
	) then {
	player addAction ["<t color='#228B25'>Debug Menu</t>", "createDialog ""nev_debug_menu"""];

	// Using CBA_fnc_waitUntilAndExecute because we can't suspend this script
	[
		{!isNull (findDisplay 46)}, // Condition, wait for RscDisplayMission
		{
			cutRsc ["ai_count", "PLAIN", -1, true]; // Load the display
		}
	] call CBA_fnc_waitUntilAndExecute;
};
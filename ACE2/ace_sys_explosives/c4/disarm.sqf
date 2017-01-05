#include "\x\ace\addons\sys_explosives\script_component.hpp"

PARAMS_2(_mine,_take);

_magazine = getText(configFile >> "CfgVehicles" >> typeOf _mine >> "ACE" >> "ACE_EXPLOSIVES" >> QUOTE(mine_magazine));

call FUNC(anim);

if (_take) then {
	player addMagazine _magazine;
	deletevehicle _mine;
} else {
	_wh = "WeaponHolder" createVehicle getPos _mine;
	_wh setpos getpos _mine;
	deleteVehicle _mine;
	_wh addMagazineCargoGlobal [_magazine,1];
};
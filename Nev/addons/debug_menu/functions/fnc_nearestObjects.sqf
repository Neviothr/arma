#include "script_component.hpp"

private _objList = [];

{
	_objList pushBack _x;
} forEach nearestObjects [player, ["Tank", "Car", "Ship", "Helicopter", "Plane", "StaticWeapon", "CAManBase"], 100];

hint format ["%1", _objList];
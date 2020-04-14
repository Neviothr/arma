#include "script_component.hpp"

/*
 * Name: TMF_ai_fnc_waveInit
 * Author: Head, Snippers
 *
 * Arguments:
 * 0: TMF WaveSpawner logic
 * 1: _units
 * 2: _activated
 *
 * Return:
 * N/A
 *
 * Description:
 * Handles creation of wavespawner structure
*/

if (is3DEN) exitWith {};

params ["_logic", "_units", "_activated"];

TRACE_3("",_logic,_units,_activated);

// Make sure our module is named properly.
if (" " in str _logic) exitWith {ERROR_MSG_1("One or more wave spawner modules aren't named properly - '%1'. Terminating init.",_logic)};

if !(_logic getVariable [QGVAR(init), false]) then {
    private _synchronizedGroups = [];

    {
        if (_x isEqualType grpNull && {side _x in [blufor, opfor, independent, civilian]}) then {
            _synchronizedGroups pushBackUnique _x;
        };

        if (_x isEqualType objNull && {side _x in [blufor, opfor, independent, civilian]}) then {
           if (_x isKindOf "Man") then {
               _synchronizedGroups pushBackUnique (group _x);
           } else {
               {
                _synchronizedGroups pushBackUnique (group _x);
               } foreach crew _x;
           };
        };
    } foreach synchronizedObjects _logic;

    private _allUnits = [];

    {
        _allUnits append (units _x);
    } forEach _synchronizedGroups;

    private _vehicles = (_allUnits) apply {objectParent _x} select {!isNull _x};
    _vehicles = _vehicles arrayIntersect _vehicles;

    private _groups = [];

    {
        private _grp = _x;
        private _units = (units _grp) apply {
            private _data = [
                typeOf _x,
                getPosATL _x,
                getDir _x,
                getUnitLoadout _x,
                -1,
                []
            ];

            if (!isNull objectParent _x) then {
                _data set [4, _vehicles find (objectParent _x)];
                _data set [5, assignedVehicleRole _x]
            };

            _data
        };

        _groups pushBack [side _x, _units, [_x] call FUNC(serializeWaypoints)];
    } forEach _synchronizedGroups;

    _vehicles = _vehicles apply {[typeof _x, getposATL _x, getDir _x, [_x] call BIS_fnc_getVehicleCustomization]};
    _logic setVariable [QGVAR(waveData), [_groups, _vehicles]];

    // Delete the old units/grps
    {
        _units = units _x;

        {
            if (!isNull objectParent _x) then {
                _units pushBackUnique vehicle _x;
            };

            deleteVehicle _x;
        } foreach _units;
    } foreach _synchronizedGroups;

    _logic setVariable [QGVAR(init), true, true];
};

// Wait until game on if SafeStart is enabled.
[
    {(GVAR(gameOn)) || (getMissionConfigValue ["safeStartEnabled", 0] == 0)},
    {
        params ["_activated", "_logic"];

        if (_activated) then {
            private _delay = _logic getVariable ["Delay", 0];
            [FUNC(spawnWave), [_logic], _delay] call CBA_fnc_waitAndExecute;
        };
    },
    [_activated, _logic]
] call CBA_fnc_waitUntilAndExecute;

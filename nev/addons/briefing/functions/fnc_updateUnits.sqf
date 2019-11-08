#include "script_component.hpp"

params ["_control", "_selectedIndex"];

diag_log "Running... fnc_updateUnits";

private _sideBox = (findDisplay IDD_IFFDisplay) displayCtrl IDC_iffSideCombo;
private _side = _sideBox lbText (lbCurSel _sideBox);

if (_side == "GUER") then {
    _side = "INDEP";
};

diag_log format ["_sideBox %1", _sideBox];
diag_log format ["_side %1", _side];

private _faction = _control lbText _selectedIndex;
private _factionTypeCfg = str (configProperties [configFile >> "CfgGroups" >> _side >> _faction, "isClass _x"]);
private _factionTypesList = _factionTypeCfg splitString "\/,[]";
private _factionType = "";

{
    if (("infantry" in toLower _x) || ("spec" in toLower _x)) exitWith {_factionType = _x};
} ForEach _factionTypesList;

diag_log format ["_faction %1", _faction];
diag_log format ["_factionTypeCfg %1", _factionTypeCfg];
diag_log format ["_factionTypesList %1", _factionTypesList];
diag_log format ["_factionType %1", _factionType];

private _groupsCfg = str (configProperties [configFile >> "CfgGroups" >> _side >> _faction >> _factionType, "isClass _x"]);
private _groupsList = _groupsCfg splitString "\/,[]";
private _group = "ERROR";

{
    private _lowered = toLower _x;

    if (
        (("inf" in _lowered) || ("team" in _lowered) || ("squad" in _lowered) || ("cell" in _lowered) || ("patrol" in _lowered) || ("gang" in _lowered)) &&
        ("infantry" != _lowered) &&
        (_factionType != _x)
    ) exitWith {_group = _x};
} forEach _groupsList;

diag_log format ["_groupsCfg %1", _groupsCfg];
diag_log format ["_groupsList %1", _groupsList];
diag_log format ["_group %1", _group];

private _unitsToDelete = nearestObjects [GVAR(logicCenter), ["Man"], 10];

{
    deleteVehicle _x;
} forEach _unitsToDelete;

[getText (configfile >> "CfgGroups" >> _side >> _faction >> _factionType >> _group >> "Unit0" >> "vehicle"), 1] call FUNC(createUnit);
[getText (configfile >> "CfgGroups" >> _side >> _faction >> _factionType >> _group >> "Unit1" >> "vehicle"), 2] call FUNC(createUnit);
[getText (configfile >> "CfgGroups" >> _side >> _faction >> _factionType >> _group >> "Unit2" >> "vehicle"), 3] call FUNC(createUnit);
[getText (configfile >> "CfgGroups" >> _side >> _faction >> _factionType >> _group >> "Unit3" >> "vehicle"), 4] call FUNC(createUnit);
{
	_x allowFleeing 0;
	_x disableAI "SUPPRESSION";
	_x disableAI "COVER";
	_x disableAI "AUTOCOMBAT";
	_x setBehaviour "AWARE";
	_x setSpeedMode "FULL";
	_x setskill ["aimingAccuracy",0.03];
} forEach allUnits;
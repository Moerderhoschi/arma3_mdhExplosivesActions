///////////////////////////////////////////////////////////////////////////////////////////////////
// MDH EXPLOSIVES ACTIONS(by Moerderhoschi) - v2025-11-16
// github: https://github.com/Moerderhoschi/arma3_mdhExplosivesActions
// steam mod version: https://steamcommunity.com/sharedfiles/filedetails/?id=3606788696
///////////////////////////////////////////////////////////////////////////////////////////////////
if (missionNameSpace getVariable ["pMdhExplosivesActions",99] == 99) then
{
	0 spawn
	{
		_valueCheck = 99;
		_defaultValue = 99;
		_env  = hasInterface;

		_diary   = 0;
		_mdhFnc  = 0;

		if (hasInterface) then
		{
			_diary =
			{
				waitUntil {!(isNull player)};
				_c = true;
				_t = "MDH Explosives Actions";
				if (player diarySubjectExists "MDH Mods") then
				{
					{
						if (_x#1 == _t) then {_c = false}
					} forEach (player allDiaryRecords "MDH Mods");
				}
				else
				{
					player createDiarySubject ["MDH Mods","MDH Mods"];
				};
		
				if(_c) then
				{

					mdhExplosivesActionsBriefingFnc =
					{
						profileNameSpace setVariable[_this#0,_this#1];
						systemChat (_this#2);
					};

					player createDiaryRecord
					[
						"MDH Mods",
						[
							_t,
							(
								'<br/>MDH Explosives Actions is a mod created by Moerderhoschi for Arma 3. (v2025-11-16)<br/>'
							+ '<br/>'
							+ 'you get the better holdAction menu entries to put down Explosives.<br/>'
							+ '<br/>'
							+ 'MDH Explosives Actions Modoptions:'
							+ '<br/><br/>'
							+ 'Show holdActions to place explosives: '
							+    '<font color="#33CC33"><execute expression = "[''mdhExplosivesActionsOn'',true,''MDH Explosives Actions On''] call mdhExplosivesActionsBriefingFnc">ON</execute></font color>'
							+ ' / <font color="#CC0000"><execute expression = "[''mdhExplosivesActionsOn'',false,''MDH Explosives Actions Off''] call mdhExplosivesActionsBriefingFnc">OFF</execute></font color>'							
							+ '<br/>'
							+ '<br/>If you have any question you can contact me at the steam workshop page.'
							+ '<br/>'
							+ 'Credits and Thanks:<br/>'
							+ 'Armed-Assault.de Crew  for many great ArmA moments in many years<br/>'
							+ 'BIS For Arma 3<br/>'
							)
						]
					]
				};
				true
			};
		};

		if (_env) then
		{
			_mdhFnc =
			{
				if (isNil "mdhMuzzleMags") then
				{
					_muzzles = getarray(configfile >> "CfgWeapons" >> "Put" >> "muzzles");
					_muzzleMags = [];
					{
						_mags = getArray(configfile >> "CfgWeapons" >> "Put" >> _x >> "magazines");
						_muzzle = _x;
						{
							_mag = _x;
							_muzzleMags pushBack [_mag, _muzzle, ("Put " + getText(configfile >> "CfgMagazines" >> _mag >> "displayName"))];
						} forEach _mags;
					} forEach _muzzles;
					mdhMuzzleMags = _muzzleMags;
				};

				player setUnitTrait ["ExplosiveSpecialist", true];
				{
					_t = (_x#2);
					_mag = (_x#0);
					_f = false;
					_b = player;
					{
						if (_t in (_b actionParams _x select 0)) then
						{
							_f = true;
						};																
					} forEach (actionIDs _b);
			
					if (!_f) then
					{
						_code =
						{
							_mag = (_this#3#0#0);
							_muzzle = (_this#3#0#1);
							_curWeap =  weaponState player select [0,3];
							player playActionNow "PutDown";
							player selectWeapon _muzzle;
							player fire [_muzzle, _muzzle, _mag];
							sleep 0.2;
							player selectWeapon _curWeap;
						};
	
						[
							_b
							,_t
							,"a3\ui_f_oldman\Data\IGUI\Cfg\HoldActions\destroy_ca.paa"
							,"a3\ui_f_oldman\Data\IGUI\Cfg\HoldActions\destroy_ca.paa"
							,"
								(profileNameSpace getVariable['mdhExplosivesActionsOn',false])
								&& {vehicle player == player}
								&& {"""+_mag+""" in magazines player}
							"
							,"true"
							,{}
							,{}
							,_code
							,{}
							,[_x]
							,1
							,-1
							,false
							,false
							,false
						] call mdhHoldActionAdd;
					};
				} forEach mdhMuzzleMags;
			};
		};

		if (hasInterface) then
		{
			if (isNil"mdhModDiaryEntries")then{mdhModDiaryEntries=[]; mdhModDiaryEntriesAdd = 1};
			mdhModDiaryEntries pushBack ["mdhExplosivesActions",_diary];
			uiSleep (2 + random 1);
			if (mdhModDiaryEntriesAdd == 1) then
			{
				mdhModDiaryEntriesAdd = 0;
				mdhModDiaryEntries sort false;
				{call (_x#1)} forEach mdhModDiaryEntries;
			};
		};

		sleep (1 + random 1);
		_diaryTimer = 10;
		while {missionNameSpace getVariable ["pMdhExplosivesActions",_defaultValue] == _valueCheck} do
		{
			if (_env) then {call _mdhFnc};
			sleep (7 + random 3);
			if (time > _diaryTimer && {hasInterface}) then {call _diary; _diaryTimer = time + 10};
		};
	};
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////
// MDH HOLD ACTION ADD FUNCTION(by Moerderhoschi with massive help of GenCoder8) - v2025-03-27
// fixed version of BIS_fnc_holdActionAdd
///////////////////////////////////////////////////////////////////////////////////////////////////////////
if (hasInterface) then
{
	GenCoder8_fixHoldActTimer =
	{
		params["_title","_iconIdle","_hint"];
		private _frameProgress = "frameprog";
		if(time > (missionNamespace getVariable [_frameProgress,-1])) then
		{
			missionNamespace setVariable [_frameProgress,time + 0.065];
			bis_fnc_holdAction_animationIdleFrame = (bis_fnc_holdAction_animationIdleFrame + 1) % 12;
		};
		private _var = "bis_fnc_holdAction_animationIdleTime_" + (str _target) + "_" + (str _actionID);
		if (time > (missionNamespace getVariable [_var,-1]) && {_eval}) then
		{
			missionNamespace setVariable [_var, time + 0.065];
			if (!bis_fnc_holdAction_running) then
			{
				[_originalTarget,_actionID,_title,_iconIdle,bis_fnc_holdAction_texturesIdle,bis_fnc_holdAction_animationIdleFrame,_hint] call bis_fnc_holdAction_showIcon;
			};
		};
	};

	_origFNC = preprocessFileLineNumbers "a3\functions_f\HoldActions\fn_holdActionAdd.sqf";
	_newFNC = ([_origFNC, "bis_fnc_holdAction_animationTimerCode", true] call BIS_fnc_splitString)#0;
	_newFNC = _newFNC + "GenCoder8_fixHoldActTimer";
	_newFNC = _newFNC + ([_origFNC, "bis_fnc_holdAction_animationTimerCode", true] call BIS_fnc_splitString)#1;
	_newFNC = _newFNC + "GenCoder8_fixHoldActTimer";
	_newFNC = _newFNC + ([_origFNC, "bis_fnc_holdAction_animationTimerCode", true] call BIS_fnc_splitString)#2;
	mdhHoldActionAdd = compile _newFNC;
};


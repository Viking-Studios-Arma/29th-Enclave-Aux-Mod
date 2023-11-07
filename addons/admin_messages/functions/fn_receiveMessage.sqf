params ["_sender","_UID","_message",["_receiveCondition",{[] call ENC_Core_admin_messages_fnc_isAdminOrZeus}],["_receiveConditionParams",[]]];

if !(hasInterface) exitWith {};
if !(_receiveConditionParams call _receiveCondition) exitWith {};
if (profileName == _sender) exitWith {};

if (isNil "ENC_Core_admin_messages_latestConvos") then {ENC_Core_admin_messages_latestConvos = []};
if (ENC_Core_admin_messages_latestConvos find [toUpper _sender,_UID] < 0) then {
	reverse ENC_Core_admin_messages_latestConvos;
	ENC_Core_admin_messages_latestConvos pushBack [toUpper _sender,_UID];
	reverse ENC_Core_admin_messages_latestConvos;
};
if (count ENC_Core_admin_messages_latestConvos > 5) then {ENC_Core_admin_messages_latestConvos resize 5};

[_sender,_message] call ENC_Core_admin_messages_fnc_displayMessage;

playSound "3DEN_notificationWarning";

params [["_ctrl",controlNull]];

private _text = if ([] call ENC_Core_admin_messages_fnc_isAdminOrZeus) then {
	localize "STR_ENC_Core_ADMIN_MESSAGES_SENDBOXTITLEADMIN"
} else {
	localize "STR_ENC_Core_ADMIN_MESSAGES_SENDBOXTITLEPLAYER"
};

_ctrl ctrlSetText _text

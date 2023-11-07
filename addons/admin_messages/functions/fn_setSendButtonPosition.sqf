#include "..\gui\defines.hpp"

params [["_ctrl",controlNull]];

if !([] call ENC_Core_admin_messages_fnc_isAdminOrZeus) exitWith {};

_ctrl ctrlSetPosition [ENC_Core_ADMIN_MESSAGES_TITLE_X,ENC_Core_ADMIN_MESSAGES_SENDBUTTON_Y_2];
_ctrl ctrlCommit 0;

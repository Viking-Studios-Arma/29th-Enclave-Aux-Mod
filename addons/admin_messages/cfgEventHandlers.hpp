class Extended_PostInit_EventHandlers {
	class ENC_Core_admin_messages {
		serverInit = "call compile preprocessFileLineNumbers '\x\VS_ENC\admin_messages\XEH_postInit.sqf'";
	};
};

class Extended_PreInit_EventHandlers {
	class ENC_Core_admin_messages {
		clientInit = "call compile preprocessFileLineNumbers '\x\VS_ENC\admin_messages\XEH_preClientInit.sqf'";
	};
};

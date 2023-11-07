#define ENC_Core_ADMIN_MESSAGES_IDC_SENDBUTTON		33500
#define ENC_Core_ADMIN_MESSAGES_IDC_CUSTOMCHATTEXT	33601

#define ENC_Core_ADMIN_MESSAGES_UISIZESMALL		0.55
#define ENC_Core_ADMIN_MESSAGES_UISCALE			((getResolution select 5)/ENC_Core_ADMIN_MESSAGES_UISIZESMALL)

#define ENC_Core_ADMIN_MESSAGES_SCALEFACTOR_Y		((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)
#define ENC_Core_ADMIN_MESSAGES_SCALESUMMAND_Y	(safezoneY)

#define ENC_Core_ADMIN_MESSAGES_SCALEFACTOR_X		(((safezoneW / safezoneH) min 1.2) / 40)
#define ENC_Core_ADMIN_MESSAGES_SCALESUMMAND_X	(safezoneX)

#define ENC_Core_ADMIN_MESSAGES_SPACER_Y			(0.1 * ENC_Core_ADMIN_MESSAGES_SCALEFACTOR_Y)

#define ENC_Core_ADMIN_MESSAGES_TITLE_Y			(1 * ENC_Core_ADMIN_MESSAGES_SCALEFACTOR_Y + ENC_Core_ADMIN_MESSAGES_SCALESUMMAND_Y)
#define ENC_Core_ADMIN_MESSAGES_TITLE_X			(1 * ENC_Core_ADMIN_MESSAGES_SCALEFACTOR_X + ENC_Core_ADMIN_MESSAGES_SCALESUMMAND_X)

#define ENC_Core_ADMIN_MESSAGES_ELEMENT_H			(1 * ENC_Core_ADMIN_MESSAGES_SCALEFACTOR_Y)
#define ENC_Core_ADMIN_MESSAGES_TOTAL_W			(15 * ENC_Core_ADMIN_MESSAGES_SCALEFACTOR_X)

#define ENC_Core_ADMIN_MESSAGES_EDITBOX_BG_Y		(ENC_Core_ADMIN_MESSAGES_TITLE_Y + ENC_Core_ADMIN_MESSAGES_ELEMENT_H + ENC_Core_ADMIN_MESSAGES_SPACER_Y)
#define ENC_Core_ADMIN_MESSAGES_EDITBOX_BG_H		((8 * ENC_Core_ADMIN_MESSAGES_ELEMENT_H) / ENC_Core_ADMIN_MESSAGES_UISCALE)

#define ENC_Core_ADMIN_MESSAGES_EDITBOX_PADDING_Y	((0.5 * ENC_Core_ADMIN_MESSAGES_ELEMENT_H) / ENC_Core_ADMIN_MESSAGES_UISCALE)
#define ENC_Core_ADMIN_MESSAGES_EDITBOX_H			(ENC_Core_ADMIN_MESSAGES_EDITBOX_BG_H - 2 * ENC_Core_ADMIN_MESSAGES_EDITBOX_PADDING_Y)
#define ENC_Core_ADMIN_MESSAGES_EDITBOX_Y			(ENC_Core_ADMIN_MESSAGES_EDITBOX_BG_Y + ENC_Core_ADMIN_MESSAGES_EDITBOX_PADDING_Y)

#define ENC_Core_ADMIN_MESSAGES_EDITBOX_PADDING_X	(0.5 * (((safezoneW / safezoneH) min 1.2) / 40))
#define ENC_Core_ADMIN_MESSAGES_EDITBOX_X			(ENC_Core_ADMIN_MESSAGES_TITLE_X + ENC_Core_ADMIN_MESSAGES_EDITBOX_PADDING_X)
#define ENC_Core_ADMIN_MESSAGES_EDITBOX_W			(ENC_Core_ADMIN_MESSAGES_TOTAL_W - 2 * ENC_Core_ADMIN_MESSAGES_EDITBOX_PADDING_X)

#define ENC_Core_ADMIN_MESSAGES_SENDBUTTON_Y		(ENC_Core_ADMIN_MESSAGES_EDITBOX_BG_Y + ENC_Core_ADMIN_MESSAGES_EDITBOX_BG_H + ENC_Core_ADMIN_MESSAGES_SPACER_Y)
#define ENC_Core_ADMIN_MESSAGES_SENDBUTTON_Y_2	(ENC_Core_ADMIN_MESSAGES_EDITBOX_BG_Y + ENC_Core_ADMIN_MESSAGES_EDITBOX_BG_H + 2*ENC_Core_ADMIN_MESSAGES_SPACER_Y + ENC_Core_ADMIN_MESSAGES_ELEMENT_H)

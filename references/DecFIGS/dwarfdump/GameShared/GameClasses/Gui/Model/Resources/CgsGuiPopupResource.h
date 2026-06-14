// CgsGuiPopupResource.h:81
extern const int32_t KI_MAX_PARAM_STRING_LENGTH = 64;

// CgsGuiPopupResource.h:100
extern const int32_t MKI_MAX_LENGTH_OF_STRING_ID = 32;

// CgsGuiPopupResource.h:101
extern const int32_t MKI_MAX_LENGTH_OF_FLASH_FRAME = 32;

// CgsGuiPopupResource.h:102
extern const int32_t MKI_MAX_MESSAGE_PARAM_COUNT = 2;

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsGuiPopupResource.h:34
	enum PopupStyle {
		E_POPUPSTYLE_CRASHNAV_WAIT = 0,
		E_POPUPSTYLE_CRASHNAV_OK = 1,
		E_POPUPSTYLE_CRASHNAV_OKCANCEL = 2,
		E_POPUPSTYLE_CRASHNAV_ONLINE_WAIT = 3,
		E_POPUPSTYLE_CRASHNAV_ONLINE_OK = 4,
		E_POPUPSTYLE_CRASHNAV_ONLINE_OKCANCEL = 5,
		E_POPUPSTYLE_INGAME_WAIT = 6,
		E_POPUPSTYLE_INGAME_OK = 7,
		E_POPUPSTYLE_INGAME_OKCANCEL = 8,
		E_POPUPSTYLE_INGAME_ONLINE_WAIT = 9,
		E_POPUPSTYLE_INGAME_ONLINE_OK = 10,
		E_POPUPSTYLE_INGAME_ONLINE_OKCANCEL = 11,
		E_POPUPSTYLE_INGAME_ONLINE_ENTER_FREEBURN = 12,
		E_POPUPSTYLE_CUSTOM = 13,
		E_POPUPSTYLE_COUNT = 14,
	}

	// CgsGuiPopupResource.h:54
	enum PopupParamTypes {
		E_POPUPPARAMTYPES_UNUSED = 0,
		E_POPUPPARAMTYPES_STRING = 1,
		E_POPUPPARAMTYPES_STRING_ID = 2,
		E_POPUPPARAMTYPES_COUNT = 3,
	}

	// CgsGuiPopupResource.h:64
	enum PopupIcons {
		E_POPUPICONS_INVISIBLE = 0,
		E_POPUPICONS_WARNING = 1,
		E_POPUPICONS_COUNT = 2,
	}

}

// CgsGuiPopupResource.h:78
struct CgsGui::GuiPopupParameter {
	// CgsGuiPopupResource.h:81
	extern const int32_t KI_MAX_PARAM_STRING_LENGTH = 64;

	// CgsGuiPopupResource.h:83
	CgsGui::PopupParamTypes meParamType;

	// CgsGuiPopupResource.h:84
	char[64] macParameter;

}

// CgsGuiPopupResource.h:97
struct CgsGui::GuiPopup {
	// CgsGuiPopupResource.h:100
	extern const int32_t MKI_MAX_LENGTH_OF_STRING_ID = 32;

	// CgsGuiPopupResource.h:101
	extern const int32_t MKI_MAX_LENGTH_OF_FLASH_FRAME = 32;

	// CgsGuiPopupResource.h:102
	extern const int32_t MKI_MAX_MESSAGE_PARAM_COUNT = 2;

	// CgsGuiPopupResource.h:104
	CgsID mNameId;

	// CgsGuiPopupResource.h:105
	char[13] macName;

	// CgsGuiPopupResource.h:107
	CgsGui::PopupStyle meStyle;

	// CgsGuiPopupResource.h:108
	CgsGui::PopupIcons meIcon;

	// CgsGuiPopupResource.h:110
	char[32] macTitleId;

	// CgsGuiPopupResource.h:112
	char[32] macMessageId;

	// CgsGuiPopupResource.h:113
	CgsGui::PopupParamTypes[2] maeMessageParams;

	// CgsGuiPopupResource.h:114
	int32_t miMessageParamsUsed;

	// CgsGuiPopupResource.h:116
	char[32] macButton1Id;

	// CgsGuiPopupResource.h:117
	CgsGui::PopupParamTypes meButton1Param;

	// CgsGuiPopupResource.h:118
	bool mbButton1ParamUsed;

	// CgsGuiPopupResource.h:120
	char[32] macButton2Id;

	// CgsGuiPopupResource.h:121
	CgsGui::PopupParamTypes meButton2Param;

	// CgsGuiPopupResource.h:122
	bool mbButton2ParamUsed;

public:
	// CgsGuiPopupResource.h:126
	void FixDown(bool);

}

// CgsGuiPopupResource.h:139
struct CgsGui::GuiPopupResource {
	// CgsGuiPopupResource.h:142
	GuiPopup ** mppPopupData;

	// CgsGuiPopupResource.h:143
	int16_t miPopupCount;

	// CgsGuiPopupResource.h:144
	int16_t miSizeOfPopupResource;

public:
	// CgsGuiPopupResource.h:148
	void FixUp(uint32_t);

	// CgsGuiPopupResource.h:152
	void FixDown(uint32_t, bool);

}

// CgsGuiShared.h:40
namespace CgsGui {
	// CgsGuiPopupResource.h:34
	enum PopupStyle {
		E_POPUPSTYLE_CRASHNAV_WAIT = 0,
		E_POPUPSTYLE_CRASHNAV_OK = 1,
		E_POPUPSTYLE_CRASHNAV_OKCANCEL = 2,
		E_POPUPSTYLE_CRASHNAV_ONLINE_WAIT = 3,
		E_POPUPSTYLE_CRASHNAV_ONLINE_OK = 4,
		E_POPUPSTYLE_CRASHNAV_ONLINE_OKCANCEL = 5,
		E_POPUPSTYLE_INGAME_WAIT = 6,
		E_POPUPSTYLE_INGAME_OK = 7,
		E_POPUPSTYLE_INGAME_OKCANCEL = 8,
		E_POPUPSTYLE_INGAME_ONLINE_WAIT = 9,
		E_POPUPSTYLE_INGAME_ONLINE_OK = 10,
		E_POPUPSTYLE_INGAME_ONLINE_OKCANCEL = 11,
		E_POPUPSTYLE_INGAME_ONLINE_ENTER_FREEBURN = 12,
		E_POPUPSTYLE_CUSTOM = 13,
		E_POPUPSTYLE_COUNT = 14,
	}

	// CgsGuiPopupResource.h:54
	enum PopupParamTypes {
		E_POPUPPARAMTYPES_UNUSED = 0,
		E_POPUPPARAMTYPES_STRING = 1,
		E_POPUPPARAMTYPES_STRING_ID = 2,
		E_POPUPPARAMTYPES_COUNT = 3,
	}

	// CgsGuiPopupResource.h:64
	enum PopupIcons {
		E_POPUPICONS_INVISIBLE = 0,
		E_POPUPICONS_WARNING = 1,
		E_POPUPICONS_COUNT = 2,
	}

}

// CgsOpaqueBuffer.h:30
namespace CgsGui {
	// CgsGuiPopupResource.h:34
	enum PopupStyle {
		E_POPUPSTYLE_CRASHNAV_WAIT = 0,
		E_POPUPSTYLE_CRASHNAV_OK = 1,
		E_POPUPSTYLE_CRASHNAV_OKCANCEL = 2,
		E_POPUPSTYLE_CRASHNAV_ONLINE_WAIT = 3,
		E_POPUPSTYLE_CRASHNAV_ONLINE_OK = 4,
		E_POPUPSTYLE_CRASHNAV_ONLINE_OKCANCEL = 5,
		E_POPUPSTYLE_INGAME_WAIT = 6,
		E_POPUPSTYLE_INGAME_OK = 7,
		E_POPUPSTYLE_INGAME_OKCANCEL = 8,
		E_POPUPSTYLE_INGAME_ONLINE_WAIT = 9,
		E_POPUPSTYLE_INGAME_ONLINE_OK = 10,
		E_POPUPSTYLE_INGAME_ONLINE_OKCANCEL = 11,
		E_POPUPSTYLE_INGAME_ONLINE_ENTER_FREEBURN = 12,
		E_POPUPSTYLE_CUSTOM = 13,
		E_POPUPSTYLE_COUNT = 14,
	}

	// CgsGuiPopupResource.h:54
	enum PopupParamTypes {
		E_POPUPPARAMTYPES_UNUSED = 0,
		E_POPUPPARAMTYPES_STRING = 1,
		E_POPUPPARAMTYPES_STRING_ID = 2,
		E_POPUPPARAMTYPES_COUNT = 3,
	}

	// CgsGuiPopupResource.h:64
	enum PopupIcons {
		E_POPUPICONS_INVISIBLE = 0,
		E_POPUPICONS_WARNING = 1,
		E_POPUPICONS_COUNT = 2,
	}

}


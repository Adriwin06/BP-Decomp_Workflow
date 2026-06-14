// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsGuiHudMessage.h:49
	const StringList[4] KAC_HUD_MESSAGE_GROUP_NAMES;

}

// CgsGuiHudMessage.h:97
extern const int32_t KI_MAX_PARAM_STRING_LENGTH = 64;

// CgsGuiHudMessage.h:116
extern const int32_t KI_MAX_NUM_STRINGS = 3;

// CgsGuiHudMessage.h:117
extern const int32_t KI_STRING_ID_LENGTH = 64;

// CgsGuiHudMessage.h:118
extern const int32_t KI_FLASH_FRAME_LABEL_LENGTH = 32;

// CgsGuiHudMessage.h:119
extern const int32_t KI_MESSAGE_ID_LENGTH = 13;

// CgsGuiHudMessage.h:120
extern const int32_t KI_MAX_PARAMS_PER_STRING = 4;

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsGuiHudMessage.h:37
	enum HudMessageGroup {
		E_HUDMESSAGEGROUP_ALL = 0,
		E_HUDMESSAGEGROUP_ONLINE_LIVEREVENGE = 1,
		E_HUDMESSAGEGROUP_ONLINE_DIRTY_TRICKS = 2,
		E_HUDMESSAGEGROUP_INGAMEMESSAGES = 3,
		E_HUDMESSAGEGROUP_COUNT = 4,
	}

	// CgsGuiHudMessage.h:59
	enum HudMessageParamTypes {
		E_HUDMESSAGEPARAMTYPES_UNUSED = 0,
		E_HUDMESSAGEPARAMTYPES_STRING = 1,
		E_HUDMESSAGEPARAMTYPES_INT = 2,
		E_HUDMESSAGEPARAMTYPES_FLOAT = 3,
		E_HUDMESSAGEPARAMTYPES_MONEY = 4,
		E_HUDMESSAGEPARAMTYPES_TIME = 5,
		E_HUDMESSAGEPARAMTYPES_STRINGID = 6,
		E_HUDMESSAGEPARAMTYPES_COUNT = 7,
	}

	// CgsGuiHudMessage.h:49
	const StringList[4] KAC_HUD_MESSAGE_GROUP_NAMES;

}

// CgsGuiHudMessage.h:95
struct CgsGui::HudMessageParameter {
	// CgsGuiHudMessage.h:97
	extern const int32_t KI_MAX_PARAM_STRING_LENGTH = 64;

	// CgsGuiHudMessage.h:99
	CgsGui::HudMessageParamTypes meParamType;

	// CgsGuiHudMessage.h:100
	char[64] macParameter;

}

// CgsGuiHudMessage.h:113
struct CgsGui::GuiHudMessageData {
	// CgsGuiHudMessage.h:116
	extern const int32_t KI_MAX_NUM_STRINGS = 3;

	// CgsGuiHudMessage.h:117
	extern const int32_t KI_STRING_ID_LENGTH = 64;

	// CgsGuiHudMessage.h:118
	extern const int32_t KI_FLASH_FRAME_LABEL_LENGTH = 32;

	// CgsGuiHudMessage.h:119
	extern const int32_t KI_MESSAGE_ID_LENGTH = 13;

	// CgsGuiHudMessage.h:120
	extern const int32_t KI_MAX_PARAMS_PER_STRING = 4;

	// CgsGuiHudMessage.h:122
	char[3][64] maacStringId;

	// CgsGuiHudMessage.h:124
	char[32] macMessageStyle;

	// CgsGuiHudMessage.h:125
	char[32] macDefaultIcon;

	// CgsGuiHudMessage.h:127
	char[13] macMessageId;

	// CgsGuiHudMessage.h:128
	CgsID mMessageIdHash;

	// CgsGuiHudMessage.h:130
	uint32_t muAvailabilityBitSet;

	// CgsGuiHudMessage.h:132
	float32_t mfDuration;

	// CgsGuiHudMessage.h:133
	float32_t mfTimeToWait;

	// CgsGuiHudMessage.h:134
	int32_t miPriority;

	// CgsGuiHudMessage.h:135
	int32_t miForceRemoveThreshold;

	// CgsGuiHudMessage.h:136
	CgsGui::HudMessageGroup meMessageGroup;

	// CgsGuiHudMessage.h:138
	int32_t[3] maiParamCount;

	// CgsGuiHudMessage.h:140
	CgsGui::HudMessageParamTypes[3][4] maaeParams;

public:
	// CgsGuiHudMessage.h:144
	void EndianSwapAll();

	// CgsGuiHudMessage.h:148
	void EndianSwapEnum(uint32_t *) const;

}

// CgsGuiHudMessage.h:161
struct CgsGui::GuiHudMessageResource {
	// CgsGuiHudMessage.h:164
	GuiHudMessageData ** mppHudMessageData;

	// CgsGuiHudMessage.h:165
	int32_t miSizeOfHudMessageResource;

	// CgsGuiHudMessage.h:166
	int32_t miHudMessageCount;

public:
	// CgsGuiHudMessage.h:170
	void FixUp(uint32_t);

	// CgsGuiHudMessage.h:174
	void FixDown(uint32_t, bool);

	// CgsGuiHudMessage.h:178
	bool ConvertGroupStringToEnum(const char *, CgsGui::HudMessageGroup *);

	// CgsGuiHudMessage.h:182
	bool ConvertStringParamTypeStringToEnum(const char *, CgsGui::HudMessageParamTypes *);

}

// CgsGuiShared.h:40
namespace CgsGui {
	// CgsGuiHudMessage.h:37
	enum HudMessageGroup {
		E_HUDMESSAGEGROUP_ALL = 0,
		E_HUDMESSAGEGROUP_ONLINE_LIVEREVENGE = 1,
		E_HUDMESSAGEGROUP_ONLINE_DIRTY_TRICKS = 2,
		E_HUDMESSAGEGROUP_INGAMEMESSAGES = 3,
		E_HUDMESSAGEGROUP_COUNT = 4,
	}

	// CgsGuiHudMessage.h:59
	enum HudMessageParamTypes {
		E_HUDMESSAGEPARAMTYPES_UNUSED = 0,
		E_HUDMESSAGEPARAMTYPES_STRING = 1,
		E_HUDMESSAGEPARAMTYPES_INT = 2,
		E_HUDMESSAGEPARAMTYPES_FLOAT = 3,
		E_HUDMESSAGEPARAMTYPES_MONEY = 4,
		E_HUDMESSAGEPARAMTYPES_TIME = 5,
		E_HUDMESSAGEPARAMTYPES_STRINGID = 6,
		E_HUDMESSAGEPARAMTYPES_COUNT = 7,
	}

	// CgsGuiHudMessage.h:49
	const StringList[4] KAC_HUD_MESSAGE_GROUP_NAMES;

}

// CgsGuiShared.h:40
namespace CgsGui {
	// CgsGuiHudMessage.h:49
	const StringList[4] KAC_HUD_MESSAGE_GROUP_NAMES;

}

// CgsOpaqueBuffer.h:30
namespace CgsGui {
	// CgsGuiHudMessage.h:37
	enum HudMessageGroup {
		E_HUDMESSAGEGROUP_ALL = 0,
		E_HUDMESSAGEGROUP_ONLINE_LIVEREVENGE = 1,
		E_HUDMESSAGEGROUP_ONLINE_DIRTY_TRICKS = 2,
		E_HUDMESSAGEGROUP_INGAMEMESSAGES = 3,
		E_HUDMESSAGEGROUP_COUNT = 4,
	}

	// CgsGuiHudMessage.h:59
	enum HudMessageParamTypes {
		E_HUDMESSAGEPARAMTYPES_UNUSED = 0,
		E_HUDMESSAGEPARAMTYPES_STRING = 1,
		E_HUDMESSAGEPARAMTYPES_INT = 2,
		E_HUDMESSAGEPARAMTYPES_FLOAT = 3,
		E_HUDMESSAGEPARAMTYPES_MONEY = 4,
		E_HUDMESSAGEPARAMTYPES_TIME = 5,
		E_HUDMESSAGEPARAMTYPES_STRINGID = 6,
		E_HUDMESSAGEPARAMTYPES_COUNT = 7,
	}

	// CgsGuiHudMessage.h:49
	const StringList[4] KAC_HUD_MESSAGE_GROUP_NAMES;

}


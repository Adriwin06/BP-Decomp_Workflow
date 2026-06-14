// BrnHudMessageController.h:56
struct BrnResource::HudMessageEvent {
	// BrnHudMessageController.h:59
	extern const int32_t KI_FLASH_FRAME_LABEL_LENGTH = 32;

	// BrnHudMessageController.h:60
	extern const int32_t KI_STRING_ID_LENGTH = 64;

	// BrnHudMessageController.h:61
	extern const int32_t KI_MAX_PARAMS_PER_STRING = 4;

	// BrnHudMessageController.h:62
	extern const int32_t KI_MAX_NUM_STRINGS = 3;

	// BrnHudMessageController.h:64
	CgsID mHudMessageId;

	// BrnHudMessageController.h:65
	int32_t miPriority;

	// BrnHudMessageController.h:66
	int32_t miForceRemoveThreshold;

	// BrnHudMessageController.h:67
	int32_t miGroup;

	// BrnHudMessageController.h:68
	float32_t mfDuration;

	// BrnHudMessageController.h:70
	char[3][64] maacString;

	// BrnHudMessageController.h:71
	HudMessageParameter[3][4] maacStringParam;

	// BrnHudMessageController.h:73
	int32_t[3] maiStringParamCount;

	// BrnHudMessageController.h:75
	char[32] macMessageStyle;

	// BrnHudMessageController.h:76
	char[32] macIcon;

}

// BrnHudMessageController.h:88
struct BrnResource::HudMessageController {
	// BrnHudMessageController.h:91
	extern const uint32_t KU_MAX_NUMBER_OF_MESSAGES = 300;

private:
	// BrnHudMessageController.h:161
	bool mbMessagesUsed;

	// BrnHudMessageController.h:163
	ResourcePtr<CgsGui::GuiHudMessageResource> mMessagesPtr;

public:
	// BrnHudMessageController.h:95
	void Construct();

	// BrnHudMessageController.h:101
	bool GetMessage(const GuiHudMessage *, HudMessageEvent *) const;

	// BrnHudMessageController.h:105
	void AddMessages(const AcquireResourceResponse *);

	// BrnHudMessageController.h:110
	int32_t GetIndexFromMessageHash(CgsID) const;

	// BrnHudMessageController.h:114
	float32_t GetMessageTimeToWaitFromIndex(int32_t) const;

	// BrnHudMessageController.h:118
	uint32_t GetMessageAvailabilityBitset(int32_t) const;

	// BrnHudMessageController.h:122
	bool IsMessageAHigherPriority(CgsID, CgsID) const;

	// BrnHudMessageController.h:131
	CgsID GetMessageHashFromIndex(int32_t) const;

	// BrnHudMessageController.h:137
	int32_t GetMessageParamCount(int32_t, int32_t) const;

	// BrnHudMessageController.h:144
	CgsGui::HudMessageParamTypes GetMessageParamType(int32_t, int32_t, int32_t) const;

	// BrnHudMessageController.h:148
	int32_t GetMessageLoadedCount() const;

	// BrnHudMessageController.h:152
	int32_t GetNextMessageIdInGroup(int32_t, CgsGui::HudMessageGroup) const;

	// BrnHudMessageController.h:156
	int32_t GetPreviousMessageIdInGroup(int32_t, CgsGui::HudMessageGroup) const;

}

// BrnHudMessageController.h:59
extern const int32_t KI_FLASH_FRAME_LABEL_LENGTH = 32;

// BrnHudMessageController.h:60
extern const int32_t KI_STRING_ID_LENGTH = 64;

// BrnHudMessageController.h:61
extern const int32_t KI_MAX_PARAMS_PER_STRING = 4;

// BrnHudMessageController.h:62
extern const int32_t KI_MAX_NUM_STRINGS = 3;

// BrnHudMessageController.h:91
extern const uint32_t KU_MAX_NUMBER_OF_MESSAGES = 300;

// BrnHudMessageController.h:88
struct BrnResource::HudMessageController {
	// BrnHudMessageController.h:91
	extern const uint32_t KU_MAX_NUMBER_OF_MESSAGES = 300;

private:
	// BrnHudMessageController.h:161
	bool mbMessagesUsed;

	// BrnHudMessageController.h:163
	ResourcePtr<CgsGui::GuiHudMessageResource> mMessagesPtr;

public:
	// BrnHudMessageController.h:95
	void Construct();

	// BrnHudMessageController.h:101
	// Declaration
	bool GetMessage(const GuiHudMessage *, HudMessageEvent *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnHudMessageController.cpp:75
		using namespace CgsDev::Message;

		// BrnHudMessageController.cpp:124
		using namespace CgsDev::Message;

	}

	// BrnHudMessageController.h:105
	void AddMessages(const AcquireResourceResponse *);

	// BrnHudMessageController.h:110
	int32_t GetIndexFromMessageHash(CgsID) const;

	// BrnHudMessageController.h:114
	float32_t GetMessageTimeToWaitFromIndex(int32_t) const;

	// BrnHudMessageController.h:118
	uint32_t GetMessageAvailabilityBitset(int32_t) const;

	// BrnHudMessageController.h:122
	bool IsMessageAHigherPriority(CgsID, CgsID) const;

	// BrnHudMessageController.h:131
	CgsID GetMessageHashFromIndex(int32_t) const;

	// BrnHudMessageController.h:137
	int32_t GetMessageParamCount(int32_t, int32_t) const;

	// BrnHudMessageController.h:144
	CgsGui::HudMessageParamTypes GetMessageParamType(int32_t, int32_t, int32_t) const;

	// BrnHudMessageController.h:148
	int32_t GetMessageLoadedCount() const;

	// BrnHudMessageController.h:152
	int32_t GetNextMessageIdInGroup(int32_t, CgsGui::HudMessageGroup) const;

	// BrnHudMessageController.h:156
	int32_t GetPreviousMessageIdInGroup(int32_t, CgsGui::HudMessageGroup) const;

}


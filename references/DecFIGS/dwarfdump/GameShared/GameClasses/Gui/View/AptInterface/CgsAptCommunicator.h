// CgsAptCommunicator.h:95
struct CgsGui::KeyValue {
	// CgsAptCommunicator.h:96
	extern const int32_t KI_MAX_VALUE_LENGTH = 128;

	// CgsAptCommunicator.h:97
	uint32_t mHashedKey;

	// CgsAptCommunicator.h:98
	char[128] macValue;

}

// CgsAptCommunicator.h:102
struct CgsGui::AptComponentList {
	// CgsAptCommunicator.h:104
	extern const int32_t KU_MAX_COMPONENTS = 256;

	// CgsAptCommunicator.h:105
	extern const int32_t KI_MAX_DATA_PER_COMPONENT = 32;

private:
	// CgsAptCommunicator.h:132
	KeyValue *[256][32] maapComponentData;

	// CgsAptCommunicator.h:133
	AptValue *[256] mapComponentReference;

	// CgsAptCommunicator.h:134
	uint32_t[256] mauHashedName;

	// CgsAptCommunicator.h:135
	uint32_t[256] mauHashedReferenceName;

	// CgsAptCommunicator.h:136
	uint8_t[256] maiNumUsedData;

	// CgsAptCommunicator.h:139
	extern const int32_t KI_COMPONENT_NAME_LENGTH = 256;

	// CgsAptCommunicator.h:140
	char[256][256] maacName;

public:
	// CgsAptCommunicator.h:107
	void Construct();

	// CgsAptCommunicator.h:109
	KeyValue * GetKeyValue(int32_t, int32_t) const;

	// CgsAptCommunicator.h:110
	AptValue * GetAptValue(int32_t) const;

	// CgsAptCommunicator.h:111
	uint8_t GetUsedData(int32_t) const;

	// CgsAptCommunicator.h:112
	uint32_t GetHashedName(int32_t) const;

	// CgsAptCommunicator.h:113
	uint32_t GetHashedReferenceName(int32_t) const;

	// CgsAptCommunicator.h:115
	void SetKeyValue(int32_t, int32_t, KeyValue *);

	// CgsAptCommunicator.h:116
	void SetAptValue(int32_t, AptValue *);

	// CgsAptCommunicator.h:117
	void SetUsedData(int32_t, uint8_t);

	// CgsAptCommunicator.h:118
	void SetHashedName(int32_t, uint32_t);

	// CgsAptCommunicator.h:119
	void SetHashedReferenceName(int32_t, uint32_t);

	// CgsAptCommunicator.h:121
	void MoveComponent(int32_t, int32_t);

	// CgsAptCommunicator.h:122
	void ClearComponent(int32_t);

	// CgsAptCommunicator.h:126
	const char * GetName(int32_t);

	// CgsAptCommunicator.h:127
	void SetName(int32_t, const char *);

}

// CgsAptCommunicator.h:85
extern const int32_t KI_EVENT_NAME_LENGTH = 32;

// CgsAptCommunicator.h:96
extern const int32_t KI_MAX_VALUE_LENGTH = 128;

// CgsAptCommunicator.h:104
extern const int32_t KU_MAX_COMPONENTS = 256;

// CgsAptCommunicator.h:105
extern const int32_t KI_MAX_DATA_PER_COMPONENT = 32;

// CgsAptCommunicator.h:139
extern const int32_t KI_COMPONENT_NAME_LENGTH = 256;

// CgsAptCommunicator.h:393
extern const int32_t KI_MAX_KEYVALUES = 256;

// CgsAptCommunicator.h:400
extern const int32_t KI_NUM_FUNCS = 6;

// CgsAptCommunicator.h:401
extern char[] KAC_NAME;

// CgsAptCommunicator.h:406
extern AptComponentList mAptComponentList;

// CgsAptCommunicator.h:408
extern InputBuffer::GuiEventQueue mOutAptTriggerEvents;

// CgsAptCommunicator.h:413
extern bool mbCircleButtonAsSelect;

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct GuiEventAptTrigger {
		// CgsAptCommunicator.h:54
		enum AptEventType {
			E_APT_EVENT_START = 0,
			E_APT_EVENT_ONLOAD = 1,
			E_APT_EVENT_POSTFX = 2,
			E_APT_EVENT_FRAME_TRIGGER = 3,
			E_APT_EVENT_TRANSITION_COMPLETE = 4,
			E_APT_EVENT_NUM = 5,
		}

	}

	// Declaration
	struct AptCommunicator {
	private:
		// CgsAptCommunicator.h:393
		extern const int32_t KI_MAX_KEYVALUES = 256;

		// CgsAptCommunicator.h:400
		extern const int32_t KI_NUM_FUNCS = 6;

		// CgsAptCommunicator.h:401
		extern char[] KAC_NAME;

		// CgsAptCommunicator.h:406
		extern AptComponentList mAptComponentList;

		// CgsAptCommunicator.h:408
		extern InputBuffer::GuiEventQueue mOutAptTriggerEvents;

		// CgsAptCommunicator.h:413
		extern bool mbCircleButtonAsSelect;

	}

}

// CgsAptCommunicator.h:49
struct CgsGui::GuiEventAptTrigger : public GuiEvent<21> {
	// CgsAptCommunicator.h:66
	CgsGui::GuiEventAptTrigger::AptEventType meEventType;

	// CgsAptCommunicator.h:67
	int32_t miUniqueId;

	// CgsAptCommunicator.h:68
	const char * mpacComponentName;

	// CgsAptCommunicator.h:69
	uint32_t muComponentNameHash;

	// CgsAptCommunicator.h:70
	AptValue * mpComponentRef;

}

// CgsAptCommunicator.h:83
struct CgsGui::GuiEventSoundTrigger : public GuiEvent<22> {
	// CgsAptCommunicator.h:85
	extern const int32_t KI_EVENT_NAME_LENGTH = 32;

	// CgsAptCommunicator.h:87
	char[32] macTypeName;

	// CgsAptCommunicator.h:89
	char[32] macActionName;

	// CgsAptCommunicator.h:90
	char[32] macLabel;

	// CgsAptCommunicator.h:91
	int miLayer;

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct AptCommunicator {
	private:
		// CgsAptCommunicator.h:393
		extern const int32_t KI_MAX_KEYVALUES = 256;

		// CgsAptCommunicator.h:400
		extern const int32_t KI_NUM_FUNCS = 6;

		// CgsAptCommunicator.h:401
		extern char[] KAC_NAME;

		// CgsAptCommunicator.h:406
		extern AptComponentList mAptComponentList;

		// CgsAptCommunicator.h:408
		extern InputBuffer::GuiEventQueue mOutAptTriggerEvents;

		// CgsAptCommunicator.h:413
		extern bool mbCircleButtonAsSelect;

	}

}

// CgsGuiShared.h:40
namespace CgsGui {
	// Declaration
	struct GuiEventAptTrigger {
		// CgsAptCommunicator.h:54
		enum AptEventType {
			E_APT_EVENT_START = 0,
			E_APT_EVENT_ONLOAD = 1,
			E_APT_EVENT_POSTFX = 2,
			E_APT_EVENT_FRAME_TRIGGER = 3,
			E_APT_EVENT_TRANSITION_COMPLETE = 4,
			E_APT_EVENT_NUM = 5,
		}

	}

	// Declaration
	struct AptCommunicator {
	public:
		// CgsAptCommunicator.h:510
		const char * GetComponentNameForHash(uint32_t);

	private:
		// CgsAptCommunicator.h:393
		extern const int32_t KI_MAX_KEYVALUES = 256;

		// CgsAptCommunicator.h:400
		extern const int32_t KI_NUM_FUNCS = 6;

		// CgsAptCommunicator.h:401
		extern char[] KAC_NAME;

		// CgsAptCommunicator.h:406
		extern AptComponentList mAptComponentList;

		// CgsAptCommunicator.h:408
		extern InputBuffer::GuiEventQueue mOutAptTriggerEvents;

		// CgsAptCommunicator.h:413
		extern bool mbCircleButtonAsSelect;

	}

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct GuiEventAptTrigger {
		// CgsAptCommunicator.h:54
		enum AptEventType {
			E_APT_EVENT_START = 0,
			E_APT_EVENT_ONLOAD = 1,
			E_APT_EVENT_POSTFX = 2,
			E_APT_EVENT_FRAME_TRIGGER = 3,
			E_APT_EVENT_TRANSITION_COMPLETE = 4,
			E_APT_EVENT_NUM = 5,
		}

	}

}

// CgsAptCommunicator.h:303
struct CgsGui::AptCommunicator : public AptExtObject {
	// CgsAptCommunicator.cpp:143
	extern AptNativeFunction * psMethod_SendAptEvent;

	// CgsAptCommunicator.cpp:220
	extern AptNativeFunction * psMethod_SendAptSoundEvent;

	// CgsAptCommunicator.cpp:295
	extern AptNativeFunction * psMethod_SetCommunicationObject;

	// CgsAptCommunicator.cpp:313
	extern AptNativeFunction * psMethod_GetComponentData;

	// CgsAptCommunicator.cpp:360
	extern AptNativeFunction * psMethod_GetPlatformString;

	// CgsAptCommunicator.cpp:383
	extern AptNativeFunction * psMethod_GetCircleButtonAsSelect;

private:
	// CgsAptCommunicator.h:393
	extern const int32_t KI_MAX_KEYVALUES = 256;

	// CgsAptCommunicator.cpp:43
	extern KeyValue[256] maKeyValuePool;

	// CgsAptCommunicator.cpp:44
	extern int32_t miNumUsedKeyValues;

	// CgsAptCommunicator.cpp:50
	extern int32_t miMaxNumUsedKeyValues;

	// CgsAptCommunicator.h:400
	extern const int32_t KI_NUM_FUNCS = 6;

	// CgsAptCommunicator.cpp:41
	extern const char[17] KAC_NAME;

	// CgsAptCommunicator.cpp:42
	extern AptValue * mpAptInternalCommunicator;

	// CgsAptCommunicator.cpp:46
	extern uint32_t muNumActivecomponents;

	// CgsAptCommunicator.cpp:47
	extern AptComponentList mAptComponentList;

	// CgsAptCommunicator.cpp:45
	extern InputBuffer::GuiEventQueue mOutAptTriggerEvents;

	// CgsAptCommunicator.cpp:53
	extern const char *[9] mpacReservedVariableNames;

	// CgsAptCommunicator.cpp:66
	extern uint32_t[9] mauReservedVariablesHashes;

	// CgsAptCommunicator.cpp:68
	extern bool mbCircleButtonAsSelect;

public:
	void AptCommunicator(const AptCommunicator &);

	// CgsAptCommunicator.h:466
	void AptCommunicator();

	// CgsAptCommunicator.cpp:96
	virtual void ~AptCommunicator();

	// CgsAptCommunicator.cpp:143
	// Declaration
	AptValue * sMethod_SendAptEvent(AptValue *, int) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAptCommunicator.cpp:177
		using namespace CgsDev::Message;

		// CgsAptCommunicator.cpp:181
		using namespace CgsDev::Message;

	}

	// CgsAptCommunicator.cpp:220
	// Declaration
	AptValue * sMethod_SendAptSoundEvent(AptValue *, int) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAptCommunicator.cpp:245
		using namespace CgsDev::Message;

		// CgsAptCommunicator.cpp:267
		using namespace CgsDev::Message;

	}

	// CgsAptCommunicator.cpp:295
	AptValue * sMethod_SetCommunicationObject(AptValue *, int);

	// CgsAptCommunicator.cpp:313
	AptValue * sMethod_GetComponentData(AptValue *, int);

	// CgsAptCommunicator.cpp:360
	AptValue * sMethod_GetPlatformString(AptValue *, int);

	// CgsAptCommunicator.cpp:383
	// Declaration
	AptValue * sMethod_GetCircleButtonAsSelect(AptValue *, int) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAptCommunicator.cpp:385
		using namespace CgsDev::Message;

	}

	// CgsAptCommunicator.cpp:131
	virtual const char * GetName();

	// CgsAptCommunicator.cpp:108
	virtual void Initialize();

	// CgsAptCommunicator.cpp:406
	// Declaration
	void UpdateComponent(const char *, const char *, const char *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAptCommunicator.cpp:468
		using namespace CgsDev::Message;

		// CgsAptCommunicator.cpp:471
		using namespace CgsDev::Message;

		// CgsAptCommunicator.cpp:472
		using namespace CgsDev::Message;

		// CgsAptCommunicator.cpp:473
		using namespace CgsDev::Message;

		// CgsAptCommunicator.cpp:478
		using namespace CgsDev::Message;

		// CgsAptCommunicator.cpp:479
		using namespace CgsDev::Message;

		// CgsAptCommunicator.cpp:480
		using namespace CgsDev::Message;

		// CgsAptCommunicator.cpp:481
		using namespace CgsDev::Message;

	}

	// CgsAptCommunicator.cpp:525
	void UpdateComponentReserved(const char *, const char *, const char *);

	// CgsAptCommunicator.cpp:617
	void UpdateAllComponents();

	// CgsAptCommunicator.cpp:665
	void HideAllComponents();

	// CgsAptCommunicator.cpp:693
	void ShowAllComponents();

	// CgsAptCommunicator.h:480
	InputBuffer::GuiEventQueue * GetOutAptTriggerEvents();

	// CgsAptCommunicator.cpp:836
	void RemoveExpiredAptComponent(AptValue *);

	// CgsAptCommunicator.h:494
	void SetCircleButtonAsSelect(bool);

	// CgsAptCommunicator.h:510
	const char * GetComponentNameForHash(uint32_t);

private:
	// CgsAptCommunicator.cpp:721
	// Declaration
	int32_t AddNewAptComponent(AptValue *, const char *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAptCommunicator.cpp:745
		using namespace CgsDev::Message;

	}

	// CgsAptCommunicator.cpp:779
	int32_t FindAptComponent(const char *);

	// CgsAptCommunicator.cpp:808
	int32_t FindAptComponent(AptValue *);

	// CgsAptCommunicator.cpp:866
	bool CheckReferenceName(int32_t);

	// CgsAptCommunicator.cpp:929
	void CalculateReservedVariableHashes();

}

// CgsOpaqueBuffer.h:30
namespace CgsGui {
	// Declaration
	struct GuiEventAptTrigger {
		// CgsAptCommunicator.h:54
		enum AptEventType {
			E_APT_EVENT_START = 0,
			E_APT_EVENT_ONLOAD = 1,
			E_APT_EVENT_POSTFX = 2,
			E_APT_EVENT_FRAME_TRIGGER = 3,
			E_APT_EVENT_TRANSITION_COMPLETE = 4,
			E_APT_EVENT_NUM = 5,
		}

	}

	// Declaration
	struct AptCommunicator {
	private:
		// CgsAptCommunicator.h:393
		extern const int32_t KI_MAX_KEYVALUES = 256;

		// CgsAptCommunicator.h:400
		extern const int32_t KI_NUM_FUNCS = 6;

		// CgsAptCommunicator.h:401
		extern char[] KAC_NAME;

		// CgsAptCommunicator.h:406
		extern AptComponentList mAptComponentList;

		// CgsAptCommunicator.h:408
		extern InputBuffer::GuiEventQueue mOutAptTriggerEvents;

		// CgsAptCommunicator.h:413
		extern bool mbCircleButtonAsSelect;

	}

}


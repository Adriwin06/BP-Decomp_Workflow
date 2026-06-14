// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct HudMessageDirector {
		// BrnGuiHudMessageDirector.h:114
		enum EPayback {
			E_PAYBACK_NONE = 0,
			E_PAYBACK_AGGRESSOR = 1,
			E_PAYBACK_VICTIM = 2,
			E_PAYBACK_COUNT = 3,
		}

	}

}

// BrnGuiHudMessageDirector.h:51
struct BrnGui::HudMessageDirector {
private:
	// BrnGuiHudMessageDirector.h:122
	extern const float32_t KF_MINIMUM_BLACK_BAR_STOP_SIZE;

	// BrnGuiHudMessageDirector.h:124
	extern CgsID[] KA_PAYBACK_EXEMPT_MSGS;

	// BrnGuiHudMessageDirector.h:125
	extern const int32_t KI_NUM_PAYBACK_EXEMPT_MSGS;

	// BrnGuiHudMessageDirector.h:127
	extern CgsID[] KA_BLACK_BAR_EXEMPT_MSGS;

	// BrnGuiHudMessageDirector.h:128
	extern const int32_t KI_NUM_BLACK_BAR_EXEMPT_MSGS;

	// BrnGuiHudMessageDirector.h:130
	InputBuffer::GuiEventQueue mHudMessageQueue;

	// BrnGuiHudMessageDirector.h:131
	CgsGui::ModelModule * mpModelModule;

	// BrnGuiHudMessageDirector.h:132
	const HudMessageController * mpController;

	// BrnGuiHudMessageDirector.h:134
	const BrnGui::GuiCache * mpGuiCache;

	// BrnGuiHudMessageDirector.h:136
	bool mbLastFrameHudMessageState;

	// BrnGuiHudMessageDirector.h:137
	bool mbMessagePending;

	// BrnGuiHudMessageDirector.h:138
	GuiHudMessage mCachedMessage;

	// BrnGuiHudMessageDirector.h:140
	uint64_t[300] mauMessagesLastTriggered;

	// BrnGuiHudMessageDirector.h:145
	bool mbStopFlagBlackBar;

	// BrnGuiHudMessageDirector.h:146
	float32_t mfBlackBarSize;

	// BrnGuiHudMessageDirector.h:147
	bool mbStopFlagCamera;

	// BrnGuiHudMessageDirector.h:148
	BrnGui::HudMessageDirector::EPayback meStopFlagPaybackSequence;

public:
	// BrnGuiHudMessageDirector.h:58
	void Construct(CgsGui::ModelModule *, const BrnGui::GuiCache *);

	// BrnGuiHudMessageDirector.h:62
	void Update(InputBuffer *);

	// BrnGuiHudMessageDirector.h:66
	void SetController(const HudMessageController *);

	// BrnGuiHudMessageDirector.h:70
	void AddMessage(const GuiHudMessage *, bool);

	// BrnGuiHudMessageDirector.h:75
	void SetBlackBarSize(float32_t);

	// BrnGuiHudMessageDirector.h:80
	// Declaration
	void SetCameraSequenceFilter(bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiHudMessageDirector.h:196
		using namespace CgsDev::Message;

	}

	// BrnGuiHudMessageDirector.h:84
	// Declaration
	void StartPaybackAggressor() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiHudMessageDirector.h:223
		using namespace CgsDev::Message;

	}

	// BrnGuiHudMessageDirector.h:88
	// Declaration
	void StartPaybackVictim() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiHudMessageDirector.h:243
		using namespace CgsDev::Message;

	}

	// BrnGuiHudMessageDirector.h:92
	void StopPayback();

	// BrnGuiHudMessageDirector.h:96
	bool IsPaybackActive() const;

	// BrnGuiHudMessageDirector.h:100
	bool IsPaybackAggressor() const;

	// BrnGuiHudMessageDirector.h:104
	bool IsPaybackVictim() const;

	// BrnGuiHudMessageDirector.h:109
	bool IsMessageAllowed(CgsID) const;

private:
	// BrnGuiHudMessageDirector.h:152
	bool FilterAndSendOffMessage(const GuiHudMessage *, bool);

	// BrnGuiHudMessageDirector.h:156
	bool CheckMessageIsAvailable(uint32_t) const;

}

// BrnGuiHudMessageDirector.h:122
extern const float32_t KF_MINIMUM_BLACK_BAR_STOP_SIZE;

// BrnGuiHudMessageDirector.h:124
extern CgsID[] KA_PAYBACK_EXEMPT_MSGS;

// BrnGuiHudMessageDirector.h:125
extern const int32_t KI_NUM_PAYBACK_EXEMPT_MSGS;

// BrnGuiHudMessageDirector.h:127
extern CgsID[] KA_BLACK_BAR_EXEMPT_MSGS;

// BrnGuiHudMessageDirector.h:128
extern const int32_t KI_NUM_BLACK_BAR_EXEMPT_MSGS;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct HudMessageDirector {
		// BrnGuiHudMessageDirector.h:114
		enum EPayback {
			E_PAYBACK_NONE = 0,
			E_PAYBACK_AGGRESSOR = 1,
			E_PAYBACK_VICTIM = 2,
			E_PAYBACK_COUNT = 3,
		}

	}

}

// BrnGuiHudMessageDirector.h:51
struct BrnGui::HudMessageDirector {
private:
	// BrnGuiHudMessageDirector.h:122
	extern const float32_t KF_MINIMUM_BLACK_BAR_STOP_SIZE;

	// BrnGuiHudMessageDirector.h:124
	extern CgsID[] KA_PAYBACK_EXEMPT_MSGS;

	// BrnGuiHudMessageDirector.h:125
	extern const int32_t KI_NUM_PAYBACK_EXEMPT_MSGS;

	// BrnGuiHudMessageDirector.h:127
	extern CgsID[] KA_BLACK_BAR_EXEMPT_MSGS;

	// BrnGuiHudMessageDirector.h:128
	extern const int32_t KI_NUM_BLACK_BAR_EXEMPT_MSGS;

	// BrnGuiHudMessageDirector.h:130
	InputBuffer::GuiEventQueue mHudMessageQueue;

	// BrnGuiHudMessageDirector.h:131
	CgsGui::ModelModule * mpModelModule;

	// BrnGuiHudMessageDirector.h:132
	const HudMessageController * mpController;

	// BrnGuiHudMessageDirector.h:134
	const BrnGui::GuiCache * mpGuiCache;

	// BrnGuiHudMessageDirector.h:136
	bool mbLastFrameHudMessageState;

	// BrnGuiHudMessageDirector.h:137
	bool mbMessagePending;

	// BrnGuiHudMessageDirector.h:138
	GuiHudMessage mCachedMessage;

	// BrnGuiHudMessageDirector.h:140
	uint64_t[300] mauMessagesLastTriggered;

	// BrnGuiHudMessageDirector.h:145
	bool mbStopFlagBlackBar;

	// BrnGuiHudMessageDirector.h:146
	float32_t mfBlackBarSize;

	// BrnGuiHudMessageDirector.h:147
	bool mbStopFlagCamera;

	// BrnGuiHudMessageDirector.h:148
	BrnGui::HudMessageDirector::EPayback meStopFlagPaybackSequence;

public:
	// BrnGuiHudMessageDirector.h:58
	void Construct(CgsGui::ModelModule *, const BrnGui::GuiCache *);

	// BrnGuiHudMessageDirector.h:62
	void Update(InputBuffer *);

	// BrnGuiHudMessageDirector.h:66
	void SetController(const HudMessageController *);

	// BrnGuiHudMessageDirector.h:70
	void AddMessage(const GuiHudMessage *, bool);

	// BrnGuiHudMessageDirector.h:75
	// Declaration
	void SetBlackBarSize(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiHudMessageDirector.cpp:494
		using namespace CgsDev::Message;

	}

	// BrnGuiHudMessageDirector.h:80
	// Declaration
	void SetCameraSequenceFilter(bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiHudMessageDirector.h:196
		using namespace CgsDev::Message;

	}

	// BrnGuiHudMessageDirector.h:84
	// Declaration
	void StartPaybackAggressor() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiHudMessageDirector.h:223
		using namespace CgsDev::Message;

	}

	// BrnGuiHudMessageDirector.h:88
	// Declaration
	void StartPaybackVictim() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiHudMessageDirector.h:243
		using namespace CgsDev::Message;

	}

	// BrnGuiHudMessageDirector.h:92
	void StopPayback();

	// BrnGuiHudMessageDirector.h:96
	bool IsPaybackActive() const;

	// BrnGuiHudMessageDirector.h:100
	bool IsPaybackAggressor() const;

	// BrnGuiHudMessageDirector.h:104
	bool IsPaybackVictim() const;

	// BrnGuiHudMessageDirector.h:109
	bool IsMessageAllowed(CgsID) const;

private:
	// BrnGuiHudMessageDirector.h:152
	// Declaration
	bool FilterAndSendOffMessage(const GuiHudMessage *, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiHudMessageDirector.cpp:228
		using namespace CgsDev::Message;

	}

	// BrnGuiHudMessageDirector.h:156
	// Declaration
	bool CheckMessageIsAvailable(uint32_t) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiHudMessageDirector.cpp:323
		using namespace CgsDev::Message;

		// BrnGuiHudMessageDirector.cpp:341
		using namespace CgsDev::Message;

		// BrnGuiHudMessageDirector.cpp:349
		using namespace CgsDev::Message;

		// BrnGuiHudMessageDirector.cpp:362
		using namespace CgsDev::Message;

	}

}


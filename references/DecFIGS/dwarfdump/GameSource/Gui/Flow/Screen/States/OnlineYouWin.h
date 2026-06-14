// OnlineYouWin.h:88
extern int32_t[] maiEventToObserve;

// OnlineYouWin.h:89
extern const int32_t miNumEventsObserved;

// OnlineYouWin.h:91
extern sResourceTuple[] maResourcesToLoad;

// OnlineYouWin.h:92
extern const uint32_t muNumResourcesToLoad;

// OnlineYouWin.h:94
extern const float32_t KF_WIN_CHECK_DURATION;

// OnlineYouWin.h:95
extern const float32_t KF_POSING_DURATION;

// OnlineYouWin.h:96
extern const float32_t KF_SHOWING_DURATION;

// OnlineYouWin.h:100
extern char[] KAC_TIME_UNTILL_CLICK_TEXTFIELD_NAME;

// OnlineYouWin.h:103
extern char[] KAC_PHOTO_COMPONENT_NAME;

// OnlineYouWin.h:106
extern char[] KAC_MODE_ANIMATOR;

// OnlineYouWin.h:109
extern char[] KAC_TICK_ANIMATOR_NAME;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineYouWin {
		// OnlineYouWin.h:72
		enum InternalState {
			E_INTERNALSTATE_GETCACHE = 0,
			E_INTERNALSTATE_WF_WIN_RESULT = 1,
			E_INTERNALSTATE_LOADRESOURCES = 2,
			E_INTERNALSTATE_WFINIT = 3,
			E_INTERNALSTATE_TAKING = 4,
			E_INTERNALSTATE_SHOWING = 5,
			E_INTERNALSTATE_LEFT = 6,
			E_INTERNALSTATE_COUNT = 7,
		}

	}

}

// OnlineYouWin.h:45
struct BrnGui::OnlineYouWin : public CgsGui::State {
private:
	// OnlineYouWin.h:85
	BrnGui::GuiCache * mpGuiCache;

	// OnlineYouWin.h:86
	BrnGui::OnlineYouWin::InternalState meInternalState;

	// OnlineYouWin.cpp:26
	extern const int32_t[2] maiEventToObserve;

	// OnlineYouWin.cpp:38
	extern const int32_t miNumEventsObserved = 2;

	// OnlineYouWin.cpp:33
	extern const sResourceTuple[1] maResourcesToLoad;

	// OnlineYouWin.cpp:39
	extern const uint32_t muNumResourcesToLoad = 1;

	// OnlineYouWin.cpp:40
	extern const float32_t KF_WIN_CHECK_DURATION;

	// OnlineYouWin.cpp:41
	extern const float32_t KF_POSING_DURATION;

	// OnlineYouWin.cpp:42
	extern const float32_t KF_SHOWING_DURATION;

	// OnlineYouWin.h:97
	float32_t mfCurrentTime;

	// OnlineYouWin.h:99
	BrnGui::TextField mTimeUntillClickTextfield;

	// OnlineYouWin.cpp:44
	extern const char[13] KAC_TIME_UNTILL_CLICK_TEXTFIELD_NAME;

	// OnlineYouWin.h:102
	BrnGui::IconComponent mPhotoComponent;

	// OnlineYouWin.cpp:45
	extern const char[18] KAC_PHOTO_COMPONENT_NAME;

	// OnlineYouWin.h:105
	BrnGui::AnimationComponent mModeAnimator;

	// OnlineYouWin.cpp:46
	extern const char[11] KAC_MODE_ANIMATOR;

	// OnlineYouWin.h:108
	BrnGui::AnimationComponent mTickAnimator;

	// OnlineYouWin.cpp:47
	extern const char[15] KAC_TICK_ANIMATOR_NAME;

	// OnlineYouWin.h:110
	float32_t mfTickTime;

	// OnlineYouWin.h:112
	bool mbUseCamera;

public:
	// OnlineYouWin.cpp:66
	virtual void OnEnter();

	// OnlineYouWin.cpp:188
	virtual void OnLeave();

	// OnlineYouWin.cpp:97
	virtual void Update();

	// OnlineYouWin.h:63
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// OnlineYouWin.cpp:212
	void UpdateGetCache();

	// OnlineYouWin.cpp:250
	bool UpdateWFWinResult();

	// OnlineYouWin.cpp:293
	bool UpdateLoadResources();

	// OnlineYouWin.cpp:322
	bool UpdateWFInit();

	// OnlineYouWin.cpp:359
	bool UpdateTaking();

	// OnlineYouWin.cpp:403
	void UpdateShowing();

	// OnlineYouWin.cpp:447
	void UpdatePermanent();

	// OnlineYouWin.cpp:423
	bool HasAnyoneTimedOut();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineYouWin {
	public:
		OnlineYouWin();

	private:
		// OnlineYouWin.h:88
		extern int32_t[] maiEventToObserve;

		// OnlineYouWin.h:89
		extern const int32_t miNumEventsObserved;

		// OnlineYouWin.h:91
		extern sResourceTuple[] maResourcesToLoad;

		// OnlineYouWin.h:92
		extern const uint32_t muNumResourcesToLoad;

		// OnlineYouWin.h:94
		extern const float32_t KF_WIN_CHECK_DURATION;

		// OnlineYouWin.h:95
		extern const float32_t KF_POSING_DURATION;

		// OnlineYouWin.h:96
		extern const float32_t KF_SHOWING_DURATION;

		// OnlineYouWin.h:100
		extern char[] KAC_TIME_UNTILL_CLICK_TEXTFIELD_NAME;

		// OnlineYouWin.h:103
		extern char[] KAC_PHOTO_COMPONENT_NAME;

		// OnlineYouWin.h:106
		extern char[] KAC_MODE_ANIMATOR;

		// OnlineYouWin.h:109
		extern char[] KAC_TICK_ANIMATOR_NAME;

	}

}

// OnlineYouWin.h:45
void BrnGui::OnlineYouWin::OnlineYouWin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


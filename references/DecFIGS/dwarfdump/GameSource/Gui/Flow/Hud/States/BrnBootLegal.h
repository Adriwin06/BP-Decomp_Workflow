// BrnBootLegal.h:77
extern int32_t[] maiEventToObserve;

// BrnBootLegal.h:78
extern const int32_t miNumEventsObserved;

// BrnBootLegal.h:80
extern sResourceTuple[] maResourcesToLoad;

// BrnBootLegal.h:81
extern uint32_t muNumResourcesToLoad;

// BrnBootLegal.h:106
extern char[] macHDCompAnimatorName;

// BrnBootLegal.h:109
extern char[] macESRBAnimatorName;

// BrnBootLegal.h:116
extern char[] macPressStartCompAnimatorName;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct BootLegal {
		// BrnBootLegal.h:83
		enum EUpdateStage {
			E_UPDATE_LOADING = 0,
			E_UPDATE_SHOW_SCREEN = 1,
			E_UPDATE_WAIT_FOR_INIT = 2,
			E_UPDATE_COPYRIGHT_DELAY = 3,
			E_UPDATE_STAGE_MAIN = 4,
			E_UPDATE_ATTRACT_START = 5,
			E_UPDATE_ATTRACT_PLAY = 6,
			E_UPDATE_STAGE_PENDING_DONE = 7,
			E_UPDATE_STAGE_FADE_OUT = 8,
			E_UPDATE_STAGE_DONE = 9,
		}

	}

}

// BrnBootLegal.h:45
struct BrnGui::BootLegal : public CgsGui::State {
private:
	// BrnBootLegal.h:70
	BrnGui::GuiCache * mpGuiCache;

	// BrnBootLegal.h:72
	int32_t miNumFilesToLoad;

	// BrnBootLegal.h:74
	uint32_t muCurrentAttractMovieIdx;

	// BrnBootLegal.h:75
	bool mbWorldModuleFinishedPrepare;

	// BrnBootLegal.cpp:42
	extern const int32_t[7] maiEventToObserve;

	// BrnBootLegal.cpp:54
	extern const int32_t miNumEventsObserved = 7;

	// BrnBootLegal.cpp:56
	extern sResourceTuple[1] maResourcesToLoad;

	// BrnBootLegal.cpp:61
	extern uint32_t muNumResourcesToLoad;

	// BrnBootLegal.h:97
	BrnGui::BootLegal::EUpdateStage meUpdateStage;

	// BrnBootLegal.h:98
	float32_t mrCopyrightDelayStartTime;

	// BrnBootLegal.h:99
	bool mbIsOverlayActive;

	// BrnBootLegal.h:100
	float32_t mfFadeStartTime;

	// BrnBootLegal.h:105
	BrnGui::AnimationComponent mHDCompAnimator;

	// BrnBootLegal.cpp:65
	extern const char[18] macHDCompAnimatorName;

	// BrnBootLegal.h:108
	BrnGui::AnimationComponent mESRBAnimator;

	// BrnBootLegal.cpp:66
	extern const char[10] macESRBAnimatorName;

	// BrnBootLegal.h:115
	BrnGui::AnimationComponent mPressStartCompAnimator;

	// BrnBootLegal.cpp:67
	extern const char[30] macPressStartCompAnimatorName;

public:
	// BrnBootLegal.cpp:91
	virtual void OnEnter();

	// BrnBootLegal.cpp:541
	virtual void OnLeave();

	// BrnBootLegal.cpp:156
	virtual void Update();

	// BrnBootLegal.h:63
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct BootLegal {
	public:
		BootLegal();

	private:
		// BrnBootLegal.h:77
		extern int32_t[] maiEventToObserve;

		// BrnBootLegal.h:78
		extern const int32_t miNumEventsObserved;

		// BrnBootLegal.h:80
		extern sResourceTuple[] maResourcesToLoad;

		// BrnBootLegal.h:81
		extern uint32_t muNumResourcesToLoad;

		// BrnBootLegal.h:106
		extern char[] macHDCompAnimatorName;

		// BrnBootLegal.h:109
		extern char[] macESRBAnimatorName;

		// BrnBootLegal.h:116
		extern char[] macPressStartCompAnimatorName;

	}

}

// BrnBootLegal.h:45
void BrnGui::BootLegal::BootLegal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


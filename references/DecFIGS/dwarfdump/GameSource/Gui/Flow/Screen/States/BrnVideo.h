// BrnVideo.h:92
extern int32_t[] maiEventToObserve;

// BrnVideo.h:93
extern const int32_t miNumEventsObserved;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct Video {
		// BrnVideo.h:71
		enum ESubState {
			E_SUBSTATE_ENTERED = 0,
			E_SUBSTATE_VIDEO_PLAYING = 1,
			E_SUBSTATE_COUNT = 2,
		}

	}

}

// BrnVideo.h:45
struct BrnGui::Video : public CgsGui::State {
private:
	// BrnVideo.h:89
	BrnGui::Video::ESubState meSubState;

	// BrnVideo.cpp:30
	extern const int32_t[2] maiEventToObserve;

	// BrnVideo.cpp:36
	extern const int32_t miNumEventsObserved = 2;

public:
	// BrnVideo.cpp:55
	virtual void OnEnter();

	// BrnVideo.cpp:184
	virtual void OnLeave();

	// BrnVideo.cpp:84
	virtual void Update();

	// BrnVideo.h:63
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnVideo.h:98
	void HandleControllerInput(const CgsModule::Event *);

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct Video {
	public:
		Video();

	private:
		// BrnVideo.h:92
		extern int32_t[] maiEventToObserve;

		// BrnVideo.h:93
		extern const int32_t miNumEventsObserved;

	}

}

// BrnVideo.h:45
void BrnGui::Video::Video() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


// BrnPostTitleScreenLoad.h:75
extern int32_t[] maiEventToObserve;

// BrnPostTitleScreenLoad.h:76
extern const int32_t miNumEventsObserved;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct PostTitleScreenLoad {
		// BrnPostTitleScreenLoad.h:79
		enum EState {
			E_IDLE = 0,
			E_PLAYING_VIDEO = 1,
			E_FINISHED_VIDEO = 2,
		}

	}

}

// BrnPostTitleScreenLoad.h:43
struct BrnGui::PostTitleScreenLoad : public CgsGui::State {
private:
	// BrnPostTitleScreenLoad.h:71
	BrnGui::GuiCache * mpGuiCache;

	// BrnPostTitleScreenLoad.h:73
	int32_t miNumFilesToLoad;

	// BrnPostTitleScreenLoad.cpp:37
	extern const int32_t[3] maiEventToObserve;

	// BrnPostTitleScreenLoad.cpp:44
	extern const int32_t miNumEventsObserved = 3;

	// BrnPostTitleScreenLoad.h:86
	BrnGui::PostTitleScreenLoad::EState meState;

	// BrnPostTitleScreenLoad.h:88
	bool mbVideoFInished;

public:
	// BrnPostTitleScreenLoad.cpp:63
	virtual void OnEnter();

	// BrnPostTitleScreenLoad.cpp:186
	virtual void OnLeave();

	// BrnPostTitleScreenLoad.cpp:84
	virtual void Update();

	// BrnPostTitleScreenLoad.h:61
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

	// BrnPostTitleScreenLoad.cpp:200
	void HandleIncomingEvents();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct PostTitleScreenLoad {
	public:
		PostTitleScreenLoad();

	private:
		// BrnPostTitleScreenLoad.h:75
		extern int32_t[] maiEventToObserve;

		// BrnPostTitleScreenLoad.h:76
		extern const int32_t miNumEventsObserved;

	}

}

// BrnPostTitleScreenLoad.h:43
void BrnGui::PostTitleScreenLoad::PostTitleScreenLoad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


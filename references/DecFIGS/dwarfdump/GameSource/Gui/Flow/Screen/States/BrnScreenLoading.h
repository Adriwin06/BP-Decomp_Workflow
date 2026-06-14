// BrnScreenLoading.h:73
extern int32_t[] maiEventToObserve;

// BrnScreenLoading.h:74
extern const int32_t miNumEventsObserved;

// BrnScreenLoading.h:42
struct BrnGui::ScreenLoading : public CgsGui::State {
private:
	// BrnScreenLoading.cpp:25
	extern const int32_t[2] maiEventToObserve;

	// BrnScreenLoading.cpp:31
	extern const int32_t miNumEventsObserved = 2;

	// BrnScreenLoading.h:76
	bool mbInviteInProgress;

	// BrnScreenLoading.h:77
	bool mbStartingGameDueToPlayerJoin;

	// BrnScreenLoading.h:79
	BrnGui::GuiCache * mpGuiCache;

	// BrnScreenLoading.h:81
	bool mbScreenPlaying;

public:
	// BrnScreenLoading.cpp:50
	virtual void OnEnter();

	// BrnScreenLoading.cpp:300
	virtual void OnLeave();

	// BrnScreenLoading.cpp:90
	// Declaration
	virtual void Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnScreenLoading.cpp:169
		using namespace CgsDev::Message;

	}

	// BrnScreenLoading.h:60
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnScreenLoading.cpp:194
	void ApplyOptionsDataProfileSettings();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ScreenLoading {
	public:
		ScreenLoading();

	private:
		// BrnScreenLoading.h:73
		extern int32_t[] maiEventToObserve;

		// BrnScreenLoading.h:74
		extern const int32_t miNumEventsObserved;

	}

}

// BrnScreenLoading.h:42
void BrnGui::ScreenLoading::ScreenLoading() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


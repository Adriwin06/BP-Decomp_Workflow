// BrnBootVideos.h:75
extern int32_t[] maiEventToObserve;

// BrnBootVideos.h:76
extern const int32_t miNumEventsObserved;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct BootVideos {
		// BrnBootVideos.h:78
		enum EUpdateStage {
			E_UPDATE_STAGE_LOADING = 0,
			E_UPDATE_STAGE_MAIN_HD_MOVIE = 1,
			E_UPDATE_STAGE_MAIN_EA_LOGO_MOVIE = 2,
			E_UPDATE_STAGE_MAIN_CRITERION_LOGO_MOVIE = 3,
			E_UPDATE_STAGE_DONE = 4,
		}

	}

}

// BrnBootVideos.h:43
struct BrnGui::BootVideos : public CgsGui::State {
private:
	// BrnBootVideos.cpp:35
	extern const int32_t[4] maiEventToObserve;

	// BrnBootVideos.cpp:43
	extern const int32_t miNumEventsObserved = 4;

	// BrnBootVideos.h:87
	BrnGui::BootVideos::EUpdateStage meUpdateStage;

	// BrnBootVideos.h:88
	float32_t mfHDVideoStartTime;

	// BrnBootVideos.h:89
	float32_t mfLogoVideoStartTime;

	// BrnBootVideos.h:91
	BrnGui::GuiCache * mpGuiCache;

public:
	// BrnBootVideos.cpp:69
	virtual void Construct(CgsID, CgsFsm::ScriptedFsm *);

	// BrnBootVideos.cpp:94
	virtual void OnEnter();

	// BrnBootVideos.cpp:468
	virtual void OnLeave();

	// BrnBootVideos.cpp:120
	virtual void Update();

	// BrnBootVideos.h:67
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct BootVideos {
	public:
		BootVideos();

	private:
		// BrnBootVideos.h:75
		extern int32_t[] maiEventToObserve;

		// BrnBootVideos.h:76
		extern const int32_t miNumEventsObserved;

	}

}

// BrnBootVideos.h:43
void BrnGui::BootVideos::BootVideos() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


// BrnHudFlow.h:57
struct BrnGui::BrnHudFlow : public BrnGui::BrnBaseFlow {
	// BrnHudFlow.h:81
	BrnGui::BootPreload * mpStateBootPreload;

	// BrnHudFlow.h:82
	BrnGui::BootVideos * mpStateBootVideos;

	// BrnHudFlow.h:83
	BrnGui::BootLegal * mpStateBootLegal;

	// BrnHudFlow.h:84
	BrnGui::BootAttract * mpStateBootAttract;

	// BrnHudFlow.h:85
	BrnGui::PostTitleScreenLoad * mpStatePostTitleScreenLoad;

	// BrnHudFlow.h:86
	BrnGui::BootProfile * mpStateBootProfile;

	// BrnHudFlow.h:87
	BrnGui::BootLoading * mpStateBootLoading;

	// BrnHudFlow.h:88
	BrnGui::RaceMainHudState * mpRaceMainHudState;

	// BrnHudFlow.h:89
	BrnGui::FBurnMainHudState * mpFBurnMainHudState;

	// BrnHudFlow.h:90
	BrnGui::PausedHudState * mpPausedHudState;

	// BrnHudFlow.h:91
	BrnGui::CrashedHudState * mpCrashedHudState;

	// BrnHudFlow.h:92
	BrnGui::CrashedStuntHudState * mpCrashedStuntHudState;

	// BrnHudFlow.h:93
	BrnGui::IdleHudState * mpIdleHudState;

	// BrnHudFlow.h:94
	BrnGui::PreRaceFlyByState * mpStatePreRaceFlyBy;

public:
	// BrnHudFlow.cpp:42
	virtual void Construct(BrnGui::GuiCache *);

	// BrnHudFlow.cpp:61
	virtual bool Prepare(GuiAccessPointers *, rw::IResourceAllocator *, LinearMalloc *, BrnGui::ProfileManager &);

	// BrnHudFlow.cpp:143
	virtual void Update();

private:
	// BrnHudFlow.cpp:162
	// Declaration
	virtual void PrintStateSizes() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnHudFlow.cpp:166
		using namespace CgsDev::Message;

		// BrnHudFlow.cpp:167
		using namespace CgsDev::Message;

		// BrnHudFlow.cpp:168
		using namespace CgsDev::Message;

		// BrnHudFlow.cpp:183
		using namespace CgsDev::Message;

		// BrnHudFlow.cpp:184
		using namespace CgsDev::Message;

		// BrnHudFlow.cpp:185
		using namespace CgsDev::Message;

	}

}

// BrnHudFlow.h:57
void BrnGui::BrnHudFlow::BrnHudFlow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


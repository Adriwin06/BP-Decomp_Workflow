// BrnOverlayFlow.h:59
struct BrnGui::BrnOverlayFlow : public BrnGui::BrnBaseFlow {
	// BrnOverlayFlow.h:76
	BrnGui::PreloadOverlayState * mpPreloadOverlayState;

	// BrnOverlayFlow.h:77
	BrnGui::InvisibleOverlayState * mpInvisibleOverlayState;

	// BrnOverlayFlow.h:79
	BrnGui::CrashNavWaitOverlayState * mpCrashNavWaitOverlayState;

	// BrnOverlayFlow.h:80
	BrnGui::CrashNavOkOverlayState * mpCrashNavOkOverlayState;

	// BrnOverlayFlow.h:81
	BrnGui::CrashNavOkCancelOverlayState * mpCrashNavOkCancelOverlayState;

	// BrnOverlayFlow.h:82
	BrnGui::CrashNavOnlineWaitOverlayState * mpCrashNavOnlineWaitOverlayState;

	// BrnOverlayFlow.h:83
	BrnGui::CrashNavOnlineOkOverlayState * mpCrashNavOnlineOkOverlayState;

	// BrnOverlayFlow.h:84
	BrnGui::CrashNavOnlineOkCancelOverlayState * mpCrashNavOnlineOkCancelOverlayState;

	// BrnOverlayFlow.h:85
	BrnGui::InGameWaitOverlayState * mpInGameWaitOverlayState;

	// BrnOverlayFlow.h:86
	BrnGui::InGameOkOverlayState * mpInGameOkOverlayState;

	// BrnOverlayFlow.h:87
	BrnGui::InGameOkCancelOverlayState * mpInGameOkCancelOverlayState;

	// BrnOverlayFlow.h:88
	BrnGui::InGameOnlineWaitOverlayState * mpInGameOnlineWaitOverlayState;

	// BrnOverlayFlow.h:89
	BrnGui::InGameOnlineOkOverlayState * mpInGameOnlineOkOverlayState;

	// BrnOverlayFlow.h:90
	BrnGui::InGameOnlineOkCancelOverlayState * mpInGameOnlineOkCancelOverlayState;

	// BrnOverlayFlow.h:91
	BrnGui::InGameOnlineEnterFreeBurnOverlayState * mpInGameOnlineEnterFreeBurnOverlayState;

public:
	// BrnOverlayFlow.cpp:39
	virtual void Construct(BrnGui::GuiCache *);

	// BrnOverlayFlow.cpp:57
	virtual bool Prepare(GuiAccessPointers *, rw::IResourceAllocator *, LinearMalloc *);

private:
	// BrnOverlayFlow.cpp:157
	// Declaration
	virtual void PrintStateSizes() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOverlayFlow.cpp:161
		using namespace CgsDev::Message;

		// BrnOverlayFlow.cpp:162
		using namespace CgsDev::Message;

		// BrnOverlayFlow.cpp:163
		using namespace CgsDev::Message;

		// BrnOverlayFlow.cpp:181
		using namespace CgsDev::Message;

		// BrnOverlayFlow.cpp:182
		using namespace CgsDev::Message;

		// BrnOverlayFlow.cpp:183
		using namespace CgsDev::Message;

	}

}

// BrnOverlayFlow.h:59
void BrnGui::BrnOverlayFlow::BrnOverlayFlow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


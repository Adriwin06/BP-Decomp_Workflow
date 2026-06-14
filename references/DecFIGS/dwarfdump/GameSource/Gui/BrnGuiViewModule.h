// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ViewModule {
		// BrnGuiViewModule.h:110
		enum BrnPrepareStage {
			E_BRNPREPARESTAGE_START = 0,
			E_BRNPREPARESTAGE_BASE_CLASS = 1,
			E_BRNPREPARESTAGE_FLAPT = 2,
			E_BRNPREPARESTAGE_DONE = 3,
		}

		// BrnGuiViewModule.h:118
		enum BrnReleaseStage {
			E_BRNRELEASESTAGE_START = 0,
			E_BRNRELEASESTAGE_FLAPT = 1,
			E_BRNRELEASESTAGE_BASE_CLASS = 2,
			E_BRNRELEASESTAGE_DONE = 3,
		}

	}

}

// BrnGuiViewModule.h:51
struct BrnGui::ViewModule : public CgsGui::ViewModule {
private:
	// BrnGuiViewModule.h:127
	BrnGui::ViewModule::BrnPrepareStage meBrnPrepareStage;

	// BrnGuiViewModule.h:128
	BrnGui::ViewModule::BrnReleaseStage meBrnReleaseStage;

	// BrnGuiViewModule.h:130
	FlaptManager mFlaptManager;

	// BrnGuiViewModule.h:132
	BrnGui::GuiModule * mpGuiModule;

public:
	// BrnGuiViewModule.cpp:53
	virtual void Construct(BrnGui::GuiModule *, const char *, int32_t, float32_t, const RGBA *, int32_t);

	// BrnGuiViewModule.cpp:93
	virtual bool Prepare(HeapMalloc *, rw::IResourceAllocator *, HeapMalloc *, LinearMalloc *);

	// BrnGuiViewModule.cpp:149
	virtual bool Release();

	// BrnGuiViewModule.cpp:205
	virtual void Destruct();

	// BrnGuiViewModule.cpp:224
	virtual void Update(IOBufferStack *, IOBufferStack *, const InputBuffer *, OutputBuffer *);

	// BrnGuiViewModule.h:93
	BrnFlapt::FlaptManager * GetFlaptManager();

protected:
	// BrnGuiViewModule.cpp:242
	virtual void RenderInternal(const InputBuffer *);

	// BrnGuiViewModule.cpp:262
	virtual void ProcessIncomingLoadNotification(const CgsModule::Event *);

}

// BrnGuiViewModule.h:51
void BrnGui::ViewModule::ViewModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGuiViewModule.h:51
void BrnGui::ViewModule::~ViewModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


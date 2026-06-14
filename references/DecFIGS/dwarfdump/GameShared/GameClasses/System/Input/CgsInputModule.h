// CgsInputTypes.h:24
namespace CgsInput {
	// Declaration
	struct InputModule {
	public:
		// CgsInputModule.h:154
		DebugManagerPad * GetDebugGamePad(int32_t);

	}

}

// CgsInputModule.h:48
void CgsInput::InputModule::InputModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsInputModule.h:48
void CgsInput::InputModule::~InputModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsInputDevice.h:22
namespace CgsInput {
	// Declaration
	struct InputModule {
		// CgsInputModule.h:51
		enum EPrepareStage {
			E_INPUTPREPARESTAGE_START = 0,
			E_INPUTPREPARESTAGE_MANAGER = 1,
			E_INPUTPREPARESTAGE_INPUTPADS = 2,
			E_INPUTPREPARESTAGE_DONE = 3,
		}

		// CgsInputModule.h:59
		enum EReleaseStage {
			E_INPUTRELEASESTAGE_START = 0,
			E_INPUTRELEASESTAGE_INPUTPADS = 1,
			E_INPUTRELEASESTAGE_MANAGER = 2,
			E_INPUTRELEASESTAGE_DONE = 3,
		}

	}

}

// CgsInputModule.h:48
struct CgsInput::InputModule : public CgsModule::ModuleSingleBuffered {
private:
	// CgsInputModule.h:115
	CgsInput::InputModule::EPrepareStage mePrepareStage;

	// CgsInputModule.h:116
	CgsInput::InputModule::EReleaseStage meReleaseStage;

	// CgsInputModule.h:118
	InputPads mControllers;

	// CgsInputModule.h:119
	OutputBuffer::BindResultQueue mOutputBindResultQueue;

	// CgsInputModule.h:120
	OutputBuffer::UnBindResultQueue mOutputUnbindResultQueue;

	// CgsInputModule.h:122
	rw::core::GeneralResourceAllocator * mpAllocator;

public:
	// CgsInputModule.cpp:37
	virtual void Construct();

	// CgsInputModule.cpp:65
	virtual bool Prepare(rw::IResourceAllocator *);

	// CgsInputModule.cpp:127
	virtual bool Release();

	// CgsInputModule.cpp:187
	virtual void Destruct();

	// CgsInputModule.cpp:212
	virtual void PreWorldUpdate(IOBufferStack *, IOBufferStack *, const PreWorldInputBuffer *, OutputBuffer *, bool);

	// CgsInputModule.cpp:255
	virtual void PostWorldUpdate(IOBufferStack *, const PostWorldInputBuffer *);

	// CgsInputModule.cpp:284
	void OverrideDeviceState(int32_t, const rw::core::controller::DeviceState *);

	// CgsInputModule.h:154
	DebugManagerPad * GetDebugGamePad(int32_t);

private:
	// CgsInputModule.cpp:300
	void ProcessBindRequestQueue(const PostWorldInputBuffer *);

	// CgsInputModule.cpp:353
	void ProcessUnbindRequestQueue(const PostWorldInputBuffer *);

	// CgsInputModule.cpp:385
	void ProcessMappingQueue(const PostWorldInputBuffer *);

	// CgsInputModule.cpp:426
	void ProcessRumbleRequests(const PreWorldInputBuffer *, bool);

	// CgsInputModule.h:147
	void UpdatePads();

}


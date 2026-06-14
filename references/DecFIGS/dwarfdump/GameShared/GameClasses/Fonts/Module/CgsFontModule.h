// CgsFontModuleIO.h:27
namespace CgsGraphics {
	// Declaration
	struct FontModule {
		// CgsFontModule.h:46
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_DONE = 2,
		}

		// CgsFontModule.h:53
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_MANAGER = 1,
			E_RELEASESTAGE_DONE = 2,
		}

		// CgsFontModule.h:60
		enum EResourceAcquireState {
			E_RESOURCE_ACQUIRE_NOT_STARTED = 0,
			E_RESOURCE_ACQUIRE_REQUESTED = 1,
			E_RESOURCE_ACQUIRE_COMPLETE = 2,
		}

	}

}

// CgsFontModule.h:43
struct CgsGraphics::FontModule : public CgsModule::ModuleSingleBufferedTemplate<CgsGraphics::FontIO::InputBuffer,CgsGraphics::FontIO::OutputBuffer> {
private:
	// CgsFontModule.h:122
	CgsGraphics::FontModule::EPrepareStage mePrepareStage;

	// CgsFontModule.h:123
	CgsGraphics::FontModule::EReleaseStage meReleaseStage;

	// CgsFontModule.h:124
	CgsGraphics::FontModule::EResourceAcquireState meResourceState;

	// CgsFontModule.h:126
	InputBuffer mInputBuffer;

	// CgsFontModule.h:127
	OutputBuffer mOutputBuffer;

	// CgsFontModule.h:129
	EventReceiverQueue<1024,16> mReceiverQueue;

public:
	// CgsFontModule.cpp:44
	virtual void Construct();

	// CgsFontModule.cpp:63
	virtual bool Prepare();

	// CgsFontModule.cpp:115
	virtual bool Release();

	// CgsFontModule.cpp:166
	virtual void Destruct();

	// CgsFontModule.cpp:182
	virtual void Update();

protected:
	// CgsFontModule.cpp:264
	virtual CgsModule::DataStructure * CreateInputDataStructure();

	// CgsFontModule.cpp:282
	virtual CgsModule::DataStructure * CreateOutputDataStructure();

	// CgsFontModule.cpp:300
	virtual bool DestroyInputDataStructure(CgsModule::DataStructure *);

	// CgsFontModule.cpp:318
	virtual bool DestroyOutputDataStructure(CgsModule::DataStructure *);

	// CgsFontModule.cpp:338
	virtual bool PrepareDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

	// CgsFontModule.cpp:360
	virtual bool ReleaseDataStructures(CgsModule::DataStructure *, CgsModule::DataStructure *);

private:
	// CgsFontModule.cpp:206
	void LoadResources();

}


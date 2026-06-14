// BrnRootSoundModule.h:111
extern const uint32_t KU_RECIEVER_QUEUE_SIZE = 5120;

// BrnSoundRootSharedIO.h:25
namespace BrnSound {
	// BrnSoundRootSharedIO.h:26
	namespace Module {
		// Declaration
		struct RootSoundModule {
			// BrnRootSoundModule.h:111
			extern const uint32_t KU_RECIEVER_QUEUE_SIZE = 5120;

		}

	}

}

// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnSoundCommonSharedIO.h:27
	namespace Module {
		// Declaration
		struct RootSoundModule {
			// BrnRootSoundModule.h:115
			enum EPrepareStage {
				E_PREPARESTAGE_START = 0,
				E_PREPARESTAGE_SELF = 1,
				E_PREPARESTAGE_RWAC = 2,
				E_PREPARESTAGE_PLAYBACK_MODULE = 3,
				E_PREPARESTAGE_LOGIC_MODULE = 4,
				E_PREPARESTAGE_RESOURCES = 5,
				E_PREPARESTAGE_REGISTRY_LOAD = 6,
				E_PREPARESTAGE_DONE = 7,
			}

			// BrnRootSoundModule.h:129
			enum EReleaseStage {
				E_RELEASESTAGE_START = 0,
				E_RELEASESTAGE_SELF = 1,
				E_RELEASESTAGE_RWAC = 2,
				E_RELEASESTAGE_PLAYBACK_MODULE = 3,
				E_RELEASESTAGE_LOGIC_MODULE = 4,
				E_RELEASESTAGE_RESOURCES = 5,
				E_RELEASESTAGE_REGISTRY_LOAD = 6,
				E_RELEASESTAGE_DONE = 7,
			}

			// BrnRootSoundModule.h:143
			enum EResourceAcquireStage {
				E_RESOURCE_LOAD_NOT_STARTED = 0,
				E_RESOURCE_LOAD_REQUESTED = 1,
				E_RESOURCE_ACQUIRE_NOT_STARTED = 2,
				E_RESOURCE_ACQUIRE_REQUESTED = 3,
				E_RESOURCE_ACQUIRE_COUNT = 4,
			}

		}

	}

}

// BrnRootSoundModule.h:107
struct BrnSound::Module::RootSoundModule : public CgsModule::ModuleSingleBuffered {
	// BrnRootSoundModule.h:111
	extern const uint32_t KU_RECIEVER_QUEUE_SIZE = 5120;

private:
	// BrnRootSoundModule.h:224
	JobScheduler mScheduler;

	// BrnRootSoundModule.h:228
	SoundLogicModule mLogicModule;

	// BrnRootSoundModule.h:229
	EventReceiverQueue<5120,16> mReceiverQueue;

	// BrnRootSoundModule.h:230
	System * mpSystem;

	// BrnRootSoundModule.h:231
	BrnSound::Module::RootSoundModule::EPrepareStage mePrepareStage;

	// BrnRootSoundModule.h:232
	BrnSound::Module::RootSoundModule::EReleaseStage meReleaseStage;

	// BrnRootSoundModule.h:233
	BrnSound::Module::RootSoundModule::EResourceAcquireStage meResourceStage;

	// BrnRootSoundModule.h:241
	uint32_t mu32CurrentRegistry;

	// BrnRootSoundModule.h:242
	uint32_t meCurrentRegistry;

	// BrnRootSoundModule.h:246
	int32_t miLogicUpdate;

	// BrnRootSoundModule.h:247
	int32_t miBridgeRootToLogic;

	// BrnRootSoundModule.h:259
	DebugComponent mDebugComponent;

	// BrnRootSoundModule.cpp:133
	extern int msiMutexLockCount;

public:
	// BrnRootSoundModule.cpp:153
	virtual void Construct();

	// BrnRootSoundModule.cpp:249
	// Declaration
	virtual bool Prepare(const AllocatorList *, IOBufferStack *, IOBufferStack *, RootInputBuffer *, RootOutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRootSoundModule.cpp:254
		using namespace BrnResource;

	}

	// BrnRootSoundModule.cpp:603
	// Declaration
	bool PrepareOnEnteringGameplay(const AllocatorList *, IOBufferStack *, IOBufferStack *, RootInputBuffer *, RootOutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRootSoundModule.cpp:607
		using namespace BrnResource;

	}

	// BrnRootSoundModule.cpp:709
	virtual bool Release();

	// BrnRootSoundModule.cpp:800
	virtual void Destruct();

	// BrnRootSoundModule.cpp:825
	void PreUpdate(IOBufferStack *, RootPreUpdateOutputBuffer *);

	// BrnRootSoundModule.cpp:872
	void Update(float, float, IOBufferStack *, IOBufferStack *, RootInputBuffer *, RootOutputBuffer *, BrnUpdateSet);

	// BrnRootSoundModule.cpp:1334
	void DebugMemoryInit(BrnSound::Module::RootSoundModule *);

private:
	// BrnRootSoundModuleBridges.cpp:51
	void BridgeLogicToPlayback(const LogicOutputBuffer *, InputBuffer *);

	// BrnRootSoundModuleBridges.cpp:68
	void BridgePlaybackToLogic(const OutputBuffer *, LogicInputBuffer *);

	// BrnRootSoundModuleBridges.cpp:132
	void BridgePlaybackCommandBufferToLogic(const OutputBuffer *, SoundLogicModule &);

	// BrnRootSoundModuleBridges.cpp:88
	void BridgeLogicToRoot(const LogicOutputBuffer *, RootOutputBuffer *);

	// BrnRootSoundModuleBridges.cpp:111
	void BridgePlaybackToRoot(const OutputBuffer *, RootOutputBuffer *);

	// BrnRootSoundModule.cpp:1395
	void BridgeLogicToRootPreUpdate(const LogicPreUpdateOutputBuffer *, RootPreUpdateOutputBuffer *) const;

	// BrnRootSoundModule.cpp:1108
	// Declaration
	bool RegistryLoad(LogicOutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRootSoundModule.cpp:1237
		using namespace CgsSound::Playback::Module;

	}

	// BrnRootSoundModule.cpp:1351
	void MutexLockFn();

	// BrnRootSoundModule.cpp:1364
	void MutexUnlockFn();

	// BrnRootSoundModule.cpp:1377
	bool MutexIsLockedFn();

}

// BrnSoundRootSharedIO.h:25
namespace BrnSound {
	// BrnSoundRootSharedIO.h:26
	namespace Module {
		// Declaration
		struct RootSoundModule {
		public:
			RootSoundModule();

			~RootSoundModule();

			// Unknown accessibility
			// BrnRootSoundModule.h:111
			extern const uint32_t KU_RECIEVER_QUEUE_SIZE = 5120;

		}

	}

}

// BrnRootSoundModule.h:107
void BrnSound::Module::RootSoundModule::RootSoundModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRootSoundModule.h:107
void BrnSound::Module::RootSoundModule::~RootSoundModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


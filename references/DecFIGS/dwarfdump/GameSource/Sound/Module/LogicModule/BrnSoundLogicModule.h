// BrnSoundLogicModule.h:58
extern const int32_t KI_MAX_SOUND_TRIGGER_ACTIONS = 16;

// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnSoundCommonSharedIO.h:27
	namespace Module {
		// Declaration
		struct SoundLogicModule {
			// BrnSoundLogicModule.h:79
			enum EPrepareStage {
				E_PREPARESTAGE_START = 0,
				E_PREPARESTAGE_SELF = 1,
				E_PREPARESTAGE_MASTER_VOICE = 2,
				E_PREPARESTAGE_LOADING_GLOBAL_DATA = 3,
				E_PREPARESTAGE_FINISHED_LOADING_GLOBAL_DATA = 4,
				E_PREPARESTAGE_ENTER_GAMEPLAY = 5,
				E_PREPARESTAGE_DONE = 6,
			}

			// BrnSoundLogicModule.h:93
			enum EReleaseStage {
				E_RELEASESTAGE_START = 0,
				E_RELEASESTAGE_SELF = 1,
				E_RELEASESTAGE_MASTER_VOICE = 2,
				E_RELEASESTAGE_DONE = 3,
			}

		}

	}

}

// BrnSoundLogicModule.h:52
struct BrnSound::Module::SoundLogicModule : public BrnSound::Logic::IResourceRequester {
	// BrnSoundLogicModule.h:56
	extern const uint32_t KU_RECIEVER_QUEUE_SIZE = 5120;

	// BrnSoundLogicModule.h:58
	extern const int32_t KI_MAX_SOUND_TRIGGER_ACTIONS = 16;

	// BrnSoundLogicModule.h:72
	extern const uint32_t KU_MASTER_VOICE_ID = 1;

private:
	// BrnSoundLogicModule.h:365
	LogicInputBuffer * mpBrnLogicInputBuffer;

	// BrnSoundLogicModule.h:366
	LogicOutputBuffer * mpBrnLogicOutputBuffer;

	// BrnSoundLogicModule.h:372
	Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u> maTriggerActions;

	// BrnSoundLogicModule.h:374
	PreUpdateOutput mPreUpdateOutput;

	// Unknown accessibility
	// CgsSoundLogicModuleIO.h:55
	typedef Array<CgsSound::Io::QueueElement,3u> FreedBuffersArray;

	// BrnSoundLogicModule.h:375
	SoundLogicModule::FreedBuffersArray mStreamBuffersFreed;

	// BrnSoundLogicModule.h:377
	CgsSound::Logic::Voice mMasterVoice;

	// BrnSoundLogicModule.h:378
	CgsSound::Logic::Voice mGlobalReverbVoice;

	// BrnSoundLogicModule.h:379
	CgsSound::Logic::Voice mSplicerSubmixVoice;

	// BrnSoundLogicModule.h:381
	int32_t miVoiceCountID;

	// BrnSoundLogicModule.h:383
	ResourceRegistrar mResourceRegistrar;

	// BrnSoundLogicModule.h:384
	CgsSound::Logic::StateManager *[9] mapStateManagers;

	// BrnSoundLogicModule.h:385
	BrnSound::Module::SoundLogicModule::EPrepareStage mePrepareStage;

	// BrnSoundLogicModule.h:386
	BrnSound::Module::SoundLogicModule::EReleaseStage meReleaseStage;

	// BrnSoundLogicModule.h:387
	rw::IResourceAllocator * mpAllocator;

	// BrnSoundLogicModule.h:390
	burnoutglobaldata mBurnoutGlobalData;

	// BrnSoundLogicModule.h:391
	FrameInformation mFrameInformation;

	// BrnSoundLogicModule.h:393
	Random mRandomGenerator;

	// BrnSoundLogicModule.h:395
	bool mbSeenAnyRivals;

	// BrnSoundLogicModule.h:397
	int32_t miCommandStreamUsage;

	// BrnSoundLogicModule.h:398
	int32_t miResourceRegistrarUpdate;

	// BrnSoundLogicModule.h:400
	float32_t mfHoldTimer;

	// BrnSoundLogicModule.h:401
	bool mbHoldingVolumes;

public:
	// BrnSoundLogicModule.cpp:139
	virtual void Construct();

	// BrnSoundLogicModule.cpp:191
	// Declaration
	virtual bool Prepare(rw::IResourceAllocator *, InputBuffer *, OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSoundLogicModule.cpp:193
		using namespace CgsSound::Logic;

		// BrnSoundLogicModule.cpp:194
		using namespace CgsSound::Playback;

	}

	// BrnSoundLogicModule.cpp:371
	// Declaration
	bool PrepareOnEnteringGameplay(rw::IResourceAllocator *, InputBuffer *, OutputBuffer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSoundLogicModule.cpp:373
		using namespace CgsSound::Logic;

		// BrnSoundLogicModule.cpp:374
		using namespace CgsSound::Playback;

	}

	// BrnSoundLogicModule.cpp:412
	virtual bool Release();

	// BrnSoundLogicModule.cpp:466
	virtual void Destruct();

	// BrnSoundLogicModule.cpp:489
	void PreUpdate(LogicPreUpdateOutputBuffer *);

	// BrnSoundLogicModule.cpp:519
	virtual void Update(float32_t, float32_t, InputBuffer *, OutputBuffer *, BrnUpdateSet);

	// BrnSoundLogicModule.h:155
	void SetCameraInput(const Camera *);

	// BrnSoundLogicModule.cpp:2126
	virtual uint32_t GetUniqueId();

	// BrnSoundLogicModule.h:423
	LogicInputBuffer * GetBrnInputStructure();

	// BrnSoundLogicModule.h:431
	const LogicInputBuffer * GetBrnInputStructure() const;

	// BrnSoundLogicModule.h:439
	FrameInformation & GetFrameInformation();

	// BrnSoundLogicModule.h:446
	const burnoutglobaldata & GetGlobalData() const;

	// BrnSoundLogicModule.cpp:2150
	// Declaration
	const Attrib::RefSpec & GetSampleTags(EeSampleTags) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// eSampleTags.h:25
		typedef AttribSys::Enums::eSampleTags::eSampleTags EeSampleTags;

	}

	// BrnSoundLogicModule.cpp:964
	const Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::SoundTriggerAction * GetSoundTriggerAction(EntityId, BrnGameState::GameStateModuleIO::SoundTriggerAction::eType);

	// BrnSoundLogicModule.h:452
	Random & GetRandomGenerator();

	// BrnSoundLogicModule.h:505
	SoundLogicModule::FreedBuffersArray & GetStreamBuffersFreed();

	// BrnSoundLogicModule.h:473
	PreUpdateOutput & GetPreUpdateOutput();

	// BrnSoundLogicModule.h:490
	CgsSound::Logic::Voice & GetGlobalReverbVoice();

	// BrnSoundLogicModule.h:519
	CgsSound::Logic::Voice & GetMasterVoice();

protected:
	// BrnSoundLogicModule.cpp:657
	virtual void AttachBuffers(InputBuffer *, OutputBuffer *);

	// BrnSoundLogicModule.cpp:673
	virtual void DetachBuffers();

	// BrnSoundLogicModule.cpp:936
	void ResourceBridging();

public:
	// BrnSoundLogicModule.cpp:902
	virtual void ResourcesAreReady();

	// BrnSoundLogicModule.cpp:885
	virtual BrnSound::Logic::ResourceRegistrar & GetResourceRegistrar();

private:
	// BrnSoundLogicModule.h:414
	bool IsVoiceIdReserved(uint32_t);

	// BrnSoundLogicModule.cpp:691
	// Declaration
	void CreateStateManagers() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSoundLogicModule.cpp:693
		using namespace CgsSound::Logic;

		// BrnSoundLogicModule.cpp:694
		using namespace Logic;

	}

	// BrnSoundLogicModule.cpp:724
	bool PrepareStateManagersOnBoot(int32_t);

	// BrnSoundLogicModule.cpp:772
	bool PrepareStateManagersOnEnteringGameplay(int32_t);

	// BrnSoundLogicModule.cpp:920
	virtual int32_t GetNumberOfStates();

	// BrnSoundLogicModule.cpp:1078
	void UpdateFrameInformation(float32_t, const LogicInputBuffer *, BrnUpdateSet, int32_t);

	// BrnSoundLogicModule.cpp:1739
	void ProcessGuiEvents(const InputBuffer::GuiEventQueue *);

	// BrnSoundLogicModule.cpp:1143
	void ProcessGameActionQueue(int32_t, const RootInputBuffer::GameActionQueue *);

	// BrnSoundLogicModule.cpp:1618
	void ProcessCameraFlags(const Camera &);

	// BrnSoundLogicModule.cpp:1691
	// Declaration
	void ProcessCarDataLoadingQueue(int32_t, const InputBuffer_PreScene::AudioCarLoadedDataQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSoundLogicModule.cpp:1693
		using namespace BrnWorld::RaceCarEntityModuleIO;

	}

	// BrnSoundLogicModule.cpp:1026
	void ProcessGameEventQueue(int32_t, const RootInputBuffer::GameEventQueue *);

	// BrnSoundLogicModule.cpp:995
	void ProcessStreamFreedQueue(const SoundLogicModule::FreedBuffersArray &);

	// BrnSoundLogicModule.cpp:2110
	void UpdateStatistics();

	// BrnSoundLogicModule.cpp:825
	void UpdateMicrophones(const LogicInputBuffer *);

}

// BrnSoundLogicModule.h:72
extern const uint32_t KU_MASTER_VOICE_ID = 1;

// BrnSoundRootSharedIO.h:25
namespace BrnSound {
	// BrnSoundRootSharedIO.h:26
	namespace Module {
		// Declaration
		struct SoundLogicModule {
		public:
			~SoundLogicModule();

			SoundLogicModule();

			// Unknown accessibility
			// BrnSoundLogicModule.h:58
			extern const int32_t KI_MAX_SOUND_TRIGGER_ACTIONS = 16;

		}

	}

}

// BrnSoundLogicModule.h:52
void BrnSound::Module::SoundLogicModule::~SoundLogicModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSoundLogicModule.h:52
void BrnSound::Module::SoundLogicModule::SoundLogicModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


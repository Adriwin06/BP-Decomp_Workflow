// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundLogicModuleIO.h:39
	namespace Logic {
		// Declaration
		struct StateManager {
			// CgsStateManager.h:117
			extern const uint16_t KU_SIZEOF_CLASS_ARRAY = 16;

		private:
			// CgsStateManager.h:370
			extern const uint8_t KI_NUMBER_OF_REGISTERED_CONTENTS = 4;

		}

	}

}

// CgsStateManager.h:117
extern const uint16_t KU_SIZEOF_CLASS_ARRAY = 16;

// CgsStateManager.h:370
extern const uint8_t KI_NUMBER_OF_REGISTERED_CONTENTS = 4;

// CgsCommon.h:25
namespace CgsSound {
	// CgsMemBase.h:38
	namespace Logic {
		// Declaration
		struct StateManager {
			// CgsStateManager.h:117
			extern const uint16_t KU_SIZEOF_CLASS_ARRAY = 16;

		private:
			// CgsStateManager.h:370
			extern const uint8_t KI_NUMBER_OF_REGISTERED_CONTENTS = 4;

		}

	}

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundLogicModuleIO.h:39
	namespace Logic {
		// Declaration
		struct StateManager {
			// CgsStateManager.h:136
			enum EPrepareState {
				E_PREPARE_NONE = 0,
				E_PREPARE_BEGIN = 1,
				E_PREPARE_UPDATEING = 2,
				E_PREPARE_STATES = 3,
				E_PREPARE_FINISHED = 4,
				E_PREPARE_RELEASED = 5,
			}

			// CgsStateManager.h:286
			enum EStatePrepareState {
				E_STATE_PREPARE_STATE_CREATE = 0,
				E_STATE_PREPARE_STATE_PREPARING = 1,
			}

			// CgsStateManager.h:352
			struct RegisteredContent {
				// CgsStateManager.h:358
				Name mName;

				// CgsStateManager.h:359
				CgsSound::Logic::Content mContentObject;

			public:
				// CgsStateManager.h:356
				void Construct(Name);

			}

		}

	}

}

// CgsStateManager.h:112
struct CgsSound::Logic::StateManager : public CgsSound::MemBase {
protected:
	// CgsStateManager.cpp:53
	extern ClassTypeInfo<CgsSound::Logic::StateManager> sTypeInfo;

	// Unknown accessibility
	// CgsStateManager.h:117
	extern const uint16_t KU_SIZEOF_CLASS_ARRAY = 16;

	// Unknown accessibility
	// CgsStateManager.cpp:53
	extern ClassTypeInfo<CgsSound::Logic::StateManager> *[16] ClassTypeInfoArray;

	// CgsStateManager.h:335
	float32_t mfCurrentTime;

	// CgsStateManager.h:336
	float32_t mfDeltaTime;

	// CgsStateManager.h:338
	float32_t mfTimeStepGame;

	// CgsStateManager.h:339
	float32_t mfTimeStepSimulation;

	// CgsStateManager.h:341
	int32_t meMapState;

	// CgsStateManager.h:342
	CgsSound::Logic::State * mpHeadState;

	// CgsStateManager.h:343
	int32_t miNumStates;

	// CgsStateManager.h:345
	int32_t miStateManId;

	// CgsStateManager.h:347
	CgsSound::Logic::StateManager::EPrepareState mePrepareState;

	// CgsStateManager.h:348
	CgsSound::Logic::StateManager::EStatePrepareState meStatePrepareState;

private:
	// CgsStateManager.h:367
	CgsSound::Logic::Module * mpLogicModule;

	// CgsStateManager.h:370
	extern const uint8_t KI_NUMBER_OF_REGISTERED_CONTENTS = 4;

	// CgsStateManager.h:373
	ObjectPool<CgsSound::Logic::StateManager::RegisteredContent,4,int32_t> mRegisteredContentPool;

public:
	void StateManager(const StateManager &);

	// CgsStateManager.cpp:53
	virtual ClassTypeInfo<CgsSound::Logic::StateManager> * GetTypeInfo() const;

	// CgsStateManager.cpp:53
	virtual const char * GetTypeName() const;

	// CgsStateManager.cpp:53
	ClassTypeInfo<CgsSound::Logic::StateManager> * GetStaticTypeInfo();

	// CgsStateManager.cpp:53
	bool IsOfExactType(const ClassTypeInfo<CgsSound::Logic::StateManager> *) const;

	// CgsStateManager.cpp:53
	bool IsOfType(const ClassTypeInfo<CgsSound::Logic::StateManager> *) const;

	// CgsStateManager.cpp:66
	void StateManager();

	// CgsStateManager.cpp:90
	virtual void ~StateManager();

	// CgsStateManager.cpp:460
	virtual bool Prepare();

	// CgsStateManager.cpp:597
	virtual bool Release();

	// CgsStateManager.h:427
	CgsSound::Logic::StateManager::EPrepareState GetPrepareState();

	// CgsStateManager.cpp:104
	void DisconnectMixMap();

	// CgsStateManager.cpp:473
	virtual CgsSound::Logic::State * GetFreeState(void *);

	// CgsStateManager.cpp:497
	virtual void UpdateParams(float32_t);

	// CgsStateManager.cpp:525
	virtual void ProcessUpdate();

	// CgsStateManager.cpp:633
	// Declaration
	virtual void Notify(const CgsSound::Io::MessageHeader *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsStateManager.cpp:635
		using namespace Io;

	}

	// CgsStateManager.h:189
	int32_t GetStateType();

	// CgsStateManager.h:412
	void SetStateType(int32_t);

	// CgsStateManager.cpp:550
	CgsSound::Logic::State * GetStateObj(int32_t);

	// CgsStateManager.cpp:574
	CgsSound::Logic::State * GetStateObj(void *);

	// CgsStateManager.h:205
	int32_t GetStateObjCount() const;

	// CgsStateManager.cpp:647
	int32_t GetAttachedStateCount();

	// CgsStateManager.h:396
	CgsSound::Logic::Module * GetLogicModule() const;

	// CgsStateManager.h:217
	float32_t GetTimeStepGame() const;

	// CgsStateManager.h:220
	float32_t GetTimeStepSimulation() const;

	// CgsStateManager.h:223
	void SetTimeStepGame(float32_t);

	// CgsStateManager.h:226
	void SetTimeStepSimulation(float32_t);

	// CgsStateManager.h:229
	float32_t GetCurTime() const;

	// CgsStateManager.h:233
	void SetCurrentTime(float32_t);

	// CgsStateManager.cpp:130
	virtual bool IsDataLoaded();

	// CgsStateManager.cpp:416
	CgsSound::Logic::StateManager * CreateStateMan(int32_t, CgsSound::Logic::Module *);

	// CgsStateManager.h:471
	Content * RegisterContent(Name);

	// CgsStateManager.h:444
	bool RemoveContent(Name);

	// CgsStateManager.h:493
	const CgsSound::Logic::Content * GetContent(Name) const;

protected:
	// CgsStateManager.cpp:321
	CgsSound::Logic::State * CreateState(int32_t);

	// CgsStateManager.cpp:155
	CgsSound::Logic::EffectBase * CreateEffectObject(int32_t, int32_t);

	// CgsStateManager.cpp:241
	CgsSound::Logic::EffectBase * CreateEffectControl(int32_t, int32_t);

	// CgsStateManager.h:312
	virtual bool IsStateAlias(int32_t);

	// CgsStateManager.cpp:675
	bool PrepareStates(int32_t, uint32_t, int32_t);

	// CgsStateManager.h:516
	bool IsPrepared() const;

}


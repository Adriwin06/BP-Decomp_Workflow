// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundLogicModuleIO.h:39
	namespace Logic {
		// Declaration
		struct State {
			// CgsState.h:135
			extern const uint16_t KU_SIZEOF_CLASS_ARRAY = 16;

		}

		// CgsState.h:57
		const int32_t MAX_NUM_SFXOBJS_PER_STATE = 32;

	}

}

// CgsState.h:135
extern const uint16_t KU_SIZEOF_CLASS_ARRAY = 16;

// CgsCommon.h:25
namespace CgsSound {
	// CgsMemBase.h:38
	namespace Logic {
		// Declaration
		struct State {
			// CgsState.h:135
			extern const uint16_t KU_SIZEOF_CLASS_ARRAY = 16;

		}

		// CgsState.h:57
		const int32_t MAX_NUM_SFXOBJS_PER_STATE = 32;

	}

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundLogicModuleIO.h:39
	namespace Logic {
		// Declaration
		struct State {
			// CgsState.h:137
			enum EUpdateState {
				E_UPDATE_UNATTACHED = 0,
				E_INITIALIZE_CONTROLS = 1,
				E_INITIALIZE_CONTROLS_UPDATE = 2,
				E_INITIALIZE_EFFECTS = 3,
				E_INITIALIZE_EFFECTS_UPDATE = 4,
				E_UPDATE_ATTACHED = 5,
				E_UPDATE_DETATCHING = 6,
			}

			// CgsState.h:149
			enum EPrepareState {
				E_PREPARE_STATE_CREATE_OBJECTS = 0,
				E_PREPARE_STATE_OBJECTS = 1,
				E_PREPARE_STATE_CONTROLS = 2,
				E_PREPARE_STATE_DONE = 3,
			}

		}

		// CgsState.h:57
		const int32_t MAX_NUM_SFXOBJS_PER_STATE = 32;

	}

}

// CgsState.h:132
struct CgsSound::Logic::State : public CgsSound::MemBase {
protected:
	// CgsState.cpp:37
	extern ClassTypeInfo<CgsSound::Logic::State> sTypeInfo;

	// Unknown accessibility
	// CgsState.h:135
	extern const uint16_t KU_SIZEOF_CLASS_ARRAY = 16;

	// Unknown accessibility
	// CgsState.cpp:37
	extern ClassTypeInfo<CgsSound::Logic::State> *[16] ClassTypeInfoArray;

	// Unknown accessibility
	// CgsState.h:284
	int32_t miInstNum;

	// Unknown accessibility
	// CgsState.h:285
	int32_t meMapState;

	// Unknown accessibility
	// CgsState.h:286
	int32_t miStateInstType;

	// Unknown accessibility
	// CgsState.h:287
	void * mpvAttachment;

	// CgsState.h:328
	CgsSound::Logic::State * mpPrevState;

	// CgsState.h:329
	CgsSound::Logic::State * mpNextState;

	// CgsState.h:330
	CgsSound::Logic::EffectBase * mpHeadEffectControl;

	// CgsState.h:331
	CgsSound::Logic::EffectBase * mpHeadEffectObject;

	// CgsState.h:332
	CgsSound::Logic::StateManager * mpStateManager;

	// CgsState.h:333
	CgsSound::Logic::Module * mpLogicModule;

	// CgsState.h:335
	int32_t miSFXFlags;

	// CgsState.h:336
	int32_t miNumLoadedEffectObjects;

	// CgsState.h:337
	int32_t miNumLoadedEffectControls;

private:
	// CgsState.h:344
	DataPoint<CgsSound::Logic::State::EUpdateState> meUpdateState;

	// CgsState.h:345
	CgsSound::Logic::State::EPrepareState mePrepareState;

	// CgsState.h:346
	CgsSound::Logic::EffectBase * mpCurrentEffect;

	// CgsState.h:347
	bool mbIsAttached;

	// CgsState.h:348
	float32_t mfCurTime;

	// CgsState.h:349
	float32_t mfDeltaTime;

public:
	void State(const State &);

	// CgsState.cpp:37
	virtual ClassTypeInfo<CgsSound::Logic::State> * GetTypeInfo() const;

	// CgsState.cpp:37
	virtual const char * GetTypeName() const;

	// CgsState.cpp:37
	ClassTypeInfo<CgsSound::Logic::State> * GetStaticTypeInfo();

	// CgsState.cpp:37
	bool IsOfExactType(const ClassTypeInfo<CgsSound::Logic::State> *) const;

	// CgsState.cpp:37
	bool IsOfType(const ClassTypeInfo<CgsSound::Logic::State> *) const;

	// CgsState.h:370
	void State();

	// CgsState.cpp:135
	virtual void ~State();

	// CgsState.cpp:59
	bool Prepare(int32_t, CgsSound::Logic::StateManager *);

	// CgsState.cpp:795
	virtual void Attach(void *);

	// CgsState.cpp:519
	virtual void UpdateParams(float32_t);

	// CgsState.cpp:491
	virtual void ProcessUpdate();

	// CgsState.cpp:880
	virtual bool Detach();

	// CgsState.cpp:722
	// Declaration
	virtual void Notify(const CgsSound::Io::MessageHeader *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsState.cpp:724
		using namespace Io;

	}

	// CgsState.h:479
	int32_t GetInstanceID() const;

	// CgsState.h:510
	int32_t GetStateType() const;

	// CgsState.h:494
	DataPoint<CgsSound::Logic::State::EUpdateState> GetUpdateState() const;

	// CgsState.cpp:737
	CgsSound::Logic::EffectBase * GetEffectObject(int32_t);

	// CgsState.cpp:758
	CgsSound::Logic::EffectBase * GetEffectControl(int32_t);

	// CgsState.cpp:148
	void DisconnectMixMap();

	// CgsState.cpp:239
	void ForceCreateEffectControls(int32_t);

	// CgsState.h:227
	float32_t GetCurTime();

	// CgsState.h:231
	void SetCurrentTime(float32_t);

	// CgsState.h:234
	float32_t GetDeltaTime();

	// CgsState.cpp:780
	bool IsDataLoaded();

	// CgsState.h:241
	bool IsAttached() const;

	// CgsState.h:245
	virtual bool IsAttachedToThis(void *);

	// CgsState.h:252
	CgsSound::Logic::EffectBase * GetHeadEffectObject();

	// CgsState.h:255
	CgsSound::Logic::EffectBase * GetHeadEffectControl();

	// CgsState.h:407
	CgsSound::Logic::StateManager * GetStateManager() const;

	// CgsState.h:451
	CgsSound::Logic::State * GetNextState() const;

	// CgsState.h:465
	CgsSound::Logic::State * GetPreviousState() const;

	// CgsState.h:422
	CgsSound::Logic::Module * GetLogicModule() const;

	// CgsState.h:275
	void * GetAttachment() const;

	// CgsState.h:436
	void SetLogicModule(CgsSound::Logic::Module *);

protected:
	// CgsState.cpp:258
	void CreateSFXCtrls();

	// CgsState.cpp:218
	void CreateSFXObjs();

	// CgsState.cpp:683
	void DestroyEffects();

	// CgsState.cpp:831
	bool AttachEffect();

	// CgsState.cpp:388
	void NewSFXObj(int32_t);

	// CgsState.cpp:424
	CgsSound::Logic::EffectBase * NewSFXCtrl(int32_t);

	// CgsState.cpp:468
	CgsSound::Logic::EffectBase * HasCtrlBeenAdded(int32_t);

	// CgsState.cpp:322
	void SortSFXCtl();

}


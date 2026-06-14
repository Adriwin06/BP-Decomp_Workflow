// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundLogicModuleIO.h:39
	namespace Logic {
		// Declaration
		struct EffectControl {
			// CgsEffectBase.h:765
			extern const uint16_t KU_SIZEOF_CLASS_ARRAY = 64;

		}

		// CgsEffectBase.h:57
		const int32_t KI_MAX_IO_CONNECTIONS = 16;

	}

}

// CgsEffectBase.h:313
struct CgsSound::Logic::ClassTypeInfo<CgsSound::Logic::State> {
	// CgsEffectBase.h:316
	int32_t ObjectID;

	// CgsEffectBase.h:317
	const char * typeName;

	// CgsEffectBase.h:318
	ClassTypeInfo<CgsSound::Logic::State> * baseTypeInfo;

	// CgsEffectBase.h:319
	CgsSound::Logic::State *(*)(unsigned int) createObject;

public:
	// CgsEffectBase.h:326
	void ClassTypeInfo(int, const char *, ClassTypeInfo<CgsSound::Logic::State> *, CgsSound::Logic::State *(*)(unsigned int));

	// CgsEffectBase.h:344
	CgsSound::Logic::State * CreateObject(unsigned int);

private:
	// CgsEffectBase.h:351
	void AddToClassTypeInfoArray();

}

// CgsEffectBase.h:313
struct CgsSound::Logic::ClassTypeInfo<CgsSound::Logic::StateManager> {
	// CgsEffectBase.h:316
	int32_t ObjectID;

	// CgsEffectBase.h:317
	const char * typeName;

	// CgsEffectBase.h:318
	ClassTypeInfo<CgsSound::Logic::StateManager> * baseTypeInfo;

	// CgsEffectBase.h:319
	CgsSound::Logic::StateManager *(*)(unsigned int) createObject;

public:
	// CgsEffectBase.h:326
	void ClassTypeInfo(int, const char *, ClassTypeInfo<CgsSound::Logic::StateManager> *, CgsSound::Logic::StateManager *(*)(unsigned int));

	// CgsEffectBase.h:344
	CgsSound::Logic::StateManager * CreateObject(unsigned int);

private:
	// CgsEffectBase.h:351
	void AddToClassTypeInfoArray();

}

// CgsEffectBase.h:313
struct CgsSound::Logic::ClassTypeInfo<CgsSound::Logic::EffectControl> {
	// CgsEffectBase.h:316
	int32_t ObjectID;

	// CgsEffectBase.h:317
	const char * typeName;

	// CgsEffectBase.h:318
	ClassTypeInfo<CgsSound::Logic::EffectControl> * baseTypeInfo;

	// CgsEffectBase.h:319
	CgsSound::Logic::EffectControl *(*)(unsigned int) createObject;

public:
	// CgsEffectBase.h:326
	void ClassTypeInfo(int, const char *, ClassTypeInfo<CgsSound::Logic::EffectControl> *, CgsSound::Logic::EffectControl *(*)(unsigned int));

	// CgsEffectBase.h:344
	CgsSound::Logic::EffectControl * CreateObject(unsigned int);

private:
	// CgsEffectBase.h:351
	void AddToClassTypeInfoArray();

}

// CgsEffectBase.h:765
extern const uint16_t KU_SIZEOF_CLASS_ARRAY = 64;

// CgsEffectBase.h:774
extern const uint16_t KU_SIZEOF_CLASS_ARRAY = 64;

// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundLogicModuleIO.h:39
	namespace Logic {
		// Declaration
		struct EffectControl {
			// CgsEffectBase.h:765
			extern const uint16_t KU_SIZEOF_CLASS_ARRAY = 64;

		}

		// Declaration
		struct EffectObject {
			// CgsEffectBase.h:774
			extern const uint16_t KU_SIZEOF_CLASS_ARRAY = 64;

		}

		// CgsEffectBase.h:57
		const int32_t KI_MAX_IO_CONNECTIONS = 16;

	}

}

// CgsEffectBase.h:313
struct CgsSound::Logic::ClassTypeInfo<CgsSound::Logic::EffectObject> {
	// CgsEffectBase.h:316
	int32_t ObjectID;

	// CgsEffectBase.h:317
	const char * typeName;

	// CgsEffectBase.h:318
	ClassTypeInfo<CgsSound::Logic::EffectObject> * baseTypeInfo;

	// CgsEffectBase.h:319
	CgsSound::Logic::EffectObject *(*)(unsigned int) createObject;

public:
	// CgsEffectBase.h:326
	void ClassTypeInfo(int, const char *, ClassTypeInfo<CgsSound::Logic::EffectObject> *, CgsSound::Logic::EffectObject *(*)(unsigned int));

	// CgsEffectBase.h:344
	CgsSound::Logic::EffectObject * CreateObject(unsigned int);

private:
	// CgsEffectBase.h:351
	void AddToClassTypeInfoArray();

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsMemBase.h:38
	namespace Logic {
		// Declaration
		struct EffectControl {
			// CgsEffectBase.h:765
			extern const uint16_t KU_SIZEOF_CLASS_ARRAY = 64;

		}

		// CgsEffectBase.h:57
		const int32_t KI_MAX_IO_CONNECTIONS = 16;

	}

	// CgsEffectBase.h:44
	namespace Io {
		struct Command;

	}

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundLogicModuleIO.h:39
	namespace Logic {
		// Declaration
		struct EffectBase {
			// CgsEffectBase.h:382
			enum EAttachState {
				E_ATTACH_STATE_NONE = 0,
				E_ATTACH_STATE_WAITING_FOR_DATA = 1,
				E_ATTACH_STATE_PREPARING = 2,
				E_ATTACH_STATE_FINISHED = 3,
			}

			// CgsEffectBase.h:390
			enum EDetachState {
				E_DETACH_STATE_NONE = 0,
				E_DETACH_STATE_BEGIN = 1,
				E_DETACH_STATE_UPDATING = 2,
				E_DETACH_STATE_FINISHED = 3,
			}

		}

		// CgsEffectBase.h:57
		const int32_t KI_MAX_IO_CONNECTIONS = 16;

	}

}

// CgsEffectBase.h:379
struct CgsSound::Logic::EffectBase : public CgsSound::MemBase {
	// CgsEffectBase.h:398
	extern const int32_t KI_MAX_SFX_CTLS = 32;

	// CgsEffectBase.h:681
	CgsSound::Logic::EffectBase * mpNextEffectBase;

protected:
	// CgsEffectBase.h:735
	CgsSound::Logic::State * mpState;

	// CgsEffectBase.h:736
	uint16_t mu16RefCount;

	// CgsEffectBase.h:737
	uint16_t mu16AttachCount;

	// CgsEffectBase.h:738
	uint16_t mu16AllocatorIndex;

	// CgsEffectBase.h:739
	int32_t miObjectId;

	// CgsEffectBase.h:741
	float32_t mfRunningTime;

	// CgsEffectBase.h:742
	float32_t mfDeltaTime;

	// CgsEffectBase.h:746
	CgsSound::Logic::EffectBase::EAttachState meAttachState;

	// CgsEffectBase.h:747
	CgsSound::Logic::EffectBase::EDetachState meDetachState;

private:
	// CgsEffectBase.h:752
	CgsSound::Logic::Module * mpLogicModule;

	// CgsEffectBase.h:753
	bool mbEnabled;

	// CgsEffectBase.h:754
	bool mbHasLoadedData;

	// CgsEffectBase.h:757
	Nicotine::DMixIO * mpDynamicMixIo;

public:
	void EffectBase(const EffectBase &);

	// CgsEffectBase.cpp:57
	void EffectBase();

	// CgsEffectBase.cpp:80
	virtual void ~EffectBase();

	// CgsEffectBase.h:939
	int32_t GetStateId();

	// CgsEffectBase.h:953
	int32_t GetInstanceId();

	// CgsEffectBase.h:966
	int32_t GetEffectID();

	// CgsEffectBase.h:980
	int32_t GetId();

	// CgsEffectBase.h:995
	void SetId(int32_t);

	// CgsEffectBase.h:458
	virtual int32_t GetController(int32_t);

	// CgsEffectBase.h:468
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// CgsEffectBase.cpp:157
	virtual bool Prepare(CgsSound::Logic::State *);

	// CgsEffectBase.h:490
	void OnAttach();

	// CgsEffectBase.h:507
	virtual void SetupLoadData();

	// CgsEffectBase.cpp:174
	virtual bool Attach();

	// CgsEffectBase.cpp:136
	virtual void UpdateParams(float32_t);

	// CgsEffectBase.h:537
	virtual void ProcessUpdate();

	// CgsEffectBase.h:546
	virtual bool Detach();

	// CgsEffectBase.cpp:228
	// Declaration
	virtual void Notify(const CgsSound::Io::MessageHeader *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsEffectBase.cpp:231
		using namespace Io;

	}

	// CgsEffectBase.h:571
	bool IsEnabled();

	// CgsEffectBase.h:575
	void Enable();

	// CgsEffectBase.h:579
	void Disable();

	// CgsEffectBase.cpp:192
	void TurnOffMixer();

	// CgsEffectBase.cpp:208
	void TurnOnMixer();

	// CgsEffectBase.h:810
	void SetMixerInputValue(int32_t, int32_t);

	// CgsEffectBase.h:609
	void SetMixerInputValue(int32_t, float32_t);

	// CgsEffectBase.h:832
	int32_t GetMixerInputValue(int32_t) const;

	// CgsEffectBase.h:852
	float32_t GetMixerOutputValue(int32_t, Nicotine::DMixIO::DMX_PRESET_TYPE) const;

	// CgsEffectBase.h:874
	float32_t GetRWACMixerOutputValue(int32_t, Nicotine::DMixIO::DMX_PRESET_TYPE) const;

	// CgsEffectBase.h:914
	void SetDMixIOPtr(Nicotine::DMixIO *);

	// CgsEffectBase.h:928
	Nicotine::DMixIO * GetDMixIOPtr();

	// CgsEffectBase.cpp:114
	bool IsMixInConnected();

	// CgsEffectBase.cpp:94
	bool IsMixOutConnected();

	// CgsEffectBase.h:668
	void SetStateBase(CgsSound::Logic::State *);

	// CgsEffectBase.h:671
	CgsSound::Logic::State * GetStateBase() const;

	// CgsEffectBase.h:792
	CgsSound::Logic::Module * GetLogicModule() const;

	// CgsEffectBase.h:1017
	uint16_t GetAttachCount() const;

	// CgsEffectBase.h:1036
	void UpdateTime(float32_t, float32_t);

	// CgsEffectBase.h:700
	bool HasLoadedData() const;

	// CgsEffectBase.h:712
	void HasLoadedData(bool);

	// CgsEffectBase.h:1054
	CgsSound::Logic::EffectBase::EAttachState GetAttachState() const;

	// CgsEffectBase.h:1070
	void SetAttachState(CgsSound::Logic::EffectBase::EAttachState);

	// CgsEffectBase.h:729
	virtual void Destroy();

}

// CgsEffectBase.h:763
struct CgsSound::Logic::EffectControl : public EffectBase {
protected:
	// CgsEffectBase.cpp:47
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

	// Unknown accessibility
	// CgsEffectBase.h:765
	extern const uint16_t KU_SIZEOF_CLASS_ARRAY = 64;

	// Unknown accessibility
	// CgsEffectBase.cpp:47
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> *[64] ClassTypeInfoArray;

public:
	void EffectControl();

	void EffectControl(const EffectControl &);

	// CgsEffectBase.cpp:47
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// CgsEffectBase.cpp:47
	virtual const char * GetTypeName() const;

	// CgsEffectBase.cpp:47
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// CgsEffectBase.cpp:47
	bool IsOfExactType(const ClassTypeInfo<CgsSound::Logic::EffectControl> *) const;

	// CgsEffectBase.cpp:47
	bool IsOfType(const ClassTypeInfo<CgsSound::Logic::EffectControl> *) const;

	virtual void ~EffectControl();

}

// CgsEffectBase.h:772
struct CgsSound::Logic::EffectObject : public EffectBase {
protected:
	// CgsEffectBase.cpp:45
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

	// Unknown accessibility
	// CgsEffectBase.h:774
	extern const uint16_t KU_SIZEOF_CLASS_ARRAY = 64;

	// Unknown accessibility
	// CgsEffectBase.cpp:45
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> *[64] ClassTypeInfoArray;

public:
	void EffectObject();

	void EffectObject(const EffectObject &);

	// CgsEffectBase.cpp:45
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// CgsEffectBase.cpp:45
	virtual const char * GetTypeName() const;

	// CgsEffectBase.cpp:45
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// CgsEffectBase.cpp:45
	bool IsOfExactType(const ClassTypeInfo<CgsSound::Logic::EffectObject> *) const;

	// CgsEffectBase.cpp:45
	bool IsOfType(const ClassTypeInfo<CgsSound::Logic::EffectObject> *) const;

	virtual void ~EffectObject();

}

// CgsEffectBase.h:772
void CgsSound::Logic::EffectObject::EffectObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEffectBase.h:772
void CgsSound::Logic::EffectObject::~EffectObject() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEffectBase.h:763
void CgsSound::Logic::EffectControl::EffectControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEffectBase.h:763
void CgsSound::Logic::EffectControl::~EffectControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEffectBase.h:398
extern const int32_t KI_MAX_SFX_CTLS = 32;


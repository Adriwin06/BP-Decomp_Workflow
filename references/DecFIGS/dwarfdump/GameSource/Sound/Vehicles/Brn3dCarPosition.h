// Brn3dCarPosition.h:114
struct BrnSound::Vehicles::RightSide3dControl : public BrnSound::Vehicles::Car3DControl {
protected:
	// Brn3dCarPosition.cpp:49
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

public:
	void RightSide3dControl(const RightSide3dControl &);

	void RightSide3dControl();

	// Brn3dCarPosition.cpp:49
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// Brn3dCarPosition.cpp:49
	virtual const char * GetTypeName() const;

	// Brn3dCarPosition.h:116
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// Brn3dCarPosition.cpp:49
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// Brn3dCarPosition.cpp:312
	virtual Vector3 GetPositionOffset() const;

	virtual void ~RightSide3dControl();

}

// Brn3dCarPosition.h:104
struct BrnSound::Vehicles::LeftSide3dControl : public BrnSound::Vehicles::Car3DControl {
protected:
	// Brn3dCarPosition.cpp:45
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

public:
	void LeftSide3dControl(const LeftSide3dControl &);

	void LeftSide3dControl();

	// Brn3dCarPosition.cpp:45
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// Brn3dCarPosition.cpp:45
	virtual const char * GetTypeName() const;

	// Brn3dCarPosition.h:106
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// Brn3dCarPosition.cpp:45
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// Brn3dCarPosition.cpp:306
	virtual Vector3 GetPositionOffset() const;

	virtual void ~LeftSide3dControl();

}

// Brn3dCarPosition.h:94
struct BrnSound::Vehicles::Exhaust3dControl : public BrnSound::Vehicles::Car3DControl {
protected:
	// Brn3dCarPosition.cpp:41
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

public:
	void Exhaust3dControl(const Exhaust3dControl &);

	void Exhaust3dControl();

	// Brn3dCarPosition.cpp:41
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// Brn3dCarPosition.cpp:41
	virtual const char * GetTypeName() const;

	// Brn3dCarPosition.h:96
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// Brn3dCarPosition.cpp:41
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// Brn3dCarPosition.cpp:282
	virtual Vector3 GetPositionOffset() const;

	virtual void ~Exhaust3dControl();

}

// Brn3dCarPosition.h:84
struct BrnSound::Vehicles::Engine3dControl : public BrnSound::Vehicles::Car3DControl {
protected:
	// Brn3dCarPosition.cpp:37
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

public:
	void Engine3dControl(const Engine3dControl &);

	void Engine3dControl();

	// Brn3dCarPosition.cpp:37
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// Brn3dCarPosition.cpp:37
	virtual const char * GetTypeName() const;

	// Brn3dCarPosition.h:86
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// Brn3dCarPosition.cpp:37
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// Brn3dCarPosition.cpp:264
	virtual Vector3 GetPositionOffset() const;

	virtual void ~Engine3dControl();

}

// Brn3dCarPosition.h:34
struct BrnSound::Vehicles::Car3DControl : public BrnSound::Logic::Brn3DEffectControl {
protected:
	// Brn3dCarPosition.cpp:32
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

	// Brn3dCarPosition.h:76
	Vector3 mCarPosition;

	// Brn3dCarPosition.h:77
	BrnSound::Vehicles::Engines::PhysicsControl * mpPhysicsControl;

	// Brn3dCarPosition.h:79
	bool mbIsStereo;

public:
	void Car3DControl(const Car3DControl &);

	// Brn3dCarPosition.cpp:32
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// Brn3dCarPosition.cpp:32
	virtual const char * GetTypeName() const;

	// Brn3dCarPosition.h:36
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// Brn3dCarPosition.cpp:32
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// Brn3dCarPosition.cpp:67
	void Car3DControl();

	// Brn3dCarPosition.cpp:243
	virtual bool Prepare(CgsSound::Logic::State *);

	// Brn3dCarPosition.cpp:85
	virtual bool Attach();

	// Brn3dCarPosition.cpp:111
	virtual void UpdateParams(float32_t);

	// Brn3dCarPosition.cpp:188
	virtual int32_t GetController(int32_t);

	// Brn3dCarPosition.cpp:213
	virtual void AttachController(CgsSound::Logic::EffectBase *);

protected:
	// Brn3dCarPosition.cpp:168
	virtual Vector3 GetPositionOffset() const;

public:
	virtual void ~Car3DControl();

}

// Brn3dCarPosition.h:34
void BrnSound::Vehicles::Car3DControl::~Car3DControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Brn3dCarPosition.h:114
void BrnSound::Vehicles::RightSide3dControl::~RightSide3dControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Brn3dCarPosition.h:104
void BrnSound::Vehicles::LeftSide3dControl::~LeftSide3dControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Brn3dCarPosition.h:94
void BrnSound::Vehicles::Exhaust3dControl::~Exhaust3dControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Brn3dCarPosition.h:84
void BrnSound::Vehicles::Engine3dControl::~Engine3dControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Brn3dCarPosition.h:84
void BrnSound::Vehicles::Engine3dControl::Engine3dControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Brn3dCarPosition.h:94
void BrnSound::Vehicles::Exhaust3dControl::Exhaust3dControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Brn3dCarPosition.h:104
void BrnSound::Vehicles::LeftSide3dControl::LeftSide3dControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// Brn3dCarPosition.h:114
void BrnSound::Vehicles::RightSide3dControl::RightSide3dControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


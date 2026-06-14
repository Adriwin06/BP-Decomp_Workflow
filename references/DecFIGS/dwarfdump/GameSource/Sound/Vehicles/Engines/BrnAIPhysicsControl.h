// BrnAIPhysicsControl.h:55
struct BrnSound::Vehicles::Engines::AIPhysicsControl : public BrnSound::Vehicles::Engines::PhysicsControl {
protected:
	// BrnAIPhysicsControl.cpp:59
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

private:
	// BrnAIPhysicsControl.h:88
	Average<9u,float32_t> mAverageRPM;

	// BrnAIPhysicsControl.h:89
	Average<25u,float32_t> mAverageWheelVel;

	// BrnAIPhysicsControl.h:90
	Average<9u,rw::math::vpu::Vector3> mAverageVelocity;

	// BrnAIPhysicsControl.h:91
	Average<9u,float32_t> mAverageSpeedMps;

	// Unknown accessibility
	// BrnAIPhysicsControl.h:42
	typedef Engine PhysicsEngine;

	// BrnAIPhysicsControl.h:93
	AIPhysicsControl::PhysicsEngine mPhysicsEngine;

	// BrnAIPhysicsControl.h:96
	float32_t mfPassbyTriggered;

	// BrnAIPhysicsControl.h:97
	float32_t mfNearMissPassby;

	// BrnAIPhysicsControl.h:99
	uint8_t mu8NotOccludedCount;

	// BrnAIPhysicsControl.h:100
	bool mbIsCurrentlyOccluded;

	// BrnAIPhysicsControl.h:101
	bool mbEnableOcclusion;

	// BrnAIPhysicsControl.h:102
	bool mbInsideRadius;

public:
	void AIPhysicsControl(const AIPhysicsControl &);

	// BrnAIPhysicsControl.cpp:59
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnAIPhysicsControl.cpp:59
	virtual const char * GetTypeName() const;

	// BrnAIPhysicsControl.h:56
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnAIPhysicsControl.cpp:59
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// BrnAIPhysicsControl.cpp:86
	void AIPhysicsControl();

	// BrnAIPhysicsControl.cpp:102
	virtual void ~AIPhysicsControl();

	// BrnAIPhysicsControl.cpp:118
	virtual bool Attach();

	// BrnAIPhysicsControl.cpp:149
	virtual void UpdateParams(float32_t);

	// BrnAIPhysicsControl.cpp:459
	virtual void Notify(const CgsSound::Io::MessageHeader *);

private:
	// BrnAIPhysicsControl.cpp:362
	void PlayPassBy(float32_t, bool);

	// BrnAIPhysicsControl.cpp:412
	virtual void UpdateCollisionPassbys(float32_t);

	// BrnAIPhysicsControl.cpp:441
	virtual void UpdateFx(float32_t);

	// BrnAIPhysicsControl.cpp:426
	virtual void UpdateCrashStreams();

	// BrnAIPhysicsControl.cpp:268
	void UpdateAIPassbys(float32_t);

	// BrnAIPhysicsControl.cpp:511
	virtual void UpdateStartLineReving(float32_t);

}


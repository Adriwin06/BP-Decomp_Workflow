// BrnCollisionControl.h:38
struct BrnSound::Logic::Collision::CollisionControl : public BrnSound::Logic::BrnEffectControl {
protected:
	// BrnCollisionControl.cpp:32
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

private:
	// BrnCollisionControl.h:105
	BrnSound::Logic::Collision::Collision3DControl * mpCollision3DControl;

	// BrnCollisionControl.h:106
	BrnSound::Logic::Collision::CollisionState * mpCollisionState;

	// BrnCollisionControl.h:107
	DataPoint<BrnSound::Logic::Collision::ScrapeInfo> mScrapeInfo;

	// BrnCollisionControl.h:108
	bool mbCollisionFinished;

public:
	void CollisionControl(const CollisionControl &);

	// BrnCollisionControl.cpp:32
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnCollisionControl.cpp:32
	virtual const char * GetTypeName() const;

	// BrnCollisionControl.h:41
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnCollisionControl.cpp:32
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// BrnCollisionControl.cpp:51
	void CollisionControl();

	// BrnCollisionControl.cpp:67
	virtual void ~CollisionControl();

	// BrnCollisionControl.cpp:84
	virtual bool Attach();

	// BrnCollisionControl.cpp:182
	virtual void UpdateParams(float32_t);

	// BrnCollisionControl.h:65
	BrnSound::Logic::Collision::CollisionState * GetCollisionState() const;

	// BrnCollisionControl.h:71
	const DataPoint<BrnSound::Logic::Collision::ScrapeInfo> & GetScrapeInfo() const;

	// BrnCollisionControl.cpp:123
	virtual int32_t GetController(int32_t);

	// BrnCollisionControl.cpp:151
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnCollisionControl.h:90
	void SetCollisionFinished(bool);

	// BrnCollisionControl.h:96
	bool GetCollisionFinished() const;

}


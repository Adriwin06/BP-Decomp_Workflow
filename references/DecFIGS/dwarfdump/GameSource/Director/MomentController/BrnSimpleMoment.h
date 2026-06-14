// BrnSimpleMoment.h:47
struct BrnDirector::SimpleMoment : public BrnDirector::Moment {
private:
	// BrnSimpleMoment.h:106
	const BrnDirector::Moment::Parameters * mpParameters;

public:
	// BrnSimpleMoment.cpp:34
	virtual void Construct();

	// BrnSimpleMoment.cpp:53
	virtual bool Prepare(BehaviourManager &);

	// BrnSimpleMoment.cpp:70
	virtual void Update(float32_t, BehaviourManager &, const MomentSharedInfo &);

	// BrnSimpleMoment.cpp:146
	virtual bool Release();

	// BrnSimpleMoment.cpp:161
	virtual void Destruct();

protected:
	// BrnSimpleMoment.h:72
	virtual void ConstructResources();

	// BrnSimpleMoment.h:78
	virtual bool TestInitialConditions(float32_t, BehaviourManager &, const MomentSharedInfo &) const;

	// BrnSimpleMoment.cpp:177
	virtual bool TestContinuingConditions(float32_t, BehaviourManager &, const MomentSharedInfo &) const;

	// BrnSimpleMoment.h:89
	virtual bool PrepareResources(BehaviourManager &, const MomentSharedInfo &);

	// BrnSimpleMoment.h:94
	virtual bool HasValidResources(BehaviourManager &, const MomentSharedInfo &) const;

	// BrnSimpleMoment.h:99
	virtual void UpdateCamera(BehaviourManager &, const MomentSharedInfo &);

	// BrnSimpleMoment.h:102
	virtual bool ReleaseResources();

}


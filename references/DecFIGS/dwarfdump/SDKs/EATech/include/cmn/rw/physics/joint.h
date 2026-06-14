// joint.h:75
struct rw::physics::Joint {
	// jointframes.h:185
	typedef JointFrames * JointFramesPtr;

private:
	// joint.h:218
	Joint::JointFramesPtr m_skel;

	// Unknown accessibility
	// jointlimits.h:268
	typedef JointLimits * JointLimitsPtr;

	// joint.h:219
	Joint::JointLimitsPtr m_limit;

	// joint.h:220
	int32_t m_right;

	// joint.h:221
	int32_t m_left;

	// joint.h:222
	int32_t m_bodyA;

	// joint.h:223
	int32_t m_bodyB;

	// joint.h:224
	uint32_t m_tag;

	// joint.h:225
	RwBool m_spy;

	// joint.h:227
	int32_t m_offset;

	// joint.h:228
	uint32_t[8] m_pad;

public:
	// joint.h:87
	void Joint();

	// joint.h:91
	void ~Joint();

	// joint.h:95
	ResourceDescriptor GetResourceDescriptor();

	// joint.h:99
	Joint * AddressFromOffset(rw::physics::Simulation *, int32_t);

	// joint.h:103
	int32_t OffsetFromAddress() const;

	// joint.h:115
	RigidBody * GetParent() const;

	// joint.h:119
	RigidBody * GetChild() const;

	// joint.h:123
	JointFrames * GetFrames() const;

	// joint.h:127
	JointLimits * GetLimits() const;

	// joint.h:131
	uint32_t GetTag() const;

	// joint.h:135
	RwBool GetSpy() const;

	// joint.h:147
	void SetParent(RigidBody *);

	// joint.h:151
	void SetChild(RigidBody *);

	// joint.h:155
	void SetFrames(JointFrames *);

	// joint.h:159
	void SetLimits(JointLimits *);

	// joint.h:163
	void SetTag(uint32_t);

	// joint.h:167
	void SetSpy(RwBool);

private:
	// joint.h:179
	Joint * GetRight() const;

	// joint.h:183
	Joint * GetLeft() const;

	// joint.h:187
	void SetRight(Joint *);

	// joint.h:191
	void SetLeft(Joint *);

	// joint.h:195
	void Move(Joint *);

	// joint.h:205
	void Initialize(RigidBody *, RigidBody *, JointFrames *, JointLimits *);

}


// drive.h:81
struct rw::physics::Drive {
	// driveframes.h:187
	typedef DriveFrames * DriveFramesPtr;

private:
	// drive.h:224
	Drive::DriveFramesPtr m_skel;

	// Unknown accessibility
	// drivedynamics.h:277
	typedef DriveDynamics * DriveDynamicsPtr;

	// drive.h:225
	Drive::DriveDynamicsPtr m_crtl;

	// drive.h:226
	int32_t m_right;

	// drive.h:227
	int32_t m_left;

	// drive.h:228
	int32_t m_bodyA;

	// drive.h:229
	int32_t m_bodyB;

	// drive.h:230
	uint32_t m_tag;

	// drive.h:231
	RwBool m_spy;

	// drive.h:233
	int32_t m_offset;

	// drive.h:234
	uint32_t[8] m_pad;

public:
	// drive.h:93
	void Drive();

	// drive.h:97
	void ~Drive();

	// drive.h:101
	ResourceDescriptor GetResourceDescriptor();

	// drive.h:105
	Drive * AddressFromOffset(rw::physics::Simulation *, RwInt32);

	// drive.h:109
	int32_t OffsetFromAddress() const;

	// drive.h:121
	RigidBody * GetParent() const;

	// drive.h:125
	RigidBody * GetChild() const;

	// drive.h:129
	DriveFrames * GetFrames() const;

	// drive.h:133
	DriveDynamics * GetDynamics() const;

	// drive.h:137
	uint32_t GetTag() const;

	// drive.h:141
	RwBool GetSpy() const;

	// drive.h:153
	void SetParent(RigidBody *);

	// drive.h:157
	void SetChild(RigidBody *);

	// drive.h:161
	void SetFrames(DriveFrames *);

	// drive.h:165
	void SetDynamics(DriveDynamics *);

	// drive.h:169
	void SetTag(uint32_t);

	// drive.h:173
	void SetSpy(RwBool);

private:
	// drive.h:185
	Drive * GetRight() const;

	// drive.h:189
	Drive * GetLeft() const;

	// drive.h:193
	void SetRight(Drive *);

	// drive.h:197
	void SetLeft(Drive *);

	// drive.h:201
	void Move(Drive *);

	// drive.h:211
	void Initialize(RigidBody *, RigidBody *, DriveFrames *, DriveDynamics *);

}


// CgsNonConstructedClassContainer.h:50
extern const uint32_t KU_SIZE = 160;

// CgsNonConstructedClassContainer.h:50
extern const uint32_t KU_SIZE = 48;

// CgsNonConstructedClassContainer.h:50
extern const uint32_t KU_SIZE = 80;

// CgsNonConstructedClassContainer.h:50
extern const uint32_t KU_SIZE = 64;

// CgsNonConstructedClassContainer.h:50
extern const uint32_t KU_SIZE = 32;

// CgsNonConstructedClassContainer.h:36
struct NonConstructedClassContainer<CgsPhysics::NewRigidBody> {
private:
	// CgsNonConstructedClassContainer.h:50
	extern const uint32_t KU_SIZE = 160;

	// CgsNonConstructedClassContainer.h:52
	uint8_t[160] maData;

public:
	// CgsNonConstructedClassContainer.h:58
	void operator=(NewRigidBody);

	// CgsNonConstructedClassContainer.h:68
	NewRigidBody operator CgsPhysics::NewRigidBody() const;

	// CgsNonConstructedClassContainer.h:79
	const NewRigidBody * GetObjectPointer() const;

	// CgsNonConstructedClassContainer.h:86
	NewRigidBody * GetObjectPointer();

}

// CgsNonConstructedClassContainer.h:36
struct NonConstructedClassContainer<rw::physics::Inertia> {
private:
	// CgsNonConstructedClassContainer.h:50
	extern const uint32_t KU_SIZE = 48;

	// CgsNonConstructedClassContainer.h:52
	uint8_t[48] maData;

public:
	// CgsNonConstructedClassContainer.h:58
	void operator=(Inertia);

	// CgsNonConstructedClassContainer.h:68
	Inertia operator rw::physics::Inertia() const;

	// CgsNonConstructedClassContainer.h:79
	const Inertia * GetObjectPointer() const;

	// CgsNonConstructedClassContainer.h:86
	Inertia * GetObjectPointer();

}

// CgsNonConstructedClassContainer.h:36
struct NonConstructedClassContainer<rw::physics::JointFrames> {
private:
	// CgsNonConstructedClassContainer.h:50
	extern const uint32_t KU_SIZE = 80;

	// CgsNonConstructedClassContainer.h:52
	uint8_t[80] maData;

public:
	// CgsNonConstructedClassContainer.h:58
	void operator=(JointFrames);

	// CgsNonConstructedClassContainer.h:68
	JointFrames operator rw::physics::JointFrames() const;

	// CgsNonConstructedClassContainer.h:79
	const JointFrames * GetObjectPointer() const;

	// CgsNonConstructedClassContainer.h:86
	JointFrames * GetObjectPointer();

}

// CgsNonConstructedClassContainer.h:36
struct NonConstructedClassContainer<rw::physics::JointLimits> {
private:
	// CgsNonConstructedClassContainer.h:50
	extern const uint32_t KU_SIZE = 64;

	// CgsNonConstructedClassContainer.h:52
	uint8_t[64] maData;

public:
	// CgsNonConstructedClassContainer.h:58
	void operator=(JointLimits);

	// CgsNonConstructedClassContainer.h:68
	JointLimits operator rw::physics::JointLimits() const;

	// CgsNonConstructedClassContainer.h:79
	const JointLimits * GetObjectPointer() const;

	// CgsNonConstructedClassContainer.h:86
	JointLimits * GetObjectPointer();

}

// CgsNonConstructedClassContainer.h:36
struct NonConstructedClassContainer<rw::physics::DriveFrames> {
private:
	// CgsNonConstructedClassContainer.h:50
	extern const uint32_t KU_SIZE = 64;

	// CgsNonConstructedClassContainer.h:52
	uint8_t[64] maData;

public:
	// CgsNonConstructedClassContainer.h:58
	void operator=(DriveFrames);

	// CgsNonConstructedClassContainer.h:68
	DriveFrames operator rw::physics::DriveFrames() const;

	// CgsNonConstructedClassContainer.h:79
	const DriveFrames * GetObjectPointer() const;

	// CgsNonConstructedClassContainer.h:86
	DriveFrames * GetObjectPointer();

}

// CgsNonConstructedClassContainer.h:36
struct NonConstructedClassContainer<rw::physics::DriveDynamics> {
private:
	// CgsNonConstructedClassContainer.h:50
	extern const uint32_t KU_SIZE = 32;

	// CgsNonConstructedClassContainer.h:52
	uint8_t[32] maData;

public:
	// CgsNonConstructedClassContainer.h:58
	void operator=(DriveDynamics);

	// CgsNonConstructedClassContainer.h:68
	DriveDynamics operator rw::physics::DriveDynamics() const;

	// CgsNonConstructedClassContainer.h:79
	const DriveDynamics * GetObjectPointer() const;

	// CgsNonConstructedClassContainer.h:86
	DriveDynamics * GetObjectPointer();

}


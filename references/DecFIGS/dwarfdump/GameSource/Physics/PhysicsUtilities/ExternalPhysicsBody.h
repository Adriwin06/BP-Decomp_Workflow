// CgsRigidBody.h:24
namespace CgsPhysics {
	// ExternalPhysicsBody.h:28
	namespace PhysicsSimulationIO {
		struct OutContactSpy;

	}

}

// Wheel.h:30
namespace BrnPhysics {
	// ExternalPhysicsBody.h:40
	const VecFloat kvfSixty;

}

// CgsRigidBody.h:24
namespace CgsPhysics {
	// ExternalPhysicsBody.h:28
	namespace PhysicsSimulationIO {
		struct InChangeRigidBodyInertia;

		struct InAddRigidBody;

		struct InUpdateRigidBody;

		struct InApplyForce;

		struct InSetRigidBodySpy;

		struct InUpdateExternalBody;

		struct InRemoveRigidBody;

		struct InRemoveAllRigidBodies;

		struct InAddPotentialContact;

		struct InAddJoint;

		struct InRemoveJoint;

		struct InUpdateJointFrames;

		struct InUpdateJointLimits;

		struct InSetJointSpy;

		struct InAddDrive;

		struct InRemoveDrive;

		struct InUpdateDriveFrames;

		struct InUpdateDriveDynamics;

		struct InSetDriveSpy;

		struct OutContactSpy;

		struct InputBuffer;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// ExternalPhysicsBody.h:40
	const VecFloat kvfSixty;

}

// CgsRigidBody.h:24
namespace CgsPhysics {
	// ExternalPhysicsBody.h:28
	namespace PhysicsSimulationIO {
	}

}

// ExternalPhysicsBody.h:57
struct BrnPhysics::ExternalPhysicsBody : public ExternallySimulatedBody {
protected:
	// ExternalPhysicsBody.h:241
	Matrix33 mLocalInverseInertia;

	// ExternalPhysicsBody.h:242
	Matrix33 mWorldInverseInertia;

	// ExternalPhysicsBody.h:243
	VecFloat mfMass;

	// ExternalPhysicsBody.h:246
	Vector3 mTotalLinearForce;

	// ExternalPhysicsBody.h:247
	Vector3 mTotalTorque;

	// ExternalPhysicsBody.h:248
	Vector3 mTotalLinearImpulse;

	// ExternalPhysicsBody.h:249
	Vector3 mTotalAngularImpulse;

public:
	// ExternalPhysicsBody.h:62
	void Construct();

	// ExternalPhysicsBody.h:65
	void Destruct();

	// ExternalPhysicsBody.h:68
	bool Prepare();

	// ExternalPhysicsBody.h:71
	void Release();

	// ExternalPhysicsBody.h:74
	void AddForce(Vector3, rw::physics::InputSpace);

	// ExternalPhysicsBody.h:77
	void AddImpulse(Vector3, rw::physics::InputSpace);

	// ExternalPhysicsBody.h:80
	void AddTorque(Vector3, rw::physics::InputSpace);

	// ExternalPhysicsBody.h:83
	void AddAngularImpulse(Vector3, rw::physics::InputSpace);

	// ExternalPhysicsBody.h:87
	void AddWorldSpaceForce(Vector3);

	// ExternalPhysicsBody.h:90
	void AddWorldSpaceImpulse(Vector3);

	// ExternalPhysicsBody.h:93
	void AddWorldSpaceTorque(Vector3);

	// ExternalPhysicsBody.h:96
	void AddWorldSpaceAngularImpulse(Vector3);

	// ExternalPhysicsBody.h:100
	void AddLocalSpaceForce(Vector3);

	// ExternalPhysicsBody.h:103
	void AddLocalSpaceImpulse(Vector3);

	// ExternalPhysicsBody.h:106
	void AddLocalSpaceTorque(Vector3);

	// ExternalPhysicsBody.h:109
	void AddLocalSpaceAngularImpulse(Vector3);

	// ExternalPhysicsBody.h:114
	void AddLocalForce(Vector3, rw::physics::InputSpace, Vector3, rw::physics::InputSpace);

	// ExternalPhysicsBody.h:118
	void AddWorldSpaceLinearForce(Vector3);

	// ExternalPhysicsBody.h:123
	void AddWorldBodyLocalForce(Vector3, Vector3);

	// ExternalPhysicsBody.h:127
	void AddLocalImpulse(Vector3, rw::physics::InputSpace, Vector3, rw::physics::InputSpace);

	// ExternalPhysicsBody.h:130
	void CalculateNewVelocity(VecFloat);

	// ExternalPhysicsBody.h:133
	void IntegrateTransform(VecFloat);

	// ExternalPhysicsBody.h:136
	void Integrate(VecFloat);

	// ExternalPhysicsBody.h:139
	void SetInverseInertia(const rw::math::vpu::Matrix33 *);

	// ExternalPhysicsBody.h:144
	void WritePropertiesIntoRenderware(RigidBody *);

	// ExternalPhysicsBody.h:148
	void ReadPropertiesFromRenderware(const RigidBody *);

	// ExternalPhysicsBody.h:152
	void ReadPropertiesFromChangeInertiaEvent(const InChangeRigidBodyInertia *);

	// ExternalPhysicsBody.h:156
	Vector3 GetLocalVelocity(Vector3, rw::physics::InputSpace) const;

	// ExternalPhysicsBody.h:162
	Vector3 GetLocalVelocityFromLocalImpulse(Vector3, Vector3) const;

	// ExternalPhysicsBody.h:165
	const rw::math::vpu::Matrix33 * GetWorldInverseInertia() const;

	// ExternalPhysicsBody.h:175
	VecFloat CalculateCollisionImpulseWithInanimateObject(Vector3, Vector3, Vector3, VecFloat, Vector3 *, VecFloat *);

	// ExternalPhysicsBody.h:187
	VecFloat CalculateCollisionImpulseWithBody(const ExternalPhysicsBody &, Vector3, Vector3, Vector3, Vector3, VecFloat, Vector3 *, VecFloat *, VecFloat *) const;

	// ExternalPhysicsBody.h:192
	void DampenAngularVelocity(VecFloat, VecFloat);

	// ExternalPhysicsBody.h:200
	void DampPitchYawRoll(VecFloat, VecFloat, VecFloat, VecFloat);

	// ExternalPhysicsBody.h:204
	Vector3 GetPitchYawRollVelocities() const;

	// ExternalPhysicsBody.h:208
	// Declaration
	void CheckState(const char *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// ExternalPhysicsBody.cpp:678
		using namespace CgsDev::Message;

		// ExternalPhysicsBody.cpp:684
		using namespace CgsDev::Message;

		// ExternalPhysicsBody.cpp:690
		using namespace CgsDev::Message;

		// ExternalPhysicsBody.cpp:696
		using namespace CgsDev::Message;

		// ExternalPhysicsBody.cpp:703
		using namespace CgsDev::Message;

		// ExternalPhysicsBody.cpp:709
		using namespace CgsDev::Message;

		// ExternalPhysicsBody.cpp:715
		using namespace CgsDev::Message;

		// ExternalPhysicsBody.cpp:721
		using namespace CgsDev::Message;

		// ExternalPhysicsBody.cpp:727
		using namespace CgsDev::Message;

		// ExternalPhysicsBody.cpp:733
		using namespace CgsDev::Message;

	}

	// ExternalPhysicsBody.h:211
	void SetMass(VecFloat);

	// ExternalPhysicsBody.h:215
	VecFloat GetMass() const;

	// ExternalPhysicsBody.h:222
	void GetImpulsesFromLocalImpulse(Vector3, rw::physics::InputSpace, Vector3, rw::physics::InputSpace, Vector3 *, Vector3 *) const;

	// ExternalPhysicsBody.h:229
	VecFloat ApplyImpulseFromWorldCollision(Vector3, Vector3, VecFloat);

	// ExternalPhysicsBody.h:233
	Vector3 GetLinearMomentum(VecFloat) const;

protected:
	// ExternalPhysicsBody.h:253
	void CalculateWorldIntertia();

	// ExternalPhysicsBody.h:256
	void ZeroForces();

}

// ExternalPhysicsBody.h:57
struct BrnPhysics::ExternalPhysicsBody : public ExternallySimulatedBody {
protected:
	// ExternalPhysicsBody.h:241
	Matrix33 mLocalInverseInertia;

	// ExternalPhysicsBody.h:242
	Matrix33 mWorldInverseInertia;

	// ExternalPhysicsBody.h:243
	VecFloat mfMass;

	// ExternalPhysicsBody.h:246
	Vector3 mTotalLinearForce;

	// ExternalPhysicsBody.h:247
	Vector3 mTotalTorque;

	// ExternalPhysicsBody.h:248
	Vector3 mTotalLinearImpulse;

	// ExternalPhysicsBody.h:249
	Vector3 mTotalAngularImpulse;

public:
	// ExternalPhysicsBody.h:62
	void Construct();

	// ExternalPhysicsBody.h:65
	void Destruct();

	// ExternalPhysicsBody.h:68
	bool Prepare();

	// ExternalPhysicsBody.h:71
	void Release();

	// ExternalPhysicsBody.h:74
	void AddForce(Vector3, rw::physics::InputSpace);

	// ExternalPhysicsBody.h:77
	void AddImpulse(Vector3, rw::physics::InputSpace);

	// ExternalPhysicsBody.h:80
	void AddTorque(Vector3, rw::physics::InputSpace);

	// ExternalPhysicsBody.h:83
	void AddAngularImpulse(Vector3, rw::physics::InputSpace);

	// ExternalPhysicsBody.h:87
	void AddWorldSpaceForce(Vector3);

	// ExternalPhysicsBody.h:90
	void AddWorldSpaceImpulse(Vector3);

	// ExternalPhysicsBody.h:93
	void AddWorldSpaceTorque(Vector3);

	// ExternalPhysicsBody.h:96
	void AddWorldSpaceAngularImpulse(Vector3);

	// ExternalPhysicsBody.h:100
	void AddLocalSpaceForce(Vector3);

	// ExternalPhysicsBody.h:103
	void AddLocalSpaceImpulse(Vector3);

	// ExternalPhysicsBody.h:106
	void AddLocalSpaceTorque(Vector3);

	// ExternalPhysicsBody.h:109
	void AddLocalSpaceAngularImpulse(Vector3);

	// ExternalPhysicsBody.h:114
	void AddLocalForce(Vector3, rw::physics::InputSpace, Vector3, rw::physics::InputSpace);

	// ExternalPhysicsBody.h:118
	void AddWorldSpaceLinearForce(Vector3);

	// ExternalPhysicsBody.h:123
	void AddWorldBodyLocalForce(Vector3, Vector3);

	// ExternalPhysicsBody.h:127
	void AddLocalImpulse(Vector3, rw::physics::InputSpace, Vector3, rw::physics::InputSpace);

	// ExternalPhysicsBody.h:130
	void CalculateNewVelocity(VecFloat);

	// ExternalPhysicsBody.h:133
	void IntegrateTransform(VecFloat);

	// ExternalPhysicsBody.h:136
	void Integrate(VecFloat);

	// ExternalPhysicsBody.h:139
	void SetInverseInertia(const rw::math::vpu::Matrix33 *);

	// ExternalPhysicsBody.h:144
	void WritePropertiesIntoRenderware(RigidBody *);

	// ExternalPhysicsBody.h:148
	void ReadPropertiesFromRenderware(const RigidBody *);

	// ExternalPhysicsBody.h:152
	void ReadPropertiesFromChangeInertiaEvent(const InChangeRigidBodyInertia *);

	// ExternalPhysicsBody.h:156
	Vector3 GetLocalVelocity(Vector3, rw::physics::InputSpace) const;

	// ExternalPhysicsBody.h:162
	Vector3 GetLocalVelocityFromLocalImpulse(Vector3, Vector3) const;

	// ExternalPhysicsBody.h:165
	const rw::math::vpu::Matrix33 * GetWorldInverseInertia() const;

	// ExternalPhysicsBody.h:175
	VecFloat CalculateCollisionImpulseWithInanimateObject(Vector3, Vector3, Vector3, VecFloat, Vector3 *, VecFloat *);

	// ExternalPhysicsBody.h:187
	VecFloat CalculateCollisionImpulseWithBody(const ExternalPhysicsBody &, Vector3, Vector3, Vector3, Vector3, VecFloat, Vector3 *, VecFloat *, VecFloat *) const;

	// ExternalPhysicsBody.h:192
	void DampenAngularVelocity(VecFloat, VecFloat);

	// ExternalPhysicsBody.h:200
	void DampPitchYawRoll(VecFloat, VecFloat, VecFloat, VecFloat);

	// ExternalPhysicsBody.h:204
	Vector3 GetPitchYawRollVelocities() const;

	// ExternalPhysicsBody.h:208
	void CheckState(const char *) const;

	// ExternalPhysicsBody.h:211
	void SetMass(VecFloat);

	// ExternalPhysicsBody.h:215
	VecFloat GetMass() const;

	// ExternalPhysicsBody.h:222
	void GetImpulsesFromLocalImpulse(Vector3, rw::physics::InputSpace, Vector3, rw::physics::InputSpace, Vector3 *, Vector3 *) const;

	// ExternalPhysicsBody.h:229
	VecFloat ApplyImpulseFromWorldCollision(Vector3, Vector3, VecFloat);

	// ExternalPhysicsBody.h:233
	Vector3 GetLinearMomentum(VecFloat) const;

protected:
	// ExternalPhysicsBody.h:253
	void CalculateWorldIntertia();

	// ExternalPhysicsBody.h:256
	void ZeroForces();

}

// CgsRigidBody.h:24
namespace CgsPhysics {
	// ExternalPhysicsBody.h:28
	namespace PhysicsSimulationIO {
		struct InChangeRigidBodyInertia;

		struct InAddRigidBody;

		struct InUpdateRigidBody;

		struct InApplyForce;

		struct InSetRigidBodySpy;

		struct InUpdateExternalBody;

		struct InRemoveRigidBody;

		struct InRemoveAllRigidBodies;

		struct InAddPotentialContact;

		struct InAddJoint;

		struct InRemoveJoint;

		struct InUpdateJointFrames;

		struct InUpdateJointLimits;

		struct InSetJointSpy;

		struct InAddDrive;

		struct InRemoveDrive;

		struct InUpdateDriveFrames;

		struct InUpdateDriveDynamics;

		struct InSetDriveSpy;

		struct OutUpdateRigidBody;

		struct OutContactSpy;

		struct OutJointSpy;

		struct OutDriveSpy;

		struct InputBuffer;

		struct OutputBuffer;

	}

}

// ExternalPhysicsBody.h:57
struct BrnPhysics::ExternalPhysicsBody : public ExternallySimulatedBody {
protected:
	// ExternalPhysicsBody.h:241
	Matrix33 mLocalInverseInertia;

	// ExternalPhysicsBody.h:242
	Matrix33 mWorldInverseInertia;

	// ExternalPhysicsBody.h:243
	VecFloat mfMass;

	// ExternalPhysicsBody.h:246
	Vector3 mTotalLinearForce;

	// ExternalPhysicsBody.h:247
	Vector3 mTotalTorque;

	// ExternalPhysicsBody.h:248
	Vector3 mTotalLinearImpulse;

	// ExternalPhysicsBody.h:249
	Vector3 mTotalAngularImpulse;

public:
	// ExternalPhysicsBody.h:62
	void Construct();

	// ExternalPhysicsBody.h:65
	void Destruct();

	// ExternalPhysicsBody.h:68
	bool Prepare();

	// ExternalPhysicsBody.h:71
	void Release();

	// ExternalPhysicsBody.h:74
	void AddForce(Vector3, rw::physics::InputSpace);

	// ExternalPhysicsBody.h:77
	void AddImpulse(Vector3, rw::physics::InputSpace);

	// ExternalPhysicsBody.h:80
	void AddTorque(Vector3, rw::physics::InputSpace);

	// ExternalPhysicsBody.h:83
	void AddAngularImpulse(Vector3, rw::physics::InputSpace);

	// ExternalPhysicsBody.h:87
	void AddWorldSpaceForce(Vector3);

	// ExternalPhysicsBody.h:90
	void AddWorldSpaceImpulse(Vector3);

	// ExternalPhysicsBody.h:93
	void AddWorldSpaceTorque(Vector3);

	// ExternalPhysicsBody.h:96
	void AddWorldSpaceAngularImpulse(Vector3);

	// ExternalPhysicsBody.h:100
	void AddLocalSpaceForce(Vector3);

	// ExternalPhysicsBody.h:103
	void AddLocalSpaceImpulse(Vector3);

	// ExternalPhysicsBody.h:106
	void AddLocalSpaceTorque(Vector3);

	// ExternalPhysicsBody.h:109
	void AddLocalSpaceAngularImpulse(Vector3);

	// ExternalPhysicsBody.h:114
	void AddLocalForce(Vector3, rw::physics::InputSpace, Vector3, rw::physics::InputSpace);

	// ExternalPhysicsBody.h:118
	void AddWorldSpaceLinearForce(Vector3);

	// ExternalPhysicsBody.h:123
	void AddWorldBodyLocalForce(Vector3, Vector3);

	// ExternalPhysicsBody.h:127
	void AddLocalImpulse(Vector3, rw::physics::InputSpace, Vector3, rw::physics::InputSpace);

	// ExternalPhysicsBody.h:130
	void CalculateNewVelocity(VecFloat);

	// ExternalPhysicsBody.h:133
	void IntegrateTransform(VecFloat);

	// ExternalPhysicsBody.h:136
	void Integrate(VecFloat);

	// ExternalPhysicsBody.h:139
	void SetInverseInertia(const rw::math::vpu::Matrix33 *);

	// ExternalPhysicsBody.h:144
	void WritePropertiesIntoRenderware(RigidBody *);

	// ExternalPhysicsBody.h:148
	void ReadPropertiesFromRenderware(const RigidBody *);

	// ExternalPhysicsBody.h:152
	void ReadPropertiesFromChangeInertiaEvent(const CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia *);

	// ExternalPhysicsBody.h:156
	Vector3 GetLocalVelocity(Vector3, rw::physics::InputSpace) const;

	// ExternalPhysicsBody.h:162
	Vector3 GetLocalVelocityFromLocalImpulse(Vector3, Vector3) const;

	// ExternalPhysicsBody.h:165
	const rw::math::vpu::Matrix33 * GetWorldInverseInertia() const;

	// ExternalPhysicsBody.h:175
	VecFloat CalculateCollisionImpulseWithInanimateObject(Vector3, Vector3, Vector3, VecFloat, Vector3 *, VecFloat *);

	// ExternalPhysicsBody.h:187
	VecFloat CalculateCollisionImpulseWithBody(const ExternalPhysicsBody &, Vector3, Vector3, Vector3, Vector3, VecFloat, Vector3 *, VecFloat *, VecFloat *) const;

	// ExternalPhysicsBody.h:192
	void DampenAngularVelocity(VecFloat, VecFloat);

	// ExternalPhysicsBody.h:200
	void DampPitchYawRoll(VecFloat, VecFloat, VecFloat, VecFloat);

	// ExternalPhysicsBody.h:204
	Vector3 GetPitchYawRollVelocities() const;

	// ExternalPhysicsBody.h:208
	void CheckState(const char *) const;

	// ExternalPhysicsBody.h:211
	void SetMass(VecFloat);

	// ExternalPhysicsBody.h:215
	VecFloat GetMass() const;

	// ExternalPhysicsBody.h:222
	void GetImpulsesFromLocalImpulse(Vector3, rw::physics::InputSpace, Vector3, rw::physics::InputSpace, Vector3 *, Vector3 *) const;

	// ExternalPhysicsBody.h:229
	VecFloat ApplyImpulseFromWorldCollision(Vector3, Vector3, VecFloat);

	// ExternalPhysicsBody.h:233
	Vector3 GetLinearMomentum(VecFloat) const;

protected:
	// ExternalPhysicsBody.h:253
	void CalculateWorldIntertia();

	// ExternalPhysicsBody.h:256
	void ZeroForces();

}


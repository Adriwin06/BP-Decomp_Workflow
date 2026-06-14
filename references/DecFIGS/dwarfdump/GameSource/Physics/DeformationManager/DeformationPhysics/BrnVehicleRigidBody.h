// BrnVehicleRigidBody.h:51
struct BrnPhysics::Deformation::VehicleRigidBody : public BrnPhysics::Deformation::CollidableBody {
private:
	// BrnVehicleRigidBody.h:92
	BrnPhysics::Vehicle::VehiclePhysics * mpAttachedVehicle;

public:
	void VehicleRigidBody(const VehicleRigidBody &);

	void VehicleRigidBody();

	// BrnVehicleRigidBody.cpp:38
	void Construct();

	// BrnVehicleRigidBody.cpp:55
	void Destruct();

	// BrnVehicleRigidBody.cpp:72
	bool Prepare(BrnPhysics::Vehicle::VehiclePhysics *);

	// BrnVehicleRigidBody.cpp:93
	bool Release();

	// BrnVehicleRigidBody.cpp:186
	virtual void ApplyLocalImpulse(BrnPhysics::Deformation::ImpulseParams *);

	// BrnVehicleRigidBody.cpp:131
	virtual void RecievePassedOnImpulse(const BrnPhysics::Deformation::ImpulseParams *, VecFloat);

	// BrnVehicleRigidBody.cpp:239
	void ApplyShowtimeContactImpulse(BrnPhysics::Deformation::ImpulseParams *, Vector3, bool);

	// BrnVehicleRigidBody.h:83
	BrnPhysics::Vehicle::VehiclePhysics * GetVehiclePhysics();

	// BrnVehicleRigidBody.h:87
	const BrnPhysics::Vehicle::VehiclePhysics * GetVehiclePhysics() const;

private:
	// BrnVehicleRigidBody.cpp:112
	void ClearVariables();

}

// BrnVehicleRigidBody.h:51
void BrnPhysics::Deformation::VehicleRigidBody::VehicleRigidBody() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


// BrnCollidableBody.h:49
struct BrnPhysics::Deformation::ImpulseParams {
	// BrnCollidableBody.h:51
	BrnPhysics::Deformation::ENextSensorDirection meImpulseDirection;

	// BrnCollidableBody.h:52
	VecFloat mvfImpulseMagnitude;

	// BrnCollidableBody.h:53
	Vector3 mImpulsePosition;

	// BrnCollidableBody.h:54
	Vector3 mWorldImpulseDirection;

	// BrnCollidableBody.h:55
	Vector3 mLimitVector;

	// BrnCollidableBody.h:56
	rw::physics::InputSpace mePositionSpace;

	// BrnCollidableBody.h:57
	VecFloat mvfInverseInertia;

	// BrnCollidableBody.h:58
	VecFloat mvfTimeStep;

	// BrnCollidableBody.h:59
	VecFloat mvfVelocityAlongNormal;

	// BrnCollidableBody.h:60
	VecFloat mvfAllowedCompressionFactor;

	// BrnCollidableBody.h:61
	VecFloat mvfMaximumAllowedAbsorption;

	// BrnCollidableBody.h:62
	ImpulsePasser * mpImpulsePasser;

	// BrnCollidableBody.h:63
	BrnPhysics::Deformation::EAbsorptionSets meAbsorptionSet;

	// BrnCollidableBody.h:64
	bool mbWorldContact;

}

// BrnCollidableBody.h:80
struct BrnPhysics::Deformation::CollidableBody {
	int (*)(...) * _vptr.CollidableBody;

public:
	void CollidableBody(const CollidableBody &);

	void CollidableBody();

	// BrnCollidableBody.h:85
	virtual void ApplyLocalImpulse(BrnPhysics::Deformation::ImpulseParams *);

	// BrnCollidableBody.h:90
	virtual void RecievePassedOnImpulse(const BrnPhysics::Deformation::ImpulseParams *, VecFloat);

	// BrnCollidableBody.cpp:43
	Vector3 GetDirectionVector(BrnPhysics::Deformation::ENextSensorDirection);

}

// BrnCollidableBody.h:80
void BrnPhysics::Deformation::CollidableBody::CollidableBody() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


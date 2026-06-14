// ExternalPhysicsBody.cpp:275
void BrnPhysics::ExternalPhysicsBody::CalculateNewVelocity(const VecFloat  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ExternalPhysicsBody.cpp:277
		VecFloat lfInvMass;

		// ExternalPhysicsBody.cpp:286
		Vector3 lAngularMomentum;

		rw::math::vpu::Reciprocal(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	ZeroForces(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// ExternalPhysicsBody.cpp:347
void BrnPhysics::ExternalPhysicsBody::CalculateWorldIntertia() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ExternalPhysicsBody.cpp:349
		Matrix44Affine lInverseTransform;

		// ExternalPhysicsBody.cpp:350
		Matrix33 lOrientation;

		// ExternalPhysicsBody.cpp:351
		Matrix33 lInverseOrientation;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::InverseOfMatrixWithOrthonormal3x3(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Matrix33::operator=(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// ExternalPhysicsBody.cpp:310
void BrnPhysics::ExternalPhysicsBody::IntegrateTransform(const VecFloat  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ExternalPhysicsBody.cpp:312
		Vector3 lTimedAngularVelocity;

		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Matrix44Affine::WAxis(/* parameters */);
	}
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Matrix44Affine::ZAxis(/* parameters */);
	rw::math::vpu::Matrix44Affine::YAxis(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::Matrix44Affine::XAxis(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
}

// ExternalPhysicsBody.cpp:132
void BrnPhysics::ExternalPhysicsBody::AddLocalForce(Vector3  lForce, rw::physics::InputSpace  leForceSpace, Vector3  lPosition, rw::physics::InputSpace  lePositionSpace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ExternalPhysicsBody.cpp:137
		Vector3 lTorque;

		rw::math::vpu::IsValid(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
}

// ExternalPhysicsBody.cpp:182
void BrnPhysics::ExternalPhysicsBody::AddLocalImpulse(Vector3  lImpulse, rw::physics::InputSpace  leImpulseSpace, Vector3  lPosition, rw::physics::InputSpace  lePositionSpace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ExternalPhysicsBody.cpp:187
		Vector3 lAngularImpulse;

		rw::math::vpu::IsValid(/* parameters */);
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
}

// ExternalPhysicsBody.cpp:231
void BrnPhysics::ExternalPhysicsBody::GetImpulsesFromLocalImpulse(Vector3  lImpulse, rw::physics::InputSpace  leImpulseSpace, Vector3  lPosition, rw::physics::InputSpace  lePositionSpace, Vector3 *  lpLinearImpulseOut, Vector3 *  lpAngularImpulseOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ExternalPhysicsBody.cpp:233
		Vector3 lAngularImpulse;

	}
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
}

// ExternalPhysicsBody.cpp:477
void BrnPhysics::ExternalPhysicsBody::GetLocalVelocityFromLocalImpulse(const rw::math::vpu::Vector3  lPosition, const rw::math::vpu::Vector3  lImpulse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// ExternalPhysicsBody.cpp:480
	Vector3 lResult;

	{
		// ExternalPhysicsBody.cpp:479
		Vector3 lWorldPosition;

		// ExternalPhysicsBody.cpp:480
		Vector3 lResult;

		// ExternalPhysicsBody.cpp:483
		Vector3 lLinearVelocity;

		// ExternalPhysicsBody.cpp:484
		Vector3 lAngularVelocity;

		// ExternalPhysicsBody.cpp:487
		Vector3 lAngularImpulse;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Cross(/* parameters */);
		rw::math::vpu::Matrix33::Matrix33(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Mult(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::Cross(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
	}
}

// ExternalPhysicsBody.cpp:383
void BrnPhysics::ExternalPhysicsBody::WritePropertiesIntoRenderware(RigidBody *  lpRigidBody) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ExternalPhysicsBody.cpp:385
		Vector3 lInvInertia;

		Set<VectorAxisX, VectorAxisY, VectorAxisZ>(/* parameters */);
		rw::physics::RigidBody::GetInertia(/* parameters */);
	}
	rw::physics::RigidBody::GetInertia(/* parameters */);
	rw::physics::Inertia::SetInverseInertia(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::physics::Inertia::SetInverseMass(/* parameters */);
}

// ExternalPhysicsBody.cpp:528
void BrnPhysics::ExternalPhysicsBody::CalculateCollisionImpulseWithInanimateObject(const rw::math::vpu::Vector3  lPoint, const rw::math::vpu::Vector3  lPointVel, const rw::math::vpu::Vector3  lCollisionNormal, VecFloat  lvfRestitution, Vector3 *  lpImpulseOut, VecFloat *  lpvfInvInertiaOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// ExternalPhysicsBody.cpp:535
	VecFloat lvfImpVal;

	{
		// ExternalPhysicsBody.cpp:530
		VecFloat lvfNumerator;

		// ExternalPhysicsBody.cpp:531
		Vector3 lR;

		// ExternalPhysicsBody.cpp:532
		VecFloat lvfFabsf;

		// ExternalPhysicsBody.cpp:533
		Vector3 lTemp;

		// ExternalPhysicsBody.cpp:533
		Vector3 lTemp2;

		// ExternalPhysicsBody.cpp:534
		VecFloat lvfDenominator;

		// ExternalPhysicsBody.cpp:535
		VecFloat lvfImpVal;

		// ExternalPhysicsBody.cpp:536
		VecFloat lvfMass;

		rw::math::vpu::Cross(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	GetWorldInverseInertia(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

// ExternalPhysicsBody.cpp:649
void BrnPhysics::ExternalPhysicsBody::ApplyImpulseFromWorldCollision(Vector3  lWorldPosition, Vector3  lWorldNormal, VecFloat  lvfRestitution) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// ExternalPhysicsBody.cpp:652
	VecFloat lvfImpluseMagnitude;

	{
		// ExternalPhysicsBody.cpp:651
		Vector3 lImpulse;

		// ExternalPhysicsBody.cpp:652
		VecFloat lvfImpluseMagnitude;

		// ExternalPhysicsBody.cpp:653
		VecFloat lvfTempImpulseMagnitude;

		GetLocalVelocity(/* parameters */);
	}
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
}

// ExternalPhysicsBody.cpp:583
void BrnPhysics::ExternalPhysicsBody::CalculateCollisionImpulseWithBody(const const ExternalPhysicsBody &  lBody2, const rw::math::vpu::Vector3  lPoint1, const rw::math::vpu::Vector3  lPoint2, const rw::math::vpu::Vector3  lImpactVel, const rw::math::vpu::Vector3  lCollisionNormal, VecFloat  lvfRestitution, Vector3 *  lpImpulseOut, VecFloat *  lpfInvInertiaAOut, VecFloat *  lpfInvInertiaBOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// ExternalPhysicsBody.cpp:588
	VecFloat lvfImpVal;

	{
		// ExternalPhysicsBody.cpp:585
		VecFloat lvfNumerator;

		// ExternalPhysicsBody.cpp:586
		VecFloat lvfFabsf;

		// ExternalPhysicsBody.cpp:587
		VecFloat lvfDenominator;

		// ExternalPhysicsBody.cpp:588
		VecFloat lvfImpVal;

		// ExternalPhysicsBody.cpp:589
		Vector3 lvf1;

		// ExternalPhysicsBody.cpp:590
		Vector3 lvf2;

		// ExternalPhysicsBody.cpp:591
		Vector3 lTemp;

		// ExternalPhysicsBody.cpp:592
		Vector3 lApart;

		// ExternalPhysicsBody.cpp:593
		Vector3 lBpart;

		// ExternalPhysicsBody.cpp:594
		VecFloat lvfMassA;

		// ExternalPhysicsBody.cpp:595
		VecFloat lvfMassB;

		// ExternalPhysicsBody.cpp:617
		VecFloat lvfOneOverMassA;

		// ExternalPhysicsBody.cpp:618
		VecFloat lvfOneOverMassB;

		rw::math::vpu::Cross(/* parameters */);
	}
	GetWorldInverseInertia(/* parameters */);
	GetWorldInverseInertia(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

// ExternalPhysicsBody.cpp:408
void BrnPhysics::ExternalPhysicsBody::ReadPropertiesFromRenderware(const RigidBody *  lpRigidBody) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ExternalPhysicsBody.cpp:410
		Vector3 lInvInertia;

		rw::math::vpu::operator*=<VectorAxisX>(/* parameters */);
		rw::math::vpu::Matrix33::SetIdentity(/* parameters */);
		rw::physics::RigidBody::GetWorldSpaceInverseInertia(/* parameters */);
	}
	rw::math::vpu::Matrix33::YAxis(/* parameters */);
	rw::math::vpu::operator*=<VectorAxisY>(/* parameters */);
	rw::math::vpu::Matrix33::ZAxis(/* parameters */);
	rw::math::vpu::operator*=<VectorAxisZ>(/* parameters */);
	vec_perm(/* parameters */);
	vec_perm(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::Matrix33::operator=(/* parameters */);
}

// ExternalPhysicsBody.cpp:48
void BrnPhysics::ExternalPhysicsBody::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ZeroForces(/* parameters */);
}

// ExternalPhysicsBody.cpp:67
void BrnPhysics::ExternalPhysicsBody::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ZeroForces(/* parameters */);
}

// ExternalPhysicsBody.cpp:86
void BrnPhysics::ExternalPhysicsBody::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ZeroForces(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
}

// ExternalPhysicsBody.cpp:109
void BrnPhysics::ExternalPhysicsBody::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ZeroForces(/* parameters */);
}

// ExternalPhysicsBody.cpp:437
void BrnPhysics::ExternalPhysicsBody::ReadPropertiesFromChangeInertiaEvent(const InChangeRigidBodyInertia *  lpRigidBodyInertia) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ExternalPhysicsBody.cpp:446
		Inertia lInertia;

		// ExternalPhysicsBody.cpp:447
		Vector3 lInvInertia;

	}
	NonConstructedClassContainer<rw::physics::Inertia>::operator rw::physics::Inertia(/* parameters */);
	rw::math::vpu::operator*=<VectorAxisX>(/* parameters */);
	rw::physics::Inertia::Inertia(/* parameters */);
	rw::math::vpu::Matrix33::YAxis(/* parameters */);
	rw::math::vpu::Matrix33::ZAxis(/* parameters */);
	rw::math::vpu::Matrix33::SetIdentity(/* parameters */);
	rw::physics::Inertia::~Inertia(/* parameters */);
	rw::math::vpu::operator*=<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*=<VectorAxisZ>(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
}

// ExternalPhysicsBody.cpp:673
void BrnPhysics::ExternalPhysicsBody::CheckState(const char *  lpDescription) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::Matrix33::Matrix33(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}


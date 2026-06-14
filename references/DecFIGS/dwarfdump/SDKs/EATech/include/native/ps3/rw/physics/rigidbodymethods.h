// rigidbodymethods.h:324
void rw::physics::RigidBody::GetLinearVelocity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:348
void rw::physics::RigidBody::GetAngularVelocity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:742
void rw::physics::RigidBody::SetLinearVelocity(const const rw::math::vpu::Vector3 &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:767
void rw::physics::RigidBody::SetAngularVelocity(const const rw::math::vpu::Vector3 &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:556
void rw::physics::RigidBody::GetTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:300
void rw::physics::RigidBody::GetPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:843
void rw::physics::RigidBody::SetTransform(const const rw::math::vpu::Matrix44Affine &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:717
void rw::physics::RigidBody::SetPosition(const const rw::math::vpu::Vector3 &  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:208
void rw::physics::RigidBody::InertiaUpdate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rigidbodymethods.h:212
		VecFloat invm;

	}
}

// rigidbodymethods.h:146
void rw::physics::RigidBody::InertiaDynamicUpdate(Inertia *  inertia) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rigidbodymethods.h:150
		Vector3 ivt;

		// rigidbodymethods.h:151
		Vector3 ri;

		// rigidbodymethods.h:152
		Vector3 up;

		// rigidbodymethods.h:153
		Vector3 at;

		// rigidbodymethods.h:154
		Vector3 sri;

		// rigidbodymethods.h:155
		Vector3 sup;

		// rigidbodymethods.h:156
		Vector3 sat;

		// rigidbodymethods.h:158
		Vector3 Ifull;

		// rigidbodymethods.h:172
		Vector3 ri_ZYY;

		// rigidbodymethods.h:173
		Vector3 up_ZYY;

		// rigidbodymethods.h:174
		Vector3 at_ZYY;

		// rigidbodymethods.h:176
		Vector3 sri_ZYZ;

		// rigidbodymethods.h:177
		Vector3 sup_ZYZ;

		// rigidbodymethods.h:178
		Vector3 sat_ZYZ;

		// rigidbodymethods.h:183
		Vector3 Isplt;

	}
}

// rigidbodymethods.h:584
void rw::physics::RigidBody::GetInertia() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:246
void rw::physics::RigidBody::GetInverseMass() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:271
void rw::physics::RigidBody::GetWorldSpaceInverseInertia() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// rigidbodymethods.h:274
	Matrix33 & out;

	{
		// rigidbodymethods.h:274
		Matrix33 out;

	}
}

// rigidbodymethods.h:682
void rw::physics::RigidBody::GetState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:818
void rw::physics::RigidBody::SetAngularAcceleration(const const rw::math::vpu::Vector3 &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:793
void rw::physics::RigidBody::SetLinearAcceleration(const const rw::math::vpu::Vector3 &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:657
void rw::physics::RigidBody::GetTag() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:1046
void rw::physics::RigidBody::ResetForces() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rigidbodymethods.h:1049
		Vector3 gravityForce;

	}
}

// rigidbodymethods.h:1020
void rw::physics::RigidBody::ResetForces(const const rw::math::vpu::Vector3 &  gravityForce) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:985
void rw::physics::RigidBody::SetSpy(const RwBool  on_off) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:959
void rw::physics::RigidBody::SetTag(const uint32_t  tag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:78
void rw::physics::RigidBody::AddressFromOffset(rw::physics::Simulation *, const int32_t  off) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:933
void rw::physics::RigidBody::SetCoolDown(const uint32_t  cd) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:1075
void rw::physics::RigidBody::AddForce(const const rw::math::vpu::Vector3 &  lf, const rw::physics::InputSpace  spc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rigidbodymethods.h:1079
		Vector3 accel;

	}
}

// rigidbodymethods.h:1214
void rw::physics::RigidBody::GetRight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:1239
void rw::physics::RigidBody::GetLeft() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:1351
void rw::physics::RigidBody::SetLeft(RigidBody *  le) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:112
void rw::physics::RigidBody::OffsetFromAddress() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:1322
void rw::physics::RigidBody::SetRight(RigidBody *  ri) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:633
void rw::physics::RigidBody::GetCoolDown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rigidbodymethods.h:1189
void rw::physics::RigidBody::GetSimulation() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


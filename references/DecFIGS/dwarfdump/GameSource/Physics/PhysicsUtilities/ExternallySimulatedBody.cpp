// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// ExternallySimulatedBody.cpp:32
	extern int32_t KI_HOLD_CAR_IN_PLACE;

	// ExternallySimulatedBody.cpp:33
	extern int32_t KI_HOLD_CAR_SPINING_IN_AIR;

	// ExternallySimulatedBody.cpp:34
	extern float32_t KF_SPINNING_SPEED_X;

	// ExternallySimulatedBody.cpp:35
	extern float32_t KF_SPINNING_SPEED_Y;

	// ExternallySimulatedBody.cpp:36
	extern float32_t KF_SPINNING_SPEED_Z;

}

// ExternallySimulatedBody.cpp:259
void BrnPhysics::ExternallySimulatedBody::ReadVelocityFromRenderware(const RigidBody *  lpRigidBody) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ExternallySimulatedBody.cpp:163
void BrnPhysics::ExternallySimulatedBody::WriteVelocityIntoRenderware(RigidBody *  lpRigidBody) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::physics::RigidBody::SetLinearVelocity(/* parameters */);
	rw::physics::RigidBody::SetAngularVelocity(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
}

// ExternallySimulatedBody.cpp:62
void BrnPhysics::ExternallySimulatedBody::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
}

// ExternallySimulatedBody.cpp:82
void BrnPhysics::ExternallySimulatedBody::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
}

// ExternallySimulatedBody.cpp:101
void BrnPhysics::ExternallySimulatedBody::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
}

// ExternallySimulatedBody.cpp:123
void BrnPhysics::ExternallySimulatedBody::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
}

// ExternallySimulatedBody.cpp:278
void BrnPhysics::ExternallySimulatedBody::ReadTransformFromRenderware(const RigidBody *  lpRigidBody) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
}

// ExternallySimulatedBody.cpp:182
void BrnPhysics::ExternallySimulatedBody::WriteTransformIntoRenderware(RigidBody *  lpRigidBody) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::physics::RigidBody::SetTransform(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::physics::RigidBody::SetPosition(/* parameters */);
	rw::math::vpu::QuaternionFromMatrix44Affine(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Quaternion::operator=(/* parameters */);
	rw::physics::RigidBody::InertiaUpdate(/* parameters */);
	rw::physics::RigidBody::InertiaDynamicUpdate(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	Vector3<VectorAxisZ, VectorAxisY, VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	Vector3<VectorAxisZ, VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	{
	}
	{
	}
	Vector3<VectorAxisZ, VectorAxisY, VectorAxisZ>(/* parameters */);
	Vector3<VectorAxisZ, VectorAxisY, VectorAxisY>(/* parameters */);
	{
	}
	Vector3<VectorAxisZ, VectorAxisY, VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
}

// ExternallySimulatedBody.cpp:200
void BrnPhysics::ExternallySimulatedBody::ReadFromRenderware(const RigidBody *  lpRigidBody) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	{
		// ExternallySimulatedBody.cpp:217
		Vector3 lpos;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Vector3::SetY(/* parameters */);
		rw::math::vpu::GetVector3_Zero(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	}
	{
		// ExternallySimulatedBody.cpp:224
		Vector3 lpos;

		rw::physics::RigidBody::GetTransform(/* parameters */);
		SetY<VectorAxisY>(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	}
}

// ExternallySimulatedBody.cpp:143
void BrnPhysics::ExternallySimulatedBody::WriteIntoRenderware(RigidBody *  lpRigidBody) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::physics::RigidBody::SetTransform(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::physics::RigidBody::SetPosition(/* parameters */);
	rw::math::vpu::QuaternionFromMatrix44Affine(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Quaternion::operator=(/* parameters */);
	rw::physics::RigidBody::InertiaUpdate(/* parameters */);
	rw::physics::RigidBody::InertiaDynamicUpdate(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	Vector3<VectorAxisZ, VectorAxisY, VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	Vector3<VectorAxisZ, VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	{
	}
	{
	}
	Vector3<VectorAxisZ, VectorAxisY, VectorAxisZ>(/* parameters */);
	Vector3<VectorAxisZ, VectorAxisY, VectorAxisY>(/* parameters */);
	{
	}
	Vector3<VectorAxisZ, VectorAxisY, VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	{
	}
	{
	}
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::physics::RigidBody::SetLinearVelocity(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
	rw::physics::RigidBody::SetAngularVelocity(/* parameters */);
	rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
}


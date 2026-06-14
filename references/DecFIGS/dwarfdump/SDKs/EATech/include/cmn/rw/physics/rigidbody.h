// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:31
	namespace physics {
		// rigidbody.h:73
		enum BodyState {
			FREE_BODY = 0,
			STATIC_BODY = 1,
			FROZEN_BODY = 2,
			ACTIVE_BODY = 4,
			STATE_FILTER = 7,
			SPY_BODY = 8,
			BS_FORCE_ENUM_SIZE = 2147483647,
		}

		// rigidbody.h:98
		enum InputSpace {
			WORLD_SPACE = 0,
			BODY_SPACE = 1,
			IS_FORCE_ENUM_SIZE = 2147483647,
		}

	}

}

// rigidbody.h:130
struct rw::physics::RigidBody {
private:
	// rigidbody.h:419
	Quaternion mQuat;

	// Unknown accessibility
	// vector3.h:131
	typedef Vector3Template<float> Vector3U_32;

	// rigidbody.h:421
	RigidBody::Vector3U_32 mCom;

	// rigidbody.h:423
	uint32_t mId;

	// rigidbody.h:425
	RigidBody::Vector3U_32 mVel;

	// rigidbody.h:427
	int32_t mRight;

	// rigidbody.h:429
	RigidBody::Vector3U_32 mOmega;

	// rigidbody.h:431
	int32_t mLeft;

	// rigidbody.h:433
	RigidBody::Vector3U_32 mRi;

	// rigidbody.h:435
	uint32_t mPad0;

	// rigidbody.h:437
	RigidBody::Vector3U_32 mUp;

	// rigidbody.h:439
	uint32_t mPad1;

	// rigidbody.h:441
	RigidBody::Vector3U_32 mAt;

	// rigidbody.h:443
	uint32_t mTag;

	// rigidbody.h:445
	RigidBody::Vector3U_32 mIfull;

	// rigidbody.h:447
	float32_t mInvm;

	// rigidbody.h:449
	RigidBody::Vector3U_32 mIsplt;

	// rigidbody.h:451
	rw::physics::BodyState mState;

	// rigidbody.h:453
	RigidBody::Vector3U_32 mForce;

	// rigidbody.h:455
	float32_t mKine;

	// rigidbody.h:457
	RigidBody::Vector3U_32 mTorque;

	// rigidbody.h:459
	uint32_t mCool;

	// Unknown accessibility
	// rigidbody.h:50
	typedef rw::physics::Simulation * SimulationPtr;

	// rigidbody.h:461
	RigidBody::SimulationPtr mStasis;

	// Unknown accessibility
	// inertia.h:197
	typedef Inertia * InertiaPtr;

	// rigidbody.h:463
	RigidBody::InertiaPtr mInertia;

public:
	// rigidbody.h:142
	void RigidBody();

	// rigidbody.h:146
	void ~RigidBody();

	// rigidbody.h:150
	ResourceDescriptor GetResourceDescriptor();

	// rigidbody.h:154
	RigidBody * AddressFromOffset(rw::physics::Simulation *, int32_t);

	// rigidbody.h:158
	int32_t OffsetFromAddress() const;

	// rigidbody.h:162
	void InertiaUpdate();

	// rigidbody.h:174
	const float32_t & GetInverseMass() const;

	// rigidbody.h:178
	Matrix33 GetWorldSpaceInverseInertia() const;

	// rigidbody.h:182
	Vector3 GetPosition() const;

	// rigidbody.h:186
	Vector3 GetLinearVelocity() const;

	// rigidbody.h:190
	Vector3 GetAngularVelocity() const;

	// rigidbody.h:194
	Vector3 GetLocalVelocity(const rw::math::vpu::Vector3 &) const;

	// rigidbody.h:198
	Vector3 GetLinearAcceleration() const;

	// rigidbody.h:202
	Vector3 GetAngularAcceleration() const;

	// rigidbody.h:206
	Vector3 GetLocalAcceleration(const rw::math::vpu::Vector3 &) const;

	// rigidbody.h:210
	Quaternion GetQuaternion() const;

	// rigidbody.h:214
	Matrix33 GetOrientation() const;

	// rigidbody.h:218
	QuatPos GetQuatPos() const;

	// rigidbody.h:222
	Matrix44Affine GetTransform() const;

	// rigidbody.h:226
	Inertia * GetInertia() const;

	// rigidbody.h:230
	float32_t GetKineticEnergy() const;

	// rigidbody.h:234
	uint32_t GetCoolDown() const;

	// rigidbody.h:238
	uint32_t GetTag() const;

	// rigidbody.h:242
	rw::physics::BodyState GetState() const;

	// rigidbody.h:254
	void SetPosition(const rw::math::vpu::Vector3 &);

	// rigidbody.h:258
	void SetLinearVelocity(const rw::math::vpu::Vector3 &);

	// rigidbody.h:262
	void SetAngularVelocity(const rw::math::vpu::Vector3 &);

	// rigidbody.h:266
	void SetLinearAcceleration(const rw::math::vpu::Vector3 &);

	// rigidbody.h:270
	void SetAngularAcceleration(const rw::math::vpu::Vector3 &);

	// rigidbody.h:274
	void SetTransform(const rw::math::vpu::Matrix44Affine &);

	// rigidbody.h:278
	void SetTransform(const rw::math::vpu::QuatPos &);

	// rigidbody.h:282
	void SetInertia(Inertia *);

	// rigidbody.h:286
	void SetCoolDown(uint32_t);

	// rigidbody.h:290
	void SetTag(uint32_t);

	// rigidbody.h:294
	void SetSpy(RwBool);

	// rigidbody.h:306
	void ResetForces();

	// rigidbody.h:310
	void AddForce(const rw::math::vpu::Vector3 &, rw::physics::InputSpace);

	// rigidbody.h:314
	void AddTorque(const rw::math::vpu::Vector3 &, rw::physics::InputSpace);

	// rigidbody.h:319
	void AddLocalForce(const rw::math::vpu::Vector3 &, rw::physics::InputSpace, const rw::math::vpu::Vector3 &, rw::physics::InputSpace);

	// rigidbody.h:331
	rw::physics::Simulation * GetSimulation() const;

	// rigidbody.h:335
	RigidBody * GetRight() const;

	// rigidbody.h:339
	RigidBody * GetLeft() const;

	// rigidbody.h:343
	void SetRight(RigidBody *);

	// rigidbody.h:347
	void SetLeft(RigidBody *);

	// rigidbody.h:351
	uint32_t GetReactionForcesId() const;

private:
	// rigidbody.h:357
	void SetSimulation(rw::physics::Simulation *);

	// rigidbody.h:361
	void Move(RigidBody *);

	// rigidbody.h:365
	void SetStatic(const rw::math::vpu::Matrix44Affine &);

	// rigidbody.h:369
	void SetDynamic(const rw::math::vpu::Matrix44Affine &, Inertia *);

	// rigidbody.h:373
	void SetState(rw::physics::BodyState);

	// rigidbody.h:377
	void SetReactionForcesId(uint32_t);

	// rigidbody.h:381
	void DynamicUpdate();

	// rigidbody.h:387
	void InertiaUpdate(Inertia *);

	// rigidbody.h:391
	void ResetForces(const rw::math::vpu::Vector3 &);

	// rigidbody.h:397
	void DynamicUpdate(Inertia *, void *, float32_t, uint32_t, float32_t, const rw::math::vpu::Vector3 &);

	// rigidbody.h:401
	void InertiaDynamicUpdate(Inertia *);

}


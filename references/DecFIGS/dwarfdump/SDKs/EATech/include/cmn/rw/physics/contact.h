// contact.h:74
struct rw::physics::Contact {
private:
	// contact.h:216
	RigidBody::Vector3U_32 mPosA;

	// contact.h:218
	int32_t mBodyA;

	// contact.h:220
	RigidBody::Vector3U_32 mPosB;

	// contact.h:222
	int32_t mBodyB;

	// contact.h:224
	RigidBody::Vector3U_32 mRi;

	// contact.h:226
	float32_t mRes;

	// contact.h:228
	RigidBody::Vector3U_32 mUp;

	// contact.h:230
	float32_t mMus;

	// contact.h:232
	RigidBody::Vector3U_32 mAt;

	// contact.h:234
	float32_t mMud;

	// contact.h:236
	RigidBody::Vector3U_32 mVel;

	// contact.h:238
	uint32_t mTag;

	// Unknown accessibility
	// vector4.h:158
	typedef Vector4Template<float> Vector4U_32;

	// contact.h:239
	Contact::Vector4U_32[10] mPad;

public:
	// contact.h:85
	void Contact();

	// contact.h:89
	void ~Contact();

	// contact.h:93
	ResourceDescriptor GetResourceDescriptor();

	// contact.h:105
	RigidBody * GetBodyA(rw::physics::Simulation *) const;

	// contact.h:109
	RigidBody * GetBodyB(rw::physics::Simulation *) const;

	// contact.h:113
	uint32_t GetTag() const;

	// contact.h:117
	Vector3 GetPositionOnA() const;

	// contact.h:121
	Vector3 GetPositionOnB() const;

	// contact.h:125
	Vector3 GetVelocity() const;

	// contact.h:129
	Matrix33 GetFrame() const;

	// contact.h:133
	const float32_t & GetStaticFriction() const;

	// contact.h:137
	const float32_t & GetDynamicFriction() const;

	// contact.h:141
	const float32_t & GetRestitution() const;

	// contact.h:153
	void SetBodyA(RigidBody *);

	// contact.h:157
	void SetBodyB(RigidBody *);

	// contact.h:161
	void SetTag(uint32_t);

	// contact.h:165
	void SetPositionOnA(const rw::math::vpu::Vector3 &);

	// contact.h:169
	void SetPositionOnB(const rw::math::vpu::Vector3 &);

	// contact.h:173
	void SetFrame(const rw::math::vpu::Matrix33 &);

	// contact.h:177
	void GenerateFrame(const rw::math::vpu::Vector3 &);

	// contact.h:181
	void SetFriction(float32_t, float32_t);

	// contact.h:185
	void SetRestitution(float32_t);

	// contact.h:189
	void SetVelocity(const rw::math::vpu::Vector3 &);

	// contact.h:196
	void GenerateFromCollision(RigidBody *, RigidBody *, const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &);

	// contact.h:207
	void GenerateFromCollision(RigidBody *, RigidBody *, const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &, float32_t, float32_t, float32_t, uint32_t);

}


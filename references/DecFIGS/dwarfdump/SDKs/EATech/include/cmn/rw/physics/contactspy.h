// contactspy.h:76
struct rw::physics::ContactSpy {
private:
	// contactspy.h:180
	Matrix44Affine mFrame;

	// contactspy.h:182
	Vector3 mNimp;

	// contactspy.h:184
	Vector3 mFric;

	// contactspy.h:186
	int32_t mBodyA;

	// contactspy.h:188
	int32_t mBodyB;

	// contactspy.h:190
	uint32_t mTag;

public:
	// contactspy.h:88
	void ContactSpy();

	// contactspy.h:92
	void ~ContactSpy();

	// contactspy.h:96
	ResourceDescriptor GetResourceDescriptor();

	// contactspy.h:108
	RigidBody * GetBodyA(rw::physics::Simulation *) const;

	// contactspy.h:112
	RigidBody * GetBodyB(rw::physics::Simulation *) const;

	// contactspy.h:116
	uint32_t GetTag() const;

	// contactspy.h:120
	Vector3 GetNormalStress() const;

	// contactspy.h:124
	Vector3 GetFrictionStress() const;

	// contactspy.h:128
	Matrix44Affine GetFrame() const;

private:
	// contactspy.h:140
	void SetBodyA(int32_t);

	// contactspy.h:144
	void SetBodyB(int32_t);

	// contactspy.h:148
	void SetTag(uint32_t);

	// contactspy.h:152
	void SetNormalStress(const rw::math::vpu::Vector3 &);

	// contactspy.h:156
	void SetFrictionStress(const rw::math::vpu::Vector3 &);

	// contactspy.h:160
	void SetFrame(const rw::math::vpu::Matrix44Affine &);

}


// inertia.h:70
struct rw::physics::Inertia {
private:
	// inertia.h:176
	Vector3 mInvTens;

	// inertia.h:177
	float32_t mInvMass;

	// inertia.h:178
	float32_t mSpherical;

	// inertia.h:179
	float32_t mMaxVelocity;

	// inertia.h:180
	float32_t mMaxOmega;

	// inertia.h:181
	float32_t mLinearDrag;

	// inertia.h:182
	float32_t mAngularDrag;

public:
	// inertia.h:80
	void Inertia();

	// inertia.h:90
	void ~Inertia();

	// inertia.h:94
	ResourceDescriptor GetResourceDescriptor();

	// inertia.h:98
	void EndianSwap();

	// inertia.h:110
	Vector3 GetInverseInertia() const;

	// inertia.h:114
	const float32_t & GetSphericalInertia() const;

	// inertia.h:118
	const float32_t & GetInverseMass() const;

	// inertia.h:122
	const float32_t & GetMaxLinearVelocity() const;

	// inertia.h:126
	const float32_t & GetMaxAngularVelocity() const;

	// inertia.h:130
	const float32_t & GetLinearDrag() const;

	// inertia.h:134
	const float32_t & GetAngularDrag() const;

	// inertia.h:146
	void SetInverseInertia(const rw::math::vpu::Vector3 &);

	// inertia.h:150
	void SetInverseMass(float32_t);

	// inertia.h:154
	void SetMaxLinearVelocity(float32_t);

	// inertia.h:158
	void SetMaxAngularVelocity(float32_t);

	// inertia.h:162
	void SetLinearDrag(float32_t);

	// inertia.h:166
	void SetAngularDrag(float32_t);

}


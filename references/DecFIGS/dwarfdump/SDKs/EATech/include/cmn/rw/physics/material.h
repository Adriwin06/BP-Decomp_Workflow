// material.h:68
struct rw::physics::Material {
private:
	// material.h:121
	float32_t m_mus;

	// material.h:122
	float32_t m_mud;

	// material.h:123
	float32_t m_res;

public:
	// material.h:73
	void Material();

	// material.h:91
	void Material(float32_t, float32_t, float32_t);

	// material.h:103
	ResourceDescriptor GetResourceDescriptor();

	// material.h:105
	void EndianSwap();

	// material.h:107
	const float32_t GetStaticFriction() const;

	// material.h:109
	const float32_t GetDynamicFriction() const;

	// material.h:111
	const float32_t GetRestitution() const;

	// material.h:113
	void SetFriction(float32_t, float32_t);

	// material.h:115
	void SetRestitution(float32_t);

}


// Spring1D.h:209
struct BrnPhysics::Spring1D {
private:
	// Spring1D.h:293
	float32_t mfDesiredLength;

	// Spring1D.h:294
	float32_t mfCurrentLength;

	// Spring1D.h:295
	float32_t mfMass;

	// Spring1D.h:296
	float32_t mfVelocity;

	// Spring1D.h:297
	float32_t mfStiffness;

	// Spring1D.h:298
	float32_t mfTotalForce;

	// Spring1D.h:299
	float32_t mfDampeningConstant;

	// Spring1D.h:300
	float32_t mfMaxStretch;

	// Spring1D.h:301
	float32_t mfMinStretch;

public:
	// Spring1D.h:212
	void Construct();

	// Spring1D.h:222
	bool Prepare(float32_t, float32_t, float32_t, float32_t, float32_t, float32_t, float32_t);

	// Spring1D.h:226
	void Update(float32_t);

	// Spring1D.h:229
	void Release();

	// Spring1D.h:232
	void Destruct();

	// Spring1D.h:235
	float32_t GetLength() const;

	// Spring1D.h:239
	float32_t GetOffset() const;

	// Spring1D.h:243
	float32_t GetVelocity() const;

	// Spring1D.h:247
	float32_t GetOffsetRatio() const;

	// Spring1D.h:250
	float32_t GetMaxStretch() const;

	// Spring1D.h:255
	void SetStiffness(float32_t);

	// Spring1D.h:260
	void SetDampening(float32_t);

	// Spring1D.h:265
	void SetVelocity(float32_t);

	// Spring1D.h:270
	void SetDesiredLength(float32_t);

	// Spring1D.h:275
	void SetMaxStretch(float32_t);

	// Spring1D.h:280
	void SetMinStretch(float32_t);

	// Spring1D.h:285
	void AddForce(float32_t);

	// Spring1D.h:289
	void Reset();

}

// Spring1D.h:38
struct BrnPhysics::SuspensionSpring {
protected:
	// Spring1D.h:147
	VectorIntrinsicUnion::VectorIntrinsic mvStiffness_Damping_Mass_Position;

	// Spring1D.h:148
	VectorIntrinsicUnion::VectorIntrinsic mvVelocity_Acceleration_DampingForce_SpringForce;

	// Spring1D.h:149
	VectorIntrinsicUnion::VectorIntrinsic mvExternalForce;

public:
	// Spring1D.h:42
	void Construct();

	// Spring1D.h:45
	void Destruct();

	// Spring1D.h:51
	void Prepare(VecFloat, VecFloat, VecFloat);

	// Spring1D.h:54
	void Reset();

	// Spring1D.h:58
	void Integrate(VecFloat);

	// Spring1D.h:62
	void ApplyForce(VecFloat);

	// Spring1D.h:65
	VecFloat GetResultantForce() const;

	// Spring1D.h:68
	VecFloat GetStiffness() const;

	// Spring1D.h:72
	VecFloat GetDamping() const;

	// Spring1D.h:76
	VecFloat GetMass() const;

	// Spring1D.h:80
	VecFloat GetPosition() const;

	// Spring1D.h:84
	VecFloat GetVelocity() const;

	// Spring1D.h:89
	void SetStiffness(VecFloat);

	// Spring1D.h:97
	void SetDamping(VecFloat);

	// Spring1D.h:105
	void SetMass(VecFloat);

	// Spring1D.h:113
	void SetPosition(VecFloat);

	// Spring1D.h:121
	void SetVelocity(VecFloat);

	// Spring1D.h:128
	VecFloat GetAcceleration() const;

protected:
	// Spring1D.h:154
	VecFloat GetDampingForce() const;

	// Spring1D.h:158
	VecFloat GetSpringForce() const;

	// Spring1D.h:162
	VecFloat GetExternalForce() const;

	// Spring1D.h:167
	void SetAcceleration(VecFloat);

	// Spring1D.h:175
	void SetDampingForce(VecFloat);

	// Spring1D.h:183
	void SetSpringForce(VecFloat);

	// Spring1D.h:191
	void SetExternalForce(VecFloat);

}


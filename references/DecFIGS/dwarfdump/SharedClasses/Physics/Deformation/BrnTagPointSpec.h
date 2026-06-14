// BrnTagPointSpec.h:49
struct BrnPhysics::Deformation::TagPointSpec {
private:
	// BrnTagPointSpec.h:136
	Vector3Plus mOffsetFromAAndWeightA;

	// BrnTagPointSpec.h:137
	Vector3Plus mOffsetFromBAndWeightB;

	// BrnTagPointSpec.h:138
	Vector3Plus mInitialPositionAndDetachThreshold;

	// BrnTagPointSpec.h:139
	float32_t mfWeightA;

	// BrnTagPointSpec.h:140
	float32_t mfWeightB;

	// BrnTagPointSpec.h:141
	float32_t mfDetachThresholdSquared;

	// BrnTagPointSpec.h:142
	int16_t miDeformationSensorA;

	// BrnTagPointSpec.h:143
	int16_t miDeformationSensorB;

	// BrnTagPointSpec.h:144
	int8_t miJointIndex;

	// BrnTagPointSpec.h:145
	bool mbSkinnedPoint;

public:
	// BrnTagPointSpec.h:61
	void Construct(int32_t, float32_t, Vector3, int32_t, float32_t, Vector3, Vector3, float32_t, bool);

	// BrnTagPointSpec.h:64
	int16_t GetDeformationSensorA() const;

	// BrnTagPointSpec.h:67
	int16_t GetDeformationSensorB() const;

	// BrnTagPointSpec.h:70
	const rw::math::vpu::Vector3 & GetOffsetFromDeformationSensorA() const;

	// BrnTagPointSpec.h:73
	const rw::math::vpu::Vector3 & GetOffsetFromDeformationSensorB() const;

	// BrnTagPointSpec.h:76
	const rw::math::vpu::Vector3 & GetInitialPosition() const;

	// BrnTagPointSpec.h:80
	void SetInitialPosition(const rw::math::vpu::Vector3 &);

	// BrnTagPointSpec.h:83
	void FixUp(void *);

	// BrnTagPointSpec.h:86
	void FixDown(void *);

	// BrnTagPointSpec.h:89
	bool IsSkinned() const;

	// BrnTagPointSpec.h:94
	void SetOffsetFromA(const rw::math::vpu::Vector3 &);

	// BrnTagPointSpec.h:98
	void SetOffsetFromB(const rw::math::vpu::Vector3 &);

	// BrnTagPointSpec.h:102
	void SetWeightA(float32_t);

	// BrnTagPointSpec.h:106
	void SetWeightB(float32_t);

	// BrnTagPointSpec.h:110
	void SetDetachThreshold(float32_t);

	// BrnTagPointSpec.h:113
	float32_t GetWeightA() const;

	// BrnTagPointSpec.h:116
	float32_t GetWeightB() const;

	// BrnTagPointSpec.h:119
	float32_t GetDetachThresholdSquared() const;

	// BrnTagPointSpec.h:122
	VecFloat GetWeightAVec() const;

	// BrnTagPointSpec.h:125
	VecFloat GetWeightBVec() const;

	// BrnTagPointSpec.h:128
	VecFloat GetDetachThresholdSquaredVec() const;

	// BrnTagPointSpec.h:131
	int32_t GetIKPartJointIndex() const;

}


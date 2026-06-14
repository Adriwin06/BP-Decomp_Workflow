// BrnIKDrivenPointSpec.h:46
struct BrnPhysics::Deformation::IKDrivenPointSpec {
private:
	// BrnIKDrivenPointSpec.h:92
	Vector3 mInitialPos;

	// BrnIKDrivenPointSpec.h:93
	float32_t mfDistanceFromA;

	// BrnIKDrivenPointSpec.h:94
	float32_t mfDistanceFromB;

	// BrnIKDrivenPointSpec.h:95
	int16_t miTagPointIndexA;

	// BrnIKDrivenPointSpec.h:96
	int16_t miTagPointIndexB;

public:
	// BrnIKDrivenPointSpec.h:54
	void Construct(Vector3, int16_t, int16_t, float32_t, float32_t);

	// BrnIKDrivenPointSpec.h:57
	void Destruct();

	// BrnIKDrivenPointSpec.h:60
	bool Prepare();

	// BrnIKDrivenPointSpec.h:63
	bool Release();

	// BrnIKDrivenPointSpec.h:67
	void SetInitialPosition(Vector3);

	// BrnIKDrivenPointSpec.h:70
	int32_t GetTagPointAIndex() const;

	// BrnIKDrivenPointSpec.h:73
	int32_t GetTagPointBIndex() const;

	// BrnIKDrivenPointSpec.h:76
	float32_t GetDesiredDistanceFromTagPointA() const;

	// BrnIKDrivenPointSpec.h:79
	float32_t GetDesiredDistanceFromTagPointB() const;

	// BrnIKDrivenPointSpec.h:82
	const rw::math::vpu::Vector3 & GetInitialPos() const;

	// BrnIKDrivenPointSpec.h:85
	void FixUp(void *);

	// BrnIKDrivenPointSpec.h:88
	void FixDown(void *);

}


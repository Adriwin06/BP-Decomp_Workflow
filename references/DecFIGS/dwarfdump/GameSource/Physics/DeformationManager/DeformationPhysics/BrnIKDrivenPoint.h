// BrnIKDrivenPoint.h:47
struct BrnPhysics::Deformation::IKDrivenPoint {
private:
	// BrnIKDrivenPoint.h:93
	Vector3Plus mPositionPlusDistanceToA;

	// BrnIKDrivenPoint.h:94
	Vector3Plus mDirectionPlusDistanceToB;

	// BrnIKDrivenPoint.h:95
	const IKDrivenPointSpec * mpSpec;

	// BrnIKDrivenPoint.h:96
	const TagPoint * mpTagPointA;

	// BrnIKDrivenPoint.h:97
	const TagPoint * mpTagPointB;

	// BrnIKDrivenPoint.h:98
	float32_t mfScratchAmount;

public:
	// BrnIKDrivenPoint.h:52
	void Construct(const IKDrivenPointSpec *, const TagPoint *);

	// BrnIKDrivenPoint.h:55
	void Destruct();

	// BrnIKDrivenPoint.h:58
	bool Prepare();

	// BrnIKDrivenPoint.h:61
	bool Release();

	// BrnIKDrivenPoint.h:64
	void Update();

	// BrnIKDrivenPoint.h:67
	const rw::math::vpu::Vector3 & GetPosition() const;

	// BrnIKDrivenPoint.h:70
	const rw::math::vpu::Vector3 & GetDirection() const;

	// BrnIKDrivenPoint.h:73
	const TagPoint * GetTagPointA() const;

	// BrnIKDrivenPoint.h:76
	const TagPoint * GetTagPointB() const;

	// BrnIKDrivenPoint.h:79
	void SetPosition(Vector3);

	// BrnIKDrivenPoint.h:82
	Vector3 GetOffsetFromInitialPosition() const;

	// BrnIKDrivenPoint.h:85
	float32_t GetScratchAmount() const;

	// BrnIKDrivenPoint.h:88
	Vector3 GetOriginalPosition() const;

private:
	// BrnIKDrivenPoint.h:104
	Vector3 ResolveConstraint(Vector3, Vector3, VecFloat);

}


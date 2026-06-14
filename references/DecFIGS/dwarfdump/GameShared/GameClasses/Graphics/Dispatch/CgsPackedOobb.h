// CgsPackedOobb.h:33
struct CgsGraphics::PackedOobb {
private:
	// CgsPackedOobb.h:58
	VectorIntrinsicUnion::VectorIntrinsic mPackedBB;

	// Unknown accessibility
	// CgsPackedOobb.h:80
	extern const VectorIntrinsicUnion::VectorIntrinsic K_POS_EXP_PERMUTE;

	// Unknown accessibility
	// CgsPackedOobb.h:81
	extern const VectorIntrinsicUnion::VectorIntrinsic K_SCALE_EXP_PERMUTE;

	// Unknown accessibility
	// CgsPackedOobb.h:82
	extern const VectorIntrinsicUnion::VectorIntrinsic K_QUAT_PERMUTE;

	// Unknown accessibility
	// CgsPackedOobb.h:83
	extern const VectorIntrinsicUnion::VectorIntrinsic K_POSITION_PERMUTE;

	// Unknown accessibility
	// CgsPackedOobb.h:84
	extern const VectorIntrinsicUnion::VectorIntrinsic K_SCALE_PERMUTE;

public:
	// CgsPackedOobb.h:40
	void Construct(Vector3, Quaternion, Vector3);

	// CgsPackedOobb.h:44
	void Construct(Matrix44);

	// CgsPackedOobb.h:51
	VectorIntrinsicUnion::VectorIntrinsic LoadIntrinsic(uint32_t, uint32_t, uint32_t, uint32_t);

private:
	// CgsPackedOobb.h:56
	uint32_t CalcExponent(Vector3, VecFloat &);

public:
	// CgsPackedOobb.h:66
	void ToMatrix(Matrix44 &) const;

	// CgsPackedOobb.h:73
	void MultiplyByMatrix(Matrix44, Matrix44 &) const;

	// CgsPackedOobb.h:77
	Vector3 GetPosition() const;

}

// CgsPackedOobb.h:80
extern const VectorIntrinsicUnion::VectorIntrinsic K_POS_EXP_PERMUTE;

// CgsPackedOobb.h:81
extern const VectorIntrinsicUnion::VectorIntrinsic K_SCALE_EXP_PERMUTE;

// CgsPackedOobb.h:82
extern const VectorIntrinsicUnion::VectorIntrinsic K_QUAT_PERMUTE;

// CgsPackedOobb.h:83
extern const VectorIntrinsicUnion::VectorIntrinsic K_POSITION_PERMUTE;

// CgsPackedOobb.h:84
extern const VectorIntrinsicUnion::VectorIntrinsic K_SCALE_PERMUTE;


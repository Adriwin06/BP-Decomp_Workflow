// maskscalar.h:24
struct rw::math::vpu::MaskScalar {
	// maskscalar.h:53
	VectorIntrinsicUnion::VectorIntrinsic mV;

public:
	// maskscalar.h:33
	void MaskScalar();

	// maskscalar.h:36
	// Declaration
	void MaskScalar() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// vector_intrinsic.h:14
		typedef VectorIntrinsicUnion::VectorIntrinsic VectorIntrinsicInParam;

	}

	// maskscalar.h:37
	void MaskScalar(bool);

	// maskscalar.h:43
	void MaskScalar(uint32_t);

	// maskscalar.h:44
	bool GetBool() const;

	// maskscalar.h:48
	uint32_t ToUInt32() const;

	// maskscalar.h:50
	void SetTrue();

	// maskscalar.h:51
	void SetFalse();

}

// maskscalar.h:24
struct rw::math::vpu::MaskScalar {
	// maskscalar.h:53
	VectorIntrinsicUnion::VectorIntrinsic mV;

public:
	// maskscalar.h:33
	void MaskScalar();

	// maskscalar.h:36
	// Declaration
	void MaskScalar(VectorIntrinsicInParam) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// vector_intrinsic.h:14
		typedef VectorIntrinsicUnion::VectorIntrinsic VectorIntrinsicInParam;

	}

	// maskscalar.h:37
	void MaskScalar(bool);

	// maskscalar.h:43
	void MaskScalar(uint32_t);

	// maskscalar.h:44
	bool GetBool() const;

	// maskscalar.h:48
	uint32_t ToUInt32() const;

	// maskscalar.h:50
	void SetTrue();

	// maskscalar.h:51
	void SetFalse();

}


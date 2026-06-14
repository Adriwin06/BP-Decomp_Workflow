// mask2.h:26
struct rw::math::vpu::Mask2 {
	// mask2.h:56
	VectorIntrinsicUnion::VectorIntrinsic mV;

public:
	// mask2.h:35
	void Mask2();

	// mask2.h:38
	void Mask2(VectorIntrinsicInParam);

	// mask2.h:39
	void Mask2(bool, bool);

	// mask2.h:46
	void Mask2(uint32_t, uint32_t);

	// mask2.h:47
	void Mask2(MaskScalar);

	// mask2.h:48
	void Mask2(MaskScalar, MaskScalar);

	// mask2.h:49
	MaskScalar GetX() const;

	// mask2.h:50
	MaskScalar GetY() const;

	// mask2.h:51
	void SetX(MaskScalar);

	// mask2.h:52
	void SetY(MaskScalar);

	// mask2.h:53
	void SetTrue();

	// mask2.h:54
	void SetFalse();

}


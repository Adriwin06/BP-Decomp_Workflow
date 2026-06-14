// mask3.h:25
struct rw::math::vpu::Mask3 {
	// mask3.h:59
	VectorIntrinsicUnion::VectorIntrinsic mV;

public:
	// mask3.h:34
	void Mask3();

	// mask3.h:37
	void Mask3(VectorIntrinsicInParam);

	// mask3.h:38
	void Mask3(bool, bool, bool);

	// mask3.h:46
	void Mask3(uint32_t, uint32_t, uint32_t);

	// mask3.h:47
	void Mask3(MaskScalar);

	// mask3.h:48
	void Mask3(MaskScalar, MaskScalar, MaskScalar);

	// mask3.h:49
	MaskScalar GetX() const;

	// mask3.h:50
	MaskScalar GetY() const;

	// mask3.h:51
	MaskScalar GetZ() const;

	// mask3.h:52
	void SetX(MaskScalar);

	// mask3.h:53
	void SetY(MaskScalar);

	// mask3.h:54
	void SetZ(MaskScalar);

	// mask3.h:55
	void SetTrue();

	// mask3.h:56
	void SetFalse();

}


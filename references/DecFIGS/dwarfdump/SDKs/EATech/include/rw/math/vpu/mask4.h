// mask4.h:25
struct rw::math::vpu::Mask4 {
	// mask4.h:62
	VectorIntrinsicUnion::VectorIntrinsic mV;

public:
	// mask4.h:34
	void Mask4();

	// mask4.h:37
	void Mask4(VectorIntrinsicInParam);

	// mask4.h:38
	void Mask4(bool, bool, bool, bool);

	// mask4.h:47
	void Mask4(uint32_t, uint32_t, uint32_t, uint32_t);

	// mask4.h:48
	void Mask4(MaskScalar);

	// mask4.h:49
	void Mask4(MaskScalar, MaskScalar, MaskScalar, MaskScalar);

	// mask4.h:50
	MaskScalar GetX() const;

	// mask4.h:51
	MaskScalar GetY() const;

	// mask4.h:52
	MaskScalar GetZ() const;

	// mask4.h:53
	MaskScalar GetW() const;

	// mask4.h:54
	void SetX(MaskScalar);

	// mask4.h:55
	void SetY(MaskScalar);

	// mask4.h:56
	void SetZ(MaskScalar);

	// mask4.h:57
	void SetW(MaskScalar);

	// mask4.h:58
	void SetTrue();

	// mask4.h:59
	void SetFalse();

}


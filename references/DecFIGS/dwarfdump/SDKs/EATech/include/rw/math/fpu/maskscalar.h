// maskscalar.h:24
struct rw::math::fpu::MaskScalarTemplate<float> {
	// maskscalar.h:88
	float mS;

public:
	// maskscalar.h:42
	void MaskScalarTemplate();

	// maskscalar.h:46
	void MaskScalarTemplate(const MaskScalarTemplate<float> &);

	// maskscalar.h:51
	MaskScalarTemplate<float> & operator=(const MaskScalarTemplate<float> &);

	// maskscalar.h:62
	void MaskScalarTemplate(float);

	// maskscalar.h:67
	void MaskScalarTemplate(bool);

	// maskscalar.h:72
	bool GetBool() const;

	// maskscalar.h:77
	void SetTrue();

	// maskscalar.h:82
	void SetFalse();

}


// drvbuildstate.h:59
struct rw::graphics::SamplerStateBitField {
private:
	// drvbuildstate.h:148
	uint64_t[2] m_data;

public:
	// drvbuildstate.h:65
	void SamplerStateBitField();

	// drvbuildstate.h:66
	void ~SamplerStateBitField();

	// drvbuildstate.h:69
	void SamplerStateBitField(const SamplerStateBitField &);

	// drvbuildstate.h:72
	void SamplerStateBitField(const uint64_t &);

	// drvbuildstate.h:75
	void EndianSwap(SamplerStateBitField &);

	// drvbuildstate.h:78
	uint32_t GetSize() const;

	// drvbuildstate.h:81
	RwBool operator[](uint32_t) const;

	// drvbuildstate.h:84
	void operator&=(const SamplerStateBitField &);

	// drvbuildstate.h:87
	uint32_t operator&(const uint32_t &) const;

	// drvbuildstate.h:90
	void operator|=(const SamplerStateBitField &);

	// drvbuildstate.h:93
	void operator|=(const uint32_t &);

	// drvbuildstate.h:96
	void operator>>=(uint32_t);

	// drvbuildstate.h:99
	void operator<<=(uint32_t);

	// drvbuildstate.h:102
	SamplerStateBitField operator>>(uint32_t) const;

	// drvbuildstate.h:105
	SamplerStateBitField operator<<(uint32_t) const;

	// drvbuildstate.h:108
	RwBool operator!=(const SamplerStateBitField &) const;

	// drvbuildstate.h:111
	SamplerStateBitField operator~() const;

	// drvbuildstate.h:114
	void Set(uint32_t);

	// drvbuildstate.h:116
	void Unset(uint32_t);

	// drvbuildstate.h:119
	void SetAll();

	// drvbuildstate.h:121
	void UnsetAll();

	// drvbuildstate.h:124
	RwBool AnySet() const;

}


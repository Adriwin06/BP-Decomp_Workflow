// CgsFreqContent.h:60
struct CgsSound::Logic::FreqContent {
	// CgsFreqContent.h:174
	extern const uint32_t KU32_CLASS_ALIGNMENT = 16;

private:
	// CgsFreqContent.h:179
	const float32_t * mpfRealBins;

	// CgsFreqContent.h:180
	int32_t miNumBins;

	// CgsFreqContent.h:181
	uint32_t mu32NumPlays;

public:
	// CgsFreqContent.h:70
	void FreqContent();

	// CgsFreqContent.h:76
	void ~FreqContent();

	// CgsFreqContent.h:85
	void Construct(const float32_t *, int32_t);

	// CgsFreqContent.h:92
	void Destruct();

	// CgsFreqContent.h:99
	uint32_t GetNumPlays() const;

	// CgsFreqContent.h:106
	int32_t GetNumBins() const;

	// CgsFreqContent.h:114
	float32_t GetRealBin(int32_t) const;

	// CgsFreqContent.h:122
	void SetNumPlays(uint32_t);

	// CgsFreqContent.h:129
	void IncNumPlays();

	// CgsFreqContent.h:137
	void FixUp(const Resource &);

}

// CgsFreqContent.h:337
extern void FixUpPointer<const float32_t*>(const const float32_t *&  lPointer, const void *  lpvBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsFreqContent.h:174
extern const uint32_t KU32_CLASS_ALIGNMENT = 16;


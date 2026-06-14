// CgsFloatQuantiser.h:36
struct CgsNetwork::FloatQuantiser {
public:
	// CgsFloatQuantiser.h:45
	void Pack(float, float, float, int32_t, uint32_t *);

	// CgsFloatQuantiser.h:54
	void Pack(float, float, float, float, uint32_t *, int32_t *);

	// CgsFloatQuantiser.h:62
	void UnPack(float *, float, float, int32_t, uint32_t);

	// CgsFloatQuantiser.h:70
	void UnPack(float *, float, float, float, uint32_t);

	// CgsFloatQuantiser.h:77
	float PackAndUnPackTest(float, float, float, int32_t);

	// CgsFloatQuantiser.h:84
	float PackAndUnPackTest(float, float, float, float);

	// CgsFloatQuantiser.h:90
	int32_t GetNumBits(float, float, float);

	// CgsFloatQuantiser.h:96
	float GetMaxError(float, float, int32_t);

private:
	// CgsFloatQuantiser.h:105
	float GetIncrement(float, float, int32_t);

}


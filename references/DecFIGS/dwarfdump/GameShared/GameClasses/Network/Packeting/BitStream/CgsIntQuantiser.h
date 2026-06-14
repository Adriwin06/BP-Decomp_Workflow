// CgsIntQuantiser.h:35
struct CgsNetwork::IntQuantiser {
public:
	// CgsIntQuantiser.h:44
	void Pack(int32_t, int32_t, int32_t, uint32_t *, int32_t *);

	// CgsIntQuantiser.h:51
	void UnPack(int32_t *, int32_t, int32_t, uint32_t);

	// CgsIntQuantiser.h:56
	int32_t GetNumBits(int32_t, int32_t);

	// CgsIntQuantiser.h:62
	int32_t PackAndUnPackTest(int32_t, int32_t, int32_t);

}


// CgsFreqContentResourceType.h:54
struct CgsResource::FreqContentResourceType : public CgsResource::Type {
public:
	// CgsFreqContentResourceType.cpp:54
	virtual uint32_t GetTypeID() const;

	// CgsFreqContentResourceType.cpp:73
	// Declaration
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsFreqContentResourceType.cpp:75
		using namespace CgsSound::Logic;

	}

	// CgsFreqContentResourceType.cpp:175
	// Declaration
	virtual void FixUp(void *, const Resource &) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsFreqContentResourceType.cpp:177
		using namespace CgsSound::Logic;

	}

	// CgsFreqContentResourceType.cpp:199
	virtual RwUInt32 GetImportCount(const void *) const;

	// CgsFreqContentResourceType.cpp:220
	virtual void GetImportPointer(const void *, RwUInt32, RwUInt32 *, const void **) const;

}


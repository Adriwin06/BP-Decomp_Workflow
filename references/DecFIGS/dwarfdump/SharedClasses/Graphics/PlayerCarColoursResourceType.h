// PlayerCarColoursResourceType.h:41
void CgsResource::PlayerCarColoursResourceType::PlayerCarColoursResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// PlayerCarColoursResourceType.h:41
struct CgsResource::PlayerCarColoursResourceType : public CgsResource::Type {
public:
	// PlayerCarColoursResourceType.cpp:41
	virtual void * Serialise(const void *, const Resource &, const ResourceDescriptor &) const;

	// PlayerCarColoursResourceType.cpp:67
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// PlayerCarColoursResourceType.cpp:86
	virtual uint32_t GetTypeID() const;

	// PlayerCarColoursResourceType.cpp:101
	virtual void FixUp(void *, const Resource &) const;

	// PlayerCarColoursResourceType.cpp:119
	virtual void FixDown(void *, const Resource &) const;

private:
	// PlayerCarColoursResourceType.cpp:136
	uint32_t CalculateSizeOfResource(const void *) const;

}


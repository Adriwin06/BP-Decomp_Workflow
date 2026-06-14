// BrnProgressionResourceType.h:38
void BrnProgression::ProgressionResourceType::ProgressionResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnProgressionResourceType.h:38
struct BrnProgression::ProgressionResourceType : public CgsResource::Type {
public:
	// BrnProgressionResourceType.cpp:38
	virtual uint32_t GetTypeID() const;

	// BrnProgressionResourceType.cpp:52
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// BrnProgressionResourceType.cpp:113
	virtual void FixDown(void *, const Resource &) const;

	// BrnProgressionResourceType.cpp:129
	virtual void FixUp(void *, const Resource &) const;

}


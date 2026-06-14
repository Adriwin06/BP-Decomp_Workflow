// CgsAptDataHeaderType.h:41
void CgsResource::AptDataHeaderType::AptDataHeaderType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAptDataHeaderType.h:41
struct CgsResource::AptDataHeaderType : public CgsResource::Type {
public:
	// CgsAptDataHeaderType.cpp:80
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsAptDataHeaderType.cpp:100
	virtual uint32_t GetTypeID() const;

	// CgsAptDataHeaderType.cpp:118
	virtual void FixUp(void *, const Resource &) const;

	// CgsAptDataHeaderType.cpp:141
	virtual void FixDown(void *, const Resource &) const;

	// CgsAptDataHeaderType.cpp:164
	virtual uint32_t GetImportCount(const void *) const;

	// CgsAptDataHeaderType.cpp:203
	virtual void GetImportPointer(const void *, uint32_t, uint32_t *, const void **) const;

}


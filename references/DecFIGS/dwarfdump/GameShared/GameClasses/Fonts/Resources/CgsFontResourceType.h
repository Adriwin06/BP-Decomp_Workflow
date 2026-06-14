// CgsFontResourceType.h:42
void CgsResource::FontResourceType::FontResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsFontResourceType.h:42
struct CgsResource::FontResourceType : public CgsResource::Type {
public:
	// CgsFontResourceType.cpp:43
	virtual void * Serialise(const void *, const Resource &, const ResourceDescriptor &) const;

	// CgsFontResourceType.cpp:73
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsFontResourceType.cpp:92
	virtual uint32_t GetTypeID() const;

	// CgsFontResourceType.cpp:105
	virtual void FixUp(void *, const Resource &) const;

	// CgsFontResourceType.cpp:179
	virtual void FixDown(void *, const Resource &) const;

	// CgsFontResourceType.cpp:267
	virtual uint32_t GetImportCount(const void *) const;

	// CgsFontResourceType.cpp:284
	virtual void GetImportPointer(const void *, uint32_t, uint32_t *, const void **) const;

private:
	// CgsFontResourceType.cpp:246
	void ByteSwapFontChar(FontChar *) const;

	// CgsFontResourceType.cpp:189
	void FixDown(void *, uint32_t) const;

	// CgsFontResourceType.cpp:115
	void FixUp(void *, uint32_t) const;

}


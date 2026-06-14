// CgsLanguageResourceType.h:47
struct CgsResource::LanguageResourceHashEntry {
private:
	// CgsLanguageResourceType.h:87
	uint32_t muHash;

	// CgsLanguageResourceType.h:88
	UnicodeBuffer::CgsUtf8 * mpString;

public:
	// CgsLanguageResourceType.h:52
	uint32_t GetHash() const;

	// CgsLanguageResourceType.h:57
	const UnicodeBuffer::CgsUtf8 * GetString() const;

	// CgsLanguageResourceType.h:62
	void SetHash(uint32_t);

	// CgsLanguageResourceType.h:67
	void SetString(UnicodeBuffer::CgsUtf8 *);

	// CgsLanguageResourceType.h:72
	uint32_t GetSize() const;

	// CgsLanguageResourceType.h:78
	void FixDown(const Resource &);

	// CgsLanguageResourceType.h:83
	void FixUp(const Resource &);

}

// CgsLanguageResourceType.h:166
struct CgsResource::LanguageResource {
	// CgsLanguageResourceType.h:169
	uint32_t meLanguageID;

	// CgsLanguageResourceType.h:170
	uint32_t muSize;

	// CgsLanguageResourceType.h:171
	LanguageResourceHashEntry * mpEntries;

}

// CgsLanguageResourceType.h:187
void CgsResource::LanguageResourceType::LanguageResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsLanguageResourceType.h:187
struct CgsResource::LanguageResourceType : public CgsResource::Type {
public:
	// CgsLanguageResourceType.cpp:99
	virtual uint32_t GetTypeID() const;

	// CgsLanguageResourceType.cpp:115
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsLanguageResourceType.cpp:204
	virtual void FixDown(void *, const Resource &) const;

	// CgsLanguageResourceType.cpp:238
	virtual void FixUp(void *, const Resource &) const;

}


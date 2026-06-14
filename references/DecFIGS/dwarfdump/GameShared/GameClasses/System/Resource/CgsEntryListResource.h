// CgsEntryListResource.h:37
extern const uint32_t KI_MAXOWNERLENGTH = 256;

// CgsEntryListResource.h:48
void CgsResource::EntryListResourceType::EntryListResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsEntryListResource.h:34
struct CgsResource::EntryListResource {
	// CgsEntryListResource.h:37
	extern const uint32_t KI_MAXOWNERLENGTH = 256;

	// CgsEntryListResource.h:38
	extern const uint32_t KI_HEADERSIZE = 264;

	// CgsEntryListResource.h:40
	char[256] macOwnerName;

	// CgsEntryListResource.h:41
	uint32_t muNumEntries;

	// CgsEntryListResource.h:42
	ID[1] mIds;

}

// CgsEntryListResource.h:48
struct CgsResource::EntryListResourceType : public Type {
public:
	// CgsEntryListResource.cpp:51
	virtual uint32_t GetTypeID() const;

	// CgsEntryListResource.cpp:70
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsEntryListResource.h:61
	virtual void FixDown(void *, const Resource &) const;

	// CgsEntryListResource.h:68
	virtual void FixUp(void *, const Resource &) const;

	// CgsEntryListResource.cpp:88
	virtual RwUInt32 GetImportCount(const void *) const;

	// CgsEntryListResource.h:77
	virtual CgsResource::EDebugResourceCategory GetDebugResourceCategory() const;

}

// CgsEntryListResource.h:38
extern const uint32_t KI_HEADERSIZE = 264;


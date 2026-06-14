// CgsTextFileResource.h:46
void CgsResource::TextFileResourceType::TextFileResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsTextFileResource.h:41
extern const uint32_t HEADERSIZE;

// CgsTextFileResource.h:36
struct CgsResource::TextFileResource {
	// CgsTextFileResource.h:38
	uint32_t mLength;

	// CgsTextFileResource.h:39
	char[1] mText;

	// CgsTextFileResource.h:41
	extern const uint32_t HEADERSIZE;

}

// CgsTextFileResource.h:46
struct CgsResource::TextFileResourceType : public Type {
public:
	// CgsTextFileResource.cpp:57
	virtual uint32_t GetTypeID() const;

	// CgsTextFileResource.cpp:76
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsTextFileResource.h:59
	virtual void FixDown(void *, const Resource &) const;

	// CgsTextFileResource.h:66
	virtual void FixUp(void *, const Resource &) const;

	// CgsTextFileResource.cpp:94
	virtual RwUInt32 GetImportCount(const void *) const;

	// CgsTextFileResource.h:75
	virtual CgsResource::EDebugResourceCategory GetDebugResourceCategory() const;

}


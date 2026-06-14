// CgsRwDebugResourceType.h:48
struct CgsResource::RwDebugResourceType : public CgsResource::Type {
public:
	void RwDebugResourceType(const RwDebugResourceType &);

	void RwDebugResourceType();

	// CgsRwDebugResourceType.h:51
	virtual uint32_t GetTypeID() const;

	// CgsRwDebugResourceType.h:59
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsRwDebugResourceType.h:81
	virtual void FixUp(void *, const Resource &) const;

	// CgsRwDebugResourceType.h:89
	virtual void FixDown(void *, const Resource &) const;

	// CgsRwDebugResourceType.h:94
	virtual CgsResource::EDebugResourceCategory GetDebugResourceCategory() const;

}

// CgsRwDebugResourceType.h:48
void CgsResource::RwDebugResourceType::RwDebugResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


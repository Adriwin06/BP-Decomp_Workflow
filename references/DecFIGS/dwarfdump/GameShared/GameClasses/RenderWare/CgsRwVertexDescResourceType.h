// CgsRwVertexDescResourceType.h:49
void CgsResource::RwVertexDescResourceType::RwVertexDescResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsRwVertexDescResourceType.h:49
struct CgsResource::RwVertexDescResourceType : public CgsResource::Type {
public:
	// CgsRwVertexDescResourceTypePS3.cpp:58
	virtual uint32_t GetTypeID() const;

	// CgsRwVertexDescResourceTypePS3.cpp:77
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsRwVertexDescResourceTypePS3.cpp:185
	virtual bool DeSerialise(void *) const;

	// CgsRwVertexDescResourceTypePS3.cpp:253
	virtual void FixUp(void *, const Resource &) const;

	// CgsRwVertexDescResourceTypePS3.cpp:206
	virtual void FixDown(void *, const Resource &) const;

	// CgsRwVertexDescResourceType.h:92
	virtual CgsResource::EDebugResourceCategory GetDebugResourceCategory() const;

}


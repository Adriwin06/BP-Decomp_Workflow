// ICEResourceType.h:35
struct ICEResourceType : public CgsResource::Type {
public:
	// ICEResourceType.cpp:41
	virtual uint32_t GetTypeID() const;

	// ICEResourceType.cpp:56
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// ICEResourceType.cpp:125
	virtual void FixDown(void *, const Resource &) const;

	// ICEResourceType.cpp:142
	virtual void FixUp(void *, const Resource &) const;

}


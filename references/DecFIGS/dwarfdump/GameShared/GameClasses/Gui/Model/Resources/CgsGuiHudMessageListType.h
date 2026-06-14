// CgsGuiHudMessageListType.h:41
void CgsResource::HudMessageListResourceType::HudMessageListResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiHudMessageListType.h:41
struct CgsResource::HudMessageListResourceType : public CgsResource::Type {
public:
	// CgsGuiHudMessageListType.cpp:76
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsGuiHudMessageListType.cpp:96
	virtual uint32_t GetTypeID() const;

	// CgsGuiHudMessageListType.cpp:114
	virtual void FixUp(void *, const Resource &) const;

	// CgsGuiHudMessageListType.cpp:137
	virtual void FixDown(void *, const Resource &) const;

}


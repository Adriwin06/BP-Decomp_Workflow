// CgsGuiHudMessageType.h:41
void CgsResource::HudMessageResourceType::HudMessageResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiHudMessageType.h:41
struct CgsResource::HudMessageResourceType : public CgsResource::Type {
public:
	// CgsGuiHudMessageType.cpp:80
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsGuiHudMessageType.cpp:100
	virtual uint32_t GetTypeID() const;

	// CgsGuiHudMessageType.cpp:118
	virtual void FixUp(void *, const Resource &) const;

	// CgsGuiHudMessageType.cpp:141
	virtual void FixDown(void *, const Resource &) const;

}


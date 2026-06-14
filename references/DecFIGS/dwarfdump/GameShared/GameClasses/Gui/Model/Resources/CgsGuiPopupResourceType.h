// CgsGuiPopupResourceType.h:41
void CgsResource::GuiPopupResourceType::GuiPopupResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiPopupResourceType.h:41
struct CgsResource::GuiPopupResourceType : public CgsResource::Type {
public:
	// CgsGuiPopupResourceType.cpp:80
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsGuiPopupResourceType.cpp:100
	virtual uint32_t GetTypeID() const;

	// CgsGuiPopupResourceType.cpp:118
	virtual void FixUp(void *, const Resource &) const;

	// CgsGuiPopupResourceType.cpp:141
	virtual void FixDown(void *, const Resource &) const;

}


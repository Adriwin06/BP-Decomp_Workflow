// BrnGuiPFXHooksResource.h:43
struct CgsResource::PFXHookBundleResourceType : public CgsResource::Type {
public:
	// BrnGuiPFXHooksResource.cpp:43
	virtual void * Serialise(const void *, const Resource &, const ResourceDescriptor &) const;

	// BrnGuiPFXHooksResource.cpp:73
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// BrnGuiPFXHooksResource.cpp:92
	virtual uint32_t GetTypeID() const;

	// BrnGuiPFXHooksResource.cpp:108
	virtual void FixUp(void *, const Resource &) const;

	// BrnGuiPFXHooksResource.cpp:180
	virtual void FixDown(void *, const Resource &) const;

private:
	// BrnGuiPFXHooksResource.cpp:190
	void FixDown(void *, uint32_t) const;

	// BrnGuiPFXHooksResource.cpp:118
	void FixUp(void *, uint32_t) const;

}

// BrnGuiPFXHooksResource.h:43
void CgsResource::PFXHookBundleResourceType::PFXHookBundleResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


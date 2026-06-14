// BrnTriggerResourceType.h:38
void BrnTrigger::TriggerResourceType::TriggerResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTriggerResourceType.h:38
struct BrnTrigger::TriggerResourceType : public CgsResource::Type {
public:
	// BrnTriggerResourceType.cpp:39
	virtual uint32_t GetTypeID() const;

	// BrnTriggerResourceType.cpp:54
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// BrnTriggerResourceType.cpp:117
	virtual void FixDown(void *, const Resource &) const;

	// BrnTriggerResourceType.cpp:134
	virtual void FixUp(void *, const Resource &) const;

}


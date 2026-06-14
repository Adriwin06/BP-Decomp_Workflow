// BrnEnvironmentDictionaryResourceType.h:52
void BrnWorld::EnvironmentSettings::DictionaryResourceType::DictionaryResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEnvironmentDictionaryResourceType.h:52
struct BrnWorld::EnvironmentSettings::DictionaryResourceType : public CgsResource::Type {
public:
	// BrnEnvironmentDictionaryResourceType.cpp:42
	virtual uint32_t GetTypeID() const;

	// BrnEnvironmentDictionaryResourceType.cpp:57
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// BrnEnvironmentDictionaryResourceType.cpp:174
	virtual void FixDown(void *, const Resource &) const;

	// BrnEnvironmentDictionaryResourceType.cpp:204
	virtual void FixUp(void *, const Resource &) const;

}


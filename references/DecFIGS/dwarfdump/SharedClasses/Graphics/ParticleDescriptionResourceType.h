// ParticleDescriptionResourceType.h:35
struct BrnParticle::ParticleDescription {
	// ParticleDescriptionResourceType.h:60
	uint32_t muHashedGDBURI;

	// ParticleDescriptionResourceType.h:61
	cLionEffectDefinition * mpLionEffectDefinition;

public:
	// ParticleDescriptionResourceType.h:38
	uint32_t HashString(const char *);

	// ParticleDescriptionResourceType.h:55
	void ParticleDescription();

	// ParticleDescriptionResourceType.h:56
	void ParticleDescription(char *, cLionEffectDefinition *);

}

// ParticleDescriptionResourceType.h:69
struct BrnParticle::ParticleDescriptionCollection {
private:
	// ParticleDescriptionResourceType.h:107
	ParticleDescription ** mpTable;

	// ParticleDescriptionResourceType.h:110
	uint32_t muTableSize;

public:
	// ParticleDescriptionResourceType.h:72
	void ~ParticleDescriptionCollection();

	// ParticleDescriptionResourceType.h:82
	ParticleDescription ** GetTable() const;

	// ParticleDescriptionResourceType.h:87
	void SetTable(ParticleDescription **);

	// ParticleDescriptionResourceType.h:92
	uint32_t GetTableSize();

	// ParticleDescriptionResourceType.h:97
	void SetTableSize(uint32_t);

}

// ParticleDescriptionResourceType.h:123
void BrnParticle::ParticleDescriptionCollectionResourceType::ParticleDescriptionCollectionResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleDescriptionResourceType.h:169
void BrnParticle::ParticleDescriptionResourceType::ParticleDescriptionResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ParticleDescriptionResourceType.h:169
struct BrnParticle::ParticleDescriptionResourceType : public CgsResource::Type {
public:
	// ParticleDescriptionResourceType.cpp:336
	virtual void * Serialise(const void *, const Resource &, const ResourceDescriptor &) const;

	// ParticleDescriptionResourceType.cpp:379
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// ParticleDescriptionResourceType.cpp:402
	virtual uint32_t GetTypeID() const;

	// ParticleDescriptionResourceType.cpp:410
	virtual void FixUp(void *, const Resource &) const;

	// ParticleDescriptionResourceType.cpp:425
	virtual void FixDown(void *, const Resource &) const;

	// ParticleDescriptionResourceType.cpp:438
	virtual bool DeSerialise(void *) const;

}

// ParticleDescriptionResourceType.h:123
struct BrnParticle::ParticleDescriptionCollectionResourceType : public CgsResource::Type {
public:
	// ParticleDescriptionResourceType.cpp:44
	virtual void * Serialise(const void *, const Resource &, const ResourceDescriptor &) const;

	// ParticleDescriptionResourceType.cpp:126
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// ParticleDescriptionResourceType.cpp:164
	virtual uint32_t GetTypeID() const;

	// ParticleDescriptionResourceType.cpp:180
	virtual void FixUp(void *, const Resource &) const;

	// ParticleDescriptionResourceType.cpp:228
	virtual void FixDown(void *, const Resource &) const;

	// ParticleDescriptionResourceType.cpp:270
	virtual bool DeSerialise(void *) const;

	// ParticleDescriptionResourceType.cpp:299
	virtual uint32_t GetImportCount(const void *) const;

	// ParticleDescriptionResourceType.cpp:322
	virtual void GetImportPointer(const void *, uint32_t, uint32_t *, const void **) const;

}


// vertexbuffer.h:27
namespace BrnParticle {
	// Declaration
	struct TextureNameMap {
		// TextureNameMapResourceType.h:44
		struct Entry {
			// TextureNameMapResourceType.h:66
			uint32_t muHashedLionTextureName;

			// TextureNameMapResourceType.h:67
			char * mpGDBTextureName;

		public:
			// TextureNameMapResourceType.h:49
			uint32_t HashString(const char *);

		}

	}

}

// TextureNameMapResourceType.h:40
struct BrnParticle::TextureNameMap {
private:
	// TextureNameMapResourceType.h:99
	BrnParticle::TextureNameMap::Entry * mpEntries;

	// TextureNameMapResourceType.h:100
	uint32_t muEntryCount;

public:
	// TextureNameMapResourceType.h:72
	void ~TextureNameMap();

	// TextureNameMapResourceType.h:79
	BrnParticle::TextureNameMap::Entry * GetEntries() const;

	// TextureNameMapResourceType.h:84
	uint32_t GetEntryCount() const;

	// TextureNameMapResourceType.h:89
	void Setup(BrnParticle::TextureNameMap::Entry *, uint32_t);

}

// TextureNameMapResourceType.h:113
void BrnParticle::TextureNameMapResourceType::TextureNameMapResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// TextureNameMapResourceType.h:113
struct BrnParticle::TextureNameMapResourceType : public CgsResource::Type {
public:
	// TextureNameMapResourceType.cpp:42
	virtual void * Serialise(const void *, const Resource &, const ResourceDescriptor &) const;

	// TextureNameMapResourceType.cpp:95
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// TextureNameMapResourceType.cpp:129
	virtual uint32_t GetTypeID() const;

	// TextureNameMapResourceType.cpp:145
	virtual void FixUp(void *, const Resource &) const;

	// TextureNameMapResourceType.cpp:187
	virtual void FixDown(void *, const Resource &) const;

	// TextureNameMapResourceType.cpp:220
	virtual bool DeSerialise(void *) const;

	// TextureNameMapResourceType.cpp:237
	virtual uint32_t GetImportCount(const void *) const;

	// TextureNameMapResourceType.cpp:257
	virtual void GetImportPointer(const void *, uint32_t, uint32_t *, const void **) const;

}


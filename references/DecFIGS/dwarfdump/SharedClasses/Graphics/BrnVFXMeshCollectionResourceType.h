// vertexbuffer.h:27
namespace BrnParticle {
	// Declaration
	struct BrnVFXMeshCollection {
		// BrnVFXMeshCollectionResourceType.h:62
		struct Material {
			// BrnVFXMeshCollectionResourceType.h:71
			char * mpTextureName;

		public:
			// BrnVFXMeshCollectionResourceType.h:65
			Material();

		}

	}

}

// BrnVFXMeshCollectionResourceType.h:46
struct BrnParticle::BrnVFXMeshCollection {
private:
	// BrnVFXMeshCollectionResourceType.h:57
	extern const uint32_t KU_NUM_DEBRIS_TYPES = 32;

	// BrnVFXMeshCollectionResourceType.h:146
	uint32_t muVersion;

	// BrnVFXMeshCollectionResourceType.h:149
	float32_t[32] mafRadius;

	// BrnVFXMeshCollectionResourceType.h:152
	MeshHelper * mpMeshHelper;

	// BrnVFXMeshCollectionResourceType.h:153
	uint32_t muNumIndices;

	// BrnVFXMeshCollectionResourceType.h:154
	uint32_t muNumVertices;

	// BrnVFXMeshCollectionResourceType.h:156
	BrnParticle::BrnVFXMeshCollection::Material mMaterial;

public:
	// BrnVFXMeshCollectionResourceType.h:77
	const BrnParticle::BrnVFXMeshCollection::Material & GetMaterial() const;

	// BrnVFXMeshCollectionResourceType.h:83
	MeshHelper * GetMeshHelper();

	// BrnVFXMeshCollectionResourceType.h:89
	const MeshHelper * GetMeshHelper() const;

	// BrnVFXMeshCollectionResourceType.h:95
	uint32_t GetNumIndices() const;

	// BrnVFXMeshCollectionResourceType.h:101
	uint32_t GetNumVertices() const;

	// BrnVFXMeshCollectionResourceType.h:107
	uint32_t GetNumDebrisTypes() const;

	// BrnVFXMeshCollectionResourceType.h:115
	float32_t GetDebrisRadius(uint32_t) const;

}

// BrnVFXMeshCollectionResourceType.h:57
extern const uint32_t KU_NUM_DEBRIS_TYPES = 32;

// BrnVFXMeshCollectionResourceType.h:170
void BrnParticle::BrnVFXMeshCollectionResourceType::BrnVFXMeshCollectionResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnVFXMeshCollectionResourceType.h:170
struct BrnParticle::BrnVFXMeshCollectionResourceType : public CgsResource::Type {
public:
	// BrnVFXMeshCollectionResourceType.cpp:82
	virtual void * Serialise(const void *, const Resource &, const ResourceDescriptor &) const;

	// BrnVFXMeshCollectionResourceType.cpp:208
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// BrnVFXMeshCollectionResourceType.cpp:268
	virtual uint32_t GetTypeID() const;

	// BrnVFXMeshCollectionResourceType.cpp:286
	virtual void FixUp(void *, const Resource &) const;

	// BrnVFXMeshCollectionResourceType.cpp:391
	virtual void FixDown(void *, const Resource &) const;

	// BrnVFXMeshCollectionResourceType.cpp:486
	virtual bool DeSerialise(void *) const;

	// BrnVFXMeshCollectionResourceType.cpp:503
	virtual uint32_t GetImportCount(const void *) const;

	// BrnVFXMeshCollectionResourceType.cpp:525
	virtual void GetImportPointer(const void *, uint32_t, uint32_t *, const void **) const;

}


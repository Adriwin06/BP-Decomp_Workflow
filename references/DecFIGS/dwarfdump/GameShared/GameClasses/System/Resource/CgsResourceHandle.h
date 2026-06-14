// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceHandle.h:127
	const ResourceHandle NULLResourceHandle;

}

// CgsResourceHandle.h:51
struct CgsResource::ResourceHandle {
	// CgsSmallResource.h:59
	typedef SmallResource Resource;

private:
	// CgsResourceHandle.h:112
	ResourceHandle::Resource * mpResourceMemory;

	// CgsResourceHandle.h:113
	CgsResource::Entry * mpSourceEntry;

public:
	// CgsResourceHandle.h:55
	void ResourceHandle();

	// CgsResourceHandle.h:58
	void ResourceHandle(ResourceHandle::Resource *, CgsResource::Entry *);

	// CgsResourceHandle.h:61
	void Construct(ResourceHandle::Resource *, CgsResource::Entry *);

	// CgsResourceHandle.h:64
	ResourceHandle::Resource * GetResource() const;

	// CgsResourceHandle.h:67
	void Clear();

	// CgsResourceHandle.h:71
	bool IsEqual(const ResourceHandle &) const;

	// CgsResourceHandle.h:75
	bool operator==(const ResourceHandle &);

	// CgsResourceHandle.h:79
	bool operator==(const ResourceHandle &) const;

	// CgsResourceHandle.h:83
	bool operator!=(const ResourceHandle &);

	// CgsResourceHandle.h:87
	bool operator!=(const ResourceHandle &) const;

	// CgsResourceHandle.h:90
	uint32_t DEBUG_GetTypeId();

	// CgsResourceHandle.h:93
	ID GetResourceId() const;

	// CgsResourceHandle.h:102
	bool IsSourceEntryValid() const;

protected:
	// CgsResourceHandle.h:109
	void CreateFromHandle(const ResourceHandle *);

}

// CgsResourceHandle.h:138
struct CgsResource::SafeResourceHandle<CgsResource::Font> : public ResourceHandle {
public:
	// CgsResourceHandle.h:142
	void SafeResourceHandle();

	// CgsResourceHandle.h:145
	void SafeResourceHandle(ResourceHandle::Resource *, CgsResource::Entry *);

	// CgsResourceHandle.h:368
	SafeResourceHandle<CgsResource::Font> & operator=(const ResourceHandle &);

	// CgsResourceHandle.h:384
	SafeResourceHandle<CgsResource::Font> & operator=(const SafeResourceHandle<CgsResource::Font> &);

	// CgsResourceHandle.h:401
	Font * operator->();

	// CgsResourceHandle.h:417
	const Font * operator->() const;

	// CgsResourceHandle.h:432
	bool operator==(const SafeResourceHandle<CgsResource::Font> &) const;

	// CgsResourceHandle.h:446
	bool operator==(const ResourceHandle &) const;

	// CgsResourceHandle.h:460
	bool operator!=(const SafeResourceHandle<CgsResource::Font> &) const;

	// CgsResourceHandle.h:474
	bool operator!=(const ResourceHandle &) const;

	// CgsResourceHandle.h:488
	Font * operator CgsResource::Font*();

	// CgsResourceHandle.h:503
	const Font * operator const CgsResource::Font*() const;

}

// programbuffer.h:24
namespace CgsResource {
	// CgsResourceHandle.h:127
	const ResourceHandle NULLResourceHandle;

}

// CgsResourceHandle.h:138
struct CgsResource::SafeResourceHandle<renderengine::Texture> : public ResourceHandle {
public:
	// CgsResourceHandle.h:142
	void SafeResourceHandle();

	// CgsResourceHandle.h:145
	void SafeResourceHandle(ResourceHandle::Resource *, CgsResource::Entry *);

	// CgsResourceHandle.h:368
	SafeResourceHandle<renderengine::Texture> & operator=(const ResourceHandle &);

	// CgsResourceHandle.h:384
	SafeResourceHandle<renderengine::Texture> & operator=(const SafeResourceHandle<renderengine::Texture> &);

	// CgsResourceHandle.h:401
	renderengine::Texture * operator->();

	// CgsResourceHandle.h:417
	const Texture * operator->() const;

	// CgsResourceHandle.h:432
	bool operator==(const SafeResourceHandle<renderengine::Texture> &) const;

	// CgsResourceHandle.h:446
	bool operator==(const ResourceHandle &) const;

	// CgsResourceHandle.h:460
	bool operator!=(const SafeResourceHandle<renderengine::Texture> &) const;

	// CgsResourceHandle.h:474
	bool operator!=(const ResourceHandle &) const;

	// CgsResourceHandle.h:488
	renderengine::Texture * operator renderengine::Texture*();

	// CgsResourceHandle.h:503
	const Texture * operator const renderengine::Texture*() const;

}

// CgsResourceHandle.h:138
struct CgsResource::SafeResourceHandle<BrnParticle::BrnVFXMeshCollection> : public ResourceHandle {
public:
	// CgsResourceHandle.h:142
	void SafeResourceHandle();

	// CgsResourceHandle.h:145
	void SafeResourceHandle(ResourceHandle::Resource *, CgsResource::Entry *);

	// CgsResourceHandle.h:368
	SafeResourceHandle<BrnParticle::BrnVFXMeshCollection> & operator=(const ResourceHandle &);

	// CgsResourceHandle.h:384
	SafeResourceHandle<BrnParticle::BrnVFXMeshCollection> & operator=(const SafeResourceHandle<BrnParticle::BrnVFXMeshCollection> &);

	// CgsResourceHandle.h:401
	BrnVFXMeshCollection * operator->();

	// CgsResourceHandle.h:417
	const BrnVFXMeshCollection * operator->() const;

	// CgsResourceHandle.h:432
	bool operator==(const SafeResourceHandle<BrnParticle::BrnVFXMeshCollection> &) const;

	// CgsResourceHandle.h:446
	bool operator==(const ResourceHandle &) const;

	// CgsResourceHandle.h:460
	bool operator!=(const SafeResourceHandle<BrnParticle::BrnVFXMeshCollection> &) const;

	// CgsResourceHandle.h:474
	bool operator!=(const ResourceHandle &) const;

	// CgsResourceHandle.h:488
	BrnVFXMeshCollection * operator BrnParticle::BrnVFXMeshCollection*();

	// CgsResourceHandle.h:503
	const BrnVFXMeshCollection * operator const BrnParticle::BrnVFXMeshCollection*() const;

}

// CgsResourceHandle.h:138
struct CgsResource::SafeResourceHandle<BrnParticle::TextureNameMap> : public ResourceHandle {
public:
	// CgsResourceHandle.h:142
	void SafeResourceHandle();

	// CgsResourceHandle.h:145
	void SafeResourceHandle(ResourceHandle::Resource *, CgsResource::Entry *);

	// CgsResourceHandle.h:368
	SafeResourceHandle<BrnParticle::TextureNameMap> & operator=(const ResourceHandle &);

	// CgsResourceHandle.h:384
	SafeResourceHandle<BrnParticle::TextureNameMap> & operator=(const SafeResourceHandle<BrnParticle::TextureNameMap> &);

	// CgsResourceHandle.h:401
	TextureNameMap * operator->();

	// CgsResourceHandle.h:417
	const TextureNameMap * operator->() const;

	// CgsResourceHandle.h:432
	bool operator==(const SafeResourceHandle<BrnParticle::TextureNameMap> &) const;

	// CgsResourceHandle.h:446
	bool operator==(const ResourceHandle &) const;

	// CgsResourceHandle.h:460
	bool operator!=(const SafeResourceHandle<BrnParticle::TextureNameMap> &) const;

	// CgsResourceHandle.h:474
	bool operator!=(const ResourceHandle &) const;

	// CgsResourceHandle.h:488
	TextureNameMap * operator BrnParticle::TextureNameMap*();

	// CgsResourceHandle.h:503
	const TextureNameMap * operator const BrnParticle::TextureNameMap*() const;

}

// CgsResourceHandle.h:138
struct CgsResource::SafeResourceHandle<BrnParticle::ParticleDescriptionCollection> : public ResourceHandle {
public:
	// CgsResourceHandle.h:142
	void SafeResourceHandle();

	// CgsResourceHandle.h:145
	void SafeResourceHandle(ResourceHandle::Resource *, CgsResource::Entry *);

	// CgsResourceHandle.h:368
	SafeResourceHandle<BrnParticle::ParticleDescriptionCollection> & operator=(const ResourceHandle &);

	// CgsResourceHandle.h:384
	SafeResourceHandle<BrnParticle::ParticleDescriptionCollection> & operator=(const SafeResourceHandle<BrnParticle::ParticleDescriptionCollection> &);

	// CgsResourceHandle.h:401
	ParticleDescriptionCollection * operator->();

	// CgsResourceHandle.h:417
	const ParticleDescriptionCollection * operator->() const;

	// CgsResourceHandle.h:432
	bool operator==(const SafeResourceHandle<BrnParticle::ParticleDescriptionCollection> &) const;

	// CgsResourceHandle.h:446
	bool operator==(const ResourceHandle &) const;

	// CgsResourceHandle.h:460
	bool operator!=(const SafeResourceHandle<BrnParticle::ParticleDescriptionCollection> &) const;

	// CgsResourceHandle.h:474
	bool operator!=(const ResourceHandle &) const;

	// CgsResourceHandle.h:488
	ParticleDescriptionCollection * operator BrnParticle::ParticleDescriptionCollection*();

	// CgsResourceHandle.h:503
	const ParticleDescriptionCollection * operator const BrnParticle::ParticleDescriptionCollection*() const;

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsResourceHandle.h:127
	const ResourceHandle NULLResourceHandle;

}

// CgsLuaState.h:37
namespace CgsResource {
	// CgsResourceHandle.h:127
	const ResourceHandle NULLResourceHandle;

}

// CgsResourceTypeIds.h:28
namespace CgsResource {
	// CgsResourceHandle.h:127
	const ResourceHandle NULLResourceHandle;

}

// CgsPolygonSoupListSpatialMap.h:30
namespace CgsResource {
	// CgsResourceHandle.h:127
	const ResourceHandle NULLResourceHandle;

}


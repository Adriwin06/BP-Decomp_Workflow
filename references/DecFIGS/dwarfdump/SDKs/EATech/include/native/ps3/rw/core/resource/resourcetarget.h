// importnamespaces.h:8
namespace rw {
	// resourcetarget.h:55
	const const RwChar *[6] BASERESOURCE_BASERESOURCETYPENAMES;

}

// resourcetarget.h:90
struct rw::ResourceDescriptor : public BaseResourceDescriptors<6u> {
public:
	// resourcetarget.h:95
	// Declaration
	void ResourceDescriptor(const MemoryResourceDescriptor &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// resourcetarget.h:62
		typedef rw::BaseResourceDescriptorType<0u> MemoryResourceDescriptor;

	}

	// resourcetarget.h:105
	void ResourceDescriptor(uint32_t, uint32_t);

	// resourcetarget.h:121
	const MemoryResourceDescriptor & GetMemoryResourceDescriptor() const;

	// resourcetarget.h:131
	MemoryResourceDescriptor & GetMemoryResourceDescriptor();

	// Unknown accessibility
	// resourcetarget.h:64
	typedef rw::BaseResourceDescriptorType<2u> UninitializedResourceDescriptor;

	// resourcetarget.h:142
	const ResourceDescriptor::UninitializedResourceDescriptor & GetUninitializedResourceDescriptor() const;

	// resourcetarget.h:152
	ResourceDescriptor::UninitializedResourceDescriptor & GetUninitializedResourceDescriptor();

	// Unknown accessibility
	// resourcetarget.h:63
	typedef rw::BaseResourceDescriptorType<1u> DisposableResourceDescriptor;

	// resourcetarget.h:163
	const ResourceDescriptor::DisposableResourceDescriptor & GetDisposableResourceDescriptor() const;

	// resourcetarget.h:173
	ResourceDescriptor::DisposableResourceDescriptor & GetDisposableResourceDescriptor();

	// Unknown accessibility
	// resourcetarget.h:66
	typedef rw::BaseResourceDescriptorType<3u> DisposableUninitializedResourceDescriptor;

	// resourcetarget.h:184
	const ResourceDescriptor::DisposableUninitializedResourceDescriptor & GetDisposableUninitializedResourceDescriptor() const;

	// resourcetarget.h:194
	ResourceDescriptor::DisposableUninitializedResourceDescriptor & GetDisposableUninitializedResourceDescriptor();

	// Unknown accessibility
	// resourcetarget.h:67
	typedef rw::BaseResourceDescriptorType<4u> GraphicsSystemResourceDescriptor;

	// resourcetarget.h:205
	const ResourceDescriptor::GraphicsSystemResourceDescriptor & GetGraphicsSystemResourceDescriptor() const;

	// resourcetarget.h:215
	ResourceDescriptor::GraphicsSystemResourceDescriptor & GetGraphicsSystemResourceDescriptor();

	// Unknown accessibility
	// resourcetarget.h:68
	typedef rw::BaseResourceDescriptorType<5u> GraphicsLocalResourceDescriptor;

	// resourcetarget.h:226
	const ResourceDescriptor::GraphicsLocalResourceDescriptor & GetGraphicsLocalResourceDescriptor() const;

	// resourcetarget.h:236
	ResourceDescriptor::GraphicsLocalResourceDescriptor & GetGraphicsLocalResourceDescriptor();

	// resourcetarget.h:248
	uint32_t GetSize() const;

	// resourcetarget.h:258
	uint32_t GetAlignment() const;

}

// resourcetarget.h:293
struct rw::Resource : public BaseResources<6u> {
public:
	// resourcetarget.h:298
	// Declaration
	void Resource(const MemoryResource &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// resourcetarget.h:70
		typedef BaseResources<6u>::BaseResource MemoryResource;

	}

	// resourcetarget.h:313
	MemoryResource GetMemoryResource() const;

	// resourcetarget.h:322
	MemoryResource & GetMemoryResource();

	// Unknown accessibility
	// resourcetarget.h:72
	typedef BaseResources<6u>::BaseResource UninitializedResource;

	// resourcetarget.h:332
	Resource::UninitializedResource GetUninitializedResource() const;

	// resourcetarget.h:341
	Resource::UninitializedResource & GetUninitializedResource();

	// Unknown accessibility
	// resourcetarget.h:71
	typedef BaseResources<6u>::BaseResource DisposableResource;

	// resourcetarget.h:351
	Resource::DisposableResource GetDisposableResource() const;

	// resourcetarget.h:360
	Resource::DisposableResource & GetDisposableResource();

	// Unknown accessibility
	// resourcetarget.h:73
	typedef BaseResources<6u>::BaseResource DisposableUninitializedResource;

	// resourcetarget.h:370
	Resource::DisposableUninitializedResource GetDisposableUninitializedResource() const;

	// resourcetarget.h:379
	Resource::DisposableUninitializedResource & GetDisposableUninitializedResource();

	// Unknown accessibility
	// resourcetarget.h:74
	typedef BaseResources<6u>::BaseResource GraphicsSystemResource;

	// resourcetarget.h:389
	Resource::GraphicsSystemResource GetGraphicsSystemResource() const;

	// resourcetarget.h:399
	Resource::GraphicsSystemResource & GetGraphicsSystemResource();

	// Unknown accessibility
	// resourcetarget.h:75
	typedef BaseResources<6u>::BaseResource GraphicsLocalResource;

	// resourcetarget.h:409
	Resource::GraphicsLocalResource GetGraphicsLocalResource() const;

	// resourcetarget.h:419
	Resource::GraphicsLocalResource & GetGraphicsLocalResource();

	// resourcetarget.h:429
	const RwChar * GetBaseResourceTypeName(uint32_t);

	// resourcetarget.h:440
	bool IsBaseResourceTypeUninitialized(uint32_t);

	// resourcetarget.h:450
	bool IsBaseResourceTypeDisposable(uint32_t);

}

// resourcetarget.h:90
struct rw::ResourceDescriptor : public BaseResourceDescriptors<6u> {
public:
	// resourcetarget.h:95
	// Declaration
	void ResourceDescriptor() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// resourcetarget.h:62
		typedef rw::BaseResourceDescriptorType<0u> MemoryResourceDescriptor;

	}

	// resourcetarget.h:105
	void ResourceDescriptor(uint32_t, uint32_t);

	// resourcetarget.h:121
	const MemoryResourceDescriptor & GetMemoryResourceDescriptor() const;

	// resourcetarget.h:131
	MemoryResourceDescriptor & GetMemoryResourceDescriptor();

	// Unknown accessibility
	// resourcetarget.h:64
	typedef rw::BaseResourceDescriptorType<2u> UninitializedResourceDescriptor;

	// resourcetarget.h:142
	const ResourceDescriptor::UninitializedResourceDescriptor & GetUninitializedResourceDescriptor() const;

	// resourcetarget.h:152
	ResourceDescriptor::UninitializedResourceDescriptor & GetUninitializedResourceDescriptor();

	// Unknown accessibility
	// resourcetarget.h:63
	typedef rw::BaseResourceDescriptorType<1u> DisposableResourceDescriptor;

	// resourcetarget.h:163
	const ResourceDescriptor::DisposableResourceDescriptor & GetDisposableResourceDescriptor() const;

	// resourcetarget.h:173
	ResourceDescriptor::DisposableResourceDescriptor & GetDisposableResourceDescriptor();

	// Unknown accessibility
	// resourcetarget.h:66
	typedef rw::BaseResourceDescriptorType<3u> DisposableUninitializedResourceDescriptor;

	// resourcetarget.h:184
	const ResourceDescriptor::DisposableUninitializedResourceDescriptor & GetDisposableUninitializedResourceDescriptor() const;

	// resourcetarget.h:194
	ResourceDescriptor::DisposableUninitializedResourceDescriptor & GetDisposableUninitializedResourceDescriptor();

	// Unknown accessibility
	// resourcetarget.h:67
	typedef rw::BaseResourceDescriptorType<4u> GraphicsSystemResourceDescriptor;

	// resourcetarget.h:205
	const ResourceDescriptor::GraphicsSystemResourceDescriptor & GetGraphicsSystemResourceDescriptor() const;

	// resourcetarget.h:215
	ResourceDescriptor::GraphicsSystemResourceDescriptor & GetGraphicsSystemResourceDescriptor();

	// Unknown accessibility
	// resourcetarget.h:68
	typedef rw::BaseResourceDescriptorType<5u> GraphicsLocalResourceDescriptor;

	// resourcetarget.h:226
	const ResourceDescriptor::GraphicsLocalResourceDescriptor & GetGraphicsLocalResourceDescriptor() const;

	// resourcetarget.h:236
	ResourceDescriptor::GraphicsLocalResourceDescriptor & GetGraphicsLocalResourceDescriptor();

	// resourcetarget.h:248
	uint32_t GetSize() const;

	// resourcetarget.h:258
	uint32_t GetAlignment() const;

}

// resourcetarget.h:293
struct rw::Resource : public BaseResources<6u> {
public:
	// resourcetarget.h:298
	// Declaration
	void Resource() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// resourcetarget.h:70
		typedef BaseResources<6u>::BaseResource MemoryResource;

	}

	// resourcetarget.h:313
	MemoryResource GetMemoryResource() const;

	// resourcetarget.h:322
	MemoryResource & GetMemoryResource();

	// Unknown accessibility
	// resourcetarget.h:72
	typedef BaseResources<6u>::BaseResource UninitializedResource;

	// resourcetarget.h:332
	Resource::UninitializedResource GetUninitializedResource() const;

	// resourcetarget.h:341
	Resource::UninitializedResource & GetUninitializedResource();

	// Unknown accessibility
	// resourcetarget.h:71
	typedef BaseResources<6u>::BaseResource DisposableResource;

	// resourcetarget.h:351
	Resource::DisposableResource GetDisposableResource() const;

	// resourcetarget.h:360
	Resource::DisposableResource & GetDisposableResource();

	// Unknown accessibility
	// resourcetarget.h:73
	typedef BaseResources<6u>::BaseResource DisposableUninitializedResource;

	// resourcetarget.h:370
	Resource::DisposableUninitializedResource GetDisposableUninitializedResource() const;

	// resourcetarget.h:379
	Resource::DisposableUninitializedResource & GetDisposableUninitializedResource();

	// Unknown accessibility
	// resourcetarget.h:74
	typedef BaseResources<6u>::BaseResource GraphicsSystemResource;

	// resourcetarget.h:389
	Resource::GraphicsSystemResource GetGraphicsSystemResource() const;

	// resourcetarget.h:399
	Resource::GraphicsSystemResource & GetGraphicsSystemResource();

	// Unknown accessibility
	// resourcetarget.h:75
	typedef BaseResources<6u>::BaseResource GraphicsLocalResource;

	// resourcetarget.h:409
	Resource::GraphicsLocalResource GetGraphicsLocalResource() const;

	// resourcetarget.h:419
	Resource::GraphicsLocalResource & GetGraphicsLocalResource();

	// resourcetarget.h:429
	const RwChar * GetBaseResourceTypeName(uint32_t);

	// resourcetarget.h:440
	bool IsBaseResourceTypeUninitialized(uint32_t);

	// resourcetarget.h:450
	bool IsBaseResourceTypeDisposable(uint32_t);

}


// CgsResourceID.h:30
namespace CgsResource {
	// CgsSmallResourcePS3.h:28
	enum ESmallResourceMemType {
		E_MEMTYPE_MAINMEMORY = 0,
		E_MEMTYPE_GRAPHICS_SYSTEM = 1,
		E_MEMTYPE_GRAPHICS_LOCAL = 2,
		E_MEMTYPE_NUMTYPES = 3,
	}

	// CgsSmallResourcePS3.h:36
	const int32_t[3] kaiResourceToRWResourceMap;

	// CgsSmallResourcePS3.h:43
	const CgsResource::EMemCategory[3] KAE_RESOURCETOCATEGORYMAP;

	// CgsSmallResourcePS3.h:50
	const CgsResource::ESmallResourceMemType[6] kaeRWResourceToResourceMap;

	// CgsSmallResourcePS3.h:60
	const const char *[3] SMALL_RESOURCE_TYPE_NAMES;

}

// CgsSmallResourcePS3.h:80
struct CgsResource::SmallResourceDescriptor : public BaseResourceDescriptors<3u> {
public:
	// CgsSmallResourcePS3.h:84
	// Declaration
	void SmallResourceDescriptor(const SmallMemoryDescriptor &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSmallResourcePS3.h:71
		typedef MemoryResourceDescriptor SmallMemoryDescriptor;

	}

	// CgsSmallResourcePS3.h:90
	void SmallResourceDescriptor(uint32_t, uint32_t);

	// CgsSmallResourcePS3.h:96
	void SmallResourceDescriptor(const ResourceDescriptor &);

	// CgsSmallResourcePS3.h:103
	void CreateFromRWDescriptor(const ResourceDescriptor &);

	// CgsSmallResourcePS3.h:127
	void ConvertToRWDescriptor(ResourceDescriptor &) const;

	// CgsSmallResourcePS3.h:147
	const SmallMemoryDescriptor & GetMemoryResourceDescriptor() const;

	// CgsSmallResourcePS3.h:153
	SmallMemoryDescriptor & GetMemoryResourceDescriptor();

	// Unknown accessibility
	// CgsSmallResourcePS3.h:72
	typedef ResourceDescriptor::GraphicsSystemResourceDescriptor SmallGraphicsSystemDescriptor;

	// CgsSmallResourcePS3.h:160
	const SmallResourceDescriptor::SmallGraphicsSystemDescriptor & GetGraphicsSystemResourceDescriptor() const;

	// CgsSmallResourcePS3.h:166
	SmallResourceDescriptor::SmallGraphicsSystemDescriptor & GetGraphicsSystemResourceDescriptor();

	// Unknown accessibility
	// CgsSmallResourcePS3.h:73
	typedef ResourceDescriptor::GraphicsLocalResourceDescriptor SmallGraphicsLocalDescriptor;

	// CgsSmallResourcePS3.h:172
	const SmallResourceDescriptor::SmallGraphicsLocalDescriptor & GetGraphicsLocalResourceDescriptor() const;

	// CgsSmallResourcePS3.h:178
	SmallResourceDescriptor::SmallGraphicsLocalDescriptor & GetGraphicsLocalResourceDescriptor();

	// CgsSmallResourcePS3.h:184
	uint32_t GetSize() const;

	// CgsSmallResourcePS3.h:190
	uint32_t GetAlignment() const;

}

// CgsSmallResourcePS3.h:216
struct CgsResource::SmallResource : public BaseResources<3u> {
public:
	// CgsSmallResourcePS3.h:220
	// Declaration
	void SmallResource(const SmallMemoryResource &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsSmallResourcePS3.h:75
		typedef BaseResources<6u>::BaseResource SmallMemoryResource;

	}

	// CgsSmallResourcePS3.h:226
	void SmallResource(const Resource &);

	// CgsSmallResourcePS3.h:233
	void CreateFromRWResource(const Resource &);

	// CgsSmallResourcePS3.h:246
	void ConvertToRWResource(Resource &);

	// CgsSmallResourcePS3.h:258
	SmallMemoryResource GetMemoryResource() const;

	// CgsSmallResourcePS3.h:264
	SmallMemoryResource & GetMemoryResource();

	// Unknown accessibility
	// CgsSmallResourcePS3.h:76
	typedef BaseResources<6u>::BaseResource SmallGraphicsSystemResource;

	// CgsSmallResourcePS3.h:270
	SmallResource::SmallGraphicsSystemResource GetGraphicsSystemResource() const;

	// CgsSmallResourcePS3.h:276
	SmallResource::SmallGraphicsSystemResource & GetGraphicsSystemResource();

	// Unknown accessibility
	// CgsSmallResourcePS3.h:77
	typedef BaseResources<6u>::BaseResource SmallGraphicsLocalResource;

	// CgsSmallResourcePS3.h:282
	SmallResource::SmallGraphicsLocalResource GetGraphicsLocalResource() const;

	// CgsSmallResourcePS3.h:288
	SmallResource::SmallGraphicsLocalResource & GetGraphicsLocalResource();

	// CgsSmallResourcePS3.h:294
	const char * GetResourceTypeName(uint32_t);

}

// programbuffer.h:24
namespace CgsResource {
	// CgsSmallResourcePS3.h:28
	enum ESmallResourceMemType {
		E_MEMTYPE_MAINMEMORY = 0,
		E_MEMTYPE_GRAPHICS_SYSTEM = 1,
		E_MEMTYPE_GRAPHICS_LOCAL = 2,
		E_MEMTYPE_NUMTYPES = 3,
	}

	// CgsSmallResourcePS3.h:36
	const int32_t[3] kaiResourceToRWResourceMap;

	// CgsSmallResourcePS3.h:43
	const CgsResource::EMemCategory[3] KAE_RESOURCETOCATEGORYMAP;

	// CgsSmallResourcePS3.h:50
	const CgsResource::ESmallResourceMemType[6] kaeRWResourceToResourceMap;

	// CgsSmallResourcePS3.h:60
	const const char *[3] SMALL_RESOURCE_TYPE_NAMES;

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsSmallResourcePS3.h:28
	enum ESmallResourceMemType {
		E_MEMTYPE_MAINMEMORY = 0,
		E_MEMTYPE_GRAPHICS_SYSTEM = 1,
		E_MEMTYPE_GRAPHICS_LOCAL = 2,
		E_MEMTYPE_NUMTYPES = 3,
	}

	// CgsSmallResourcePS3.h:36
	const int32_t[3] kaiResourceToRWResourceMap;

	// CgsSmallResourcePS3.h:43
	const CgsResource::EMemCategory[3] KAE_RESOURCETOCATEGORYMAP;

	// CgsSmallResourcePS3.h:50
	const CgsResource::ESmallResourceMemType[6] kaeRWResourceToResourceMap;

	// CgsSmallResourcePS3.h:60
	const const char *[3] SMALL_RESOURCE_TYPE_NAMES;

}

// CgsLuaState.h:37
namespace CgsResource {
	// CgsSmallResourcePS3.h:28
	enum ESmallResourceMemType {
		E_MEMTYPE_MAINMEMORY = 0,
		E_MEMTYPE_GRAPHICS_SYSTEM = 1,
		E_MEMTYPE_GRAPHICS_LOCAL = 2,
		E_MEMTYPE_NUMTYPES = 3,
	}

	// CgsSmallResourcePS3.h:36
	const int32_t[3] kaiResourceToRWResourceMap;

	// CgsSmallResourcePS3.h:43
	const CgsResource::EMemCategory[3] KAE_RESOURCETOCATEGORYMAP;

	// CgsSmallResourcePS3.h:50
	const CgsResource::ESmallResourceMemType[6] kaeRWResourceToResourceMap;

	// CgsSmallResourcePS3.h:60
	const const char *[3] SMALL_RESOURCE_TYPE_NAMES;

}

// CgsResourceTypeIds.h:28
namespace CgsResource {
	// CgsSmallResourcePS3.h:28
	enum ESmallResourceMemType {
		E_MEMTYPE_MAINMEMORY = 0,
		E_MEMTYPE_GRAPHICS_SYSTEM = 1,
		E_MEMTYPE_GRAPHICS_LOCAL = 2,
		E_MEMTYPE_NUMTYPES = 3,
	}

	// CgsSmallResourcePS3.h:36
	const int32_t[3] kaiResourceToRWResourceMap;

	// CgsSmallResourcePS3.h:43
	const CgsResource::EMemCategory[3] KAE_RESOURCETOCATEGORYMAP;

	// CgsSmallResourcePS3.h:50
	const CgsResource::ESmallResourceMemType[6] kaeRWResourceToResourceMap;

	// CgsSmallResourcePS3.h:60
	const const char *[3] SMALL_RESOURCE_TYPE_NAMES;

}

// CgsPolygonSoupListSpatialMap.h:30
namespace CgsResource {
	// CgsSmallResourcePS3.h:28
	enum ESmallResourceMemType {
		E_MEMTYPE_MAINMEMORY = 0,
		E_MEMTYPE_GRAPHICS_SYSTEM = 1,
		E_MEMTYPE_GRAPHICS_LOCAL = 2,
		E_MEMTYPE_NUMTYPES = 3,
	}

	// CgsSmallResourcePS3.h:36
	const int32_t[3] kaiResourceToRWResourceMap;

	// CgsSmallResourcePS3.h:43
	const CgsResource::EMemCategory[3] KAE_RESOURCETOCATEGORYMAP;

	// CgsSmallResourcePS3.h:50
	const CgsResource::ESmallResourceMemType[6] kaeRWResourceToResourceMap;

	// CgsSmallResourcePS3.h:60
	const const char *[3] SMALL_RESOURCE_TYPE_NAMES;

}


// CgsResourceBasePool.h:52
struct CgsResource::Entry {
	// CgsResourceBasePool.h:64
	ID mID;

	// CgsSmallResource.h:60
	typedef SmallResourceDescriptor ResourceDescriptor;

	// CgsResourceBasePool.h:65
	Entry::ResourceDescriptor mResourceDescriptor;

	// CgsResourceBasePool.h:66
	const CgsResource::Type * mpResourceType;

	// CgsResourceBasePool.h:67
	uint32_t muImportTableOffset;

	// CgsResourceBasePool.h:68
	BaseResourcePtr mPtr;

	// CgsResourceBasePool.h:69
	uint16_t[3] mauHeapIndices;

	// CgsResourceBasePool.h:72
	DebugResourceInfo * mpDebugInfo;

}

// CgsResourceBasePool.h:94
extern const uint32_t KI_NUM_TYPES = 3;

// CgsResourceBasePool.h:90
struct CgsResource::BasePool {
	// CgsResourceBasePool.h:94
	extern const uint32_t KI_NUM_TYPES = 3;

}

// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceBasePool.h:112
	extern CgsDev::StrStreamBase & operator<<(CgsDev::StrStreamBase &, const Entry &);

}


// CgsPolygonSoupListResourceType.h:50
void CgsResource::PolygonSoupListResourceType::PolygonSoupListResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPolygonSoupListResourceType.h:50
struct CgsResource::PolygonSoupListResourceType : public CgsResource::Type {
public:
	// CgsPolygonSoupListResourceType.cpp:52
	virtual uint32_t GetTypeID() const;

	// CgsPolygonSoupListResourceType.cpp:71
	// Declaration
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPolygonSoupListResourceType.cpp:74
		using namespace CgsGeometric;

	}

	// CgsPolygonSoupListResourceType.cpp:190
	// Declaration
	virtual void FixUp(void *, const Resource &) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPolygonSoupListResourceType.cpp:193
		using namespace CgsGeometric;

	}

	// CgsPolygonSoupListResourceType.cpp:102
	virtual RwUInt32 GetImportCount(const void *) const;

}


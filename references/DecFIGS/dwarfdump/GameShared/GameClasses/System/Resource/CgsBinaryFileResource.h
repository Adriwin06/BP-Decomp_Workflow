// CgsBinaryFileResource.h:48
extern const uint32_t ALIGNMENT;

// CgsBinaryFileResource.h:46
struct CgsResource::BinaryFileResource {
	// CgsBinaryFileResource.h:48
	extern const uint32_t ALIGNMENT;

private:
	// CgsBinaryFileResource.h:94
	uint32_t mu32DataSize;

	// CgsBinaryFileResource.h:95
	uint32_t mu32DataOffset;

public:
	// CgsBinaryFileResource.h:51
	const void * GetData() const;

	// CgsBinaryFileResource.h:54
	uint32_t GetSize() const;

	// CgsBinaryFileResource.h:57
	uint32_t GetDataSize() const;

	// CgsBinaryFileResource.h:60
	uint32_t GetHeaderSize() const;

}

// CgsResourceID.h:30
namespace CgsResource {
	// Declaration
	struct BinaryFileResourceType {
	public:
		// CgsBinaryFileResource.h:199
		virtual void FixDown(void *, const Resource &) const;

		// CgsBinaryFileResource.h:208
		virtual void FixUp(void *, const Resource &) const;

		BinaryFileResourceType();

	}

}

// CgsBinaryFileResource.h:186
void CgsResource::BinaryFileResourceType::BinaryFileResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsBinaryFileResource.h:186
struct CgsResource::BinaryFileResourceType : public Type {
public:
	// CgsBinaryFileResource.h:189
	virtual uint32_t GetTypeID() const;

	// CgsBinaryFileResource.cpp:61
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsBinaryFileResource.h:199
	virtual void FixDown(void *, const Resource &) const;

	// CgsBinaryFileResource.h:208
	virtual void FixUp(void *, const Resource &) const;

}


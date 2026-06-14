// CgsSnapshotDataResourceType.h:51
struct CgsResource::SnapshotDataResourceType : public CgsResource::BinaryFileResourceType {
public:
	void SnapshotDataResourceType(const SnapshotDataResourceType &);

	void SnapshotDataResourceType();

	// CgsSnapshotDataResourceType.h:81
	virtual uint32_t GetTypeID() const;

}

// CgsSnapshotDataResourceType.h:51
void CgsResource::SnapshotDataResourceType::SnapshotDataResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


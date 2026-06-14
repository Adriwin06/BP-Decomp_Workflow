// CgsSplicerResourceType.h:44
struct CgsResource::SplicerResourceType : public CgsResource::BinaryFileResourceType {
public:
	void SplicerResourceType(const SplicerResourceType &);

	void SplicerResourceType();

	// CgsSplicerResourceType.h:57
	virtual uint32_t GetTypeID() const;

}

// CgsSplicerResourceType.h:44
void CgsResource::SplicerResourceType::SplicerResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


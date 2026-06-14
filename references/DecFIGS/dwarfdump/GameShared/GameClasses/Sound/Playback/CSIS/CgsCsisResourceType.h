// CgsCsisResourceType.h:38
struct CgsResource::CsisResourceType : public CgsResource::BinaryFileResourceType {
public:
	void CsisResourceType(const CsisResourceType &);

	void CsisResourceType();

	// CgsCsisResourceType.h:51
	virtual uint32_t GetTypeID() const;

}

// CgsCsisResourceType.h:38
void CgsResource::CsisResourceType::CsisResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


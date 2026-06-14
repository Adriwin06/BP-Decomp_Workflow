// CgsLuaCodeResource.h:48
extern const uint32_t ALIGNMENT;

// CgsLuaCodeResource.h:46
struct CgsResource::LuaCodeResource : public BinaryFileResource {
	// CgsLuaCodeResource.h:48
	extern const uint32_t ALIGNMENT;

public:
	// CgsLuaCodeResource.h:58
	const char * GetCode();

}

// CgsLuaCodeResource.h:90
struct CgsResource::LuaCodeResourceType : public CgsResource::BinaryFileResourceType {
public:
	void LuaCodeResourceType(const LuaCodeResourceType &);

	void LuaCodeResourceType();

	// CgsLuaCodeResource.h:103
	virtual uint32_t GetTypeID() const;

}

// CgsLuaCodeResource.h:90
void CgsResource::LuaCodeResourceType::LuaCodeResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


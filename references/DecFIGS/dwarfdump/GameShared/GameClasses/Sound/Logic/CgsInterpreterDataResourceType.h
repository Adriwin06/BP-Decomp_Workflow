// CgsInterpreterDataResourceType.h:54
struct CgsResource::InterpreterDataResourceType : public CgsResource::Type {
private:
	// CgsInterpreterDataResourceType.h:98
	extern const int32_t KI_INTERPRETER_DATA_ALIGNMENT = 4;

public:
	// CgsInterpreterDataResourceType.cpp:57
	virtual uint32_t GetTypeID() const;

	// CgsInterpreterDataResourceType.cpp:76
	// Declaration
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsInterpreterDataResourceType.cpp:78
		using namespace CgsSound::Logic;

	}

	// CgsInterpreterDataResourceType.cpp:231
	// Declaration
	virtual void FixUp(void *, const Resource &) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsInterpreterDataResourceType.cpp:233
		using namespace CgsSound::Logic;

	}

	// CgsInterpreterDataResourceType.cpp:288
	virtual RwUInt32 GetImportCount(const void *) const;

	// CgsInterpreterDataResourceType.cpp:309
	virtual void GetImportPointer(const void *, RwUInt32, RwUInt32 *, const void **) const;

}

// CgsInterpreterDataResourceType.h:98
extern const int32_t KI_INTERPRETER_DATA_ALIGNMENT = 4;


// CgsDebugPoolTypeList.h:63
extern const int32_t KI_NUMTYPES = 512;

// CgsSmallResource.h:24
namespace CgsResource {
	// Declaration
	struct DebugPoolTypeList {
		// CgsDebugPoolTypeList.h:66
		struct TypeEntry {
			// CgsDebugPoolTypeList.h:68
			uint32_t muTypeId;

			// CgsDebugPoolTypeList.h:69
			int32_t miCount;

			// CgsDebugPoolTypeList.h:70
			const char * mpcTypeName;

			// CgsDebugPoolTypeList.h:71
			Entry::ResourceDescriptor mSize;

		}

		// CgsDebugPoolTypeList.h:75
		struct CategoryEntry {
			// CgsDebugPoolTypeList.h:77
			int32_t miCount;

			// CgsDebugPoolTypeList.h:78
			Entry::ResourceDescriptor mSize;

		}

	public:
		~DebugPoolTypeList();

		DebugPoolTypeList();

		// Unknown accessibility
		// CgsDebugPoolTypeList.h:63
		extern const int32_t KI_NUMTYPES = 512;

	}

}

// CgsDebugPoolTypeList.h:60
void CgsResource::DebugPoolTypeList::~DebugPoolTypeList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugPoolTypeList.h:60
void CgsResource::DebugPoolTypeList::DebugPoolTypeList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceID.h:30
namespace CgsResource {
	// CgsDebugPoolTypeList.h:41
	enum EPoolTypeListMode {
		E_POOLTYPELISTMODE_RAW = 0,
		E_POOLTYPELISTMODE_PROGRAMMER = 1,
		E_POOLTYPELISTMODE_ARTIST = 2,
		E_POOLTYPELISTMODE_COUNT = 3,
	}

	// Declaration
	struct DebugPoolTypeList {
		// CgsDebugPoolTypeList.h:66
		struct TypeEntry {
			// CgsDebugPoolTypeList.h:68
			uint32_t muTypeId;

			// CgsDebugPoolTypeList.h:69
			int32_t miCount;

			// CgsDebugPoolTypeList.h:70
			const char * mpcTypeName;

			// CgsDebugPoolTypeList.h:71
			Entry::ResourceDescriptor mSize;

		}

		// CgsDebugPoolTypeList.h:75
		struct CategoryEntry {
			// CgsDebugPoolTypeList.h:77
			int32_t miCount;

			// CgsDebugPoolTypeList.h:78
			Entry::ResourceDescriptor mSize;

		}

	}

}

// CgsDebugPoolTypeList.h:60
struct CgsResource::DebugPoolTypeList : public CgsDev::DebugUI::Window {
	// CgsDebugPoolTypeList.h:63
	extern const int32_t KI_NUMTYPES = 512;

private:
	// CgsDebugPoolTypeList.h:95
	const Pool * mpPool;

	// CgsDebugPoolTypeList.h:96
	const CgsResource::PoolModule * mpPoolModule;

	// CgsDebugPoolTypeList.h:97
	int32_t miMaxResources;

	// CgsDebugPoolTypeList.h:98
	CgsResource::DebugPoolTypeList::TypeEntry[512] maTypes;

	// CgsDebugPoolTypeList.h:99
	int32_t miNumTypes;

	// CgsDebugPoolTypeList.h:100
	Entry::ResourceDescriptor mPoolDescriptor;

	// CgsDebugPoolTypeList.h:101
	CgsResource::EPoolTypeListMode meMode;

	// CgsDebugPoolTypeList.h:102
	CgsResource::DebugPoolTypeList::CategoryEntry[7] maCategories;

public:
	// CgsDebugPoolTypeList.cpp:45
	void Reset(const Pool *, const CgsResource::PoolModule *, CgsResource::EPoolTypeListMode);

	// CgsDebugPoolTypeList.cpp:58
	virtual void Render(CgsDev::Debug2DImmediateRender *);

	// CgsDebugPoolTypeList.cpp:96
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

	// CgsDebugPoolTypeList.cpp:617
	void SetMode(CgsResource::EPoolTypeListMode);

private:
	// CgsDebugPoolTypeList.cpp:226
	void RenderRaw(CgsDev::Debug2DImmediateRender *);

	// CgsDebugPoolTypeList.cpp:335
	void RenderProgrammer(CgsDev::Debug2DImmediateRender *);

	// CgsDebugPoolTypeList.cpp:468
	void RenderArtist(CgsDev::Debug2DImmediateRender *);

	// CgsDebugPoolTypeList.cpp:169
	// Declaration
	void AddReferenceToType(uint32_t, const Entry::ResourceDescriptor &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsDebugPoolTypeList.cpp:184
		using namespace CgsDev::Message;

	}

	// CgsDebugPoolTypeList.cpp:197
	void AddReferenceToCategory(CgsResource::EDebugResourceCategory, const Entry::ResourceDescriptor &);

	// CgsDebugPoolTypeList.cpp:216
	void GetSizeString(uint32_t, char *);

	// CgsDebugPoolTypeList.cpp:207
	int32_t SortTypesByName(const void *, const void *);

}


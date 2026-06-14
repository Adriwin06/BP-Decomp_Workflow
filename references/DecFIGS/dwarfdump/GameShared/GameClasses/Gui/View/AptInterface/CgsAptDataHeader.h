// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct AptDataHeader {
		// CgsAptDataHeader.h:37
		enum EAptDataState {
			E_APTDATASTATE_LOADING = 0,
			E_APTDATASTATE_LOADED = 1,
			E_APTDATASTATE_ACTIVE = 2,
		}

	}

}

// CgsAptDataHeader.h:33
struct CgsGui::AptDataHeader {
	// CgsAptDataHeader.h:44
	const char * mpacMovieName;

	// CgsAptDataHeader.h:46
	void * mpAptData;

	// CgsAptDataHeader.h:47
	void * mpConstData;

	// CgsAptDataHeader.h:48
	GuiGeometryObject * mpGeomStruct;

	// CgsAptDataHeader.h:50
	uint32_t muSizeOfHeader;

	// CgsAptDataHeader.h:51
	CgsGui::AptDataHeader::EAptDataState meCurrentState;

public:
	// CgsAptDataHeader.h:55
	void FixDown(uint32_t, bool);

	// CgsAptDataHeader.h:59
	void FixUp(uint32_t);

}

// CgsGuiShared.h:40
namespace CgsGui {
	// Declaration
	struct AptDataHeader {
		// CgsAptDataHeader.h:37
		enum EAptDataState {
			E_APTDATASTATE_LOADING = 0,
			E_APTDATASTATE_LOADED = 1,
			E_APTDATASTATE_ACTIVE = 2,
		}

	}

}

// CgsOpaqueBuffer.h:30
namespace CgsGui {
	// Declaration
	struct AptDataHeader {
		// CgsAptDataHeader.h:37
		enum EAptDataState {
			E_APTDATASTATE_LOADING = 0,
			E_APTDATASTATE_LOADED = 1,
			E_APTDATASTATE_ACTIVE = 2,
		}

	}

}


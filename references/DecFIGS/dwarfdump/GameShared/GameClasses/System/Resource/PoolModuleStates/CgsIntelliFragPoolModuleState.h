// CgsIntelliFragPoolModuleState.h:47
void CgsResource::IntelliFragPoolModuleState::IntelliFragPoolModuleState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceID.h:30
namespace CgsResource {
	// Declaration
	struct IntelliFragPoolModuleState {
		// CgsIntelliFragPoolModuleState.h:50
		enum EIntelliFragResult {
			E_RESULT_SUCCESS = 0,
			E_RESULT_ERROR = 1,
			E_RESULT_PEND = 2,
			E_RESULT_EMERGENCY = 3,
		}

		// CgsIntelliFragPoolModuleState.h:58
		enum EInternalState {
			E_STATE_IDLE = 0,
			E_STATE_START_DEFRAGMENTING = 1,
			E_STATE_DEFRAGMENTING_HEAP = 2,
		}

	}

}

// CgsIntelliFragPoolModuleState.h:41
struct CgsResource::IntelliFragParams : public BaseDefragParams {
	// CgsIntelliFragPoolModuleState.h:43
	CgsResource::ScratchPool * mpScratchPool;

}

// CgsIntelliFragPoolModuleState.h:47
struct CgsResource::IntelliFragPoolModuleState : public CgsResource::BaseDefragPoolModuleState {
private:
	// CgsIntelliFragPoolModuleState.h:76
	CgsResource::IntelliFragPoolModuleState::EInternalState meState;

	// CgsIntelliFragPoolModuleState.h:77
	CgsResource::ScratchPool * mpScratchPool;

public:
	// CgsIntelliFragPoolModuleState.cpp:41
	void Construct(CgsResource::PoolModule *);

	// CgsIntelliFragPoolModuleState.cpp:59
	// Declaration
	void Begin(IntelliFragParams *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsIntelliFragPoolModuleState.cpp:69
		using namespace CgsDev::Message;

	}

	// CgsIntelliFragPoolModuleState.cpp:82
	// Declaration
	CgsResource::IntelliFragPoolModuleState::EIntelliFragResult Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsIntelliFragPoolModuleState.cpp:123
		using namespace CgsDev::Message;

	}

private:
	// CgsIntelliFragPoolModuleState.cpp:179
	// Declaration
	virtual bool RunDefragAlgorithm(AllocListSet *, LinearHeapNode *, int32_t, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsIntelliFragPoolModuleState.cpp:181
		using namespace CgsDev::Message;

	}

	// CgsIntelliFragPoolModuleState.cpp:279
	virtual void RunPoolDefragmentation(RelocateRequest *, RelocateSource *, uint32_t, int32_t);

}


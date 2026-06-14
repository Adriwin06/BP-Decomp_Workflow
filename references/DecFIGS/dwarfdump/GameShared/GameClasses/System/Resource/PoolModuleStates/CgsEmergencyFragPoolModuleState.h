// CgsEmergencyFragPoolModuleState.h:49
void CgsResource::EmergencyFragPoolModuleState::EmergencyFragPoolModuleState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceID.h:30
namespace CgsResource {
	// Declaration
	struct EmergencyFragPoolModuleState {
		// CgsEmergencyFragPoolModuleState.h:52
		enum EEmergencyFragResult {
			E_RESULT_SUCCESS = 0,
			E_RESULT_ERROR = 1,
			E_RESULT_PEND = 2,
			E_RESULT_EMERGENCY = 3,
		}

		// CgsEmergencyFragPoolModuleState.h:60
		enum EInternalState {
			E_STATE_IDLE = 0,
			E_STATE_START_DEFRAGMENTING = 1,
			E_STATE_DEFRAGMENTING_HEAP = 2,
		}

	}

}

// CgsEmergencyFragPoolModuleState.h:42
struct CgsResource::EmergencyFragParams : public BaseDefragParams {
	// CgsEmergencyFragPoolModuleState.h:44
	CgsMemory::Relocator * mpRelocator;

	// CgsEmergencyFragPoolModuleState.h:45
	CgsMemory::RelocationParams * mpRelocationParams;

}

// CgsEmergencyFragPoolModuleState.h:49
struct CgsResource::EmergencyFragPoolModuleState : public CgsResource::BaseDefragPoolModuleState {
private:
	// CgsEmergencyFragPoolModuleState.h:78
	CgsResource::EmergencyFragPoolModuleState::EInternalState meState;

	// CgsEmergencyFragPoolModuleState.h:79
	int32_t miCountdown;

	// CgsEmergencyFragPoolModuleState.h:80
	CgsMemory::Relocator * mpRelocator;

	// CgsEmergencyFragPoolModuleState.h:81
	CgsMemory::RelocationParams * mpRelocationParams;

public:
	// CgsEmergencyFragPoolModuleState.cpp:41
	void Construct(CgsResource::PoolModule *);

	// CgsEmergencyFragPoolModuleState.cpp:60
	// Declaration
	void Begin(EmergencyFragParams *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsEmergencyFragPoolModuleState.cpp:70
		using namespace CgsDev::Message;

	}

	// CgsEmergencyFragPoolModuleState.cpp:83
	CgsResource::EmergencyFragPoolModuleState::EEmergencyFragResult Update();

private:
	// CgsEmergencyFragPoolModuleState.cpp:183
	virtual bool RunDefragAlgorithm(AllocListSet *, LinearHeapNode *, int32_t, int32_t);

	// CgsEmergencyFragPoolModuleState.cpp:257
	virtual void RunPoolDefragmentation(RelocateRequest *, RelocateSource *, uint32_t, int32_t);

}


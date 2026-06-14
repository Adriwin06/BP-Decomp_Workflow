// CgsSmallResource.h:24
namespace CgsResource {
	// Declaration
	struct DeAllocatePoolModuleState {
		// CgsDeAllocatePoolModuleState.h:42
		enum EDeAllocateResult {
			E_RESULT_SUCCESS = 0,
			E_RESULT_ERROR = 1,
			E_RESULT_PEND = 2,
			E_RESULT_GOTO_ALLOCATE = 3,
		}

		// CgsDeAllocatePoolModuleState.h:50
		enum EInternalState {
			E_STATE_IDLE = 0,
			E_STATE_DEALLOCATING = 1,
		}

	}

}

// CgsDeAllocatePoolModuleState.h:39
struct CgsResource::DeAllocatePoolModuleState : public BasePoolModuleState {
private:
	// CgsDeAllocatePoolModuleState.h:77
	CgsResource::DeAllocatePoolModuleState::EInternalState meState;

	// CgsDeAllocatePoolModuleState.h:78
	CgsResource::PoolModule * mpPoolModule;

	// CgsDeAllocatePoolModuleState.h:79
	int32_t miCountDown;

	// CgsDeAllocatePoolModuleState.h:81
	bool mbGotPendingAllocationRequest;

	// CgsDeAllocatePoolModuleState.h:82
	AllocateResourceListRequest mPendingAllocationRequest;

public:
	// CgsDeAllocatePoolModuleState.h:58
	void Construct(CgsResource::PoolModule *);

	// CgsDeAllocatePoolModuleState.h:61
	void Begin(CgsResource::Pool *, ID);

	// CgsDeAllocatePoolModuleState.h:64
	CgsResource::DeAllocatePoolModuleState::EDeAllocateResult Update();

	// CgsDeAllocatePoolModuleState.h:67
	void AddPendingAllocation(AllocateResourceListRequest *);

	// CgsDeAllocatePoolModuleState.h:70
	void CancelPendingAllocation();

	// CgsDeAllocatePoolModuleState.h:73
	AllocateResourceListRequest * GetPendingAllocation();

}

// CgsResourceID.h:30
namespace CgsResource {
	// Declaration
	struct DeAllocatePoolModuleState {
		// CgsDeAllocatePoolModuleState.h:42
		enum EDeAllocateResult {
			E_RESULT_SUCCESS = 0,
			E_RESULT_ERROR = 1,
			E_RESULT_PEND = 2,
			E_RESULT_GOTO_ALLOCATE = 3,
		}

		// CgsDeAllocatePoolModuleState.h:50
		enum EInternalState {
			E_STATE_IDLE = 0,
			E_STATE_DEALLOCATING = 1,
		}

	}

}


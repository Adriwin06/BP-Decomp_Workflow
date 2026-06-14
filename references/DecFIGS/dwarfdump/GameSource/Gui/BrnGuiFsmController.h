// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct GuiFsmController {
		// BrnGuiFsmController.h:55
		enum PrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_SETPOINTERS = 1,
			E_PREPARESTAGE_DONE = 2,
		}

		// BrnGuiFsmController.h:63
		enum FlowLoadStage {
			E_FLOWLOADSTAGE_TRIGGERLOAD = 0,
			E_FLOWLOADSTAGE_WFLOAD = 1,
			E_FLOWLOADSTAGE_RUNNING = 2,
			E_FLOWLOADSTAGE_FSMSHUTDOWN = 3,
			E_FLOWLOADSTAGE_TRIGGERUNLOAD = 4,
			E_FLOWLOADSTAGE_WFUNLOAD = 5,
			E_FLOWLOADSTAGE_UNLOADED = 6,
		}

	}

}

// BrnGuiFsmController.h:51
struct BrnGui::GuiFsmController {
private:
	// BrnGuiFsmController.h:107
	BrnGui::BrnBaseFlow *[3] mapFlows;

	// BrnGuiFsmController.h:108
	BrnGui::GuiFsmController::FlowLoadStage[3] maeFlowLoadState;

	// BrnGuiFsmController.h:109
	CgsID[3] maHashToLoad;

	// BrnGuiFsmController.h:110
	char[3][13] maacNameToLoad;

	// BrnGuiFsmController.h:111
	CgsID[3] mInitialStateId;

	// BrnGuiFsmController.h:112
	const GuiEventLoadNotification *[3] mapLoadNotification;

	// BrnGuiFsmController.h:113
	const GuiEventUnloadNotification *[3] mapUnloadNotification;

	// BrnGuiFsmController.h:114
	CgsGui::ModelModule * mpGuiModelModule;

	// BrnGuiFsmController.h:115
	HeapMalloc * mpFSMAllocator;

	// BrnGuiFsmController.h:116
	BrnGui::GuiFsmController::PrepareStage mePrepareStage;

	// BrnGuiFsmController.h:117
	bool[3] mbFsmTransitionPending;

	// BrnGuiFsmController.h:118
	bool[3] mbModeManagerWaitingForResponse;

	// BrnGuiFsmController.h:119
	GuiEventRunFsm[3] mFsmToChangeTo;

	// BrnGuiFsmController.h:120
	GuiEventRunFsm[3] mCurrentFsm;

	// BrnGuiFsmController.h:121
	char[3][13] macNameToUnload;

	// BrnGuiFsmController.h:124
	GuiEventUnloadNotification mDummyUnloadNotification;

public:
	// BrnGuiFsmController.h:76
	void Construct();

	// BrnGuiFsmController.h:80
	bool Prepare(CgsGui::ModelModule *, HeapMalloc *);

	// BrnGuiFsmController.h:85
	void Update(InputBuffer *, const OutputBuffer *);

	// BrnGuiFsmController.h:89
	void AddFlow(BrnGui::GuiFlow, BrnGui::BrnBaseFlow *);

	// BrnGuiFsmController.h:93
	void RunFsm(const GuiEventRunFsm *);

	// BrnGuiFsmController.h:97
	bool HandleHudStateLoadComplete();

	// BrnGuiFsmController.h:101
	bool IsTransitionPending(BrnGui::GuiFlow);

private:
	// BrnGuiFsmController.h:140
	void TriggerLoadUnload(BrnGui::GuiFlow, CgsGui::ResourceRequestLoadUnload, InputBuffer *);

	// BrnGuiFsmController.h:144
	void RunQueuedFsm(BrnGui::GuiFlow);

	// BrnGuiFsmController.h:148
	void DebugPrintResources(BrnGui::GuiFlow, const char *);

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct GuiFsmController {
		// BrnGuiFsmController.h:55
		enum PrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_SETPOINTERS = 1,
			E_PREPARESTAGE_DONE = 2,
		}

		// BrnGuiFsmController.h:63
		enum FlowLoadStage {
			E_FLOWLOADSTAGE_TRIGGERLOAD = 0,
			E_FLOWLOADSTAGE_WFLOAD = 1,
			E_FLOWLOADSTAGE_RUNNING = 2,
			E_FLOWLOADSTAGE_FSMSHUTDOWN = 3,
			E_FLOWLOADSTAGE_TRIGGERUNLOAD = 4,
			E_FLOWLOADSTAGE_WFUNLOAD = 5,
			E_FLOWLOADSTAGE_UNLOADED = 6,
		}

	}

}


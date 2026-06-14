// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct AptAux {
		// CgsAptAux.h:440
		enum EAptAuxPrepareStage {
			E_PREPARE_START = 0,
			E_PREPARE_DATAHANDLER = 1,
			E_PREPARE_APT = 2,
			E_PREPARE_DONE = 3,
		}

		// CgsAptAux.h:450
		enum EAptAuxReleaseStage {
			E_RELEASE_START = 0,
			E_RELEASE_APT = 1,
			E_RELEASE_DATAHANDLER = 2,
			E_RELEASE_DONE = 3,
		}

	}

}

// CgsAptAux.h:271
struct CgsGui::AptAux {
	// CgsAptAux.h:430
	extern int32_t miAptAuxRenderTargetPM;

	// CgsAptAux.h:431
	extern int32_t miAptAuxUpdateTargetPM;

	// CgsAptAux.h:432
	extern int32_t miAptAuxUpdateComponentsPM;

	// CgsAptAux.h:433
	extern int32_t miAptAuxUpdateFlashComponentNonReservedPM;

	// CgsAptAux.h:434
	extern int32_t miAptAuxUpdateFlashComponentReservedPM;

private:
	// CgsAptAux.h:476
	CgsGui::AptAux::EAptAuxPrepareStage mePrepareStage;

	// CgsAptAux.h:477
	CgsGui::AptAux::EAptAuxReleaseStage meReleaseStage;

	// CgsAptAux.h:484
	AptTargetInstance mpAptTargetInstance;

	// CgsAptAux.h:485
	AptDataHandler mDataHandler;

	// CgsAptAux.h:486
	AptRenderHandler mRenderHandler;

	// CgsAptAux.h:488
	CgsGui::AptCommunicator * mpAptCommunicator;

	// CgsAptAux.h:490
	Mutex mAptMutex;

public:
	// CgsAptAux.h:285
	void Construct(ImRendererSet *, TextRenderer *, LanguageManager *, const CgsGui::FontCollection *, float32_t, const RGBA *, int32_t);

	// CgsAptAux.h:291
	bool Prepare(HeapMalloc *);

	// CgsAptAux.h:295
	bool Release();

	// CgsAptAux.h:309
	void Destruct();

	// CgsAptAux.h:313
	void ConstructApt();

	// CgsAptAux.h:317
	void InitializeApt();

	// CgsAptAux.h:321
	void UnInitializeApt();

	// CgsAptAux.h:325
	bool Update(uint32_t);

	// CgsAptAux.h:333
	bool Render(uint32_t);

	// CgsAptAux.h:339
	void AddNewAptDataHeader(AptDataHeader *);

	// CgsAptAux.h:344
	void RemoveAptDataHeader(uint32_t);

	// CgsAptAux.h:350
	void LoadFlashAnimation(const char *, int32_t);

	// CgsAptAux.h:358
	void UpdateFlashComponent(const char *, const char *, const char *, bool);

	// CgsAptAux.h:362
	void UpdateComponents();

	// CgsAptAux.h:366
	AptDataHandler * GetDataHandler();

	// CgsAptAux.h:370
	AptRenderHandler * GetRenderHandler();

	// CgsAptAux.h:374
	InputBuffer::GuiEventQueue * GetOutAptTriggerEvents();

	// CgsAptAux.h:379
	void SetWhiteTexture(GuiGeometryMeshHeader::GuiTexture *);

	// CgsAptAux.h:385
	void SetCustomRenderer(CgsGui::CustomRendererManager *);

	// CgsAptAux.h:390
	void DebugRotateToNextFont();

	// CgsAptAux.h:394
	void DebugRotateToNextFontEffect();

	// CgsAptAux.h:398
	void DebugChangeFontSpacing(float32_t);

	// CgsAptAux.h:402
	void RemoveAptValue(AptValue *);

	// CgsAptAux.h:406
	bool GetIsAptPrepared() const;

	// CgsAptAux.h:416
	AptTargetInstance GetAptTargetInstance() const;

	// CgsAptAux.h:419
	void ShowAllComponents();

	// CgsAptAux.h:422
	void HideAllComponents();

	// CgsAptAux.h:426
	CgsGui::AptCommunicator * GetAptCommunicatorInstance();

}

// CgsAptAux.h:271
struct CgsGui::AptAux {
	// CgsAptAux.h:430
	extern int32_t miAptAuxRenderTargetPM;

	// CgsAptAux.h:431
	extern int32_t miAptAuxUpdateTargetPM;

	// CgsAptAux.h:432
	extern int32_t miAptAuxUpdateComponentsPM;

	// CgsAptAux.h:433
	extern int32_t miAptAuxUpdateFlashComponentNonReservedPM;

	// CgsAptAux.h:434
	extern int32_t miAptAuxUpdateFlashComponentReservedPM;

private:
	// CgsAptAux.h:476
	CgsGui::AptAux::EAptAuxPrepareStage mePrepareStage;

	// CgsAptAux.h:477
	CgsGui::AptAux::EAptAuxReleaseStage meReleaseStage;

	// CgsAptAux.h:484
	AptTargetInstance mpAptTargetInstance;

	// CgsAptAux.h:485
	AptDataHandler mDataHandler;

	// CgsAptAux.h:486
	AptRenderHandler mRenderHandler;

	// CgsAptAux.h:488
	CgsGui::AptCommunicator * mpAptCommunicator;

	// CgsAptAux.h:490
	Mutex mAptMutex;

public:
	// CgsAptAux.h:285
	void Construct(ImRendererSet *, TextRenderer *, CgsLanguage::LanguageManager *, const CgsGui::FontCollection *, float32_t, const RGBA *, int32_t);

	// CgsAptAux.h:291
	bool Prepare(HeapMalloc *);

	// CgsAptAux.h:295
	bool Release();

	// CgsAptAux.h:309
	void Destruct();

	// CgsAptAux.h:313
	void ConstructApt();

	// CgsAptAux.h:317
	void InitializeApt();

	// CgsAptAux.h:321
	void UnInitializeApt();

	// CgsAptAux.h:325
	bool Update(uint32_t);

	// CgsAptAux.h:333
	bool Render(uint32_t);

	// CgsAptAux.h:339
	void AddNewAptDataHeader(AptDataHeader *);

	// CgsAptAux.h:344
	void RemoveAptDataHeader(uint32_t);

	// CgsAptAux.h:350
	void LoadFlashAnimation(const char *, int32_t);

	// CgsAptAux.h:358
	void UpdateFlashComponent(const char *, const char *, const char *, bool);

	// CgsAptAux.h:362
	void UpdateComponents();

	// CgsAptAux.h:366
	AptDataHandler * GetDataHandler();

	// CgsAptAux.h:370
	AptRenderHandler * GetRenderHandler();

	// CgsAptAux.h:374
	InputBuffer::GuiEventQueue * GetOutAptTriggerEvents();

	// CgsAptAux.h:379
	void SetWhiteTexture(GuiGeometryMeshHeader::GuiTexture *);

	// CgsAptAux.h:385
	void SetCustomRenderer(CgsGui::CustomRendererManager *);

	// CgsAptAux.h:390
	void DebugRotateToNextFont();

	// CgsAptAux.h:394
	void DebugRotateToNextFontEffect();

	// CgsAptAux.h:398
	void DebugChangeFontSpacing(float32_t);

	// CgsAptAux.h:402
	void RemoveAptValue(AptValue *);

	// CgsAptAux.h:406
	bool GetIsAptPrepared() const;

	// CgsAptAux.h:416
	AptTargetInstance GetAptTargetInstance() const;

	// CgsAptAux.h:419
	void ShowAllComponents();

	// CgsAptAux.h:422
	void HideAllComponents();

	// CgsAptAux.h:426
	CgsGui::AptCommunicator * GetAptCommunicatorInstance();

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct AptAux {
		// CgsAptAux.h:440
		enum EAptAuxPrepareStage {
			E_PREPARE_START = 0,
			E_PREPARE_DATAHANDLER = 1,
			E_PREPARE_APT = 2,
			E_PREPARE_DONE = 3,
		}

		// CgsAptAux.h:450
		enum EAptAuxReleaseStage {
			E_RELEASE_START = 0,
			E_RELEASE_APT = 1,
			E_RELEASE_DATAHANDLER = 2,
			E_RELEASE_DONE = 3,
		}

	}

	// CgsAptAux.h:43
	namespace AptAuxPointer {
		// CgsAptAux.h:44
		extern AptAux * mpAptAuxInst;

	}

}

// CgsAptAux.h:271
struct CgsGui::AptAux {
	// CgsAptAux.h:430
	extern int32_t miAptAuxRenderTargetPM;

	// CgsAptAux.h:431
	extern int32_t miAptAuxUpdateTargetPM;

	// CgsAptAux.h:432
	extern int32_t miAptAuxUpdateComponentsPM;

	// CgsAptAux.h:433
	extern int32_t miAptAuxUpdateFlashComponentNonReservedPM;

	// CgsAptAux.h:434
	extern int32_t miAptAuxUpdateFlashComponentReservedPM;

private:
	// CgsAptAux.h:476
	CgsGui::AptAux::EAptAuxPrepareStage mePrepareStage;

	// CgsAptAux.h:477
	CgsGui::AptAux::EAptAuxReleaseStage meReleaseStage;

	// CgsAptAux.h:484
	AptTargetInstance mpAptTargetInstance;

	// CgsAptAux.h:485
	AptDataHandler mDataHandler;

	// CgsAptAux.h:486
	AptRenderHandler mRenderHandler;

	// CgsAptAux.h:488
	CgsGui::AptCommunicator * mpAptCommunicator;

	// CgsAptAux.h:490
	Mutex mAptMutex;

public:
	// CgsAptAux.h:285
	void Construct(CgsGui::ImRendererSet *, CgsGraphics::TextRenderer *, LanguageManager *, const CgsGui::FontCollection *, float32_t, const RGBA *, int32_t);

	// CgsAptAux.h:291
	bool Prepare(HeapMalloc *);

	// CgsAptAux.h:295
	bool Release();

	// CgsAptAux.h:309
	void Destruct();

	// CgsAptAux.h:313
	void ConstructApt();

	// CgsAptAux.h:317
	void InitializeApt();

	// CgsAptAux.h:321
	void UnInitializeApt();

	// CgsAptAux.h:325
	bool Update(uint32_t);

	// CgsAptAux.h:333
	bool Render(uint32_t);

	// CgsAptAux.h:339
	void AddNewAptDataHeader(AptDataHeader *);

	// CgsAptAux.h:344
	void RemoveAptDataHeader(uint32_t);

	// CgsAptAux.h:350
	void LoadFlashAnimation(const char *, int32_t);

	// CgsAptAux.h:358
	void UpdateFlashComponent(const char *, const char *, const char *, bool);

	// CgsAptAux.h:362
	void UpdateComponents();

	// CgsAptAux.h:366
	AptDataHandler * GetDataHandler();

	// CgsAptAux.h:370
	AptRenderHandler * GetRenderHandler();

	// CgsAptAux.h:374
	InputBuffer::GuiEventQueue * GetOutAptTriggerEvents();

	// CgsAptAux.h:379
	void SetWhiteTexture(GuiGeometryMeshHeader::GuiTexture *);

	// CgsAptAux.h:385
	void SetCustomRenderer(CgsGui::CustomRendererManager *);

	// CgsAptAux.h:390
	void DebugRotateToNextFont();

	// CgsAptAux.h:394
	void DebugRotateToNextFontEffect();

	// CgsAptAux.h:398
	void DebugChangeFontSpacing(float32_t);

	// CgsAptAux.h:402
	void RemoveAptValue(AptValue *);

	// CgsAptAux.h:406
	bool GetIsAptPrepared() const;

	// CgsAptAux.h:416
	AptTargetInstance GetAptTargetInstance() const;

	// CgsAptAux.h:419
	void ShowAllComponents();

	// CgsAptAux.h:422
	void HideAllComponents();

	// CgsAptAux.h:426
	CgsGui::AptCommunicator * GetAptCommunicatorInstance();

}

// CgsAptAux.h:44
extern AptAux * mpAptAuxInst;

// CgsAptAux.h:271
struct CgsGui::AptAux {
	// CgsAptAux.h:430
	extern int32_t miAptAuxRenderTargetPM;

	// CgsAptAux.h:431
	extern int32_t miAptAuxUpdateTargetPM;

	// CgsAptAux.h:432
	extern int32_t miAptAuxUpdateComponentsPM;

	// CgsAptAux.h:433
	extern int32_t miAptAuxUpdateFlashComponentNonReservedPM;

	// CgsAptAux.h:434
	extern int32_t miAptAuxUpdateFlashComponentReservedPM;

private:
	// CgsAptAux.h:476
	CgsGui::AptAux::EAptAuxPrepareStage mePrepareStage;

	// CgsAptAux.h:477
	CgsGui::AptAux::EAptAuxReleaseStage meReleaseStage;

	// CgsAptAux.h:484
	AptTargetInstance mpAptTargetInstance;

	// CgsAptAux.h:485
	AptDataHandler mDataHandler;

	// CgsAptAux.h:486
	AptRenderHandler mRenderHandler;

	// CgsAptAux.h:488
	CgsGui::AptCommunicator * mpAptCommunicator;

	// CgsAptAux.h:490
	Mutex mAptMutex;

public:
	// CgsAptAux.h:285
	void Construct(ImRendererSet *, TextRenderer *, LanguageManager *, const CgsGui::FontCollection *, float32_t, const RGBA *, int32_t);

	// CgsAptAux.h:291
	bool Prepare(CgsMemory::HeapMalloc *);

	// CgsAptAux.h:295
	bool Release();

	// CgsAptAux.h:309
	void Destruct();

	// CgsAptAux.h:313
	void ConstructApt();

	// CgsAptAux.h:317
	void InitializeApt();

	// CgsAptAux.h:321
	void UnInitializeApt();

	// CgsAptAux.h:325
	bool Update(uint32_t);

	// CgsAptAux.h:333
	bool Render(uint32_t);

	// CgsAptAux.h:339
	void AddNewAptDataHeader(AptDataHeader *);

	// CgsAptAux.h:344
	void RemoveAptDataHeader(uint32_t);

	// CgsAptAux.h:350
	void LoadFlashAnimation(const char *, int32_t);

	// CgsAptAux.h:358
	void UpdateFlashComponent(const char *, const char *, const char *, bool);

	// CgsAptAux.h:362
	void UpdateComponents();

	// CgsAptAux.h:366
	AptDataHandler * GetDataHandler();

	// CgsAptAux.h:370
	AptRenderHandler * GetRenderHandler();

	// CgsAptAux.h:374
	InputBuffer::GuiEventQueue * GetOutAptTriggerEvents();

	// CgsAptAux.h:379
	void SetWhiteTexture(GuiGeometryMeshHeader::GuiTexture *);

	// CgsAptAux.h:385
	void SetCustomRenderer(CgsGui::CustomRendererManager *);

	// CgsAptAux.h:390
	void DebugRotateToNextFont();

	// CgsAptAux.h:394
	void DebugRotateToNextFontEffect();

	// CgsAptAux.h:398
	void DebugChangeFontSpacing(float32_t);

	// CgsAptAux.h:402
	void RemoveAptValue(AptValue *);

	// CgsAptAux.h:406
	bool GetIsAptPrepared() const;

	// CgsAptAux.h:416
	AptTargetInstance GetAptTargetInstance() const;

	// CgsAptAux.h:419
	void ShowAllComponents();

	// CgsAptAux.h:422
	void HideAllComponents();

	// CgsAptAux.h:426
	CgsGui::AptCommunicator * GetAptCommunicatorInstance();

}

// CgsAptAux.h:271
struct CgsGui::AptAux {
	// CgsAptAux.h:430
	extern int32_t miAptAuxRenderTargetPM;

	// CgsAptAux.h:431
	extern int32_t miAptAuxUpdateTargetPM;

	// CgsAptAux.h:432
	extern int32_t miAptAuxUpdateComponentsPM;

	// CgsAptAux.h:433
	extern int32_t miAptAuxUpdateFlashComponentNonReservedPM;

	// CgsAptAux.h:434
	extern int32_t miAptAuxUpdateFlashComponentReservedPM;

private:
	// CgsAptAux.h:476
	CgsGui::AptAux::EAptAuxPrepareStage mePrepareStage;

	// CgsAptAux.h:477
	CgsGui::AptAux::EAptAuxReleaseStage meReleaseStage;

	// CgsAptAux.h:484
	AptTargetInstance mpAptTargetInstance;

	// CgsAptAux.h:485
	AptDataHandler mDataHandler;

	// CgsAptAux.h:486
	AptRenderHandler mRenderHandler;

	// CgsAptAux.h:488
	CgsGui::AptCommunicator * mpAptCommunicator;

	// CgsAptAux.h:490
	Mutex mAptMutex;

public:
	// CgsAptAux.h:285
	void Construct(ImRendererSet *, TextRenderer *, CgsLanguage::LanguageManager *, const CgsGui::FontCollection *, float32_t, const RGBA *, int32_t);

	// CgsAptAux.h:291
	bool Prepare(CgsMemory::HeapMalloc *);

	// CgsAptAux.h:295
	bool Release();

	// CgsAptAux.h:309
	void Destruct();

	// CgsAptAux.h:313
	void ConstructApt();

	// CgsAptAux.h:317
	void InitializeApt();

	// CgsAptAux.h:321
	void UnInitializeApt();

	// CgsAptAux.h:325
	bool Update(uint32_t);

	// CgsAptAux.h:333
	bool Render(uint32_t);

	// CgsAptAux.h:339
	void AddNewAptDataHeader(AptDataHeader *);

	// CgsAptAux.h:344
	void RemoveAptDataHeader(uint32_t);

	// CgsAptAux.h:350
	void LoadFlashAnimation(const char *, int32_t);

	// CgsAptAux.h:358
	void UpdateFlashComponent(const char *, const char *, const char *, bool);

	// CgsAptAux.h:362
	void UpdateComponents();

	// CgsAptAux.h:366
	AptDataHandler * GetDataHandler();

	// CgsAptAux.h:370
	AptRenderHandler * GetRenderHandler();

	// CgsAptAux.h:374
	InputBuffer::GuiEventQueue * GetOutAptTriggerEvents();

	// CgsAptAux.h:379
	void SetWhiteTexture(GuiGeometryMeshHeader::GuiTexture *);

	// CgsAptAux.h:385
	void SetCustomRenderer(CgsGui::CustomRendererManager *);

	// CgsAptAux.h:390
	void DebugRotateToNextFont();

	// CgsAptAux.h:394
	void DebugRotateToNextFontEffect();

	// CgsAptAux.h:398
	void DebugChangeFontSpacing(float32_t);

	// CgsAptAux.h:402
	void RemoveAptValue(AptValue *);

	// CgsAptAux.h:406
	bool GetIsAptPrepared() const;

	// CgsAptAux.h:416
	AptTargetInstance GetAptTargetInstance() const;

	// CgsAptAux.h:419
	void ShowAllComponents();

	// CgsAptAux.h:422
	void HideAllComponents();

	// CgsAptAux.h:426
	CgsGui::AptCommunicator * GetAptCommunicatorInstance();

}

// CgsGuiShared.h:40
namespace CgsGui {
	// Declaration
	struct AptAux {
		// CgsAptAux.h:440
		enum EAptAuxPrepareStage {
			E_PREPARE_START = 0,
			E_PREPARE_DATAHANDLER = 1,
			E_PREPARE_APT = 2,
			E_PREPARE_DONE = 3,
		}

		// CgsAptAux.h:450
		enum EAptAuxReleaseStage {
			E_RELEASE_START = 0,
			E_RELEASE_APT = 1,
			E_RELEASE_DATAHANDLER = 2,
			E_RELEASE_DONE = 3,
		}

	}

}

// CgsAptAux.h:430
extern int32_t miAptAuxRenderTargetPM;

// CgsAptAux.h:431
extern int32_t miAptAuxUpdateTargetPM;

// CgsAptAux.h:432
extern int32_t miAptAuxUpdateComponentsPM;

// CgsAptAux.h:433
extern int32_t miAptAuxUpdateFlashComponentNonReservedPM;

// CgsAptAux.h:434
extern int32_t miAptAuxUpdateFlashComponentReservedPM;

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct AptAux {
		// CgsAptAux.h:440
		enum EAptAuxPrepareStage {
			E_PREPARE_START = 0,
			E_PREPARE_DATAHANDLER = 1,
			E_PREPARE_APT = 2,
			E_PREPARE_DONE = 3,
		}

		// CgsAptAux.h:450
		enum EAptAuxReleaseStage {
			E_RELEASE_START = 0,
			E_RELEASE_APT = 1,
			E_RELEASE_DATAHANDLER = 2,
			E_RELEASE_DONE = 3,
		}

	}

	// CgsAptAux.h:63
	namespace AptCallbackDebug {
		void Print(const char *, ...);

	}

	// CgsAptAux.h:88
	namespace AptCallbackFile {
	}

	// CgsAptAux.h:128
	namespace AptCallbackVariable {
	}

	// CgsAptAux.h:143
	namespace AptCallbackCustom {
	}

	// CgsAptAux.h:162
	namespace AptCallbackRenderFlags {
	}

	// CgsAptAux.h:203
	namespace AptCallbackDeprecated {
	}

	// CgsAptAux.h:48
	namespace AptCallbackMemory {
	}

	// CgsAptAux.h:43
	namespace AptAuxPointer {
	}

}

// CgsOpaqueBuffer.h:30
namespace CgsGui {
	// Declaration
	struct AptAux {
		// CgsAptAux.h:440
		enum EAptAuxPrepareStage {
			E_PREPARE_START = 0,
			E_PREPARE_DATAHANDLER = 1,
			E_PREPARE_APT = 2,
			E_PREPARE_DONE = 3,
		}

		// CgsAptAux.h:450
		enum EAptAuxReleaseStage {
			E_RELEASE_START = 0,
			E_RELEASE_APT = 1,
			E_RELEASE_DATAHANDLER = 2,
			E_RELEASE_DONE = 3,
		}

	}

}


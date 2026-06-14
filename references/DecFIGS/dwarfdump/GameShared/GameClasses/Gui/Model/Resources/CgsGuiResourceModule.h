// CgsGuiResourceModule.h:129
extern const int32_t KI_RESOURCE_RECEIVER_QUEUE = 8192;

// CgsGuiResourceModule.h:130
extern const int32_t KI_MAX_BUNDLES_TO_LOAD = 64;

// CgsGuiResourceModule.h:131
extern const int32_t KI_MAX_RESOURCES_WITHOUT_WAITING = 5;

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct GuiResourceModule {
		// CgsGuiResourceModule.h:151
		struct GuiBundleToLoad {
			// CgsGuiResourceModule.h:152
			const char * mpcBundleNameToLoad;

			// CgsGuiResourceModule.h:153
			uint64_t muResourceId;

			// CgsGuiResourceModule.h:154
			uint32_t muBundleNameToLoadHash;

			// CgsGuiResourceModule.h:155
			const char * mpcPathToBundle;

			// CgsGuiResourceModule.h:156
			CgsGui::ResourceRequestTypes meResourceType;

			// CgsGuiResourceModule.h:157
			CgsGui::ResourceRequestLoadUnload meLoadUnload;

			// CgsGuiResourceModule.h:158
			uint32_t muRequestId;

			// CgsGuiResourceModule.h:159
			int32_t miBundleBank;

			// CgsGuiResourceModule.h:160
			bool mbParsed;

			// CgsGuiResourceModule.h:161
			bool mbLoaded;

			// CgsGuiResourceModule.h:162
			uint32_t muUnloadFileNameHash;

			// CgsGuiResourceModule.h:163
			ResourceHandle mResourceHandle;

		}

	public:
		~GuiResourceModule();

		GuiResourceModule();

	private:
		// CgsGuiResourceModule.h:129
		extern const int32_t KI_RESOURCE_RECEIVER_QUEUE = 8192;

		// CgsGuiResourceModule.h:130
		extern const int32_t KI_MAX_BUNDLES_TO_LOAD = 64;

		// CgsGuiResourceModule.h:131
		extern const int32_t KI_MAX_RESOURCES_WITHOUT_WAITING = 5;

	}

}

// CgsGuiResourceModule.h:48
void CgsGui::GuiResourceModule::~GuiResourceModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiResourceModule.h:48
void CgsGui::GuiResourceModule::GuiResourceModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct GuiResourceModule {
		// CgsGuiResourceModule.h:51
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_RECEIVERQUEUE = 2,
			E_PREPARESTAGE_BANKID = 3,
			E_PREPARESTAGE_DONE = 4,
		}

		// CgsGuiResourceModule.h:62
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_MANAGER = 1,
			E_RELEASESTAGE_DONE = 2,
		}

		// CgsGuiResourceModule.h:71
		enum EAcquireStage {
			E_ACQUIRESTAGE_START = 0,
			E_ACQUIRESTAGE_WAIT = 1,
			E_AQUIRESTAGE_INITIAL_REQUEST_RESOURCES = 2,
			E_AQUIRESTAGE_LOAD_BUNDLES = 3,
			E_AQUIRESTAGE_REQUEST_RESOURCE_AFTER_BUNDLE_LOAD = 4,
			E_AQUIRESTAGE_REQUEST_REMAINING_RESOURCES = 5,
			E_AQUIRESTAGE_SEND_NOTIFICATIONS = 6,
			E_ACQUIRESTAGE_DONE = 7,
		}

		// CgsGuiResourceModule.h:151
		struct GuiBundleToLoad {
			// CgsGuiResourceModule.h:152
			const char * mpcBundleNameToLoad;

			// CgsGuiResourceModule.h:153
			uint64_t muResourceId;

			// CgsGuiResourceModule.h:154
			uint32_t muBundleNameToLoadHash;

			// CgsGuiResourceModule.h:155
			const char * mpcPathToBundle;

			// CgsGuiResourceModule.h:156
			CgsGui::ResourceRequestTypes meResourceType;

			// CgsGuiResourceModule.h:157
			CgsGui::ResourceRequestLoadUnload meLoadUnload;

			// CgsGuiResourceModule.h:158
			uint32_t muRequestId;

			// CgsGuiResourceModule.h:159
			int32_t miBundleBank;

			// CgsGuiResourceModule.h:160
			bool mbParsed;

			// CgsGuiResourceModule.h:161
			bool mbLoaded;

			// CgsGuiResourceModule.h:162
			uint32_t muUnloadFileNameHash;

			// CgsGuiResourceModule.h:163
			ResourceHandle mResourceHandle;

		}

	}

	// CgsGuiResourceModule.h:236
	extern CgsGui::GuiResourceModule::EReleaseStage operator++(CgsGui::GuiResourceModule::EReleaseStage &, int);

}

// CgsGuiResourceModule.h:48
struct CgsGui::GuiResourceModule : public CgsModule::ModuleSingleBuffered {
private:
	// CgsGuiResourceModule.h:129
	extern const int32_t KI_RESOURCE_RECEIVER_QUEUE = 8192;

	// CgsGuiResourceModule.h:130
	extern const int32_t KI_MAX_BUNDLES_TO_LOAD = 64;

	// CgsGuiResourceModule.h:131
	extern const int32_t KI_MAX_RESOURCES_WITHOUT_WAITING = 5;

	// CgsGuiResourceModule.h:132
	CgsGui::GuiResourceModule::EPrepareStage mePrepareStage;

	// CgsGuiResourceModule.h:133
	CgsGui::GuiResourceModule::EReleaseStage meReleaseStage;

	// CgsGuiResourceModule.h:135
	CgsGui::GuiResourceModule::EAcquireStage meAcquireStage;

	// CgsGuiResourceModule.h:136
	CgsGui::GuiResourceModule::EAcquireStage meAfterWaitStage;

	// CgsGuiResourceModule.h:139
	int32_t miAptPersistentBundleBank;

	// CgsGuiResourceModule.h:140
	int32_t miAptStreamedBundleBank;

	// CgsGuiResourceModule.h:141
	int32_t miFontBundleBank;

	// CgsGuiResourceModule.h:142
	int32_t miFSMBundleBank;

	// CgsGuiResourceModule.h:143
	int32_t miLanguageBundleBank;

	// CgsGuiResourceModule.h:144
	int32_t miTexturesBundlePoolId;

	// CgsGuiResourceModule.h:145
	int32_t miGlobalTexturePoolId;

	// CgsGuiResourceModule.h:147
	int32_t mNumWaitingResourceAllocations;

	// CgsGuiResourceModule.h:166
	int32_t miNumBundlesToLoad;

	// CgsGuiResourceModule.h:167
	int32_t miNumPendingResources;

	// CgsGuiResourceModule.h:168
	CgsGui::GuiResourceModule::GuiBundleToLoad[64] maBundlesToLoad;

	// CgsGuiResourceModule.h:169
	CgsGui::GuiResourceModule::GuiBundleToLoad[5] maBundlesPending;

	// CgsGuiResourceModule.h:170
	bool mbHighDef;

	// CgsGuiResourceModule.h:173
	EventReceiverQueue<8192,16> mReceiverQueue;

public:
	// CgsGuiResourceModule.cpp:96
	virtual void Construct(bool);

	// CgsGuiResourceModule.cpp:132
	virtual bool Prepare(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);

	// CgsGuiResourceModule.cpp:207
	virtual bool Release();

	// CgsGuiResourceModule.cpp:256
	virtual void Destruct();

	// CgsGuiResourceModule.cpp:422
	virtual void Update(InputBuffer *, OutputBuffer *);

	// CgsGuiResourceModule.h:253
	const OutputBuffer::GuiResourceRequestQueue * GetResourceRequestQueue(const OutputBuffer *) const;

	// CgsGuiResourceModule.h:294
	void AddResourceRequests(const GuiEventQueueSmall *, InputBuffer *);

	// CgsGuiResourceModule.h:309
	const InputBuffer::GuiEventQueue * GetLoadedNotifications(const OutputBuffer *) const;

private:
	// CgsGuiResourceModule.cpp:730
	int32_t SortBundleQueue(const void *, const void *);

	// CgsGuiResourceModule.cpp:690
	void ProcessIncomingLoadRequests(InputBuffer *);

	// CgsGuiResourceModule.cpp:758
	void AddToBundleLoadQueue(const GuiEventLoadRequest *);

	// CgsGuiResourceModule.cpp:923
	bool IsBundleQueuedToLoad();

	// CgsGuiResourceModule.cpp:945
	CgsGui::GuiResourceModule::GuiBundleToLoad PopFromBundleLoadQueue();

	// CgsGuiResourceModule.cpp:965
	void LoadBundle(CgsGui::GuiResourceModule::GuiBundleToLoad &, OutputBuffer *);

	// CgsGuiResourceModule.cpp:1002
	void UnloadBundle(CgsGui::GuiResourceModule::GuiBundleToLoad &, OutputBuffer *);

	// CgsGuiResourceModule.cpp:1046
	void RequestResource(CgsGui::GuiResourceModule::GuiBundleToLoad &, OutputBuffer *);

	// CgsGuiResourceModule.h:271
	bool HasPendingResourceRequests(OutputBuffer *);

	// CgsGuiResourceModule.cpp:274
	void LoadBundleForMissingResources(OutputBuffer *);

	// CgsGuiResourceModule.cpp:299
	void ParseForAcquiredResources();

	// CgsGuiResourceModule.cpp:362
	void ParseUnloaded();

}


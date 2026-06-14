// CgsGuiShared.h:40
namespace CgsGui {
	// Declaration
	struct ModelModule {
		// CgsModelModule.h:182
		extern int32_t miUpdateInputPM;

		// CgsModelModule.h:183
		extern int32_t miUpdateMainPM;

		// CgsModelModule.h:184
		extern int32_t miUpdateOutputPM;

	}

}

// CgsModelModule.h:182
extern int32_t miUpdateInputPM;

// CgsModelModule.h:183
extern int32_t miUpdateMainPM;

// CgsModelModule.h:184
extern int32_t miUpdateOutputPM;

// CgsModelModule.h:54
void CgsGui::ModelModule::~ModelModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsModelModule.h:54
void CgsGui::ModelModule::ModelModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct ModelModule {
		// CgsModelModule.h:57
		enum ModelPrepareStage {
			E_PREPARE_START = 0,
			E_PREPARE_MANAGER = 1,
			E_PREPARE_EVENT_INTERPRETER = 2,
			E_PREPARE_RESOURCE_MANAGER = 3,
			E_PREPARE_DONE = 4,
		}

		// CgsModelModule.h:69
		enum ModelReleaseStage {
			E_RELEASE_START = 0,
			E_RELEASE_MANAGER = 1,
			E_RELEASE_EVENT_INTERPRETER = 2,
			E_RELEASE_RESOURCE_MANAGER = 3,
			E_RELEASE_DONE = 4,
		}

	}

	// CgsModelModule.h:229
	extern CgsGui::ModelModule::ModelReleaseStage operator++(CgsGui::ModelModule::ModelReleaseStage &, int);

}

// CgsModelModule.h:54
struct CgsGui::ModelModule : public CgsModule::ModuleSingleBuffered {
	// CgsModelModule.cpp:38
	extern int32_t miUpdateInputPM;

	// CgsModelModule.cpp:39
	extern int32_t miUpdateMainPM;

	// CgsModelModule.cpp:40
	extern int32_t miUpdateOutputPM;

private:
	// CgsModelModule.h:189
	CgsGui::ModelModule::ModelPrepareStage mePrepareStage;

	// CgsModelModule.h:190
	CgsGui::ModelModule::ModelReleaseStage meReleaseStage;

	// CgsModelModule.h:193
	EventInterpreterModule mEventInterpreter;

	// CgsModelModule.h:194
	GuiResourceModule mGuiResource;

public:
	// CgsModelModule.cpp:55
	virtual void Construct(bool);

	// CgsModelModule.cpp:85
	virtual bool Prepare(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t);

	// CgsModelModule.cpp:161
	virtual bool Release();

	// CgsModelModule.cpp:226
	virtual void Destruct();

	// CgsModelModule.cpp:245
	virtual void PreWorldUpdate(IOBufferStack *, IOBufferStack *, OutputBuffer *);

	// CgsModelModule.cpp:289
	virtual void Update(IOBufferStack *, IOBufferStack *, InputBuffer *, OutputBuffer *);

	// CgsModelModule.cpp:516
	void AddGuiEventObserver(CgsGui::EventObserver *, int32_t);

	// CgsModelModule.cpp:538
	bool RegisterGuiPriorityObserver(CgsGui::EventObserver *, int32_t, int32_t *, uint32_t);

	// CgsModelModule.cpp:557
	bool UnregisterGuiPriorityObserver(CgsGui::EventObserver *, int32_t);

	// CgsModelModule.cpp:574
	bool StopGuiPriorityObserverBlocking(CgsGui::EventObserver *);

	// CgsModelModule.cpp:371
	void AddGuiEvents(const InputBuffer::GuiEventQueue *, InputBuffer *);

	// CgsModelModule.cpp:390
	void AddGuiEvents(const InputBuffer::GuiEventInputQueue *, InputBuffer *);

	// CgsModelModule.h:246
	void AddResourceRequest(GuiEventLoadRequest &, InputBuffer *);

	// CgsModelModule.h:259
	const GuiEventQueueSmall * GetLoadRequests(const InputBuffer *) const;

	// CgsModelModule.h:272
	const InputBuffer::GuiEventQueue * GetOutEventQueue(OutputBuffer *) const;

	// CgsModelModule.h:285
	const GuiStackEventQueue::GuiEventQueueLarge * GetOutViewQueue(OutputBuffer *) const;

	// CgsModelModule.h:298
	const GuiEventQueueSmall * GetLoadNotifications(const OutputBuffer *) const;

private:
	// CgsModelModule.cpp:409
	void BridgeInEventInterpreter(InputBuffer *, const InputBuffer *);

	// CgsModelModule.cpp:435
	void BridgeInGuiResource(InputBuffer *, const InputBuffer *);

	// CgsModelModule.cpp:452
	void BridgeEventInterpreterToGuiResource(InputBuffer *, const OutputBuffer *);

	// CgsModelModule.cpp:469
	void BridgeOutEventInterpreter(OutputBuffer *, const OutputBuffer *);

	// CgsModelModule.cpp:489
	void BridgeOutGuiResource(OutputBuffer *, const OutputBuffer *);

}


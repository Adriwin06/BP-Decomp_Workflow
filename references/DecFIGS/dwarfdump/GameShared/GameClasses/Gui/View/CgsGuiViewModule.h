// CgsGuiViewModule.h:231
extern const int32_t KI_NUM_MOVIE_LEVELS = 9;

// CgsGuiViewModule.h:277
extern const int32_t KI_MOVIE_NAME_LEN = 32;

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct ViewModule {
		// CgsGuiViewModule.h:231
		extern const int32_t KI_NUM_MOVIE_LEVELS = 9;

	private:
		// CgsGuiViewModule.h:277
		extern const int32_t KI_MOVIE_NAME_LEN = 32;

	}

}

// CgsGuiShared.h:40
namespace CgsGui {
	// Declaration
	struct ViewModule {
	public:
		// CgsGuiViewModule.h:546
		CgsGui::AptAux * GetAptAuxInstance();

		// CgsGuiViewModule.h:449
		CgsLanguage::LanguageManager * GetLanguageManager();

		// CgsGuiViewModule.h:216
		CgsGui::AptAux * GetAptAux();

		// CgsGuiViewModule.h:372
		void SetCustomRendererManager(CgsGui::CustomRendererManager *, int32_t);

		// CgsGuiViewModule.h:493
		const char * GetMovieNameByLevel(int32_t);

		// Unknown accessibility
		// CgsGuiViewModule.h:231
		extern const int32_t KI_NUM_MOVIE_LEVELS = 9;

		// Unknown accessibility
		// CgsGuiViewModule.h:236
		extern int32_t miAptAuxUpdatePM;

		// Unknown accessibility
		// CgsGuiViewModule.h:237
		extern int32_t miViewProcessIncomingEventsPM;

	private:
		// CgsGuiViewModule.h:277
		extern const int32_t KI_MOVIE_NAME_LEN = 32;

	}

}

// CgsGuiViewModule.h:236
extern int32_t miAptAuxUpdatePM;

// CgsGuiViewModule.h:237
extern int32_t miViewProcessIncomingEventsPM;

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct ViewModule {
	public:
		ViewModule();

		~ViewModule();

		// Unknown accessibility
		// CgsGuiViewModule.h:231
		extern const int32_t KI_NUM_MOVIE_LEVELS = 9;

	private:
		// CgsGuiViewModule.h:277
		extern const int32_t KI_MOVIE_NAME_LEN = 32;

	}

}

// CgsGuiViewModule.h:67
void CgsGui::ViewModule::ViewModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiViewModule.h:67
void CgsGui::ViewModule::~ViewModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct ViewModule {
		// CgsGuiViewModule.h:70
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_LANGUAGE = 2,
			E_PREPARESTAGE_MOVIE = 3,
			E_PREPARESTAGE_APT = 4,
			E_PREPARESTAGE_DONE = 5,
		}

		// CgsGuiViewModule.h:82
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_APT = 1,
			E_RELEASESTAGE_MOVIE = 2,
			E_RELEASESTAGE_LANGUAGE = 3,
			E_RELEASESTAGE_MANAGER = 4,
			E_RELEASESTAGE_DONE = 5,
		}

	}

	// CgsGuiViewModule.h:339
	extern CgsGui::ViewModule::EReleaseStage operator++(CgsGui::ViewModule::EReleaseStage &, int);

}

// CgsGuiViewModule.h:67
struct CgsGui::ViewModule : public CgsModule::ModuleSingleBuffered {
	// CgsGuiViewModule.h:96
	bool mbUpdateFlash;

	// CgsGuiViewModule.h:231
	extern const int32_t KI_NUM_MOVIE_LEVELS = 9;

	// CgsGuiViewModule.cpp:30
	extern int32_t miAptAuxUpdatePM;

	// CgsGuiViewModule.cpp:31
	extern int32_t miViewProcessIncomingEventsPM;

protected:
	// CgsGuiViewModule.h:243
	float32_t mfHack_LastValidTimeStep;

	// CgsGuiViewModule.h:244
	float32_t mfCurrentTime;

	// CgsGuiViewModule.h:245
	float32_t mfLastUpdateTime;

	// CgsGuiViewModule.h:246
	float32_t mfLastRenderTime;

	// CgsGuiViewModule.h:247
	float32_t mfUpdateTimeDelta;

	// CgsGuiViewModule.h:248
	float32_t mfRenderTimeDelta;

	// CgsGuiViewModule.h:250
	ImRendererSet mImRenderers;

	// CgsGuiViewModule.h:253
	TextRenderer mTextRenderer;

	// CgsGuiViewModule.h:254
	FontCollection mFonts;

	// CgsGuiViewModule.h:257
	LanguageManager mLanguageManager;

	// CgsGuiViewModule.h:259
	GuiEventQueueTiny mOutputEventQueue;

private:
	// CgsGuiViewModule.h:277
	extern const int32_t KI_MOVIE_NAME_LEN = 32;

	// CgsGuiViewModule.h:279
	CgsGui::ViewModule::EPrepareStage mePrepareStage;

	// CgsGuiViewModule.h:280
	CgsGui::ViewModule::EReleaseStage meReleaseStage;

	// CgsGuiViewModule.h:282
	const char * mpcLoadingMovieName;

	// CgsGuiViewModule.h:283
	int32_t miLoadingScreenLevel;

	// CgsGuiViewModule.h:284
	char[9][32] macCurrentlyPlayingMovies;

	// CgsGuiViewModule.h:286
	bool mbClearScreenEnabled;

	// CgsGuiViewModule.h:287
	float32_t mfClearScreenAlpha;

	// CgsGuiViewModule.h:291
	CgsGui::CustomRendererManager * mpCustomRendererManager;

	// CgsGuiViewModule.h:295
	AptAux mAptAux;

public:
	// CgsGuiViewModule.cpp:57
	virtual void Construct(const char *, int32_t, float32_t, const RGBA *, int32_t);

	// CgsGuiViewModule.cpp:146
	virtual bool Prepare(HeapMalloc *, rw::IResourceAllocator *, HeapMalloc *, LinearMalloc *);

	// CgsGuiViewModule.cpp:220
	virtual bool Release();

	// CgsGuiViewModule.cpp:303
	virtual void Destruct();

	// CgsGuiViewModule.cpp:328
	virtual void Update(IOBufferStack *, IOBufferStack *, const InputBuffer *, OutputBuffer *);

	// CgsGuiViewModule.cpp:820
	void Render(const InputBuffer *);

	// CgsGuiViewModule.cpp:1042
	void AddNewAptDataHeader(AptDataHeader *);

	// CgsGuiViewModule.cpp:1060
	void RemoveAptDataHeader(uint32_t);

	// CgsGuiViewModule.h:355
	void SetImRenderers(const ImRendererSet &, InputBuffer *);

	// CgsGuiViewModule.h:372
	void SetCustomRendererManager(CgsGui::CustomRendererManager *, int32_t);

	// CgsGuiViewModule.h:394
	CgsGui::CustomRendererManager * GetCustomRendererManager();

	// CgsGuiViewModule.h:409
	const InputBuffer::GuiEventQueue & GetOutputEvents(const OutputBuffer *) const;

	// CgsGuiViewModule.h:427
	InputBuffer::GuiEventQueue * GetAptTriggerEvents();

	// CgsGuiViewModule.h:449
	LanguageManager * GetLanguageManager();

	// CgsGuiViewModule.h:463
	void SetClearScreenEnabled(bool);

	// CgsGuiViewModule.h:477
	void SetClearScreenAlpha(float32_t);

	// CgsGuiViewModule.h:493
	const char * GetMovieNameByLevel(int32_t);

	// CgsGuiViewModule.h:531
	GuiEventQueueTiny * GetOutputEventQueue();

	// CgsGuiViewModule.h:216
	CgsGui::AptAux * GetAptAux();

	// CgsGuiViewModule.h:546
	CgsGui::AptAux * GetAptAuxInstance();

protected:
	// CgsGuiViewModule.cpp:896
	virtual void RenderInternal(const InputBuffer *);

	// CgsGuiViewModule.cpp:852
	void RenderBlackScreen();

	// CgsGuiViewModule.cpp:757
	// Declaration
	virtual void ProcessIncomingLoadNotification(const CgsModule::Event *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsGuiViewModule.cpp:773
		using namespace CgsDev::Message;

	}

private:
	// CgsGuiViewModule.cpp:474
	void ProcessIncomingViewEvents(const GuiStackEventQueue::GuiEventQueueLarge *, OutputBuffer *);

	// CgsGuiViewModule.cpp:386
	void ProcessIncomingAptEvent(const CgsModule::Event *, int32_t, int32_t);

	// CgsGuiViewModule.cpp:621
	void ProcessIncomingLanguageEvent(const CgsModule::Event *, int32_t, int32_t, OutputBuffer *);

	// CgsGuiViewModule.h:513
	void ProcessIncomingCustomRenderEvent(const CgsModule::Event *, int32_t, int32_t);

	// CgsGuiViewModule.cpp:721
	void ProcessIncomingUnloadRequestNotification(const CgsModule::Event *);

	// CgsGuiViewModule.cpp:1097
	// Declaration
	void AddFont(SafeResourceHandle<CgsResource::Font> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsGuiViewModule.cpp:1100
		using namespace CgsDev::Message;

	}

}

// CgsGuiViewModule.h:165
extern void AddViewState<32768, 16>(const GuiEventQueueBase<32768,16> *  lpGuiViewStateQueue, InputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::ViewIO::InputBuffer::GetViewStateQueue(/* parameters */);
	AppendGuiQueueSafe<32768, 16>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsGuiViewModule.cpp:1084
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsGuiViewModule.cpp:1082
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsGuiViewModule.h:165
extern void AddViewState<65536, 16>(const GuiEventQueueBase<65536,16> *  lpGuiViewStateQueue, InputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGui::ViewIO::InputBuffer::GetViewStateQueue(/* parameters */);
	AppendGuiQueueSafe<65536, 16>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsGuiViewModule.cpp:1084
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsGuiViewModule.cpp:1082
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}


// BrnGuiOverlaysDirector.h:43
struct BrnGui::GuiOverlaysDirector {
private:
	// BrnGuiOverlaysDirector.h:64
	const PopupController * mpController;

	// BrnGuiOverlaysDirector.h:65
	InputBuffer * mpGuiInputBuffer;

	// BrnGuiOverlaysDirector.h:66
	CgsGui::ModelModule * mpModelModule;

	// BrnGuiOverlaysDirector.h:67
	GuiOverlayFullInfoResponse mCurrentOverlay;

	// BrnGuiOverlaysDirector.h:68
	GuiOverlayFullInfoResponse mBufferedOverlay;

	// BrnGuiOverlaysDirector.h:69
	InputBuffer::GuiEventQueue mOutputQueue;

	// BrnGuiOverlaysDirector.h:70
	BrnGui::GuiCache * mpGuiCache;

	// BrnGuiOverlaysDirector.h:72
	bool mbInOverlay;

	// BrnGuiOverlaysDirector.h:74
	CgsID mWaitEndRequestId;

	// BrnGuiOverlaysDirector.h:75
	bool mbIsWaitRequestValid;

	// BrnGuiOverlaysDirector.h:77
	int32_t miFramesToShowEnteringOnline;

public:
	// BrnGuiOverlaysDirector.h:48
	void Construct(CgsGui::ModelModule *);

	// BrnGuiOverlaysDirector.h:52
	void Update(InputBuffer *);

	// BrnGuiOverlaysDirector.h:56
	void BridgeOutEvents(InputBuffer *);

	// BrnGuiOverlaysDirector.h:60
	void SetController(const PopupController *);

private:
	// BrnGuiOverlaysDirector.h:81
	// Declaration
	void HandleOverlayRequest(const GuiOverlayRequest *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnGuiOverlaysDirector.cpp:264
		using namespace CgsDev::Message;

	}

	// BrnGuiOverlaysDirector.h:85
	void HandleOverlayFullInfoRequest();

	// BrnGuiOverlaysDirector.h:89
	void HandleWaitFinishRequest(const GuiOverlayWaitFinishRequest *);

	// BrnGuiOverlaysDirector.h:93
	void HandleOverlayShowingNotification(const GuiOverlayShowingNotification *);

	// BrnGuiOverlaysDirector.h:99
	void SetUpOverlayInfo(GuiOverlayFullInfoResponse *, const GuiOverlayRequest *);

	// BrnGuiOverlaysDirector.h:103
	void StartCurrentOverlay();

	// BrnGuiOverlaysDirector.h:107
	void HandleShowFreeBurnIntroRequest(const GuiEventNetworkShowFreeBurnIntro *);

}

// BrnGuiOverlaysDirector.h:43
struct BrnGui::GuiOverlaysDirector {
private:
	// BrnGuiOverlaysDirector.h:64
	const PopupController * mpController;

	// BrnGuiOverlaysDirector.h:65
	InputBuffer * mpGuiInputBuffer;

	// BrnGuiOverlaysDirector.h:66
	CgsGui::ModelModule * mpModelModule;

	// BrnGuiOverlaysDirector.h:67
	GuiOverlayFullInfoResponse mCurrentOverlay;

	// BrnGuiOverlaysDirector.h:68
	GuiOverlayFullInfoResponse mBufferedOverlay;

	// BrnGuiOverlaysDirector.h:69
	InputBuffer::GuiEventQueue mOutputQueue;

	// BrnGuiOverlaysDirector.h:70
	BrnGui::GuiCache * mpGuiCache;

	// BrnGuiOverlaysDirector.h:72
	bool mbInOverlay;

	// BrnGuiOverlaysDirector.h:74
	CgsID mWaitEndRequestId;

	// BrnGuiOverlaysDirector.h:75
	bool mbIsWaitRequestValid;

	// BrnGuiOverlaysDirector.h:77
	int32_t miFramesToShowEnteringOnline;

public:
	// BrnGuiOverlaysDirector.h:48
	void Construct(CgsGui::ModelModule *);

	// BrnGuiOverlaysDirector.h:52
	void Update(InputBuffer *);

	// BrnGuiOverlaysDirector.h:56
	void BridgeOutEvents(InputBuffer *);

	// BrnGuiOverlaysDirector.h:60
	void SetController(const PopupController *);

private:
	// BrnGuiOverlaysDirector.h:81
	void HandleOverlayRequest(const GuiOverlayRequest *);

	// BrnGuiOverlaysDirector.h:85
	void HandleOverlayFullInfoRequest();

	// BrnGuiOverlaysDirector.h:89
	void HandleWaitFinishRequest(const GuiOverlayWaitFinishRequest *);

	// BrnGuiOverlaysDirector.h:93
	void HandleOverlayShowingNotification(const GuiOverlayShowingNotification *);

	// BrnGuiOverlaysDirector.h:99
	void SetUpOverlayInfo(GuiOverlayFullInfoResponse *, const GuiOverlayRequest *);

	// BrnGuiOverlaysDirector.h:103
	void StartCurrentOverlay();

	// BrnGuiOverlaysDirector.h:107
	void HandleShowFreeBurnIntroRequest(const GuiEventNetworkShowFreeBurnIntro *);

}


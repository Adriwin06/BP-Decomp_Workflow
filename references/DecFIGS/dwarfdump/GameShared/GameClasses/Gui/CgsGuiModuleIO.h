// CgsGuiModuleIO.h:140
struct CgsGui::CgsGuiModuleIO::OutputBuffer : public IOBuffer {
private:
	// CgsGuiModuleIO.h:205
	OutputBuffer::GuiResourceRequestQueue mResourceRequestQueue;

	// CgsGuiModuleIO.h:207
	InputBuffer::GuiEventQueue mOutEvents;

	// CgsGuiModuleIO.h:209
	InputBuffer::GameActionQueue mGameActionQueue;

public:
	// CgsGuiModuleIO.h:145
	void Construct();

	// CgsGuiModuleIO.h:149
	void Destruct();

	// CgsGuiModuleIO.h:153
	void Clear();

	// CgsGuiModuleIO.h:158
	void SetGuiResourceRequestQueue(const OutputBuffer::GuiResourceRequestQueue *);

	// CgsGuiModuleIO.h:162
	const OutputBuffer::GuiResourceRequestQueue * GetGuiResourceRequestQueue() const;

	// CgsGuiModuleIO.h:165
	OutputBuffer::GuiResourceRequestQueue * GetGuiResourceRequestQueue();

	// CgsGuiModuleIO.h:174
	void AddGuiOutEvents(const InputBuffer::GuiEventQueue *);

	// CgsGuiModuleIO.h:178
	void AddGuiOutEvents(const GuiEventQueueSmall *);

	// CgsGuiModuleIO.h:182
	// Declaration
	void AddGuiOutEvents(const GuiEventQueueTiny *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsGuiEvent.h:189
		typedef CgsGui::GuiEventQueueBase<256,16> GuiEventQueueTiny;

	}

	// CgsGuiModuleIO.h:186
	const InputBuffer::GuiEventQueue * GetOutEventQueue() const;

	// CgsGuiModuleIO.h:189
	const InputBuffer::GameActionQueue * GetGameActionQueue() const;

	// CgsGuiModuleIO.h:192
	InputBuffer::GameActionQueue * GetGameActionQueue();

}

// CgsGuiModuleIO.h:61
struct CgsGui::CgsGuiModuleIO::InputBuffer : public IOBuffer {
private:
	// CgsGuiModuleIO.h:118
	InputBuffer::GuiEventInputQueue mInputQueue;

	// CgsGuiModuleIO.h:120
	ImRendererSet mRendererSet;

	// CgsGuiModuleIO.h:123
	void * mpSnapShotBuffer;

public:
	// CgsGuiModuleIO.h:66
	void Construct();

	// CgsGuiModuleIO.h:70
	void Destruct();

	// CgsGuiModuleIO.h:74
	const InputBuffer::GuiEventInputQueue * GetGuiEvents() const;

	// CgsGuiModuleIO.h:78
	InputBuffer::GuiEventInputQueue * GetGuiEvents();

	// CgsGuiModuleIO.h:82
	const ImRendererSet & GetImRenderers() const;

	// CgsGuiModuleIO.h:92
	void SetImRenderers(const ImRendererSet &);

	// CgsGuiModuleIO.h:96
	void SetCamera(Camera &);

	// CgsGuiModuleIO.h:100
	Camera * GetCamera();

	// CgsGuiModuleIO.h:110
	void SetSnapShotBuffer(void *);

	// CgsGuiModuleIO.h:114
	void * GetSnapShotBuffer();

}

// CgsGuiModuleIO.h:140
struct CgsGui::CgsGuiModuleIO::OutputBuffer : public IOBuffer {
private:
	// CgsGuiModuleIO.h:205
	OutputBuffer::GuiResourceRequestQueue mResourceRequestQueue;

	// CgsGuiModuleIO.h:207
	InputBuffer::GuiEventQueue mOutEvents;

	// Unknown accessibility
	// BrnGameActions.h:512
	typedef BaseGameActionQueue<13312> GameActionQueue;

	// CgsGuiModuleIO.h:209
	OutputBuffer::GameActionQueue mGameActionQueue;

public:
	// CgsGuiModuleIO.h:145
	void Construct();

	// CgsGuiModuleIO.h:149
	void Destruct();

	// CgsGuiModuleIO.h:153
	void Clear();

	// CgsGuiModuleIO.h:158
	void SetGuiResourceRequestQueue(const OutputBuffer::GuiResourceRequestQueue *);

	// CgsGuiModuleIO.h:162
	const OutputBuffer::GuiResourceRequestQueue * GetGuiResourceRequestQueue() const;

	// CgsGuiModuleIO.h:165
	OutputBuffer::GuiResourceRequestQueue * GetGuiResourceRequestQueue();

	// CgsGuiModuleIO.h:174
	void AddGuiOutEvents(const InputBuffer::GuiEventQueue *);

	// CgsGuiModuleIO.h:178
	void AddGuiOutEvents(const GuiEventQueueSmall *);

	// CgsGuiModuleIO.h:182
	// Declaration
	void AddGuiOutEvents(const GuiEventQueueTiny *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsGuiEvent.h:189
		typedef CgsGui::GuiEventQueueBase<256,16> GuiEventQueueTiny;

	}

	// CgsGuiModuleIO.h:186
	const InputBuffer::GuiEventQueue * GetOutEventQueue() const;

	// CgsGuiModuleIO.h:189
	const OutputBuffer::GameActionQueue * GetGameActionQueue() const;

	// CgsGuiModuleIO.h:192
	OutputBuffer::GameActionQueue * GetGameActionQueue();

}

// CgsGuiModuleIO.h:233
extern void AddGuiOutEvent<BrnGui::GuiOptionsBrightnessContrastPostFxControl>(const GuiOptionsBrightnessContrastPostFxControl &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModuleIO.h:235
		CgsDev::StrStream lStrStream;

	}
}

// CgsGuiModuleIO.h:233
extern void AddGuiOutEvent<BrnGui::CalculateRoute>(const CalculateRoute &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModuleIO.h:235
		CgsDev::StrStream lStrStream;

	}
}

// CgsGuiModuleIO.h:233
extern void AddGuiOutEvent<BrnGui::GuiOverlayRequest>(const GuiOverlayRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModuleIO.h:235
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AddGuiEvent<BrnGui::GuiOverlayRequest>(/* parameters */);
}

// CgsGuiModuleIO.h:233
extern void AddGuiOutEvent<BrnGui::GuiEndGameEvent>(const GuiEndGameEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnGuiEventTypeDefs.h:874
	typedef GuiEvent<90> GuiEndGameEvent;

	{
		// CgsGuiModuleIO.h:235
		CgsDev::StrStream lStrStream;

	}
}

// CgsGuiModuleIO.h:233
extern void AddGuiOutEvent<BrnGui::GuiEventRequestCollisionWorldEvent>(const GuiEventRequestCollisionWorldEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModuleIO.h:235
		CgsDev::StrStream lStrStream;

	}
}

// CgsGuiModuleIO.h:233
extern void AddGuiOutEvent<BrnGui::GuiPFXHookEnumeration>(const GuiPFXHookEnumeration &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModuleIO.h:235
		CgsDev::StrStream lStrStream;

	}
}

// CgsGuiModuleIO.h:233
extern void AddGuiOutEvent<BrnGui::GuiAudioTriggerEvent>(const GuiAudioTriggerEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModuleIO.h:235
		CgsDev::StrStream lStrStream;

	}
}

// CgsGuiModuleIO.h:233
extern void AddGuiOutEvent<BrnGui::GuiEventKeyboardResponse>(const GuiEventKeyboardResponse &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModuleIO.h:235
		CgsDev::StrStream lStrStream;

	}
}

// CgsGuiModuleIO.h:233
extern void AddGuiOutEvent<BrnGui::GuiOverlayWaitFinishRequest>(const GuiOverlayWaitFinishRequest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModuleIO.h:235
		CgsDev::StrStream lStrStream;

	}
}

// CgsGuiModuleIO.h:233
extern void AddGuiOutEvent<BrnGui::GuiNewBurnoutHudMessageEvent>(const GuiNewBurnoutHudMessageEvent &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModuleIO.h:235
		CgsDev::StrStream lStrStream;

	}
}

// CgsGuiModuleIO.h:233
extern void AddGuiOutEvent<BrnGui::GuiEventRequestTraining>(const GuiEventRequestTraining &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModuleIO.h:235
		CgsDev::StrStream lStrStream;

	}
}

// CgsGuiModuleIO.h:233
extern void AddGuiOutEvent<CgsGui::GuiEventGetLanguage>(const GuiEventGetLanguage &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModuleIO.h:235
		CgsDev::StrStream lStrStream;

	}
}

// CgsGuiModuleIO.h:233
extern void AddGuiOutEvent<CgsGui::GuiEventPlayMusicOnMenuStream>(const GuiEventPlayMusicOnMenuStream &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModuleIO.h:235
		CgsDev::StrStream lStrStream;

	}
}

// CgsGuiModuleIO.h:233
extern void AddGuiOutEvent<CgsGui::GuiEventSetCircleButtonConfig>(const GuiEventSetCircleButtonConfig &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModuleIO.h:235
		CgsDev::StrStream lStrStream;

	}
}

// CgsGuiModuleIO.h:233
extern void AddGuiOutEvent<CgsGui::GuiEventSetSku>(const GuiEventSetSku &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModuleIO.h:235
		CgsDev::StrStream lStrStream;

	}
}

// CgsGuiModuleIO.h:233
extern void AddGuiOutEvent<CgsGui::GuiEventSetLanguageNotification>(const GuiEventSetLanguageNotification &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGuiModuleIO.h:235
		CgsDev::StrStream lStrStream;

	}
}


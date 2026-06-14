// BrnReplayModuleIO.h:60
struct BrnReplays::ReplayIO::InputBuffer_PreSim : public IOBuffer {
private:
	// BrnReplayModuleIO.h:82
	InputBuffer::GameActionQueue mGameActionQueue;

	// Unknown accessibility
	// BrnReplayModuleIO.h:46
	typedef PadOutputInformation InputPadInformation;

	// BrnReplayModuleIO.h:83
	InputBuffer_PreSim::InputPadInformation mPadInput;

	// BrnReplayModuleIO.h:84
	TimerStatusInterface mTimerStatusInterface;

public:
	// BrnReplayModuleIO.h:65
	void Construct();

	// BrnReplayModuleIO.h:69
	void Destruct();

	// BrnReplayModuleIO.h:71
	const InputBuffer::GameActionQueue * GetGameActionQueue() const;

	// BrnReplayModuleIO.h:72
	void AppendGameActionQueue(const InputBuffer::GameActionQueue *);

	// BrnReplayModuleIO.h:74
	const InputBuffer_PreSim::InputPadInformation * GetPadInput() const;

	// BrnReplayModuleIO.h:75
	void SetPadInput(const InputBuffer_PreSim::InputPadInformation *);

	// BrnReplayModuleIO.h:77
	const TimerStatusInterface * GetTimerStatusInterface() const;

	// BrnReplayModuleIO.h:78
	void SetTimerStatusInterface(const TimerStatusInterface *);

}

// BrnReplayModuleIO.h:96
struct BrnReplays::ReplayIO::OutputBuffer_PreSim : public IOBuffer {
private:
	// BrnReplayModuleIO.h:119
	StatusInterface mStatusInterface;

	// Unknown accessibility
	// BrnReplayModuleIO.h:45
	typedef RequestInterface<1024> GameDataRequestInterface;

	// BrnReplayModuleIO.h:120
	OutputBuffer_PreSim::GameDataRequestInterface mGameDataRequestInterface;

	// Unknown accessibility
	// BrnReplayModuleIO.h:47
	typedef GuiEventQueueSmall GuiEventQueue;

	// BrnReplayModuleIO.h:121
	OutputBuffer_PreSim::GuiEventQueue mGuiEventQueue;

public:
	// BrnReplayModuleIO.h:101
	void Construct();

	// BrnReplayModuleIO.h:105
	void Destruct();

	// BrnReplayModuleIO.h:107
	const StatusInterface * GetStatusInterface() const;

	// BrnReplayModuleIO.h:108
	StatusInterface * GetStatusInterface();

	// BrnReplayModuleIO.h:109
	void SetStatusInterface(const StatusInterface *);

	// BrnReplayModuleIO.h:111
	const OutputBuffer_PreSim::GameDataRequestInterface * GetGameDataRequestInterface() const;

	// BrnReplayModuleIO.h:112
	OutputBuffer_PreSim::GameDataRequestInterface * GetGameDataRequestInterface();

	// BrnReplayModuleIO.h:114
	const OutputBuffer_PreSim::GuiEventQueue * GetGuiEventQueue() const;

	// BrnReplayModuleIO.h:115
	OutputBuffer_PreSim::GuiEventQueue * GetGuiEventQueue();

}

// BrnReplayModuleIO.h:134
struct BrnReplays::ReplayIO::InputBuffer_PostSim : public IOBuffer {
private:
	// BrnReplayModuleIO.h:154
	RequestInterface mRequestInterface;

	// BrnReplayModuleIO.h:155
	OutputBuffer_PreSim::GuiEventQueue mGuiEventQueue;

public:
	// BrnReplayModuleIO.h:139
	void Construct();

	// BrnReplayModuleIO.h:143
	void Destruct();

	// BrnReplayModuleIO.h:145
	const RequestInterface * GetRequestInterface() const;

	// BrnReplayModuleIO.h:146
	RequestInterface * GetRequestInterface();

	// BrnReplayModuleIO.h:147
	void AppendRequestInterface(const RequestInterface *);

	// BrnReplayModuleIO.h:149
	const OutputBuffer_PreSim::GuiEventQueue * GetGuiEventQueue() const;

	// BrnReplayModuleIO.h:150
	OutputBuffer_PreSim::GuiEventQueue * GetGuiEventQueue();

}

// BrnReplayModuleIO.h:168
struct BrnReplays::ReplayIO::OutputBuffer_PostSim : public IOBuffer {
private:
	// BrnReplayModuleIO.h:184
	GameEventQueue mGameEventQueue;

public:
	// BrnReplayModuleIO.h:173
	void Construct();

	// BrnReplayModuleIO.h:177
	void Destruct();

	// BrnReplayModuleIO.h:179
	const GameEventQueue * GetGameEventQueue() const;

	// BrnReplayModuleIO.h:180
	void AppendGameEventQueue(const GameEventQueue *);

}

// BrnReplayModuleIO.h:60
struct BrnReplays::ReplayIO::InputBuffer_PreSim : public IOBuffer {
	// BrnGameActions.h:512
	typedef BaseGameActionQueue<13312> GameActionQueue;

private:
	// BrnReplayModuleIO.h:82
	InputBuffer_PreSim::GameActionQueue mGameActionQueue;

	// Unknown accessibility
	// BrnReplayModuleIO.h:46
	typedef PadOutputInformation InputPadInformation;

	// BrnReplayModuleIO.h:83
	InputBuffer_PreSim::InputPadInformation mPadInput;

	// BrnReplayModuleIO.h:84
	TimerStatusInterface mTimerStatusInterface;

public:
	// BrnReplayModuleIO.h:65
	void Construct();

	// BrnReplayModuleIO.h:69
	void Destruct();

	// BrnReplayModuleIO.h:71
	const InputBuffer_PreSim::GameActionQueue * GetGameActionQueue() const;

	// BrnReplayModuleIO.h:72
	void AppendGameActionQueue(const InputBuffer_PreSim::GameActionQueue *);

	// BrnReplayModuleIO.h:74
	const InputBuffer_PreSim::InputPadInformation * GetPadInput() const;

	// BrnReplayModuleIO.h:75
	void SetPadInput(const InputBuffer_PreSim::InputPadInformation *);

	// BrnReplayModuleIO.h:77
	const TimerStatusInterface * GetTimerStatusInterface() const;

	// BrnReplayModuleIO.h:78
	void SetTimerStatusInterface(const TimerStatusInterface *);

}


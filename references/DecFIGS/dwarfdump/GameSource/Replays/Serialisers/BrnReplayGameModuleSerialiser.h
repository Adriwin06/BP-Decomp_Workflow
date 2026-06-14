// BrnReplayGameModuleSerialiser.h:43
struct BrnReplays::GameModuleStaticLayout {
	// BrnReplayGameModuleSerialiser.h:45
	TimerStatusInterface mTimerStatusInterface;

}

// BrnReplayGameModuleSerialiser.h:57
struct BrnReplays::GameModuleSerialiser : public BaseSerialiser {
public:
	// BrnReplayGameModuleSerialiser.h:61
	void Construct();

	// BrnReplayGameModuleSerialiser.h:64
	void Destruct();

	// BrnReplayGameModuleSerialiser.h:67
	GameModuleStaticLayout * GetStaticLayout();

}


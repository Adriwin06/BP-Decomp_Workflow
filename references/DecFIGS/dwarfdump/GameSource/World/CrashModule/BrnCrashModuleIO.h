// BrnCrashModuleIO.h:63
struct BrnWorld::CrashIO::InputBuffer_PreScene : public IOBuffer {
private:
	// BrnCrashModuleIO.h:99
	TimerStatusInterface mTimerStatusInterface;

	// BrnCrashModuleIO.h:100
	NetworkInputInterface mNetworkInputInterface;

	// Unknown accessibility
	// BrnCrashModuleIO.h:47
	typedef VehicleDriverInputInterface VehicleDriverInterface;

	// BrnCrashModuleIO.h:101
	InputBuffer_PreScene::VehicleDriverInterface mVehicleDriverInterface;

	// Unknown accessibility
	// BrnCrashModuleIO.h:48
	typedef RCEntityActiveRaceCarOutputInterface ActiveRaceCarInterface;

	// BrnCrashModuleIO.h:102
	InputBuffer_PreScene::ActiveRaceCarInterface mActiveRaceCarInterface;

	// Unknown accessibility
	// BrnCrashModuleIO.h:49
	typedef InputBuffer::GameActionQueue GameActionQueue;

	// BrnCrashModuleIO.h:103
	InputBuffer_PreScene::GameActionQueue mGameActionQueue;

	// BrnCrashModuleIO.h:104
	bool mbPlayerPressingBoost;

public:
	// BrnCrashModuleIO.h:68
	void Construct();

	// BrnCrashModuleIO.h:72
	void Destruct();

	// BrnCrashModuleIO.h:75
	const TimerStatusInterface * GetTimerStatusInterface() const;

	// BrnCrashModuleIO.h:76
	void SetTimerStatusInterface(const TimerStatusInterface *);

	// BrnCrashModuleIO.h:78
	const NetworkInputInterface * GetNetworkInputInterface() const;

	// BrnCrashModuleIO.h:79
	void SetNetworkInputInterface(const NetworkInputInterface *);

	// BrnCrashModuleIO.h:81
	const InputBuffer_PreScene::VehicleDriverInterface * GetVehicleDriverInterface() const;

	// BrnCrashModuleIO.h:82
	void SetVehicleDriverInterface(const InputBuffer_PreScene::VehicleDriverInterface *);

	// BrnCrashModuleIO.h:84
	const InputBuffer_PreScene::ActiveRaceCarInterface * GetActiveRaceCarInterface() const;

	// BrnCrashModuleIO.h:85
	void SetActiveRaceCarInterface(const InputBuffer_PreScene::ActiveRaceCarInterface *);

	// BrnCrashModuleIO.h:87
	const InputBuffer_PreScene::GameActionQueue * GetGameActionQueue() const;

	// BrnCrashModuleIO.h:88
	void SetGameActionQueue(const InputBuffer_PreScene::GameActionQueue *);

	// BrnCrashModuleIO.h:92
	void SetPlayerPressingBoost(bool);

	// BrnCrashModuleIO.h:95
	bool GetPlayerPressingBoost() const;

}

// BrnCrashModuleIO.h:118
struct BrnWorld::CrashIO::OutputBuffer_PreScene : public IOBuffer {
private:
	// BrnCrashModuleIO.h:141
	TrafficOutputInterface mTrafficOutputInterface;

	// Unknown accessibility
	// BrnCrashModuleIO.h:46
	typedef VehicleInputInterface VehicleInputInterface;

	// BrnCrashModuleIO.h:142
	OutputBuffer_PreScene::VehicleInputInterface mVehicleInputInterface;

	// BrnCrashModuleIO.h:143
	RaceCarOutputInterface mRaceCarOutputInterface;

public:
	// BrnCrashModuleIO.h:123
	void Construct();

	// BrnCrashModuleIO.h:127
	void Destruct();

	// BrnCrashModuleIO.h:130
	const TrafficOutputInterface * GetTrafficOutputInterface() const;

	// BrnCrashModuleIO.h:131
	TrafficOutputInterface * GetTrafficOutputInterface();

	// BrnCrashModuleIO.h:133
	const OutputBuffer_PreScene::VehicleInputInterface * GetVehicleInputInterface() const;

	// BrnCrashModuleIO.h:134
	OutputBuffer_PreScene::VehicleInputInterface * GetVehicleInputInterface();

	// BrnCrashModuleIO.h:136
	const RaceCarOutputInterface * GetRaceCarOutputInterface() const;

	// BrnCrashModuleIO.h:137
	RaceCarOutputInterface * GetRaceCarOutputInterface();

}

// BrnCrashModuleIO.h:156
struct BrnWorld::CrashIO::InputBuffer_PostPhysics : public IOBuffer {
private:
	// BrnCrashModuleIO.h:179
	TrafficInputInterface mTrafficInputInterface;

	// Unknown accessibility
	// BrnCrashModuleIO.h:45
	typedef VehicleOutputInterface VehicleOutputInterface;

	// BrnCrashModuleIO.h:180
	InputBuffer_PostPhysics::VehicleOutputInterface mVehicleOutputInterface;

	// Unknown accessibility
	// BrnCrashModuleIO.h:44
	typedef VehicleManagerOutputInterface VehicleManagerOutputInterface;

	// BrnCrashModuleIO.h:181
	InputBuffer_PostPhysics::VehicleManagerOutputInterface mVehicleManagerOutputInterface;

public:
	// BrnCrashModuleIO.h:161
	void Construct();

	// BrnCrashModuleIO.h:165
	void Destruct();

	// BrnCrashModuleIO.h:168
	const TrafficInputInterface * GetTrafficInputInterface() const;

	// BrnCrashModuleIO.h:169
	void SetTrafficInputInterface(const TrafficInputInterface *);

	// BrnCrashModuleIO.h:171
	const InputBuffer_PostPhysics::VehicleOutputInterface * GetVehicleOutputInterface() const;

	// BrnCrashModuleIO.h:172
	void SetVehicleOutputInterface(const InputBuffer_PostPhysics::VehicleOutputInterface *);

	// BrnCrashModuleIO.h:174
	const InputBuffer_PostPhysics::VehicleManagerOutputInterface * GetVehicleManagerOutputInterface() const;

	// BrnCrashModuleIO.h:175
	void SetVehicleManagerOutputInterface(const InputBuffer_PostPhysics::VehicleManagerOutputInterface *);

}

// BrnCrashModuleIO.h:195
struct BrnWorld::CrashIO::OutputBuffer_PostPhysics : public IOBuffer {
private:
	// BrnCrashModuleIO.h:215
	NetworkOutputInterface mNetworkOutputInterface;

	// BrnCrashModuleIO.h:216
	GameEventQueue mGameEventQueue;

public:
	// BrnCrashModuleIO.h:200
	void Construct();

	// BrnCrashModuleIO.h:204
	void Destruct();

	// BrnCrashModuleIO.h:207
	const NetworkOutputInterface * GetNetworkOutputInterface() const;

	// BrnCrashModuleIO.h:208
	NetworkOutputInterface * GetNetworkOutputInterface();

	// Unknown accessibility
	// BrnCrashModuleIO.h:50
	typedef GameEventQueue GameEventQueue;

	// BrnCrashModuleIO.h:210
	const OutputBuffer_PostPhysics::GameEventQueue * GetGameEventQueue() const;

	// BrnCrashModuleIO.h:211
	OutputBuffer_PostPhysics::GameEventQueue * GetGameEventQueue();

}


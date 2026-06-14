// BrnAIModuleIO.h:91
struct BrnAI::AIModuleIO::InputBuffer : public IOBuffer {
private:
	// BrnAIModuleIO.h:158
	RaceCarAIInterface mRaceCarAIInterface;

	// Unknown accessibility
	// BrnAIModuleIO.h:75
	typedef TrafficAIInterface TrafficAIInterface;

	// BrnAIModuleIO.h:159
	InputBuffer::TrafficAIInterface mTrafficAIInterface;

	// BrnAIModuleIO.h:160
	TimerStatusInterface mTimerInterface;

	// BrnAIModuleIO.h:161
	AIModuleRequestInterface mAIModuleRequestInterface;

	// Unknown accessibility
	// BrnAIModuleIO.h:78
	typedef InputBuffer::GameActionQueue GameActionQueue;

	// Unknown accessibility
	// BrnGameActions.h:512
	typedef BaseGameActionQueue<13312> GameActionQueue;

	// BrnAIModuleIO.h:162
	InputBuffer::GameActionQueue mGameActionQueue;

	// BrnAIModuleIO.h:163
	InputBuffer::RaceRouteRequestQueue mRaceRouteRequestQueue;

	// Unknown accessibility
	// BrnAIModuleIO.h:66
	typedef RaceCarRaceDistanceInterface RaceCarRaceDistanceInterface;

	// BrnAIModuleIO.h:165
	InputBuffer::RaceCarRaceDistanceInterface mRaceCarRaceDistanceInterface;

	// Unknown accessibility
	// BrnAIModuleIO.h:72
	typedef OutputBuffer::OutSmSceneQueryResultsQueue SceneResultQueue;

	// BrnAIModuleIO.h:166
	InputBuffer::SceneResultQueue mSceneResultQueue;

	// Unknown accessibility
	// BrnAIModuleIO.h:80
	typedef InputBuffer::TakedownEventQueue TakedownEventQueue;

	// Unknown accessibility
	// BrnTakedownManagerTypes.h:97
	typedef EventQueue<BrnGameState::TakedownEvent,8> TakedownEventQueue;

	// BrnAIModuleIO.h:167
	InputBuffer::TakedownEventQueue mTakedownEventQueue;

	// BrnAIModuleIO.h:168
	PlayerVehicleControls mPlayerVehicleControls;

public:
	// BrnAIModuleIO.h:95
	void Construct();

	// BrnAIModuleIO.h:99
	void Destruct();

	// BrnAIModuleIO.h:103
	void Clear();

	// BrnAIModuleIO.h:108
	void SetRaceCarAIInterface(const RaceCarAIInterface *);

	// BrnAIModuleIO.h:112
	void SetTrafficAIInterface(const InputBuffer::TrafficAIInterface *);

	// BrnAIModuleIO.h:116
	void AppendAIModuleRequestInterface(const AIModuleRequestInterface *);

	// BrnAIModuleIO.h:120
	void SetTimerInterface(const TimerStatusInterface *);

	// BrnAIModuleIO.h:124
	const RaceCarAIInterface * GetRaceCarAIInterface() const;

	// BrnAIModuleIO.h:127
	const InputBuffer::TrafficAIInterface * GetTrafficAIInterface() const;

	// BrnAIModuleIO.h:130
	const TimerStatusInterface * GetTimerInterface() const;

	// BrnAIModuleIO.h:133
	const AIModuleRequestInterface * GetAIModuleRequestInterface() const;

	// BrnAIModuleIO.h:136
	AIModuleRequestInterface * GetAIModuleRequestInterface();

	// BrnAIModuleIO.h:138
	const InputBuffer::RaceRouteRequestQueue * GetRaceRouteRequestQueue() const;

	// BrnAIModuleIO.h:139
	InputBuffer::RaceRouteRequestQueue * GetRaceRouteRequestQueue();

	// BrnAIModuleIO.h:140
	void AppendRaceRouteRequestQueue(const InputBuffer::RaceRouteRequestQueue *);

	// BrnAIModuleIO.h:142
	const InputBuffer::RaceCarRaceDistanceInterface * GetRaceCarRaceDistanceInterface() const;

	// BrnAIModuleIO.h:143
	void SetRaceCarRaceDistanceInterface(const InputBuffer::RaceCarRaceDistanceInterface *);

	// BrnAIModuleIO.h:145
	const InputBuffer::SceneResultQueue * GetSceneResultQueue() const;

	// BrnAIModuleIO.h:146
	InputBuffer::SceneResultQueue * GetSceneResultQueue();

	// BrnAIModuleIO.h:148
	const InputBuffer::GameActionQueue * GetGameActionQueue() const;

	// BrnAIModuleIO.h:149
	InputBuffer::GameActionQueue * GetGameActionQueue();

	// BrnAIModuleIO.h:151
	const InputBuffer::TakedownEventQueue * GetTakedownEventQueue() const;

	// BrnAIModuleIO.h:152
	void SetTakedownEventQueue(const InputBuffer::TakedownEventQueue *);

	// BrnAIModuleIO.h:154
	const PlayerVehicleControls * GetPlayerVehicleControls() const;

	// BrnAIModuleIO.h:155
	void SetPlayerVehicleControls(const PlayerVehicleControls *);

}

// BrnAIModuleIO.h:91
struct BrnAI::AIModuleIO::InputBuffer : public IOBuffer {
private:
	// BrnAIModuleIO.h:158
	RaceCarAIInterface mRaceCarAIInterface;

	// Unknown accessibility
	// BrnAIModuleIO.h:75
	typedef TrafficAIInterface TrafficAIInterface;

	// BrnAIModuleIO.h:159
	InputBuffer::TrafficAIInterface mTrafficAIInterface;

	// BrnAIModuleIO.h:160
	TimerStatusInterface mTimerInterface;

	// BrnAIModuleIO.h:161
	AIModuleRequestInterface mAIModuleRequestInterface;

	// Unknown accessibility
	// BrnAIModuleIO.h:78
	typedef OutputBuffer::GameActionQueue GameActionQueue;

	// BrnAIModuleIO.h:162
	InputBuffer::GameActionQueue mGameActionQueue;

	// BrnAIModuleIO.h:163
	InputBuffer::RaceRouteRequestQueue mRaceRouteRequestQueue;

	// Unknown accessibility
	// BrnAIModuleIO.h:66
	typedef RaceCarRaceDistanceInterface RaceCarRaceDistanceInterface;

	// BrnAIModuleIO.h:165
	InputBuffer::RaceCarRaceDistanceInterface mRaceCarRaceDistanceInterface;

	// Unknown accessibility
	// BrnAIModuleIO.h:72
	typedef OutputBuffer::OutSmSceneQueryResultsQueue SceneResultQueue;

	// BrnAIModuleIO.h:166
	InputBuffer::SceneResultQueue mSceneResultQueue;

	// Unknown accessibility
	// BrnAIModuleIO.h:80
	typedef InputBuffer::TakedownEventQueue TakedownEventQueue;

	// Unknown accessibility
	// BrnTakedownManagerTypes.h:97
	typedef EventQueue<BrnGameState::TakedownEvent,8> TakedownEventQueue;

	// BrnAIModuleIO.h:167
	InputBuffer::TakedownEventQueue mTakedownEventQueue;

	// BrnAIModuleIO.h:168
	PlayerVehicleControls mPlayerVehicleControls;

public:
	// BrnAIModuleIO.h:95
	void Construct();

	// BrnAIModuleIO.h:99
	void Destruct();

	// BrnAIModuleIO.h:103
	void Clear();

	// BrnAIModuleIO.h:108
	void SetRaceCarAIInterface(const RaceCarAIInterface *);

	// BrnAIModuleIO.h:112
	void SetTrafficAIInterface(const InputBuffer::TrafficAIInterface *);

	// BrnAIModuleIO.h:116
	void AppendAIModuleRequestInterface(const AIModuleRequestInterface *);

	// BrnAIModuleIO.h:120
	void SetTimerInterface(const TimerStatusInterface *);

	// BrnAIModuleIO.h:124
	const RaceCarAIInterface * GetRaceCarAIInterface() const;

	// BrnAIModuleIO.h:127
	const InputBuffer::TrafficAIInterface * GetTrafficAIInterface() const;

	// BrnAIModuleIO.h:130
	const TimerStatusInterface * GetTimerInterface() const;

	// BrnAIModuleIO.h:133
	const AIModuleRequestInterface * GetAIModuleRequestInterface() const;

	// BrnAIModuleIO.h:136
	AIModuleRequestInterface * GetAIModuleRequestInterface();

	// BrnAIModuleIO.h:138
	const InputBuffer::RaceRouteRequestQueue * GetRaceRouteRequestQueue() const;

	// BrnAIModuleIO.h:139
	InputBuffer::RaceRouteRequestQueue * GetRaceRouteRequestQueue();

	// BrnAIModuleIO.h:140
	void AppendRaceRouteRequestQueue(const InputBuffer::RaceRouteRequestQueue *);

	// BrnAIModuleIO.h:142
	const InputBuffer::RaceCarRaceDistanceInterface * GetRaceCarRaceDistanceInterface() const;

	// BrnAIModuleIO.h:143
	void SetRaceCarRaceDistanceInterface(const InputBuffer::RaceCarRaceDistanceInterface *);

	// BrnAIModuleIO.h:145
	const InputBuffer::SceneResultQueue * GetSceneResultQueue() const;

	// BrnAIModuleIO.h:146
	InputBuffer::SceneResultQueue * GetSceneResultQueue();

	// BrnAIModuleIO.h:148
	const InputBuffer::GameActionQueue * GetGameActionQueue() const;

	// BrnAIModuleIO.h:149
	InputBuffer::GameActionQueue * GetGameActionQueue();

	// BrnAIModuleIO.h:151
	const InputBuffer::TakedownEventQueue * GetTakedownEventQueue() const;

	// BrnAIModuleIO.h:152
	void SetTakedownEventQueue(const InputBuffer::TakedownEventQueue *);

	// BrnAIModuleIO.h:154
	const PlayerVehicleControls * GetPlayerVehicleControls() const;

	// BrnAIModuleIO.h:155
	void SetPlayerVehicleControls(const PlayerVehicleControls *);

}

// BrnAIModuleIO.h:180
struct BrnAI::AIModuleIO::OutputBuffer : public IOBuffer {
	// BrnAIModuleIO.h:57
	typedef RequestInterface<4096> AIResourceRequestInterface;

private:
	// BrnAIModuleIO.h:237
	OutputBuffer::AIResourceRequestInterface mAIResourceRequestInterface;

	// BrnAIModuleIO.h:238
	OutputBuffer::RouteResponseQueue mRouteResponseQueue;

	// Unknown accessibility
	// BrnAIModuleIO.h:60
	typedef VehicleDriverInputInterface VehicleDriverInputInterface;

	// BrnAIModuleIO.h:239
	OutputBuffer::VehicleDriverInputInterface mVehicleDriverInterface;

	// BrnAIModuleIO.h:240
	AIRaceCarInterface mAIRaceCarInterface;

	// BrnAIModuleIO.h:241
	AICarOutputInterface mAICarOutputInterface;

	// BrnAIModuleIO.h:242
	AIModuleResultInterface mAIModuleResultInterface;

	// Unknown accessibility
	// BrnAIModuleIO.h:79
	typedef GameEventQueue GameEventQueue;

	// BrnAIModuleIO.h:243
	OutputBuffer::GameEventQueue mGameEventQueue;

	// BrnAIModuleIO.h:248
	extern int32_t miAIOutputBufferClearPM;

public:
	// BrnAIModuleIO.h:185
	void Construct();

	// BrnAIModuleIO.h:189
	void Destruct();

	// BrnAIModuleIO.h:193
	void Clear();

	// BrnAIModuleIO.h:197
	OutputBuffer::VehicleDriverInputInterface * GetVehicleDriverInterface();

	// BrnAIModuleIO.h:200
	const OutputBuffer::VehicleDriverInputInterface * GetVehicleDriverInterface() const;

	// BrnAIModuleIO.h:203
	OutputBuffer::AIResourceRequestInterface * GetAIResourceRequestInterface();

	// BrnAIModuleIO.h:206
	const OutputBuffer::AIResourceRequestInterface * GetAIResourceRequestInterface() const;

	// BrnAIModuleIO.h:209
	OutputBuffer::RouteResponseQueue * GetRouteMapResponseQueue();

	// BrnAIModuleIO.h:212
	const OutputBuffer::RouteResponseQueue * GetRouteMapResponseQueue() const;

	// BrnAIModuleIO.h:215
	AIRaceCarInterface * GetAIRaceCarInterface();

	// BrnAIModuleIO.h:218
	const AIRaceCarInterface * GetAIRaceCarInterface() const;

	// BrnAIModuleIO.h:221
	AICarOutputInterface * GetAICarOutputInterface();

	// BrnAIModuleIO.h:224
	const AICarOutputInterface * GetAICarOutputInterface() const;

	// BrnAIModuleIO.h:227
	AIModuleResultInterface * GetAIModuleResultInterface();

	// BrnAIModuleIO.h:230
	const AIModuleResultInterface * GetAIModuleResultInterface() const;

	// BrnAIModuleIO.h:232
	const OutputBuffer::GameEventQueue * GetGameEventQueue() const;

	// BrnAIModuleIO.h:233
	OutputBuffer::GameEventQueue * GetGameEventQueue();

}

// BrnAIModuleIO.h:263
struct BrnAI::AIModuleIO::InputBuffer_PostPhysics : public IOBuffer {
private:
	// BrnAIModuleIO.h:286
	ContactSpyInterface mContactInterface;

public:
	// BrnAIModuleIO.h:267
	void Construct();

	// BrnAIModuleIO.h:271
	void Destruct();

	// BrnAIModuleIO.h:275
	void Clear();

	// BrnAIModuleIO.h:278
	const ContactSpyInterface * GetContactSpyInterface() const;

	// BrnAIModuleIO.h:282
	void AppendContacts(const ContactSpyInterface *);

}

// BrnAIModuleIO.h:298
struct BrnAI::AIModuleIO::OutputBuffer_PostScene : public IOBuffer {
	// BrnAIModuleIO.h:69
	typedef InputBuffer_Query::InSmCoarseQueryQueue SceneCoarseQueryQueue;

private:
	// BrnAIModuleIO.h:312
	OutputBuffer_PostScene::SceneCoarseQueryQueue mSceneCoarseQueryQueue;

public:
	// BrnAIModuleIO.h:302
	void Construct();

	// BrnAIModuleIO.h:305
	void Destruct();

	// BrnAIModuleIO.h:307
	const OutputBuffer_PostScene::SceneCoarseQueryQueue * GetSceneCoarseQueryQueue() const;

	// BrnAIModuleIO.h:308
	OutputBuffer_PostScene::SceneCoarseQueryQueue * GetSceneCoarseQueryQueue();

}


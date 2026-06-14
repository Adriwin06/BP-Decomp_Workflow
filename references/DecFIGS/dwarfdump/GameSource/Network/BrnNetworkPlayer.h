// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkPlayer.h:49
	const int32_t KI_LATENCY_FRAMES_TO_AVERAGE_OVER = 30;

	// BrnNetworkPlayer.h:50
	const int32_t KI_NUM_UPDATE_MESSAGES_TO_BUFFER = 16;

	// BrnNetworkPlayer.h:51
	const uint16_t KU16_INVALID_FRAME = 65535;

	// BrnNetworkPlayer.h:52
	const int32_t KI_MAX_STUNTS_IN_ONE_ROUND = 10000;

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// BrnNetworkPlayer.h:49
	const int32_t KI_LATENCY_FRAMES_TO_AVERAGE_OVER = 30;

	// BrnNetworkPlayer.h:50
	const int32_t KI_NUM_UPDATE_MESSAGES_TO_BUFFER = 16;

	// BrnNetworkPlayer.h:51
	const uint16_t KU16_INVALID_FRAME = 65535;

	// BrnNetworkPlayer.h:52
	const int32_t KI_MAX_STUNTS_IN_ONE_ROUND = 10000;

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct BrnNetworkPlayer {
	public:
		// BrnNetworkPlayer.h:564
		void SetOnStartLine(bool);

		// BrnNetworkPlayer.h:514
		void SetEliminated(bool);

		// BrnNetworkPlayer.h:550
		void SetLocalPlayerCrasherID(AggressiveMoveData::NetworkPlayerID);

	}

	// BrnNetworkPlayer.h:49
	const int32_t KI_LATENCY_FRAMES_TO_AVERAGE_OVER = 30;

	// BrnNetworkPlayer.h:50
	const int32_t KI_NUM_UPDATE_MESSAGES_TO_BUFFER = 16;

	// BrnNetworkPlayer.h:51
	const uint16_t KU16_INVALID_FRAME = 65535;

	// BrnNetworkPlayer.h:52
	const int32_t KI_MAX_STUNTS_IN_ONE_ROUND = 10000;

}

// BrnNetworkPlayer.h:66
struct BrnNetwork::BrnNetworkPlayerConstructParams : public CgsNetworkPlayerConstructParams {
	// BrnNetworkPlayer.h:68
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkPlayer.h:69
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

}

// BrnNetworkPlayer.h:81
struct BrnNetwork::BrnNetworkPlayer : public CgsNetwork::NetworkPlayer {
private:
	// BrnNetworkPlayer.h:200
	CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallengesToSend;

	// BrnNetworkPlayer.h:201
	BurnoutSkillzData mCachedBurnoutSkillzData;

	// BrnNetworkPlayer.h:203
	float_t[30] mafPastLatencies;

	// BrnNetworkPlayer.h:205
	BrnNetwork::UpdateMessage[16] maUpdateMessageBuffer;

	// BrnNetworkPlayer.h:207
	BrnNetwork::UpdateMessage mUpdateMessageSend;

	// BrnNetworkPlayer.h:208
	BrnNetwork::UpdateMessage mUpdateMessageRecv;

	// BrnNetworkPlayer.h:210
	BrnNetwork::CarSelectMessage mCarSelectMessageSend;

	// BrnNetworkPlayer.h:211
	BrnNetwork::CarSelectMessage mCarSelectMessageRecv;

	// BrnNetworkPlayer.h:213
	BrnNetwork::CollectableMessage mCollectableMessageSend;

	// BrnNetworkPlayer.h:214
	BrnNetwork::CollectableMessage mCollectableMessageRecv;

	// BrnNetworkPlayer.h:216
	BrnNetwork::BurningHomeRunSwitchRunnerMessage mBurningHomeRunSwitchRunnerMessageSend;

	// BrnNetworkPlayer.h:217
	BrnNetwork::BurningHomeRunSwitchRunnerMessage mBurningHomeRunSwitchRunnerMessageRecv;

	// BrnNetworkPlayer.h:219
	BrnNetwork::BurnoutSkillzMessage mBurnoutSkillzMessageSend;

	// BrnNetworkPlayer.h:220
	BrnNetwork::BurnoutSkillzMessage mBurnoutSkillzMessageRecv;

	// BrnNetworkPlayer.h:222
	BrnNetwork::ShowtimeUpdateMessage mShowtimeUpdateMessageSend;

	// BrnNetworkPlayer.h:223
	BrnNetwork::ShowtimeUpdateMessage mShowtimeUpdateMessageRecv;

	// BrnNetworkPlayer.h:225
	BrnNetwork::ShowtimeSwitchMessage mShowtimeSwitchMessageSend;

	// BrnNetworkPlayer.h:226
	BrnNetwork::ShowtimeSwitchMessage mShowtimeSwitchMessageRecv;

	// BrnNetworkPlayer.h:228
	BrnNetwork::FreeburnChallengeMessage mFreeburnChallengeMessageSend;

	// BrnNetworkPlayer.h:229
	BrnNetwork::FreeburnChallengeMessage mFreeburnChallengeMessageRecv;

	// BrnNetworkPlayer.h:231
	BrnNetwork::FburnChallengeStatusMessage mFburnChallengeStatusMessageSend;

	// BrnNetworkPlayer.h:232
	BrnNetwork::FburnChallengeStatusMessage mFburnChallengeStatusMessageRecv;

	// BrnNetworkPlayer.h:234
	BrnNetwork::ActiveFburnChallengeMessage mActiveFburnChallengeMessageSend;

	// BrnNetworkPlayer.h:235
	BrnNetwork::ActiveFburnChallengeMessage mActiveFburnChallengeMessageRecv;

	// BrnNetworkPlayer.h:237
	BrnNetwork::CheckpointTriggeredMessage mCheckpointTriggeredMessageSend;

	// BrnNetworkPlayer.h:238
	BrnNetwork::CheckpointTriggeredMessage mCheckpointTriggeredMessageRecv;

	// BrnNetworkPlayer.h:240
	Vector3 mWorldMinPos;

	// BrnNetworkPlayer.h:241
	Vector3 mWorldMaxPos;

	// BrnNetworkPlayer.h:243
	CgsID mSelectedChallengeID;

	// BrnNetworkPlayer.h:244
	CgsID mCollectableID;

	// BrnNetworkPlayer.h:246
	RoadRulesRecvData::NetworkPlayerID mLocalPlayerRaceCarCrasherID;

	// BrnNetworkPlayer.h:247
	float32_t mfTimeBeforeSelectedChallengeSend;

	// BrnNetworkPlayer.h:248
	int32_t miPastLatenciesCount;

	// BrnNetworkPlayer.h:249
	int32_t miLatencyIndex;

	// BrnNetworkPlayer.h:250
	int32_t miLatencyFrames;

	// BrnNetworkPlayer.h:251
	int32_t miCurrentRoundNumber;

	// BrnNetworkPlayer.h:252
	int32_t miFlashFrequency;

	// BrnNetworkPlayer.h:253
	int32_t miNumUpdateMessagesBuffered;

	// BrnNetworkPlayer.h:254
	int32_t miUnsentMessageCount;

	// BrnNetworkPlayer.h:255
	BrnNetwork::CollectableMessage::ECollectableType meCollectableType;

	// BrnNetworkPlayer.h:258
	uint16_t mu16LastPacketReceivedFrame;

	// BrnNetworkPlayer.h:259
	uint16_t mu16LastBufferedUpdateAppliedFrame;

	// BrnNetworkPlayer.h:260
	uint16_t mu16LastAnyUpdateAppliedFrame;

	// BrnNetworkPlayer.h:261
	uint16_t mu16LastFrameWeSentUpdateMessageOn;

	// BrnNetworkPlayer.h:263
	uint8_t mu8NumForcedUpdates;

	// BrnNetworkPlayer.h:265
	CgsNetwork::TimeManager * mpTimeManager;

	// BrnNetworkPlayer.h:266
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkPlayer.h:268
	bool mbHasResetCarTransformSinceLastUpdateSent;

	// BrnNetworkPlayer.h:269
	bool mbHasBeenSlammedSinceLastUpdateSent;

	// BrnNetworkPlayer.h:270
	bool mbIsPrepared;

	// BrnNetworkPlayer.h:271
	bool mbIsInRound;

	// BrnNetworkPlayer.h:272
	bool mbIsPaused;

	// BrnNetworkPlayer.h:273
	bool mbIsUpdateMessageSendingEnabled;

	// BrnNetworkPlayer.h:274
	bool mbIsEliminated;

	// BrnNetworkPlayer.h:275
	bool mbWorldSet;

	// BrnNetworkPlayer.h:276
	bool mbFirstUpdateMessage;

	// BrnNetworkPlayer.h:277
	bool mbBurnoutSkillzToSend;

	// BrnNetworkPlayer.h:278
	bool mbCachedBurnoutSkillzAreIntial;

	// BrnNetworkPlayer.h:279
	bool mbIsOnStartLine;

public:
	// BrnNetworkPlayer.cpp:264
	virtual void Construct(CgsNetworkPlayerConstructParams *);

	// BrnNetworkPlayer.cpp:402
	virtual void OnRoundLoadingStart();

	// BrnNetworkPlayer.cpp:347
	virtual void OnRoundStart();

	// BrnNetworkPlayer.cpp:377
	void OnRoundFinish();

	// BrnNetworkPlayer.cpp:438
	virtual bool Prepare(NetworkAdapter *, const TimerStatus *, const char *, CgsSystem::EFrameRate, CgsSystem::EFrameRate, RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkPlayer.cpp:1294
	virtual void Update(const TimerStatus *, uint16_t, bool);

	// BrnNetworkPlayer.cpp:1431
	// Declaration
	void HandleSendingUpdateMessage() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkPlayer.cpp:1533
		using namespace CgsDev::Message;

	}

	// BrnNetworkPlayer.cpp:1603
	virtual bool Release();

	// BrnNetworkPlayer.cpp:1632
	void Destruct();

	// BrnNetworkPlayer.cpp:1753
	void SendSelectedCar(CgsID, CgsID, uint16_t, uint16_t, bool);

	// BrnNetworkPlayer.cpp:1768
	void SendLandmarkTriggeredMessage(int32_t);

	// BrnNetworkPlayer.h:514
	void SetEliminated(bool);

	// BrnNetworkPlayer.h:521
	bool IsEliminated();

	// BrnNetworkPlayer.cpp:1784
	void SendCollectableDone(CgsID, BrnNetwork::CollectableMessage::ECollectableType);

	// BrnNetworkPlayer.cpp:1800
	void SendSwitchBurningHomeRunRunnerMessage(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkPlayer.cpp:1818
	void SendNewBurnoutSkillzData(const BurnoutSkillzData *, bool);

	// BrnNetworkPlayer.cpp:1845
	void SendShowtimeUpdateData(int32_t);

	// BrnNetworkPlayer.cpp:1861
	void SendShowtimeModeSwitchMessage(int32_t, bool);

	// BrnNetworkPlayer.cpp:1880
	void SendFreeburnChallengeMessage(CgsID, BrnNetwork::BrnNetworkModuleIO::EChallengeEventType, BrnGameState::EChallengeStatus, int32_t);

	// BrnNetworkPlayer.cpp:1930
	void SendFburnChallengeStatusMessage(const CompletedFburnChallengesData::CompletedFburnChallenges *);

	// BrnNetworkPlayer.cpp:1955
	void SendActiveFburnChallengeMessage(const NetworkInActiveFburnChallengeEvent *, RoadRulesRecvData::NetworkPlayerID *);

	// BrnNetworkPlayer.h:536
	bool IsWaitingForFirstUpdate() const;

	// BrnNetworkPlayer.h:550
	void SetLocalPlayerCrasherID(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkPlayer.cpp:2493
	virtual void SendDirtySockConnectionTelemetry(uint32_t, uint32_t);

	// BrnNetworkPlayer.h:564
	void SetOnStartLine(bool);

private:
	// BrnNetworkPlayer.cpp:583
	void UpdateLatencyValue(uint16_t, uint16_t);

	// BrnNetworkPlayer.cpp:1403
	bool IsOurTurnToSend();

	// BrnNetworkPlayer.cpp:1263
	bool IsFreeBurnLobby();

	// BrnNetworkPlayer.cpp:1277
	bool IsCurrentRoundNumberOdd();

	// BrnNetworkPlayer.cpp:720
	void CheckForNewMessages(uint16_t);

	// BrnNetworkPlayer.cpp:1672
	// Declaration
	void CheckForPlayerPausedTimeout(uint16_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkPlayer.cpp:1710
		using namespace CgsDev::Message;

		// BrnNetworkPlayer.cpp:1715
		using namespace CgsDev::Message;

		// BrnNetworkPlayer.cpp:1727
		using namespace CgsDev::Message;

		// BrnNetworkPlayer.cpp:1731
		using namespace CgsDev::Message;

	}

	// BrnNetworkPlayer.cpp:884
	// Declaration
	void StoreBufferedMessage(const BrnNetwork::UpdateMessage *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkPlayer.cpp:907
		using namespace CgsDev::Message;

		// BrnNetworkPlayer.cpp:910
		using namespace CgsDev::Message;

		// BrnNetworkPlayer.cpp:913
		using namespace CgsDev::Message;

		// BrnNetworkPlayer.cpp:915
		using namespace CgsDev::Message;

	}

	// BrnNetworkPlayer.cpp:933
	BrnNetwork::UpdateMessage * RetrieveBufferedMessage(uint16_t);

	// BrnNetworkPlayer.cpp:1039
	void RemoveBufferedMessage(BrnNetwork::UpdateMessage *);

	// BrnNetworkPlayer.cpp:1104
	// Declaration
	void TellNetworkCarAboutRecievedUpdateMessage(uint16_t, BrnNetwork::UpdateMessage *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkPlayer.cpp:1214
		using namespace CgsDev::Message;

	}

	// BrnNetworkPlayer.cpp:1241
	void TellNetworkCarAboutBufferedUpdateMessage(uint16_t, BrnNetwork::UpdateMessage *);

	// BrnNetworkPlayer.cpp:143
	// Declaration
	void CalculateDiffs(int32_t, Matrix44Affine, Matrix44Affine, Matrix44Affine *, Vector3 *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkPlayer.cpp:173
		using namespace CgsDev::Message;

		// BrnNetworkPlayer.cpp:178
		using namespace CgsDev::Message;

		// BrnNetworkPlayer.cpp:183
		using namespace CgsDev::Message;

		// BrnNetworkPlayer.cpp:188
		using namespace CgsDev::Message;

		// BrnNetworkPlayer.cpp:228
		using namespace CgsDev::Message;

		// BrnNetworkPlayer.cpp:233
		using namespace CgsDev::Message;

		// BrnNetworkPlayer.cpp:238
		using namespace CgsDev::Message;

		// BrnNetworkPlayer.cpp:243
		using namespace CgsDev::Message;

	}

	// BrnNetworkPlayer.cpp:88
	// Declaration
	bool IsPositionReasonableDEBUG(Vector3, float_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkPlayer.cpp:111
		using namespace CgsDev::Message;

		// BrnNetworkPlayer.cpp:112
		using namespace CgsDev::Message;

		// BrnNetworkPlayer.cpp:113
		using namespace CgsDev::Message;

		// BrnNetworkPlayer.cpp:118
		using namespace CgsDev::Message;

		// BrnNetworkPlayer.cpp:119
		using namespace CgsDev::Message;

	}

	// BrnNetworkPlayer.h:504
	void WrapFrameToValidRange(uint16_t *);

	// BrnNetworkPlayer.cpp:1553
	void HandleSendingFburnChallengeMessages(float32_t);

	// BrnNetworkPlayer.cpp:1978
	void _CarSelectMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkPlayer.cpp:2018
	void _CarSelectMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkPlayer.cpp:2035
	void _CollectableMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkPlayer.cpp:2100
	void _CollectableMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkPlayer.cpp:2116
	void _BurningHomeRunSwitchRunnerMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkPlayer.cpp:2149
	void _BurningHomeRunSwitchRunnerMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkPlayer.cpp:2165
	void _BurnoutSkillzMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkPlayer.cpp:2200
	void _BurnoutSkillzMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkPlayer.cpp:2216
	void _ShowtimeSwitchMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkPlayer.cpp:2250
	void _ShowtimeSwitchMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkPlayer.cpp:2266
	void _FreeburnChallengeMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkPlayer.cpp:2301
	void _FreeburnChallengeMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkPlayer.cpp:2357
	void _ActiveFreeburnChallengeMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkPlayer.cpp:2403
	void _ActiveFreeburnChallengeMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkPlayer.cpp:2317
	void _FburnChallengeStatusMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkPlayer.cpp:2422
	void _FburnChallengeStatusMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkPlayer.cpp:2439
	void _CheckpointTriggeredMessageArrivedCallback(CgsNetwork::ReliableMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

	// BrnNetworkPlayer.cpp:2474
	void _CheckpointTriggeredMessageDeliveredCallback(bool, bool, CgsNetwork::SignalMessage *, RoadRulesRecvData::NetworkPlayerID, void *);

}

// BrnNetworkPlayer.h:81
void BrnNetwork::BrnNetworkPlayer::BrnNetworkPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


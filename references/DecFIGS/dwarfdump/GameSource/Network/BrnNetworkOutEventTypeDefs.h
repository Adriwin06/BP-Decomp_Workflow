// BrnNetworkOutEventTypeDefs.h:34
using BrnNetwork::BrnNetworkModuleIO;

// BrnNetworkOutEventTypeDefs.h:48
using BrnGameState::GameStateModuleIO;

// BrnNetworkOutEventTypeDefs.h:106
extern const int32_t KI_MAX_BUDDIES_TO_GET = 5;

// BrnNetworkOutEventTypeDefs.h:591
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent : public NetworkEvent<33> {
	// BrnNetworkOutEventTypeDefs.h:593
	ChallengeHighScoreEntry mPersonalBestScore;

	// BrnNetworkOutEventTypeDefs.h:594
	RoadRulesRecvData::NetworkPlayerID mPersonalBestPlayerID;

	// BrnNetworkOutEventTypeDefs.h:595
	Road::ChallengeIndex mPersonalBestChallengeIndex;

	// BrnNetworkOutEventTypeDefs.h:596
	bool mbWasPBByFriend;

public:
	// BrnNetworkOutEventTypeDefs.h:600
	void Construct();

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// Declaration
		struct NetworkPlayerDisconnectedEvent {
			// BrnNetworkOutEventTypeDefs.h:126
			enum EDisconnectStatus {
				E_DISCONNECT_STATUS_CONNECTED = 0,
				E_DISCONNECT_STATUS_LOST_CONTACT = 1,
				E_DISCONNECT_STATUS_DISCONNECTED = 2,
				E_DISCONNECT_STATUS_COUNT = 3,
			}

		}

		// Declaration
		struct NetworkOutPostEventScalps {
			// BrnNetworkOutEventTypeDefs.h:238
			struct OnlineScalp {
				// BrnNetworkOutEventTypeDefs.h:240
				int32_t miAggressorIndex;

				// BrnNetworkOutEventTypeDefs.h:241
				int32_t miVictimIndex;

			}

		}

		// Declaration
		struct NetworkOutScoreboardHeadingList {
			// BrnNetworkOutEventTypeDefs.h:1099
			enum EHeadingType {
				E_HEADING_CATEGORY = 0,
				E_HEADING_INDEX = 1,
				E_HEADING_VARIATION = 2,
				E_HEADING_COUNT = 3,
			}

		}

	}

}

// BrnNetworkOutEventTypeDefs.h:74
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutAccountSettings : public GuiEvent<65> {
	// BrnNetworkOutEventTypeDefs.h:76
	bool mbAgreeToShareInfoEA;

	// BrnNetworkOutEventTypeDefs.h:77
	bool mbAgreeToShareInfoPartners;

	// BrnNetworkOutEventTypeDefs.h:78
	bool mbTelemetryEnable;

}

// BrnNetworkOutEventTypeDefs.h:90
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutBuddyCount : public NetworkEvent<1> {
	// BrnNetworkOutEventTypeDefs.h:92
	int32_t miBuddyCount;

}

// BrnNetworkOutEventTypeDefs.h:104
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutBuddyInformation : public NetworkEvent<2> {
	// BrnNetworkOutEventTypeDefs.h:106
	extern const int32_t KI_MAX_BUDDIES_TO_GET = 5;

	// BrnNetworkOutEventTypeDefs.h:108
	BuddyInformation[5] mBuddyInformation;

	// BrnNetworkOutEventTypeDefs.h:109
	int32_t miNumberOfBuddiesInEvent;

	// BrnNetworkOutEventTypeDefs.h:110
	int32_t miIndexOfFirstBuddyInFullBuddyList;

	// BrnNetworkOutEventTypeDefs.h:111
	bool mbConnected;

}

// BrnNetworkOutEventTypeDefs.h:123
struct BrnNetwork::BrnNetworkModuleIO::NetworkPlayerDisconnectedEvent : public NetworkEvent<22> {
private:
	// BrnNetworkOutEventTypeDefs.h:151
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnNetworkOutEventTypeDefs.h:152
	BrnNetwork::BrnNetworkModuleIO::NetworkPlayerDisconnectedEvent::EDisconnectStatus meDisconnectStatus;

	// BrnNetworkOutEventTypeDefs.h:153
	EActiveRaceCarIndex meActiveRaceCarIndex;

public:
	// BrnNetworkOutEventTypeDefs.h:139
	void Construct(RoadRulesRecvData::NetworkPlayerID, EActiveRaceCarIndex, BrnNetwork::BrnNetworkModuleIO::NetworkPlayerDisconnectedEvent::EDisconnectStatus);

	// BrnNetworkOutEventTypeDefs.h:142
	EActiveRaceCarIndex GetActiveRaceCarIndex() const;

	// BrnNetworkOutEventTypeDefs.h:145
	RoadRulesRecvData::NetworkPlayerID GetNetworkPlayerID() const;

	// BrnNetworkOutEventTypeDefs.h:148
	BrnNetwork::BrnNetworkModuleIO::NetworkPlayerDisconnectedEvent::EDisconnectStatus GetDisconnectStatus() const;

}

// BrnNetworkOutEventTypeDefs.h:207
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutInviteFailed : public NetworkEvent<8> {
	// BrnNetworkOutEventTypeDefs.h:209
	BrnNetwork::BrnNetworkModuleIO::EInviteFailReason meFailReason;

}

// BrnNetworkOutEventTypeDefs.h:221
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutInviteRequest : public NetworkEvent<6> {
	// BrnNetworkOutEventTypeDefs.h:223
	InviteOrJoinParams mInviteParams;

}

// BrnNetworkOutEventTypeDefs.h:234
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutPostEventScalps : public NetworkEvent<21> {
	// BrnNetworkOutEventTypeDefs.h:244
	BrnNetwork::BrnNetworkModuleIO::NetworkOutPostEventScalps::OnlineScalp[8] maOnlineScalps;

	// BrnNetworkOutEventTypeDefs.h:245
	int32_t miNumScalpsWon;

}

// BrnNetworkOutEventTypeDefs.h:256
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutGameParamsChanged : public NetworkEvent<15> {
	// BrnNetworkOutEventTypeDefs.h:261
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event[10] maEvents;

	// BrnNetworkOutEventTypeDefs.h:262
	BrnGameState::GameStateModuleIO::EGameModeType meGameMode;

	// BrnNetworkOutEventTypeDefs.h:263
	BrnGameState::GameStateModuleIO::EGameModeType mePreviousGameMode;

	// BrnNetworkOutEventTypeDefs.h:264
	BrnNetwork::EBrnGameSecurity meSecurity;

	// BrnNetworkOutEventTypeDefs.h:265
	BrnNetwork::EBoostType meBoostType;

	// BrnNetworkOutEventTypeDefs.h:266
	BrnNetwork::EVehicleChoice meVehicleChoice;

	// BrnNetworkOutEventTypeDefs.h:267
	int32_t miNumRounds;

	// BrnNetworkOutEventTypeDefs.h:268
	int32_t miVehicleClass;

	// BrnNetworkOutEventTypeDefs.h:269
	int32_t miNumRunnerCrashes;

	// BrnNetworkOutEventTypeDefs.h:270
	int32_t miTimeLimit;

	// BrnNetworkOutEventTypeDefs.h:271
	bool mbRanked;

	// BrnNetworkOutEventTypeDefs.h:272
	bool mbInfiniteBoost;

	// BrnNetworkOutEventTypeDefs.h:273
	bool mbTrafficOn;

	// BrnNetworkOutEventTypeDefs.h:274
	bool mbTrafficCheckingOn;

public:
	// BrnNetworkOutEventTypeDefs.h:259
	void Construct();

}

// BrnNetworkOutEventTypeDefs.h:286
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerLeftGame : public NetworkEvent<23> {
	// BrnNetworkOutEventTypeDefs.h:289
	BrnNetwork::ELeftGameReason meLeftGameReason;

	// BrnNetworkOutEventTypeDefs.h:290
	CgsNetwork::EKickReason meKickReason;

}

// BrnNetworkOutEventTypeDefs.h:301
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutPostGameProcessingFinished : public NetworkEvent<24> {
	// BrnNetworkOutEventTypeDefs.h:304
	bool mbIsStillInGame;

}

// BrnNetworkOutEventTypeDefs.h:331
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerAddedEvent : public NetworkEvent<16> {
private:
	// BrnNetworkOutEventTypeDefs.h:385
	CgsID mModelID;

	// BrnNetworkOutEventTypeDefs.h:386
	CgsID mWheelID;

	// BrnNetworkOutEventTypeDefs.h:387
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnNetworkOutEventTypeDefs.h:388
	BrnGameState::GameStateModuleIO::EPlayerTeam meTeam;

	// BrnNetworkOutEventTypeDefs.h:389
	uint16_t mu16CarColourIndex;

	// BrnNetworkOutEventTypeDefs.h:390
	uint16_t mu16CarPaintFinishIndex;

	// BrnNetworkOutEventTypeDefs.h:391
	bool mbIsLocalPlayer;

public:
	// BrnNetworkOutEventTypeDefs.h:336
	void SetNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkOutEventTypeDefs.h:339
	RoadRulesRecvData::NetworkPlayerID GetNetworkPlayerID() const;

	// BrnNetworkOutEventTypeDefs.h:343
	void SetModelID(CgsID);

	// BrnNetworkOutEventTypeDefs.h:346
	CgsID GetModelID() const;

	// BrnNetworkOutEventTypeDefs.h:350
	void SetWheelID(CgsID);

	// BrnNetworkOutEventTypeDefs.h:353
	CgsID GetWheelID() const;

	// BrnNetworkOutEventTypeDefs.h:357
	void SetTeam(BrnGameState::GameStateModuleIO::EPlayerTeam);

	// BrnNetworkOutEventTypeDefs.h:360
	BrnGameState::GameStateModuleIO::EPlayerTeam GetTeam() const;

	// BrnNetworkOutEventTypeDefs.h:364
	void SetLocalPlayer(bool);

	// BrnNetworkOutEventTypeDefs.h:367
	bool IsLocalPlayer() const;

	// BrnNetworkOutEventTypeDefs.h:371
	void SetCarColourIndex(uint16_t);

	// BrnNetworkOutEventTypeDefs.h:374
	uint16_t GetCarColourIndex() const;

	// BrnNetworkOutEventTypeDefs.h:378
	void SetCarPaintFinishIndex(uint16_t);

	// BrnNetworkOutEventTypeDefs.h:381
	uint16_t GetCarPaintFinishIndex() const;

}

// BrnNetworkOutEventTypeDefs.h:403
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerFinalisedEvent : public NetworkEvent<20> {
private:
	// BrnNetworkOutEventTypeDefs.h:415
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

public:
	// BrnNetworkOutEventTypeDefs.h:408
	void SetNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkOutEventTypeDefs.h:411
	RoadRulesRecvData::NetworkPlayerID GetNetworkPlayerID() const;

}

// BrnNetworkOutEventTypeDefs.h:427
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerRemovedEvent : public NetworkEvent<17> {
private:
	// BrnNetworkOutEventTypeDefs.h:459
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnNetworkOutEventTypeDefs.h:460
	PlayerName mPlayerName;

	// BrnNetworkOutEventTypeDefs.h:461
	bool mbIsLocalPlayerInGame;

	// BrnNetworkOutEventTypeDefs.h:462
	bool mbLocalPlayerLeavingGame;

public:
	// BrnNetworkOutEventTypeDefs.h:432
	void SetNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkOutEventTypeDefs.h:435
	RoadRulesRecvData::NetworkPlayerID GetNetworkPlayerID() const;

	// BrnNetworkOutEventTypeDefs.h:439
	void SetIsLocalPlayerInGame(bool);

	// BrnNetworkOutEventTypeDefs.h:442
	bool IsLocalPlayerInGame() const;

	// BrnNetworkOutEventTypeDefs.h:446
	void SetIsLocalPlayerLeavingGame(bool);

	// BrnNetworkOutEventTypeDefs.h:449
	bool IsLocalPlayerLeavingGame() const;

	// BrnNetworkOutEventTypeDefs.h:453
	void SetPlayerName(PlayerName *);

	// BrnNetworkOutEventTypeDefs.h:456
	const PlayerName * GetPlayerName() const;

}

// BrnNetworkOutEventTypeDefs.h:474
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerChangedCarEvent : public NetworkEvent<18> {
private:
	// BrnNetworkOutEventTypeDefs.h:500
	CgsID mModelID;

	// BrnNetworkOutEventTypeDefs.h:501
	CgsID mWheelID;

	// BrnNetworkOutEventTypeDefs.h:502
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

public:
	// BrnNetworkOutEventTypeDefs.h:479
	void SetNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkOutEventTypeDefs.h:482
	RoadRulesRecvData::NetworkPlayerID GetNetworkPlayerID() const;

	// BrnNetworkOutEventTypeDefs.h:486
	void SetModelID(CgsID);

	// BrnNetworkOutEventTypeDefs.h:489
	CgsID GetModelID() const;

	// BrnNetworkOutEventTypeDefs.h:493
	void SetWheelID(CgsID);

	// BrnNetworkOutEventTypeDefs.h:496
	CgsID GetWheelID() const;

}

// BrnNetworkOutEventTypeDefs.h:514
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerChangedCarColourEvent : public NetworkEvent<19> {
private:
	// BrnNetworkOutEventTypeDefs.h:547
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnNetworkOutEventTypeDefs.h:548
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnNetworkOutEventTypeDefs.h:549
	uint16_t mu16CarColourIndex;

	// BrnNetworkOutEventTypeDefs.h:550
	uint16_t mu16PaintFinishIndex;

public:
	// BrnNetworkOutEventTypeDefs.h:519
	void SetNetworkPlayerID(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkOutEventTypeDefs.h:522
	RoadRulesRecvData::NetworkPlayerID GetNetworkPlayerID() const;

	// BrnNetworkOutEventTypeDefs.h:526
	void SetActiveRaceCarIndex(EActiveRaceCarIndex);

	// BrnNetworkOutEventTypeDefs.h:529
	EActiveRaceCarIndex GetActiveRaceCarIndex() const;

	// BrnNetworkOutEventTypeDefs.h:533
	void SetCarColourIndex(uint16_t);

	// BrnNetworkOutEventTypeDefs.h:536
	uint16_t GetCarColourIndex() const;

	// BrnNetworkOutEventTypeDefs.h:540
	void SetPaintFinishIndex(uint16_t);

	// BrnNetworkOutEventTypeDefs.h:543
	uint16_t GetPaintFinishIndex() const;

}

// BrnNetworkOutEventTypeDefs.h:561
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutLaunchEvent : public NetworkEvent<25> {
	// BrnNetworkOutEventTypeDefs.h:563
	BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

	// BrnNetworkOutEventTypeDefs.h:564
	RoadRulesRecvData::NetworkPlayerID mHostPlayerID;

}

// BrnNetworkOutEventTypeDefs.h:575
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutLaunchedEvent : public NetworkEvent<26> {
	// BrnNetworkOutEventTypeDefs.h:577
	int32_t miVehicleClassLimit;

	// BrnNetworkOutEventTypeDefs.h:578
	bool mbHostChoiceCarAndNotHost;

	// BrnNetworkOutEventTypeDefs.h:579
	bool mbSuccessfulLaunch;

}

// BrnNetworkOutEventTypeDefs.h:612
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesUploadedEvent : public NetworkEvent<34> {
	// BrnNetworkOutEventTypeDefs.h:614
	Road::ChallengeIndex mStartUploadIndex;

	// BrnNetworkOutEventTypeDefs.h:615
	Road::ChallengeIndex mEndUploadIndex;

}

// BrnNetworkOutEventTypeDefs.h:627
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutRoadRulesDownloadedEvent : public NetworkEvent<35> {
	// BrnNetworkOutEventTypeDefs.h:629
	uint32_t muTimestampOfDownload;

}

// BrnNetworkOutEventTypeDefs.h:641
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutRoadRulesConnectedOnlineEvent : public NetworkEvent<36> {
	// BrnNetworkOutEventTypeDefs.h:643
	uint32_t muLastRoadRulesResetTime;

}

// BrnNetworkOutEventTypeDefs.h:668
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutBuddyNotification : public NetworkEvent<9> {
	// BrnNetworkOutEventTypeDefs.h:670
	BrnNetwork::EBuddyNotification meBuddyNotification;

	// BrnNetworkOutEventTypeDefs.h:671
	PlayerName mBuddyName;

	// BrnNetworkOutEventTypeDefs.h:672
	int32_t miNumBuddies;

}

// BrnNetworkOutEventTypeDefs.h:684
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutLocalPlayerConnected : public NetworkEvent<37> {
	// BrnNetworkOutEventTypeDefs.h:686
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

}

// BrnNetworkOutEventTypeDefs.h:728
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutRestartTrafficEvent : public NetworkEvent<41> {
	// BrnNetworkOutEventTypeDefs.h:730
	uint16_t[8] mau16ActveHulls;

}

// BrnNetworkOutEventTypeDefs.h:742
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutNetworkPlayerCollectableEvent : public NetworkEvent<42> {
	// BrnNetworkOutEventTypeDefs.h:744
	CgsID mID;

	// BrnNetworkOutEventTypeDefs.h:745
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnNetworkOutEventTypeDefs.h:746
	BrnGameState::StuntElementType meType;

}

// BrnNetworkOutEventTypeDefs.h:771
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutCapturingTheirImageEvent : public NetworkEvent<51> {
	// BrnNetworkOutEventTypeDefs.h:773
	CgsID mRoadId;

	// BrnNetworkOutEventTypeDefs.h:774
	BrnGameState::GameStateModuleIO::EImageType meImageType;

	// BrnNetworkOutEventTypeDefs.h:775
	EActiveRaceCarIndex meVictimARCI;

}

// BrnNetworkOutEventTypeDefs.h:787
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutImageReceivedEvent : public NetworkEvent<52> {
	// BrnNetworkOutEventTypeDefs.h:789
	CgsID mRoadID;

	// BrnNetworkOutEventTypeDefs.h:790
	EActiveRaceCarIndex meImageSenderRaceCarIndex;

	// BrnNetworkOutEventTypeDefs.h:791
	BrnGameState::GameStateModuleIO::EImageType meReceivedImageType;

}

// BrnNetworkOutEventTypeDefs.h:803
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutMugshotToSaveEvent : public NetworkEvent<53> {
	// BrnNetworkOutEventTypeDefs.h:805
	MugshotInfo::UniquePlayerID mUniquePlayerID;

	// BrnNetworkOutEventTypeDefs.h:806
	BrnGameState::GameStateModuleIO::EImageType meImageGalleryType;

	// BrnNetworkOutEventTypeDefs.h:807
	NetworkTexture * mpTexture;

}

// BrnNetworkOutEventTypeDefs.h:819
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutAbortImageCaptureEvent : public NetworkEvent<54> {
	// BrnNetworkOutEventTypeDefs.h:821
	bool mbCapture;

}

// BrnNetworkOutEventTypeDefs.h:833
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutLiveRevengeProfileData : public NetworkEvent<28> {
	// BrnNetworkOutEventTypeDefs.h:835
	BrnNetwork::LiveRevengeProfile * mpLiveRevengeProfile;

}

// BrnNetworkOutEventTypeDefs.h:846
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutSwitchBurningHomeRunRunner : public NetworkEvent<56> {
	// BrnNetworkOutEventTypeDefs.h:848
	RoadRulesRecvData::NetworkPlayerID mNewRunnerID;

}

// BrnNetworkOutEventTypeDefs.h:859
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutBurnoutSkillzChanged : public NetworkEvent<57> {
	// BrnNetworkOutEventTypeDefs.h:861
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

	// BrnNetworkOutEventTypeDefs.h:862
	BurnoutSkillzData mNewSkillzData;

	// BrnNetworkOutEventTypeDefs.h:863
	bool mbInitialData;

}

// BrnNetworkOutEventTypeDefs.h:874
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutShowtimeUpdate : public NetworkEvent<58> {
	// BrnNetworkOutEventTypeDefs.h:876
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

	// BrnNetworkOutEventTypeDefs.h:877
	int32_t miShowtimeScore;

}

// BrnNetworkOutEventTypeDefs.h:888
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutShowtimeSwitch : public NetworkEvent<59> {
	// BrnNetworkOutEventTypeDefs.h:890
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

	// BrnNetworkOutEventTypeDefs.h:891
	int32_t miFinalShowtimeScore;

	// BrnNetworkOutEventTypeDefs.h:892
	bool mbEnteringShowtime;

}

// BrnNetworkOutEventTypeDefs.h:903
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutFreeburnChallenge : public NetworkEvent<60> {
	// BrnNetworkOutEventTypeDefs.h:905
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

	// BrnNetworkOutEventTypeDefs.h:906
	CgsID mChallengeID;

	// BrnNetworkOutEventTypeDefs.h:907
	BrnNetwork::BrnNetworkModuleIO::EChallengeEventType meEventType;

	// BrnNetworkOutEventTypeDefs.h:908
	BrnGameState::EChallengeStatus meChallengeStatus;

	// BrnNetworkOutEventTypeDefs.h:909
	int32_t miActionIndex;

}

// BrnNetworkOutEventTypeDefs.h:920
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutActiveFburnChallengeEvent : public NetworkEvent<61> {
	// BrnNetworkOutEventTypeDefs.h:922
	EActiveRaceCarIndex[7] maePlayersInChallengeARCI;

	// BrnNetworkOutEventTypeDefs.h:923
	CgsID mChallengeID;

	// BrnNetworkOutEventTypeDefs.h:924
	int32_t miNumPlayersInChallenge;

}

// BrnNetworkOutEventTypeDefs.h:935
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutFburnChallengeSuccessUpdateEvent : public NetworkEvent<62> {
	// BrnNetworkOutEventTypeDefs.h:937
	FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess mChallengeSuccessUpdate;

	// BrnNetworkOutEventTypeDefs.h:938
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnNetworkOutEventTypeDefs.h:939
	int32_t miChallengeUpdateFrame;

	// BrnNetworkOutEventTypeDefs.h:940
	int32_t miActionIndex;

}

// BrnNetworkOutEventTypeDefs.h:951
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutFburnChallengeSuccessEvent : public NetworkEvent<63> {
	// BrnNetworkOutEventTypeDefs.h:953
	float32_t[2] mafActionScores;

	// BrnNetworkOutEventTypeDefs.h:954
	bool[2] mabSuccessfulActions;

	// BrnNetworkOutEventTypeDefs.h:955
	bool[2] mabAccumulationThisFrame;

	// BrnNetworkOutEventTypeDefs.h:956
	EActiveRaceCarIndex meActiveRaceCarIndex;

}

// BrnNetworkOutEventTypeDefs.h:967
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutHostChangedEvent : public NetworkEvent<43> {
	// BrnNetworkOutEventTypeDefs.h:969
	bool mbIsLocalPlayerNowHost;

	// BrnNetworkOutEventTypeDefs.h:970
	bool mbIsFirstHost;

}

// BrnNetworkOutEventTypeDefs.h:995
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutEventTimeRemaining : public NetworkEvent<30> {
	// BrnNetworkOutEventTypeDefs.h:997
	Time mTimeRemaining;

}

// BrnNetworkOutEventTypeDefs.h:1032
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutInstantFreeburnEvent : public NetworkEvent<12> {
	// BrnNetworkOutEventTypeDefs.h:1034
	bool mbIsDoingInstantFreeburn;

}

// BrnNetworkOutEventTypeDefs.h:1045
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutInstantFreeburnComplete : public NetworkEvent<13> {
	// BrnNetworkOutEventTypeDefs.h:1047
	bool mbSuccess;

}

// BrnNetworkOutEventTypeDefs.h:1058
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutBuddyRemovedEvent : public NetworkEvent<14> {
	// BrnNetworkOutEventTypeDefs.h:1060
	PlayerName mRemovedBuddyName;

}

// BrnNetworkOutEventTypeDefs.h:1071
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutCamPicCompressedEvent : public NetworkEvent<67> {
	// BrnNetworkOutEventTypeDefs.h:1073
	int32_t miCompressedPixelSize;

	// BrnNetworkOutEventTypeDefs.h:1074
	renderengine::PixelFormat meCompressedFormat;

	// BrnNetworkOutEventTypeDefs.h:1075
	char * mpcCompressedPixels;

}

// BrnNetworkOutEventTypeDefs.h:1096
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutScoreboardHeadingList : public NetworkEvent<49> {
private:
	// BrnNetworkOutEventTypeDefs.h:1144
	int32_t miLength;

	// BrnNetworkOutEventTypeDefs.h:1145
	BrnNetwork::BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::EHeadingType meHeadingType;

	// BrnNetworkOutEventTypeDefs.h:1146
	char[66][31] maacHeadings;

	// BrnNetworkOutEventTypeDefs.h:1147
	bool mbIsPerRoad;

public:
	// BrnNetworkOutEventTypeDefs.h:1111
	void AddHeading(const char *);

	// BrnNetworkOutEventTypeDefs.h:1116
	const char * GetHeading(int32_t) const;

	// BrnNetworkOutEventTypeDefs.h:1120
	int32_t GetNumberOfHeadings() const;

	// BrnNetworkOutEventTypeDefs.h:1124
	void Clear();

	// BrnNetworkOutEventTypeDefs.h:1128
	void SetHeadingType(BrnNetwork::BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::EHeadingType);

	// BrnNetworkOutEventTypeDefs.h:1132
	BrnNetwork::BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::EHeadingType GetHeadingType() const;

	// BrnNetworkOutEventTypeDefs.h:1135
	bool IsPerRoad() const;

	// BrnNetworkOutEventTypeDefs.h:1139
	void SetPerRoad(bool);

}

// BrnNetworkOutEventTypeDefs.h:1159
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutScoreboardEvent : public NetworkEvent<48> {
private:
	// BrnNetworkOutEventTypeDefs.h:1185
	Scoreboard mScoreboard;

public:
	// BrnNetworkOutEventTypeDefs.h:1164
	void Construct();

	// BrnNetworkOutEventTypeDefs.h:1168
	bool Release();

	// BrnNetworkOutEventTypeDefs.h:1172
	void Destruct();

	// BrnNetworkOutEventTypeDefs.h:1176
	Scoreboard * GetScoreboard();

	// BrnNetworkOutEventTypeDefs.h:1180
	const Scoreboard * GetScoreboard() const;

}

// BrnNetworkOutEventTypeDefs.h:1197
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutRemotePlayerHitCheckpoint : public NetworkEvent<44> {
	// BrnNetworkOutEventTypeDefs.h:1199
	RoadRulesRecvData::NetworkPlayerID mNetworkPlayerID;

	// BrnNetworkOutEventTypeDefs.h:1200
	int32_t miCheckpointIndex;

}

// BrnNetworkOutEventTypeDefs.h:1211
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerCarSelectStatus : public NetworkEvent<45> {
	// BrnNetworkOutEventTypeDefs.h:1213
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnNetworkOutEventTypeDefs.h:1214
	bool mbInCarSelect;

}

// BrnNetworkOutEventTypeDefs.h:1225
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutRivalCount : public NetworkEvent<46> {
	// BrnNetworkOutEventTypeDefs.h:1227
	int32_t miNumberOfRivals;

}

// BrnNetworkOutEventTypeDefs.h:591
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent : public NetworkEvent<33> {
	// BrnNetworkOutEventTypeDefs.h:593
	ChallengeHighScoreEntry mPersonalBestScore;

	// BrnNetworkOutEventTypeDefs.h:594
	GuiEventNetworkLaunching::NetworkPlayerID mPersonalBestPlayerID;

	// BrnNetworkOutEventTypeDefs.h:595
	Road::ChallengeIndex mPersonalBestChallengeIndex;

	// BrnNetworkOutEventTypeDefs.h:596
	bool mbWasPBByFriend;

public:
	// BrnNetworkOutEventTypeDefs.h:600
	void Construct();

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// BrnNetworkAggressiveDrivingManager.h:40
	namespace BrnNetworkModuleIO {
		// Declaration
		struct NetworkOutPostEventScalps {
			// BrnNetworkOutEventTypeDefs.h:238
			struct OnlineScalp {
				// BrnNetworkOutEventTypeDefs.h:240
				int32_t miAggressorIndex;

				// BrnNetworkOutEventTypeDefs.h:241
				int32_t miVictimIndex;

			}

		}

		// Declaration
		struct NetworkOutScoreboardHeadingList {
			// BrnNetworkOutEventTypeDefs.h:1099
			enum EHeadingType {
				E_HEADING_CATEGORY = 0,
				E_HEADING_INDEX = 1,
				E_HEADING_VARIATION = 2,
				E_HEADING_COUNT = 3,
			}

		}

	}

}

// BrnNetworkOutEventTypeDefs.h:165
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutChatMessage : public NetworkEvent<3> {
	// BrnNetworkOutEventTypeDefs.h:167
	PlayerName mMessageSender;

	// BrnNetworkOutEventTypeDefs.h:168
	int32_t miMessageIndex;

	// BrnNetworkOutEventTypeDefs.h:169
	char[200] macMessage;

}

// BrnNetworkOutEventTypeDefs.h:561
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutLaunchEvent : public NetworkEvent<25> {
	// BrnNetworkOutEventTypeDefs.h:563
	BrnGameState::GameStateModuleIO::EGameModeType meGameModeType;

	// BrnNetworkOutEventTypeDefs.h:564
	AggressiveMoveData::NetworkPlayerID mHostPlayerID;

}

// BrnNetworkOutEventTypeDefs.h:591
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent : public NetworkEvent<33> {
	// BrnNetworkOutEventTypeDefs.h:593
	ChallengeHighScoreEntry mPersonalBestScore;

	// BrnNetworkOutEventTypeDefs.h:594
	AggressiveMoveData::NetworkPlayerID mPersonalBestPlayerID;

	// BrnNetworkOutEventTypeDefs.h:595
	Road::ChallengeIndex mPersonalBestChallengeIndex;

	// BrnNetworkOutEventTypeDefs.h:596
	bool mbWasPBByFriend;

public:
	// BrnNetworkOutEventTypeDefs.h:600
	void Construct();

}

// BrnNetworkOutEventTypeDefs.h:655
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutBuddyListChanged : public NetworkEvent<10> {
}

// BrnNetworkOutEventTypeDefs.h:684
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutLocalPlayerConnected : public NetworkEvent<37> {
	// BrnNetworkOutEventTypeDefs.h:686
	AggressiveMoveData::NetworkPlayerID mPlayerID;

}

// BrnNetworkOutEventTypeDefs.h:758
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutGetOfflineProgression : public NetworkEvent<50> {
}

// BrnNetworkOutEventTypeDefs.h:803
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutMugshotToSaveEvent : public NetworkEvent<53> {
	// BrnNetworkOutEventTypeDefs.h:805
	LiveRevengeRelationship::UniquePlayerID mUniquePlayerID;

	// BrnNetworkOutEventTypeDefs.h:806
	BrnGameState::GameStateModuleIO::EImageType meImageGalleryType;

	// BrnNetworkOutEventTypeDefs.h:807
	NetworkTexture * mpTexture;

}

// BrnNetworkOutEventTypeDefs.h:846
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutSwitchBurningHomeRunRunner : public NetworkEvent<56> {
	// BrnNetworkOutEventTypeDefs.h:848
	AggressiveMoveData::NetworkPlayerID mNewRunnerID;

}

// BrnNetworkOutEventTypeDefs.h:1008
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutAutosaveProfile : public NetworkEvent<31> {
}

// BrnNetworkOutEventTypeDefs.h:1020
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutInviteSent : public NetworkEvent<11> {
}

// BrnNetworkOutEventTypeDefs.h:1238
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutCaughtFever : public NetworkEvent<47> {
}

// BrnNetworkOutEventTypeDefs.h:1250
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutSentMugshot : public NetworkEvent<55> {
}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// Declaration
		struct NetworkPlayerDisconnectedEvent {
			// BrnNetworkOutEventTypeDefs.h:126
			enum EDisconnectStatus {
				E_DISCONNECT_STATUS_CONNECTED = 0,
				E_DISCONNECT_STATUS_LOST_CONTACT = 1,
				E_DISCONNECT_STATUS_DISCONNECTED = 2,
				E_DISCONNECT_STATUS_COUNT = 3,
			}

		}

		// Declaration
		struct NetworkOutScoreboardHeadingList {
			// BrnNetworkOutEventTypeDefs.h:1099
			enum EHeadingType {
				E_HEADING_CATEGORY = 0,
				E_HEADING_INDEX = 1,
				E_HEADING_VARIATION = 2,
				E_HEADING_COUNT = 3,
			}

		}

	}

}

// BrnNetworkOutEventTypeDefs.h:181
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutUnreadChatMessage : public NetworkEvent<5> {
	// BrnNetworkOutEventTypeDefs.h:183
	PlayerName mMessageSender;

	// BrnNetworkOutEventTypeDefs.h:184
	int32_t miMessageIndex;

	// BrnNetworkOutEventTypeDefs.h:185
	char[200] macMessage;

}

// BrnNetworkOutEventTypeDefs.h:981
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutImageDxtDecodedEvent : public NetworkEvent<64> {
	// BrnNetworkOutEventTypeDefs.h:983
	void * mpDecodedPixels;

	// BrnNetworkOutEventTypeDefs.h:984
	PlayerName mPlayerName;

}

// BrnNetworkOutEventTypeDefs.h:935
struct BrnNetwork::BrnNetworkModuleIO::NetworkOutFburnChallengeSuccessUpdateEvent : public NetworkEvent<62> {
	// BrnGameStateSharedIO.h:313
	typedef FastBitArray<60> LastSecondChallengeSuccess;

	// BrnNetworkOutEventTypeDefs.h:937
	NetworkOutFburnChallengeSuccessUpdateEvent::LastSecondChallengeSuccess mChallengeSuccessUpdate;

	// BrnNetworkOutEventTypeDefs.h:938
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnNetworkOutEventTypeDefs.h:939
	int32_t miChallengeUpdateFrame;

	// BrnNetworkOutEventTypeDefs.h:940
	int32_t miActionIndex;

}


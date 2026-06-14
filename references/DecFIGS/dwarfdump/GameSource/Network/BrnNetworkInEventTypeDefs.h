// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkInEventTypeDefs.h:55
		using BrnGameState::GameStateModuleIO;

	}

}

// BrnNetworkInEventTypeDefs.h:732
extern const int32_t KI_INVALID_HEADING = 4294967295;

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkInEventTypeDefs.h:55
		using BrnGameState::GameStateModuleIO;

		// BrnNetworkInEventTypeDefs.h:57
		enum ECameraUserOptions {
			CAMERA_USER_OFF = 0,
			CAMERA_USER_ON = 1,
			CAMERA_USER_FRIENDS_ONLY = 2,
		}

		// Declaration
		struct NetworkInSelectScoreboardEvent {
			// BrnNetworkInEventTypeDefs.h:672
			enum EScoreboardEventType {
				E_TYPE_NONE = 0,
				E_TYPE_GET_CATEGORY = 1,
				E_TYPE_GET_INDEX = 2,
				E_TYPE_GET_VARIATION = 3,
				E_TYPE_GET_SCOREBOARD = 4,
				E_TYPE_PAGE_UP = 5,
				E_TYPE_PAGE_DOWN = 6,
				E_TYPE_COUNT = 7,
			}

		}

	}

}

// BrnNetworkInEventTypeDefs.h:341
struct BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent : public NetworkEvent<19> {
	// BrnNetworkInEventTypeDefs.h:343
	ChallengePlayerScoreEntry mPersonalBestScore;

	// BrnNetworkInEventTypeDefs.h:344
	Road::ChallengeIndex mChallengeIndex;

	// BrnNetworkInEventTypeDefs.h:345
	bool mbLobbyPersonalBest;

}

// BrnNetworkInEventTypeDefs.h:393
struct BrnNetwork::BrnNetworkModuleIO::NetworkInPaybackMugshotEvent : public NetworkEvent<29> {
	// BrnNetworkInEventTypeDefs.h:396
	EActiveRaceCarIndex meTakedownAggressorIndex;

	// BrnNetworkInEventTypeDefs.h:397
	EActiveRaceCarIndex meTakedownVictimIndex;

	// BrnNetworkInEventTypeDefs.h:398
	BrnGameState::GameStateModuleIO::EMugshotResponse meMugshotResponse;

	// BrnNetworkInEventTypeDefs.h:399
	BrnGameState::GameStateModuleIO::EImageType meMugshotType;

	// BrnNetworkInEventTypeDefs.h:400
	CgsID mRoadRuleBeatenRoadID;

	// BrnNetworkInEventTypeDefs.h:401
	bool mbIsTakedownAggressorLocalPlayer;

	// BrnNetworkInEventTypeDefs.h:402
	bool mbMugshotRequiresBroadcast;

}

// BrnNetworkInEventTypeDefs.h:438
struct BrnNetwork::BrnNetworkModuleIO::NetworkInOfflineProgression : public NetworkEvent<33> {
	// BrnNetworkSharedServerTypes.h:84
	typedef OfflineProgressionT OfflineProgressionT;

	// BrnNetworkInEventTypeDefs.h:440
	NetworkInOfflineProgression::OfflineProgressionT mOfflineProgression;

}

// BrnNetworkInEventTypeDefs.h:451
struct BrnNetwork::BrnNetworkModuleIO::NetworkInPaybackIntialised : public NetworkEvent<31> {
	// BrnNetworkInEventTypeDefs.h:453
	EActiveRaceCarIndex mePaybackAggressorIndex;

	// BrnNetworkInEventTypeDefs.h:454
	EActiveRaceCarIndex mePaybackVictimIndex;

}

// BrnNetworkInEventTypeDefs.h:465
struct BrnNetwork::BrnNetworkModuleIO::NetworkInPaybackSucceeded : public NetworkEvent<32> {
	// BrnNetworkInEventTypeDefs.h:467
	EActiveRaceCarIndex mePaybackAggressorIndex;

	// BrnNetworkInEventTypeDefs.h:468
	EActiveRaceCarIndex mePaybackVictimIndex;

}

// BrnNetworkInEventTypeDefs.h:563
struct BrnNetwork::BrnNetworkModuleIO::NetworkInFreeburnChallengeEvent : public NetworkEvent<38> {
	// BrnNetworkInEventTypeDefs.h:565
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

	// BrnNetworkInEventTypeDefs.h:566
	CgsID mChallengeID;

	// BrnNetworkInEventTypeDefs.h:567
	BrnNetwork::BrnNetworkModuleIO::EChallengeEventType meEventType;

	// BrnNetworkInEventTypeDefs.h:568
	BrnGameState::EChallengeStatus meChallengeStatus;

	// BrnNetworkInEventTypeDefs.h:569
	int32_t miActionIndex;

	// BrnNetworkInEventTypeDefs.h:570
	int32_t miNumberOfCompletedChallenges;

}

// BrnNetworkInEventTypeDefs.h:653
struct BrnNetwork::BrnNetworkModuleIO::NetworkInDxtDecodeImageEvent : public NetworkEvent<46> {
	// BrnNetworkInEventTypeDefs.h:655
	NetworkTexture * mpTextureToDecode;

	// BrnNetworkInEventTypeDefs.h:656
	PlayerName mPlayerName;

}

// BrnNetworkInEventTypeDefs.h:668
struct BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent : public NetworkEvent<47> {
	// BrnNetworkInEventTypeDefs.h:732
	extern const int32_t KI_INVALID_HEADING = 4294967295;

private:
	// BrnNetworkInEventTypeDefs.h:737
	int32_t miCategory;

	// BrnNetworkInEventTypeDefs.h:738
	int32_t miIndex;

	// BrnNetworkInEventTypeDefs.h:739
	int32_t miVariation;

	// BrnNetworkInEventTypeDefs.h:741
	BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent::EScoreboardEventType meType;

public:
	// BrnNetworkInEventTypeDefs.h:687
	void Prepare();

	// BrnNetworkInEventTypeDefs.h:691
	void GetCategories();

	// BrnNetworkInEventTypeDefs.h:696
	void GetIndexes(int32_t);

	// BrnNetworkInEventTypeDefs.h:701
	void GetVariations(int32_t);

	// BrnNetworkInEventTypeDefs.h:706
	void GetScoreboard(int32_t);

	// BrnNetworkInEventTypeDefs.h:710
	void PageUp();

	// BrnNetworkInEventTypeDefs.h:714
	void PageDown();

	// BrnNetworkInEventTypeDefs.h:718
	int32_t GetChosenCategory() const;

	// BrnNetworkInEventTypeDefs.h:722
	int32_t GetChosenIndex() const;

	// BrnNetworkInEventTypeDefs.h:726
	int32_t GetChosenVariation() const;

	// BrnNetworkInEventTypeDefs.h:730
	BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent::EScoreboardEventType GetScoreboardEventType();

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkInEventTypeDefs.h:55
		using BrnGameState::GameStateModuleIO;

		// BrnNetworkInEventTypeDefs.h:57
		enum ECameraUserOptions {
			CAMERA_USER_OFF = 0,
			CAMERA_USER_ON = 1,
			CAMERA_USER_FRIENDS_ONLY = 2,
		}

	}

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkInEventTypeDefs.h:55
		using BrnGameState::GameStateModuleIO;

		// BrnNetworkInEventTypeDefs.h:57
		enum ECameraUserOptions {
			CAMERA_USER_OFF = 0,
			CAMERA_USER_ON = 1,
			CAMERA_USER_FRIENDS_ONLY = 2,
		}

		// Declaration
		struct NetworkInBurnoutSkillzEvent {
			// BrnNetworkInEventTypeDefs.h:509
			enum EEventType {
				E_EVENT_TYPE_SEND_TO_ALL_PLAYERS = 0,
				E_EVENT_TYPE_SEND_TO_A_SPECIFIC_PLAYER = 1,
				E_EVENT_TYPE_COUNT = 2,
			}

		}

		// Declaration
		struct NetworkInSelectScoreboardEvent {
			// BrnNetworkInEventTypeDefs.h:672
			enum EScoreboardEventType {
				E_TYPE_NONE = 0,
				E_TYPE_GET_CATEGORY = 1,
				E_TYPE_GET_INDEX = 2,
				E_TYPE_GET_VARIATION = 3,
				E_TYPE_GET_SCOREBOARD = 4,
				E_TYPE_PAGE_UP = 5,
				E_TYPE_PAGE_DOWN = 6,
				E_TYPE_COUNT = 7,
			}

		}

	}

}

// BrnNetworkInEventTypeDefs.h:82
struct BrnNetwork::BrnNetworkModuleIO::NetworkInGetBuddies : public NetworkEvent<2> {
}

// BrnNetworkInEventTypeDefs.h:138
struct BrnNetwork::BrnNetworkModuleIO::NetworkInSendInvite : public NetworkEvent<8> {
	// BrnNetworkInEventTypeDefs.h:140
	PlayerName mBuddyToSendTo;

}

// BrnNetworkInEventTypeDefs.h:152
struct BrnNetwork::BrnNetworkModuleIO::NetworkInRevokeInvite : public NetworkEvent<9> {
	// BrnNetworkInEventTypeDefs.h:154
	PlayerName mBuddyToRevokeInviteTo;

	// BrnNetworkInEventTypeDefs.h:155
	bool mbHasOnlineGameBeenStarted;

}

// BrnNetworkInEventTypeDefs.h:167
struct BrnNetwork::BrnNetworkModuleIO::NetworkInAcceptInvite : public NetworkEvent<10> {
	// BrnNetworkInEventTypeDefs.h:169
	PlayerName mBuddyName;

}

// BrnNetworkInEventTypeDefs.h:181
struct BrnNetwork::BrnNetworkModuleIO::NetworkInDeclineInvite : public NetworkEvent<11> {
	// BrnNetworkInEventTypeDefs.h:183
	PlayerName mBuddyToDecline;

}

// BrnNetworkInEventTypeDefs.h:195
struct BrnNetwork::BrnNetworkModuleIO::NetworkInShowProfile : public NetworkEvent<13> {
	// BrnNetworkInEventTypeDefs.h:197
	PlayerName mBuddyToShowProfile;

}

// BrnNetworkInEventTypeDefs.h:209
struct BrnNetwork::BrnNetworkModuleIO::NetworkInFriendsUtilShut : public NetworkEvent<6> {
}

// BrnNetworkInEventTypeDefs.h:222
struct BrnNetwork::BrnNetworkModuleIO::NetworkInLeavingJunkyard : public NetworkEvent<28> {
}

// BrnNetworkInEventTypeDefs.h:245
struct BrnNetwork::BrnNetworkModuleIO::NetworkInUpdateRichPresence : public NetworkEvent<15> {
	// BrnNetworkInEventTypeDefs.h:247
	char[100] macRichPresenceString;

}

// BrnNetworkInEventTypeDefs.h:259
struct BrnNetwork::BrnNetworkModuleIO::NetworkInJoinBuddy : public NetworkEvent<12> {
	// BrnNetworkInEventTypeDefs.h:261
	PlayerName mBuddyToJoin;

}

// BrnNetworkInEventTypeDefs.h:273
struct BrnNetwork::BrnNetworkModuleIO::NetworkInTelemetryEvent : public NetworkEvent<16> {
	// BrnNetworkInEventTypeDefs.h:275
	TelemetryData mEventData;

}

// BrnNetworkInEventTypeDefs.h:287
struct BrnNetwork::BrnNetworkModuleIO::NetworkInVoipEvent : public NetworkEvent<17> {
	// BrnNetworkInEventTypeDefs.h:289
	int32_t miVoipVolume;

}

// BrnNetworkInEventTypeDefs.h:301
struct BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesDataEvent : public NetworkEvent<18> {
private:
	// BrnNetworkInEventTypeDefs.h:325
	uint64_t mu64RoadRulesID;

	// BrnNetworkInEventTypeDefs.h:326
	uint32_t muTimeStampOfLastRoadRulesDownload;

	// BrnNetworkInEventTypeDefs.h:329
	StreetManager * mpStreetManager;

public:
	// BrnNetworkInEventTypeDefs.h:308
	void Construct(uint64_t, uint32_t, StreetManager *);

	// BrnNetworkInEventTypeDefs.h:314
	void GetRoadRulesScoreData(ChallengePlayerScoreEntry *, int32_t) const;

	// BrnNetworkInEventTypeDefs.h:318
	uint32_t GetTimeStampOfLastRoadRulesDownload() const;

	// BrnNetworkInEventTypeDefs.h:321
	uint64_t GetRoadRulesID() const;

}

// BrnNetworkInEventTypeDefs.h:424
struct BrnNetwork::BrnNetworkModuleIO::NetworkInSettingsUpdateEvent : public NetworkEvent<23> {
	// BrnNetworkInEventTypeDefs.h:426
	BrnNetwork::BrnNetworkModuleIO::ECameraUserOptions meCameraFeedSetting;

}

// BrnNetworkInEventTypeDefs.h:480
struct BrnNetwork::BrnNetworkModuleIO::NetworkInLiveRevengeProfileLoaded : public NetworkEvent<24> {
	// BrnNetworkInEventTypeDefs.h:482
	BrnNetwork::LiveRevengeProfile * mpLiveRevengeProfile;

}

// BrnNetworkInEventTypeDefs.h:493
struct BrnNetwork::BrnNetworkModuleIO::NetworkInSwitchBurningHomeRunRunner : public NetworkEvent<34> {
	// BrnNetworkInEventTypeDefs.h:495
	RoadRulesRecvData::NetworkPlayerID mNewRunnerID;

}

// BrnNetworkInEventTypeDefs.h:506
struct BrnNetwork::BrnNetworkModuleIO::NetworkInBurnoutSkillzEvent : public NetworkEvent<35> {
	// BrnNetworkInEventTypeDefs.h:517
	BurnoutSkillzData mNewSkillzData;

	// BrnNetworkInEventTypeDefs.h:522
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

	// BrnNetworkInEventTypeDefs.h:523
	BrnNetwork::BrnNetworkModuleIO::NetworkInBurnoutSkillzEvent::EEventType meEventType;

}

// BrnNetworkInEventTypeDefs.h:534
struct BrnNetwork::BrnNetworkModuleIO::NetworkInShowtimeUpdateEvent : public NetworkEvent<36> {
	// BrnNetworkInEventTypeDefs.h:536
	int32_t miShowtimeScore;

	// BrnNetworkInEventTypeDefs.h:537
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

}

// BrnNetworkInEventTypeDefs.h:548
struct BrnNetwork::BrnNetworkModuleIO::NetworkInShowtimeSwitchEvent : public NetworkEvent<37> {
	// BrnNetworkInEventTypeDefs.h:550
	int32_t miFinalShowtimeScore;

	// BrnNetworkInEventTypeDefs.h:551
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

	// BrnNetworkInEventTypeDefs.h:552
	bool mbEnteringShowtime;

}

// BrnNetworkInEventTypeDefs.h:581
struct BrnNetwork::BrnNetworkModuleIO::NetworkInFburnChallengeStatusEvent : public NetworkEvent<39> {
	// BrnNetworkInEventTypeDefs.h:583
	CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

	// BrnNetworkInEventTypeDefs.h:584
	RoadRulesRecvData::NetworkPlayerID mPlayerID;

}

// BrnNetworkInEventTypeDefs.h:595
struct BrnNetwork::BrnNetworkModuleIO::NetworkInFburnSuccessUpdateEvent : public NetworkEvent<40> {
	// BrnNetworkInEventTypeDefs.h:597
	FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess mChallengeSuccessUpdate;

	// BrnNetworkInEventTypeDefs.h:598
	int32_t miActionIndex;

}

// BrnNetworkInEventTypeDefs.h:609
struct BrnNetwork::BrnNetworkModuleIO::NetworkInFburnChallengeSuccessEvent : public NetworkEvent<41> {
	// BrnNetworkInEventTypeDefs.h:611
	float32_t[2] mafActionScores;

	// BrnNetworkInEventTypeDefs.h:612
	bool[2] mabSuccessfulActions;

	// BrnNetworkInEventTypeDefs.h:613
	bool[2] mabAccumulationThisFrame;

}

// BrnNetworkInEventTypeDefs.h:624
struct BrnNetwork::BrnNetworkModuleIO::NetworkInActiveFburnChallengeEvent : public NetworkEvent<42> {
	// BrnNetworkInEventTypeDefs.h:626
	EActiveRaceCarIndex[7] maePlayersInChallengeARCI;

	// BrnNetworkInEventTypeDefs.h:627
	CgsID mChallengeID;

	// BrnNetworkInEventTypeDefs.h:628
	RoadRulesRecvData::NetworkPlayerID mPlayerToSendToID;

	// BrnNetworkInEventTypeDefs.h:629
	int32_t miNumPlayersInChallenge;

}

// BrnNetworkInEventTypeDefs.h:640
struct BrnNetwork::BrnNetworkModuleIO::NetworkInChangeDistrictEvent : public NetworkEvent<43> {
	// BrnNetworkInEventTypeDefs.h:642
	WorldRegion mNewWorldRegion;

}

// BrnNetworkInEventTypeDefs.h:761
struct BrnNetwork::BrnNetworkModuleIO::NetworkInAccountUpdate : public NetworkEvent<49> {
	// BrnNetworkInEventTypeDefs.h:763
	bool mbAgreeToShareInfoEA;

	// BrnNetworkInEventTypeDefs.h:764
	bool mbAgreeToShareInfoPartners;

	// BrnNetworkInEventTypeDefs.h:765
	bool mbTelemetryEnable;

}

// BrnNetworkInEventTypeDefs.h:776
struct BrnNetwork::BrnNetworkModuleIO::NetworkInReqCamPicEvent : public NetworkEvent<50> {
	// BrnNetworkInEventTypeDefs.h:778
	int32_t miQualitySetting;

	// BrnNetworkInEventTypeDefs.h:779
	renderengine::PixelFormat meCompressedFormat;

	// BrnNetworkInEventTypeDefs.h:780
	NetworkTexture * mpTextureToCompressedInto;

}

// BrnNetworkInEventTypeDefs.h:791
struct BrnNetwork::BrnNetworkModuleIO::NetworkInLocalPlayerCrashesEvent : public NetworkEvent<51> {
	// BrnNetworkInEventTypeDefs.h:793
	EActiveRaceCarIndex meCrasherRaceCarIndex;

}

// BrnNetworkInEventTypeDefs.h:804
struct BrnNetwork::BrnNetworkModuleIO::NetworkInLocalPlayerReachesCheckpoint : public NetworkEvent<44> {
	// BrnNetworkInEventTypeDefs.h:806
	int32_t miCheckpointIndex;

}

// BrnNetworkInEventTypeDefs.h:817
struct BrnNetwork::BrnNetworkModuleIO::NetworkInShowGamerCard : public NetworkEvent<45> {
	// BrnNetworkInEventTypeDefs.h:819
	PlayerName mPlayerName;

}

// BrnNetworkInEventTypeDefs.h:563
struct BrnNetwork::BrnNetworkModuleIO::NetworkInFreeburnChallengeEvent : public NetworkEvent<38> {
	// BrnNetworkInEventTypeDefs.h:565
	GuiEventNetworkLaunching::NetworkPlayerID mPlayerID;

	// BrnNetworkInEventTypeDefs.h:566
	CgsID mChallengeID;

	// BrnNetworkInEventTypeDefs.h:567
	BrnNetwork::BrnNetworkModuleIO::EChallengeEventType meEventType;

	// BrnNetworkInEventTypeDefs.h:568
	BrnGameState::EChallengeStatus meChallengeStatus;

	// BrnNetworkInEventTypeDefs.h:569
	int32_t miActionIndex;

	// BrnNetworkInEventTypeDefs.h:570
	int32_t miNumberOfCompletedChallenges;

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// BrnNetworkSharedIO.h:439
	namespace BrnNetworkModuleIO {
		// BrnNetworkInEventTypeDefs.h:55
		using BrnGameState::GameStateModuleIO;

		// BrnNetworkInEventTypeDefs.h:57
		enum ECameraUserOptions {
			CAMERA_USER_OFF = 0,
			CAMERA_USER_ON = 1,
			CAMERA_USER_FRIENDS_ONLY = 2,
		}

		// Declaration
		struct NetworkInSelectScoreboardEvent {
			// BrnNetworkInEventTypeDefs.h:672
			enum EScoreboardEventType {
				E_TYPE_NONE = 0,
				E_TYPE_GET_CATEGORY = 1,
				E_TYPE_GET_INDEX = 2,
				E_TYPE_GET_VARIATION = 3,
				E_TYPE_GET_SCOREBOARD = 4,
				E_TYPE_PAGE_UP = 5,
				E_TYPE_PAGE_DOWN = 6,
				E_TYPE_COUNT = 7,
			}

		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// BrnNetworkAggressiveDrivingManager.h:40
	namespace BrnNetworkModuleIO {
		// BrnNetworkInEventTypeDefs.h:55
		using BrnGameState::GameStateModuleIO;

		// BrnNetworkInEventTypeDefs.h:57
		enum ECameraUserOptions {
			CAMERA_USER_OFF = 0,
			CAMERA_USER_ON = 1,
			CAMERA_USER_FRIENDS_ONLY = 2,
		}

		// Declaration
		struct NetworkInBurnoutSkillzEvent {
			// BrnNetworkInEventTypeDefs.h:509
			enum EEventType {
				E_EVENT_TYPE_SEND_TO_ALL_PLAYERS = 0,
				E_EVENT_TYPE_SEND_TO_A_SPECIFIC_PLAYER = 1,
				E_EVENT_TYPE_COUNT = 2,
			}

		}

		// Declaration
		struct NetworkInSelectScoreboardEvent {
			// BrnNetworkInEventTypeDefs.h:672
			enum EScoreboardEventType {
				E_TYPE_NONE = 0,
				E_TYPE_GET_CATEGORY = 1,
				E_TYPE_GET_INDEX = 2,
				E_TYPE_GET_VARIATION = 3,
				E_TYPE_GET_SCOREBOARD = 4,
				E_TYPE_PAGE_UP = 5,
				E_TYPE_PAGE_DOWN = 6,
				E_TYPE_COUNT = 7,
			}

		}

	}

}

// BrnNetworkInEventTypeDefs.h:94
struct BrnNetwork::BrnNetworkModuleIO::NetworkInGetChatMessage : public NetworkEvent<3> {
	// BrnNetworkInEventTypeDefs.h:96
	PlayerName mMessageSender;

	// BrnNetworkInEventTypeDefs.h:97
	int32_t miMessageIndex;

}

// BrnNetworkInEventTypeDefs.h:109
struct BrnNetwork::BrnNetworkModuleIO::NetworkInSendChatMessage : public NetworkEvent<4> {
	// BrnNetworkInEventTypeDefs.h:111
	PlayerName mBuddyToSendTo;

	// BrnNetworkInEventTypeDefs.h:112
	char[200] macMessageBuffer;

}

// BrnNetworkInEventTypeDefs.h:124
struct BrnNetwork::BrnNetworkModuleIO::NetworkInGetNextUnreadMessage : public NetworkEvent<5> {
	// BrnNetworkInEventTypeDefs.h:126
	PlayerName mMessageSender;

}

// BrnNetworkInEventTypeDefs.h:378
struct BrnNetwork::BrnNetworkModuleIO::NetworkInSendFeedback : public NetworkEvent<7> {
	// BrnNetworkInEventTypeDefs.h:380
	PlayerName lPlayerName;

	// BrnNetworkInEventTypeDefs.h:381
	CgsNetwork::EFeedbackType leFeedbackType;

}

// BrnNetworkInEventTypeDefs.h:493
struct BrnNetwork::BrnNetworkModuleIO::NetworkInSwitchBurningHomeRunRunner : public NetworkEvent<34> {
	// BrnNetworkInEventTypeDefs.h:495
	AggressiveMoveData::NetworkPlayerID mNewRunnerID;

}

// BrnNetworkInEventTypeDefs.h:506
struct BrnNetwork::BrnNetworkModuleIO::NetworkInBurnoutSkillzEvent : public NetworkEvent<35> {
	// BrnNetworkInEventTypeDefs.h:517
	BurnoutSkillzData mNewSkillzData;

	// BrnNetworkInEventTypeDefs.h:522
	AggressiveMoveData::NetworkPlayerID mPlayerID;

	// BrnNetworkInEventTypeDefs.h:523
	BrnNetwork::BrnNetworkModuleIO::NetworkInBurnoutSkillzEvent::EEventType meEventType;

}

// BrnNetworkInEventTypeDefs.h:534
struct BrnNetwork::BrnNetworkModuleIO::NetworkInShowtimeUpdateEvent : public NetworkEvent<36> {
	// BrnNetworkInEventTypeDefs.h:536
	int32_t miShowtimeScore;

	// BrnNetworkInEventTypeDefs.h:537
	AggressiveMoveData::NetworkPlayerID mPlayerID;

}

// BrnNetworkInEventTypeDefs.h:548
struct BrnNetwork::BrnNetworkModuleIO::NetworkInShowtimeSwitchEvent : public NetworkEvent<37> {
	// BrnNetworkInEventTypeDefs.h:550
	int32_t miFinalShowtimeScore;

	// BrnNetworkInEventTypeDefs.h:551
	AggressiveMoveData::NetworkPlayerID mPlayerID;

	// BrnNetworkInEventTypeDefs.h:552
	bool mbEnteringShowtime;

}

// BrnNetworkInEventTypeDefs.h:563
struct BrnNetwork::BrnNetworkModuleIO::NetworkInFreeburnChallengeEvent : public NetworkEvent<38> {
	// BrnNetworkInEventTypeDefs.h:565
	AggressiveMoveData::NetworkPlayerID mPlayerID;

	// BrnNetworkInEventTypeDefs.h:566
	CgsID mChallengeID;

	// BrnNetworkInEventTypeDefs.h:567
	BrnNetwork::BrnNetworkModuleIO::EChallengeEventType meEventType;

	// BrnNetworkInEventTypeDefs.h:568
	BrnGameState::EChallengeStatus meChallengeStatus;

	// BrnNetworkInEventTypeDefs.h:569
	int32_t miActionIndex;

	// BrnNetworkInEventTypeDefs.h:570
	int32_t miNumberOfCompletedChallenges;

}

// BrnNetworkInEventTypeDefs.h:581
struct BrnNetwork::BrnNetworkModuleIO::NetworkInFburnChallengeStatusEvent : public NetworkEvent<39> {
	// BrnNetworkInEventTypeDefs.h:583
	CompletedFburnChallengesData::CompletedFburnChallenges mCompletedChallenges;

	// BrnNetworkInEventTypeDefs.h:584
	AggressiveMoveData::NetworkPlayerID mPlayerID;

}

// BrnNetworkInEventTypeDefs.h:624
struct BrnNetwork::BrnNetworkModuleIO::NetworkInActiveFburnChallengeEvent : public NetworkEvent<42> {
	// BrnNetworkInEventTypeDefs.h:626
	EActiveRaceCarIndex[7] maePlayersInChallengeARCI;

	// BrnNetworkInEventTypeDefs.h:627
	CgsID mChallengeID;

	// BrnNetworkInEventTypeDefs.h:628
	AggressiveMoveData::NetworkPlayerID mPlayerToSendToID;

	// BrnNetworkInEventTypeDefs.h:629
	int32_t miNumPlayersInChallenge;

}

// BrnNetworkInEventTypeDefs.h:653
struct BrnNetwork::BrnNetworkModuleIO::NetworkInDxtDecodeImageEvent : public NetworkEvent<46> {
	// BrnNetworkInEventTypeDefs.h:655
	CgsNetwork::NetworkTexture * mpTextureToDecode;

	// BrnNetworkInEventTypeDefs.h:656
	PlayerName mPlayerName;

}


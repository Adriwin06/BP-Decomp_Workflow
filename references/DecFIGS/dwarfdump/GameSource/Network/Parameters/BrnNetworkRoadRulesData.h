// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	struct RoadRulesMessageData;

	struct RoadRulesRecvData;

	// BrnNetworkRoadRulesData.h:31
	const int32_t KI_MAX_UPLOAD_DATA = 15;

	// BrnNetworkRoadRulesData.h:32
	const int32_t KI_MAX_DOWNLOAD_DATA = 40;

}

// BrnNetworkRoadRulesData.h:179
extern const int32_t KI_DOWNLOAD_DATA_PATTERN_LENGTH = 123;

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	struct RoadRulesUploadData;

	struct RoadRulesMessageData;

	struct RoadRulesRecvData;

	struct RoadRulesDownloadEvent;

	struct CommonRelationshipStats;

	struct CommonRelationship;

	struct ScoreboardRow;

	struct Scoreboard;

	struct LiveRevengeProfile;

	struct LiveRevengeMappingEntry;

	struct LiveRevengeSyncMessage;

	struct LiveRevengeDebugComponent;

	struct BrnNetworkModule;

	struct StatsRequestEvent;

	struct LoginManagerPS3;

	struct ConnectionManager;

	struct GameSearchParams;

	struct GameResults;

	struct BuddyManagerPS3;

	struct StandingsData;

	struct PlayerFinishedRoundMessage;

	struct HullToActivateInfo;

	struct CrashingTrafficData;

	struct HullSyncMessage;

	struct CrashingTrafficMessage;

	struct RestartTrafficMessage;

	struct TrafficHashMessage;

	struct NetworkPlayerStatsResults;

	struct StatsDebugComponent;

	struct StatsUpdateMessage;

	struct BrnServerInterface;

	struct ScoreboardDebugComponent;

	struct AggressiveMoveData;

	struct AggressiveDrivingMessage;

	struct DirtyTrickMessage;

	struct ImageManagerDebugComponent;

	struct SelectedRoutesMessage;

	struct MarkedManMessage;

	struct RoadRulesMessage;

	struct RoadRulesPersonalBestMessage;

	struct RoadRulesManagerDebugComponent;

	struct FburnSuccessUpdateMessage;

	struct FburnChallengeSuccessMessage;

	struct PlayerInfoData;

	struct NetworkGamerCardManagerPS3;

	struct CameraRequestResponseMessage;

	struct CameraStatusMessage;

	struct CameraRequestMessage;

	struct NetworkNotificationManagerPS3;

	struct BrnNetworkPlayer;

	struct PlayerMenuData;

	// BrnNetworkRoadRulesData.h:31
	const int32_t KI_MAX_UPLOAD_DATA = 15;

	// BrnNetworkRoadRulesData.h:32
	const int32_t KI_MAX_DOWNLOAD_DATA = 40;

}

// BrnNetworkRoadRulesData.h:47
struct BrnNetwork::RoadRulesUploadData {
private:
	// BrnNetworkRoadRulesData.h:99
	CgsID[15] maCarIDs;

	// BrnNetworkRoadRulesData.h:100
	uint64_t mu64RoadRulesID;

	// BrnNetworkRoadRulesData.h:101
	int32_t[15] maiRecordIndices;

	// BrnNetworkRoadRulesData.h:102
	int32_t[15] maiQuantisedScore;

	// BrnNetworkRoadRulesData.h:103
	int32_t miNumScores;

public:
	// BrnNetworkRoadRulesData.h:53
	void Construct(uint64_t);

	// BrnNetworkRoadRulesData.h:60
	bool SetScoreData(int32_t, int32_t, CgsID);

	// BrnNetworkRoadRulesData.h:64
	int32_t GetNumScores();

	// BrnNetworkRoadRulesData.h:69
	int32_t GetScoreValue(int32_t);

	// BrnNetworkRoadRulesData.h:74
	int32_t GetRecordIndex(int32_t);

	// BrnNetworkRoadRulesData.h:79
	CgsID GetCarID(int32_t);

	// BrnNetworkRoadRulesData.h:83
	uint64_t GetUniqueID();

	// BrnNetworkRoadRulesData.h:87
	const char * GetPattern() const;

	// BrnNetworkRoadRulesData.h:91
	int32_t GetDataSize() const;

	// BrnNetworkRoadRulesData.h:95
	void * GetData();

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	struct RoadRulesMessageData;

	struct RoadRulesRecvData;

	struct RoadRulesDownloadEvent;

	struct CommonRelationshipStats;

	struct CommonRelationship;

	// BrnNetworkRoadRulesData.h:31
	const int32_t KI_MAX_UPLOAD_DATA = 15;

	// BrnNetworkRoadRulesData.h:32
	const int32_t KI_MAX_DOWNLOAD_DATA = 40;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	struct CommonRelationshipStats;

	struct CommonRelationship;

	struct ScoreboardRow;

	struct Scoreboard;

	struct LiveRevengeProfile;

	// BrnNetworkRoadRulesData.h:31
	const int32_t KI_MAX_UPLOAD_DATA = 15;

	// BrnNetworkRoadRulesData.h:32
	const int32_t KI_MAX_DOWNLOAD_DATA = 40;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	struct RoadRulesMessageData;

	struct RoadRulesRecvData;

	struct CommonRelationshipStats;

	struct CommonRelationship;

	// BrnNetworkRoadRulesData.h:31
	const int32_t KI_MAX_UPLOAD_DATA = 15;

	// BrnNetworkRoadRulesData.h:32
	const int32_t KI_MAX_DOWNLOAD_DATA = 40;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	struct RoadRulesMessageData;

	struct RoadRulesRecvData;

	struct RoadRulesDownloadEvent;

	struct CommonRelationshipStats;

	struct CommonRelationship;

	struct ScoreboardRow;

	struct Scoreboard;

	struct LiveRevengeProfile;

	struct LiveRevengeMappingEntry;

	struct LiveRevengeSyncMessage;

	struct LiveRevengeDebugComponent;

	struct BrnNetworkManager;

	struct BrnNetworkModule;

	// BrnNetworkRoadRulesData.h:31
	const int32_t KI_MAX_UPLOAD_DATA = 15;

	// BrnNetworkRoadRulesData.h:32
	const int32_t KI_MAX_DOWNLOAD_DATA = 40;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	struct CommonRelationshipStats;

	struct CommonRelationship;

	struct LiveRevengeProfile;

	// BrnNetworkRoadRulesData.h:31
	const int32_t KI_MAX_UPLOAD_DATA = 15;

	// BrnNetworkRoadRulesData.h:32
	const int32_t KI_MAX_DOWNLOAD_DATA = 40;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	struct RoadRulesMessageData;

	struct RoadRulesRecvData;

	struct CommonRelationshipStats;

	struct CommonRelationship;

	struct LiveRevengeProfile;

	// BrnNetworkRoadRulesData.h:31
	const int32_t KI_MAX_UPLOAD_DATA = 15;

	// BrnNetworkRoadRulesData.h:32
	const int32_t KI_MAX_DOWNLOAD_DATA = 40;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	struct CommonRelationshipStats;

	struct CommonRelationship;

	// BrnNetworkRoadRulesData.h:31
	const int32_t KI_MAX_UPLOAD_DATA = 15;

	// BrnNetworkRoadRulesData.h:32
	const int32_t KI_MAX_DOWNLOAD_DATA = 40;

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// BrnNetworkRoadRulesData.h:31
	const int32_t KI_MAX_UPLOAD_DATA = 15;

	// BrnNetworkRoadRulesData.h:32
	const int32_t KI_MAX_DOWNLOAD_DATA = 40;

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct RoadRulesDownloadData {
		// BrnNetworkRoadRulesData.h:166
		struct DownloadData {
			// BrnNetworkRoadRulesData.h:167
			char[40][20] macPlayerNames;

			// BrnNetworkRoadRulesData.h:169
			int32_t[40] maiScoreTypes;

			// BrnNetworkRoadRulesData.h:170
			int32_t[40] maiQuantisedScore;

			// BrnNetworkRoadRulesData.h:171
			int32_t miNumScores;

		}

	}

	// BrnNetworkRoadRulesData.h:31
	const int32_t KI_MAX_UPLOAD_DATA = 15;

	// BrnNetworkRoadRulesData.h:32
	const int32_t KI_MAX_DOWNLOAD_DATA = 40;

}

// BrnNetworkRoadRulesData.h:115
struct BrnNetwork::RoadRulesDownloadData {
private:
	// BrnNetworkRoadRulesData.h:179
	extern const int32_t KI_DOWNLOAD_DATA_PATTERN_LENGTH = 123;

	// BrnNetworkRoadRulesData.h:181
	BrnNetwork::RoadRulesDownloadData::DownloadData mData;

	// BrnNetworkRoadRulesData.h:182
	char[123] macPattern;

public:
	// BrnNetworkRoadRulesData.h:120
	void Construct();

	// BrnNetworkRoadRulesData.h:124
	const char * GetPattern() const;

	// BrnNetworkRoadRulesData.h:128
	int32_t GetDataSize() const;

	// BrnNetworkRoadRulesData.h:132
	void * GetData();

	// BrnNetworkRoadRulesData.h:136
	int32_t GetIndexOfNextRoadToDownload();

	// BrnNetworkRoadRulesData.h:140
	uint32_t GetTimeStampOfDownload();

	// BrnNetworkRoadRulesData.h:144
	int32_t GetNumScores();

	// BrnNetworkRoadRulesData.h:153
	void GetRoadRulesDataForDownloadIndex(int32_t, char *, int32_t *, int32_t *);

	// BrnNetworkRoadRulesData.h:160
	void SetDownloadedRoadRulesData(char *, int32_t, int32_t);

}

// BrnNetworkRoadRulesData.h:194
struct BrnNetwork::RoadRulesLocalPlayerDownloadedScores {
private:
	// BrnNetworkRoadRulesData.h:225
	int32_t[40] maiScores;

	// BrnNetworkRoadRulesData.h:226
	int32_t[40] maiScoreTypes;

	// BrnNetworkRoadRulesData.h:227
	uint64_t mu64RoadRulesID;

	// BrnNetworkRoadRulesData.h:228
	int32_t miNumScores;

public:
	// BrnNetworkRoadRulesData.h:200
	void Construct(uint64_t);

	// BrnNetworkRoadRulesData.h:204
	int32_t GetNumScores();

	// BrnNetworkRoadRulesData.h:211
	void GetRoadRulesDataForDownloadIndex(int32_t, int32_t *, int32_t *);

	// BrnNetworkRoadRulesData.h:217
	void SetDownloadedRoadRulesData(int32_t, int32_t);

	// BrnNetworkRoadRulesData.h:221
	uint64_t GetRoadRulesID();

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	struct RoadRulesUploadData;

	struct RoadRulesMessageData;

	struct RoadRulesRecvData;

	struct RoadRulesDownloadEvent;

	struct UpdateData;

	struct CommonRelationshipStats;

	struct CommonRelationship;

	struct ScoreboardRow;

	struct Scoreboard;

	struct LiveRevengeProfile;

	struct BrnNetworkModule;

	struct LoginManagerPS3;

	struct ConnectionManager;

	struct GameSearchParams;

	struct GameResults;

	struct StatsRequestEvent;

	struct BuddyManagerPS3;

	struct StandingsData;

	struct PlayerFinishedRoundMessage;

	struct HullToActivateInfo;

	struct CrashingTrafficData;

	struct HullSyncMessage;

	struct CrashingTrafficMessage;

	struct RestartTrafficMessage;

	struct TrafficHashMessage;

	struct NetworkPlayerStatsResults;

	struct StatsDebugComponent;

	struct StatsUpdateMessage;

	struct BrnServerInterface;

	struct ScoreboardDebugComponent;

	struct AggressiveMoveData;

	struct AggressiveDrivingMessage;

	struct LiveRevengeMappingEntry;

	struct LiveRevengeSyncMessage;

	struct LiveRevengeDebugComponent;

	struct DirtyTrickMessage;

	struct ImageMessage;

	struct ImageManagerDebugComponent;

	struct SelectedRoutesMessage;

	struct MarkedManMessage;

	struct RoadRulesMessage;

	struct RoadRulesPersonalBestMessage;

	struct RoadRulesManagerDebugComponent;

	struct FburnSuccessUpdateMessage;

	struct FburnChallengeSuccessMessage;

	struct PlayerInfoData;

	struct NetworkGamerCardManagerPS3;

	struct CameraStatusMessage;

	struct CameraRequestMessage;

	struct NetworkNotificationManagerPS3;

	struct BrnNetworkPlayer;

	struct PlayerMenuData;

	struct CheckpointTriggeredMessage;

	struct ActiveFburnChallengeMessage;

	struct FburnChallengeStatusMessage;

	struct FreeburnChallengeMessage;

	struct ShowtimeSwitchMessage;

	struct ShowtimeUpdateMessage;

	struct BurnoutSkillzMessage;

	struct BurningHomeRunSwitchRunnerMessage;

	struct CarSelectMessage;

	struct UpdateMessage;

	// BrnNetworkRoadRulesData.h:31
	const int32_t KI_MAX_UPLOAD_DATA = 15;

	// BrnNetworkRoadRulesData.h:32
	const int32_t KI_MAX_DOWNLOAD_DATA = 40;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	struct RoadRulesUploadData;

	// Declaration
	struct RoadRulesDownloadData {
		// BrnNetworkRoadRulesData.h:166
		struct DownloadData {
			// BrnNetworkRoadRulesData.h:167
			char[40][20] macPlayerNames;

			// BrnNetworkRoadRulesData.h:169
			int32_t[40] maiScoreTypes;

			// BrnNetworkRoadRulesData.h:170
			int32_t[40] maiQuantisedScore;

			// BrnNetworkRoadRulesData.h:171
			int32_t miNumScores;

		}

	}

	struct RoadRulesLocalPlayerDownloadedScores;

	struct RoadRulesMessageData;

	struct RoadRulesRecvData;

	struct RoadRulesDownloadEvent;

	struct NetworkRounder;

	struct CommonRelationshipStats;

	struct CommonRelationship;

	struct ScoreboardRow;

	struct Scoreboard;

	struct LiveRevengeProfile;

	struct LiveRevengeMappingEntry;

	struct LiveRevengeSyncMessage;

	struct LiveRevengeDebugComponent;

	struct UpdateData;

	struct StatsRequestEvent;

	struct BrnNetworkPlayerConstructParams;

	struct LoginManagerPS3;

	struct ConnectionManager;

	struct GameSearchParams;

	struct BuddyManagerBase;

	struct BuddyManagerPS3;

	struct StandingsData;

	struct PlayerFinishedRoundMessage;

	struct HullToActivateInfo;

	struct CrashingTrafficData;

	struct HullSyncMessage;

	struct CrashingTrafficMessage;

	struct RestartTrafficMessage;

	struct TrafficHashMessage;

	struct NetworkPlayerStatsResults;

	struct StatsDebugComponent;

	struct StatsUpdateMessage;

	struct BrnServerInterface;

	struct ScoreboardDebugComponent;

	struct AggressiveMoveData;

	struct AggressiveDrivingMessage;

	struct DirtyTrickMessage;

	struct ImageManagerDebugComponent;

	struct SelectedRoutesMessage;

	struct MarkedManMessage;

	struct RoadRulesMessage;

	struct RoadRulesPersonalBestMessage;

	struct RoadRulesManagerDebugComponent;

	struct FburnSuccessUpdateMessage;

	struct FburnChallengeSuccessMessage;

	struct PlayerInfoData;

	struct NetworkGamerCardManagerPS3;

	struct CameraStatusMessage;

	struct CameraRequestMessage;

	struct NetworkNotificationManagerPS3;

	struct BrnNetworkPlayer;

	struct PlayerMenuData;

	struct CustomCommandErrorMapping;

	struct BuddyManagerDebugComponent;

	struct ServerInterfaceDebugComponent;

	struct UsersetParams;

	struct QuickJoinParams;

	struct GameSearchParamsPS3;

	struct PlayerParams;

	struct BrnServerInterfaceTelemetry;

	struct BrnServerInterfaceDownloadableConfig;

	struct CarSelectMessage;

	struct BurningHomeRunSwitchRunnerMessage;

	struct BurnoutSkillzMessage;

	struct ShowtimeUpdateMessage;

	struct ShowtimeSwitchMessage;

	struct FreeburnChallengeMessage;

	struct FburnChallengeStatusMessage;

	struct ActiveFburnChallengeMessage;

	struct CheckpointTriggeredMessage;

	// BrnNetworkRoadRulesData.h:31
	const int32_t KI_MAX_UPLOAD_DATA = 15;

	// BrnNetworkRoadRulesData.h:32
	const int32_t KI_MAX_DOWNLOAD_DATA = 40;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkRoadRulesData.h:31
	const int32_t KI_MAX_UPLOAD_DATA = 15;

	// BrnNetworkRoadRulesData.h:32
	const int32_t KI_MAX_DOWNLOAD_DATA = 40;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	struct RoadRulesUploadData;

	struct RoadRulesMessageData;

	struct RoadRulesRecvData;

	struct RoadRulesDownloadEvent;

	// Declaration
	struct PlayerParamsBase {
	public:
		virtual ~PlayerParamsBase();

		PlayerParamsBase();

	}

	struct CommonRelationshipStats;

	struct CommonRelationship;

	struct ScoreboardRow;

	struct Scoreboard;

	struct LiveRevengeProfile;

	struct LiveRevengeMappingEntry;

	// Declaration
	struct LiveRevengeSyncMessage {
	public:
		LiveRevengeSyncMessage();

	}

	// Declaration
	struct LiveRevengeDebugComponent {
	public:
		LiveRevengeDebugComponent();

	}

	// Declaration
	struct BrnNetworkModule {
	public:
		BrnNetworkModule();

		~BrnNetworkModule();

	}

	struct UpdateData;

	struct StatsRequestEvent;

	// Declaration
	struct ServerInterfaceCustomCommands {
	public:
		virtual ~ServerInterfaceCustomCommands();

		ServerInterfaceCustomCommands();

	}

	// Declaration
	struct BrnServerInterfaceBase {
	public:
		virtual ~BrnServerInterfaceBase();

		BrnServerInterfaceBase();

	}

	// Declaration
	struct BrnServerInterfacePS3 {
	public:
		virtual ~BrnServerInterfacePS3();

		BrnServerInterfacePS3();

	}

	// Declaration
	struct CollectableMessage {
	public:
		CollectableMessage();

	}

	// Declaration
	struct LoginManagerPS3 {
	public:
		LoginManagerPS3();

	}

	struct ConnectionManager;

	struct GameSearchParams;

	// Declaration
	struct GameResults {
	public:
		GameResults();

		virtual ~GameResults();

	}

	// Declaration
	struct BuddyManagerBase {
	public:
		BuddyManagerBase();

	}

	// Declaration
	struct BuddyManagerPS3 {
	public:
		BuddyManagerPS3();

	}

	struct StandingsData;

	// Declaration
	struct PlayerFinishedRoundMessage {
	public:
		PlayerFinishedRoundMessage();

	}

	struct HullToActivateInfo;

	struct CrashingTrafficData;

	// Declaration
	struct HullSyncMessage {
	public:
		HullSyncMessage();

	}

	// Declaration
	struct CrashingTrafficMessage {
	public:
		CrashingTrafficMessage();

	}

	// Declaration
	struct RestartTrafficMessage {
	public:
		RestartTrafficMessage();

	}

	// Declaration
	struct TrafficHashMessage {
	public:
		TrafficHashMessage();

	}

	struct NetworkPlayerStatsResults;

	// Declaration
	struct StatsDebugComponent {
	public:
		StatsDebugComponent();

	}

	// Declaration
	struct StatsUpdateMessage {
	public:
		StatsUpdateMessage();

	}

	struct BrnServerInterface;

	// Declaration
	struct ScoreboardDebugComponent {
	public:
		ScoreboardDebugComponent();

	}

	struct AggressiveMoveData;

	// Declaration
	struct AggressiveDrivingMessage {
	public:
		AggressiveDrivingMessage();

	}

	// Declaration
	struct DirtyTrickMessage {
	public:
		DirtyTrickMessage();

	}

	// Declaration
	struct ImageManagerDebugComponent {
	public:
		ImageManagerDebugComponent();

	}

	// Declaration
	struct SelectedRoutesMessage {
	public:
		SelectedRoutesMessage();

	}

	// Declaration
	struct MarkedManMessage {
	public:
		MarkedManMessage();

	}

	// Declaration
	struct RoadRulesMessage {
	public:
		RoadRulesMessage();

	}

	// Declaration
	struct RoadRulesPersonalBestMessage {
	public:
		RoadRulesPersonalBestMessage();

	}

	// Declaration
	struct RoadRulesManagerDebugComponent {
	public:
		RoadRulesManagerDebugComponent();

	}

	// Declaration
	struct FburnSuccessUpdateMessage {
	public:
		FburnSuccessUpdateMessage();

	}

	// Declaration
	struct FburnChallengeSuccessMessage {
	public:
		FburnChallengeSuccessMessage();

	}

	// Declaration
	struct PlayerInfoData {
	public:
		PlayerInfoData();

		virtual ~PlayerInfoData();

	}

	struct NetworkGamerCardManagerPS3;

	// Declaration
	struct CameraRequestResponseMessage {
	public:
		CameraRequestResponseMessage();

	}

	// Declaration
	struct CameraStatusMessage {
	public:
		CameraStatusMessage();

	}

	// Declaration
	struct CameraRequestMessage {
	public:
		CameraRequestMessage();

	}

	// Declaration
	struct NetworkNotificationManagerPS3 {
	public:
		NetworkNotificationManagerPS3();

	}

	// Declaration
	struct BrnNetworkPlayer {
	public:
		BrnNetworkPlayer();

	}

	// Declaration
	struct PlayerMenuData {
	public:
		PlayerMenuData();

	}

	// Declaration
	struct GameSearchParamsPS3 {
	public:
		virtual ~GameSearchParamsPS3();

		GameSearchParamsPS3();

	}

	struct PlayerParams;

	// Declaration
	struct BrnServerInterfaceTelemetry {
	public:
		virtual ~BrnServerInterfaceTelemetry();

		BrnServerInterfaceTelemetry();

	}

	// Declaration
	struct ServerInterfaceDebugComponent {
	public:
		ServerInterfaceDebugComponent();

	}

	// Declaration
	struct BuddyManagerDebugComponent {
	public:
		BuddyManagerDebugComponent();

	}

	// Declaration
	struct NetworkNotificationManagerBase {
	public:
		NetworkNotificationManagerBase();

	}

	// Declaration
	struct UpdateMessage {
	public:
		UpdateMessage();

	}

	// Declaration
	struct CarSelectMessage {
	public:
		CarSelectMessage();

	}

	// Declaration
	struct BurningHomeRunSwitchRunnerMessage {
	public:
		BurningHomeRunSwitchRunnerMessage();

	}

	// Declaration
	struct BurnoutSkillzMessage {
	public:
		BurnoutSkillzMessage();

	}

	// Declaration
	struct ShowtimeUpdateMessage {
	public:
		ShowtimeUpdateMessage();

	}

	// Declaration
	struct ShowtimeSwitchMessage {
	public:
		ShowtimeSwitchMessage();

	}

	// Declaration
	struct FreeburnChallengeMessage {
	public:
		FreeburnChallengeMessage();

	}

	// Declaration
	struct FburnChallengeStatusMessage {
	public:
		FburnChallengeStatusMessage();

	}

	// Declaration
	struct ActiveFburnChallengeMessage {
	public:
		ActiveFburnChallengeMessage();

	}

	// Declaration
	struct CheckpointTriggeredMessage {
	public:
		CheckpointTriggeredMessage();

	}

	// BrnNetworkRoadRulesData.h:31
	const int32_t KI_MAX_UPLOAD_DATA = 15;

	// BrnNetworkRoadRulesData.h:32
	const int32_t KI_MAX_DOWNLOAD_DATA = 40;

}


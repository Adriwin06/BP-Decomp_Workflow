// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedServerTypes.h:33
	namespace ServerGeneratedTypes {
		struct OfflineProgressionT;

	}

}

// BrnNetworkSharedServerTypes.h:70
struct BrnNetwork::ServerGeneratedTypes::OfflineProgressionT {
	// BrnNetworkSharedServerTypes.h:71
	int32_t miTotalTime;

	// BrnNetworkSharedServerTypes.h:72
	int32_t miTotalDistance;

	// BrnNetworkSharedServerTypes.h:73
	int32_t miTakedowns;

	// BrnNetworkSharedServerTypes.h:74
	int16_t mi16Jumps;

	// BrnNetworkSharedServerTypes.h:75
	int16_t mi16Smashes;

	// BrnNetworkSharedServerTypes.h:76
	int16_t mi16Stunts;

	// BrnNetworkSharedServerTypes.h:77
	int8_t mi8CarsCollected;

	// BrnNetworkSharedServerTypes.h:78
	int8_t mi8TimeRoadRulesWon;

	// BrnNetworkSharedServerTypes.h:79
	int8_t mi8CrashRoadRulesWon;

	// BrnNetworkSharedServerTypes.h:80
	char[13] macFavouriteCar;

	// BrnNetworkSharedServerTypes.h:81
	char[13] macForgottenCar;

	// BrnNetworkSharedServerTypes.h:82
	char[13] macNemesis;

	// BrnNetworkSharedServerTypes.h:83
	int8_t mi8AchievementsEarnt;

}

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// BrnNetworkSharedServerTypes.h:33
	namespace ServerGeneratedTypes {
		struct OfflineProgressionT;

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// BrnNetworkSharedServerTypes.h:33
	namespace ServerGeneratedTypes {
		struct OfflineProgressionT;

		struct RivalDataT;

	}

}

// BrnNetworkSharedServerTypes.h:88
struct BrnNetwork::ServerGeneratedTypes::RivalDataT {
	// BrnNetworkSharedServerTypes.h:89
	int32_t miRivalryStatus;

	// BrnNetworkSharedServerTypes.h:90
	int32_t miTimesBattled;

	// BrnNetworkSharedServerTypes.h:91
	int32_t miTakedownsFor;

	// BrnNetworkSharedServerTypes.h:92
	int32_t miTakedownsAgainst;

	// BrnNetworkSharedServerTypes.h:93
	int32_t miMugshotsFor;

	// BrnNetworkSharedServerTypes.h:94
	int32_t miMugshotsAgainst;

	// BrnNetworkSharedServerTypes.h:95
	int32_t miMarksFor;

	// BrnNetworkSharedServerTypes.h:96
	int32_t miMarksAgainst;

	// BrnNetworkSharedServerTypes.h:97
	int32_t miPaybacksScoredFor;

	// BrnNetworkSharedServerTypes.h:98
	int32_t miPaybacksScoredAgainst;

	// BrnNetworkSharedServerTypes.h:99
	int32_t miPaybacksDealtFor;

	// BrnNetworkSharedServerTypes.h:100
	int32_t miPaybacksDealtAgainst;

	// BrnNetworkSharedServerTypes.h:101
	char[16] macPers;

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkSharedServerTypes.h:33
	namespace ServerGeneratedTypes {
		struct GameDataT;

		struct OfflineProgressionT;

		struct RivalDataT;

	}

}

// BrnNetworkSharedServerTypes.h:42
struct BrnNetwork::ServerGeneratedTypes::GameDataT {
	// BrnNetworkSharedServerTypes.h:43
	int32_t[10] maiPositions;

	// BrnNetworkSharedServerTypes.h:44
	int32_t[10][9] maaiPlayerInRound;

	// BrnNetworkSharedServerTypes.h:45
	int32_t miTakedownsFor;

	// BrnNetworkSharedServerTypes.h:46
	int32_t miTakedownsAgainst;

	// BrnNetworkSharedServerTypes.h:47
	int32_t miTraitorousTakedownsFor;

	// BrnNetworkSharedServerTypes.h:48
	int32_t miTraitorousTakedownsAgainst;

	// BrnNetworkSharedServerTypes.h:49
	int32_t miMarksFor;

	// BrnNetworkSharedServerTypes.h:50
	int32_t miMarksAgainst;

	// BrnNetworkSharedServerTypes.h:51
	int32_t miMarkedManTakedownsFor;

	// BrnNetworkSharedServerTypes.h:52
	int32_t miMarkedManTakedownsAgainst;

	// BrnNetworkSharedServerTypes.h:53
	int32_t miPaybackUsedFor;

	// BrnNetworkSharedServerTypes.h:54
	int32_t miPaybackUsedAgainst;

	// BrnNetworkSharedServerTypes.h:55
	int32_t miPaybackSuccededFor;

	// BrnNetworkSharedServerTypes.h:56
	int32_t miPaybackSuccededAgainst;

	// BrnNetworkSharedServerTypes.h:57
	int32_t miNumberOfRounds;

	// BrnNetworkSharedServerTypes.h:58
	int32_t miNumberOfPlayers;

	// BrnNetworkSharedServerTypes.h:59
	int32_t miEventType;

	// BrnNetworkSharedServerTypes.h:60
	int32_t miSecondsSpentInEvent;

	// BrnNetworkSharedServerTypes.h:61
	int32_t miMetersDriven;

	// BrnNetworkSharedServerTypes.h:62
	int32_t miNumberOfRivals;

	// BrnNetworkSharedServerTypes.h:63
	int32_t miCrashes;

	// BrnNetworkSharedServerTypes.h:64
	char[13] macFavCarID;

	// BrnNetworkSharedServerTypes.h:65
	char[13] macCarUsed;

}


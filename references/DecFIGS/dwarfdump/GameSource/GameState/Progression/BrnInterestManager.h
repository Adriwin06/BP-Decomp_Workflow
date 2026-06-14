// BrnInterestManager.h:24
namespace BrnProgression {
	struct EventRacerPersonality;

	struct CheckpointData;

	struct OpponentBalanceData;

	struct ProgressionRankData;

	struct DerivedCarArray;

}

// BrnInterestManager.h:73
extern const int32_t[25] KA_INTEREST_TRIGGER_RATINGS;

// BrnInterestManager.h:24
namespace BrnProgression {
	struct EventRacerPersonality;

	struct CheckpointData;

	struct OpponentBalanceData;

	struct ProgressionRankData;

	// BrnInterestManager.h:73
	extern const int32_t[25] KA_INTEREST_TRIGGER_RATINGS;

}

// BrnInterestManager.h:24
namespace BrnProgression {
	// BrnInterestManager.h:33
	enum InterestTrigger {
		E_IT_VERY_CLOSE_TO_PURSUIT = 0,
		E_IT_CLOSE_TO_PURSUIT = 1,
		E_IT_NO_EVENTS_AGAINST = 2,
		E_IT_TAKEDOWNS_TO_IN_LAST_EVENT = 3,
		E_IT_MANY_TAKEDOWNS_TO_IN_LAST_EVENT = 4,
		E_IT_NO_TAKEDOWNS_TO = 5,
		E_IT_DONT_HAVE_HIS_CAR = 6,
		E_IT_DONT_HAVE_HIS_CAR_AND_IS_FASTEST = 7,
		E_IT_DONT_HAVE_HIS_CAR_AND_IS_HEAVIEST = 8,
		E_IT_LOWEST_SPEED = 9,
		E_IT_LOWEST_AGGRESSION = 10,
		E_IT_HIGHEST_SPEED = 11,
		E_IT_HIGHEST_AGGRESSION = 12,
		E_IT_HIGHEST_SKILL = 13,
		E_IT_HAVENT_SEEN_HIM_FOR_A_WHILE_AND_HAVE_HIS_CAR = 14,
		E_IT_HAVENT_SEEN_HIM_FOR_A_WHILE_AND_DONT_HAVE_HIS_CAR = 15,
		E_IT_YOU_ARE_IN_HIS_CAR = 16,
		E_IT_YOU_ARE_IN_HIS_CAR_AND_GOT_IT_RECENTLY = 17,
		E_IT_MANY_TAKEDOWNS_FROM = 18,
		E_IT_MANY_TAKEDOWNS_TO = 19,
		E_IT_HIGH_TAKEDOWN_FROM_RATIO = 20,
		E_IT_HIGH_TAKEDOWN_TO_RATIO = 21,
		E_IT_MANY_VERTICAL_TAKEDOWNS_FROM = 22,
		E_IT_MANY_VERTICAL_TAKEDOWNS_TO = 23,
		E_IT_RACED_MANY_TIMES = 24,
		E_IT_COUNT = 25,
	}

	struct InterestData;

	struct ProgressionData;

	struct Profile;

	struct EventJunction;

	struct EventRacerPersonality;

	struct CheckpointData;

	struct OpponentBalanceData;

	struct ProgressionRankData;

	struct Race;

	struct SavedRace;

	struct LiveryData;

	struct MugshotInfo;

	struct Rival;

	struct DerivedCarArray;

	struct CarOpponent;

	struct CarOpponentSet;

	struct ProgressionDebugComponent;

}

// BrnInterestManager.h:89
struct BrnProgression::InterestData {
private:
	// BrnInterestManager.h:113
	CgsID miCarId;

	// BrnInterestManager.h:114
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnInterestManager.h:115
	int32_t miInterestRating;

	// BrnInterestManager.h:116
	BrnProgression::InterestTrigger meHighestTrigger;

public:
	// BrnInterestManager.h:94
	void Construct(CgsID, EActiveRaceCarIndex);

	// BrnInterestManager.h:97
	CgsID GetCarId() const;

	// BrnInterestManager.h:100
	EActiveRaceCarIndex GetActiveRaceCarIndex() const;

	// BrnInterestManager.h:103
	int32_t GetInterestRating() const;

	// BrnInterestManager.h:106
	BrnProgression::InterestTrigger GetHighestTrigger() const;

	// BrnInterestManager.h:110
	void AddInterest(BrnProgression::InterestTrigger);

}

// BrnInterestManager.h:24
namespace BrnProgression {
	// BrnInterestManager.h:33
	enum InterestTrigger {
		E_IT_VERY_CLOSE_TO_PURSUIT = 0,
		E_IT_CLOSE_TO_PURSUIT = 1,
		E_IT_NO_EVENTS_AGAINST = 2,
		E_IT_TAKEDOWNS_TO_IN_LAST_EVENT = 3,
		E_IT_MANY_TAKEDOWNS_TO_IN_LAST_EVENT = 4,
		E_IT_NO_TAKEDOWNS_TO = 5,
		E_IT_DONT_HAVE_HIS_CAR = 6,
		E_IT_DONT_HAVE_HIS_CAR_AND_IS_FASTEST = 7,
		E_IT_DONT_HAVE_HIS_CAR_AND_IS_HEAVIEST = 8,
		E_IT_LOWEST_SPEED = 9,
		E_IT_LOWEST_AGGRESSION = 10,
		E_IT_HIGHEST_SPEED = 11,
		E_IT_HIGHEST_AGGRESSION = 12,
		E_IT_HIGHEST_SKILL = 13,
		E_IT_HAVENT_SEEN_HIM_FOR_A_WHILE_AND_HAVE_HIS_CAR = 14,
		E_IT_HAVENT_SEEN_HIM_FOR_A_WHILE_AND_DONT_HAVE_HIS_CAR = 15,
		E_IT_YOU_ARE_IN_HIS_CAR = 16,
		E_IT_YOU_ARE_IN_HIS_CAR_AND_GOT_IT_RECENTLY = 17,
		E_IT_MANY_TAKEDOWNS_FROM = 18,
		E_IT_MANY_TAKEDOWNS_TO = 19,
		E_IT_HIGH_TAKEDOWN_FROM_RATIO = 20,
		E_IT_HIGH_TAKEDOWN_TO_RATIO = 21,
		E_IT_MANY_VERTICAL_TAKEDOWNS_FROM = 22,
		E_IT_MANY_VERTICAL_TAKEDOWNS_TO = 23,
		E_IT_RACED_MANY_TIMES = 24,
		E_IT_COUNT = 25,
	}

	struct InterestData;

	struct ProgressionData;

	struct Profile;

	struct EventJunction;

	struct EventRacerPersonality;

	struct CheckpointData;

	struct OpponentBalanceData;

	struct ProgressionRankData;

	struct Race;

	struct SavedRace;

	struct LiveryData;

	struct MugshotInfo;

	struct Rival;

	struct DerivedCarArray;

	struct ProgressionDebugComponent;

	struct CarOpponent;

	struct CarOpponentSet;

	// BrnInterestManager.h:73
	extern const int32_t[25] KA_INTEREST_TRIGGER_RATINGS;

}

// BrnInterestManager.h:24
namespace BrnProgression {
	// BrnInterestManager.h:33
	enum InterestTrigger {
		E_IT_VERY_CLOSE_TO_PURSUIT = 0,
		E_IT_CLOSE_TO_PURSUIT = 1,
		E_IT_NO_EVENTS_AGAINST = 2,
		E_IT_TAKEDOWNS_TO_IN_LAST_EVENT = 3,
		E_IT_MANY_TAKEDOWNS_TO_IN_LAST_EVENT = 4,
		E_IT_NO_TAKEDOWNS_TO = 5,
		E_IT_DONT_HAVE_HIS_CAR = 6,
		E_IT_DONT_HAVE_HIS_CAR_AND_IS_FASTEST = 7,
		E_IT_DONT_HAVE_HIS_CAR_AND_IS_HEAVIEST = 8,
		E_IT_LOWEST_SPEED = 9,
		E_IT_LOWEST_AGGRESSION = 10,
		E_IT_HIGHEST_SPEED = 11,
		E_IT_HIGHEST_AGGRESSION = 12,
		E_IT_HIGHEST_SKILL = 13,
		E_IT_HAVENT_SEEN_HIM_FOR_A_WHILE_AND_HAVE_HIS_CAR = 14,
		E_IT_HAVENT_SEEN_HIM_FOR_A_WHILE_AND_DONT_HAVE_HIS_CAR = 15,
		E_IT_YOU_ARE_IN_HIS_CAR = 16,
		E_IT_YOU_ARE_IN_HIS_CAR_AND_GOT_IT_RECENTLY = 17,
		E_IT_MANY_TAKEDOWNS_FROM = 18,
		E_IT_MANY_TAKEDOWNS_TO = 19,
		E_IT_HIGH_TAKEDOWN_FROM_RATIO = 20,
		E_IT_HIGH_TAKEDOWN_TO_RATIO = 21,
		E_IT_MANY_VERTICAL_TAKEDOWNS_FROM = 22,
		E_IT_MANY_VERTICAL_TAKEDOWNS_TO = 23,
		E_IT_RACED_MANY_TIMES = 24,
		E_IT_COUNT = 25,
	}

	struct InterestData;

	struct ProgressionData;

	struct Profile;

	struct EventJunction;

	struct EventRacerPersonality;

	struct CheckpointData;

	struct OpponentBalanceData;

	struct ProgressionRankData;

	struct Race;

	struct SavedRace;

	struct LiveryData;

	struct MugshotInfo;

	struct Rival;

	struct DerivedCarArray;

	struct ProgressionDebugComponent;

	struct CarOpponent;

	struct CarOpponentSet;

}

// BrnInterestManager.h:24
namespace BrnProgression {
	// BrnInterestManager.h:73
	extern const int32_t[25] KA_INTEREST_TRIGGER_RATINGS;

}

// BrnInterestManager.h:24
namespace BrnProgression {
	struct ProgressionData;

	struct Profile;

	struct EventJunction;

	struct EventRacerPersonality;

	struct CheckpointData;

	struct OpponentBalanceData;

	struct ProgressionRankData;

	struct Race;

	struct LiveryData;

	struct MugshotInfo;

	struct Rival;

	struct DerivedCarArray;

	struct CarOpponent;

	struct CarOpponentSet;

}

// BrnInterestManager.h:24
namespace BrnProgression {
	struct ProgressionData;

	struct Profile;

	struct Race;

	struct EventJunction;

	struct EventRacerPersonality;

	struct CheckpointData;

	struct LiveryData;

	struct MugshotInfo;

	struct OpponentBalanceData;

	struct ProgressionRankData;

	struct Rival;

	struct DerivedCarArray;

	struct CarOpponent;

	struct CarOpponentSet;

	// BrnInterestManager.h:73
	extern const int32_t[25] KA_INTEREST_TRIGGER_RATINGS;

}

// BrnInterestManager.h:24
namespace BrnProgression {
	// BrnInterestManager.h:33
	enum InterestTrigger {
		E_IT_VERY_CLOSE_TO_PURSUIT = 0,
		E_IT_CLOSE_TO_PURSUIT = 1,
		E_IT_NO_EVENTS_AGAINST = 2,
		E_IT_TAKEDOWNS_TO_IN_LAST_EVENT = 3,
		E_IT_MANY_TAKEDOWNS_TO_IN_LAST_EVENT = 4,
		E_IT_NO_TAKEDOWNS_TO = 5,
		E_IT_DONT_HAVE_HIS_CAR = 6,
		E_IT_DONT_HAVE_HIS_CAR_AND_IS_FASTEST = 7,
		E_IT_DONT_HAVE_HIS_CAR_AND_IS_HEAVIEST = 8,
		E_IT_LOWEST_SPEED = 9,
		E_IT_LOWEST_AGGRESSION = 10,
		E_IT_HIGHEST_SPEED = 11,
		E_IT_HIGHEST_AGGRESSION = 12,
		E_IT_HIGHEST_SKILL = 13,
		E_IT_HAVENT_SEEN_HIM_FOR_A_WHILE_AND_HAVE_HIS_CAR = 14,
		E_IT_HAVENT_SEEN_HIM_FOR_A_WHILE_AND_DONT_HAVE_HIS_CAR = 15,
		E_IT_YOU_ARE_IN_HIS_CAR = 16,
		E_IT_YOU_ARE_IN_HIS_CAR_AND_GOT_IT_RECENTLY = 17,
		E_IT_MANY_TAKEDOWNS_FROM = 18,
		E_IT_MANY_TAKEDOWNS_TO = 19,
		E_IT_HIGH_TAKEDOWN_FROM_RATIO = 20,
		E_IT_HIGH_TAKEDOWN_TO_RATIO = 21,
		E_IT_MANY_VERTICAL_TAKEDOWNS_FROM = 22,
		E_IT_MANY_VERTICAL_TAKEDOWNS_TO = 23,
		E_IT_RACED_MANY_TIMES = 24,
		E_IT_COUNT = 25,
	}

	struct InterestData;

	struct ProgressionData;

	struct Profile;

	struct Race;

	struct SavedRace;

	struct EventJunction;

	struct EventRacerPersonality;

	struct CheckpointData;

	struct LiveryData;

	struct MugshotInfo;

	struct OpponentBalanceData;

	struct ProgressionRankData;

	struct Rival;

	struct DerivedCarArray;

	struct CarOpponent;

	struct CarOpponentSet;

	struct ProgressionDebugComponent;

}

// BrnInterestManager.h:24
namespace BrnProgression {
	// BrnInterestManager.h:33
	enum InterestTrigger {
		E_IT_VERY_CLOSE_TO_PURSUIT = 0,
		E_IT_CLOSE_TO_PURSUIT = 1,
		E_IT_NO_EVENTS_AGAINST = 2,
		E_IT_TAKEDOWNS_TO_IN_LAST_EVENT = 3,
		E_IT_MANY_TAKEDOWNS_TO_IN_LAST_EVENT = 4,
		E_IT_NO_TAKEDOWNS_TO = 5,
		E_IT_DONT_HAVE_HIS_CAR = 6,
		E_IT_DONT_HAVE_HIS_CAR_AND_IS_FASTEST = 7,
		E_IT_DONT_HAVE_HIS_CAR_AND_IS_HEAVIEST = 8,
		E_IT_LOWEST_SPEED = 9,
		E_IT_LOWEST_AGGRESSION = 10,
		E_IT_HIGHEST_SPEED = 11,
		E_IT_HIGHEST_AGGRESSION = 12,
		E_IT_HIGHEST_SKILL = 13,
		E_IT_HAVENT_SEEN_HIM_FOR_A_WHILE_AND_HAVE_HIS_CAR = 14,
		E_IT_HAVENT_SEEN_HIM_FOR_A_WHILE_AND_DONT_HAVE_HIS_CAR = 15,
		E_IT_YOU_ARE_IN_HIS_CAR = 16,
		E_IT_YOU_ARE_IN_HIS_CAR_AND_GOT_IT_RECENTLY = 17,
		E_IT_MANY_TAKEDOWNS_FROM = 18,
		E_IT_MANY_TAKEDOWNS_TO = 19,
		E_IT_HIGH_TAKEDOWN_FROM_RATIO = 20,
		E_IT_HIGH_TAKEDOWN_TO_RATIO = 21,
		E_IT_MANY_VERTICAL_TAKEDOWNS_FROM = 22,
		E_IT_MANY_VERTICAL_TAKEDOWNS_TO = 23,
		E_IT_RACED_MANY_TIMES = 24,
		E_IT_COUNT = 25,
	}

	struct InterestData;

	struct ProgressionData;

	struct Profile;

	struct Race;

	struct ProgressionManager;

	struct EventJunction;

	struct EventRacerPersonality;

	struct CheckpointData;

	struct LiveryData;

	struct MugshotInfo;

	struct OpponentBalanceData;

	struct ProgressionRankData;

	struct Rival;

	struct DerivedCarArray;

	struct CarOpponent;

	struct CarOpponentSet;

	// BrnInterestManager.h:73
	extern const int32_t[25] KA_INTEREST_TRIGGER_RATINGS;

}

// BrnInterestManager.h:24
namespace BrnProgression {
	struct ProgressionData;

	struct Profile;

	struct Race;

	struct EventJunction;

	struct EventRacerPersonality;

	struct CheckpointData;

	struct LiveryData;

	struct MugshotInfo;

	struct DerivedCarArray;

	struct OpponentBalanceData;

	struct ProgressionRankData;

	struct Rival;

	struct CarOpponent;

	struct CarOpponentSet;

	// BrnInterestManager.h:73
	extern const int32_t[25] KA_INTEREST_TRIGGER_RATINGS;

}

// BrnInterestManager.h:24
namespace BrnProgression {
	struct ProgressionData;

	struct Profile;

	struct Race;

	struct EventJunction;

	struct EventRacerPersonality;

	struct CheckpointData;

	struct LiveryData;

	struct MugshotInfo;

	struct OpponentBalanceData;

	struct ProgressionRankData;

	struct Rival;

	struct DerivedCarArray;

	struct CarOpponent;

	struct CarOpponentSet;

}

// BrnInterestManager.h:24
namespace BrnProgression {
	struct EventRacerPersonality;

	struct CheckpointData;

	struct OpponentBalanceData;

	struct ProgressionRankData;

	struct ProgressionManager;

	struct DerivedCarArray;

}

// BrnInterestManager.h:24
namespace BrnProgression {
	struct ProgressionManager;

	struct MugshotInfo;

}

// BrnInterestManager.h:24
namespace BrnProgression {
	// Declaration
	struct ProgressionResourceType {
	public:
		ProgressionResourceType();

	}

	// BrnInterestManager.h:73
	extern const int32_t[25] KA_INTEREST_TRIGGER_RATINGS;

}

// BrnInterestManager.h:24
namespace BrnProgression {
	struct ProgressionData;

	struct EventJunction;

	struct EventRacerPersonality;

	struct CheckpointData;

	struct OpponentBalanceData;

	struct RaceBalanceData;

	struct ProgressionRankData;

	struct Race;

	struct SavedRace;

	struct Rival;

	struct CarOpponent;

	struct CarOpponentSet;

	struct PlayerStats;

	struct ProgressionResourceType;

}

// BrnInterestManager.h:24
namespace BrnProgression {
	// BrnInterestManager.h:33
	enum InterestTrigger {
		E_IT_VERY_CLOSE_TO_PURSUIT = 0,
		E_IT_CLOSE_TO_PURSUIT = 1,
		E_IT_NO_EVENTS_AGAINST = 2,
		E_IT_TAKEDOWNS_TO_IN_LAST_EVENT = 3,
		E_IT_MANY_TAKEDOWNS_TO_IN_LAST_EVENT = 4,
		E_IT_NO_TAKEDOWNS_TO = 5,
		E_IT_DONT_HAVE_HIS_CAR = 6,
		E_IT_DONT_HAVE_HIS_CAR_AND_IS_FASTEST = 7,
		E_IT_DONT_HAVE_HIS_CAR_AND_IS_HEAVIEST = 8,
		E_IT_LOWEST_SPEED = 9,
		E_IT_LOWEST_AGGRESSION = 10,
		E_IT_HIGHEST_SPEED = 11,
		E_IT_HIGHEST_AGGRESSION = 12,
		E_IT_HIGHEST_SKILL = 13,
		E_IT_HAVENT_SEEN_HIM_FOR_A_WHILE_AND_HAVE_HIS_CAR = 14,
		E_IT_HAVENT_SEEN_HIM_FOR_A_WHILE_AND_DONT_HAVE_HIS_CAR = 15,
		E_IT_YOU_ARE_IN_HIS_CAR = 16,
		E_IT_YOU_ARE_IN_HIS_CAR_AND_GOT_IT_RECENTLY = 17,
		E_IT_MANY_TAKEDOWNS_FROM = 18,
		E_IT_MANY_TAKEDOWNS_TO = 19,
		E_IT_HIGH_TAKEDOWN_FROM_RATIO = 20,
		E_IT_HIGH_TAKEDOWN_TO_RATIO = 21,
		E_IT_MANY_VERTICAL_TAKEDOWNS_FROM = 22,
		E_IT_MANY_VERTICAL_TAKEDOWNS_TO = 23,
		E_IT_RACED_MANY_TIMES = 24,
		E_IT_COUNT = 25,
	}

	struct InterestData;

	struct ProgressionData;

	struct Profile;

	struct Race;

	struct SavedRace;

	struct EventJunction;

	struct EventRacerPersonality;

	struct CheckpointData;

	struct LiveryData;

	struct MugshotInfo;

	struct DerivedCarArray;

	struct OpponentBalanceData;

	struct ProgressionRankData;

	struct Rival;

	struct CarOpponent;

	struct CarOpponentSet;

	struct ProgressionDebugComponent;

}

// BrnInterestManager.h:24
namespace BrnProgression {
	struct ProgressionData;

	struct Profile;

	struct EventRacerPersonality;

	struct CheckpointData;

	struct OpponentBalanceData;

	struct ProgressionRankData;

	struct LiveryData;

	struct MugshotInfo;

	// BrnInterestManager.h:73
	extern const int32_t[25] KA_INTEREST_TRIGGER_RATINGS;

}

// BrnInterestManager.h:24
namespace BrnProgression {
	// BrnInterestManager.h:33
	enum InterestTrigger {
		E_IT_VERY_CLOSE_TO_PURSUIT = 0,
		E_IT_CLOSE_TO_PURSUIT = 1,
		E_IT_NO_EVENTS_AGAINST = 2,
		E_IT_TAKEDOWNS_TO_IN_LAST_EVENT = 3,
		E_IT_MANY_TAKEDOWNS_TO_IN_LAST_EVENT = 4,
		E_IT_NO_TAKEDOWNS_TO = 5,
		E_IT_DONT_HAVE_HIS_CAR = 6,
		E_IT_DONT_HAVE_HIS_CAR_AND_IS_FASTEST = 7,
		E_IT_DONT_HAVE_HIS_CAR_AND_IS_HEAVIEST = 8,
		E_IT_LOWEST_SPEED = 9,
		E_IT_LOWEST_AGGRESSION = 10,
		E_IT_HIGHEST_SPEED = 11,
		E_IT_HIGHEST_AGGRESSION = 12,
		E_IT_HIGHEST_SKILL = 13,
		E_IT_HAVENT_SEEN_HIM_FOR_A_WHILE_AND_HAVE_HIS_CAR = 14,
		E_IT_HAVENT_SEEN_HIM_FOR_A_WHILE_AND_DONT_HAVE_HIS_CAR = 15,
		E_IT_YOU_ARE_IN_HIS_CAR = 16,
		E_IT_YOU_ARE_IN_HIS_CAR_AND_GOT_IT_RECENTLY = 17,
		E_IT_MANY_TAKEDOWNS_FROM = 18,
		E_IT_MANY_TAKEDOWNS_TO = 19,
		E_IT_HIGH_TAKEDOWN_FROM_RATIO = 20,
		E_IT_HIGH_TAKEDOWN_TO_RATIO = 21,
		E_IT_MANY_VERTICAL_TAKEDOWNS_FROM = 22,
		E_IT_MANY_VERTICAL_TAKEDOWNS_TO = 23,
		E_IT_RACED_MANY_TIMES = 24,
		E_IT_COUNT = 25,
	}

	struct InterestData;

	struct ProgressionData;

	struct Profile;

	struct EventJunction;

	struct EventRacerPersonality;

	struct CheckpointData;

	struct OpponentBalanceData;

	struct ProgressionRankData;

	struct Race;

	struct SavedRace;

	struct LiveryData;

	struct MugshotInfo;

	struct Rival;

	struct DerivedCarArray;

	struct CarOpponent;

	struct CarOpponentSet;

	// Declaration
	struct ProgressionDebugComponent {
	public:
		ProgressionDebugComponent();

	}

}


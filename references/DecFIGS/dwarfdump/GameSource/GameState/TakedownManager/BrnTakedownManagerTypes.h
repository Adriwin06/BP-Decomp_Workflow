// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnTakedownManagerTypes.h:41
	enum ETakedownType {
		E_TAKEDOWN_NONE = -1,
		E_TAKEDOWN_STANDARD = 0,
		E_TAKEDOWN_GRINDING = 1,
		E_TAKEDOWN_T_BONE = 2,
		E_TAKEDOWN_VERTICAL = 3,
		E_TAKEDOWN_TRAFFIC_CHECK = 4,
		E_TAKEDOWN_HEAD_ON = 5,
		E_TAKEDOWN_UNKNOWN0 = 6,
		E_TAKEDOWN_UNKNOWN1 = 7,
		E_TAKEDOWN_DOUBLE = 8,
		E_TAKEDOWN_REVENGE = 9,
		E_TAKEDOWN_INTO_CAR = 10,
		E_TAKEDOWN_INTO_VAN = 11,
		E_TAKEDOWN_INTO_BUS = 12,
		E_TAKEDOWN_COUNT = 13,
	}

}

// BrnTakedownManagerTypes.h:80
struct BrnGameState::TakedownEvent {
	// BrnTakedownManagerTypes.h:85
	EActiveRaceCarIndex meAggressorIndex;

	// BrnTakedownManagerTypes.h:86
	EActiveRaceCarIndex meVictimIndex;

	// BrnTakedownManagerTypes.h:87
	CgsID mAggressorCarID;

	// BrnTakedownManagerTypes.h:88
	CgsID mVictimCarID;

	// BrnTakedownManagerTypes.h:89
	BrnGameState::ETakedownType meType;

	// BrnTakedownManagerTypes.h:90
	int32_t miMultipleTakedownCount;

	// BrnTakedownManagerTypes.h:91
	int32_t miTakedownChainCount;

	// BrnTakedownManagerTypes.h:92
	bool mbMarkedManTakeDown;

	// BrnTakedownManagerTypes.h:93
	bool mbRemote;

	// BrnTakedownManagerTypes.h:94
	bool mbSettledScore;

public:
	// BrnTakedownManagerTypes.h:83
	void Construct();

}


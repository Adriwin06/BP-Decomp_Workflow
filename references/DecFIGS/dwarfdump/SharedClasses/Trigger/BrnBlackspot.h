// BrnRegion.h:28
namespace BrnTrigger {
	// Declaration
	struct Blackspot {
		// BrnBlackspot.h:47
		enum ScoreType {
			E_SCORE_TYPE_DISTANCE = 0,
			E_SCORE_TYPE_CAR_COUNT = 1,
			E_SCORE_TYPE_COUNT = 2,
		}

	}

}

// BrnBlackspot.h:45
struct BrnTrigger::Blackspot : public TriggerRegion {
	// BrnBlackspot.h:55
	extern const const char *[2] KAPC_SCORE_TYPE_STRINGS;

private:
	// BrnBlackspot.h:77
	uint8_t muScoreType;

	// BrnBlackspot.h:78
	int32_t miScoreAmount;

public:
	// BrnBlackspot.h:62
	void Construct(CgsID, const BoxRegion *, BrnTrigger::Blackspot::ScoreType, int32_t);

	// BrnBlackspot.h:65
	void FixDown();

	// BrnBlackspot.h:68
	void FixUp();

	// BrnBlackspot.h:71
	BrnTrigger::Blackspot::ScoreType GetScoreType() const;

	// BrnBlackspot.h:74
	int32_t GetScoreAmount() const;

}

// BrnBlackspot.h:55
extern const const char *[2] KAPC_SCORE_TYPE_STRINGS;


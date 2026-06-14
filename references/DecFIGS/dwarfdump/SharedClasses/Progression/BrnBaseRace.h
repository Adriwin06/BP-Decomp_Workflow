// BrnBaseRace.h:55
extern const int32_t KI_NAME_LENGTH = 32;

// BrnInterestManager.h:24
namespace BrnProgression {
	// Declaration
	struct BaseRace {
		// BrnBaseRace.h:57
		enum Flag {
			E_FLAG_CUSTOM = 1,
			E_FLAG_CRASHBREAKER = 2,
			E_FLAG_ELIMINATOR = 4,
			E_FLAG_STUNT = 8,
			E_FLAG_SURVIVAL = 16,
		}

	}

}

// BrnBaseRace.h:52
struct BrnProgression::BaseRace {
	// BrnBaseRace.h:55
	extern const int32_t KI_NAME_LENGTH = 32;

protected:
	// BrnBaseRace.h:121
	char[32] macName;

	// BrnBaseRace.h:122
	CgsID mId;

	// BrnBaseRace.h:123
	uint8_t mxFlags;

	// BrnBaseRace.h:124
	uint8_t muRank;

	// BrnBaseRace.h:125
	uint8_t muLaps;

	// BrnBaseRace.h:127
	uint8_t[5] maPad;

public:
	// BrnBaseRace.h:68
	void Construct();

	// BrnBaseRace.h:72
	void SetName(const char *);

	// BrnBaseRace.h:75
	const char * GetName() const;

	// BrnBaseRace.h:78
	CgsID GetId() const;

	// BrnBaseRace.h:82
	void SetId(CgsID);

	// BrnBaseRace.h:85
	uint8_t GetLaps() const;

	// BrnBaseRace.h:88
	bool IsLoop() const;

	// BrnBaseRace.h:92
	void SetLaps(uint8_t);

	// BrnBaseRace.h:96
	bool GetFlag(BrnProgression::BaseRace::Flag) const;

	// BrnBaseRace.h:99
	uint8_t GetFlags() const;

	// BrnBaseRace.h:103
	void SetFlag(BrnProgression::BaseRace::Flag);

	// BrnBaseRace.h:107
	void SetFlags(uint8_t);

	// BrnBaseRace.h:110
	void ClearFlags();

	// BrnBaseRace.h:113
	uint8_t GetRank() const;

	// BrnBaseRace.h:117
	void SetRank(uint8_t);

}


// BrnNetworkGameSearchParams.h:117
extern const int32_t KI_MAX_PLAYERS_UPLOAD = 40;

// BrnNetworkGameSearchParams.h:121
extern const int32_t KI_MAX_PLAYER_NAME_LENGTH = 16;

// BrnNetworkGameSearchParams.h:134
extern const int32_t KI_PATTERN_SIZE = 129;

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct GameSearchParamsBase {
	public:
		virtual ~GameSearchParamsBase();

		BrnNetwork::GameSearchParamsBase & operator=(const BrnNetwork::GameSearchParamsBase &);

		GameSearchParamsBase();

	private:
		// BrnNetworkGameSearchParams.h:134
		extern const int32_t KI_PATTERN_SIZE = 129;

	}

}

// BrnNetworkGameSearchParams.h:154
void BrnNetwork::GameSearchParamsPS3::~GameSearchParamsPS3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkGameSearchParams.h:56
void BrnNetwork::GameSearchParamsBase::~GameSearchParamsBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkGameSearchParams.h:154
void BrnNetwork::GameSearchParamsPS3::operator=(const const BrnNetwork::GameSearchParamsPS3 &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkGameSearchParams.h:56
void BrnNetwork::GameSearchParamsBase::operator=(const const BrnNetwork::GameSearchParamsBase &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkGameSearchParams.h:154
void BrnNetwork::GameSearchParamsPS3::GameSearchParamsPS3() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkGameSearchParams.h:56
void BrnNetwork::GameSearchParamsBase::GameSearchParamsBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkGameSearchParams.h:36
	enum EBrnGameState {
		E_GAMESTATE_ANY = 0,
		E_GAMESTATE_IN_PROGRESS = 1,
		E_GAMESTATE_WAITING_FOR_PLAYERS = 2,
		E_GAMESTATE_COUNT = 3,
	}

	// Declaration
	struct GameSearchParamsBase {
		// BrnNetworkGameSearchParams.h:115
		struct SearchData {
			// BrnNetworkGameSearchParams.h:117
			extern const int32_t KI_MAX_PLAYERS_UPLOAD = 40;

			// BrnNetworkGameSearchParams.h:121
			extern const int32_t KI_MAX_PLAYER_NAME_LENGTH = 16;

			// BrnNetworkGameSearchParams.h:123
			char[40][16] macPlayerNames;

			// BrnNetworkGameSearchParams.h:124
			BrnNetwork::ESearchGameModes meGameSearchGameMode;

			// BrnNetworkGameSearchParams.h:125
			BrnNetwork::EBrnGameState meGameState;

			// BrnNetworkGameSearchParams.h:126
			uint32_t muSkillLevel;

			// BrnNetworkGameSearchParams.h:127
			BrnNetwork::ESearchOpponentTypes meOpponentType;

			// BrnNetworkGameSearchParams.h:128
			uint32_t muRequiredSlots;

			// BrnNetworkGameSearchParams.h:129
			CgsNetwork::EFirewallSettings meFirewallSettings;

			// BrnNetworkGameSearchParams.h:130
			bool mbIsRanked;

			// BrnNetworkGameSearchParams.h:131
			bool mbIsFreeburn;

		}

	}

}

// BrnNetworkGameSearchParams.h:154
struct BrnNetwork::GameSearchParamsPS3 : public BrnNetwork::GameSearchParamsBase {
protected:
	// BrnNetworkGameSearchParams.cpp:428
	virtual void AreRivalsInSameGame(bool *, BrnNetwork::BrnNetworkManager *);

public:
	virtual void ~GameSearchParamsPS3();

}

// BrnNetworkGameSearchParams.h:56
struct BrnNetwork::GameSearchParamsBase : public CgsNetwork::ServerInterfaceGameSearchParams {
private:
	// BrnNetworkGameSearchParams.h:134
	extern const int32_t KI_PATTERN_SIZE = 129;

	// BrnNetworkGameSearchParams.h:135
	BrnNetwork::GameSearchParamsBase::SearchData mSearchData;

	// BrnNetworkGameSearchParams.h:137
	char[129] macPattern;

public:
	// BrnNetworkGameSearchParams.cpp:55
	bool Prepare(BrnNetwork::ESearchGameModes, BrnNetwork::EBrnGameState, uint32_t, BrnNetwork::ESearchOpponentTypes, bool, bool, uint32_t, CgsNetwork::EFirewallSettings, BrnNetwork::BrnNetworkManager *);

	// BrnNetworkGameSearchParams.cpp:126
	BrnNetwork::ESearchGameModes GameMode();

	// BrnNetworkGameSearchParams.cpp:140
	BrnNetwork::EBrnGameState GameState();

	// BrnNetworkGameSearchParams.cpp:154
	uint32_t SkillLevel();

	// BrnNetworkGameSearchParams.cpp:168
	BrnNetwork::ESearchOpponentTypes OpponentType();

protected:
	// BrnNetworkGameSearchParams.cpp:182
	virtual const char * GetPattern() const;

	// BrnNetworkGameSearchParams.cpp:268
	virtual int32_t GetPatternLength() const;

	// BrnNetworkGameSearchParams.cpp:196
	virtual uint32_t GetDataSize() const;

	// BrnNetworkGameSearchParams.cpp:210
	virtual void * GetData();

	// BrnNetworkGameSearchParams.cpp:224
	virtual const void * GetData() const;

	// BrnNetworkGameSearchParams.cpp:238
	virtual uint32_t GetCustomFlagsMask() const;

	// BrnNetworkGameSearchParams.cpp:252
	virtual uint32_t GetCustomFlagsValue() const;

	// BrnNetworkGameSearchParams.h:109
	virtual void AreRivalsInSameGame(bool *, BrnNetwork::BrnNetworkManager *);

private:
	// BrnNetworkGameSearchParams.cpp:282
	void FillInRivals(BrnNetwork::BrnNetworkManager *);

public:
	virtual void ~GameSearchParamsBase();

}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct GameSearchParamsBase {
	public:
		virtual ~GameSearchParamsBase();

		GameSearchParamsBase();

	private:
		// BrnNetworkGameSearchParams.h:134
		extern const int32_t KI_PATTERN_SIZE = 129;

	}

}


// BrnNetworkPlayerParams.h:30
using BrnGameState::GameStateModuleIO;

// BrnNetworkPlayerParams.h:160
extern const int32_t KX_IS_READY = 1;

// BrnNetworkPlayerParams.h:161
extern const int32_t KX_IS_PLAYING = 2;

// BrnNetworkPlayerParams.h:162
extern const int32_t KX_IS_50HZ = 4;

// BrnNetworkPlayerParams.h:163
extern const int32_t KX_HAS_FEVER = 8;

// BrnNetworkPlayerParams.h:164
extern const int32_t KX_DEVELOPER = 16;

// BrnNetworkPlayerParams.h:165
extern const uint32_t KU_LOW_BITS_MASK = 65535;

// BrnNetworkPlayerParams.h:166
extern const uint32_t KU_HIGH_BITS_MASK = 4294901760;

// BrnNetworkPlayerParams.h:167
extern const uint32_t KU_COLOUR_BIT_SHIFT = 16;

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct PlayerParamsBase {
	public:
		virtual ~PlayerParamsBase();

		PlayerParamsBase();

		// BrnNetworkPlayerParams.h:194
		BrnGameState::GameStateModuleIO::EPlayerTeam GetPlayerTeam() const;

		// BrnNetworkPlayerParams.h:243
		void SetPlaying(bool);

		BrnNetwork::PlayerParamsBase & operator=(const BrnNetwork::PlayerParamsBase &);

		// BrnNetworkPlayerParams.h:286
		void SetConsoleFrameRate(CgsSystem::EFrameRate);

		// BrnNetworkPlayerParams.h:322
		void SetRank(int32_t);

		// BrnNetworkPlayerParams.h:339
		void SetFreeBurnCarID(CgsID);

		// BrnNetworkPlayerParams.h:361
		void SetCarColourIndex(uint16_t);

		// BrnNetworkPlayerParams.h:380
		void SetPaintFinishIndex(uint16_t);

		// BrnNetworkPlayerParams.h:409
		void SetHasFever(bool);

		// BrnNetworkPlayerParams.h:428
		void SetIsDeveloper(bool);

		// BrnNetworkPlayerParams.h:388
		uint16_t GetPaintFinishIndex() const;

		// BrnNetworkPlayerParams.h:236
		bool IsPlaying() const;

		// BrnNetworkPlayerParams.h:265
		void SetMarkedPlayerID(AggressiveMoveData::NetworkPlayerID);

		// BrnNetworkPlayerParams.h:221
		void SetReady(bool);

		// BrnNetworkPlayerParams.h:401
		bool HasFever() const;

		// BrnNetworkPlayerParams.h:214
		bool IsReady() const;

		// BrnNetworkPlayerParams.h:258
		AggressiveMoveData::NetworkPlayerID GetMarkedPlayerID() const;

		// BrnNetworkPlayerParams.h:203
		void SetPlayerTeam(BrnGameState::GameStateModuleIO::EPlayerTeam);

		// BrnNetworkPlayerParams.h:372
		uint16_t GetCarColourIndex() const;

		// BrnNetworkPlayerParams.h:348
		void GetFreeBurnCarID(CgsID *);

	}

}

// BrnNetworkPlayerParams.h:53
void BrnNetwork::PlayerParamsBase::~PlayerParamsBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkPlayerParams.h:53
void BrnNetwork::PlayerParamsBase::PlayerParamsBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkPlayerParams.h:53
void BrnNetwork::PlayerParamsBase::operator=(const const BrnNetwork::PlayerParamsBase &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct PlayerParamsBase {
		// BrnNetworkPlayerParams.h:159
		struct CLobbyPlayerParamsData {
			// BrnNetworkPlayerParams.h:160
			extern const int32_t KX_IS_READY = 1;

			// BrnNetworkPlayerParams.h:161
			extern const int32_t KX_IS_PLAYING = 2;

			// BrnNetworkPlayerParams.h:162
			extern const int32_t KX_IS_50HZ = 4;

			// BrnNetworkPlayerParams.h:163
			extern const int32_t KX_HAS_FEVER = 8;

			// BrnNetworkPlayerParams.h:164
			extern const int32_t KX_DEVELOPER = 16;

			// BrnNetworkPlayerParams.h:165
			extern const uint32_t KU_LOW_BITS_MASK = 65535;

			// BrnNetworkPlayerParams.h:166
			extern const uint32_t KU_HIGH_BITS_MASK = 4294901760;

			// BrnNetworkPlayerParams.h:167
			extern const uint32_t KU_COLOUR_BIT_SHIFT = 16;

			// BrnNetworkPlayerParams.h:169
			char[13] macCarId;

			// BrnNetworkPlayerParams.h:170
			int8_t mi8PlayerTeam;

			// BrnNetworkPlayerParams.h:171
			int8_t mxFlags;

			// BrnNetworkPlayerParams.h:172
			int8_t mi8PlayerColourIndex;

			// BrnNetworkPlayerParams.h:173
			int32_t mMarkedPlayer;

			// BrnNetworkPlayerParams.h:174
			int32_t miRank;

			// BrnNetworkPlayerParams.h:175
			uint32_t muCarColourIndex;

		}

	}

}

// BrnNetworkPlayerParams.h:53
struct BrnNetwork::PlayerParamsBase : public CgsNetwork::ServerInterfacePlayerParams {
protected:
	// BrnNetworkPlayerParams.h:178
	BrnNetwork::PlayerParamsBase::CLobbyPlayerParamsData mData;

	// BrnNetworkPlayerParams.cpp:23
	extern char[20] macPattern;

	// BrnNetworkPlayerParams.cpp:22
	extern bool mbPatternPrepared;

public:
	void PlayerParamsBase(const PlayerParamsBase &);

	void PlayerParamsBase();

	// BrnNetworkPlayerParams.cpp:43
	virtual bool Prepare();

	// BrnNetworkPlayerParams.cpp:78
	void PreparePattern();

	// BrnNetworkPlayerParams.cpp:96
	virtual const char * GetPattern() const;

	// BrnNetworkPlayerParams.cpp:110
	virtual uint32_t GetDataSize() const;

	// BrnNetworkPlayerParams.cpp:124
	virtual void * GetData();

	// BrnNetworkPlayerParams.cpp:138
	virtual const void * GetData() const;

	// BrnNetworkPlayerParams.h:194
	BrnGameState::GameStateModuleIO::EPlayerTeam GetPlayerTeam() const;

	// BrnNetworkPlayerParams.h:203
	void SetPlayerTeam(BrnGameState::GameStateModuleIO::EPlayerTeam);

	// BrnNetworkPlayerParams.h:214
	bool IsReady() const;

	// BrnNetworkPlayerParams.h:221
	void SetReady(bool);

	// BrnNetworkPlayerParams.h:236
	bool IsPlaying() const;

	// BrnNetworkPlayerParams.h:243
	void SetPlaying(bool);

	// BrnNetworkPlayerParams.h:258
	RoadRulesRecvData::NetworkPlayerID GetMarkedPlayerID() const;

	// BrnNetworkPlayerParams.h:265
	void SetMarkedPlayerID(RoadRulesRecvData::NetworkPlayerID);

	// BrnNetworkPlayerParams.h:322
	void SetRank(int32_t);

	// BrnNetworkPlayerParams.h:332
	int32_t GetRank() const;

	// BrnNetworkPlayerParams.h:276
	CgsSystem::EFrameRate GetConsoleFrameRate() const;

	// BrnNetworkPlayerParams.h:286
	void SetConsoleFrameRate(CgsSystem::EFrameRate);

	// BrnNetworkPlayerParams.h:339
	void SetFreeBurnCarID(CgsID);

	// BrnNetworkPlayerParams.h:348
	void GetFreeBurnCarID(CgsID *);

	// BrnNetworkPlayerParams.h:361
	void SetCarColourIndex(uint16_t);

	// BrnNetworkPlayerParams.h:372
	uint16_t GetCarColourIndex() const;

	// BrnNetworkPlayerParams.h:380
	void SetPaintFinishIndex(uint16_t);

	// BrnNetworkPlayerParams.h:388
	uint16_t GetPaintFinishIndex() const;

	// BrnNetworkPlayerParams.h:395
	int32_t GetPlayerColourIndex() const;

	// BrnNetworkPlayerParams.h:401
	bool HasFever() const;

	// BrnNetworkPlayerParams.h:409
	void SetHasFever(bool);

	// BrnNetworkPlayerParams.h:420
	bool IsDeveloper() const;

	// BrnNetworkPlayerParams.h:428
	void SetIsDeveloper(bool);

	virtual void ~PlayerParamsBase();

}


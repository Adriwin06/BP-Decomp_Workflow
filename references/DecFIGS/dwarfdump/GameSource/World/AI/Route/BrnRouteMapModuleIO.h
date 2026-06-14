// BrnRoute.h:26
namespace BrnAI {
	// BrnRouteMapModuleIO.h:39
	namespace RouteMapModuleIO {
		struct RaceRouteRequest;

		struct ExtrapolatedRouteRequest;

		struct InputBuffer;

		// BrnRouteMapModuleIO.h:43
		const int32_t KI_MAX_PLAYER_ROUTE_EXTRAPOLATION_GENERATED_SECTIONS = 16;

		// BrnRouteMapModuleIO.h:44
		const int32_t KI_MAX_BLOCK_SECTIONS = 16;

	}

}

// BrnRouteMapModuleIO.h:70
struct BrnAI::RouteMapModuleIO::RaceRouteRequest : Event {
private:
	// BrnRouteMapModuleIO.h:134
	Vector3 mStartPosition;

	// BrnRouteMapModuleIO.h:135
	Vector3 mEndPosition;

	// BrnRouteMapModuleIO.h:136
	uint16_t muStartSectionIndex;

	// BrnRouteMapModuleIO.h:137
	uint16_t muEndSectionIndex;

	// BrnRouteMapModuleIO.h:138
	Array<BrnAI::AISectionId,16u> mauBlockSections;

	// BrnRouteMapModuleIO.h:139
	uint16_t muOwnerId;

	// BrnRouteMapModuleIO.h:140
	uint16_t muEventId;

	// BrnRouteMapModuleIO.h:141
	BrnAI::AStarQuality meQuality;

	// BrnRouteMapModuleIO.h:142
	BrnAI::AStarDistanceFunction meDistanceFunction;

	// BrnRouteMapModuleIO.h:143
	bool mbUseAIShortcuts;

public:
	// BrnRouteMapModuleIO.h:79
	void Construct(uint16_t, uint16_t, Vector3, Vector3, uint16_t, uint16_t);

	// BrnRouteMapModuleIO.h:82
	uint16_t GetOwnerId() const;

	// BrnRouteMapModuleIO.h:85
	uint16_t GetEventId() const;

	// BrnRouteMapModuleIO.h:88
	Vector3 GetStartPosition() const;

	// BrnRouteMapModuleIO.h:91
	Vector3 GetEndPosition() const;

	// BrnRouteMapModuleIO.h:94
	uint16_t GetStartSectionIndex() const;

	// BrnRouteMapModuleIO.h:97
	uint16_t GetEndSectionIndex() const;

	// BrnRouteMapModuleIO.h:101
	AISection::AISectionId GetBlockSectionId(int32_t) const;

	// BrnRouteMapModuleIO.h:104
	int32_t GetBlockSectionIdCount() const;

	// BrnRouteMapModuleIO.h:107
	BrnAI::AStarQuality GetQuality() const;

	// BrnRouteMapModuleIO.h:110
	BrnAI::AStarDistanceFunction GetDistanceFunction() const;

	// BrnRouteMapModuleIO.h:113
	bool UseAIShortcuts() const;

	// BrnRouteMapModuleIO.h:117
	void SetQuality(BrnAI::AStarQuality);

	// BrnRouteMapModuleIO.h:121
	void SetDistanceFunction(BrnAI::AStarDistanceFunction);

	// BrnRouteMapModuleIO.h:125
	void SetUseAIShortcuts(bool);

	// BrnRouteMapModuleIO.h:129
	void AddBlockSectionId(AISection::AISectionId);

}

// BrnRouteMapModuleIO.h:195
struct BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest : Event {
private:
	// BrnRouteMapModuleIO.h:231
	uint16_t muOwnerId;

	// BrnRouteMapModuleIO.h:232
	uint16_t muEventId;

	// BrnRouteMapModuleIO.h:234
	uint8_t muNumberOfSectionsToGenerate;

	// BrnRouteMapModuleIO.h:236
	Vector2 mCarPosition;

	// BrnRouteMapModuleIO.h:237
	Vector2 mCarDirection;

	// BrnRouteMapModuleIO.h:238
	uint32_t muCurrentSectionIndex;

	// BrnRouteMapModuleIO.h:240
	BrnAI::EExtrapolatedType meRouteType;

public:
	// BrnRouteMapModuleIO.h:206
	void Construct(uint16_t, uint16_t, uint8_t, Vector3, Vector3, uint32_t, BrnAI::EExtrapolatedType);

	// BrnRouteMapModuleIO.h:210
	uint16_t GetOwnerId() const;

	// BrnRouteMapModuleIO.h:213
	uint16_t GetEventId() const;

	// BrnRouteMapModuleIO.h:216
	uint8_t GetNumSectionsToGenerate() const;

	// BrnRouteMapModuleIO.h:219
	uint32_t GetCurrentSectionIndex() const;

	// BrnRouteMapModuleIO.h:222
	Vector2 GetCarPosition() const;

	// BrnRouteMapModuleIO.h:225
	Vector2 GetCarDirection() const;

	// BrnRouteMapModuleIO.h:228
	BrnAI::EExtrapolatedType GetRouteType() const;

}

// BrnRouteMapModuleIO.h:258
struct BrnAI::RouteMapModuleIO::InputBuffer : public IOBuffer {
	// BrnRouteMapModuleIO.h:146
	typedef EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1> RaceRouteRequestQueue;

private:
	// BrnRouteMapModuleIO.h:282
	InputBuffer::RaceRouteRequestQueue mRaceRouteRequestQueue;

	// Unknown accessibility
	// BrnRouteMapModuleIO.h:243
	typedef EventQueue<BrnAI::RouteMapModuleIO::ExtrapolatedRouteRequest,12> ExtrapolatedRouteRequestQueue;

	// BrnRouteMapModuleIO.h:283
	InputBuffer::ExtrapolatedRouteRequestQueue mExtrapolatedRouteRequestQueue;

public:
	// BrnRouteMapModuleIO.h:263
	void Construct();

	// BrnRouteMapModuleIO.h:267
	void Destruct();

	// BrnRouteMapModuleIO.h:270
	InputBuffer::RaceRouteRequestQueue * GetRaceRouteRequestQueue();

	// BrnRouteMapModuleIO.h:273
	const InputBuffer::RaceRouteRequestQueue * GetRaceRouteRequestQueue() const;

	// BrnRouteMapModuleIO.h:276
	InputBuffer::ExtrapolatedRouteRequestQueue * GetExtrapolatedRouteRequestQueue();

	// BrnRouteMapModuleIO.h:279
	const InputBuffer::ExtrapolatedRouteRequestQueue * GetExtrapolatedRouteRequestQueue() const;

}

// BrnRoute.h:26
namespace BrnAI {
	// BrnRouteMapModuleIO.h:39
	namespace RouteMapModuleIO {
		struct RaceRouteRequest;

		struct RouteResponse;

		struct ExtrapolatedRouteRequest;

		struct InputBuffer;

		struct OutputBuffer;

		// BrnRouteMapModuleIO.h:43
		const int32_t KI_MAX_PLAYER_ROUTE_EXTRAPOLATION_GENERATED_SECTIONS = 16;

		// BrnRouteMapModuleIO.h:44
		const int32_t KI_MAX_BLOCK_SECTIONS = 16;

	}

}

// BrnRouteMapModuleIO.h:158
struct BrnAI::RouteMapModuleIO::RouteResponse : Event {
private:
	// BrnRouteMapModuleIO.h:178
	Route mRoute;

	// BrnRouteMapModuleIO.h:179
	uint16_t muOwnerId;

	// BrnRouteMapModuleIO.h:180
	uint16_t muEventId;

public:
	// BrnRouteMapModuleIO.h:163
	void Construct(uint16_t, uint16_t);

	// BrnRouteMapModuleIO.h:166
	uint16_t GetOwnerId() const;

	// BrnRouteMapModuleIO.h:169
	uint16_t GetEventId() const;

	// BrnRouteMapModuleIO.h:172
	Route * GetRoute();

	// BrnRouteMapModuleIO.h:175
	const Route * GetRoute() const;

}

// BrnRouteMapModuleIO.h:295
struct BrnAI::RouteMapModuleIO::OutputBuffer : public IOBuffer {
	// BrnRouteMapModuleIO.h:183
	typedef EventQueue<BrnAI::RouteMapModuleIO::RouteResponse,16> RouteResponseQueue;

private:
	// BrnRouteMapModuleIO.h:313
	OutputBuffer::RouteResponseQueue mRouteResponseQueue;

public:
	// BrnRouteMapModuleIO.h:300
	void Construct();

	// BrnRouteMapModuleIO.h:304
	void Destruct();

	// BrnRouteMapModuleIO.h:307
	OutputBuffer::RouteResponseQueue * GetRouteResponseQueue();

	// BrnRouteMapModuleIO.h:310
	const OutputBuffer::RouteResponseQueue * GetRouteResponseQueue() const;

}

// BrnRoute.h:26
namespace BrnAI {
	// BrnRouteMapModuleIO.h:39
	namespace RouteMapModuleIO {
		// BrnRouteMapModuleIO.h:51
		enum RequestOwner {
			E_OWNER_AI = 0,
			E_OWNER_GUI = 1,
			E_OWNER_MODE_MANAGER = 2,
			E_OWNER_COUNT = 3,
		}

		struct RaceRouteRequest;

		struct ExtrapolatedRouteRequest;

		struct InputBuffer;

		// BrnRouteMapModuleIO.h:43
		const int32_t KI_MAX_PLAYER_ROUTE_EXTRAPOLATION_GENERATED_SECTIONS = 16;

		// BrnRouteMapModuleIO.h:44
		const int32_t KI_MAX_BLOCK_SECTIONS = 16;

	}

}

// BrnRoute.h:26
namespace BrnAI {
	// BrnRouteMapModuleIO.h:39
	namespace RouteMapModuleIO {
		// BrnRouteMapModuleIO.h:43
		const int32_t KI_MAX_PLAYER_ROUTE_EXTRAPOLATION_GENERATED_SECTIONS = 16;

		// BrnRouteMapModuleIO.h:44
		const int32_t KI_MAX_BLOCK_SECTIONS = 16;

	}

}

// AISectionsData.h:47
namespace BrnAI {
	// BrnRouteMapModuleIO.h:39
	namespace RouteMapModuleIO {
		// BrnRouteMapModuleIO.h:43
		const int32_t KI_MAX_PLAYER_ROUTE_EXTRAPOLATION_GENERATED_SECTIONS = 16;

		// BrnRouteMapModuleIO.h:44
		const int32_t KI_MAX_BLOCK_SECTIONS = 16;

	}

}

// BrnRoute.h:26
namespace BrnAI {
	// BrnRouteMapModuleIO.h:39
	namespace RouteMapModuleIO {
		// BrnRouteMapModuleIO.h:51
		enum RequestOwner {
			E_OWNER_AI = 0,
			E_OWNER_GUI = 1,
			E_OWNER_MODE_MANAGER = 2,
			E_OWNER_COUNT = 3,
		}

		struct RaceRouteRequest;

		struct RouteResponse;

		struct ExtrapolatedRouteRequest;

		struct InputBuffer;

		struct OutputBuffer;

		// BrnRouteMapModuleIO.h:43
		const int32_t KI_MAX_PLAYER_ROUTE_EXTRAPOLATION_GENERATED_SECTIONS = 16;

		// BrnRouteMapModuleIO.h:44
		const int32_t KI_MAX_BLOCK_SECTIONS = 16;

	}

}


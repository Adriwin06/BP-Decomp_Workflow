// BrnRouteRequestManager.h:158
extern Random mRandom;

// BrnRouteRequestManager.h:161
extern const int32_t KI_MIN_INTERCEPTION_LOOK_AHEAD;

// BrnRouteRequestManager.h:162
extern const int32_t KI_MAX_INTERCEPTION_LOOK_AHEAD;

// BrnRouteRequestManager.h:164
extern const int32_t KI_FREE_ROAM_CHASE_PLAYER_LOOK_AHEAD;

// BrnRoute.h:26
namespace BrnAI {
	// BrnRouteRequestManager.h:31
	enum EUTurns {
		E_ALLOW_U_TURNS = 0,
		E_NO_U_TURNS = 1,
	}

}

// BrnRouteRequestManager.h:61
struct BrnAI::RouteRequestManager {
private:
	// BrnRouteRequestManager.h:157
	Array<uint32_t,8u>[16] mauBlockSectionIds;

	// BrnRouteRequestManager.h:158
	extern Random mRandom;

	// BrnRouteRequestManager.h:159
	BrnAI::AStarDistanceFunction meDefaultAStarDistanceFunction;

	// BrnRouteRequestManager.h:161
	extern const int32_t KI_MIN_INTERCEPTION_LOOK_AHEAD;

	// BrnRouteRequestManager.h:162
	extern const int32_t KI_MAX_INTERCEPTION_LOOK_AHEAD;

	// BrnRouteRequestManager.h:164
	extern const int32_t KI_FREE_ROAM_CHASE_PLAYER_LOOK_AHEAD;

public:
	// BrnRouteRequestManager.h:68
	void Construct();

	// BrnRouteRequestManager.h:76
	void Update(AICar *, AICar *, const AISectionsData *, InputBuffer *, BrnAI::BuzzBy *);

	// BrnRouteRequestManager.h:80
	void SetDefaultAStarDistanceFunction(BrnAI::AStarDistanceFunction);

	// BrnRouteRequestManager.h:85
	void SetBlockSections(int32_t, const Array<uint32_t,8u> *);

	// BrnRouteRequestManager.h:88
	void ClearBlockSections();

private:
	// BrnRouteRequestManager.h:99
	void GenerateRoute(AICar *, AICar *, AICar *, const AISectionsData *, InputBuffer *, BrnAI::BuzzBy *);

	// BrnRouteRequestManager.h:104
	void GenerateFleeingDestination(AICar *, const AISectionsData *);

	// BrnRouteRequestManager.h:111
	void GenerateFreeRoamingDestination(AICar *, AICar *, const AISectionsData *, BrnAI::BuzzBy *);

	// BrnRouteRequestManager.h:118
	void GenerateStandardRouteRequest(AICar *, const AISectionsData *, InputBuffer *, BrnAI::EUTurns);

	// BrnRouteRequestManager.h:125
	void GenerateAlternativeRouteRequest(AICar *, const AICar *, const AISectionsData *, InputBuffer *);

	// BrnRouteRequestManager.h:131
	void GenerateExtrapolatedRouteRequest(AICar *, const AISectionsData *, InputBuffer *);

	// BrnRouteRequestManager.h:136
	Vector3 GetFleeVector(AICar *, AICar *);

	// BrnRouteRequestManager.h:143
	void GenerateRouteFleeingRouteRequest(AICar *, AICar *, const AISectionsData *, InputBuffer *);

	// BrnRouteRequestManager.h:148
	uint16_t ComputeSectionBehind(const AICar *, const AISectionsData *);

	// BrnRouteRequestManager.h:155
	BrnAI::AStarDistanceFunction ChooseDistanceFunction(const AICar *, const AISectionsData *, BrnAI::AStarDistanceFunction, uint16_t);

}

// BrnRouteRequestManager.h:61
struct BrnAI::RouteRequestManager {
private:
	// BrnRouteRequestManager.h:157
	Array<std::uint32_t,8u>[16] mauBlockSectionIds;

	// BrnRouteRequestManager.h:158
	extern Random mRandom;

	// BrnRouteRequestManager.h:159
	BrnAI::AStarDistanceFunction meDefaultAStarDistanceFunction;

	// BrnRouteRequestManager.h:161
	extern const int32_t KI_MIN_INTERCEPTION_LOOK_AHEAD;

	// BrnRouteRequestManager.h:162
	extern const int32_t KI_MAX_INTERCEPTION_LOOK_AHEAD;

	// BrnRouteRequestManager.h:164
	extern const int32_t KI_FREE_ROAM_CHASE_PLAYER_LOOK_AHEAD;

public:
	// BrnRouteRequestManager.h:68
	void Construct();

	// BrnRouteRequestManager.h:76
	void Update(AICar *, AICar *, const AISectionsData *, InputBuffer *, BrnAI::BuzzBy *);

	// BrnRouteRequestManager.h:80
	void SetDefaultAStarDistanceFunction(BrnAI::AStarDistanceFunction);

	// BrnRouteRequestManager.h:85
	void SetBlockSections(int32_t, const Array<std::uint32_t,8u> *);

	// BrnRouteRequestManager.h:88
	void ClearBlockSections();

private:
	// BrnRouteRequestManager.h:99
	void GenerateRoute(AICar *, AICar *, AICar *, const AISectionsData *, InputBuffer *, BrnAI::BuzzBy *);

	// BrnRouteRequestManager.h:104
	void GenerateFleeingDestination(AICar *, const AISectionsData *);

	// BrnRouteRequestManager.h:111
	void GenerateFreeRoamingDestination(AICar *, AICar *, const AISectionsData *, BrnAI::BuzzBy *);

	// BrnRouteRequestManager.h:118
	void GenerateStandardRouteRequest(AICar *, const AISectionsData *, InputBuffer *, BrnAI::EUTurns);

	// BrnRouteRequestManager.h:125
	void GenerateAlternativeRouteRequest(AICar *, const AICar *, const AISectionsData *, InputBuffer *);

	// BrnRouteRequestManager.h:131
	void GenerateExtrapolatedRouteRequest(AICar *, const AISectionsData *, InputBuffer *);

	// BrnRouteRequestManager.h:136
	Vector3 GetFleeVector(AICar *, AICar *);

	// BrnRouteRequestManager.h:143
	void GenerateRouteFleeingRouteRequest(AICar *, AICar *, const AISectionsData *, InputBuffer *);

	// BrnRouteRequestManager.h:148
	uint16_t ComputeSectionBehind(const AICar *, const AISectionsData *);

	// BrnRouteRequestManager.h:155
	BrnAI::AStarDistanceFunction ChooseDistanceFunction(const AICar *, const AISectionsData *, BrnAI::AStarDistanceFunction, uint16_t);

}


// BrnResetOnTrackManager.h:301
extern const int32_t KI_SWEEP_MAX_ATTEMP_COUNT;

// BrnResetOnTrackManager.h:302
extern const float32_t KF_SWEEP_DISTANCE;

// BrnResetOnTrackManager.h:303
extern const float32_t KF_LOOK_AHEAD_MIN_DISTANCE;

// BrnResetOnTrackManager.h:304
extern const float32_t KF_LOOK_BACK_DISTANCE;

// BrnResetOnTrackManager.h:305
extern const float32_t KF_CENTRAL_RESERVATION_OFFSET;

// BrnResetOnTrackManager.h:307
extern const float32_t KF_RECENT_RESET_TIMEOUT;

// BrnResetOnTrackManager.h:309
extern const float32_t KF_NEAR_PLAYER_RESET_AHEAD_DISTANCE;

// BrnResetOnTrackManager.h:311
extern const float32_t KF_VEHICLE_BOUNDING_SPHERE_RADIUS;

// BrnResetOnTrackManager.h:312
extern const float32_t KF_CAR_ROUTE_DIRECTION_TOLERANCE;

// BrnResetOnTrackManager.h:314
extern const float32_t KF_RESET_AHEAD_VARIABILITY;

// BrnResetOnTrackManager.h:316
extern const float32_t K_SLOW_ENOUGH_FOR_DISTANT_RESET;

// BrnResetOnTrackManager.h:317
extern const float32_t KI_NEAR_PLAYER_RESET_BEHIND_DISTANCE_CLOSE;

// BrnResetOnTrackManager.h:318
extern const float32_t KI_NEAR_PLAYER_RESET_BEHIND_DISTANCE_FAR;

// BrnResetOnTrackManager.h:320
extern const float32_t KF_MAX_RESET_DISTANCE;

// BrnResetOnTrackManager.h:322
extern const float32_t KF_CAR_WIDTH;

// BrnResetOnTrackManager.h:323
extern const float32_t KF_CAR_LENGTH;

// BrnResetOnTrackManager.h:325
extern const float32_t KF_MIN_SIDEWAYS_SEPERATION;

// BrnResetOnTrackManager.h:326
extern const float32_t KF_TOO_CLOSE_TO_JOIN_FROM_SIDE;

// BrnResetOnTrackManager.h:327
extern const float32_t KF_JUNCTION_START_RATIO;

// BrnResetOnTrackManager.h:349
extern int32_t miInitialCoordinatesPM;

// BrnResetOnTrackManager.h:350
extern int32_t muAvoidHNGPM;

// BrnResetOnTrackManager.h:351
extern int32_t muTestLineHNGPM;

// BrnRoute.h:26
namespace BrnAI {
	// BrnResetOnTrackManager.h:50
	enum EExtrapolateType {
		eExtrapolateType_RaceStart = 0,
		eExtrapolateType_RoadRage = 1,
	}

	// Declaration
	struct ResetOnTrackManager {
		// BrnResetOnTrackManager.h:92
		struct RecentResetEntry {
			// BrnResetOnTrackManager.h:94
			Vector3 mPosition;

			// BrnResetOnTrackManager.h:95
			float32_t mfTime;

		}

	}

}

// BrnResetOnTrackManager.h:43
struct BrnAI::ResetData {
	// BrnResetOnTrackManager.h:45
	const AISection * mpAISection;

	// BrnResetOnTrackManager.h:46
	Vector3 mPosition;

	// BrnResetOnTrackManager.h:47
	Vector3 mDirection;

}

// BrnResetOnTrackManager.h:67
struct BrnAI::ResetOnTrackManager {
private:
	// BrnResetOnTrackManager.h:301
	extern const int32_t KI_SWEEP_MAX_ATTEMP_COUNT;

	// BrnResetOnTrackManager.h:302
	extern const float32_t KF_SWEEP_DISTANCE;

	// BrnResetOnTrackManager.h:303
	extern const float32_t KF_LOOK_AHEAD_MIN_DISTANCE;

	// BrnResetOnTrackManager.h:304
	extern const float32_t KF_LOOK_BACK_DISTANCE;

	// BrnResetOnTrackManager.h:305
	extern const float32_t KF_CENTRAL_RESERVATION_OFFSET;

	// BrnResetOnTrackManager.h:307
	extern const float32_t KF_RECENT_RESET_TIMEOUT;

	// BrnResetOnTrackManager.h:309
	extern const float32_t KF_NEAR_PLAYER_RESET_AHEAD_DISTANCE;

	// BrnResetOnTrackManager.h:311
	extern const float32_t KF_VEHICLE_BOUNDING_SPHERE_RADIUS;

	// BrnResetOnTrackManager.h:312
	extern const float32_t KF_CAR_ROUTE_DIRECTION_TOLERANCE;

	// BrnResetOnTrackManager.h:314
	extern const float32_t KF_RESET_AHEAD_VARIABILITY;

	// BrnResetOnTrackManager.h:316
	extern const float32_t K_SLOW_ENOUGH_FOR_DISTANT_RESET;

	// BrnResetOnTrackManager.h:317
	extern const float32_t KI_NEAR_PLAYER_RESET_BEHIND_DISTANCE_CLOSE;

	// BrnResetOnTrackManager.h:318
	extern const float32_t KI_NEAR_PLAYER_RESET_BEHIND_DISTANCE_FAR;

	// BrnResetOnTrackManager.h:320
	extern const float32_t KF_MAX_RESET_DISTANCE;

	// BrnResetOnTrackManager.h:322
	extern const float32_t KF_CAR_WIDTH;

	// BrnResetOnTrackManager.h:323
	extern const float32_t KF_CAR_LENGTH;

	// BrnResetOnTrackManager.h:325
	extern const float32_t KF_MIN_SIDEWAYS_SEPERATION;

	// BrnResetOnTrackManager.h:326
	extern const float32_t KF_TOO_CLOSE_TO_JOIN_FROM_SIDE;

	// BrnResetOnTrackManager.h:327
	extern const float32_t KF_JUNCTION_START_RATIO;

	// BrnResetOnTrackManager.h:329
	Array<BrnAI::AIModuleIO::ResetOnTrackRequest,35u> mResetOnTrackRequestQueue;

	// BrnResetOnTrackManager.h:330
	FixedRingBuffer<BrnAI::ResetOnTrackManager::RecentResetEntry,8> mRecentResets;

	// BrnResetOnTrackManager.h:331
	ResourcePtr<BrnAI::AISectionsData> mpAISectionData;

	// BrnResetOnTrackManager.h:332
	AICar * mpaAICars;

	// BrnResetOnTrackManager.h:333
	EGlobalRaceCarIndex mePlayerGlobalRaceCarIndex;

	// BrnResetOnTrackManager.h:334
	int32_t miResetCount;

	// BrnResetOnTrackManager.h:336
	Camera mCamera;

	// BrnResetOnTrackManager.h:337
	Random mRandom;

	// BrnResetOnTrackManager.h:340
	RouteNode mHelperNodeNext;

	// BrnResetOnTrackManager.h:341
	RouteNode mHelperNodePrev;

	// BrnResetOnTrackManager.h:344
	BrnAI::ResetOnTrackDebugComponent mResetOnTrackDebugComponent;

	// BrnResetOnTrackManager.h:349
	extern int32_t miInitialCoordinatesPM;

	// BrnResetOnTrackManager.h:350
	extern int32_t muAvoidHNGPM;

	// BrnResetOnTrackManager.h:351
	extern int32_t muTestLineHNGPM;

public:
	// BrnResetOnTrackManager.h:76
	void Construct(ResourcePtr<BrnAI::AISectionsData>, AICar *);

	// BrnResetOnTrackManager.h:83
	void Update(AIModuleResultInterface *, EGlobalRaceCarIndex, float32_t, Camera);

	// BrnResetOnTrackManager.h:87
	void PushResetOnTrackRequest(const ResetOnTrackRequest *);

private:
	// BrnResetOnTrackManager.h:102
	void ProcessResetOnTrackRequest(const ResetOnTrackRequest *, AIModuleResultInterface *, float32_t);

	// BrnResetOnTrackManager.h:107
	bool ComputeResetOnTrack(ResetData *, const ResetOnTrackRequest *);

	// BrnResetOnTrackManager.h:112
	bool ComputeInitialCoordinatesStandard(ResetData *, EGlobalRaceCarIndex);

	// BrnResetOnTrackManager.h:117
	bool AvoidObstacles(const ResetOnTrackRequest *, ResetData *);

	// BrnResetOnTrackManager.h:122
	void EnsureAIIsDrivingSameDirectionAsPlayer(const AICar *, ResetData *);

	// BrnResetOnTrackManager.h:125
	bool PlayerIsLookingBackwards();

	// BrnResetOnTrackManager.h:129
	bool ResetAheadFromSideTurnings(ResetData *);

	// BrnResetOnTrackManager.h:135
	bool ResetFixedDistanceBehindPlayerAtStartOfRace(ResetData *, float32_t, EGlobalRaceCarIndex);

	// BrnResetOnTrackManager.h:140
	float32_t GetRoadSideForStartingLine(const RouteNode *, int32_t);

	// BrnResetOnTrackManager.h:145
	// Declaration
	bool ResetFixedDistanceBehindPlayer(ResetData *, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnResetOnTrackManager.cpp:892
		using namespace CgsDev::Message;

		// BrnResetOnTrackManager.cpp:896
		using namespace CgsDev::Message;

	}

	// BrnResetOnTrackManager.h:151
	Vector3 ComputeNearestPositionInSegment(Vector3, Vector3, Vector3);

	// BrnResetOnTrackManager.h:158
	bool FindPortalsNearPlayer(const ResetOnTrackRequest *, const AISection **, Vector3 *, Vector3 *);

	// BrnResetOnTrackManager.h:165
	bool ScanBackwardsAlongExtrapolatedRoute(const RouteNode *&, const RouteNode *&, float32_t, BrnAI::EExtrapolateType);

	// BrnResetOnTrackManager.h:171
	bool ScanForwardsAlongExtrapolatedRoute(const RouteNode *&, const RouteNode *&, float32_t);

	// BrnResetOnTrackManager.h:178
	// Declaration
	bool ScanBackwardsAlongPlayerRoute(const RouteNode *&, const RouteNode *&, const AICar *, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnResetOnTrackManager.cpp:1612
		using namespace CgsDev::Message;

	}

	// BrnResetOnTrackManager.h:185
	bool ScanForwardsAlongPlayerRoute(const RouteNode *&, const RouteNode *&, const AICar *, float32_t);

	// BrnResetOnTrackManager.h:189
	// Declaration
	bool ScanForwardsAndAlongJunction(ResetData *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnResetOnTrackManager.cpp:2108
		using namespace CgsDev::Message;

	}

	// BrnResetOnTrackManager.h:198
	bool FindRouteNodesNearPlayer(const ResetOnTrackRequest *, const AICar *, EGlobalRaceCarIndex, const AISection **, Vector3 &, Vector3 &);

	// BrnResetOnTrackManager.h:207
	// Declaration
	bool ConvertNodesToPositionAndDirection(const RouteNode *, const RouteNode *, float32_t, float32_t, ResetData *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnResetOnTrackManager.cpp:710
		using namespace CgsDev::Message;

	}

	// BrnResetOnTrackManager.h:211
	bool ResetDuringRoadRage(ResetData *);

	// BrnResetOnTrackManager.h:215
	// Declaration
	bool ResetNearRoutelessPlayer(ResetData *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnResetOnTrackManager.cpp:1186
		using namespace CgsDev::Message;

		// BrnResetOnTrackManager.cpp:1226
		using namespace CgsDev::Message;

	}

	// BrnResetOnTrackManager.h:220
	bool ResetFixedDistanceAheadPlayerDuringReverse(ResetData *, float32_t);

	// BrnResetOnTrackManager.h:225
	bool ResetFixedDistanceAheadOfPlayer(ResetData *, float32_t);

	// BrnResetOnTrackManager.h:228
	float32_t GetResetDistanceBehindPlayer();

	// BrnResetOnTrackManager.h:231
	bool ResetAwayFromPlayer(ResetData *);

	// BrnResetOnTrackManager.h:238
	// Declaration
	Vector3 DeterminePositionBetweenNodes(Vector3, Vector3, const AICar *, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnResetOnTrackManager.cpp:2175
		using namespace CgsDev::Message;

		// BrnResetOnTrackManager.cpp:2182
		using namespace CgsDev::Message;

	}

	// BrnResetOnTrackManager.h:245
	bool TestCarHNG(const AISection *, const BrnAI::NearbyVehicles *, Vector2, Vector2, float32_t);

	// BrnResetOnTrackManager.h:251
	bool TestSectionHNG(const AISection *, Vector2, Vector2);

	// BrnResetOnTrackManager.h:257
	bool TestTrafficHNG(const BrnAI::NearbyVehicles *, Vector2, Vector2);

	// BrnResetOnTrackManager.h:261
	bool TestRecentResets(Vector3);

	// BrnResetOnTrackManager.h:265
	void UpdateResetOnTrackSection(AICar *);

	// BrnResetOnTrackManager.h:269
	bool UpdateResetOnTrackSectionUsingRoute(AICar *);

	// BrnResetOnTrackManager.h:273
	void UpdateResetOnTrackSectionUsingCurrentSection(AICar *);

	// BrnResetOnTrackManager.h:277
	AICar * GetAICar(EGlobalRaceCarIndex);

	// BrnResetOnTrackManager.h:286
	Vector3 InterpolatePositionFromAngle(Vector2, Vector2, Vector3, Vector3, float32_t);

	// BrnResetOnTrackManager.h:291
	float32_t ComputeAISectionWidth(const AISection *, Vector2);

	// BrnResetOnTrackManager.h:296
	bool IsSimilarInXZ(Vector3, Vector3);

}

// BrnResetOnTrackManager.h:67
struct BrnAI::ResetOnTrackManager {
private:
	// BrnResetOnTrackManager.h:301
	extern const int32_t KI_SWEEP_MAX_ATTEMP_COUNT;

	// BrnResetOnTrackManager.h:302
	extern const float32_t KF_SWEEP_DISTANCE;

	// BrnResetOnTrackManager.h:303
	extern const float32_t KF_LOOK_AHEAD_MIN_DISTANCE;

	// BrnResetOnTrackManager.h:304
	extern const float32_t KF_LOOK_BACK_DISTANCE;

	// BrnResetOnTrackManager.h:305
	extern const float32_t KF_CENTRAL_RESERVATION_OFFSET;

	// BrnResetOnTrackManager.h:307
	extern const float32_t KF_RECENT_RESET_TIMEOUT;

	// BrnResetOnTrackManager.h:309
	extern const float32_t KF_NEAR_PLAYER_RESET_AHEAD_DISTANCE;

	// BrnResetOnTrackManager.h:311
	extern const float32_t KF_VEHICLE_BOUNDING_SPHERE_RADIUS;

	// BrnResetOnTrackManager.h:312
	extern const float32_t KF_CAR_ROUTE_DIRECTION_TOLERANCE;

	// BrnResetOnTrackManager.h:314
	extern const float32_t KF_RESET_AHEAD_VARIABILITY;

	// BrnResetOnTrackManager.h:316
	extern const float32_t K_SLOW_ENOUGH_FOR_DISTANT_RESET;

	// BrnResetOnTrackManager.h:317
	extern const float32_t KI_NEAR_PLAYER_RESET_BEHIND_DISTANCE_CLOSE;

	// BrnResetOnTrackManager.h:318
	extern const float32_t KI_NEAR_PLAYER_RESET_BEHIND_DISTANCE_FAR;

	// BrnResetOnTrackManager.h:320
	extern const float32_t KF_MAX_RESET_DISTANCE;

	// BrnResetOnTrackManager.h:322
	extern const float32_t KF_CAR_WIDTH;

	// BrnResetOnTrackManager.h:323
	extern const float32_t KF_CAR_LENGTH;

	// BrnResetOnTrackManager.h:325
	extern const float32_t KF_MIN_SIDEWAYS_SEPERATION;

	// BrnResetOnTrackManager.h:326
	extern const float32_t KF_TOO_CLOSE_TO_JOIN_FROM_SIDE;

	// BrnResetOnTrackManager.h:327
	extern const float32_t KF_JUNCTION_START_RATIO;

	// BrnResetOnTrackManager.h:329
	Array<BrnAI::AIModuleIO::ResetOnTrackRequest,35u> mResetOnTrackRequestQueue;

	// BrnResetOnTrackManager.h:330
	FixedRingBuffer<BrnAI::ResetOnTrackManager::RecentResetEntry,8> mRecentResets;

	// BrnResetOnTrackManager.h:331
	ResourcePtr<BrnAI::AISectionsData> mpAISectionData;

	// BrnResetOnTrackManager.h:332
	AICar * mpaAICars;

	// BrnResetOnTrackManager.h:333
	EGlobalRaceCarIndex mePlayerGlobalRaceCarIndex;

	// BrnResetOnTrackManager.h:334
	int32_t miResetCount;

	// BrnResetOnTrackManager.h:336
	Camera mCamera;

	// BrnResetOnTrackManager.h:337
	Random mRandom;

	// BrnResetOnTrackManager.h:340
	RouteNode mHelperNodeNext;

	// BrnResetOnTrackManager.h:341
	RouteNode mHelperNodePrev;

	// BrnResetOnTrackManager.h:344
	BrnAI::ResetOnTrackDebugComponent mResetOnTrackDebugComponent;

	// BrnResetOnTrackManager.h:349
	extern int32_t miInitialCoordinatesPM;

	// BrnResetOnTrackManager.h:350
	extern int32_t muAvoidHNGPM;

	// BrnResetOnTrackManager.h:351
	extern int32_t muTestLineHNGPM;

public:
	// BrnResetOnTrackManager.h:76
	void Construct(ResourcePtr<BrnAI::AISectionsData>, AICar *);

	// BrnResetOnTrackManager.h:83
	void Update(AIModuleResultInterface *, EGlobalRaceCarIndex, float32_t, Camera);

	// BrnResetOnTrackManager.h:87
	void PushResetOnTrackRequest(const ResetOnTrackRequest *);

private:
	// BrnResetOnTrackManager.h:102
	void ProcessResetOnTrackRequest(const ResetOnTrackRequest *, AIModuleResultInterface *, float32_t);

	// BrnResetOnTrackManager.h:107
	bool ComputeResetOnTrack(ResetData *, const ResetOnTrackRequest *);

	// BrnResetOnTrackManager.h:112
	bool ComputeInitialCoordinatesStandard(ResetData *, EGlobalRaceCarIndex);

	// BrnResetOnTrackManager.h:117
	bool AvoidObstacles(const ResetOnTrackRequest *, ResetData *);

	// BrnResetOnTrackManager.h:122
	void EnsureAIIsDrivingSameDirectionAsPlayer(const AICar *, ResetData *);

	// BrnResetOnTrackManager.h:125
	bool PlayerIsLookingBackwards();

	// BrnResetOnTrackManager.h:129
	bool ResetAheadFromSideTurnings(ResetData *);

	// BrnResetOnTrackManager.h:135
	bool ResetFixedDistanceBehindPlayerAtStartOfRace(ResetData *, float32_t, EGlobalRaceCarIndex);

	// BrnResetOnTrackManager.h:140
	float32_t GetRoadSideForStartingLine(const RouteNode *, int32_t);

	// BrnResetOnTrackManager.h:145
	bool ResetFixedDistanceBehindPlayer(ResetData *, float32_t);

	// BrnResetOnTrackManager.h:151
	Vector3 ComputeNearestPositionInSegment(Vector3, Vector3, Vector3);

	// BrnResetOnTrackManager.h:158
	bool FindPortalsNearPlayer(const ResetOnTrackRequest *, const AISection **, Vector3 *, Vector3 *);

	// BrnResetOnTrackManager.h:165
	bool ScanBackwardsAlongExtrapolatedRoute(const RouteNode *&, const RouteNode *&, float32_t, BrnAI::EExtrapolateType);

	// BrnResetOnTrackManager.h:171
	bool ScanForwardsAlongExtrapolatedRoute(const RouteNode *&, const RouteNode *&, float32_t);

	// BrnResetOnTrackManager.h:178
	bool ScanBackwardsAlongPlayerRoute(const RouteNode *&, const RouteNode *&, const AICar *, float32_t);

	// BrnResetOnTrackManager.h:185
	bool ScanForwardsAlongPlayerRoute(const RouteNode *&, const RouteNode *&, const AICar *, float32_t);

	// BrnResetOnTrackManager.h:189
	bool ScanForwardsAndAlongJunction(ResetData *);

	// BrnResetOnTrackManager.h:198
	bool FindRouteNodesNearPlayer(const ResetOnTrackRequest *, const AICar *, EGlobalRaceCarIndex, const AISection **, Vector3 &, Vector3 &);

	// BrnResetOnTrackManager.h:207
	bool ConvertNodesToPositionAndDirection(const RouteNode *, const RouteNode *, float32_t, float32_t, ResetData *);

	// BrnResetOnTrackManager.h:211
	bool ResetDuringRoadRage(ResetData *);

	// BrnResetOnTrackManager.h:215
	bool ResetNearRoutelessPlayer(ResetData *);

	// BrnResetOnTrackManager.h:220
	bool ResetFixedDistanceAheadPlayerDuringReverse(ResetData *, float32_t);

	// BrnResetOnTrackManager.h:225
	bool ResetFixedDistanceAheadOfPlayer(ResetData *, float32_t);

	// BrnResetOnTrackManager.h:228
	float32_t GetResetDistanceBehindPlayer();

	// BrnResetOnTrackManager.h:231
	bool ResetAwayFromPlayer(ResetData *);

	// BrnResetOnTrackManager.h:238
	Vector3 DeterminePositionBetweenNodes(Vector3, Vector3, const AICar *, float32_t);

	// BrnResetOnTrackManager.h:245
	bool TestCarHNG(const AISection *, const BrnAI::NearbyVehicles *, Vector2, Vector2, float32_t);

	// BrnResetOnTrackManager.h:251
	bool TestSectionHNG(const AISection *, Vector2, Vector2);

	// BrnResetOnTrackManager.h:257
	bool TestTrafficHNG(const BrnAI::NearbyVehicles *, Vector2, Vector2);

	// BrnResetOnTrackManager.h:261
	bool TestRecentResets(Vector3);

	// BrnResetOnTrackManager.h:265
	void UpdateResetOnTrackSection(AICar *);

	// BrnResetOnTrackManager.h:269
	bool UpdateResetOnTrackSectionUsingRoute(AICar *);

	// BrnResetOnTrackManager.h:273
	void UpdateResetOnTrackSectionUsingCurrentSection(AICar *);

	// BrnResetOnTrackManager.h:277
	AICar * GetAICar(EGlobalRaceCarIndex);

	// BrnResetOnTrackManager.h:286
	Vector3 InterpolatePositionFromAngle(Vector2, Vector2, Vector3, Vector3, float32_t);

	// BrnResetOnTrackManager.h:291
	float32_t ComputeAISectionWidth(const AISection *, Vector2);

	// BrnResetOnTrackManager.h:296
	bool IsSimilarInXZ(Vector3, Vector3);

}


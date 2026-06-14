// BrnRoute.h:26
namespace BrnAI {
	// BrnAISteeringFan.h:41
	enum EBiasMode {
		eBiasMode_First = 0,
		eBiasMode_Race = 0,
		eBiasMode_RaceDangerous = 1,
		eBiasMode_Slam = 2,
		eBiasMode_RoadRage = 3,
		eBiasMode_CloseToPlayer = 4,
		eBiasMode_SlamRivals = 5,
		eBiasMode_HitOncoming = 6,
		eBiasMode_SlamDangerous = 7,
		eBiasMode_DontCentreWithinHNG = 8,
		eBiasMode_VeerAwayFromPlayer = 9,
		eBiasMode_Count = 10,
	}

	// BrnAISteeringFan.h:60
	enum EFan_Contributors {
		eFan_First = 0,
		eFan_SteerToCentre = 0,
		eFan_AvoidHNG = 1,
		eFan_ExitHNG = 2,
		eFan_FavourHNGDanger = 3,
		eFan_AvoidTraffic = 4,
		eFan_AvoidOncomingTraffic = 5,
		eFan_AvoidEdges = 6,
		eFan_DriveParallel = 7,
		eFan_PreferCurrentDirection = 8,
		eFan_DriftFinalDirection = 9,
		eFan_DriftFinalLocation = 10,
		eFan_SmashIntoPlayer = 11,
		eFan_DriveCloseToPlayer = 12,
		eFan_SmashIntoRivals = 13,
		eFan_Count = 14,
	}

	// BrnAISteeringFan.h:58
	const int32_t KI_FAN_STEPS = 17;

	// BrnAISteeringFan.h:80
	const char[14][32] lContributorNames;

}

// BrnAISteeringFan.h:99
struct BrnAI::SteeringFan {
private:
	// BrnAISteeringFan.h:303
	Vector2[17] mTarget;

	// BrnAISteeringFan.h:304
	Vector2[17] mHNGTarget;

	// BrnAISteeringFan.h:305
	Vector2[17] mUnitDirection;

	// BrnAISteeringFan.h:306
	Vector2 mCentreTarget;

	// BrnAISteeringFan.h:308
	Vector3 mFanOrigin;

	// BrnAISteeringFan.h:309
	Vector2 mFanOrigin2D;

	// BrnAISteeringFan.h:310
	Vector2 mPerpendicular;

	// BrnAISteeringFan.h:312
	Vector2 mCentreFarAhead;

	// BrnAISteeringFan.h:313
	Vector2 mCentreAheadFarAhead;

	// BrnAISteeringFan.h:315
	Vector2 mCentreHere;

	// BrnAISteeringFan.h:316
	Vector2 mCentreAhead;

	// BrnAISteeringFan.h:319
	BrnAI::EBiasMode meBiasMode;

	// BrnAISteeringFan.h:321
	float32_t[14][17] mfWeighting;

	// BrnAISteeringFan.h:322
	float32_t[17] mfCumulativeWeighting;

	// BrnAISteeringFan.h:323
	float32_t[17] mTravelDirectionBias;

	// BrnAISteeringFan.h:325
	float32_t mfReciprocalSteps;

	// BrnAISteeringFan.h:327
	float32_t mfLookAheadRadius;

	// BrnAISteeringFan.h:328
	float32_t mfLookAheadHNGRadius;

	// BrnAISteeringFan.h:329
	float32_t mfFanAngle;

	// BrnAISteeringFan.h:331
	int32_t miStateCounter;

	// BrnAISteeringFan.h:333
	bool mbPointAheadKnown;

	// BrnAISteeringFan.h:334
	bool mbCentreHereKnown;

	// BrnAISteeringFan.h:338
	extern int32_t[7] miSteeringFanPM;

public:
	// BrnAISteeringFan.h:104
	void Prepare();

	// BrnAISteeringFan.h:112
	Vector2 GetDrivingTarget(AICar *, RacingLine *, RacingLineGenerator *, const BrnAI::NearbyVehicles *, bool);

	// BrnAISteeringFan.h:115
	float GetSpeedRatio();

	// BrnAISteeringFan.h:119
	void SetBiasMode(BrnAI::EBiasMode);

	// BrnAISteeringFan.h:127
	void UpdateWeightings(AICar *, RacingLine *, RacingLineGenerator *, const BrnAI::NearbyVehicles *, EGlobalRaceCarIndex);

	// BrnAISteeringFan.h:130
	int32_t GetStateCounter() const;

	// BrnAISteeringFan.h:133
	BrnAI::EBiasMode GetBiasMode() const;

private:
	// BrnAISteeringFan.h:142
	float32_t Interpolate(float32_t, float32_t, float32_t);

	// BrnAISteeringFan.h:145
	float32_t InterpToSigned(float32_t);

	// BrnAISteeringFan.h:148
	float32_t GetAngleFromInterp(float32_t);

	// BrnAISteeringFan.h:151
	int32_t GetBestIndex();

	// BrnAISteeringFan.h:154
	Vector2 GetBestTarget();

	// BrnAISteeringFan.h:158
	void CalculateFanAngle(AICar *);

	// BrnAISteeringFan.h:162
	void ClearWeighting(int32_t);

	// BrnAISteeringFan.h:165
	void ClearWeightings();

	// BrnAISteeringFan.h:168
	void AccumulateWeightings();

	// BrnAISteeringFan.h:174
	int32_t GetMinMaxWeightings(float *, float32_t &, float32_t &);

	// BrnAISteeringFan.h:178
	void GenerateFanVectors(AICar *);

	// BrnAISteeringFan.h:182
	void RenderFanVectors(int32_t);

	// BrnAISteeringFan.h:187
	void IncludeCentreLineTracking(RacingLineGenerator *, RacingLine *);

	// BrnAISteeringFan.h:192
	void IncludeHardNoGo(RacingLineGenerator *, RacingLine *);

	// BrnAISteeringFan.h:198
	void IncludeConstantBearing(RacingLine *, AICar *, const BrnAI::NearbyVehicles *);

	// BrnAISteeringFan.h:203
	void IncludeDriftDirectionTracking(RacingLineGenerator *, RacingLine *);

	// BrnAISteeringFan.h:209
	void IncludeSmashIntoPlayer(AICar *, const BrnAI::NearbyVehicles *, EGlobalRaceCarIndex);

	// BrnAISteeringFan.h:214
	void IncludeSmashIntoNearbyAI(AICar *, const BrnAI::NearbyVehicles *);

	// BrnAISteeringFan.h:222
	void IncludeSmashIntoTarget(AICar *, const BrnAI::NearbyVehicle *, BrnAI::EFan_Contributors, float32_t, float32_t);

	// BrnAISteeringFan.h:226
	const BrnAI::NearbyVehicle * FindPlayerInTraffic(const BrnAI::NearbyVehicles *);

	// BrnAISteeringFan.h:232
	const BrnAI::NearbyVehicle * FindVictimInTraffic(const BrnAI::NearbyVehicles *, EGlobalRaceCarIndex);

	// BrnAISteeringFan.h:237
	const BrnAI::NearbyVehicle * FindNeabyAIInTraffic(const BrnAI::NearbyVehicles *, AICar *);

	// BrnAISteeringFan.h:242
	void IncludeDriveCloseToPlayer(RacingLine *, AICar *, const BrnAI::NearbyVehicles *);

	// BrnAISteeringFan.h:245
	int32_t GetBestAccumulation();

	// BrnAISteeringFan.h:250
	float32_t AccumulateInArea(int32_t, int32_t);

	// BrnAISteeringFan.h:255
	int32_t BestTargetInArea(int32_t, int32_t);

	// BrnAISteeringFan.h:260
	void RenderEdge(int32_t, RGBA);

	// BrnAISteeringFan.h:266
	void RenderContributor(float32_t *, RGBA, float32_t);

	// BrnAISteeringFan.h:271
	void IncludeRouteEdgeIntersection(RacingLineGenerator *, RacingLine *);

	// BrnAISteeringFan.h:274
	void IncludePreferCurrentDirection();

	// BrnAISteeringFan.h:278
	void WriteWeightingValues(int32_t);

	// BrnAISteeringFan.h:285
	float32_t FanIntersectsEdge(Vector2 *, int32_t, Vector2, Vector2);

	// BrnAISteeringFan.h:290
	void IncludeRouteParallelTracking(RacingLineGenerator *, RacingLine *);

	// BrnAISteeringFan.h:295
	void IncludeDriftLocationTracking(RacingLineGenerator *, RacingLine *);

	// BrnAISteeringFan.h:300
	void CachePointAhead(RacingLineGenerator *, RacingLine *);

}

// BrnRoute.h:26
namespace BrnAI {
	// BrnAISteeringFan.h:58
	const int32_t KI_FAN_STEPS = 17;

	// BrnAISteeringFan.h:80
	const char[14][32] lContributorNames;

}


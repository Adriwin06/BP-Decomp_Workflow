// BrnRoute.h:26
namespace BrnAI {
	// BrnRacingLineGenerator.h:32
	const float32_t KF_HNG_CROSSPIECE_LENGTH;

}

// BrnRacingLineGenerator.h:63
struct BrnAI::RacingLineGenerator {
private:
	// BrnRacingLineGenerator.h:380
	extern int32_t miGenerateRacingLinePM;

	// BrnRacingLineGenerator.h:381
	extern int32_t miGenerateInSectionPM;

	// BrnRacingLineGenerator.h:382
	extern int32_t miHNGMapGenerationPM1;

	// BrnRacingLineGenerator.h:383
	extern int32_t miHNGMapGenerationPM2;

	// BrnRacingLineGenerator.h:384
	extern int32_t miHNGMapGenerationPM3;

	// BrnRacingLineGenerator.h:385
	extern int32_t miFarAheadPM;

	// BrnRacingLineGenerator.h:393
	extern bool mbDrawAvoidanceDebug;

public:
	// BrnRacingLineGenerator.h:75
	void InitialiseRacingLine(RacingLine *, AICar *, int32_t, AISectionsData *);

	// BrnRacingLineGenerator.h:81
	int32_t GetLocalSectionID(RacingLine *, Vector2, int32_t);

	// BrnRacingLineGenerator.h:87
	int32_t GetNearSectionID(RacingLine *, Vector2, int32_t);

	// BrnRacingLineGenerator.h:96
	int32_t FindTargetFixedDistanceAhead(RacingLine *, Vector2, Vector2 &, float32_t, float32_t, int32_t);

	// BrnRacingLineGenerator.h:102
	float32_t GetPerpendicularDistanceToCentreLine(RacingLine *, Vector2, float32_t);

	// BrnRacingLineGenerator.h:107
	void RaceDefaultsLineToAutoCentre(RacingLine *);

	// BrnRacingLineGenerator.h:112
	void RaceLineDefaultsToSlamPlayer(RacingLine *, Vector3);

	// BrnRacingLineGenerator.h:117
	void RaceLineDefaultsToHoldingRoadPosition(RacingLine *, float32_t);

	// BrnRacingLineGenerator.h:122
	void MoveRaceLineToSlamPlayer(RacingLine *, Vector3);

	// BrnRacingLineGenerator.h:129
	void GenerateInOutVectors(RacingLine *, int32_t, Vector2 &, Vector2 &);

	// BrnRacingLineGenerator.h:139
	// Declaration
	int32_t ExtrapolateRouteBackwards(int32_t, uint16_t, Vector2, Vector2, const AISectionsData *, ExtrapolatedIndexArray &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRouteMapModule.h:55
		typedef CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u> ExtrapolatedIndexArray;

	}

	// BrnRacingLineGenerator.h:148
	int32_t ExtrapolateRouteForwards(int32_t, int32_t, Vector2, Vector2, const AISectionsData *, ExtrapolatedIndexArray &);

	// BrnRacingLineGenerator.h:158
	int32_t ExtrapolateTwistyRoute(int32_t, int32_t, Vector2, Vector2, const AISectionsData *, ExtrapolatedIndexArray &);

	// BrnRacingLineGenerator.h:166
	uint8_t GetForwardPortalIndex(const AISectionsData *, const AISection *, Vector2, Vector2);

	// BrnRacingLineGenerator.h:171
	SectionData * GetSectionPointer(RacingLine *, int32_t);

	// BrnRacingLineGenerator.h:176
	SectionData * GetSectionPointerForWrite(RacingLine *, int32_t);

	// BrnRacingLineGenerator.h:181
	int32_t GetBestSectionIndex(RacingLine *, int32_t);

	// BrnRacingLineGenerator.h:186
	float GetRoadPositionAsPercentage(RacingLine *, AICar *);

	// BrnRacingLineGenerator.h:190
	void RenderHardNoGoMap(RacingLine *);

	// BrnRacingLineGenerator.h:198
	bool GetPointFarAhead(RacingLine *, float32_t, Vector2, Vector2 &, Vector2 &);

	// BrnRacingLineGenerator.h:203
	void DrawCentreLine(RacingLine *, Vector2);

	// BrnRacingLineGenerator.h:208
	void RenderSectionDetails(RacingLine *, Vector2);

	// BrnRacingLineGenerator.h:212
	bool SpreadHNGBackOneStep(RacingLine *);

	// BrnRacingLineGenerator.h:221
	bool GetCentreCentreLineHere(RacingLine *, Vector2, Vector2, Vector2 &, Vector2 &);

	// BrnRacingLineGenerator.h:226
	bool CacheUpToDate(RacingLine *, int32_t);

private:
	// BrnRacingLineGenerator.h:231
	void DoSlowTurn();

	// BrnRacingLineGenerator.h:239
	int32_t CacheLocalSections(RacingLine *, const Route *, AISectionsData *, AICar *);

	// BrnRacingLineGenerator.h:248
	int32_t FindAnyTargetOnLineAhead(RacingLine *, Vector2, Vector2 &, float32_t, float32_t, int32_t);

	// BrnRacingLineGenerator.h:253
	float32_t GetHalfRoadWidthHere(RacingLine *, Vector2);

	// BrnRacingLineGenerator.h:262
	void GetSimpleHermite(Vector2, Vector2, Vector2, Vector2, VecFloat, Vector2 &);

	// BrnRacingLineGenerator.h:271
	float32_t GetIterativeHermite(Vector2, Vector2, Vector2, Vector2, float32_t, Vector2 &);

	// BrnRacingLineGenerator.h:278
	float32_t GetSectionInterpPosition(RacingLine *, int32_t, Vector2);

	// BrnRacingLineGenerator.h:287
	void CalculateIntersectionWithProjectedRoute(RacingLine *, int32_t, Vector2, Vector2, float32_t);

	// BrnRacingLineGenerator.h:292
	bool IsAJunction(RacingLine *, int32_t);

	// BrnRacingLineGenerator.h:297
	void SetupSectionExit(RacingLine *, int32_t);

	// BrnRacingLineGenerator.h:303
	void GetRouteCentre(RacingLine *, int32_t, Vector2 &);

	// BrnRacingLineGenerator.h:308
	int32_t LookForStraightSectionAhead(RacingLine *, int32_t);

	// BrnRacingLineGenerator.h:313
	int32_t LookForStraightSectionBehind(RacingLine *, int32_t);

	// BrnRacingLineGenerator.h:318
	void SetTargetUpToDate(RacingLine *, int32_t);

	// BrnRacingLineGenerator.h:323
	bool IsTargetUpToDate(RacingLine *, int32_t);

	// BrnRacingLineGenerator.h:331
	void GetPointAndNormalOnCurve(RacingLine *, int32_t, float32_t, Vector2 &, Vector2 &);

	// BrnRacingLineGenerator.h:337
	float32_t GetWidthHalfWidthOfKnownSection(RacingLine *, int32_t, float32_t);

	// BrnRacingLineGenerator.h:343
	void GetSectionPortal(SectionData *, Vector2 &, Vector2 &);

	// BrnRacingLineGenerator.h:349
	void GuessInwardsSectionPortal(SectionData *, Vector2 &, Vector2 &);

	// BrnRacingLineGenerator.h:354
	void SetUpHardNoGoMap(RacingLine *, int32_t);

	// BrnRacingLineGenerator.h:359
	void SetUpIncomingPortalTarget(RacingLine *, int32_t);

	// BrnRacingLineGenerator.h:363
	void FinishedSpreadingBack(RacingLine *);

	// BrnRacingLineGenerator.h:368
	bool HasSpreadHardNoGoLinesFinished(RacingLine *);

	// BrnRacingLineGenerator.h:372
	void SpreadHardNoGoLinesThroughCurrentSection(RacingLine *);

	// BrnRacingLineGenerator.h:376
	void DropHardNoGoLinesIntoMap(RacingLine *);

}

// BrnRacingLineGenerator.h:63
struct BrnAI::RacingLineGenerator {
private:
	// BrnRacingLineGenerator.h:380
	extern int32_t miGenerateRacingLinePM;

	// BrnRacingLineGenerator.h:381
	extern int32_t miGenerateInSectionPM;

	// BrnRacingLineGenerator.h:382
	extern int32_t miHNGMapGenerationPM1;

	// BrnRacingLineGenerator.h:383
	extern int32_t miHNGMapGenerationPM2;

	// BrnRacingLineGenerator.h:384
	extern int32_t miHNGMapGenerationPM3;

	// BrnRacingLineGenerator.h:385
	extern int32_t miFarAheadPM;

	// BrnRacingLineGenerator.h:393
	extern bool mbDrawAvoidanceDebug;

public:
	// BrnRacingLineGenerator.h:75
	void InitialiseRacingLine(RacingLine *, AICar *, int32_t, AISectionsData *);

	// BrnRacingLineGenerator.h:81
	int32_t GetLocalSectionID(RacingLine *, Vector2, int32_t);

	// BrnRacingLineGenerator.h:87
	int32_t GetNearSectionID(RacingLine *, Vector2, int32_t);

	// BrnRacingLineGenerator.h:96
	int32_t FindTargetFixedDistanceAhead(RacingLine *, Vector2, Vector2 &, float32_t, float32_t, int32_t);

	// BrnRacingLineGenerator.h:102
	float32_t GetPerpendicularDistanceToCentreLine(RacingLine *, Vector2, float32_t);

	// BrnRacingLineGenerator.h:107
	void RaceDefaultsLineToAutoCentre(RacingLine *);

	// BrnRacingLineGenerator.h:112
	void RaceLineDefaultsToSlamPlayer(RacingLine *, Vector3);

	// BrnRacingLineGenerator.h:117
	void RaceLineDefaultsToHoldingRoadPosition(RacingLine *, float32_t);

	// BrnRacingLineGenerator.h:122
	void MoveRaceLineToSlamPlayer(RacingLine *, Vector3);

	// BrnRacingLineGenerator.h:129
	void GenerateInOutVectors(RacingLine *, int32_t, Vector2 &, Vector2 &);

	// BrnRacingLineGenerator.h:139
	// Declaration
	int32_t ExtrapolateRouteBackwards(int32_t, uint16_t, Vector2, Vector2, const AISectionsData *, ExtrapolatedIndexArray &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRouteMapModule.h:55
		typedef CgsContainers::Array<BrnAI::SectionAndPortalIndices,16u> ExtrapolatedIndexArray;

	}

	// BrnRacingLineGenerator.h:148
	int32_t ExtrapolateRouteForwards(int32_t, int32_t, Vector2, Vector2, const AISectionsData *, ExtrapolatedIndexArray &);

	// BrnRacingLineGenerator.h:158
	int32_t ExtrapolateTwistyRoute(int32_t, int32_t, Vector2, Vector2, const AISectionsData *, ExtrapolatedIndexArray &);

	// BrnRacingLineGenerator.h:166
	uint8_t GetForwardPortalIndex(const AISectionsData *, const AISection *, Vector2, Vector2);

	// BrnRacingLineGenerator.h:171
	SectionData * GetSectionPointer(RacingLine *, int32_t);

	// BrnRacingLineGenerator.h:176
	SectionData * GetSectionPointerForWrite(RacingLine *, int32_t);

	// BrnRacingLineGenerator.h:181
	int32_t GetBestSectionIndex(RacingLine *, int32_t);

	// BrnRacingLineGenerator.h:186
	float GetRoadPositionAsPercentage(RacingLine *, AICar *);

	// BrnRacingLineGenerator.h:190
	void RenderHardNoGoMap(RacingLine *);

	// BrnRacingLineGenerator.h:198
	bool GetPointFarAhead(RacingLine *, float32_t, Vector2, Vector2 &, Vector2 &);

	// BrnRacingLineGenerator.h:203
	void DrawCentreLine(RacingLine *, Vector2);

	// BrnRacingLineGenerator.h:208
	void RenderSectionDetails(RacingLine *, Vector2);

	// BrnRacingLineGenerator.h:212
	bool SpreadHNGBackOneStep(RacingLine *);

	// BrnRacingLineGenerator.h:221
	bool GetCentreCentreLineHere(RacingLine *, Vector2, Vector2, Vector2 &, Vector2 &);

	// BrnRacingLineGenerator.h:226
	bool CacheUpToDate(RacingLine *, int32_t);

private:
	// BrnRacingLineGenerator.h:231
	void DoSlowTurn();

	// BrnRacingLineGenerator.h:239
	int32_t CacheLocalSections(RacingLine *, const Route *, AISectionsData *, AICar *);

	// BrnRacingLineGenerator.h:248
	int32_t FindAnyTargetOnLineAhead(RacingLine *, Vector2, Vector2 &, float32_t, float32_t, int32_t);

	// BrnRacingLineGenerator.h:253
	float32_t GetHalfRoadWidthHere(RacingLine *, Vector2);

	// BrnRacingLineGenerator.h:262
	void GetSimpleHermite(Vector2, Vector2, Vector2, Vector2, VecFloat, Vector2 &);

	// BrnRacingLineGenerator.h:271
	float32_t GetIterativeHermite(Vector2, Vector2, Vector2, Vector2, float32_t, Vector2 &);

	// BrnRacingLineGenerator.h:278
	float32_t GetSectionInterpPosition(RacingLine *, int32_t, Vector2);

	// BrnRacingLineGenerator.h:287
	void CalculateIntersectionWithProjectedRoute(RacingLine *, int32_t, Vector2, Vector2, float32_t);

	// BrnRacingLineGenerator.h:292
	bool IsAJunction(RacingLine *, int32_t);

	// BrnRacingLineGenerator.h:297
	void SetupSectionExit(RacingLine *, int32_t);

	// BrnRacingLineGenerator.h:303
	void GetRouteCentre(RacingLine *, int32_t, Vector2 &);

	// BrnRacingLineGenerator.h:308
	int32_t LookForStraightSectionAhead(RacingLine *, int32_t);

	// BrnRacingLineGenerator.h:313
	int32_t LookForStraightSectionBehind(RacingLine *, int32_t);

	// BrnRacingLineGenerator.h:318
	void SetTargetUpToDate(RacingLine *, int32_t);

	// BrnRacingLineGenerator.h:323
	bool IsTargetUpToDate(RacingLine *, int32_t);

	// BrnRacingLineGenerator.h:331
	// Declaration
	void GetPointAndNormalOnCurve(RacingLine *, int32_t, float32_t, Vector2 &, Vector2 &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRacingLineGenerator.cpp:2175
		using namespace CgsDev::Message;

		// BrnRacingLineGenerator.cpp:2176
		using namespace CgsDev::Message;

		// BrnRacingLineGenerator.cpp:2178
		using namespace CgsDev::Message;

		// BrnRacingLineGenerator.cpp:2179
		using namespace CgsDev::Message;

		// BrnRacingLineGenerator.cpp:2181
		using namespace CgsDev::Message;

		// BrnRacingLineGenerator.cpp:2182
		using namespace CgsDev::Message;

		// BrnRacingLineGenerator.cpp:2184
		using namespace CgsDev::Message;

		// BrnRacingLineGenerator.cpp:2187
		using namespace CgsDev::Message;

		// BrnRacingLineGenerator.cpp:2191
		using namespace CgsDev::Message;

		// BrnRacingLineGenerator.cpp:2194
		using namespace CgsDev::Message;

	}

	// BrnRacingLineGenerator.h:337
	float32_t GetWidthHalfWidthOfKnownSection(RacingLine *, int32_t, float32_t);

	// BrnRacingLineGenerator.h:343
	void GetSectionPortal(SectionData *, Vector2 &, Vector2 &);

	// BrnRacingLineGenerator.h:349
	void GuessInwardsSectionPortal(SectionData *, Vector2 &, Vector2 &);

	// BrnRacingLineGenerator.h:354
	void SetUpHardNoGoMap(RacingLine *, int32_t);

	// BrnRacingLineGenerator.h:359
	void SetUpIncomingPortalTarget(RacingLine *, int32_t);

	// BrnRacingLineGenerator.h:363
	void FinishedSpreadingBack(RacingLine *);

	// BrnRacingLineGenerator.h:368
	bool HasSpreadHardNoGoLinesFinished(RacingLine *);

	// BrnRacingLineGenerator.h:372
	void SpreadHardNoGoLinesThroughCurrentSection(RacingLine *);

	// BrnRacingLineGenerator.h:376
	void DropHardNoGoLinesIntoMap(RacingLine *);

}


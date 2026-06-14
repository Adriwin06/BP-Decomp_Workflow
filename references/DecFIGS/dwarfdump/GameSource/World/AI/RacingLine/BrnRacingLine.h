// BrnRoute.h:26
namespace BrnAI {
	// BrnRacingLine.h:32
	const int32_t KI_RACING_LINE_MAX_AVAILABLE_SECTIONS = 16;

	// BrnRacingLine.h:33
	const int32_t KI_RACING_LINE_MAX_NODES = 10;

	// BrnRacingLine.h:37
	const float32_t KF_CENTRE_LINE_AHEAD_CLOSE;

	// BrnRacingLine.h:38
	const float32_t KF_CENTRE_LINE_AHEAD_FAR;

}

// BrnRacingLine.h:149
struct BrnAI::SectionData {
	// BrnRacingLine.h:152
	Vector4 mA4XCoords;

	// BrnRacingLine.h:153
	Vector4 mA4YCoords;

	// BrnRacingLine.h:154
	Vector4 mEdge4X;

	// BrnRacingLine.h:155
	Vector4 mEdge4Y;

	// BrnRacingLine.h:156
	Vector4 mPortalEntranceAndExit;

	// BrnRacingLine.h:158
	HardNoGoMap mHardNoGoMap;

	// BrnRacingLine.h:160
	const AISection * mpLineSection;

	// BrnRacingLine.h:161
	const Portal * mpTargetPortal;

	// BrnRacingLine.h:163
	int16_t mCachedSectionIndex;

	// BrnRacingLine.h:164
	bool mbTargetUpToDate;

public:
	// BrnRacingLine.h:167
	Vector2 GetSectionExit();

	// BrnRacingLine.h:170
	Vector2 GetSectionEntrance();

	// BrnRacingLine.h:174
	void SetSectionEntrance(Vector2);

	// BrnRacingLine.h:178
	void SetSectionExit(Vector2);

	// BrnRacingLine.h:182
	void SetFastSectionCorners(const AISection *);

}

// BrnRacingLine.h:246
struct BrnAI::RacingLine {
	// BrnRacingLine.h:278
	int32_t mFirstSectionInCache;

	// BrnRacingLine.h:279
	int32_t mLastSectionInCache;

	// BrnRacingLine.h:283
	SectionData[16] maSectionCache;

	// BrnRacingLine.h:288
	float32_t mfDefaultPerpendicularOffset;

	// BrnRacingLine.h:289
	bool mbDefiniteDestination;

	// BrnRacingLine.h:293
	float32_t mfImmediateTimeToTrafficImpact;

	// BrnRacingLine.h:294
	float32_t mfImmediateDistanceToTrafficImpact;

	// BrnRacingLine.h:295
	float32_t mfImmmediateApproachSpeedOfTrafficAhead;

	// BrnRacingLine.h:296
	float32_t mfRoadPlacement;

	// BrnRacingLine.h:298
	Vector3 mCarPos;

	// BrnRacingLine.h:302
	float32_t[32] maStretchDistanceForHNG;

	// BrnRacingLine.h:303
	int32_t miSectionToSpread;

	// BrnRacingLine.h:304
	int32_t miBackwardsStep;

	// BrnRacingLine.h:305
	int32_t miHNGLineStart;

	// BrnRacingLine.h:306
	float32_t mfSpreadDistance;

	// BrnRacingLine.h:308
	bool mbIsInitialised;

	// BrnRacingLine.h:310
	bool mbCentreLineHereKnown;

	// BrnRacingLine.h:311
	Vector2 mCentreHere;

	// BrnRacingLine.h:312
	Vector2 mCentreAhead;

	// BrnRacingLine.h:314
	int32_t miLastKnownSectionID;

	// BrnRacingLine.h:316
	float32_t mfCentreLineAhead;

	// BrnRacingLine.h:317
	float32_t mfCentreLineAheadRecip;

public:
	// BrnRacingLine.h:251
	void Construct();

	// BrnRacingLine.h:255
	void SetInitialised(bool);

	// BrnRacingLine.h:260
	void ClearSectionCache();

	// BrnRacingLine.h:264
	bool IsInitialised() const;

	// BrnRacingLine.h:271
	bool GetPointAhead(float32_t, Vector2 &, Vector2 &);

	// BrnRacingLine.h:275
	void SetCentreLineAhead(float32_t);

}

// BrnRoute.h:26
namespace BrnAI {
	// BrnRacingLine.h:45
	enum EAvoidingHardNoGo {
		EAvoidingHardNoGo_Active = 0,
		EAvoidingHardNoGo_Inactive = 1,
		EAvoidingHardNoGo_Count = 2,
	}

	// BrnRacingLine.h:32
	const int32_t KI_RACING_LINE_MAX_AVAILABLE_SECTIONS = 16;

	// BrnRacingLine.h:33
	const int32_t KI_RACING_LINE_MAX_NODES = 10;

	// BrnRacingLine.h:37
	const float32_t KF_CENTRE_LINE_AHEAD_CLOSE;

	// BrnRacingLine.h:38
	const float32_t KF_CENTRE_LINE_AHEAD_FAR;

}

// BrnRacingLine.h:61
struct BrnAI::RacingLineNode {
private:
	// BrnRacingLine.h:87
	Vector4 mPostionAndDirection;

	// BrnRacingLine.h:88
	float32_t mfLength;

public:
	// BrnRacingLine.h:67
	Vector2 GetPosition() const;

	// BrnRacingLine.h:71
	void SetPosition(Vector2);

	// BrnRacingLine.h:75
	void SetDirection(Vector2);

	// BrnRacingLine.h:78
	Vector2 GetDirection() const;

	// BrnRacingLine.h:81
	float32_t GetStepLength() const;

}


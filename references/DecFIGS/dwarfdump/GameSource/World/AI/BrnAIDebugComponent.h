// BrnAIDebugComponent.h:200
extern const rw::math::vpu::Vector3 K_CAR_SIZE;

// BrnAIDebugComponent.h:201
extern const rw::math::vpu::Vector3 K_CURRENT_CAR_SIZE;

// BrnAIDebugComponent.h:202
extern const RGBA KU_CAR_COLOUR;

// BrnAIDebugComponent.h:203
extern const RGBA KU_STATE_TEXT_COLOUR;

// BrnAIDebugComponent.h:204
extern const RGBA KU_HIGHLIGHT_TEXT_COLOUR;

// BrnAIDebugComponent.h:205
extern const RGBA KU_UBER_HIGHLIGHT_TEXT_COLOUR;

// BrnAIDebugComponent.h:206
extern const RGBA KU_CURRENT_CAR_COLOUR;

// BrnAIDebugComponent.h:207
extern const RGBA KU_ROUTE_LINE_COLOUR;

// BrnAIDebugComponent.h:208
extern const RGBA KU_ROUTE_NODE_COLOUR;

// BrnAIDebugComponent.h:209
extern const RGBA KU_RACING_LINE_COLOUR1;

// BrnAIDebugComponent.h:210
extern const RGBA KU_RACING_LINE_COLOUR2;

// BrnAIDebugComponent.h:211
extern const RGBA KU_TARGET_LINE_COLOUR;

// BrnAIDebugComponent.h:212
extern const RGBA KU_CURRENT_NODE_COLOUR;

// BrnAIDebugComponent.h:213
extern const RGBA KU_VELOCITY_LINE_COLOUR;

// BrnAIDebugComponent.h:214
extern const RGBA KU_LOOKAHEAD_LINE_COLOUR;

// BrnAIDebugComponent.h:215
extern const RGBA KU_DRIVER_TARGET_LINE_COLOUR;

// BrnAIDebugComponent.h:216
extern const RGBA KU_AGGRESSIVE_COLOUR;

// BrnAIDebugComponent.h:217
extern const RGBA KU_TRAFFIC_LINE_COLOUR;

// BrnAIDebugComponent.h:218
extern const RGBA KU_BRAKING_COLOUR;

// BrnAIDebugComponent.h:219
extern const int32_t KI_NUM_SECTIONS_DISPLAYED;

// BrnAIDebugComponent.h:220
extern const float32_t KF_ROUTE_NODE_SIZE;

// BrnAIDebugComponent.h:221
extern const float32_t KF_CAR_YOFFSET;

// BrnAIDebugComponent.h:222
extern const float32_t KF_ROUTE_YOFFSET;

// BrnAIDebugComponent.h:223
extern const float32_t KF_AT_DISPLAY_VECTOR_LENGTH;

// BrnAIDebugComponent.h:226
extern const float32_t KF_STATE_TABLE_X;

// BrnAIDebugComponent.h:227
extern const float32_t KF_STATE_TABLE_Y;

// BrnAIDebugComponent.h:228
extern const float32_t KF_STATE_TABLE_SPACING_X;

// BrnAIDebugComponent.h:229
extern const float32_t KF_STATE_TABLE_HEADER_SPACING_X;

// BrnAIDebugComponent.h:230
extern const float32_t KF_STATE_TABLE_SPACING_Y;

// BrnAIDebugComponent.h:231
extern const float32_t KF_STATE_TABLE_FONT_SIZE;

// BrnAIDebugComponent.h:52
struct BrnAI::AIDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnAIDebugComponent.cpp:34
	extern const rw::math::vpu::Vector3 K_CAR_SIZE;

	// BrnAIDebugComponent.cpp:35
	extern const rw::math::vpu::Vector3 K_CURRENT_CAR_SIZE;

	// BrnAIDebugComponent.cpp:36
	extern const RGBA KU_CAR_COLOUR;

	// BrnAIDebugComponent.cpp:37
	extern const RGBA KU_STATE_TEXT_COLOUR;

	// BrnAIDebugComponent.cpp:38
	extern const RGBA KU_HIGHLIGHT_TEXT_COLOUR;

	// BrnAIDebugComponent.cpp:39
	extern const RGBA KU_UBER_HIGHLIGHT_TEXT_COLOUR;

	// BrnAIDebugComponent.cpp:40
	extern const RGBA KU_CURRENT_CAR_COLOUR;

	// BrnAIDebugComponent.cpp:41
	extern const RGBA KU_ROUTE_LINE_COLOUR;

	// BrnAIDebugComponent.cpp:42
	extern const RGBA KU_ROUTE_NODE_COLOUR;

	// BrnAIDebugComponent.cpp:43
	extern const RGBA KU_RACING_LINE_COLOUR1;

	// BrnAIDebugComponent.cpp:44
	extern const RGBA KU_RACING_LINE_COLOUR2;

	// BrnAIDebugComponent.cpp:45
	extern const RGBA KU_TARGET_LINE_COLOUR;

	// BrnAIDebugComponent.cpp:46
	extern const RGBA KU_CURRENT_NODE_COLOUR;

	// BrnAIDebugComponent.cpp:47
	extern const RGBA KU_VELOCITY_LINE_COLOUR;

	// BrnAIDebugComponent.cpp:48
	extern const RGBA KU_LOOKAHEAD_LINE_COLOUR;

	// BrnAIDebugComponent.cpp:49
	extern const RGBA KU_DRIVER_TARGET_LINE_COLOUR;

	// BrnAIDebugComponent.cpp:50
	extern const RGBA KU_AGGRESSIVE_COLOUR;

	// BrnAIDebugComponent.cpp:51
	extern const RGBA KU_TRAFFIC_LINE_COLOUR;

	// BrnAIDebugComponent.cpp:52
	extern const RGBA KU_BRAKING_COLOUR;

	// BrnAIDebugComponent.cpp:53
	extern const int32_t KI_NUM_SECTIONS_DISPLAYED = 2;

	// BrnAIDebugComponent.cpp:54
	extern const float32_t KF_ROUTE_NODE_SIZE;

	// BrnAIDebugComponent.cpp:55
	extern const float32_t KF_CAR_YOFFSET;

	// BrnAIDebugComponent.cpp:56
	extern const float32_t KF_ROUTE_YOFFSET;

	// BrnAIDebugComponent.cpp:57
	extern const float32_t KF_AT_DISPLAY_VECTOR_LENGTH;

	// BrnAIDebugComponent.cpp:63
	extern const float32_t KF_STATE_TABLE_X;

	// BrnAIDebugComponent.cpp:64
	extern const float32_t KF_STATE_TABLE_Y;

	// BrnAIDebugComponent.cpp:65
	extern const float32_t KF_STATE_TABLE_SPACING_X;

	// BrnAIDebugComponent.cpp:66
	extern const float32_t KF_STATE_TABLE_HEADER_SPACING_X;

	// BrnAIDebugComponent.cpp:67
	extern const float32_t KF_STATE_TABLE_SPACING_Y;

	// BrnAIDebugComponent.cpp:68
	extern const float32_t KF_STATE_TABLE_FONT_SIZE;

	// BrnAIDebugComponent.h:233
	BrnAI::AIModule * mpAIModule;

	// BrnAIDebugComponent.h:234
	AISectionsData * mpAISectionsData;

	// BrnAIDebugComponent.h:235
	int32_t miCurrentAICar;

	// BrnAIDebugComponent.h:238
	bool mbDrawCarUnderSection;

	// BrnAIDebugComponent.h:241
	bool mbDrawAICarStatesTable;

	// BrnAIDebugComponent.h:242
	bool mbDrawSpeedCalculationStateOnTable;

	// BrnAIDebugComponent.h:243
	bool mbDrawrPersonalityOnTable;

	// BrnAIDebugComponent.h:244
	bool mbDrawBuzzTime;

	// BrnAIDebugComponent.h:247
	bool mbDrawAICarStatesOnCar;

	// BrnAIDebugComponent.h:248
	bool mbDrawBehaviourOnCar;

	// BrnAIDebugComponent.h:249
	bool mbDrawProximityOnCar;

	// BrnAIDebugComponent.h:250
	bool mbDrawSpeedOnCar;

	// BrnAIDebugComponent.h:251
	bool mbDrawFanModeOnCar;

	// BrnAIDebugComponent.h:252
	bool mbDrawSpeedMatchingOnCar;

	// BrnAIDebugComponent.h:253
	bool mbDrawAggressionStateOnCar;

	// BrnAIDebugComponent.h:254
	bool mbDrawAggressionLevelOnCar;

	// BrnAIDebugComponent.h:255
	bool mbDrawPersonalityTypeOnCar;

	// BrnAIDebugComponent.h:256
	bool mbDrawScheduleOffsetOnCar;

	// BrnAIDebugComponent.h:257
	bool mbDrawInvulnerabilityOnCar;

	// BrnAIDebugComponent.h:258
	bool mbDrawPlayerSlowSpeedTimeOnCar;

	// BrnAIDebugComponent.h:260
	bool mbDrawAICarRoute;

	// BrnAIDebugComponent.h:261
	bool mbDrawCurrentSection;

	// BrnAIDebugComponent.h:262
	bool mbDrawResetOnTrackSection;

	// BrnAIDebugComponent.h:263
	bool mbDrawAllDriverData;

	// BrnAIDebugComponent.h:264
	bool mbDrawRacingLines;

	// BrnAIDebugComponent.h:265
	bool mbDrawPortalTargets;

	// BrnAIDebugComponent.h:266
	bool mbDrawDirectVector;

	// BrnAIDebugComponent.h:267
	bool mbDrawDestinationVector;

	// BrnAIDebugComponent.h:268
	bool mbDrawControlData;

	// BrnAIDebugComponent.h:269
	bool mbDrawAggressiveTargetPoints;

	// BrnAIDebugComponent.h:270
	bool mbDrawAggressiveWarning;

	// BrnAIDebugComponent.h:271
	bool mbDrawNearbyVehicles;

	// BrnAIDebugComponent.h:272
	bool mbDrawCarIndices;

	// BrnAIDebugComponent.h:273
	bool mbDrawChevrons;

	// BrnAIDebugComponent.h:274
	bool mbDrawHNGMap;

	// BrnAIDebugComponent.h:275
	bool mbDrawFinishDebugData;

	// BrnAIDebugComponent.h:276
	bool mbDrawDriftingDebug;

	// BrnAIDebugComponent.h:277
	bool mbAlwaysWantToDrift;

	// BrnAIDebugComponent.h:278
	bool mbShowDriftTarget;

	// BrnAIDebugComponent.h:279
	float32_t mfCruisingSpeed;

	// BrnAIDebugComponent.h:282
	float32_t mfStateTableX;

	// BrnAIDebugComponent.h:283
	float32_t mfStateTableY;

	// BrnAIDebugComponent.cpp:59
	extern bool msbDriversStayStill;

	// BrnAIDebugComponent.cpp:60
	extern bool msbDriversMaxAggression;

	// BrnAIDebugComponent.h:289
	CgsDev::DebugUI::MenuItemVariableLineGraph mPIDCoefficientsGraph;

	// BrnAIDebugComponent.h:290
	CgsDev::DebugUI::MenuItemVariableLineGraph mSteerAngleVsPIDOutputGraph;

	// BrnAIDebugComponent.h:293
	AutoTunedPIDDebugData mPIDDebugData;

public:
	// BrnAIDebugComponent.cpp:199
	void Construct(BrnAI::AIModule *);

	// BrnAIDebugComponent.cpp:263
	void Destruct();

	// BrnAIDebugComponent.cpp:281
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// BrnAIDebugComponent.cpp:385
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

protected:
	// BrnAIDebugComponent.cpp:436
	virtual const char * GetName() const;

	// BrnAIDebugComponent.cpp:450
	virtual const char * GetPath() const;

	// BrnAIDebugComponent.cpp:462
	virtual void OnActivate();

private:
	// BrnAIDebugComponent.cpp:574
	void DrawAIStatesTable(CgsDev::Debug2DImmediateRender *);

	// BrnAIDebugComponent.cpp:1008
	void DrawAIStatesOnCar(CgsDev::Debug3DImmediateRender *);

	// BrnAIDebugComponent.cpp:1128
	void DrawAICarRoute(CgsDev::Debug3DImmediateRender *) const;

	// BrnAIDebugComponent.cpp:1178
	void DrawAICarSection(CgsDev::Debug3DImmediateRender *) const;

	// BrnAIDebugComponent.cpp:1218
	void DrawResetOnTrackAISection(CgsDev::Debug3DImmediateRender *) const;

	// BrnAIDebugComponent.cpp:1270
	void DrawAIRacingLines(CgsDev::Debug3DImmediateRender *) const;

	// BrnAIDebugComponent.cpp:1284
	void DrawPortalTargets(CgsDev::Debug3DImmediateRender *) const;

	// BrnAIDebugComponent.cpp:1325
	void DrawDirectDrivingVector(CgsDev::Debug3DImmediateRender *) const;

	// BrnAIDebugComponent.cpp:1374
	void DrawDirectDestinationVector(CgsDev::Debug3DImmediateRender *) const;

	// BrnAIDebugComponent.cpp:1406
	void DrawCarControlData(CgsDev::Debug3DImmediateRender *) const;

	// BrnAIDebugComponent.cpp:1456
	void DrawAggressiveTargetPoints(CgsDev::Debug3DImmediateRender *) const;

	// BrnAIDebugComponent.cpp:1490
	void DrawAggressiveWarning(CgsDev::Debug3DImmediateRender *) const;

	// BrnAIDebugComponent.cpp:1525
	void DrawNearbyVehicles(CgsDev::Debug3DImmediateRender *) const;

	// BrnAIDebugComponent.cpp:1245
	void DrawHNGMap() const;

	// BrnAIDebugComponent.cpp:1591
	void StateTableBegin();

	// BrnAIDebugComponent.cpp:1610
	void StateTableDrawEntry(CgsDev::Debug2DImmediateRender *, const char *, RGBA);

	// BrnAIDebugComponent.cpp:1639
	void StateTableNextColumn();

	// BrnAIDebugComponent.cpp:1663
	void DrawCarIndices(CgsDev::Debug3DImmediateRender *) const;

	// BrnAIDebugComponent.cpp:1716
	void DrawChevrons(CgsDev::Debug3DImmediateRender *) const;

	// BrnAIDebugComponent.cpp:1829
	void DrawFinishDebugData(CgsDev::Debug3DImmediateRender *) const;

	// BrnAIDebugComponent.cpp:1848
	void DrawAISectionEdge(CgsDev::Debug3DImmediateRender *, const AISection *, int32_t, Vector3, int32_t) const;

	// BrnAIDebugComponent.cpp:1913
	void DrawDriftingDebug(CgsDev::Debug2DImmediateRender *);

	// BrnAIDebugComponent.cpp:1934
	void DeactiveateDriversCallback(void *);

}

// BrnRoute.h:26
namespace BrnAI {
	// Declaration
	struct AIDebugComponent {
	public:
		AIDebugComponent();

	private:
		// BrnAIDebugComponent.h:200
		extern const rw::math::vpu::Vector3 K_CAR_SIZE;

		// BrnAIDebugComponent.h:201
		extern const rw::math::vpu::Vector3 K_CURRENT_CAR_SIZE;

		// BrnAIDebugComponent.h:202
		extern const RGBA KU_CAR_COLOUR;

		// BrnAIDebugComponent.h:203
		extern const RGBA KU_STATE_TEXT_COLOUR;

		// BrnAIDebugComponent.h:204
		extern const RGBA KU_HIGHLIGHT_TEXT_COLOUR;

		// BrnAIDebugComponent.h:205
		extern const RGBA KU_UBER_HIGHLIGHT_TEXT_COLOUR;

		// BrnAIDebugComponent.h:206
		extern const RGBA KU_CURRENT_CAR_COLOUR;

		// BrnAIDebugComponent.h:207
		extern const RGBA KU_ROUTE_LINE_COLOUR;

		// BrnAIDebugComponent.h:208
		extern const RGBA KU_ROUTE_NODE_COLOUR;

		// BrnAIDebugComponent.h:209
		extern const RGBA KU_RACING_LINE_COLOUR1;

		// BrnAIDebugComponent.h:210
		extern const RGBA KU_RACING_LINE_COLOUR2;

		// BrnAIDebugComponent.h:211
		extern const RGBA KU_TARGET_LINE_COLOUR;

		// BrnAIDebugComponent.h:212
		extern const RGBA KU_CURRENT_NODE_COLOUR;

		// BrnAIDebugComponent.h:213
		extern const RGBA KU_VELOCITY_LINE_COLOUR;

		// BrnAIDebugComponent.h:214
		extern const RGBA KU_LOOKAHEAD_LINE_COLOUR;

		// BrnAIDebugComponent.h:215
		extern const RGBA KU_DRIVER_TARGET_LINE_COLOUR;

		// BrnAIDebugComponent.h:216
		extern const RGBA KU_AGGRESSIVE_COLOUR;

		// BrnAIDebugComponent.h:217
		extern const RGBA KU_TRAFFIC_LINE_COLOUR;

		// BrnAIDebugComponent.h:218
		extern const RGBA KU_BRAKING_COLOUR;

		// BrnAIDebugComponent.h:219
		extern const int32_t KI_NUM_SECTIONS_DISPLAYED;

		// BrnAIDebugComponent.h:220
		extern const float32_t KF_ROUTE_NODE_SIZE;

		// BrnAIDebugComponent.h:221
		extern const float32_t KF_CAR_YOFFSET;

		// BrnAIDebugComponent.h:222
		extern const float32_t KF_ROUTE_YOFFSET;

		// BrnAIDebugComponent.h:223
		extern const float32_t KF_AT_DISPLAY_VECTOR_LENGTH;

		// BrnAIDebugComponent.h:226
		extern const float32_t KF_STATE_TABLE_X;

		// BrnAIDebugComponent.h:227
		extern const float32_t KF_STATE_TABLE_Y;

		// BrnAIDebugComponent.h:228
		extern const float32_t KF_STATE_TABLE_SPACING_X;

		// BrnAIDebugComponent.h:229
		extern const float32_t KF_STATE_TABLE_HEADER_SPACING_X;

		// BrnAIDebugComponent.h:230
		extern const float32_t KF_STATE_TABLE_SPACING_Y;

		// BrnAIDebugComponent.h:231
		extern const float32_t KF_STATE_TABLE_FONT_SIZE;

	}

}

// BrnAIDebugComponent.h:52
void BrnAI::AIDebugComponent::AIDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


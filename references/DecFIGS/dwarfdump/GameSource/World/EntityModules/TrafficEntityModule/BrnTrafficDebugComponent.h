// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// Declaration
	struct DebugComponent {
	public:
		DebugComponent();

		// BrnTrafficDebugComponent.h:531
		bool UseCameraPosition() const;

	}

}

// BrnTrafficDebugComponent.h:53
void BrnTraffic::DebugComponent::DebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrafficDebugComponent.h:53
struct BrnTraffic::DebugComponent : public CgsDev::DebugComponent {
private:
	// BrnTrafficDebugComponent.h:92
	BrnTraffic::TrafficEntityModule * mpModule;

	// BrnTrafficDebugComponent.h:94
	float32_t mfRenderCullDistance;

	// BrnTrafficDebugComponent.h:96
	bool mbDrawSegments;

	// BrnTrafficDebugComponent.h:97
	bool mbDrawSections;

	// BrnTrafficDebugComponent.h:98
	bool mbDrawSectionCurves;

	// BrnTrafficDebugComponent.h:99
	bool mbDrawNeighbours;

	// BrnTrafficDebugComponent.h:100
	bool mbDrawJunctions;

	// BrnTrafficDebugComponent.h:101
	bool mbDrawStopLines;

	// BrnTrafficDebugComponent.h:102
	bool mbDrawStartLines;

	// BrnTrafficDebugComponent.h:103
	bool mbDrawSplitters;

	// BrnTrafficDebugComponent.h:104
	bool mbDrawParams;

	// BrnTrafficDebugComponent.h:105
	bool mbDrawLerpedParams;

	// BrnTrafficDebugComponent.h:106
	bool mbDrawParamBehaviours;

	// BrnTrafficDebugComponent.h:107
	bool mbDrawParamSlowData;

	// BrnTrafficDebugComponent.h:108
	bool mbDrawParamTrails;

	// BrnTrafficDebugComponent.h:109
	bool mbDrawVehicles;

	// BrnTrafficDebugComponent.h:110
	bool mbDrawNonCollidableVehicles;

	// BrnTrafficDebugComponent.h:111
	bool mbDrawCollidableVehicles;

	// BrnTrafficDebugComponent.h:112
	bool mbDrawPhysicalVehicleState;

	// BrnTrafficDebugComponent.h:113
	bool mbDrawStuckDetection;

	// BrnTrafficDebugComponent.h:114
	bool mbDrawVehicleManoeuvres;

	// BrnTrafficDebugComponent.h:115
	bool mbDrawParamVehicleLinks;

	// BrnTrafficDebugComponent.h:116
	bool mbDrawParamParamLinks;

	// BrnTrafficDebugComponent.h:117
	bool mbDrawNearestVehicleId;

	// BrnTrafficDebugComponent.h:118
	bool mbDrawVehicleIds;

	// BrnTrafficDebugComponent.h:119
	bool mbDrawActiveHulls;

	// BrnTrafficDebugComponent.h:120
	bool mbDrawPlayerHullId;

	// BrnTrafficDebugComponent.h:121
	bool mbDrawAllKillZones;

	// BrnTrafficDebugComponent.h:122
	bool mbDrawRecentKillZones;

	// BrnTrafficDebugComponent.h:123
	bool mbDrawSpontaneousCones;

	// BrnTrafficDebugComponent.h:124
	bool mbDrawRearArticPoints;

	// BrnTrafficDebugComponent.h:125
	bool mbDrawFrontArticPoints;

	// BrnTrafficDebugComponent.h:126
	bool mbDrawAxles;

	// BrnTrafficDebugComponent.h:127
	bool mbDrawHorns;

	// BrnTrafficDebugComponent.h:128
	bool mbUseCameraPosition;

	// BrnTrafficDebugComponent.h:129
	int32_t miHullToDrawFor;

	// BrnTrafficDebugComponent.h:131
	int32_t miAirRamTypeToFire;

	// BrnTrafficDebugComponent.h:133
	uint32_t muKillZoneToFire;

	// BrnTrafficDebugComponent.h:135
	uint32_t muDummyVehicleName;

	// BrnTrafficDebugComponent.h:136
	char[13] macOverrideVehicleName;

	// BrnTrafficDebugComponent.h:139
	int32_t miNumActiveParams;

	// BrnTrafficDebugComponent.h:140
	int32_t miNumPurgatoryParams;

	// BrnTrafficDebugComponent.h:141
	int32_t miNumFreeParams;

	// BrnTrafficDebugComponent.h:142
	int32_t miNumActiveHulls;

	// BrnTrafficDebugComponent.h:149
	bool mbDrawVehicleSwervingDebug;

	// BrnTrafficDebugComponent.h:151
	bool mbDrawAvoidance;

	// BrnTrafficDebugComponent.h:152
	bool mbDrawAvoidanceAllShit;

	// BrnTrafficDebugComponent.h:153
	bool mbDrawPressure;

	// BrnTrafficDebugComponent.h:154
	bool mbDrawJunctionFUPDetection;

	// BrnTrafficDebugComponent.h:156
	uint32_t muCurrentVehicleToPick;

public:
	// BrnTrafficDebugComponent.cpp:160
	void Construct(BrnTraffic::TrafficEntityModule *);

	// BrnTrafficDebugComponent.cpp:252
	void Destruct();

	// BrnTrafficDebugComponent.cpp:268
	virtual void Update();

	// BrnTrafficDebugComponent.cpp:280
	void Activate();

	// BrnTrafficDebugComponent.cpp:295
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// BrnTrafficDebugComponent.cpp:493
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnTrafficDebugComponent.h:531
	bool UseCameraPosition() const;

protected:
	// BrnTrafficDebugComponent.cpp:634
	virtual const char * GetName() const;

	// BrnTrafficDebugComponent.cpp:647
	virtual void OnActivate();

private:
	// BrnTrafficDebugComponent.cpp:883
	void UpdateStats();

	// BrnTrafficDebugComponent.cpp:539
	void RenderPerformanceTable(CgsDev::Debug2DImmediateRender *);

	// BrnTrafficDebugComponent.cpp:599
	void RenderPerfmon(CgsDev::Debug2DImmediateRender *, const PerfMonCpuMonitorData *, float32_t, float32_t, float32_t);

	// BrnTrafficDebugComponent.cpp:913
	bool ShouldObjectBeCulled(Vector3, CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:936
	bool ShouldSectionBeCulled(const Section *, const BrnTraffic::Hull *, CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:966
	void DrawSegments(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:1010
	void DrawSections(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:1172
	void DrawNeighbours(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:1038
	void DrawSectionCurves(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:1238
	void DrawJunctions(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:1342
	void DrawStopLines(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:1370
	void DrawStartLines(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:1068
	void DrawSectionsInHull(int32_t, CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:1125
	void DrawSectionCurvesInHull(int32_t, CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:1267
	void DrawJunctionsInHull(int32_t, CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:1310
	uint32_t GetSectionIdWithStopLine(uint8_t, uint16_t) const;

	// BrnTrafficDebugComponent.cpp:1418
	void DrawStopLinesInHull(int32_t, CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:1475
	void GetStopLinePosition(uint16_t, uint8_t, uint8_t, Vector3 &, Vector3 &) const;

	// BrnTrafficDebugComponent.cpp:1512
	void DrawSplitters(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:1596
	void DrawParams(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:1634
	void DrawLerpedParams(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:1667
	void DrawParamBehaviours(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:1773
	void DrawParamSlowData(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:1819
	void DrawParamTrails(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:1866
	void DrawVehicles(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:1920
	void DrawNonCollidableVehicles(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:1965
	void DrawCollidableVehicles(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:2018
	void DrawPhysicalVehicleState(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:2127
	void DrawStuckDetection(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:2218
	void DrawVehicleManoeuvres(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:2282
	void DrawParamVehicleLinks(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:2319
	void DrawParamParamLinks(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:2366
	void DrawNearestVehicleId(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:2417
	void DrawVehicleIds(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:2456
	void DrawActiveHulls(CgsDev::Debug2DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:2513
	void DrawAllKillZones(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:2539
	void DrawRecentKillZones(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:2568
	void DrawKillZone(const KillZone *, TrafficData::KillZoneId, CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:2695
	void FireKillZone(void *);

	// BrnTrafficDebugComponent.cpp:2716
	void FireAirRam(void *);

	// BrnTrafficDebugComponent.cpp:2733
	void DrawRearArticPoints(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:2781
	void DrawFrontArticPoints(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:2824
	void DrawAxles(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:2874
	void DrawAxle(const Axle *, CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:2917
	void DrawHorns(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:2951
	void DrawAvoidance(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:3244
	void DrawPressure(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:3173
	void DrawVehicleSwervingDebugging(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:3327
	void DrawPlayerCarHullId(CgsDev::Debug2DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:3118
	void DrawFuzzyLogic(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:3351
	void DrawShowtime(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:3442
	void DrawJunctionFUPDetection(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:3467
	void OnKillNearPlayer(void *);

	// BrnTrafficDebugComponent.cpp:3481
	void DrawPickedVehicle(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:3574
	void OnPickVehicle(void *);

	// BrnTrafficDebugComponent.cpp:3590
	void ReloadBehaviourData(void *);

	// BrnTrafficDebugComponent.cpp:3611
	void DrawArrow(Vector3, Vector3, RGBA, CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:3647
	void DrawOffsetArrow(Vector3, Vector3, float32_t, RGBA, CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:3665
	void RenderSpontaneousTargetCones(CgsDev::Debug3DImmediateRender *) const;

	// BrnTrafficDebugComponent.cpp:3727
	void RenderSingleDebugCone(CgsDev::Debug3DImmediateRender *, Matrix44Affine, VecFloat, RGBA, int32_t) const;

	// BrnTrafficDebugComponent.cpp:3772
	void DrawTextWithOffsets(DebugRender &, CgsDev::StrStream *, float32_t, float32_t) const;

	// BrnTrafficDebugComponent.cpp:3924
	void RenderVerticalMeter(CgsDev::Debug3DImmediateRender *, Vector3, Vector2, float32_t, float32_t, RGBA, RGBA, float32_t, float32_t) const;

	// BrnTrafficDebugComponent.cpp:3979
	void DumpLoggedData(void *);

}


// BrnRaceCarEntityModuleDebugComponent.h:49
struct BrnWorld::RaceCarEntityModuleDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnRaceCarEntityModuleDebugComponent.h:155
	BrnWorld::RaceCarEntityModule * mpRaceCarEntityModule;

	// BrnRaceCarEntityModuleDebugComponent.h:156
	bool mbRenderCarDamageState;

	// BrnRaceCarEntityModuleDebugComponent.h:157
	bool mbRenderCarSreamingState;

	// BrnRaceCarEntityModuleDebugComponent.h:158
	bool mbRenderLastResetInfo;

	// BrnRaceCarEntityModuleDebugComponent.h:159
	bool mbRenderPlayerResetPositions;

	// BrnRaceCarEntityModuleDebugComponent.h:160
	bool mbRenderCurrentDistrict;

	// BrnRaceCarEntityModuleDebugComponent.h:161
	bool mbAirRam;

	// BrnRaceCarEntityModuleDebugComponent.h:162
	int32_t miLastDriftDistance;

	// BrnRaceCarEntityModuleDebugComponent.h:163
	int32_t miLastInAirDistance;

	// BrnRaceCarEntityModuleDebugComponent.h:164
	int32_t miLastOncomingDistance;

	// BrnRaceCarEntityModuleDebugComponent.h:165
	float32_t mMag;

	// BrnRaceCarEntityModuleDebugComponent.h:166
	Matrix44Affine mLastResetTransform;

	// BrnRaceCarEntityModuleDebugComponent.h:167
	Vector3 mLastResetLineTestStart;

	// BrnRaceCarEntityModuleDebugComponent.h:168
	Vector3 mLastResetLineTestEnd;

	// BrnRaceCarEntityModuleDebugComponent.h:169
	Array<rw::math::vpu::Vector3,10u> mLastResetLineTestIntersections;

	// BrnRaceCarEntityModuleDebugComponent.h:171
	bool mbRenderTailgateCones;

	// BrnRaceCarEntityModuleDebugComponent.h:172
	bool mbDrawDamageHUD;

	// BrnRaceCarEntityModuleDebugComponent.h:173
	bool mbShowEngineState;

	// BrnRaceCarEntityModuleDebugComponent.h:174
	bool mbDrawResetOnWaterHeight;

	// BrnRaceCarEntityModuleDebugComponent.h:176
	bool mbShowAverageSpeed;

	// BrnRaceCarEntityModuleDebugComponent.h:177
	float32_t mfAverageSpeed;

	// BrnRaceCarEntityModuleDebugComponent.h:178
	int32_t miAverageSpeedFrameCount;

	// BrnRaceCarEntityModuleDebugComponent.h:180
	bool mbTrafficRelatedData;

public:
	// BrnRaceCarEntityModuleDebugComponent.cpp:57
	void Construct(BrnWorld::RaceCarEntityModule *);

	// BrnRaceCarEntityModuleDebugComponent.cpp:93
	void Destruct();

	// BrnRaceCarEntityModuleDebugComponent.cpp:328
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// BrnRaceCarEntityModuleDebugComponent.cpp:461
	void RenderTailgateCones(CgsDev::Debug3DImmediateRender *);

	// BrnRaceCarEntityModuleDebugComponent.cpp:418
	void RenderSingleDebugCone(CgsDev::Debug3DImmediateRender *, Matrix44Affine, VecFloat, RGBA, int32_t) const;

	// BrnRaceCarEntityModuleDebugComponent.cpp:498
	virtual void Update();

	// BrnRaceCarEntityModuleDebugComponent.cpp:520
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnRaceCarEntityModuleDebugComponent.cpp:617
	void RenderEngineState(CgsDev::Debug2DImmediateRender *);

	// BrnRaceCarEntityModuleDebugComponent.cpp:743
	void ResetAverageSpeed();

	// BrnRaceCarEntityModuleDebugComponent.cpp:774
	void DrawTextWithOffsets(CgsDev::Debug2DImmediateRender *, CgsDev::StrStream *, float32_t, float32_t);

	// BrnRaceCarEntityModuleDebugComponent.cpp:818
	void PushResetTransform(Matrix44Affine);

	// BrnRaceCarEntityModuleDebugComponent.cpp:826
	void PushLineTest(Vector3, Vector3);

	// BrnRaceCarEntityModuleDebugComponent.cpp:834
	void PushLineTestIntersection(const OutEventLineTestFineResult *);

protected:
	// BrnRaceCarEntityModuleDebugComponent.cpp:109
	virtual const char * GetName() const;

	// BrnRaceCarEntityModuleDebugComponent.cpp:134
	virtual void OnActivate();

	// BrnRaceCarEntityModuleDebugComponent.cpp:305
	virtual void OnRegister();

private:
	// BrnRaceCarEntityModuleDebugComponent.cpp:313
	void AirRamAddNew(void *);

	// BrnRaceCarEntityModuleDebugComponent.cpp:122
	BrnWorld::ActiveRaceCar * GetPlayerCar(BrnWorld::RaceCarEntityModule *);

	// BrnRaceCarEntityModuleDebugComponent.cpp:758
	void ResetAverageSpeedCallback(void *);

	// BrnRaceCarEntityModuleDebugComponent.cpp:675
	void RenderTrafficRelated(CgsDev::Debug2DImmediateRender *);

	// BrnRaceCarEntityModuleDebugComponent.cpp:381
	void DrawResetOnWaterHeight(CgsDev::Debug3DImmediateRender *);

}

// BrnRaceCarEntityModuleDebugComponent.h:49
void BrnWorld::RaceCarEntityModuleDebugComponent::RaceCarEntityModuleDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


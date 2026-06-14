// BrnPhysicalTrafficManagerDebugComponent.h:90
struct BrnPhysics::Vehicle::PhysicalTrafficManagerDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnPhysicalTrafficManagerDebugComponent.h:137
	PhysicalTrafficManager * mpTrafficManager;

	// BrnPhysicalTrafficManagerDebugComponent.h:138
	bool mbDrawTrafficAirRams;

	// BrnPhysicalTrafficManagerDebugComponent.h:139
	float32_t mfAirRamLengthScale;

	// BrnPhysicalTrafficManagerDebugComponent.h:140
	bool mbDrawDriverControls;

	// BrnPhysicalTrafficManagerDebugComponent.h:141
	bool mbDrawPhysicalTraffic;

	// BrnPhysicalTrafficManagerDebugComponent.h:142
	bool mbDrawJoints;

	// BrnPhysicalTrafficManagerDebugComponent.h:143
	bool mbDrawSimpleTraffic;

	// BrnPhysicalTrafficManagerDebugComponent.h:144
	bool mbDrawTrafficUsingBoxWorld;

	// BrnPhysicalTrafficManagerDebugComponent.h:145
	bool mbDrawCatchupTargets;

	// BrnPhysicalTrafficManagerDebugComponent.h:146
	bool mbDrawResetOnWaterHeight;

public:
	// BrnPhysicalTrafficManagerDebugComponent.cpp:54
	void Construct(PhysicalTrafficManager *);

	// BrnPhysicalTrafficManagerDebugComponent.cpp:84
	void Destruct();

	// BrnPhysicalTrafficManagerDebugComponent.cpp:107
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// BrnPhysicalTrafficManagerDebugComponent.cpp:181
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

protected:
	// BrnPhysicalTrafficManagerDebugComponent.h:128
	virtual const char * GetName() const;

	// BrnPhysicalTrafficManagerDebugComponent.cpp:197
	virtual void OnActivate();

private:
	// BrnPhysicalTrafficManagerDebugComponent.cpp:560
	void RenderAirRam(const BrnPhysics::Vehicle::VehiclePhysics::AirRamEffect *, const BrnPhysics::Vehicle::VehiclePhysics *, CgsDev::Debug3DImmediateRender *) const;

	// BrnPhysicalTrafficManagerDebugComponent.cpp:616
	void RenderCone(Vector3, Vector3, VecFloat, RGBA, VecFloat, CgsDev::Debug3DImmediateRender *) const;

	// BrnPhysicalTrafficManagerDebugComponent.cpp:666
	void RenderDriverControls(CgsDev::Debug3DImmediateRender *);

	// BrnPhysicalTrafficManagerDebugComponent.cpp:693
	void RenderControls(Vector3, const BrnPlayerDriverControls *, CgsDev::Debug3DImmediateRender *);

	// BrnPhysicalTrafficManagerDebugComponent.h:185
	void DrawArticulationPoints(CgsDev::Debug3DImmediateRender *);

	// BrnPhysicalTrafficManagerDebugComponent.cpp:317
	void DrawPhysicalTraffic(CgsDev::Debug3DImmediateRender *);

	// BrnPhysicalTrafficManagerDebugComponent.cpp:414
	void DrawSimpleTraffic(CgsDev::Debug3DImmediateRender *);

	// BrnPhysicalTrafficManagerDebugComponent.cpp:448
	void DrawTrafficUsingBoxWorldTests(CgsDev::Debug3DImmediateRender *);

	// BrnPhysicalTrafficManagerDebugComponent.cpp:483
	void DrawTrafficBox(const PhysicalTrafficVehicle *, CgsDev::Debug3DImmediateRender *, bool);

	// BrnPhysicalTrafficManagerDebugComponent.cpp:265
	void DrawCatchupTargets(CgsDev::Debug3DImmediateRender *);

	// BrnPhysicalTrafficManagerDebugComponent.cpp:787
	void DrawResetOnWaterHeight(CgsDev::Debug3DImmediateRender *);

	// BrnPhysicalTrafficManagerDebugComponent.cpp:830
	void ResetTrafficAboveWater(void *);

}

// BrnPhysicalTrafficManagerDebugComponent.h:90
void BrnPhysics::Vehicle::PhysicalTrafficManagerDebugComponent::PhysicalTrafficManagerDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


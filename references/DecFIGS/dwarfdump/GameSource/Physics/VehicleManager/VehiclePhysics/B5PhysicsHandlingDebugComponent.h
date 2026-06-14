// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// B5PhysicsHandlingDebugComponent.h:46
		const int32_t KI_NUM_DRIVEN_WHEELS = 4;

		// B5PhysicsHandlingDebugComponent.h:49
		const float32_t KF_GRIP_CURVE_GRAPH_SIZE_X;

		// B5PhysicsHandlingDebugComponent.h:50
		const float32_t KF_GRIP_CURVE_GRAPH_SIZE_Y;

		// B5PhysicsHandlingDebugComponent.h:53
		const float32_t KF_GRIP_CURVE_GRAPH_BORDER_X;

		// B5PhysicsHandlingDebugComponent.h:54
		const float32_t KF_GRIP_CURVE_GRAPH_BORDER_Y;

		// B5PhysicsHandlingDebugComponent.h:57
		const float32_t KF_GRIP_CURVE_GRAPH_TEXT_SIZE;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// B5PhysicsHandlingDebugComponent.h:46
		const int32_t KI_NUM_DRIVEN_WHEELS = 4;

		// B5PhysicsHandlingDebugComponent.h:49
		const float32_t KF_GRIP_CURVE_GRAPH_SIZE_X;

		// B5PhysicsHandlingDebugComponent.h:50
		const float32_t KF_GRIP_CURVE_GRAPH_SIZE_Y;

		// B5PhysicsHandlingDebugComponent.h:53
		const float32_t KF_GRIP_CURVE_GRAPH_BORDER_X;

		// B5PhysicsHandlingDebugComponent.h:54
		const float32_t KF_GRIP_CURVE_GRAPH_BORDER_Y;

		// B5PhysicsHandlingDebugComponent.h:57
		const float32_t KF_GRIP_CURVE_GRAPH_TEXT_SIZE;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// Declaration
		struct PrimitiveVehicleDebugRender2D {
			// B5PhysicsHandlingDebugComponent.h:102
			struct DrawableCar {
				// B5PhysicsHandlingDebugComponent.h:103
				Matrix44Affine mCarSpaceToDrawingSpace;

				// B5PhysicsHandlingDebugComponent.h:104
				Vector3 mHalfDims_CarSpace;

				// B5PhysicsHandlingDebugComponent.h:105
				const char * mpName_Permanent;

				// B5PhysicsHandlingDebugComponent.h:106
				float32_t mfTimeLeft;

			}

			// B5PhysicsHandlingDebugComponent.h:111
			struct DrawableVector {
				// B5PhysicsHandlingDebugComponent.h:112
				Vector3 mPosition_DrawingSpace;

				// B5PhysicsHandlingDebugComponent.h:113
				Vector3 mDirection_DrawingSpace;

				// B5PhysicsHandlingDebugComponent.h:114
				const char * mpName_Permanent;

				// B5PhysicsHandlingDebugComponent.h:115
				float32_t mfTimeLeft;

			}

		}

		// B5PhysicsHandlingDebugComponent.h:46
		const int32_t KI_NUM_DRIVEN_WHEELS = 4;

		// B5PhysicsHandlingDebugComponent.h:49
		const float32_t KF_GRIP_CURVE_GRAPH_SIZE_X;

		// B5PhysicsHandlingDebugComponent.h:50
		const float32_t KF_GRIP_CURVE_GRAPH_SIZE_Y;

		// B5PhysicsHandlingDebugComponent.h:53
		const float32_t KF_GRIP_CURVE_GRAPH_BORDER_X;

		// B5PhysicsHandlingDebugComponent.h:54
		const float32_t KF_GRIP_CURVE_GRAPH_BORDER_Y;

		// B5PhysicsHandlingDebugComponent.h:57
		const float32_t KF_GRIP_CURVE_GRAPH_TEXT_SIZE;

	}

}

// B5PhysicsHandlingDebugComponent.h:74
struct BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D {
private:
	// B5PhysicsHandlingDebugComponent.h:120
	Array<BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableCar,5u> mDrawableCars;

	// B5PhysicsHandlingDebugComponent.h:121
	Array<BrnPhysics::Vehicle::PrimitiveVehicleDebugRender2D::DrawableVector,10u> mDrawableVectors;

	// B5PhysicsHandlingDebugComponent.h:123
	Vector2 mScale;

	// B5PhysicsHandlingDebugComponent.h:124
	Vector2 mVectorScale;

	// B5PhysicsHandlingDebugComponent.h:125
	Vector2 mScreenOrigin;

public:
	// B5PhysicsHandlingDebugComponent.h:78
	void Construct();

	// B5PhysicsHandlingDebugComponent.h:86
	void AddDrawableCar(Matrix44Affine, Vector3, const char *, float32_t);

	// B5PhysicsHandlingDebugComponent.h:93
	void AddVector(Vector3, Vector3, const char *, float32_t);

	// B5PhysicsHandlingDebugComponent.h:97
	void Render(float32_t);

}

// B5PhysicsHandlingDebugComponent.h:140
struct BrnPhysics::Vehicle::GearStats {
	// B5PhysicsHandlingDebugComponent.h:146
	float32_t mfTimeInGear;

	// B5PhysicsHandlingDebugComponent.h:147
	float32_t mfSpeedOutOfGearGoingUp;

	// B5PhysicsHandlingDebugComponent.h:148
	float32_t mfSpeedOutOfGearGoingDown;

	// B5PhysicsHandlingDebugComponent.h:149
	float32_t mfRpmWhenChangedOutGoingUp;

	// B5PhysicsHandlingDebugComponent.h:150
	float32_t mfRpmWhenChangedOutGoingDown;

	// B5PhysicsHandlingDebugComponent.h:151
	float32_t mfRpmWhenChangedInGoingUp;

	// B5PhysicsHandlingDebugComponent.h:152
	bool mbDoneUpdating;

public:
	// B5PhysicsHandlingDebugComponent.h:144
	void Reset();

}

// B5PhysicsHandlingDebugComponent.h:165
struct BrnPhysics::Vehicle::GripCurveDebugGraph {
private:
	// B5PhysicsHandlingDebugComponent.h:237
	const BrnPhysics::Vehicle::Wheel::TireGripCurve * mpGripCurve;

	// B5PhysicsHandlingDebugComponent.h:238
	Vector2 mLocation;

	// B5PhysicsHandlingDebugComponent.h:239
	Vector2 mRange;

	// B5PhysicsHandlingDebugComponent.h:240
	Vector2 mSize;

public:
	// B5PhysicsHandlingDebugComponent.h:169
	void Construct();

	// B5PhysicsHandlingDebugComponent.h:173
	void Prepare(const BrnPhysics::Vehicle::Wheel::TireGripCurve *);

	// B5PhysicsHandlingDebugComponent.h:178
	void Render(CgsDev::Debug2DImmediateRender *);

	// B5PhysicsHandlingDebugComponent.h:185
	void PlotCoefficientLabel(CgsDev::Debug2DImmediateRender *, float32_t, RGBA);

	// B5PhysicsHandlingDebugComponent.h:192
	void PlotSlipRatioLabel(CgsDev::Debug2DImmediateRender *, float32_t, RGBA);

	// B5PhysicsHandlingDebugComponent.h:196
	void SetLocation(Vector2);

	// B5PhysicsHandlingDebugComponent.h:200
	void SetRange(Vector2);

	// B5PhysicsHandlingDebugComponent.h:204
	void SetSize(Vector2);

	// B5PhysicsHandlingDebugComponent.h:207
	Vector2 GetTitleLocation();

	// B5PhysicsHandlingDebugComponent.h:210
	const BrnPhysics::Vehicle::Wheel::TireGripCurve * GetGripCurve();

	// B5PhysicsHandlingDebugComponent.h:213
	float32_t GetXAxisLength();

	// B5PhysicsHandlingDebugComponent.h:216
	float32_t GetYAxisLength();

	// B5PhysicsHandlingDebugComponent.h:222
	Vector2 GetPointOnGraph(float32_t, float32_t);

	// B5PhysicsHandlingDebugComponent.h:229
	void PlotCurrentValue(CgsDev::Debug2DImmediateRender *, float32_t, RGBA);

private:
	// B5PhysicsHandlingDebugComponent.h:235
	Vector2 GetOrigin();

}

// B5PhysicsHandlingDebugComponent.h:253
struct BrnPhysics::Vehicle::GripCurveDebugWindow : public CgsDev::DebugUI::Window {
private:
	// B5PhysicsHandlingDebugComponent.h:301
	GripCurveDebugGraph mLongGripCurveGraph;

	// B5PhysicsHandlingDebugComponent.h:302
	GripCurveDebugGraph mLatGripCurveGraph;

	// B5PhysicsHandlingDebugComponent.h:303
	Wheel * mpLeftWheel;

	// B5PhysicsHandlingDebugComponent.h:304
	Wheel * mpRightWheel;

	// B5PhysicsHandlingDebugComponent.h:305
	bool mbVisible;

public:
	// B5PhysicsHandlingDebugComponent.cpp:1707
	void Construct();

	// B5PhysicsHandlingDebugComponent.cpp:1734
	void Prepare(Wheel *, Wheel *, const char *);

	// B5PhysicsHandlingDebugComponent.cpp:1774
	virtual void Render(CgsDev::Debug2DImmediateRender *);

	// B5PhysicsHandlingDebugComponent.cpp:1850
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

	// B5PhysicsHandlingDebugComponent.h:663
	void Show();

	// B5PhysicsHandlingDebugComponent.h:677
	void Hide();

	// B5PhysicsHandlingDebugComponent.h:656
	bool IsVisible();

	// B5PhysicsHandlingDebugComponent.h:705
	float32_t GetSlipRatioRange();

	// B5PhysicsHandlingDebugComponent.h:722
	float32_t GetCoefficientRange();

private:
	// B5PhysicsHandlingDebugComponent.h:691
	float32_t GetRequiredWindowWidth();

	// B5PhysicsHandlingDebugComponent.h:698
	float32_t GetRequiredWindowHeight();

}

// B5PhysicsHandlingDebugComponent.h:318
struct BrnPhysics::Vehicle::DebugComponent : public CgsDev::DebugComponent {
private:
	// B5PhysicsHandlingDebugComponent.h:396
	extern const int32_t KI_NUM_RECORDED_FRAMES = 60;

	// B5PhysicsHandlingDebugComponent.h:397
	extern const int32_t KI_MAX_NUM_RECORDED_CONTACTS = 50;

	// B5PhysicsHandlingDebugComponent.h:401
	BrnPhysics::Vehicle::Wheel::RoadContact[4] maRoadContacts;

	// B5PhysicsHandlingDebugComponent.h:402
	GripCurveDebugWindow mFrontWheelsGripCurveWindow;

	// B5PhysicsHandlingDebugComponent.h:403
	GripCurveDebugWindow mRearWheelsGripCurveWindow;

	// B5PhysicsHandlingDebugComponent.h:404
	BrnPhysics::Vehicle::RaceCarPhysics * mpRaceCarPhysics;

	// B5PhysicsHandlingDebugComponent.h:405
	float32_t[3] mafInertia;

	// B5PhysicsHandlingDebugComponent.h:406
	int32_t miCurrentGear;

	// B5PhysicsHandlingDebugComponent.h:407
	float32_t mfLastFrameRpm;

	// B5PhysicsHandlingDebugComponent.h:408
	GearStats[6] mGearStats;

	// B5PhysicsHandlingDebugComponent.h:409
	float32_t mfSpeedMPH;

	// B5PhysicsHandlingDebugComponent.h:412
	float32_t[3] mafHackComOffset;

	// B5PhysicsHandlingDebugComponent.h:413
	float32_t mfHackCrashExtraPitchVelocity;

	// B5PhysicsHandlingDebugComponent.h:414
	float32_t mfHackCrashExtraYawVelocity;

	// B5PhysicsHandlingDebugComponent.h:415
	float32_t mfHackCrashExtraRollVelocity;

	// B5PhysicsHandlingDebugComponent.h:416
	float32_t mfHackCrashExtraLinearVelocity;

	// B5PhysicsHandlingDebugComponent.h:418
	float32_t mfRPM;

	// B5PhysicsHandlingDebugComponent.h:419
	float32_t mfEngineDrive;

	// B5PhysicsHandlingDebugComponent.h:420
	float32_t mfReactionTorque;

	// B5PhysicsHandlingDebugComponent.h:421
	float32_t mfFlyWheelAngularVelocity;

	// B5PhysicsHandlingDebugComponent.h:422
	float32_t mfClutchDelay;

	// B5PhysicsHandlingDebugComponent.h:423
	float32_t mfClutchFactor;

	// B5PhysicsHandlingDebugComponent.h:427
	CgsGeometric::Triangle4::AOSTriangle mLastWallTriangle;

	// B5PhysicsHandlingDebugComponent.h:429
	bool mbRenderCOMPosition;

	// B5PhysicsHandlingDebugComponent.h:430
	bool mbRenderHandlingBody;

	// B5PhysicsHandlingDebugComponent.h:431
	bool mbOutputGearStats;

	// B5PhysicsHandlingDebugComponent.h:432
	bool mbOutputDeformationStats;

	// B5PhysicsHandlingDebugComponent.h:433
	bool mbShowTireFrictions;

	// B5PhysicsHandlingDebugComponent.h:434
	bool mbRenderFrontWheelsGripCurves;

	// B5PhysicsHandlingDebugComponent.h:435
	bool mbRenderRearWheelsGripCurves;

	// B5PhysicsHandlingDebugComponent.h:436
	bool mbDrawTractionLines;

	// B5PhysicsHandlingDebugComponent.h:437
	bool mbDrawTractionLineNormals;

	// B5PhysicsHandlingDebugComponent.h:438
	bool mbDrawAboveGroundLineTest;

	// B5PhysicsHandlingDebugComponent.h:439
	bool mbDrawLastWallTriangle;

	// B5PhysicsHandlingDebugComponent.h:440
	bool mbDrawAngularVelocity;

	// B5PhysicsHandlingDebugComponent.h:441
	bool mbDrawSuspensionForces;

	// B5PhysicsHandlingDebugComponent.h:442
	bool mbStoredPhysics;

	// B5PhysicsHandlingDebugComponent.h:445
	Vector3[4] maSuspensionForces;

	// B5PhysicsHandlingDebugComponent.h:446
	bool[4] mabSuspensionForceApplied;

	// B5PhysicsHandlingDebugComponent.h:449
	float32_t mfDownForceY;

public:
	// B5PhysicsHandlingDebugComponent.cpp:50
	void Construct(BrnPhysics::Vehicle::RaceCarPhysics *);

	// B5PhysicsHandlingDebugComponent.cpp:233
	void Destruct();

	// B5PhysicsHandlingDebugComponent.cpp:1258
	virtual void Update();

	// B5PhysicsHandlingDebugComponent.cpp:913
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// B5PhysicsHandlingDebugComponent.cpp:687
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// B5PhysicsHandlingDebugComponent.cpp:1334
	void RecordContact(Vector3, Vector3, Vector3, bool);

	// B5PhysicsHandlingDebugComponent.cpp:205
	void Update(float32_t);

	// B5PhysicsHandlingDebugComponent.h:760
	void SetLastWallTriangle(const CgsGeometric::Triangle4::AOSTriangle *);

	// B5PhysicsHandlingDebugComponent.cpp:1179
	void StorePhysics(void *);

	// B5PhysicsHandlingDebugComponent.cpp:1195
	void ResetPhysicsToStored(void *);

	// B5PhysicsHandlingDebugComponent.h:771
	void RecordSuspensionForce(Vector3, Vector3, BrnPhysics::Vehicle::EVehicleDrivenWheel);

	// B5PhysicsHandlingDebugComponent.h:780
	void RecordNoSuspensionForce(BrnPhysics::Vehicle::EVehicleDrivenWheel);

	// B5PhysicsHandlingDebugComponent.h:788
	void RecordDownForce(Vector3);

protected:
	// B5PhysicsHandlingDebugComponent.h:746
	virtual const char * GetPath() const;

	// B5PhysicsHandlingDebugComponent.h:752
	virtual const char * GetName() const;

	// B5PhysicsHandlingDebugComponent.cpp:251
	virtual void OnActivate();

private:
	// B5PhysicsHandlingDebugComponent.cpp:936
	void UpdateAndRenderGearStats(CgsDev::Debug2DImmediateRender *);

	// B5PhysicsHandlingDebugComponent.cpp:1056
	void RenderTireFrictions(CgsDev::Debug2DImmediateRender *);

	// B5PhysicsHandlingDebugComponent.cpp:1163
	void ResetGearStats(void *);

	// B5PhysicsHandlingDebugComponent.cpp:1148
	void RenderDeformationStats(CgsDev::Debug2DImmediateRender *);

	// B5PhysicsHandlingDebugComponent.cpp:374
	// Declaration
	void RegisterVehicleHandlingAttribs() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// B5PhysicsHandlingDebugComponent.cpp:378
		using namespace BrnPhysics::Vehicle;

	}

	// B5PhysicsHandlingDebugComponent.cpp:645
	// Declaration
	void RegisterEngineAttribs() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// B5PhysicsHandlingDebugComponent.cpp:649
		using namespace BrnPhysics::Vehicle;

	}

	// B5PhysicsHandlingDebugComponent.cpp:333
	void InitWindows();

	// B5PhysicsHandlingDebugComponent.cpp:781
	void DrawTractionLines(CgsDev::Debug3DImmediateRender *);

	// B5PhysicsHandlingDebugComponent.cpp:831
	void DrawTractionLineNormals(CgsDev::Debug3DImmediateRender *);

	// B5PhysicsHandlingDebugComponent.cpp:869
	void DrawAboveGroundLineTest(CgsDev::Debug3DImmediateRender *);

	// B5PhysicsHandlingDebugComponent.cpp:1530
	void DrawLastWallTriangle(CgsDev::Debug3DImmediateRender *);

	// B5PhysicsHandlingDebugComponent.cpp:1407
	void DrawAngularVelocity(CgsDev::Debug3DImmediateRender *);

	// B5PhysicsHandlingDebugComponent.cpp:1367
	void DrawSuspensionForces(CgsDev::Debug3DImmediateRender *);

}

// B5PhysicsHandlingDebugComponent.h:318
void BrnPhysics::Vehicle::DebugComponent::DebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// B5PhysicsHandlingDebugComponent.h:253
void BrnPhysics::Vehicle::GripCurveDebugWindow::GripCurveDebugWindow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


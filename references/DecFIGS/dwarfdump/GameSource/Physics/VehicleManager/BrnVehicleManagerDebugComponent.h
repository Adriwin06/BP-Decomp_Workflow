// BrnVehicleManagerDebugComponent.h:171
extern const int32_t KI_MAX_WORLD_CONTACT_SPIES = 4;

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// Declaration
		struct VehicleManagerDebugComponent {
		private:
			// BrnVehicleManagerDebugComponent.h:171
			extern const int32_t KI_MAX_WORLD_CONTACT_SPIES = 4;

		}

	}

}

// BrnVehicleManagerDebugComponent.h:44
struct BrnPhysics::Vehicle::VehicleManagerDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnVehicleManagerDebugComponent.h:169
	extern const int32_t KI_CONTACT_DISPLAY_SECONDS = 4;

	// BrnVehicleManagerDebugComponent.h:171
	extern const int32_t KI_MAX_WORLD_CONTACT_SPIES = 4;

	// BrnVehicleManagerDebugComponent.h:173
	OutContactSpy[4] maWorldContactSpies;

	// BrnVehicleManagerDebugComponent.h:174
	int32_t miNumWorldContactSpies;

	// BrnVehicleManagerDebugComponent.h:175
	bool mbDisplayWorldContactSpies;

	// BrnVehicleManagerDebugComponent.h:177
	VehicleManager * mpVehicleManager;

	// BrnVehicleManagerDebugComponent.h:178
	bool mbSlamDebugRenderEnabled;

	// BrnVehicleManagerDebugComponent.h:179
	bool mbRenderResetLines;

	// BrnVehicleManagerDebugComponent.h:180
	bool mbGrindDebugRenderEnabled;

	// BrnVehicleManagerDebugComponent.h:181
	Vector3 mPlayerCarContactPosition;

	// BrnVehicleManagerDebugComponent.h:182
	Vector3 mOtherCarContactPosition;

	// BrnVehicleManagerDebugComponent.h:183
	bool mbDisplayContact;

	// BrnVehicleManagerDebugComponent.h:184
	float32_t mfOtherCarContactAngleRad;

	// BrnVehicleManagerDebugComponent.h:185
	Vector3 mClosingVelocityPlayerCarSpace;

	// BrnVehicleManagerDebugComponent.h:186
	Vector3 mClosingVelocityOtherCarSpace;

	// BrnVehicleManagerDebugComponent.h:187
	Vector3 mPlayerCarVelocity;

	// BrnVehicleManagerDebugComponent.h:188
	Vector3 mOtherCarVelocity;

	// BrnVehicleManagerDebugComponent.h:189
	bool mbDrawLastRaceCarTrafficContact;

	// BrnVehicleManagerDebugComponent.h:190
	bool mbDrawLastSlamInfo;

	// BrnVehicleManagerDebugComponent.h:191
	bool mbDrawLastShuntInfo;

	// BrnVehicleManagerDebugComponent.h:192
	bool mbDrawLastCrashContact;

	// BrnVehicleManagerDebugComponent.h:193
	bool mbDrawCatchupTargets;

	// BrnVehicleManagerDebugComponent.h:194
	bool mbRenderWallContacts;

	// BrnVehicleManagerDebugComponent.h:195
	bool mbRenderGroundContacts;

	// BrnVehicleManagerDebugComponent.h:196
	bool mbDrawPlayerStuckInCollisionTests;

	// BrnVehicleManagerDebugComponent.h:199
	Matrix44Affine mLastTrafficContact_RaceCarTransform;

	// BrnVehicleManagerDebugComponent.h:200
	Matrix44Affine mLastTrafficContact_TrafficTransform;

	// BrnVehicleManagerDebugComponent.h:201
	Vector3 mLastTrafficContact_RaceCarHalfExt;

	// BrnVehicleManagerDebugComponent.h:202
	Vector3 mLastTrafficContact_TrafficHalfExt;

	// BrnVehicleManagerDebugComponent.h:203
	Vector3 mLastTrafficContact_RaceCarVelocity;

	// BrnVehicleManagerDebugComponent.h:204
	Vector3 mLastTrafficContact_TrafficVelocity;

	// BrnVehicleManagerDebugComponent.h:205
	PotentialContact mLastTrafficContact_Contact;

	// BrnVehicleManagerDebugComponent.h:208
	Matrix44Affine mLastCrashContact_RaceCarTransform;

	// BrnVehicleManagerDebugComponent.h:209
	Vector3 mLastCrashContact_RaceCarHalfExt;

	// BrnVehicleManagerDebugComponent.h:210
	Vector3 mLastCrashContact_RaceCarVelocity;

	// BrnVehicleManagerDebugComponent.h:211
	PotentialContact mLastCrashContact_Contact;

	// BrnVehicleManagerDebugComponent.h:213
	BrnPhysics::Vehicle::EImpactSituation meLastSlamImpactSituation;

	// BrnVehicleManagerDebugComponent.h:214
	int32_t miLastSlamNumber;

	// BrnVehicleManagerDebugComponent.h:215
	float32_t mfLastSlamDuration;

	// BrnVehicleManagerDebugComponent.h:216
	float32_t mfLastSlamBaseDuration;

	// BrnVehicleManagerDebugComponent.h:217
	float32_t mfLastSlamMassFactor;

	// BrnVehicleManagerDebugComponent.h:219
	BrnPhysics::Vehicle::EImpactSituation meLastShuntImpactSituation;

	// BrnVehicleManagerDebugComponent.h:220
	float32_t mfLastShuntMagnitude;

	// BrnVehicleManagerDebugComponent.h:221
	float32_t mfLastShuntClosingSpeed;

	// BrnVehicleManagerDebugComponent.h:223
	Vector3[4] maStuckInCollisionLineTestStart;

	// BrnVehicleManagerDebugComponent.h:224
	Vector3[4] maStuckInCollisionLineTestEnd;

	// BrnVehicleManagerDebugComponent.h:225
	Vector3[4] maStuckInCollisionLineTestPoint;

	// BrnVehicleManagerDebugComponent.h:226
	bool[4] mabStuckInCollisionIntersection;

public:
	// BrnVehicleManagerDebugComponent.cpp:87
	void Construct(VehicleManager *);

	// BrnVehicleManagerDebugComponent.cpp:148
	void Destruct();

	// BrnVehicleManagerDebugComponent.cpp:177
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// BrnVehicleManagerDebugComponent.cpp:225
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnVehicleManagerDebugComponent.h:260
	void SetContactDisplay(Vector3, Vector3, float32_t);

	// BrnVehicleManagerDebugComponent.h:274
	bool IsDisplayActive() const;

	// BrnVehicleManagerDebugComponent.cpp:724
	void RecordWorldContactSpy(OutContactSpy &);

	// BrnVehicleManagerDebugComponent.cpp:740
	void ClearWorldContactSpies();

	// BrnVehicleManagerDebugComponent.cpp:837
	void RecordRaceCarTrafficContact(const PotentialContact *, int32_t, int32_t);

	// BrnVehicleManagerDebugComponent.cpp:1043
	void RecordCrashContact(const PotentialContact *);

	// BrnVehicleManagerDebugComponent.cpp:890
	void RecordSlam(BrnPhysics::Vehicle::EImpactSituation, int32_t, float32_t, float32_t, float32_t);

	// BrnVehicleManagerDebugComponent.cpp:912
	void RecordShunt(BrnPhysics::Vehicle::EImpactSituation, float32_t, float32_t);

	// BrnVehicleManagerDebugComponent.h:112
	bool GetRenderWallContacts();

	// BrnVehicleManagerDebugComponent.h:116
	bool GetRenderGroundContacts();

	// BrnVehicleManagerDebugComponent.cpp:1163
	void RecordStuckInCollisionLineTest(Vector3 *);

	// BrnVehicleManagerDebugComponent.cpp:1195
	void RecordStuckInCollisionLineTestResult(const CgsSceneManager::CgsCollision::LineWithTriangleListStreamJobDesc::StreamResult *);

protected:
	// BrnVehicleManagerDebugComponent.cpp:164
	virtual const char * GetName() const;

	// BrnVehicleManagerDebugComponent.cpp:278
	virtual void OnActivate();

private:
	// BrnVehicleManagerDebugComponent.cpp:534
	void RenderContact(CgsDev::Debug2DImmediateRender *) const;

	// BrnVehicleManagerDebugComponent.cpp:490
	void RenderResetRays(CgsDev::Debug3DImmediateRender *) const;

	// BrnVehicleManagerDebugComponent.cpp:585
	void RenderCarDiagram(CgsDev::Debug2DImmediateRender *, const rw::math::vpu::Vector2 &, RGBA, const rw::math::vpu::Vector3 *, const rw::math::vpu::Vector3 *, const rw::math::vpu::Vector3 *) const;

	// BrnVehicleManagerDebugComponent.cpp:641
	void RenderGrind() const;

	// BrnVehicleManagerDebugComponent.cpp:753
	void RenderWorldContactSpies(CgsDev::Debug3DImmediateRender *) const;

	// BrnVehicleManagerDebugComponent.cpp:932
	void DrawLastRaceCarTrafficContact(CgsDev::Debug3DImmediateRender *);

	// BrnVehicleManagerDebugComponent.cpp:1004
	void DrawLastCrashContact(CgsDev::Debug3DImmediateRender *);

	// BrnVehicleManagerDebugComponent.cpp:1091
	void DrawCatchupTargets(CgsDev::Debug3DImmediateRender *);

	// BrnVehicleManagerDebugComponent.cpp:780
	void DrawPlayerStuckInCollisionLineTests(CgsDev::Debug3DImmediateRender *);

}

// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// Declaration
		struct VehicleManagerDebugComponent {
		public:
			VehicleManagerDebugComponent();

		private:
			// BrnVehicleManagerDebugComponent.h:171
			extern const int32_t KI_MAX_WORLD_CONTACT_SPIES = 4;

		}

	}

}

// BrnVehicleManagerDebugComponent.h:44
void BrnPhysics::Vehicle::VehicleManagerDebugComponent::VehicleManagerDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


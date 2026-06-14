// BrnSimpleVehiclePhysics.h:71
struct BrnPhysics::Vehicle::AboveGroundTestResult {
	// BrnSimpleVehiclePhysics.h:93
	Vector3 mIntersectionPosition;

	// BrnSimpleVehiclePhysics.h:94
	Vector3 mIntersectionNormal;

	// BrnSimpleVehiclePhysics.h:95
	float32_t mfVerticalDistance;

	// BrnSimpleVehiclePhysics.h:96
	CollisionTag mCollisionTag;

	// BrnSimpleVehiclePhysics.h:97
	bool mbValid;

public:
	// BrnSimpleVehiclePhysics.h:76
	void Reset();

	// BrnSimpleVehiclePhysics.h:81
	void SetFrom(Vector3, const AboveGroundTestResult *);

	// BrnSimpleVehiclePhysics.h:90
	void SetValidResult(Vector3, Vector3, float32_t, uint16_t, uint16_t);

}

// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// BrnSimpleVehiclePhysics.h:52
		enum EVehicleDrivenWheel {
			eFrontLeftWheel = 0,
			eFrontRightWheel = 1,
			eRearLeftWheel = 2,
			eRearRightWheel = 3,
			eNumDrivenWheels = 4,
		}

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnSimpleVehiclePhysics.h:52
		enum EVehicleDrivenWheel {
			eFrontLeftWheel = 0,
			eFrontRightWheel = 1,
			eRearLeftWheel = 2,
			eRearRightWheel = 3,
			eNumDrivenWheels = 4,
		}

		// BrnSimpleVehiclePhysics.h:379
		extern BrnPhysics::Vehicle::EVehicleDrivenWheel operator++(BrnPhysics::Vehicle::EVehicleDrivenWheel &, int);

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// Declaration
		struct SimpleVehiclePhysics {
		public:
			// BrnSimpleVehiclePhysics.h:320
			bool HasCrashedThisFrame() const;

		}

	}

}

// BrnSimpleVehiclePhysics.h:110
struct BrnPhysics::Vehicle::SimpleVehiclePhysics : public ExternalPhysicsBody {
	int (*)(...) * _vptr.SimpleVehiclePhysics;

protected:
	// BrnSimpleVehiclePhysics.h:357
	Wheel[4] maWheels;

	// BrnSimpleVehiclePhysics.h:358
	SweptSphere[4] maWheelSpheres;

	// BrnSimpleVehiclePhysics.h:359
	Vector3[4] maLocalTractionPoints;

	// BrnSimpleVehiclePhysics.h:360
	AboveGroundTestResult mAboveGroundTestResult;

	// BrnSimpleVehiclePhysics.h:361
	SimpleVehicleAttribs mSimpleAttribs;

	// BrnSimpleVehiclePhysics.h:362
	Vector3 mHandlingBodyOffset;

	// BrnSimpleVehiclePhysics.h:363
	Vector3 mHalfExtent;

	// BrnSimpleVehiclePhysics.h:364
	Vector3Plus mWheelPlanePosAndHeight;

	// BrnSimpleVehiclePhysics.h:365
	VecFloat mfSpeedMPH;

	// BrnSimpleVehiclePhysics.h:366
	AxisAlignedBox mDeformableAABB;

	// BrnSimpleVehiclePhysics.h:367
	AxisAlignedBox mOriginalAABB;

	// BrnSimpleVehiclePhysics.h:368
	bool mbCrashing;

	// BrnSimpleVehiclePhysics.h:369
	bool mbStartedFatallyCrashing;

	// BrnSimpleVehiclePhysics.h:370
	bool mbStartedDeforming;

	// BrnSimpleVehiclePhysics.h:371
	bool mbCrashedThisFrame;

	// BrnSimpleVehiclePhysics.h:372
	bool mbMinWheelDistValid;

	// BrnSimpleVehiclePhysics.h:373
	bool mbAnyWheelsDetatched;

public:
	void SimpleVehiclePhysics(const BrnPhysics::Vehicle::SimpleVehiclePhysics &);

	void SimpleVehiclePhysics();

	// BrnSimpleVehiclePhysics.cpp:54
	void Construct();

	// BrnSimpleVehiclePhysics.cpp:95
	bool Prepare(Matrix44Affine, Vector3, Vector3, Vector3, Vector3, const AxisAlignedBox &, VehicleAttribs *, const rw::math::vpu::Vector3 *, const float32_t *);

	// BrnSimpleVehiclePhysics.cpp:422
	bool Release();

	// BrnSimpleVehiclePhysics.cpp:442
	void Destruct();

	// BrnSimpleVehiclePhysics.cpp:874
	void Reset();

	// BrnSimpleVehiclePhysics.cpp:156
	void SwitchAttribs(VehicleAttribs *);

	// BrnSimpleVehiclePhysics.cpp:249
	bool SetAttributes();

	// BrnSimpleVehiclePhysics.cpp:297
	bool SetAttributes(VehicleAttribs *, const rw::math::vpu::Vector3 *, const float32_t *);

	// BrnSimpleVehiclePhysics.cpp:322
	// Declaration
	bool SetAttributes(const rw::math::vpu::Vector3 *, const float32_t *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnSimpleVehiclePhysics.cpp:337
		using namespace CgsDev::Message;

	}

	// BrnSimpleVehiclePhysics.cpp:894
	void Reset(Vector3);

	// BrnSimpleVehiclePhysics.cpp:851
	void LockWheels();

	// BrnSimpleVehiclePhysics.cpp:834
	void UpdatePostSimulation(VecFloat);

	// BrnSimpleVehiclePhysics.cpp:496
	void GetTractionLine(BrnPhysics::Vehicle::EVehicleDrivenWheel, Vector3 &, Vector3 &) const;

	// BrnSimpleVehiclePhysics.cpp:536
	void GetAboveGroundTestLine(Vector3 &, Vector3 &) const;

	// BrnSimpleVehiclePhysics.h:521
	void ResetAboveGroundTestResult();

	// BrnSimpleVehiclePhysics.cpp:570
	void SetAboveGroundTestResult(Vector3, Vector3, uint32_t);

	// BrnSimpleVehiclePhysics.cpp:605
	void SetAboveGroundTestResult(Vector3, Vector3, uint16_t, uint16_t);

	// BrnSimpleVehiclePhysics.h:540
	const AboveGroundTestResult * GetAboveGroundTestResult() const;

	// BrnSimpleVehiclePhysics.cpp:723
	void AddTractionPoint(BrnPhysics::Vehicle::EVehicleDrivenWheel, Vector3, Vector3, uint32_t);

	// BrnSimpleVehiclePhysics.h:562
	SceneQueryId GenerateTractionLineQueryID(uint8_t, uint8_t, uint8_t);

	// BrnSimpleVehiclePhysics.cpp:651
	Matrix44Affine GetWheelsWorldTransfrom(BrnPhysics::Vehicle::EVehicleDrivenWheel, bool) const;

	// BrnSimpleVehiclePhysics.h:226
	const Wheel * GetWheel(BrnPhysics::Vehicle::EVehicleDrivenWheel) const;

	// BrnSimpleVehiclePhysics.h:232
	Wheel * GetWheel(BrnPhysics::Vehicle::EVehicleDrivenWheel);

	// BrnSimpleVehiclePhysics.h:237
	const SweptSphere * GetWheelSphere(BrnPhysics::Vehicle::EVehicleDrivenWheel) const;

	// BrnSimpleVehiclePhysics.h:243
	SweptSphere * GetWheelSphere(BrnPhysics::Vehicle::EVehicleDrivenWheel);

	// BrnSimpleVehiclePhysics.h:248
	Vector3 GetLocalTractionPoint(uint8_t) const;

	// BrnSimpleVehiclePhysics.h:252
	const SimpleVehicleAttribs * GetSimpleAttribs() const;

	// BrnSimpleVehiclePhysics.h:256
	SimpleVehicleAttribs * GetSimpleAttribs();

	// BrnSimpleVehiclePhysics.h:451
	Matrix44Affine GetGraphicsVehicleTransform() const;

	// BrnSimpleVehiclePhysics.h:482
	void SetGraphicsVehicleTransform(Matrix44Affine);

	// BrnSimpleVehiclePhysics.cpp:471
	void ClearCollisions();

	// BrnSimpleVehiclePhysics.h:503
	Vector3 GetHalfExtent() const;

	// BrnSimpleVehiclePhysics.h:588
	void GetInverseTransform(Matrix44Affine &) const;

	// BrnSimpleVehiclePhysics.cpp:768
	virtual VecFloat GetSteeringAngle() const;

	// BrnSimpleVehiclePhysics.cpp:786
	virtual void ClearCrashing();

	// BrnSimpleVehiclePhysics.h:285
	bool IsCrashing() const;

	// BrnSimpleVehiclePhysics.h:289
	bool IsFatallyCrashing() const;

	// BrnSimpleVehiclePhysics.h:293
	VecFloat GetSpeedMPH() const;

	// BrnSimpleVehiclePhysics.h:297
	VecFloat GetSpeed() const;

	// BrnSimpleVehiclePhysics.cpp:805
	virtual void SetCrashing();

	// BrnSimpleVehiclePhysics.h:304
	void RecordHasDeformed();

	// BrnSimpleVehiclePhysics.h:308
	void SetFatallyCrashing();

	// BrnSimpleVehiclePhysics.h:312
	void RecordDeformationReset();

	// BrnSimpleVehiclePhysics.h:316
	bool HasStartedDeforming() const;

	// BrnSimpleVehiclePhysics.h:320
	bool HasCrashedThisFrame() const;

	// BrnSimpleVehiclePhysics.h:324
	bool AreAnyWheelsDetatched() const;

	// BrnSimpleVehiclePhysics.cpp:943
	void GetSimpleVehicleBox(Box &) const;

	// BrnSimpleVehiclePhysics.h:604
	bool IsContactBelowWheelPlane(Vector3, VecFloat) const;

	// BrnSimpleVehiclePhysics.cpp:993
	void CalculateNewWheelPlane();

	// BrnSimpleVehiclePhysics.h:340
	void SetDeformableBBox(const AxisAlignedBox &);

	// BrnSimpleVehiclePhysics.h:344
	const AxisAlignedBox & GetDeformableBBox() const;

	// BrnSimpleVehiclePhysics.h:348
	void ResetDeformableAABB();

	// BrnSimpleVehiclePhysics.h:641
	VecFloat GetInnerCacheSphereRadius() const;

}

// BrnSimpleVehiclePhysics.h:110
void BrnPhysics::Vehicle::SimpleVehiclePhysics::SimpleVehiclePhysics() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnSimpleVehiclePhysics.h:52
		enum EVehicleDrivenWheel {
			eFrontLeftWheel = 0,
			eFrontRightWheel = 1,
			eRearLeftWheel = 2,
			eRearRightWheel = 3,
			eNumDrivenWheels = 4,
		}

	}

}


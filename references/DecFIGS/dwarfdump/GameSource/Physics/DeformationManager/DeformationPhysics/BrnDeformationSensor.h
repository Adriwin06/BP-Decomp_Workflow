// BrnDeformationSensor.h:57
struct BrnPhysics::Deformation::StoredImpulseContact {
	// BrnDeformationSensor.h:59
	Vector3 mPointOnA;

	// BrnDeformationSensor.h:60
	Vector3 mPointOnB;

	// BrnDeformationSensor.h:61
	Vector3 mNormal;

	// BrnDeformationSensor.h:62
	BrnPhysics::Deformation::DeformableObject * mpOtherVehicle;

	// BrnDeformationSensor.h:63
	BrnPhysics::Deformation::DeformationSensor * mpOtherSensor;

	// BrnDeformationSensor.h:64
	float32_t mfImpactTimeInFrame;

	// BrnDeformationSensor.h:65
	ContactId mContactId;

public:
	// BrnDeformationSensor.h:68
	void GetInverse(StoredImpulseContact &) const;

}

// BrnDeformationSensor.h:42
struct BrnPhysics::Deformation::StoredContact {
	// BrnDeformationSensor.h:44
	Vector3 mLocalPointOnA;

	// BrnDeformationSensor.h:45
	Vector3 mLocalPointOnB;

	// BrnDeformationSensor.h:46
	Vector3 mNormal;

	// BrnDeformationSensor.h:47
	float32_t mfProjectedDist;

	// BrnDeformationSensor.h:48
	BrnPhysics::Deformation::DeformableObject * mpOtherVehicle;

	// BrnDeformationSensor.h:49
	BrnPhysics::Deformation::DeformationSensor * mpOtherSensor;

	// BrnDeformationSensor.h:50
	bool mbValid;

public:
	// BrnDeformationSensor.h:53
	bool IsVehicleContact() const;

}

// BrnDeformationSensor.h:97
struct BrnPhysics::Deformation::DeformationSensor : public BrnPhysics::Deformation::CollidableBody {
private:
	// BrnDeformationSensor.h:262
	const SensorSpec * mpSpec;

	// BrnDeformationSensor.h:265
	Vector3Plus mPointDisplacement_BiggestImpulseThisFrame;

	// BrnDeformationSensor.h:266
	StoredContact[3] maStoredContacts;

	// BrnDeformationSensor.h:267
	StoredImpulseContact mImpulseContact;

	// BrnDeformationSensor.h:268
	OutContactSpy mContactSpy;

	// BrnDeformationSensor.h:269
	VolumeInstanceId mVolInstId;

	// BrnDeformationSensor.h:270
	int32_t miNumStoredContacts;

	// BrnDeformationSensor.h:271
	Sphere * mpLocalSpaceSphere;

	// BrnDeformationSensor.h:272
	Sphere * mpWorldSpaceSphere;

	// BrnDeformationSensor.h:273
	float32_t mfScratchAmount;

public:
	void DeformationSensor(const BrnPhysics::Deformation::DeformationSensor &);

	void DeformationSensor();

	// BrnDeformationSensor.cpp:44
	void Construct();

	// BrnDeformationSensor.cpp:61
	void Destruct();

	// BrnDeformationSensor.cpp:90
	bool Prepare(const SensorSpec *, Sphere *, Sphere *, Matrix44Affine, Vector3Plus, Vector3, Vector3, Vector3);

	// BrnDeformationSensor.cpp:157
	bool Release();

	// BrnDeformationSensor.h:124
	void SetLocalPosition(Vector3);

	// BrnDeformationSensor.h:128
	Vector3 GetLocalPosition() const;

	// BrnDeformationSensor.h:132
	Vector3 GetWorldPosition() const;

	// BrnDeformationSensor.h:294
	void UpdateWorldPosition(Matrix44Affine);

	// BrnDeformationSensor.h:302
	void TranslateWorldPosition(Vector3);

	// BrnDeformationSensor.h:145
	void SetPointDisplacement(Vector3);

	// BrnDeformationSensor.h:152
	void SetVolumeInstanceId(VolumeInstanceId);

	// BrnDeformationSensor.h:157
	VolumeInstanceId GetVolumeInstanceId();

	// BrnDeformationSensor.cpp:268
	virtual void ApplyLocalImpulse(BrnPhysics::Deformation::ImpulseParams *);

	// BrnDeformationSensor.cpp:202
	virtual void RecievePassedOnImpulse(const BrnPhysics::Deformation::ImpulseParams *, VecFloat);

	// BrnDeformationSensor.cpp:465
	bool ValidateAndAddContact(Matrix44Affine, const PotentialContact &, ContactId, BrnPhysics::Deformation::DeformableObject *, BrnPhysics::Deformation::DeformationSensor *);

	// BrnDeformationSensor.h:309
	void ClearStoredContacts();

	// BrnDeformationSensor.h:317
	void ClearNonWorldContacts();

	// BrnDeformationSensor.cpp:578
	bool GetImpulse(StoredImpulseContact &);

	// BrnDeformationSensor.cpp:875
	uint8_t GetNextSensor(BrnPhysics::Deformation::ENextSensorDirection) const;

	// BrnDeformationSensor.h:356
	VecFloat GetRadius() const;

	// BrnDeformationSensor.cpp:603
	void AddToContactSpy(Vector3, Vector3);

	// BrnDeformationSensor.cpp:624
	// Declaration
	void OutputContactSpy(OutputBuffer *, PotentialContactInterface *, EntityId) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDeformationSensor.cpp:628
		using namespace CgsSceneManager::SceneManagerIO;

	}

	// BrnDeformationSensor.h:206
	const rw::math::vpu::Vector3 & GetDisplacement();

	// BrnDeformationSensor.h:342
	VecFloat OutputState(SensorState *);

	// BrnDeformationSensor.h:213
	float32_t GetScratchAmount() const;

	// BrnDeformationSensor.h:217
	void SetScratchAmount(float32_t);

	// BrnDeformationSensor.h:221
	void AddScratch(float32_t);

	// BrnDeformationSensor.h:233
	Sphere GetWorldSpaceSphere() const;

	// BrnDeformationSensor.cpp:718
	void AddContactsToPenetrationSolver(PenetrationSolver *, BrnPhysics::Deformation::DeformableObject *, int32_t, int32_t, bool) const;

	// BrnDeformationSensor.h:245
	uint8_t GetNeighbourIndex(int32_t) const;

	// BrnDeformationSensor.h:249
	void SetBiggestImpulseThisFrame(VecFloat);

	// BrnDeformationSensor.h:253
	void ClearBiggestImpulseThisFrame();

	// BrnDeformationSensor.h:257
	VecFloat GetBiggestImpulseThisFrame() const;

private:
	// BrnDeformationSensor.cpp:176
	void ClearVariables();

	// BrnDeformationSensor.cpp:394
	void StoreContact(Matrix44Affine, const PotentialContact &, BrnPhysics::Deformation::DeformableObject *, BrnPhysics::Deformation::DeformationSensor *);

	// BrnDeformationSensor.cpp:534
	Vector3 GetForwardVectorForDirection(BrnPhysics::Deformation::ENextSensorDirection, Matrix44Affine);

}

// BrnDeformationSensor.h:97
void BrnPhysics::Deformation::DeformationSensor::DeformationSensor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


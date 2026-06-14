// BrnStreamedDeformationSpec.h:49
struct BrnPhysics::Deformation::WheelSpec {
	// BrnStreamedDeformationSpec.h:51
	Vector3 mPosition;

	// BrnStreamedDeformationSpec.h:52
	Vector3 mScale;

	// BrnStreamedDeformationSpec.h:53
	int32_t liTagPointIndex;

}

// BrnStreamedDeformationSpec.h:69
struct BrnPhysics::Deformation::LocatorPointSpec {
	// BrnStreamedDeformationSpec.h:71
	Matrix44Affine mLocatorMatrix;

	// BrnStreamedDeformationSpec.h:72
	BrnPhysics::Deformation::ETagPointType meTagPointType;

	// BrnStreamedDeformationSpec.h:73
	int16_t miIkPartIndex;

	// BrnStreamedDeformationSpec.h:74
	uint8_t mu8SkinPoint;

public:
	// BrnStreamedDeformationSpec.h:78
	void FixUp(void *);

	// BrnStreamedDeformationSpec.h:82
	void FixDown(void *);

}

// BrnStreamedDeformationSpec.h:87
struct BrnPhysics::Deformation::LocatorPointSpecList {
private:
	// BrnStreamedDeformationSpec.h:141
	uint32_t muNumLocators;

	// BrnStreamedDeformationSpec.h:145
	LocatorPointSpec * mpaLocatorPoints;

public:
	// BrnStreamedDeformationSpec.h:90
	const uint32_t GetNumLocatorPoints() const;

	// BrnStreamedDeformationSpec.h:94
	BrnPhysics::Deformation::ETagPointType GetLocatorType(uint32_t) const;

	// BrnStreamedDeformationSpec.h:98
	const rw::math::vpu::Matrix44Affine & GetLocatorXform(uint32_t) const;

	// BrnStreamedDeformationSpec.h:102
	const LocatorPointSpec * GetLocatorSpec(uint32_t) const;

	// BrnStreamedDeformationSpec.h:108
	void * GetEndOfArray() const;

	// BrnStreamedDeformationSpec.h:116
	uint32_t FindFirstLocator(BrnPhysics::Deformation::ETagPointType) const;

	// BrnStreamedDeformationSpec.h:121
	LocatorPointSpec CreateLocatorPointSpec(uint32_t) const;

	// BrnStreamedDeformationSpec.h:132
	void FixUp(void *);

	// BrnStreamedDeformationSpec.h:136
	void FixDown(void *);

}

// BrnStreamedDeformationSpec.h:160
struct BrnPhysics::Deformation::StreamedDeformationSpec {
private:
	// BrnStreamedDeformationSpec.h:319
	int32_t miVersionNumber;

	// BrnStreamedDeformationSpec.h:320
	TagPointSpec * maTagPointData;

	// BrnStreamedDeformationSpec.h:321
	int32_t miNumberOfTagPoints;

	// BrnStreamedDeformationSpec.h:323
	IKDrivenPointSpec * maDrivenPointData;

	// BrnStreamedDeformationSpec.h:324
	int32_t miNumberOfDrivenPoints;

	// BrnStreamedDeformationSpec.h:326
	IKBodyPartSpec * maIKPartData;

	// BrnStreamedDeformationSpec.h:327
	int32_t miNumberOfIKParts;

	// BrnStreamedDeformationSpec.h:329
	GlassPaneSpec * maGlassPaneData;

	// BrnStreamedDeformationSpec.h:330
	int32_t miNumGlassPanes;

	// BrnStreamedDeformationSpec.h:332
	LocatorPointSpecList mGenericTags;

	// BrnStreamedDeformationSpec.h:333
	LocatorPointSpecList mCameraTags;

	// BrnStreamedDeformationSpec.h:334
	LocatorPointSpecList mLightTags;

	// BrnStreamedDeformationSpec.h:336
	Vector3 mHandlingBodyDimensions;

	// BrnStreamedDeformationSpec.h:338
	WheelSpec[4] maWheelSpecs;

	// BrnStreamedDeformationSpec.h:340
	SensorSpec[20] maDeformationSensorSpecs;

	// BrnStreamedDeformationSpec.h:342
	Matrix44Affine mCarModelSpaceToHandlingBodySpaceTransform;

	// BrnStreamedDeformationSpec.h:344
	uint8_t mu8SpecID;

	// BrnStreamedDeformationSpec.h:345
	uint8_t mu8NumVehicleBodies;

	// BrnStreamedDeformationSpec.h:346
	uint8_t mu8NumDeformationSensors;

	// BrnStreamedDeformationSpec.h:347
	uint8_t mu8NumGraphicsParts;

	// BrnStreamedDeformationSpec.h:349
	Vector3 mCurrentCOMOffset;

	// BrnStreamedDeformationSpec.h:350
	Vector3 mMeshOffset;

	// BrnStreamedDeformationSpec.h:352
	Vector3 mRigidBodyOffset;

	// BrnStreamedDeformationSpec.h:353
	Vector3 mCollisionOffset;

	// BrnStreamedDeformationSpec.h:354
	Vector3 mInertiaTensor;

public:
	// BrnStreamedDeformationSpec.h:164
	void Construct();

	// BrnStreamedDeformationSpec.h:167
	void Destruct();

	// BrnStreamedDeformationSpec.h:170
	bool Prepare();

	// BrnStreamedDeformationSpec.h:173
	bool Release();

	// BrnStreamedDeformationSpec.h:178
	void AddToScene(InSceneUpdateInterface *);

	// BrnStreamedDeformationSpec.h:182
	uint8_t GetNumDeformationSensors() const;

	// BrnStreamedDeformationSpec.h:185
	uint8_t GetNumVehicleBodies() const;

	// BrnStreamedDeformationSpec.h:188
	uint8_t GetNumTagPoints() const;

	// BrnStreamedDeformationSpec.h:191
	uint8_t GetNumDrivenPoints() const;

	// BrnStreamedDeformationSpec.h:194
	uint8_t GetNumIKParts() const;

	// BrnStreamedDeformationSpec.h:197
	uint8_t GetNumGlassPanes() const;

	// BrnStreamedDeformationSpec.h:200
	const SensorSpec * GetSensorSpec(uint8_t) const;

	// BrnStreamedDeformationSpec.h:204
	uint8_t GetID() const;

	// BrnStreamedDeformationSpec.h:207
	const TagPointSpec * GetTagPointSpec(int32_t) const;

	// BrnStreamedDeformationSpec.h:210
	const LocatorPointSpecList & GetGenericLocators() const;

	// BrnStreamedDeformationSpec.h:213
	const LocatorPointSpecList & GetCameraLocators() const;

	// BrnStreamedDeformationSpec.h:216
	const LocatorPointSpecList & GetLightLocators() const;

	// BrnStreamedDeformationSpec.h:219
	const IKDrivenPointSpec * GetDrivenPointSpec(int32_t) const;

	// BrnStreamedDeformationSpec.h:222
	const IKBodyPartSpec * GetDrivenPartSpec(int32_t) const;

	// BrnStreamedDeformationSpec.h:230
	const GlassPaneSpec * GetGlassPaneSpec(int32_t) const;

	// BrnStreamedDeformationSpec.h:234
	void TransformToNewCOMSpace(Vector3);

	// BrnStreamedDeformationSpec.h:238
	void SetHandlingBodyOffset(Vector3);

	// BrnStreamedDeformationSpec.h:242
	void SetHandlingBodyDimensions(Vector3);

	// BrnStreamedDeformationSpec.h:245
	Vector3 GetMeshOffset() const;

	// BrnStreamedDeformationSpec.h:248
	Vector3 GetCollisionOffset() const;

	// BrnStreamedDeformationSpec.h:252
	Vector3 GetHalfExtents() const;

	// BrnStreamedDeformationSpec.h:256
	const WheelSpec * GetWheelSpec(int32_t) const;

	// BrnStreamedDeformationSpec.h:261
	int32_t GetNumWheels() const;

	// BrnStreamedDeformationSpec.h:264
	Vector3 GetRigidBodyPosition() const;

	// BrnStreamedDeformationSpec.h:267
	const rw::math::vpu::Matrix44Affine & GetCarModelSpaceToHandlingBodySpaceTransform() const;

	// BrnStreamedDeformationSpec.h:271
	uint8_t GetNumGraphicsParts() const;

	// BrnStreamedDeformationSpec.h:275
	Vector3 GetCurrentComOffset() const;

	// BrnStreamedDeformationSpec.h:281
	void GetBoundingBox(AxisAlignedBox &) const;

	// BrnStreamedDeformationSpec.h:310
	void FixDown(void *);

	// BrnStreamedDeformationSpec.h:313
	void FixUp(void *);

}


// Wheel.h:30
namespace BrnPhysics {
	// BrnPhysicsRWTypeData.h:39
	namespace RWPhysicsTypeData {
		// BrnPhysicsRWTypeData.h:192
		const rw::math::vpu::Vector3 K_DEFAULT_JOINT_DISPLACEMENT_LIMIT;

		// BrnPhysicsRWTypeData.h:193
		const float32_t K_DEFAULT_JOINT_SWING_DISPLACEMENT_LIMIT;

		// BrnPhysicsRWTypeData.h:194
		const float32_t K_DEFAULT_JOINT_TWIST_DISPLACEMENT_LIMIT;

	}

}

// Wheel.h:30
namespace BrnPhysics {
	// BrnRWPhysicsTypeDataFrwdDecl.h:31
	namespace RWPhysicsTypeData {
		// BrnPhysicsRWTypeData.h:192
		const rw::math::vpu::Vector3 K_DEFAULT_JOINT_DISPLACEMENT_LIMIT;

		// BrnPhysicsRWTypeData.h:193
		const float32_t K_DEFAULT_JOINT_SWING_DISPLACEMENT_LIMIT;

		// BrnPhysicsRWTypeData.h:194
		const float32_t K_DEFAULT_JOINT_TWIST_DISPLACEMENT_LIMIT;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnPhysicsRWTypeData.h:39
	namespace RWPhysicsTypeData {
		// BrnPhysicsRWTypeData.h:192
		const rw::math::vpu::Vector3 K_DEFAULT_JOINT_DISPLACEMENT_LIMIT;

		// BrnPhysicsRWTypeData.h:193
		const float32_t K_DEFAULT_JOINT_SWING_DISPLACEMENT_LIMIT;

		// BrnPhysicsRWTypeData.h:194
		const float32_t K_DEFAULT_JOINT_TWIST_DISPLACEMENT_LIMIT;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnRWPhysicsTypeDataFrwdDecl.h:31
	namespace RWPhysicsTypeData {
		// BrnPhysicsRWTypeData.h:192
		const rw::math::vpu::Vector3 K_DEFAULT_JOINT_DISPLACEMENT_LIMIT;

		// BrnPhysicsRWTypeData.h:193
		const float32_t K_DEFAULT_JOINT_SWING_DISPLACEMENT_LIMIT;

		// BrnPhysicsRWTypeData.h:194
		const float32_t K_DEFAULT_JOINT_TWIST_DISPLACEMENT_LIMIT;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnPhysicsRWTypeData.h:39
	namespace RWPhysicsTypeData {
		struct BodyGroupSpec;

		struct BodySpec;

		struct VolumeSpec;

		struct JointDynamicsSpec;

		struct DriveLinearDynamicsSpec;

		struct DriveAngularDynamicsSpec;

		struct JointSpec;

		struct BoxVolumeSpec;

		struct CapsuleVolumeSpec;

		struct SphereVolumeSpec;

		struct CylinderVolumeSpec;

		// BrnPhysicsRWTypeData.h:192
		const rw::math::vpu::Vector3 K_DEFAULT_JOINT_DISPLACEMENT_LIMIT;

		// BrnPhysicsRWTypeData.h:193
		const float32_t K_DEFAULT_JOINT_SWING_DISPLACEMENT_LIMIT;

		// BrnPhysicsRWTypeData.h:194
		const float32_t K_DEFAULT_JOINT_TWIST_DISPLACEMENT_LIMIT;

	}

}

// BrnPhysicsRWTypeData.h:60
struct BrnPhysics::RWPhysicsTypeData::BodyGroupSpec {
	// BrnPhysicsRWTypeData.h:62
	uint8_t muIndex;

	// BrnPhysicsRWTypeData.h:63
	uint8_t muNumberOfJointsToOtherBodyGroups;

	// BrnPhysicsRWTypeData.h:64
	uint8_t muFirstBodyIndex;

	// BrnPhysicsRWTypeData.h:65
	uint8_t muNumberOfBodies;

	// BrnPhysicsRWTypeData.h:66
	uint8_t muBodyPartType;

	// BrnPhysicsRWTypeData.h:67
	float32_t mfTotalMass;

	// BrnPhysicsRWTypeData.h:68
	float32_t mfRadiusOfLargestBody;

public:
	// BrnPhysicsRWTypeData.h:78
	void Construct(uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, float32_t);

	// BrnPhysicsRWTypeData.h:81
	void AddOneExternalJoint();

	// BrnPhysicsRWTypeData.h:86
	void SetRadiusOfLargestBody(float32_t);

	// BrnPhysicsRWTypeData.h:91
	void FixUp(const Resource &);

	// BrnPhysicsRWTypeData.h:96
	void FixDown(const Resource &);

	// BrnPhysicsRWTypeData.h:102
	void Refix(const void *, const void *);

}

// BrnPhysicsRWTypeData.h:116
struct BrnPhysics::RWPhysicsTypeData::BodySpec {
	// BrnPhysicsRWTypeData.h:118
	uint8_t muIndex;

	// BrnPhysicsRWTypeData.h:119
	float32_t mfMass;

	// BrnPhysicsRWTypeData.h:120
	Vector3 mInertia;

	// BrnPhysicsRWTypeData.h:121
	Matrix44Affine mTransform;

	// BrnPhysicsRWTypeData.h:122
	BrnPhysics::RWPhysicsTypeData::VolumeSpec * mpVolume;

	// BrnPhysicsRWTypeData.h:123
	BodyGroupSpec * mpBodyPart;

public:
	// BrnPhysicsRWTypeData.h:133
	void Construct(uint8_t, float32_t, Vector3, Matrix44Affine, BrnPhysics::RWPhysicsTypeData::VolumeSpec *, BodyGroupSpec *);

	// BrnPhysicsRWTypeData.h:138
	void FixUp(const Resource &);

	// BrnPhysicsRWTypeData.h:143
	void FixDown(const Resource &);

	// BrnPhysicsRWTypeData.h:149
	void Refix(const void *, const void *);

}

// BrnPhysicsRWTypeData.h:198
struct BrnPhysics::RWPhysicsTypeData::JointDynamicsSpec {
	// BrnPhysicsRWTypeData.h:200
	uint8_t mJointType;

	// BrnPhysicsRWTypeData.h:201
	uint8_t mTwistType;

	// BrnPhysicsRWTypeData.h:202
	uint8_t mSwingType;

	// BrnPhysicsRWTypeData.h:204
	float32_t mTwistAngle;

	// BrnPhysicsRWTypeData.h:205
	float32_t mTwistOffset;

	// BrnPhysicsRWTypeData.h:206
	float32_t mSwingAngle;

	// BrnPhysicsRWTypeData.h:207
	float32_t mSwingOffset;

	// BrnPhysicsRWTypeData.h:209
	Vector3 mPositionLimit;

	// BrnPhysicsRWTypeData.h:210
	Vector3 mLinearFrame;

	// BrnPhysicsRWTypeData.h:212
	float32_t mLinearStressPlasticLimit;

	// BrnPhysicsRWTypeData.h:213
	float32_t mAngularStressPlasticLimit;

public:
	// BrnPhysicsRWTypeData.h:228
	void Construct(uint8_t, uint8_t, uint8_t, float32_t, float32_t, float32_t, float32_t, Vector3, Vector3, float32_t, float32_t);

	// BrnPhysicsRWTypeData.h:233
	void FixUp(const Resource &);

	// BrnPhysicsRWTypeData.h:238
	void FixDown(const Resource &);

	// BrnPhysicsRWTypeData.h:244
	void Refix(const void *, const void *);

}

// BrnPhysicsRWTypeData.h:269
struct BrnPhysics::RWPhysicsTypeData::DriveLinearDynamicsSpec {
	// BrnPhysicsRWTypeData.h:271
	uint8_t mType;

	// BrnPhysicsRWTypeData.h:274
	float32_t mLinearSpring;

	// BrnPhysicsRWTypeData.h:275
	float32_t mLinearMaxDisplacement;

	// BrnPhysicsRWTypeData.h:276
	float32_t mLinearDamping;

	// BrnPhysicsRWTypeData.h:277
	float32_t mLinearMaxStrength;

	// BrnPhysicsRWTypeData.h:279
	float32_t mLinearDistancePlasticLimit;

public:
	// BrnPhysicsRWTypeData.h:289
	void Construct(uint8_t, float32_t, float32_t, float32_t, float32_t, float32_t);

	// BrnPhysicsRWTypeData.h:294
	void FixUp(const Resource &);

	// BrnPhysicsRWTypeData.h:299
	void FixDown(const Resource &);

	// BrnPhysicsRWTypeData.h:305
	void Refix(const void *, const void *);

}

// BrnPhysicsRWTypeData.h:320
struct BrnPhysics::RWPhysicsTypeData::DriveAngularDynamicsSpec {
	// BrnPhysicsRWTypeData.h:322
	uint8_t mType;

	// BrnPhysicsRWTypeData.h:325
	float32_t mAngularSpring;

	// BrnPhysicsRWTypeData.h:326
	float32_t mAngularMaxDisplacement;

	// BrnPhysicsRWTypeData.h:327
	float32_t mAngularDamping;

	// BrnPhysicsRWTypeData.h:328
	float32_t mAngularMaxStrength;

	// BrnPhysicsRWTypeData.h:330
	float32_t mAngularDistancePlasticLimit;

public:
	// BrnPhysicsRWTypeData.h:340
	void Construct(uint8_t, float32_t, float32_t, float32_t, float32_t, float32_t);

	// BrnPhysicsRWTypeData.h:345
	void FixUp(const Resource &);

	// BrnPhysicsRWTypeData.h:350
	void FixDown(const Resource &);

	// BrnPhysicsRWTypeData.h:356
	void Refix(const void *, const void *);

}

// BrnPhysicsRWTypeData.h:371
struct BrnPhysics::RWPhysicsTypeData::JointSpec {
	// BrnPhysicsRWTypeData.h:373
	uint8_t muIndex;

	// BrnPhysicsRWTypeData.h:374
	Matrix44Affine mTransform;

	// BrnPhysicsRWTypeData.h:376
	BodySpec * mpParent;

	// BrnPhysicsRWTypeData.h:377
	BodySpec * mpChild;

	// BrnPhysicsRWTypeData.h:379
	JointDynamicsSpec * mpJointDynamicsSpec;

	// BrnPhysicsRWTypeData.h:380
	DriveLinearDynamicsSpec * mpDriveLinearDynamicsSpec;

	// BrnPhysicsRWTypeData.h:381
	DriveAngularDynamicsSpec * mpDriveAngularDynamicsSpec;

	// BrnPhysicsRWTypeData.h:383
	uint8_t mSpy;

public:
	// BrnPhysicsRWTypeData.h:395
	void Construct(uint8_t, Matrix44Affine, BodySpec *, BodySpec *, JointDynamicsSpec *, DriveLinearDynamicsSpec *, DriveAngularDynamicsSpec *, uint8_t);

	// BrnPhysicsRWTypeData.h:400
	void FixUp(const Resource &);

	// BrnPhysicsRWTypeData.h:405
	void FixDown(const Resource &);

	// BrnPhysicsRWTypeData.h:411
	void Refix(const void *, const void *);

}

// BrnPhysicsRWTypeData.h:425
struct BrnPhysics::RWPhysicsTypeData::VolumeSpec {
	// BrnPhysicsRWTypeData.h:437
	Matrix44Affine mTransform;

	// BrnPhysicsRWTypeData.h:438
	uint8_t muType;

	// BrnPhysicsRWTypeData.h:439
	uint8_t muIndex;

	// BrnPhysicsRWTypeData.h:443
	uint8_t[14] mauPad;

public:
	// BrnPhysicsRWTypeData.h:446
	Vector3 GetHalfExtent() const;

	// BrnPhysicsRWTypeData.h:453
	VolRef::Volume * GetInitialisedVolume(void *, uint32_t) const;

	// BrnPhysicsRWTypeData.h:461
	void Draw(CgsDev::Debug3DImmediateRender *, Matrix44Affine, RGBA) const;

}

// BrnPhysicsRWTypeData.h:468
struct BrnPhysics::RWPhysicsTypeData::BoxVolumeSpec : public VolumeSpec {
	// BrnPhysicsRWTypeData.h:470
	Vector3 mHalfDimensions;

public:
	// BrnPhysicsRWTypeData.h:477
	void Construct(uint8_t, Matrix44Affine, Vector3);

	// BrnPhysicsRWTypeData.h:482
	void FixUp(const Resource &);

	// BrnPhysicsRWTypeData.h:487
	void FixDown(const Resource &);

	// BrnPhysicsRWTypeData.h:493
	void Refix(const void *, const void *);

	// BrnPhysicsRWTypeData.h:496
	Vector3 GetHalfExtent() const;

	// BrnPhysicsRWTypeData.h:503
	VolRef::Volume * GetInitialisedVolume(void *, uint32_t) const;

	// BrnPhysicsRWTypeData.h:511
	void Draw(CgsDev::Debug3DImmediateRender *, Matrix44Affine, RGBA) const;

}

// BrnPhysicsRWTypeData.h:519
struct BrnPhysics::RWPhysicsTypeData::CapsuleVolumeSpec : public VolumeSpec {
	// BrnPhysicsRWTypeData.h:521
	float32_t mRadius;

	// BrnPhysicsRWTypeData.h:522
	float32_t mHalfHeight;

public:
	// BrnPhysicsRWTypeData.h:530
	void Construct(uint8_t, Matrix44Affine, float32_t, float32_t);

	// BrnPhysicsRWTypeData.h:535
	void FixUp(const Resource &);

	// BrnPhysicsRWTypeData.h:540
	void FixDown(const Resource &);

	// BrnPhysicsRWTypeData.h:546
	void Refix(const void *, const void *);

	// BrnPhysicsRWTypeData.h:549
	Vector3 GetHalfExtent() const;

	// BrnPhysicsRWTypeData.h:556
	VolRef::Volume * GetInitialisedVolume(void *, uint32_t) const;

	// BrnPhysicsRWTypeData.h:564
	void Draw(CgsDev::Debug3DImmediateRender *, Matrix44Affine, RGBA) const;

}

// BrnPhysicsRWTypeData.h:572
struct BrnPhysics::RWPhysicsTypeData::SphereVolumeSpec : public VolumeSpec {
	// BrnPhysicsRWTypeData.h:574
	float32_t mRadius;

public:
	// BrnPhysicsRWTypeData.h:581
	void Construct(uint8_t, Matrix44Affine, float32_t);

	// BrnPhysicsRWTypeData.h:586
	void FixUp(const Resource &);

	// BrnPhysicsRWTypeData.h:591
	void FixDown(const Resource &);

	// BrnPhysicsRWTypeData.h:597
	void Refix(const void *, const void *);

	// BrnPhysicsRWTypeData.h:600
	Vector3 GetHalfExtent() const;

	// BrnPhysicsRWTypeData.h:607
	VolRef::Volume * GetInitialisedVolume(void *, uint32_t) const;

	// BrnPhysicsRWTypeData.h:615
	void Draw(CgsDev::Debug3DImmediateRender *, Matrix44Affine, RGBA) const;

}

// BrnPhysicsRWTypeData.h:623
struct BrnPhysics::RWPhysicsTypeData::CylinderVolumeSpec : public VolumeSpec {
	// BrnPhysicsRWTypeData.h:625
	float32_t mRadius;

	// BrnPhysicsRWTypeData.h:626
	float32_t mHalfHeight;

public:
	// BrnPhysicsRWTypeData.h:634
	void Construct(uint8_t, Matrix44Affine, float32_t, float32_t);

	// BrnPhysicsRWTypeData.h:639
	void FixUp(const Resource &);

	// BrnPhysicsRWTypeData.h:644
	void FixDown(const Resource &);

	// BrnPhysicsRWTypeData.h:650
	void Refix(const void *, const void *);

	// BrnPhysicsRWTypeData.h:653
	Vector3 GetHalfExtent() const;

	// BrnPhysicsRWTypeData.h:660
	VolRef::Volume * GetInitialisedVolume(void *, uint32_t) const;

	// BrnPhysicsRWTypeData.h:668
	void Draw(CgsDev::Debug3DImmediateRender *, Matrix44Affine, RGBA) const;

}


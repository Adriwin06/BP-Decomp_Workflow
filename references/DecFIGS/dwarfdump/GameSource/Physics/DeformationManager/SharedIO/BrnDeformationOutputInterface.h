// Wheel.h:30
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnDeformationOutputInterface.h:72
		enum EGlassState {
			E_GLASS_STATE_INTACT = 0,
			E_GLASS_STATE_CRACKED = 1,
			E_GLASS_STATE_SMASHED = 2,
			NUM_GLASS_STATES = 3,
		}

	}

}

// BrnDeformationOutputInterface.h:65
struct BrnPhysics::Deformation::DetachedPartCurrentPositionEvent {
	// BrnDeformationOutputInterface.h:67
	Matrix44Affine mTransform;

	// BrnDeformationOutputInterface.h:68
	EntityId mVehicleEntityId;

	// BrnDeformationOutputInterface.h:69
	EBodyParts meType;

}

// BrnDeformationOutputInterface.h:82
struct BrnPhysics::Deformation::GlassSmashOrCrackEvent {
	// BrnDeformationOutputInterface.h:84
	Vector3[4] maCorners;

	// BrnDeformationOutputInterface.h:85
	Vector3 mNormal;

	// BrnDeformationOutputInterface.h:86
	Vector3 mLinearVelocity;

	// BrnDeformationOutputInterface.h:87
	Matrix44Affine mTransform;

	// BrnDeformationOutputInterface.h:88
	EntityId mVehicleEntityId;

	// BrnDeformationOutputInterface.h:89
	EBodyParts meGlassPart;

	// BrnDeformationOutputInterface.h:90
	BrnPhysics::Deformation::EGlassState meNewState;

	// BrnDeformationOutputInterface.h:91
	float32_t mfCrackAmount;

	// BrnDeformationOutputInterface.h:92
	bool mbDontPlaySmashEffect;

}

// BrnDeformationOutputInterface.h:101
struct BrnPhysics::Deformation::VehicleLocatorData {
	// BrnDeformationOutputInterface.h:103
	Matrix44Affine[1] maCameraLocators;

	// BrnDeformationOutputInterface.h:104
	BrnPhysics::Deformation::ETagPointType[1] maCameraLocatorTypes;

	// BrnDeformationOutputInterface.h:105
	int32_t miNumCameraLocators;

	// BrnDeformationOutputInterface.h:107
	Matrix44Affine[24] maLightLocators;

	// BrnDeformationOutputInterface.h:108
	BrnPhysics::Deformation::ETagPointType[24] maLightLocatorTypes;

	// BrnDeformationOutputInterface.h:109
	int32_t miNumLightLocators;

	// BrnDeformationOutputInterface.h:111
	Matrix44Affine[15] maGenericLocators;

	// BrnDeformationOutputInterface.h:112
	BrnPhysics::Deformation::ETagPointType[15] maGenericLocatorTypes;

	// BrnDeformationOutputInterface.h:113
	int32_t miNumGenericLocators;

}

// BrnDeformationOutputInterface.h:117
struct BrnPhysics::Deformation::VehicleLocatorOutput {
	// BrnDeformationOutputInterface.h:119
	EntityId mEntityId;

	// BrnDeformationOutputInterface.h:120
	const VehicleLocatorData * mpLocatorData;

}

// BrnDeformationOutputInterface.h:132
struct BrnPhysics::Deformation::DeformationOutputInterface {
private:
	// BrnDeformationOutputInterface.h:210
	EntityId[28] maBaseEntityIDs;

	// BrnDeformationOutputInterface.h:211
	const DeformationState * mpDeformationState;

	// Unknown accessibility
	// BrnDeformationOutputInterface.h:44
	typedef EventQueue<BrnPhysics::Deformation::JointedPartStateEvent,50> JointedPartStateQueue;

	// BrnDeformationOutputInterface.h:213
	DeformationOutputInterface::JointedPartStateQueue mJointedPartStateQueue;

	// Unknown accessibility
	// BrnDeformationOutputInterface.h:42
	typedef EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50> DetachedPartNotificationQueue;

	// BrnDeformationOutputInterface.h:214
	DeformationOutputInterface::DetachedPartNotificationQueue mDetachedPartNotificationQueue;

	// Unknown accessibility
	// BrnDeformationOutputInterface.h:40
	typedef EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10> BrokenJointNotificationQueue;

	// BrnDeformationOutputInterface.h:215
	DeformationOutputInterface::BrokenJointNotificationQueue mBrokenJointNotificationQueue;

	// Unknown accessibility
	// BrnDeformationOutputInterface.h:95
	typedef EventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent,50> DetachedPartCurrentPositionQueue;

	// BrnDeformationOutputInterface.h:216
	DeformationOutputInterface::DetachedPartCurrentPositionQueue mDetachedPartCurrentPositionQueue;

	// Unknown accessibility
	// BrnDeformationOutputInterface.h:97
	typedef EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20> GlassSmashOrCrackQueue;

	// BrnDeformationOutputInterface.h:217
	DeformationOutputInterface::GlassSmashOrCrackQueue mGlassSmashOrCrackQueue;

	// BrnDeformationOutputInterface.h:219
	int32_t miNumLocatorOutputs;

	// BrnDeformationOutputInterface.h:220
	VehicleLocatorOutput[28] maLocatorData;

public:
	// BrnDeformationOutputInterface.h:137
	DeformationOutputInterface & operator=(const DeformationOutputInterface &);

	// BrnDeformationOutputInterface.h:140
	void Append(const DeformationOutputInterface *);

	// BrnDeformationOutputInterface.h:143
	void Clear();

	// BrnDeformationOutputInterface.h:146
	void Construct();

	// BrnDeformationOutputInterface.h:150
	void AddBrokenJointNotification(BrokenJointNotificationEvent);

	// BrnDeformationOutputInterface.h:154
	void AddDetachedPartNotification(DetachedPartNotificationEvent);

	// BrnDeformationOutputInterface.h:158
	void AddDetachedPartPosition(DetachedPartCurrentPositionEvent);

	// BrnDeformationOutputInterface.h:162
	void AddJointedPartStateEvent(JointedPartStateEvent);

	// BrnDeformationOutputInterface.h:166
	void AddGlassSmashOrCrackEvent(GlassSmashOrCrackEvent &);

	// BrnDeformationOutputInterface.h:169
	const DeformationOutputInterface::BrokenJointNotificationQueue * GetBrokenJointNotificationQueue() const;

	// BrnDeformationOutputInterface.h:172
	const DeformationOutputInterface::DetachedPartNotificationQueue * GetDetachedPartNotificationQueue() const;

	// BrnDeformationOutputInterface.h:175
	const DeformationOutputInterface::JointedPartStateQueue * GetJointedPartStateQueue() const;

	// BrnDeformationOutputInterface.h:178
	const DeformationOutputInterface::GlassSmashOrCrackQueue * GetSmashOrCrackEventQueue() const;

	// BrnDeformationOutputInterface.h:181
	const DeformationState * GetDeformationState() const;

	// BrnDeformationOutputInterface.h:187
	void SetDeformationState(DeformationState *);

	// BrnDeformationOutputInterface.h:195
	void AddLocatorData(EntityId, const VehicleLocatorData *);

	// BrnDeformationOutputInterface.h:198
	int32_t GetNumLocatorOutputs() const;

	// BrnDeformationOutputInterface.h:202
	const VehicleLocatorOutput * GetLocatorData(int32_t) const;

}

// BrnDeformationOutputInterface.h:49
struct BrnPhysics::Deformation::SkinData {
	// BrnDeformationOutputInterface.h:51
	EntityId mEntityId;

	// BrnDeformationOutputInterface.h:52
	const rw::math::vpu::Vector3Plus * mpSkinOffsets_Scratch;

}

// BrnDeformationOutputInterface.h:56
struct BrnPhysics::Deformation::DetachedPartRenderEvent {
	// BrnDeformationOutputInterface.h:58
	Matrix44Affine mTransform;

	// BrnDeformationOutputInterface.h:59
	EntityId mVehicleEntityId;

	// BrnDeformationOutputInterface.h:60
	int32_t miPartIndex;

	// BrnDeformationOutputInterface.h:61
	bool mbIsAttached;

}

// BrnDeformationOutputInterface.h:233
struct BrnPhysics::Deformation::DeformationOutputInterfaceForEntityModules {
private:
	// BrnDeformationOutputInterface.h:316
	uint32_t muNumEntries;

	// BrnDeformationOutputInterface.h:317
	VolumeInstanceId[28] maBaseIDs;

	// BrnDeformationOutputInterface.h:318
	WheelPhysicalStates[28] maWheelStates;

	// BrnDeformationOutputInterface.h:321
	int32_t miNumSkinnedModels;

	// BrnDeformationOutputInterface.h:322
	SkinData[28] maSkinData;

	// BrnDeformationOutputInterface.h:324
	int32_t miNumLocatorOutputs;

	// BrnDeformationOutputInterface.h:325
	VehicleLocatorOutput[28] maLocatorData;

	// Unknown accessibility
	// BrnDeformationOutputInterface.h:96
	typedef EventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent,50> DetachedPartRenderQueue;

	// BrnDeformationOutputInterface.h:327
	DeformationOutputInterfaceForEntityModules::DetachedPartRenderQueue mDetachedPartRenderQueue;

	// BrnDeformationOutputInterface.h:328
	DeformationOutputInterface::GlassSmashOrCrackQueue mGlassSmashOrCrackQueue;

public:
	// BrnDeformationOutputInterface.h:238
	DeformationOutputInterfaceForEntityModules & operator=(const DeformationOutputInterfaceForEntityModules &);

	// BrnDeformationOutputInterface.h:241
	void Append(const DeformationOutputInterfaceForEntityModules *);

	// BrnDeformationOutputInterface.h:244
	void Clear();

	// BrnDeformationOutputInterface.h:247
	void Construct();

	// BrnDeformationOutputInterface.h:253
	void AddWheelStates(VolumeInstanceId, const WheelPhysicalStates &);

	// BrnDeformationOutputInterface.h:256
	const uint32_t GetNumEntries() const;

	// BrnDeformationOutputInterface.h:259
	const VolumeInstanceId * GetBaseIDs() const;

	// BrnDeformationOutputInterface.h:262
	const WheelPhysicalStates * GetWheelPhysicsStates() const;

	// BrnDeformationOutputInterface.h:267
	void AddSkinData(EntityId, const rw::math::vpu::Vector3Plus *);

	// BrnDeformationOutputInterface.h:270
	int32_t GetNumSkinnedModels() const;

	// BrnDeformationOutputInterface.h:274
	const SkinData * GetSkinData(int32_t) const;

	// BrnDeformationOutputInterface.h:283
	void AddLocatorData(EntityId, const VehicleLocatorData *);

	// BrnDeformationOutputInterface.h:286
	int32_t GetNumLocatorOutputs() const;

	// BrnDeformationOutputInterface.h:290
	const VehicleLocatorOutput * GetLocatorData(int32_t) const;

	// BrnDeformationOutputInterface.h:300
	void AddDetachedPartRenderEvent(EntityId, int32_t, Matrix44Affine);

	// BrnDeformationOutputInterface.h:304
	void AddGlassSmashOrCrackEvent(GlassSmashOrCrackEvent &);

	// BrnDeformationOutputInterface.h:307
	const DeformationOutputInterface::GlassSmashOrCrackQueue * GetSmashOrCrackEventQueue() const;

	// BrnDeformationOutputInterface.h:310
	const DeformationOutputInterfaceForEntityModules::DetachedPartRenderQueue & GetDetachedPartRenderQueue() const;

	// BrnDeformationOutputInterface.h:313
	DeformationOutputInterfaceForEntityModules::DetachedPartRenderQueue & GetDetachedPartRenderQueue();

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnDeformationOutputInterface.h:72
		enum EGlassState {
			E_GLASS_STATE_INTACT = 0,
			E_GLASS_STATE_CRACKED = 1,
			E_GLASS_STATE_SMASHED = 2,
			NUM_GLASS_STATES = 3,
		}

	}

}


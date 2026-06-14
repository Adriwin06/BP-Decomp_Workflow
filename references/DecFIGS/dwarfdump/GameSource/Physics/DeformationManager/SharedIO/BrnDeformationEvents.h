// Wheel.h:30
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnDeformationEvents.h:38
		const int32_t KI_SCENE_MAN_UPDATE_QUEUE_SIZE = 32768;

	}

}

// BrnDeformationEvents.h:137
struct BrnPhysics::Deformation::BrokenJointNotificationEvent {
	// BrnDeformationEvents.h:139
	Vector3 mPointOnA;

	// BrnDeformationEvents.h:140
	EntityId mVehicleId;

	// BrnDeformationEvents.h:141
	EBodyParts meType;

}

// BrnDeformationEvents.h:153
struct BrnPhysics::Deformation::DetachedPartNotificationEvent {
	// BrnDeformationEvents.h:155
	Vector3 mPointOnA;

	// BrnDeformationEvents.h:156
	EntityId mVehicleId;

	// BrnDeformationEvents.h:157
	EBodyParts meType;

}

// BrnDeformationEvents.h:169
struct BrnPhysics::Deformation::JointedPartStateEvent {
	// BrnDeformationEvents.h:171
	EntityId mVehicleId;

	// BrnDeformationEvents.h:172
	EBodyParts meType;

	// BrnDeformationEvents.h:173
	float32_t mfCurrentOrientation;

	// BrnDeformationEvents.h:174
	float32_t mfHingeVelocity;

}

// Wheel.h:30
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// Declaration
		struct WheelPhysicalStates {
			// BrnDeformationEvents.h:216
			struct WheelPhysicalState {
				// BrnDeformationEvents.h:218
				Matrix44Affine mWorldSpaceTransform;

				// BrnDeformationEvents.h:219
				Vector3 mWorldSpaceVelocity;

				// BrnDeformationEvents.h:220
				Vector3 mWorldSpaceAngularVelocity;

			}

		}

		// BrnDeformationEvents.h:38
		const int32_t KI_SCENE_MAN_UPDATE_QUEUE_SIZE = 32768;

	}

}

// BrnDeformationEvents.h:213
struct BrnPhysics::Deformation::WheelPhysicalStates {
	// BrnDeformationEvents.h:222
	BrnPhysics::Deformation::WheelPhysicalStates::WheelPhysicalState[4] maStates;

	// BrnDeformationEvents.h:223
	bool[4] mabWheelExists;

	// BrnDeformationEvents.h:224
	bool[4] mabWheelAttached;

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// BrnDeformationEvents.h:38
		const int32_t KI_SCENE_MAN_UPDATE_QUEUE_SIZE = 32768;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnDeformationResetType.h:28
	namespace Deformation {
		// Declaration
		struct WheelPhysicalStates {
			// BrnDeformationEvents.h:216
			struct WheelPhysicalState {
				// BrnDeformationEvents.h:218
				Matrix44Affine mWorldSpaceTransform;

				// BrnDeformationEvents.h:219
				Vector3 mWorldSpaceVelocity;

				// BrnDeformationEvents.h:220
				Vector3 mWorldSpaceAngularVelocity;

			}

		}

		// BrnDeformationEvents.h:38
		const int32_t KI_SCENE_MAN_UPDATE_QUEUE_SIZE = 32768;

	}

}

// BrnDeformationEvents.h:53
struct BrnPhysics::Deformation::AddDeformationModelEvent {
	// BrnDeformationEvents.h:55
	ResourceHandle mModelHandle;

	// BrnDeformationEvents.h:56
	RigidBodyId mHandlingBodyID;

	// BrnDeformationEvents.h:57
	EntityId mGlobalEntityId;

	// BrnDeformationEvents.h:58
	Vector3 mCOMOffset;

	// BrnDeformationEvents.h:59
	Matrix44Affine mInitialWorldSpaceTransform;

	// BrnDeformationEvents.h:60
	Vector3 mInitialWorldSpaceVelocity;

	// BrnDeformationEvents.h:61
	Vector3 mInitialWorldSpaceAngularVelocity;

	// BrnDeformationEvents.h:62
	BrnPhysics::Vehicle::VehiclePhysics * mpVehiclePhysics;

	// BrnDeformationEvents.h:63
	float32_t mfInitialDamageAmount;

	// BrnDeformationEvents.h:64
	BrnPhysics::Deformation::DeformationResetType meBaseDeformationType;

	// BrnDeformationEvents.h:65
	bool mbDoSweptSphereTests;

}

// BrnDeformationEvents.h:77
struct BrnPhysics::Deformation::RemoveDeformationModelEvent {
	// BrnDeformationEvents.h:79
	RigidBodyId mHandlingBodyID;

}

// BrnDeformationEvents.h:91
struct BrnPhysics::Deformation::DeactivateDeformationModelEvent {
	// BrnDeformationEvents.h:93
	RigidBodyId mHandlingBodyID;

	// BrnDeformationEvents.h:94
	float32_t mfInitialDamageAmount;

	// BrnDeformationEvents.h:95
	BrnPhysics::Deformation::DeformationResetType meDeformationResetType;

}

// BrnDeformationEvents.h:107
struct BrnPhysics::Deformation::SetModelCollisionEvent {
	// BrnDeformationEvents.h:109
	RigidBodyId mHandlingBodyID;

	// BrnDeformationEvents.h:110
	bool mbCollide;

}

// BrnDeformationEvents.h:122
struct BrnPhysics::Deformation::SetModelCullingGroupEvent {
	// BrnDeformationEvents.h:124
	RigidBodyId mHandlingBodyID;

	// BrnDeformationEvents.h:125
	InEventAddForCollision::CullingGroup mCullGroup;

}

// BrnDeformationEvents.h:122
struct BrnPhysics::Deformation::SetModelCullingGroupEvent {
	// BrnDeformationEvents.h:124
	RigidBodyId mHandlingBodyID;

	// BrnDeformationEvents.h:125
	SetRaceCarCullingGroupEvent::CullingGroup mCullGroup;

}


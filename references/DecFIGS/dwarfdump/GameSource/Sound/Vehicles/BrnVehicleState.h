// BrnSoundRootSharedIO.h:25
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
	}

}

// BrnPreUpdateSharedIo.h:31
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
	}

}

// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnVehicleState.h:27
		namespace Engines {
			// Declaration
			struct LoopModelResourceType {
			public:
				LoopModelResourceType();

			}

		}

	}

}

// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// Declaration
		struct VehicleState {
			// BrnVehicleState.h:48
			enum EEngineComponentType {
				E_ENGINE = 0,
				E_EXHAUST = 1,
				E_MAX_TYPES = 2,
			}

			// BrnVehicleState.h:137
			struct AttachInfo {
				// BrnVehicleState.h:149
				const VehicleListEntry * mpVehicleAsset;

				// BrnVehicleState.h:150
				int32_t miVehicleIndex;

				// BrnVehicleState.h:151
				CgsID mAssetID;

			public:
				// BrnVehicleState.h:143
				void Construct(CgsID, const VehicleListEntry *, int32_t);

				// BrnVehicleState.h:146
				void Clear();

			}

		}

		// BrnVehicleState.h:27
		namespace Engines {
			struct LoopModelData;

			struct Partial;

			struct Point;

			struct Graph;

			struct DualGinsuExhaustEffect;

			struct BoostEffect;

			struct WhineEffect;

			struct AIPhysicsControl;

			struct LoopModelEffect;

			struct SingleGinsuEffect;

			struct AIClutchControl;

			struct HybridEngineControl;

		}

		struct VehicleStateManager;

		struct PlayerVehicleStateManager;

		struct RightSide3dControl;

		struct LeftSide3dControl;

		struct Car3DControl;

		struct Exhaust3dControl;

		struct Engine3dControl;

		struct AIVehicleState;

		struct PlayerVehicleState;

	}

}

// BrnVehicleState.h:45
struct BrnSound::Vehicles::VehicleState : public BrnSound::Logic::BrnState {
protected:
	// BrnVehicleState.h:169
	VehicleData mVehiclePhysicsData;

	// BrnVehicleState.h:171
	BrnSound::Vehicles::VehicleState::AttachInfo mAttachInfo;

	// Unknown accessibility
	// BrnSoundLogicSharedIO.h:49
	typedef BoostOutputInfo BoostInfo;

	// BrnVehicleState.h:173
	VehicleState::BoostInfo mVehicleBoostInfo;

	// BrnVehicleState.h:175
	char[2][13] mcaEngineComponentName;

	// BrnVehicleState.h:176
	Attribute::Key[2] mEngineComponentKey;

	// BrnVehicleState.h:177
	float32_t mfMaxRpm;

private:
	// BrnVehicleState.h:181
	bool mbCollisionOccuredFlag;

	// BrnVehicleState.h:183
	DataPoint<bool> bIsRaceCarActive;

public:
	void VehicleState(const VehicleState &);

	// BrnVehicleState.cpp:44
	void VehicleState();

	// BrnVehicleState.h:207
	VehicleData * GetVehicleData();

	// BrnVehicleState.cpp:238
	virtual void Attach(void *);

	// BrnVehicleState.cpp:254
	virtual bool Detach();

	// BrnVehicleState.h:238
	const VehicleState::BoostInfo * GetBoostInfo() const;

	// BrnVehicleState.cpp:62
	virtual void UpdateParams(float32_t);

	// BrnVehicleState.h:191
	const char * GetEngineComponentName(BrnSound::Vehicles::VehicleState::EEngineComponentType) const;

	// BrnVehicleState.h:200
	Attribute::Key GetEngineComponentKey(BrnSound::Vehicles::VehicleState::EEngineComponentType) const;

	// BrnVehicleState.h:221
	Attribute::Key GetAttribKey() const;

	// BrnVehicleState.h:253
	uint8_t GetVehicleIndex();

	// BrnVehicleState.h:114
	float32_t GetMaxRPM() const;

	// BrnVehicleState.h:121
	void SetCollisionOccured(bool);

	// BrnVehicleState.h:127
	bool GetCollisionOccured() const;

	// BrnVehicleState.cpp:185
	virtual bool IsAttachedToThis(void *);

	// BrnVehicleState.h:156
	BrnSound::Vehicles::VehicleState::AttachInfo GetAttachInfo() const;

protected:
	// BrnVehicleState.cpp:208
	void Clear();

public:
	virtual void ~VehicleState();

}

// BrnVehicleState.h:45
void BrnSound::Vehicles::VehicleState::~VehicleState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


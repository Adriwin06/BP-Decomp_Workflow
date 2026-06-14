// BrnWorldRegion.h:27
namespace BrnWorld {
	// Declaration
	struct ActiveRaceCar {
		// BrnActiveRaceCar.h:132
		struct RenderParams {
		private:
			// BrnActiveRaceCar.h:468
			Matrix44Affine mBodyTransform;

			// BrnActiveRaceCar.h:469
			Vector3Plus[128] maVerletOffsets;

			// BrnActiveRaceCar.h:470
			Matrix44Affine[6] mWheelTransforms;

			// BrnActiveRaceCar.h:471
			Matrix44Affine[6] mWheelScaleTransforms;

			// BrnActiveRaceCar.h:472
			Vector3[4] maAxlePositions;

			// BrnActiveRaceCar.h:473
			Vector4 mPaintColour;

			// BrnActiveRaceCar.h:474
			Vector4 mPearlescentColour;

			// BrnActiveRaceCar.h:475
			Vector3[24] maLightLocatorPos;

			// BrnActiveRaceCar.h:476
			BrnPhysics::Deformation::ETagPointType[24] maLightLocatorType;

			// BrnActiveRaceCar.h:477
			bool[6] mabWheelExists;

			// BrnActiveRaceCar.h:478
			int32_t miNumLightLocators;

			// BrnActiveRaceCar.h:479
			float32_t[4] mafWheelAngularVelocities;

			// BrnActiveRaceCar.h:480
			float32_t mfDeformationSquared;

			// BrnActiveRaceCar.h:481
			BitArray<96u> mBodyPartVisibility;

			// Unknown accessibility
			// BrnActiveRaceCar.h:115
			typedef EventQueue<BrnWorld::DetachedPartRenderEvent,20> DetachedPartRenderQueue;

			// BrnActiveRaceCar.h:483
			BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue maDetachedParts;

			// BrnActiveRaceCar.h:485
			CgsGraphics::Model::State mLOD;

			// BrnActiveRaceCar.h:486
			bool mbDamaged;

			// BrnActiveRaceCar.h:487
			bool mbCrashing;

			// BrnActiveRaceCar.h:488
			bool mbIsEngineOff;

			// BrnActiveRaceCar.h:489
			bool mbIsBraking;

			// BrnActiveRaceCar.h:490
			bool mbIsReversing;

			// BrnActiveRaceCar.h:491
			bool mbIsIndicatingLeft;

			// BrnActiveRaceCar.h:492
			bool mbIsIndicatingRight;

			// BrnActiveRaceCar.h:493
			bool mbIsHidden;

			// BrnActiveRaceCar.h:496
			float32_t mfLightOpacityFlipFlop;

			// BrnActiveRaceCar.h:497
			float32_t mfLightSwitchTimeOut;

			// BrnActiveRaceCar.h:500
			bool mbBluesAndTwosCanSwitchState;

			// BrnActiveRaceCar.h:501
			bool mbBluesAndTwosActive;

			// BrnActiveRaceCar.h:504
			uint8_t mu8RenderDamageFlags;

			// BrnActiveRaceCar.h:506
			float32_t[8] mafCrackedGlassFractureAmount;

			// BrnActiveRaceCar.h:507
			float32_t[8] mafCrackedGlassEqualisationFactor;

			// BrnActiveRaceCar.h:508
			SmoothStep::Vector2[8] mavCrackedGlassScaleFactors;

		public:
			// BrnActiveRaceCar.h:138
			void Reset();

			// BrnActiveRaceCar.h:143
			void SetVerletOffset(uint32_t, Vector3Plus);

			// BrnActiveRaceCar.h:146
			const rw::math::vpu::Vector3Plus * GetVerletOffsets() const;

			// BrnActiveRaceCar.h:149
			Vector3Plus * GetVerletOffsets();

			// BrnActiveRaceCar.h:154
			void DEBUG_OverrideScratchAmount(float32_t);

			// BrnActiveRaceCar.h:162
			void SetWheelScale(uint32_t, Vector3);

			// BrnActiveRaceCar.h:166
			const rw::math::vpu::Matrix44Affine & GetWheelScaleMatrix(uint32_t) const;

			// BrnActiveRaceCar.h:170
			void ChangePartVisibility(uint8_t, bool);

			// BrnActiveRaceCar.h:174
			bool IsPartVisible(uint8_t) const;

			// BrnActiveRaceCar.h:178
			void MakeAllPartsVisible();

			// BrnActiveRaceCar.h:182
			void SetBodyTransform(Matrix44Affine);

			// BrnActiveRaceCar.h:186
			const rw::math::vpu::Matrix44Affine & GetBodyTransform() const;

			// BrnActiveRaceCar.h:190
			void SetWheelTransform(uint32_t, Matrix44Affine);

			// BrnActiveRaceCar.h:194
			const rw::math::vpu::Matrix44Affine & GetWheelTransform(uint32_t) const;

			// BrnActiveRaceCar.h:198
			void ResetTransforms();

			// BrnActiveRaceCar.h:204
			void SetAxlePosition(uint32_t, Vector3);

			// BrnActiveRaceCar.h:208
			const rw::math::vpu::Vector3 * GetAxlePosition(uint32_t) const;

			// BrnActiveRaceCar.h:212
			void ResetRenderDamageFlag();

			// BrnActiveRaceCar.h:215
			uint8_t GetRenderDamageFlag() const;

			// BrnActiveRaceCar.h:219
			void SetRenderDamageFlag(uint8_t);

			// BrnActiveRaceCar.h:223
			void SetCrashing(bool);

			// BrnActiveRaceCar.h:227
			bool GetCrashing() const;

			// BrnActiveRaceCar.h:231
			void SetDamaged(bool);

			// BrnActiveRaceCar.h:235
			bool IsDamaged() const;

			// BrnActiveRaceCar.h:239
			void SetEngineOff(bool);

			// BrnActiveRaceCar.h:243
			bool IsEngineOff() const;

			// BrnActiveRaceCar.h:247
			void SetBraking(bool);

			// BrnActiveRaceCar.h:251
			bool IsBraking() const;

			// BrnActiveRaceCar.h:255
			void SetReversing(bool);

			// BrnActiveRaceCar.h:259
			bool IsReversing() const;

			// BrnActiveRaceCar.h:263
			void SetIndicatingLeft(bool);

			// BrnActiveRaceCar.h:267
			bool IsIndicatingLeft() const;

			// BrnActiveRaceCar.h:271
			void SetIndicatingRight(bool);

			// BrnActiveRaceCar.h:275
			bool IsIndicatingRight() const;

			// BrnActiveRaceCar.h:279
			void SetRaceCarHidden(bool);

			// BrnActiveRaceCar.h:283
			bool IsRaceCarHidden() const;

			// BrnActiveRaceCar.h:286
			const BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue & GetDetachedPartQueue() const;

			// BrnActiveRaceCar.h:289
			BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue & GetDetachedPartQueue();

			// BrnActiveRaceCar.h:292
			const rw::math::vpu::Vector4 & GetPaintColour() const;

			// BrnActiveRaceCar.h:295
			const rw::math::vpu::Vector4 & GetPearlescentColour() const;

			// BrnActiveRaceCar.h:298
			void SetPaintColour(Vector4);

			// BrnActiveRaceCar.h:301
			void SetPearlescentColour(Vector4);

			// BrnActiveRaceCar.h:304
			void SetLOD(CgsGraphics::Model::State);

			// BrnActiveRaceCar.h:307
			CgsGraphics::Model::State GetLOD() const;

			// BrnActiveRaceCar.h:310
			float32_t * GetWheelAngularVelocities();

			// BrnActiveRaceCar.h:313
			const float32_t * GetWheelAngularVelocities() const;

			// BrnActiveRaceCar.h:317
			void SetDeformationSquared(float32_t);

			// BrnActiveRaceCar.h:320
			float32_t GetDeformationSquared() const;

			// BrnActiveRaceCar.h:323
			float32_t GetLightFlipFlopValue();

			// BrnActiveRaceCar.h:330
			bool GetArePoliceLightsActive();

			// BrnActiveRaceCar.h:339
			bool RequestBluesAndTwosStateSwitch(float, bool);

			// BrnActiveRaceCar.h:391
			void SetLightLocators(const VehicleLocatorData *);

			// BrnActiveRaceCar.h:394
			BrnPhysics::Deformation::ETagPointType GetLightLocatorType(uint32_t);

			// BrnActiveRaceCar.h:398
			Vector3 GetLightLocatorPos(uint32_t);

			// BrnActiveRaceCar.h:402
			uint32_t GetNumLightLocators();

			// BrnActiveRaceCar.h:406
			void SetWheelExists(uint32_t, bool);

			// BrnActiveRaceCar.h:410
			bool GetWheelExists(uint32_t) const;

			// BrnActiveRaceCar.h:416
			void SetCrackedGlassFractureAmountN(int, float32_t);

			// BrnActiveRaceCar.h:423
			void SetCrackedGlassEqualisationFactorN(int, float32_t);

			// BrnActiveRaceCar.h:430
			void SetCrackedGlassScaleFactorsN(int, const Vector2Template<float> &);

			// BrnActiveRaceCar.h:437
			float32_t GetCrackedGlassFractureAmountN(int) const;

			// BrnActiveRaceCar.h:444
			float32_t GetCrackedGlassEqualisationFactorN(int) const;

			// BrnActiveRaceCar.h:451
			SmoothStep::Vector2 GetCrackedGlassScaleFactorsN(int) const;

			// BrnActiveRaceCar.h:458
			void ResetCrackedGlassFractureAmounts();

		}

		// BrnActiveRaceCar.h:1009
		enum EOnlineState {
			E_ONLINE_STATE_CONNECTING = 0,
			E_ONLINE_STATE_NORMAL = 1,
			E_ONLINE_STATE_LOST_CONTACT = 2,
			E_ONLINE_STATE_DISCONNECTED = 3,
			E_ONLINE_STATE_COUNT = 4,
		}

	}

	// BrnActiveRaceCar.h:79
	enum ERaceStartState {
		E_RACE_START_STATE_ON_START_LINE = 0,
		E_RACE_START_STATE_ROLLING_START = 1,
		E_RACE_START_STATE_RACING = 2,
	}

	// BrnActiveRaceCar.h:58
	const uint32_t KU_MAX_BODY_PARTS_PER_RACE_CAR = 96;

	// BrnActiveRaceCar.h:60
	const uint32_t KU_MAX_GLASS_VOLUMES_PER_RACE_CAR = 12;

	// BrnActiveRaceCar.h:63
	const int32_t KI_MAX_BRAKE_COUNTER = 10;

	// BrnActiveRaceCar.h:68
	const uint8_t KU_GLASS_RENDERDAMAGEFLAG_DEFAULT;

	// BrnActiveRaceCar.h:70
	const float32_t KF_BLUESTWOS_FLASH_DURATION;

	// BrnActiveRaceCar.h:71
	const float32_t KF_BLUESTWOS_FLASH_HALF_DURATION;

	// BrnActiveRaceCar.h:72
	const float32_t KF_BLUESTWOS_ONE_OVER_FLASH_DURATION;

	// BrnActiveRaceCar.h:73
	const float32_t KF_BLUESTWOS_FLASH_TIMEOUT;

	// BrnActiveRaceCar.h:76
	const float32_t KF_EVENT_START_RESET_DEFER_TIME;

}

// BrnActiveRaceCar.h:101
struct BrnWorld::RaceCarCrashData {
	// BrnActiveRaceCar.h:103
	Matrix44Affine mInitialTransform;

	// BrnActiveRaceCar.h:104
	bool mbFirstCrash;

}

// BrnActiveRaceCar.h:108
struct BrnWorld::DetachedPartRenderEvent {
	// BrnActiveRaceCar.h:110
	Matrix44Affine mTransform;

	// BrnActiveRaceCar.h:111
	int32_t miPartIndex;

	// BrnActiveRaceCar.h:112
	bool mbIsAttached;

}

// BrnActiveRaceCar.h:126
struct BrnWorld::ActiveRaceCar {
private:
	// BrnActiveRaceCar.h:997
	extern const uint16_t KU_SCRATCH_PAD_SIZE = 256;

	// BrnActiveRaceCar.h:1019
	extern const int32_t KI_PREV_TRANSFORM_BUFFER_SIZE = 4;

	// BrnActiveRaceCar.h:1020
	extern const float32_t KF_PREV_TRANSFORM_MIN_DISTANCE;

	// Unknown accessibility
	// BrnActiveRaceCar.h:90
	typedef EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,8> AddRemoveNetworkCarForCollisionQueue;

	// BrnActiveRaceCar.h:1026
	ActiveRaceCar::AddRemoveNetworkCarForCollisionQueue mAddRemoveNetworkCarForCollisionQueue;

	// BrnActiveRaceCar.h:1030
	Matrix44Affine mCentreOfMassTransform;

	// BrnActiveRaceCar.h:1032
	ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> mDeformationModelResourcePtr;

	// BrnActiveRaceCar.h:1033
	ResourcePtr<BrnVehicle::GraphicsSpec> mGraphicsModelResourcePtr;

	// BrnActiveRaceCar.h:1035
	VolumeInstanceId mHandlingBodyVolumeId;

	// BrnActiveRaceCar.h:1036
	VolumeInstanceId mBaseDeformationID;

	// BrnActiveRaceCar.h:1037
	RaceCarState mPhysicsState;

	// BrnActiveRaceCar.h:1038
	RaceCarCrashData mCrashData;

	// BrnActiveRaceCar.h:1040
	FixedRingBuffer<rw::math::vpu::Matrix44Affine,4> mPrevTransforms;

	// BrnActiveRaceCar.h:1041
	Vector3 mLastRecordedPosition;

	// BrnActiveRaceCar.h:1043
	AxisAlignedBox mDeformedBBox;

	// BrnActiveRaceCar.h:1044
	VecFloat mvfLowestPointWorldSpace;

	// BrnActiveRaceCar.h:1046
	RaceCar * mpRaceCar;

	// BrnActiveRaceCar.h:1048
	Vector3 mDeferredResetPosition;

	// BrnActiveRaceCar.h:1049
	Vector3 mDeferredResetDirection;

	// BrnActiveRaceCar.h:1050
	float32_t mfDeferredResetTimer;

	// BrnActiveRaceCar.h:1052
	float32_t mfInvulnerablityTime;

	// BrnActiveRaceCar.h:1053
	float32_t mfTimeSinceCreation;

	// BrnActiveRaceCar.h:1054
	float32_t mfTimeDriveableInCrash;

	// BrnActiveRaceCar.h:1055
	bool mbDriveAwayCheckRequired;

	// BrnActiveRaceCar.h:1057
	float32_t mfTimeToStartLineBoostChange;

	// BrnActiveRaceCar.h:1058
	int32_t miBrakeChangeCounter;

	// BrnActiveRaceCar.h:1060
	uint16_t muPrevAISection;

	// BrnActiveRaceCar.h:1061
	uint16_t muCurrAISection;

	// BrnActiveRaceCar.h:1062
	uint8_t muState;

	// BrnActiveRaceCar.h:1063
	BrnWorld::ActiveRaceCar::EOnlineState meOnlineState;

	// BrnActiveRaceCar.h:1064
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnActiveRaceCar.h:1066
	Vector3 mCurrentInAirRotations;

	// BrnActiveRaceCar.h:1067
	float32_t mfTimeSinceLastStable;

	// BrnActiveRaceCar.h:1068
	bool mbCurrentlyRotating;

	// BrnActiveRaceCar.h:1070
	BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState meEngineState;

	// BrnActiveRaceCar.h:1071
	float32_t mfEngineStateTime;

	// BrnActiveRaceCar.h:1072
	bool mbEnableEngineSwitchOff;

	// BrnActiveRaceCar.h:1074
	bool mbInsideAISectionSystem;

	// BrnActiveRaceCar.h:1075
	bool mbIsTouchingAnotherRaceCar;

	// BrnActiveRaceCar.h:1076
	bool mbIsTouchingPlayer;

	// BrnActiveRaceCar.h:1077
	bool mbIsTouchingWorld;

	// BrnActiveRaceCar.h:1078
	bool mbComingInRange;

	// BrnActiveRaceCar.h:1079
	bool mbIsJoiningGameMode;

	// BrnActiveRaceCar.h:1080
	bool mbIsInGameMode;

	// BrnActiveRaceCar.h:1081
	bool mbIsWaitingForDeferredReset;

	// BrnActiveRaceCar.h:1082
	bool mbCanDriveAwayFromCrash;

	// BrnActiveRaceCar.h:1084
	bool mbUncrashedThisFrame;

	// BrnActiveRaceCar.h:1085
	BrnWorld::ERaceStartState meRaceStartState;

	// BrnActiveRaceCar.h:1086
	bool mbIsDoingStartLineBoost;

	// BrnActiveRaceCar.h:1087
	bool mbAIToBeActivated;

	// BrnActiveRaceCar.h:1089
	bool mbIsWrecked;

	// BrnActiveRaceCar.h:1090
	bool mbCrashedIntoWater;

	// BrnActiveRaceCar.h:1091
	float32_t mfTimeInWater;

	// BrnActiveRaceCar.h:1092
	bool mbIsInShowtime;

	// BrnActiveRaceCar.h:1093
	bool mbTakenDown;

	// BrnActiveRaceCar.h:1095
	bool mbAddedToScene;

	// BrnActiveRaceCar.h:1096
	bool mbAddedForCollision;

	// BrnActiveRaceCar.h:1097
	bool mbWonLastEvent;

	// BrnActiveRaceCar.h:1099
	bool mbChangeCollisionState;

	// BrnActiveRaceCar.h:1100
	bool mbCollisionStateToChangeTo;

	// BrnActiveRaceCar.h:1101
	bool mbChangeCullingGroup;

	// BrnActiveRaceCar.h:1102
	InEventAddForCollision::CullingGroup mCullingGrouptoChangeTo;

	// BrnActiveRaceCar.h:1104
	int32_t miFlashFrequency;

	// BrnActiveRaceCar.h:1105
	bool mbNotSendingNetworkUpdates;

	// BrnActiveRaceCar.h:1106
	bool mbIsDisconnectedFromNetwork;

	// BrnActiveRaceCar.h:1107
	bool mbIsInCarSelectOnline;

	// BrnActiveRaceCar.h:1108
	bool mbCarSelectOnlineStateChanged;

	// BrnActiveRaceCar.h:1109
	bool mbReceivedNetworkDriverControls;

	// BrnActiveRaceCar.h:1110
	bool mbRenderThisFrame;

	// BrnActiveRaceCar.h:1113
	Vector3 mPlaceOnTrackPosition;

	// BrnActiveRaceCar.h:1114
	Vector3 mPlaceOnTrackDirection;

	// BrnActiveRaceCar.h:1115
	float32_t mfPlaceOnTrackSpeed;

	// BrnActiveRaceCar.h:1116
	bool mbToBePlacedOnTrack;

	// BrnActiveRaceCar.h:1118
	BrnPhysics::Deformation::DeformationResetType meBaseDeformationType;

	// BrnActiveRaceCar.h:1119
	float32_t mfBaseDeformAmount;

	// BrnActiveRaceCar.h:1122
	InEventAddForCollision::CullingGroup mCurrentCullingGroup;

	// BrnActiveRaceCar.h:1125
	BrnWorld::ActiveRaceCar::RenderParams mRenderParams;

	// BrnActiveRaceCar.h:1128
	int32_t miDefaultColourIndex;

	// BrnActiveRaceCar.h:1129
	int32_t miDefaultColourPalette;

	// BrnActiveRaceCar.h:1132
	float32_t mfIndicatorTime;

	// BrnActiveRaceCar.h:1133
	bool mbRightIndicatorActive;

	// BrnActiveRaceCar.h:1134
	bool mbLeftIndicatorActive;

public:
	// BrnActiveRaceCar.h:515
	void Construct(EActiveRaceCarIndex);

	// BrnActiveRaceCar.h:518
	bool Prepare();

	// BrnActiveRaceCar.h:535
	void Update(OutputBuffer_PrePhysics::GameEventQueue *, float32_t, float32_t, float32_t, float32_t, float32_t, bool, bool, bool, Random *, OutputBuffer_PreScene::VehicleInputInterface *, BrnGameState::GameStateModuleIO::EGameModeType, Vector2, Vector2);

	// BrnActiveRaceCar.h:542
	// Declaration
	void Update_PreScene(OutputBuffer_PreScene::SceneInputInterface *, OutputBuffer_PreScene::VehicleInputInterface *, OutputBuffer_PreScene::RaceCarAIInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnActiveRaceCar.cpp:456
		using namespace CgsDev::Message;

	}

	// BrnActiveRaceCar.h:547
	void UpdateBoundingBox(OutputBuffer_PreScene::SceneInputInterface *);

	// BrnActiveRaceCar.h:550
	void Release();

	// BrnActiveRaceCar.h:553
	void Destruct();

	// BrnActiveRaceCar.h:560
	void Attach(RaceCar *, bool);

	// BrnActiveRaceCar.h:569
	void OnResourcesLoaded(const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &, const ResourcePtr<BrnVehicle::GraphicsSpec> &, VehicleInputInterface *, Attribute::Key, Vector3);

	// BrnActiveRaceCar.h:579
	void Create(VehicleInputInterface *, Attribute::Key, Matrix44Affine, Vector3, bool, uint8_t);

	// BrnActiveRaceCar.h:584
	void OnResourcesInvalidated(VehicleInputInterface *);

	// BrnActiveRaceCar.h:591
	void OnResourcesValidated(VehicleInputInterface *, const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &, const ResourcePtr<BrnVehicle::GraphicsSpec> &);

	// BrnActiveRaceCar.h:600
	void OnHandlingModelAdded(OutputBuffer_PreScene::SceneInputInterface *, OutputBuffer_PreScene::VehicleInputInterface *, float32_t);

	// BrnActiveRaceCar.h:606
	void Detach(VehicleInputInterface *, OutputBuffer_PreScene::SceneInputInterface *);

	// BrnActiveRaceCar.h:612
	void SetRaceStartState(BrnWorld::ERaceStartState);

	// BrnActiveRaceCar.h:617
	void SetBraking(bool);

	// BrnActiveRaceCar.h:623
	void UpdatePhysicsState(const RaceCarState *, WorldMap2D *);

	// BrnActiveRaceCar.h:628
	void UpdateWheelPhysicsState(const WheelPhysicalStates &);

	// BrnActiveRaceCar.h:633
	void UpdateCarSelectStateOnline(bool);

	// BrnActiveRaceCar.h:638
	void SetAISection(uint32_t);

	// BrnActiveRaceCar.h:642
	void SetDisconnectedFromNetwork();

	// BrnActiveRaceCar.h:646
	void SetNotSendingNetworkUpdates(bool);

	// BrnActiveRaceCar.h:650
	bool HasValidAISection();

	// BrnActiveRaceCar.h:659
	// Declaration
	void OnCrash(bool, const RaceCarCrashEvent &, OutputBuffer_PreScene::SceneInputInterface *, bool, float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnActiveRaceCar.cpp:1000
		using namespace CgsDev::Message;

	}

	// BrnActiveRaceCar.h:664
	void CalcBodyTransform(Matrix44Affine *) const;

	// BrnActiveRaceCar.h:670
	void GetResetCoords(Vector3 *, Vector3 *) const;

	// BrnActiveRaceCar.h:675
	void ResetAfterCrash(bool);

	// BrnActiveRaceCar.h:681
	void SendSceneUpdatesPostPhysics(OutputBuffer_PreScene::SceneInputInterface *, OutputBuffer_PreScene::VehicleInputInterface *, float32_t);

	// BrnActiveRaceCar.h:685
	void UpdateResetTransform();

	// BrnActiveRaceCar.h:689
	Matrix44Affine GetTransform() const;

	// BrnActiveRaceCar.h:692
	Vector3 GetPosition() const;

	// BrnActiveRaceCar.h:695
	Vector3 GetDirection() const;

	// BrnActiveRaceCar.h:698
	Vector3 GetVelocity() const;

	// BrnActiveRaceCar.h:701
	EActiveRaceCarIndex GetActiveRaceCarIndex() const;

	// BrnActiveRaceCar.h:704
	Matrix44Affine GetCentreOfMassTransform() const;

	// BrnActiveRaceCar.h:707
	RaceCar * GetGlobalRaceCar() const;

	// BrnActiveRaceCar.h:710
	const RaceCarState * GetPhysicsState() const;

	// BrnActiveRaceCar.h:713
	const RaceCarCrashData * GetCrashData() const;

	// BrnActiveRaceCar.h:716
	VolumeInstanceId GetHandlingBodyVolumeId() const;

	// BrnActiveRaceCar.h:719
	uint16_t GetCurrentAISection() const;

	// BrnActiveRaceCar.h:722
	uint16_t GetPreviousAISection() const;

	// BrnActiveRaceCar.h:725
	bool IsInactive() const;

	// BrnActiveRaceCar.h:728
	bool IsAttached() const;

	// BrnActiveRaceCar.h:731
	bool IsInCurrentGameMode() const;

	// BrnActiveRaceCar.h:735
	void SetInCurrentGameMode(bool);

	// BrnActiveRaceCar.h:738
	bool IsWaitingForLoad() const;

	// BrnActiveRaceCar.h:741
	bool IsWaitingForReset() const;

	// BrnActiveRaceCar.h:744
	bool IsActive() const;

	// BrnActiveRaceCar.h:747
	bool IsPlayer() const;

	// BrnActiveRaceCar.h:754
	bool IsOnRaceStartState(BrnWorld::ERaceStartState) const;

	// BrnActiveRaceCar.h:757
	bool IsInAnyRaceStartState() const;

	// BrnActiveRaceCar.h:760
	bool AIToBeActivated() const;

	// BrnActiveRaceCar.h:763
	void ClearAIToBeActivated();

	// BrnActiveRaceCar.h:766
	bool IsDoingStartLineBoost() const;

	// BrnActiveRaceCar.h:769
	bool IsCrashing() const;

	// BrnActiveRaceCar.h:772
	bool IsUncrashedThisFrame() const;

	// BrnActiveRaceCar.h:775
	bool IsOutsideOfAISectionSystem() const;

	// BrnActiveRaceCar.h:778
	bool IsInvulnerable() const;

	// BrnActiveRaceCar.h:781
	bool IsDrifting() const;

	// BrnActiveRaceCar.h:784
	bool IsFrontRayOccluded() const;

	// BrnActiveRaceCar.h:787
	bool IsInAir() const;

	// BrnActiveRaceCar.h:790
	bool IsTouchingAnotherRaceCar() const;

	// BrnActiveRaceCar.h:793
	bool IsTouchingPlayer() const;

	// BrnActiveRaceCar.h:796
	bool IsTouchingWorld() const;

	// BrnActiveRaceCar.h:799
	bool IsComingInRange();

	// BrnActiveRaceCar.h:802
	bool IsJoiningGameMode();

	// BrnActiveRaceCar.h:805
	bool IsDisconnectedFromNetwork() const;

	// BrnActiveRaceCar.h:808
	bool IsNotSendingNetworkUpdates() const;

	// BrnActiveRaceCar.h:811
	bool IsEngineRunning() const;

	// BrnActiveRaceCar.h:814
	BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState GetEngineState();

	// BrnActiveRaceCar.h:817
	bool RenderThisFrame() const;

	// BrnActiveRaceCar.h:820
	ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> GetDeformationModelResourcePtr() const;

	// BrnActiveRaceCar.h:824
	bool ToBePlacedOnTrack() const;

	// BrnActiveRaceCar.h:827
	Vector3 GetPlaceOnTrackPosition() const;

	// BrnActiveRaceCar.h:830
	Vector3 GetPlaceOnTrackDirection() const;

	// BrnActiveRaceCar.h:833
	float32_t GetPlaceOnTrackSpeed() const;

	// BrnActiveRaceCar.h:836
	float32_t GetBaseDeformAmount() const;

	// BrnActiveRaceCar.h:840
	void SetBaseDeformAmount(float32_t);

	// BrnActiveRaceCar.h:844
	void SetInvulnerabilityTime(float32_t);

	// BrnActiveRaceCar.h:847
	BrnPhysics::Deformation::DeformationResetType GetBaseDeformationResetType() const;

	// BrnActiveRaceCar.h:851
	void SetDeformationResetType(BrnPhysics::Deformation::DeformationResetType);

	// BrnActiveRaceCar.h:854
	void SetTouchingAnotherRaceCar();

	// BrnActiveRaceCar.h:857
	void SetTouchingPlayer();

	// BrnActiveRaceCar.h:860
	void SetTouchingWorld();

	// BrnActiveRaceCar.h:864
	void SetComingInRange(bool);

	// BrnActiveRaceCar.h:868
	void SetJoiningGameMode(bool);

	// BrnActiveRaceCar.h:871
	int32_t GetDefaultColourIndex();

	// BrnActiveRaceCar.h:874
	int32_t GetDefaultPaletteIndex();

	// BrnActiveRaceCar.h:877
	const BrnWorld::ActiveRaceCar::RenderParams * GetRenderParams() const;

	// BrnActiveRaceCar.h:880
	BrnWorld::ActiveRaceCar::RenderParams * GetRenderParams();

	// BrnActiveRaceCar.h:886
	void RequestPlaceOnTrack(Vector3, Vector3, float32_t);

	// BrnActiveRaceCar.h:891
	void RequestDeferredPlaceOnTrack(Vector3, Vector3);

	// BrnActiveRaceCar.h:894
	void ClearPlaceOnTrack();

	// BrnActiveRaceCar.h:897
	void SetAsOnlineConnecting();

	// BrnActiveRaceCar.h:900
	bool IsOnlineConnecting() const;

	// BrnActiveRaceCar.h:903
	void SetReceivedNetworkDriverControls();

	// BrnActiveRaceCar.h:906
	void RenderDamaged();

	// BrnActiveRaceCar.h:909
	bool IsWrecked();

	// BrnActiveRaceCar.h:912
	bool HasCrashedIntoWater();

	// BrnActiveRaceCar.h:915
	bool CanDriveAwayFromCrash();

	// BrnActiveRaceCar.h:919
	void SetCanDriveAwayFromCrash(bool);

	// BrnActiveRaceCar.h:922
	bool IsInShowtime() const;

	// BrnActiveRaceCar.h:925
	bool IsDriveableAfterCrash();

	// BrnActiveRaceCar.h:928
	bool IsDeformationFixedAfterCrash();

	// BrnActiveRaceCar.h:931
	bool IsCarAbleToDrive();

	// BrnActiveRaceCar.h:934
	void SetWrecked();

	// BrnActiveRaceCar.h:937
	void SetCrashedIntoWater();

	// BrnActiveRaceCar.h:940
	float32_t GetTimeInWater();

	// BrnActiveRaceCar.h:944
	void SetTimeInWater(float32_t);

	// BrnActiveRaceCar.h:948
	void SetInShowtime(bool);

	// BrnActiveRaceCar.h:952
	const AxisAlignedBox & GetDeformationBBox() const;

	// BrnActiveRaceCar.h:956
	const VecFloat GetLowestPointWorldSpace() const;

	// BrnActiveRaceCar.h:960
	void UpdateDeformationState(const DeformationState &);

	// BrnActiveRaceCar.h:963
	const rw::math::vpu::Vector3 GetInAirRotations() const;

	// BrnActiveRaceCar.h:966
	bool NeedsMovingToStartLine();

	// BrnActiveRaceCar.h:970
	void SetTakenDown(bool);

	// BrnActiveRaceCar.h:973
	bool IsTakenDown();

	// BrnActiveRaceCar.h:976
	bool GetWonLastEvent();

	// BrnActiveRaceCar.h:980
	void SetWonLastEvent(bool);

	// BrnActiveRaceCar.h:984
	void EnableEngineSwitchOff(bool);

	// BrnActiveRaceCar.h:989
	void SetIndicatorState(bool, bool);

	// BrnActiveRaceCar.h:992
	bool IsAddedForCollision() const;

private:
	// BrnActiveRaceCar.h:1138
	BoxVolume * GetPropCollisionBox(void *);

	// BrnActiveRaceCar.h:1141
	void ResetVerletOffsets();

	// BrnActiveRaceCar.h:1151
	void AddHandlingModel(VehicleInputInterface *, Attribute::Key, Matrix44Affine, Vector3, bool, uint8_t);

	// BrnActiveRaceCar.h:1156
	void RemoveHandlingModel(VehicleInputInterface *);

	// BrnActiveRaceCar.h:1161
	void InvalidateHandlingModel(VehicleInputInterface *);

	// BrnActiveRaceCar.h:1166
	void ValidateHandlingModel(VehicleInputInterface *);

	// BrnActiveRaceCar.h:1171
	void UpdateCullingGroup(OutputBuffer_PreScene::SceneInputInterface *);

	// BrnActiveRaceCar.h:1180
	void UpdateEngineState(float32_t, float32_t, float32_t, bool, bool);

	// BrnActiveRaceCar.h:1187
	void AddToScene(OutputBuffer_PreScene::SceneInputInterface *, OutputBuffer_PreScene::VehicleInputInterface *, float32_t);

	// BrnActiveRaceCar.h:1193
	void RemoveFromScene(OutputBuffer_PreScene::SceneInputInterface *, OutputBuffer_PreScene::VehicleInputInterface *);

	// BrnActiveRaceCar.h:1200
	// Declaration
	void AddToCollision(OutputBuffer_PreScene::SceneInputInterface *, OutputBuffer_PreScene::VehicleInputInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnActiveRaceCar.cpp:1401
		using namespace CgsDev::Message;

	}

	// BrnActiveRaceCar.h:1206
	// Declaration
	void RemoveFromCollision(OutputBuffer_PreScene::SceneInputInterface *, OutputBuffer_PreScene::VehicleInputInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnActiveRaceCar.cpp:1508
		using namespace CgsDev::Message;

	}

	// BrnActiveRaceCar.h:1210
	InEventAddForCollision::CullingGroup DetermineCullingGroup();

	// BrnActiveRaceCar.h:1214
	InEventAddForCollision::CullingGroup GetCullingGroup();

	// BrnActiveRaceCar.h:1219
	void SetCullingGroup(InEventAddForCollision::CullingGroup);

	// BrnActiveRaceCar.h:1223
	void UpdateLostContact();

	// BrnActiveRaceCar.h:1228
	void UpdateTimeSinceCreation(float32_t);

	// BrnActiveRaceCar.h:1233
	void CalculateWheelAngularVelocities(float32_t);

	// BrnActiveRaceCar.h:1237
	void ResetInAirRotations();

	// BrnActiveRaceCar.h:1242
	void UpdateInAirRotations(float32_t);

	// BrnActiveRaceCar.h:1247
	void UpdateIndicators(float32_t);

	// BrnActiveRaceCar.h:1252
	void SendAddedRemovedNetworkCarForCollisionEvents(OutputBuffer_PreScene::VehicleInputInterface *);

}

// BrnActiveRaceCar.h:997
extern const uint16_t KU_SCRATCH_PAD_SIZE = 256;

// BrnActiveRaceCar.h:1019
extern const int32_t KI_PREV_TRANSFORM_BUFFER_SIZE = 4;

// BrnCollisionTag.h:37
namespace BrnWorld {
	// Declaration
	struct ActiveRaceCar {
		// BrnActiveRaceCar.h:132
		struct RenderParams {
		private:
			// BrnActiveRaceCar.h:468
			Matrix44Affine mBodyTransform;

			// BrnActiveRaceCar.h:469
			Vector3Plus[128] maVerletOffsets;

			// BrnActiveRaceCar.h:470
			Matrix44Affine[6] mWheelTransforms;

			// BrnActiveRaceCar.h:471
			Matrix44Affine[6] mWheelScaleTransforms;

			// BrnActiveRaceCar.h:472
			Vector3[4] maAxlePositions;

			// BrnActiveRaceCar.h:473
			Vector4 mPaintColour;

			// BrnActiveRaceCar.h:474
			Vector4 mPearlescentColour;

			// BrnActiveRaceCar.h:475
			Vector3[24] maLightLocatorPos;

			// BrnActiveRaceCar.h:476
			BrnPhysics::Deformation::ETagPointType[24] maLightLocatorType;

			// BrnActiveRaceCar.h:477
			bool[6] mabWheelExists;

			// BrnActiveRaceCar.h:478
			int32_t miNumLightLocators;

			// BrnActiveRaceCar.h:479
			float32_t[4] mafWheelAngularVelocities;

			// BrnActiveRaceCar.h:480
			float32_t mfDeformationSquared;

			// BrnActiveRaceCar.h:481
			BitArray<96u> mBodyPartVisibility;

			// Unknown accessibility
			// BrnActiveRaceCar.h:115
			typedef EventQueue<BrnWorld::DetachedPartRenderEvent,20> DetachedPartRenderQueue;

			// BrnActiveRaceCar.h:483
			BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue maDetachedParts;

			// BrnActiveRaceCar.h:485
			CgsGraphics::Model::State mLOD;

			// BrnActiveRaceCar.h:486
			bool mbDamaged;

			// BrnActiveRaceCar.h:487
			bool mbCrashing;

			// BrnActiveRaceCar.h:488
			bool mbIsEngineOff;

			// BrnActiveRaceCar.h:489
			bool mbIsBraking;

			// BrnActiveRaceCar.h:490
			bool mbIsReversing;

			// BrnActiveRaceCar.h:491
			bool mbIsIndicatingLeft;

			// BrnActiveRaceCar.h:492
			bool mbIsIndicatingRight;

			// BrnActiveRaceCar.h:493
			bool mbIsHidden;

			// BrnActiveRaceCar.h:496
			float32_t mfLightOpacityFlipFlop;

			// BrnActiveRaceCar.h:497
			float32_t mfLightSwitchTimeOut;

			// BrnActiveRaceCar.h:500
			bool mbBluesAndTwosCanSwitchState;

			// BrnActiveRaceCar.h:501
			bool mbBluesAndTwosActive;

			// BrnActiveRaceCar.h:504
			uint8_t mu8RenderDamageFlags;

			// BrnActiveRaceCar.h:506
			float32_t[8] mafCrackedGlassFractureAmount;

			// BrnActiveRaceCar.h:507
			float32_t[8] mafCrackedGlassEqualisationFactor;

			// BrnActiveRaceCar.h:508
			Basic2dColouredVertex::Vector2[8] mavCrackedGlassScaleFactors;

		public:
			// BrnActiveRaceCar.h:138
			void Reset();

			// BrnActiveRaceCar.h:143
			void SetVerletOffset(uint32_t, Vector3Plus);

			// BrnActiveRaceCar.h:146
			const rw::math::vpu::Vector3Plus * GetVerletOffsets() const;

			// BrnActiveRaceCar.h:149
			Vector3Plus * GetVerletOffsets();

			// BrnActiveRaceCar.h:154
			void DEBUG_OverrideScratchAmount(float32_t);

			// BrnActiveRaceCar.h:162
			void SetWheelScale(uint32_t, Vector3);

			// BrnActiveRaceCar.h:166
			const rw::math::vpu::Matrix44Affine & GetWheelScaleMatrix(uint32_t) const;

			// BrnActiveRaceCar.h:170
			void ChangePartVisibility(uint8_t, bool);

			// BrnActiveRaceCar.h:174
			bool IsPartVisible(uint8_t) const;

			// BrnActiveRaceCar.h:178
			void MakeAllPartsVisible();

			// BrnActiveRaceCar.h:182
			void SetBodyTransform(Matrix44Affine);

			// BrnActiveRaceCar.h:186
			const rw::math::vpu::Matrix44Affine & GetBodyTransform() const;

			// BrnActiveRaceCar.h:190
			void SetWheelTransform(uint32_t, Matrix44Affine);

			// BrnActiveRaceCar.h:194
			const rw::math::vpu::Matrix44Affine & GetWheelTransform(uint32_t) const;

			// BrnActiveRaceCar.h:198
			void ResetTransforms();

			// BrnActiveRaceCar.h:204
			void SetAxlePosition(uint32_t, Vector3);

			// BrnActiveRaceCar.h:208
			const rw::math::vpu::Vector3 * GetAxlePosition(uint32_t) const;

			// BrnActiveRaceCar.h:212
			void ResetRenderDamageFlag();

			// BrnActiveRaceCar.h:215
			uint8_t GetRenderDamageFlag() const;

			// BrnActiveRaceCar.h:219
			void SetRenderDamageFlag(uint8_t);

			// BrnActiveRaceCar.h:223
			void SetCrashing(bool);

			// BrnActiveRaceCar.h:227
			bool GetCrashing() const;

			// BrnActiveRaceCar.h:231
			void SetDamaged(bool);

			// BrnActiveRaceCar.h:235
			bool IsDamaged() const;

			// BrnActiveRaceCar.h:239
			void SetEngineOff(bool);

			// BrnActiveRaceCar.h:243
			bool IsEngineOff() const;

			// BrnActiveRaceCar.h:247
			void SetBraking(bool);

			// BrnActiveRaceCar.h:251
			bool IsBraking() const;

			// BrnActiveRaceCar.h:255
			void SetReversing(bool);

			// BrnActiveRaceCar.h:259
			bool IsReversing() const;

			// BrnActiveRaceCar.h:263
			void SetIndicatingLeft(bool);

			// BrnActiveRaceCar.h:267
			bool IsIndicatingLeft() const;

			// BrnActiveRaceCar.h:271
			void SetIndicatingRight(bool);

			// BrnActiveRaceCar.h:275
			bool IsIndicatingRight() const;

			// BrnActiveRaceCar.h:279
			void SetRaceCarHidden(bool);

			// BrnActiveRaceCar.h:283
			bool IsRaceCarHidden() const;

			// BrnActiveRaceCar.h:286
			const BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue & GetDetachedPartQueue() const;

			// BrnActiveRaceCar.h:289
			BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue & GetDetachedPartQueue();

			// BrnActiveRaceCar.h:292
			const rw::math::vpu::Vector4 & GetPaintColour() const;

			// BrnActiveRaceCar.h:295
			const rw::math::vpu::Vector4 & GetPearlescentColour() const;

			// BrnActiveRaceCar.h:298
			void SetPaintColour(Vector4);

			// BrnActiveRaceCar.h:301
			void SetPearlescentColour(Vector4);

			// BrnActiveRaceCar.h:304
			void SetLOD(CgsGraphics::Model::State);

			// BrnActiveRaceCar.h:307
			CgsGraphics::Model::State GetLOD() const;

			// BrnActiveRaceCar.h:310
			float32_t * GetWheelAngularVelocities();

			// BrnActiveRaceCar.h:313
			const float32_t * GetWheelAngularVelocities() const;

			// BrnActiveRaceCar.h:317
			void SetDeformationSquared(float32_t);

			// BrnActiveRaceCar.h:320
			float32_t GetDeformationSquared() const;

			// BrnActiveRaceCar.h:323
			float32_t GetLightFlipFlopValue();

			// BrnActiveRaceCar.h:330
			bool GetArePoliceLightsActive();

			// BrnActiveRaceCar.h:339
			bool RequestBluesAndTwosStateSwitch(float, bool);

			// BrnActiveRaceCar.h:391
			void SetLightLocators(const VehicleLocatorData *);

			// BrnActiveRaceCar.h:394
			BrnPhysics::Deformation::ETagPointType GetLightLocatorType(uint32_t);

			// BrnActiveRaceCar.h:398
			Vector3 GetLightLocatorPos(uint32_t);

			// BrnActiveRaceCar.h:402
			uint32_t GetNumLightLocators();

			// BrnActiveRaceCar.h:406
			void SetWheelExists(uint32_t, bool);

			// BrnActiveRaceCar.h:410
			bool GetWheelExists(uint32_t) const;

			// BrnActiveRaceCar.h:416
			void SetCrackedGlassFractureAmountN(int, float32_t);

			// BrnActiveRaceCar.h:423
			void SetCrackedGlassEqualisationFactorN(int, float32_t);

			// BrnActiveRaceCar.h:430
			void SetCrackedGlassScaleFactorsN(int, const Vector2Template<float> &);

			// BrnActiveRaceCar.h:437
			float32_t GetCrackedGlassFractureAmountN(int) const;

			// BrnActiveRaceCar.h:444
			float32_t GetCrackedGlassEqualisationFactorN(int) const;

			// BrnActiveRaceCar.h:451
			Basic2dColouredVertex::Vector2 GetCrackedGlassScaleFactorsN(int) const;

			// BrnActiveRaceCar.h:458
			void ResetCrackedGlassFractureAmounts();

		}

		// BrnActiveRaceCar.h:1009
		enum EOnlineState {
			E_ONLINE_STATE_CONNECTING = 0,
			E_ONLINE_STATE_NORMAL = 1,
			E_ONLINE_STATE_LOST_CONTACT = 2,
			E_ONLINE_STATE_DISCONNECTED = 3,
			E_ONLINE_STATE_COUNT = 4,
		}

	}

	// BrnActiveRaceCar.h:79
	enum ERaceStartState {
		E_RACE_START_STATE_ON_START_LINE = 0,
		E_RACE_START_STATE_ROLLING_START = 1,
		E_RACE_START_STATE_RACING = 2,
	}

	// BrnActiveRaceCar.h:58
	const uint32_t KU_MAX_BODY_PARTS_PER_RACE_CAR = 96;

	// BrnActiveRaceCar.h:60
	const uint32_t KU_MAX_GLASS_VOLUMES_PER_RACE_CAR = 12;

	// BrnActiveRaceCar.h:63
	const int32_t KI_MAX_BRAKE_COUNTER = 10;

	// BrnActiveRaceCar.h:68
	const uint8_t KU_GLASS_RENDERDAMAGEFLAG_DEFAULT;

	// BrnActiveRaceCar.h:70
	const float32_t KF_BLUESTWOS_FLASH_DURATION;

	// BrnActiveRaceCar.h:71
	const float32_t KF_BLUESTWOS_FLASH_HALF_DURATION;

	// BrnActiveRaceCar.h:72
	const float32_t KF_BLUESTWOS_ONE_OVER_FLASH_DURATION;

	// BrnActiveRaceCar.h:73
	const float32_t KF_BLUESTWOS_FLASH_TIMEOUT;

	// BrnActiveRaceCar.h:76
	const float32_t KF_EVENT_START_RESET_DEFER_TIME;

}

// BrnActiveRaceCar.h:126
struct BrnWorld::ActiveRaceCar {
private:
	// BrnActiveRaceCar.h:997
	extern const uint16_t KU_SCRATCH_PAD_SIZE = 256;

	// BrnActiveRaceCar.h:1019
	extern const int32_t KI_PREV_TRANSFORM_BUFFER_SIZE = 4;

	// BrnActiveRaceCar.h:1020
	extern const float32_t KF_PREV_TRANSFORM_MIN_DISTANCE;

	// Unknown accessibility
	// BrnActiveRaceCar.h:90
	typedef EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,8> AddRemoveNetworkCarForCollisionQueue;

	// BrnActiveRaceCar.h:1026
	ActiveRaceCar::AddRemoveNetworkCarForCollisionQueue mAddRemoveNetworkCarForCollisionQueue;

	// BrnActiveRaceCar.h:1030
	Matrix44Affine mCentreOfMassTransform;

	// BrnActiveRaceCar.h:1032
	ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> mDeformationModelResourcePtr;

	// BrnActiveRaceCar.h:1033
	ResourcePtr<BrnVehicle::GraphicsSpec> mGraphicsModelResourcePtr;

	// BrnActiveRaceCar.h:1035
	VolumeInstanceId mHandlingBodyVolumeId;

	// BrnActiveRaceCar.h:1036
	VolumeInstanceId mBaseDeformationID;

	// BrnActiveRaceCar.h:1037
	RaceCarState mPhysicsState;

	// BrnActiveRaceCar.h:1038
	RaceCarCrashData mCrashData;

	// BrnActiveRaceCar.h:1040
	FixedRingBuffer<rw::math::vpu::Matrix44Affine,4> mPrevTransforms;

	// BrnActiveRaceCar.h:1041
	Vector3 mLastRecordedPosition;

	// BrnActiveRaceCar.h:1043
	AxisAlignedBox mDeformedBBox;

	// BrnActiveRaceCar.h:1044
	VecFloat mvfLowestPointWorldSpace;

	// BrnActiveRaceCar.h:1046
	RaceCar * mpRaceCar;

	// BrnActiveRaceCar.h:1048
	Vector3 mDeferredResetPosition;

	// BrnActiveRaceCar.h:1049
	Vector3 mDeferredResetDirection;

	// BrnActiveRaceCar.h:1050
	float32_t mfDeferredResetTimer;

	// BrnActiveRaceCar.h:1052
	float32_t mfInvulnerablityTime;

	// BrnActiveRaceCar.h:1053
	float32_t mfTimeSinceCreation;

	// BrnActiveRaceCar.h:1054
	float32_t mfTimeDriveableInCrash;

	// BrnActiveRaceCar.h:1055
	bool mbDriveAwayCheckRequired;

	// BrnActiveRaceCar.h:1057
	float32_t mfTimeToStartLineBoostChange;

	// BrnActiveRaceCar.h:1058
	int32_t miBrakeChangeCounter;

	// BrnActiveRaceCar.h:1060
	uint16_t muPrevAISection;

	// BrnActiveRaceCar.h:1061
	uint16_t muCurrAISection;

	// BrnActiveRaceCar.h:1062
	uint8_t muState;

	// BrnActiveRaceCar.h:1063
	BrnWorld::ActiveRaceCar::EOnlineState meOnlineState;

	// BrnActiveRaceCar.h:1064
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnActiveRaceCar.h:1066
	Vector3 mCurrentInAirRotations;

	// BrnActiveRaceCar.h:1067
	float32_t mfTimeSinceLastStable;

	// BrnActiveRaceCar.h:1068
	bool mbCurrentlyRotating;

	// BrnActiveRaceCar.h:1070
	BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState meEngineState;

	// BrnActiveRaceCar.h:1071
	float32_t mfEngineStateTime;

	// BrnActiveRaceCar.h:1072
	bool mbEnableEngineSwitchOff;

	// BrnActiveRaceCar.h:1074
	bool mbInsideAISectionSystem;

	// BrnActiveRaceCar.h:1075
	bool mbIsTouchingAnotherRaceCar;

	// BrnActiveRaceCar.h:1076
	bool mbIsTouchingPlayer;

	// BrnActiveRaceCar.h:1077
	bool mbIsTouchingWorld;

	// BrnActiveRaceCar.h:1078
	bool mbComingInRange;

	// BrnActiveRaceCar.h:1079
	bool mbIsJoiningGameMode;

	// BrnActiveRaceCar.h:1080
	bool mbIsInGameMode;

	// BrnActiveRaceCar.h:1081
	bool mbIsWaitingForDeferredReset;

	// BrnActiveRaceCar.h:1082
	bool mbCanDriveAwayFromCrash;

	// BrnActiveRaceCar.h:1084
	bool mbUncrashedThisFrame;

	// BrnActiveRaceCar.h:1085
	BrnWorld::ERaceStartState meRaceStartState;

	// BrnActiveRaceCar.h:1086
	bool mbIsDoingStartLineBoost;

	// BrnActiveRaceCar.h:1087
	bool mbAIToBeActivated;

	// BrnActiveRaceCar.h:1089
	bool mbIsWrecked;

	// BrnActiveRaceCar.h:1090
	bool mbCrashedIntoWater;

	// BrnActiveRaceCar.h:1091
	float32_t mfTimeInWater;

	// BrnActiveRaceCar.h:1092
	bool mbIsInShowtime;

	// BrnActiveRaceCar.h:1093
	bool mbTakenDown;

	// BrnActiveRaceCar.h:1095
	bool mbAddedToScene;

	// BrnActiveRaceCar.h:1096
	bool mbAddedForCollision;

	// BrnActiveRaceCar.h:1097
	bool mbWonLastEvent;

	// BrnActiveRaceCar.h:1099
	bool mbChangeCollisionState;

	// BrnActiveRaceCar.h:1100
	bool mbCollisionStateToChangeTo;

	// BrnActiveRaceCar.h:1101
	bool mbChangeCullingGroup;

	// BrnActiveRaceCar.h:1102
	SetRaceCarCullingGroupEvent::CullingGroup mCullingGrouptoChangeTo;

	// BrnActiveRaceCar.h:1104
	int32_t miFlashFrequency;

	// BrnActiveRaceCar.h:1105
	bool mbNotSendingNetworkUpdates;

	// BrnActiveRaceCar.h:1106
	bool mbIsDisconnectedFromNetwork;

	// BrnActiveRaceCar.h:1107
	bool mbIsInCarSelectOnline;

	// BrnActiveRaceCar.h:1108
	bool mbCarSelectOnlineStateChanged;

	// BrnActiveRaceCar.h:1109
	bool mbReceivedNetworkDriverControls;

	// BrnActiveRaceCar.h:1110
	bool mbRenderThisFrame;

	// BrnActiveRaceCar.h:1113
	Vector3 mPlaceOnTrackPosition;

	// BrnActiveRaceCar.h:1114
	Vector3 mPlaceOnTrackDirection;

	// BrnActiveRaceCar.h:1115
	float32_t mfPlaceOnTrackSpeed;

	// BrnActiveRaceCar.h:1116
	bool mbToBePlacedOnTrack;

	// BrnActiveRaceCar.h:1118
	BrnPhysics::Deformation::DeformationResetType meBaseDeformationType;

	// BrnActiveRaceCar.h:1119
	float32_t mfBaseDeformAmount;

	// BrnActiveRaceCar.h:1122
	SetRaceCarCullingGroupEvent::CullingGroup mCurrentCullingGroup;

	// BrnActiveRaceCar.h:1125
	BrnWorld::ActiveRaceCar::RenderParams mRenderParams;

	// BrnActiveRaceCar.h:1128
	int32_t miDefaultColourIndex;

	// BrnActiveRaceCar.h:1129
	int32_t miDefaultColourPalette;

	// BrnActiveRaceCar.h:1132
	float32_t mfIndicatorTime;

	// BrnActiveRaceCar.h:1133
	bool mbRightIndicatorActive;

	// BrnActiveRaceCar.h:1134
	bool mbLeftIndicatorActive;

public:
	// BrnActiveRaceCar.h:515
	void Construct(EActiveRaceCarIndex);

	// BrnActiveRaceCar.h:518
	bool Prepare();

	// BrnActiveRaceCar.h:535
	void Update(OutputBuffer_PrePhysics::GameEventQueue *, float32_t, float32_t, float32_t, float32_t, float32_t, bool, bool, bool, Random *, OutputBuffer_PreScene::VehicleInputInterface *, BrnGameState::GameStateModuleIO::EGameModeType, Vector2, Vector2);

	// BrnActiveRaceCar.h:542
	void Update_PreScene(OutputBuffer_PreScene::SceneInputInterface *, OutputBuffer_PreScene::VehicleInputInterface *, OutputBuffer_PreScene::RaceCarAIInterface *);

	// BrnActiveRaceCar.h:547
	void UpdateBoundingBox(OutputBuffer_PreScene::SceneInputInterface *);

	// BrnActiveRaceCar.h:550
	void Release();

	// BrnActiveRaceCar.h:553
	void Destruct();

	// BrnActiveRaceCar.h:560
	void Attach(RaceCar *, bool);

	// BrnActiveRaceCar.h:569
	void OnResourcesLoaded(const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &, const ResourcePtr<BrnVehicle::GraphicsSpec> &, VehicleInputInterface *, Attribute::Key, Vector3);

	// BrnActiveRaceCar.h:579
	void Create(VehicleInputInterface *, Attribute::Key, Matrix44Affine, Vector3, bool, uint8_t);

	// BrnActiveRaceCar.h:584
	void OnResourcesInvalidated(VehicleInputInterface *);

	// BrnActiveRaceCar.h:591
	void OnResourcesValidated(VehicleInputInterface *, const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &, const ResourcePtr<BrnVehicle::GraphicsSpec> &);

	// BrnActiveRaceCar.h:600
	void OnHandlingModelAdded(OutputBuffer_PreScene::SceneInputInterface *, OutputBuffer_PreScene::VehicleInputInterface *, float32_t);

	// BrnActiveRaceCar.h:606
	void Detach(VehicleInputInterface *, OutputBuffer_PreScene::SceneInputInterface *);

	// BrnActiveRaceCar.h:612
	void SetRaceStartState(BrnWorld::ERaceStartState);

	// BrnActiveRaceCar.h:617
	void SetBraking(bool);

	// BrnActiveRaceCar.h:623
	void UpdatePhysicsState(const RaceCarState *, WorldMap2D *);

	// BrnActiveRaceCar.h:628
	void UpdateWheelPhysicsState(const WheelPhysicalStates &);

	// BrnActiveRaceCar.h:633
	void UpdateCarSelectStateOnline(bool);

	// BrnActiveRaceCar.h:638
	void SetAISection(uint32_t);

	// BrnActiveRaceCar.h:642
	void SetDisconnectedFromNetwork();

	// BrnActiveRaceCar.h:646
	void SetNotSendingNetworkUpdates(bool);

	// BrnActiveRaceCar.h:650
	bool HasValidAISection();

	// BrnActiveRaceCar.h:659
	void OnCrash(bool, const RaceCarCrashEvent &, OutputBuffer_PreScene::SceneInputInterface *, bool, float32_t);

	// BrnActiveRaceCar.h:664
	void CalcBodyTransform(Matrix44Affine *) const;

	// BrnActiveRaceCar.h:670
	void GetResetCoords(Vector3 *, Vector3 *) const;

	// BrnActiveRaceCar.h:675
	void ResetAfterCrash(bool);

	// BrnActiveRaceCar.h:681
	void SendSceneUpdatesPostPhysics(OutputBuffer_PreScene::SceneInputInterface *, OutputBuffer_PreScene::VehicleInputInterface *, float32_t);

	// BrnActiveRaceCar.h:685
	void UpdateResetTransform();

	// BrnActiveRaceCar.h:689
	Matrix44Affine GetTransform() const;

	// BrnActiveRaceCar.h:692
	Vector3 GetPosition() const;

	// BrnActiveRaceCar.h:695
	Vector3 GetDirection() const;

	// BrnActiveRaceCar.h:698
	Vector3 GetVelocity() const;

	// BrnActiveRaceCar.h:701
	EActiveRaceCarIndex GetActiveRaceCarIndex() const;

	// BrnActiveRaceCar.h:704
	Matrix44Affine GetCentreOfMassTransform() const;

	// BrnActiveRaceCar.h:707
	RaceCar * GetGlobalRaceCar() const;

	// BrnActiveRaceCar.h:710
	const RaceCarState * GetPhysicsState() const;

	// BrnActiveRaceCar.h:713
	const RaceCarCrashData * GetCrashData() const;

	// BrnActiveRaceCar.h:716
	VolumeInstanceId GetHandlingBodyVolumeId() const;

	// BrnActiveRaceCar.h:719
	uint16_t GetCurrentAISection() const;

	// BrnActiveRaceCar.h:722
	uint16_t GetPreviousAISection() const;

	// BrnActiveRaceCar.h:725
	bool IsInactive() const;

	// BrnActiveRaceCar.h:728
	bool IsAttached() const;

	// BrnActiveRaceCar.h:731
	bool IsInCurrentGameMode() const;

	// BrnActiveRaceCar.h:735
	void SetInCurrentGameMode(bool);

	// BrnActiveRaceCar.h:738
	bool IsWaitingForLoad() const;

	// BrnActiveRaceCar.h:741
	bool IsWaitingForReset() const;

	// BrnActiveRaceCar.h:744
	bool IsActive() const;

	// BrnActiveRaceCar.h:747
	bool IsPlayer() const;

	// BrnActiveRaceCar.h:754
	bool IsOnRaceStartState(BrnWorld::ERaceStartState) const;

	// BrnActiveRaceCar.h:757
	bool IsInAnyRaceStartState() const;

	// BrnActiveRaceCar.h:760
	bool AIToBeActivated() const;

	// BrnActiveRaceCar.h:763
	void ClearAIToBeActivated();

	// BrnActiveRaceCar.h:766
	bool IsDoingStartLineBoost() const;

	// BrnActiveRaceCar.h:769
	bool IsCrashing() const;

	// BrnActiveRaceCar.h:772
	bool IsUncrashedThisFrame() const;

	// BrnActiveRaceCar.h:775
	bool IsOutsideOfAISectionSystem() const;

	// BrnActiveRaceCar.h:778
	bool IsInvulnerable() const;

	// BrnActiveRaceCar.h:781
	bool IsDrifting() const;

	// BrnActiveRaceCar.h:784
	bool IsFrontRayOccluded() const;

	// BrnActiveRaceCar.h:787
	bool IsInAir() const;

	// BrnActiveRaceCar.h:790
	bool IsTouchingAnotherRaceCar() const;

	// BrnActiveRaceCar.h:793
	bool IsTouchingPlayer() const;

	// BrnActiveRaceCar.h:796
	bool IsTouchingWorld() const;

	// BrnActiveRaceCar.h:799
	bool IsComingInRange();

	// BrnActiveRaceCar.h:802
	bool IsJoiningGameMode();

	// BrnActiveRaceCar.h:805
	bool IsDisconnectedFromNetwork() const;

	// BrnActiveRaceCar.h:808
	bool IsNotSendingNetworkUpdates() const;

	// BrnActiveRaceCar.h:811
	bool IsEngineRunning() const;

	// BrnActiveRaceCar.h:814
	BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState GetEngineState();

	// BrnActiveRaceCar.h:817
	bool RenderThisFrame() const;

	// BrnActiveRaceCar.h:820
	ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> GetDeformationModelResourcePtr() const;

	// BrnActiveRaceCar.h:824
	bool ToBePlacedOnTrack() const;

	// BrnActiveRaceCar.h:827
	Vector3 GetPlaceOnTrackPosition() const;

	// BrnActiveRaceCar.h:830
	Vector3 GetPlaceOnTrackDirection() const;

	// BrnActiveRaceCar.h:833
	float32_t GetPlaceOnTrackSpeed() const;

	// BrnActiveRaceCar.h:836
	float32_t GetBaseDeformAmount() const;

	// BrnActiveRaceCar.h:840
	void SetBaseDeformAmount(float32_t);

	// BrnActiveRaceCar.h:844
	void SetInvulnerabilityTime(float32_t);

	// BrnActiveRaceCar.h:847
	BrnPhysics::Deformation::DeformationResetType GetBaseDeformationResetType() const;

	// BrnActiveRaceCar.h:851
	void SetDeformationResetType(BrnPhysics::Deformation::DeformationResetType);

	// BrnActiveRaceCar.h:854
	void SetTouchingAnotherRaceCar();

	// BrnActiveRaceCar.h:857
	void SetTouchingPlayer();

	// BrnActiveRaceCar.h:860
	void SetTouchingWorld();

	// BrnActiveRaceCar.h:864
	void SetComingInRange(bool);

	// BrnActiveRaceCar.h:868
	void SetJoiningGameMode(bool);

	// BrnActiveRaceCar.h:871
	int32_t GetDefaultColourIndex();

	// BrnActiveRaceCar.h:874
	int32_t GetDefaultPaletteIndex();

	// BrnActiveRaceCar.h:877
	const BrnWorld::ActiveRaceCar::RenderParams * GetRenderParams() const;

	// BrnActiveRaceCar.h:880
	BrnWorld::ActiveRaceCar::RenderParams * GetRenderParams();

	// BrnActiveRaceCar.h:886
	void RequestPlaceOnTrack(Vector3, Vector3, float32_t);

	// BrnActiveRaceCar.h:891
	void RequestDeferredPlaceOnTrack(Vector3, Vector3);

	// BrnActiveRaceCar.h:894
	void ClearPlaceOnTrack();

	// BrnActiveRaceCar.h:897
	void SetAsOnlineConnecting();

	// BrnActiveRaceCar.h:900
	bool IsOnlineConnecting() const;

	// BrnActiveRaceCar.h:903
	void SetReceivedNetworkDriverControls();

	// BrnActiveRaceCar.h:906
	void RenderDamaged();

	// BrnActiveRaceCar.h:909
	bool IsWrecked();

	// BrnActiveRaceCar.h:912
	bool HasCrashedIntoWater();

	// BrnActiveRaceCar.h:915
	bool CanDriveAwayFromCrash();

	// BrnActiveRaceCar.h:919
	void SetCanDriveAwayFromCrash(bool);

	// BrnActiveRaceCar.h:922
	bool IsInShowtime() const;

	// BrnActiveRaceCar.h:925
	bool IsDriveableAfterCrash();

	// BrnActiveRaceCar.h:928
	bool IsDeformationFixedAfterCrash();

	// BrnActiveRaceCar.h:931
	bool IsCarAbleToDrive();

	// BrnActiveRaceCar.h:934
	void SetWrecked();

	// BrnActiveRaceCar.h:937
	void SetCrashedIntoWater();

	// BrnActiveRaceCar.h:940
	float32_t GetTimeInWater();

	// BrnActiveRaceCar.h:944
	void SetTimeInWater(float32_t);

	// BrnActiveRaceCar.h:948
	void SetInShowtime(bool);

	// BrnActiveRaceCar.h:952
	const AxisAlignedBox & GetDeformationBBox() const;

	// BrnActiveRaceCar.h:956
	const VecFloat GetLowestPointWorldSpace() const;

	// BrnActiveRaceCar.h:960
	void UpdateDeformationState(const DeformationState &);

	// BrnActiveRaceCar.h:963
	const rw::math::vpu::Vector3 GetInAirRotations() const;

	// BrnActiveRaceCar.h:966
	bool NeedsMovingToStartLine();

	// BrnActiveRaceCar.h:970
	void SetTakenDown(bool);

	// BrnActiveRaceCar.h:973
	bool IsTakenDown();

	// BrnActiveRaceCar.h:976
	bool GetWonLastEvent();

	// BrnActiveRaceCar.h:980
	void SetWonLastEvent(bool);

	// BrnActiveRaceCar.h:984
	void EnableEngineSwitchOff(bool);

	// BrnActiveRaceCar.h:989
	void SetIndicatorState(bool, bool);

	// BrnActiveRaceCar.h:992
	bool IsAddedForCollision() const;

private:
	// BrnActiveRaceCar.h:1138
	BoxVolume * GetPropCollisionBox(void *);

	// BrnActiveRaceCar.h:1141
	void ResetVerletOffsets();

	// BrnActiveRaceCar.h:1151
	void AddHandlingModel(VehicleInputInterface *, Attribute::Key, Matrix44Affine, Vector3, bool, uint8_t);

	// BrnActiveRaceCar.h:1156
	void RemoveHandlingModel(VehicleInputInterface *);

	// BrnActiveRaceCar.h:1161
	void InvalidateHandlingModel(VehicleInputInterface *);

	// BrnActiveRaceCar.h:1166
	void ValidateHandlingModel(VehicleInputInterface *);

	// BrnActiveRaceCar.h:1171
	void UpdateCullingGroup(OutputBuffer_PreScene::SceneInputInterface *);

	// BrnActiveRaceCar.h:1180
	void UpdateEngineState(float32_t, float32_t, float32_t, bool, bool);

	// BrnActiveRaceCar.h:1187
	void AddToScene(OutputBuffer_PreScene::SceneInputInterface *, OutputBuffer_PreScene::VehicleInputInterface *, float32_t);

	// BrnActiveRaceCar.h:1193
	void RemoveFromScene(OutputBuffer_PreScene::SceneInputInterface *, OutputBuffer_PreScene::VehicleInputInterface *);

	// BrnActiveRaceCar.h:1200
	void AddToCollision(OutputBuffer_PreScene::SceneInputInterface *, OutputBuffer_PreScene::VehicleInputInterface *);

	// BrnActiveRaceCar.h:1206
	void RemoveFromCollision(OutputBuffer_PreScene::SceneInputInterface *, OutputBuffer_PreScene::VehicleInputInterface *);

	// BrnActiveRaceCar.h:1210
	SetRaceCarCullingGroupEvent::CullingGroup DetermineCullingGroup();

	// BrnActiveRaceCar.h:1214
	SetRaceCarCullingGroupEvent::CullingGroup GetCullingGroup();

	// BrnActiveRaceCar.h:1219
	void SetCullingGroup(SetRaceCarCullingGroupEvent::CullingGroup);

	// BrnActiveRaceCar.h:1223
	void UpdateLostContact();

	// BrnActiveRaceCar.h:1228
	void UpdateTimeSinceCreation(float32_t);

	// BrnActiveRaceCar.h:1233
	void CalculateWheelAngularVelocities(float32_t);

	// BrnActiveRaceCar.h:1237
	void ResetInAirRotations();

	// BrnActiveRaceCar.h:1242
	void UpdateInAirRotations(float32_t);

	// BrnActiveRaceCar.h:1247
	void UpdateIndicators(float32_t);

	// BrnActiveRaceCar.h:1252
	void SendAddedRemovedNetworkCarForCollisionEvents(OutputBuffer_PreScene::VehicleInputInterface *);

}

// BrnActiveRaceCar.h:1020
extern const float32_t KF_PREV_TRANSFORM_MIN_DISTANCE;

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// Declaration
	struct ActiveRaceCar {
		// BrnActiveRaceCar.h:132
		struct RenderParams {
		private:
			// BrnActiveRaceCar.h:468
			Matrix44Affine mBodyTransform;

			// BrnActiveRaceCar.h:469
			Vector3Plus[128] maVerletOffsets;

			// BrnActiveRaceCar.h:470
			Matrix44Affine[6] mWheelTransforms;

			// BrnActiveRaceCar.h:471
			Matrix44Affine[6] mWheelScaleTransforms;

			// BrnActiveRaceCar.h:472
			Vector3[4] maAxlePositions;

			// BrnActiveRaceCar.h:473
			Vector4 mPaintColour;

			// BrnActiveRaceCar.h:474
			Vector4 mPearlescentColour;

			// BrnActiveRaceCar.h:475
			Vector3[24] maLightLocatorPos;

			// BrnActiveRaceCar.h:476
			BrnPhysics::Deformation::ETagPointType[24] maLightLocatorType;

			// BrnActiveRaceCar.h:477
			bool[6] mabWheelExists;

			// BrnActiveRaceCar.h:478
			int32_t miNumLightLocators;

			// BrnActiveRaceCar.h:479
			float32_t[4] mafWheelAngularVelocities;

			// BrnActiveRaceCar.h:480
			float32_t mfDeformationSquared;

			// BrnActiveRaceCar.h:481
			BitArray<96u> mBodyPartVisibility;

			// Unknown accessibility
			// BrnActiveRaceCar.h:115
			typedef EventQueue<BrnWorld::DetachedPartRenderEvent,20> DetachedPartRenderQueue;

			// BrnActiveRaceCar.h:483
			BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue maDetachedParts;

			// BrnActiveRaceCar.h:485
			CgsGraphics::Model::State mLOD;

			// BrnActiveRaceCar.h:486
			bool mbDamaged;

			// BrnActiveRaceCar.h:487
			bool mbCrashing;

			// BrnActiveRaceCar.h:488
			bool mbIsEngineOff;

			// BrnActiveRaceCar.h:489
			bool mbIsBraking;

			// BrnActiveRaceCar.h:490
			bool mbIsReversing;

			// BrnActiveRaceCar.h:491
			bool mbIsIndicatingLeft;

			// BrnActiveRaceCar.h:492
			bool mbIsIndicatingRight;

			// BrnActiveRaceCar.h:493
			bool mbIsHidden;

			// BrnActiveRaceCar.h:496
			float32_t mfLightOpacityFlipFlop;

			// BrnActiveRaceCar.h:497
			float32_t mfLightSwitchTimeOut;

			// BrnActiveRaceCar.h:500
			bool mbBluesAndTwosCanSwitchState;

			// BrnActiveRaceCar.h:501
			bool mbBluesAndTwosActive;

			// BrnActiveRaceCar.h:504
			uint8_t mu8RenderDamageFlags;

			// BrnActiveRaceCar.h:506
			float32_t[8] mafCrackedGlassFractureAmount;

			// BrnActiveRaceCar.h:507
			float32_t[8] mafCrackedGlassEqualisationFactor;

			// BrnActiveRaceCar.h:508
			Basic2dColouredVertex::Vector2[8] mavCrackedGlassScaleFactors;

		public:
			// BrnActiveRaceCar.h:138
			void Reset();

			// BrnActiveRaceCar.h:143
			void SetVerletOffset(uint32_t, Vector3Plus);

			// BrnActiveRaceCar.h:146
			const rw::math::vpu::Vector3Plus * GetVerletOffsets() const;

			// BrnActiveRaceCar.h:149
			Vector3Plus * GetVerletOffsets();

			// BrnActiveRaceCar.h:154
			void DEBUG_OverrideScratchAmount(float32_t);

			// BrnActiveRaceCar.h:162
			void SetWheelScale(uint32_t, Vector3);

			// BrnActiveRaceCar.h:166
			const rw::math::vpu::Matrix44Affine & GetWheelScaleMatrix(uint32_t) const;

			// BrnActiveRaceCar.h:170
			void ChangePartVisibility(uint8_t, bool);

			// BrnActiveRaceCar.h:174
			bool IsPartVisible(uint8_t) const;

			// BrnActiveRaceCar.h:178
			void MakeAllPartsVisible();

			// BrnActiveRaceCar.h:182
			void SetBodyTransform(Matrix44Affine);

			// BrnActiveRaceCar.h:186
			const rw::math::vpu::Matrix44Affine & GetBodyTransform() const;

			// BrnActiveRaceCar.h:190
			void SetWheelTransform(uint32_t, Matrix44Affine);

			// BrnActiveRaceCar.h:194
			const rw::math::vpu::Matrix44Affine & GetWheelTransform(uint32_t) const;

			// BrnActiveRaceCar.h:198
			void ResetTransforms();

			// BrnActiveRaceCar.h:204
			void SetAxlePosition(uint32_t, Vector3);

			// BrnActiveRaceCar.h:208
			const rw::math::vpu::Vector3 * GetAxlePosition(uint32_t) const;

			// BrnActiveRaceCar.h:212
			void ResetRenderDamageFlag();

			// BrnActiveRaceCar.h:215
			uint8_t GetRenderDamageFlag() const;

			// BrnActiveRaceCar.h:219
			void SetRenderDamageFlag(uint8_t);

			// BrnActiveRaceCar.h:223
			void SetCrashing(bool);

			// BrnActiveRaceCar.h:227
			bool GetCrashing() const;

			// BrnActiveRaceCar.h:231
			void SetDamaged(bool);

			// BrnActiveRaceCar.h:235
			bool IsDamaged() const;

			// BrnActiveRaceCar.h:239
			void SetEngineOff(bool);

			// BrnActiveRaceCar.h:243
			bool IsEngineOff() const;

			// BrnActiveRaceCar.h:247
			void SetBraking(bool);

			// BrnActiveRaceCar.h:251
			bool IsBraking() const;

			// BrnActiveRaceCar.h:255
			void SetReversing(bool);

			// BrnActiveRaceCar.h:259
			bool IsReversing() const;

			// BrnActiveRaceCar.h:263
			void SetIndicatingLeft(bool);

			// BrnActiveRaceCar.h:267
			bool IsIndicatingLeft() const;

			// BrnActiveRaceCar.h:271
			void SetIndicatingRight(bool);

			// BrnActiveRaceCar.h:275
			bool IsIndicatingRight() const;

			// BrnActiveRaceCar.h:279
			void SetRaceCarHidden(bool);

			// BrnActiveRaceCar.h:283
			bool IsRaceCarHidden() const;

			// BrnActiveRaceCar.h:286
			const BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue & GetDetachedPartQueue() const;

			// BrnActiveRaceCar.h:289
			BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue & GetDetachedPartQueue();

			// BrnActiveRaceCar.h:292
			const rw::math::vpu::Vector4 & GetPaintColour() const;

			// BrnActiveRaceCar.h:295
			const rw::math::vpu::Vector4 & GetPearlescentColour() const;

			// BrnActiveRaceCar.h:298
			void SetPaintColour(Vector4);

			// BrnActiveRaceCar.h:301
			void SetPearlescentColour(Vector4);

			// BrnActiveRaceCar.h:304
			void SetLOD(CgsGraphics::Model::State);

			// BrnActiveRaceCar.h:307
			CgsGraphics::Model::State GetLOD() const;

			// BrnActiveRaceCar.h:310
			float32_t * GetWheelAngularVelocities();

			// BrnActiveRaceCar.h:313
			const float32_t * GetWheelAngularVelocities() const;

			// BrnActiveRaceCar.h:317
			void SetDeformationSquared(float32_t);

			// BrnActiveRaceCar.h:320
			float32_t GetDeformationSquared() const;

			// BrnActiveRaceCar.h:323
			float32_t GetLightFlipFlopValue();

			// BrnActiveRaceCar.h:330
			bool GetArePoliceLightsActive();

			// BrnActiveRaceCar.h:339
			bool RequestBluesAndTwosStateSwitch(float, bool);

			// BrnActiveRaceCar.h:391
			void SetLightLocators(const VehicleLocatorData *);

			// BrnActiveRaceCar.h:394
			BrnPhysics::Deformation::ETagPointType GetLightLocatorType(uint32_t);

			// BrnActiveRaceCar.h:398
			Vector3 GetLightLocatorPos(uint32_t);

			// BrnActiveRaceCar.h:402
			uint32_t GetNumLightLocators();

			// BrnActiveRaceCar.h:406
			void SetWheelExists(uint32_t, bool);

			// BrnActiveRaceCar.h:410
			bool GetWheelExists(uint32_t) const;

			// BrnActiveRaceCar.h:416
			void SetCrackedGlassFractureAmountN(int, float32_t);

			// BrnActiveRaceCar.h:423
			void SetCrackedGlassEqualisationFactorN(int, float32_t);

			// BrnActiveRaceCar.h:430
			void SetCrackedGlassScaleFactorsN(int, const Vector2Template<float> &);

			// BrnActiveRaceCar.h:437
			float32_t GetCrackedGlassFractureAmountN(int) const;

			// BrnActiveRaceCar.h:444
			float32_t GetCrackedGlassEqualisationFactorN(int) const;

			// BrnActiveRaceCar.h:451
			Basic2dColouredVertex::Vector2 GetCrackedGlassScaleFactorsN(int) const;

			// BrnActiveRaceCar.h:458
			void ResetCrackedGlassFractureAmounts();

		}

		// BrnActiveRaceCar.h:1009
		enum EOnlineState {
			E_ONLINE_STATE_CONNECTING = 0,
			E_ONLINE_STATE_NORMAL = 1,
			E_ONLINE_STATE_LOST_CONTACT = 2,
			E_ONLINE_STATE_DISCONNECTED = 3,
			E_ONLINE_STATE_COUNT = 4,
		}

	}

	// BrnActiveRaceCar.h:79
	enum ERaceStartState {
		E_RACE_START_STATE_ON_START_LINE = 0,
		E_RACE_START_STATE_ROLLING_START = 1,
		E_RACE_START_STATE_RACING = 2,
	}

	// BrnActiveRaceCar.h:58
	const uint32_t KU_MAX_BODY_PARTS_PER_RACE_CAR = 96;

	// BrnActiveRaceCar.h:60
	const uint32_t KU_MAX_GLASS_VOLUMES_PER_RACE_CAR = 12;

	// BrnActiveRaceCar.h:63
	const int32_t KI_MAX_BRAKE_COUNTER = 10;

	// BrnActiveRaceCar.h:68
	const uint8_t KU_GLASS_RENDERDAMAGEFLAG_DEFAULT;

	// BrnActiveRaceCar.h:70
	const float32_t KF_BLUESTWOS_FLASH_DURATION;

	// BrnActiveRaceCar.h:71
	const float32_t KF_BLUESTWOS_FLASH_HALF_DURATION;

	// BrnActiveRaceCar.h:72
	const float32_t KF_BLUESTWOS_ONE_OVER_FLASH_DURATION;

	// BrnActiveRaceCar.h:73
	const float32_t KF_BLUESTWOS_FLASH_TIMEOUT;

	// BrnActiveRaceCar.h:76
	const float32_t KF_EVENT_START_RESET_DEFER_TIME;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// Declaration
	struct ActiveRaceCar {
		// BrnActiveRaceCar.h:132
		struct RenderParams {
		private:
			// BrnActiveRaceCar.h:468
			Matrix44Affine mBodyTransform;

			// BrnActiveRaceCar.h:469
			Vector3Plus[128] maVerletOffsets;

			// BrnActiveRaceCar.h:470
			Matrix44Affine[6] mWheelTransforms;

			// BrnActiveRaceCar.h:471
			Matrix44Affine[6] mWheelScaleTransforms;

			// BrnActiveRaceCar.h:472
			Vector3[4] maAxlePositions;

			// BrnActiveRaceCar.h:473
			Vector4 mPaintColour;

			// BrnActiveRaceCar.h:474
			Vector4 mPearlescentColour;

			// BrnActiveRaceCar.h:475
			Vector3[24] maLightLocatorPos;

			// BrnActiveRaceCar.h:476
			BrnPhysics::Deformation::ETagPointType[24] maLightLocatorType;

			// BrnActiveRaceCar.h:477
			bool[6] mabWheelExists;

			// BrnActiveRaceCar.h:478
			int32_t miNumLightLocators;

			// BrnActiveRaceCar.h:479
			float32_t[4] mafWheelAngularVelocities;

			// BrnActiveRaceCar.h:480
			float32_t mfDeformationSquared;

			// BrnActiveRaceCar.h:481
			BitArray<96u> mBodyPartVisibility;

			// Unknown accessibility
			// BrnActiveRaceCar.h:115
			typedef EventQueue<BrnWorld::DetachedPartRenderEvent,20> DetachedPartRenderQueue;

			// BrnActiveRaceCar.h:483
			BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue maDetachedParts;

			// BrnActiveRaceCar.h:485
			CgsGraphics::Model::State mLOD;

			// BrnActiveRaceCar.h:486
			bool mbDamaged;

			// BrnActiveRaceCar.h:487
			bool mbCrashing;

			// BrnActiveRaceCar.h:488
			bool mbIsEngineOff;

			// BrnActiveRaceCar.h:489
			bool mbIsBraking;

			// BrnActiveRaceCar.h:490
			bool mbIsReversing;

			// BrnActiveRaceCar.h:491
			bool mbIsIndicatingLeft;

			// BrnActiveRaceCar.h:492
			bool mbIsIndicatingRight;

			// BrnActiveRaceCar.h:493
			bool mbIsHidden;

			// BrnActiveRaceCar.h:496
			float32_t mfLightOpacityFlipFlop;

			// BrnActiveRaceCar.h:497
			float32_t mfLightSwitchTimeOut;

			// BrnActiveRaceCar.h:500
			bool mbBluesAndTwosCanSwitchState;

			// BrnActiveRaceCar.h:501
			bool mbBluesAndTwosActive;

			// BrnActiveRaceCar.h:504
			uint8_t mu8RenderDamageFlags;

			// BrnActiveRaceCar.h:506
			float32_t[8] mafCrackedGlassFractureAmount;

			// BrnActiveRaceCar.h:507
			float32_t[8] mafCrackedGlassEqualisationFactor;

			// BrnActiveRaceCar.h:508
			Basic2dColouredVertex::Vector2[8] mavCrackedGlassScaleFactors;

		public:
			// BrnActiveRaceCar.h:138
			void Reset();

			// BrnActiveRaceCar.h:143
			void SetVerletOffset(uint32_t, Vector3Plus);

			// BrnActiveRaceCar.h:146
			const rw::math::vpu::Vector3Plus * GetVerletOffsets() const;

			// BrnActiveRaceCar.h:149
			Vector3Plus * GetVerletOffsets();

			// BrnActiveRaceCar.h:154
			void DEBUG_OverrideScratchAmount(float32_t);

			// BrnActiveRaceCar.h:162
			void SetWheelScale(uint32_t, Vector3);

			// BrnActiveRaceCar.h:166
			const rw::math::vpu::Matrix44Affine & GetWheelScaleMatrix(uint32_t) const;

			// BrnActiveRaceCar.h:170
			void ChangePartVisibility(uint8_t, bool);

			// BrnActiveRaceCar.h:174
			bool IsPartVisible(uint8_t) const;

			// BrnActiveRaceCar.h:178
			void MakeAllPartsVisible();

			// BrnActiveRaceCar.h:182
			void SetBodyTransform(Matrix44Affine);

			// BrnActiveRaceCar.h:186
			const rw::math::vpu::Matrix44Affine & GetBodyTransform() const;

			// BrnActiveRaceCar.h:190
			void SetWheelTransform(uint32_t, Matrix44Affine);

			// BrnActiveRaceCar.h:194
			const rw::math::vpu::Matrix44Affine & GetWheelTransform(uint32_t) const;

			// BrnActiveRaceCar.h:198
			void ResetTransforms();

			// BrnActiveRaceCar.h:204
			void SetAxlePosition(uint32_t, Vector3);

			// BrnActiveRaceCar.h:208
			const rw::math::vpu::Vector3 * GetAxlePosition(uint32_t) const;

			// BrnActiveRaceCar.h:212
			void ResetRenderDamageFlag();

			// BrnActiveRaceCar.h:215
			uint8_t GetRenderDamageFlag() const;

			// BrnActiveRaceCar.h:219
			void SetRenderDamageFlag(uint8_t);

			// BrnActiveRaceCar.h:223
			void SetCrashing(bool);

			// BrnActiveRaceCar.h:227
			bool GetCrashing() const;

			// BrnActiveRaceCar.h:231
			void SetDamaged(bool);

			// BrnActiveRaceCar.h:235
			bool IsDamaged() const;

			// BrnActiveRaceCar.h:239
			void SetEngineOff(bool);

			// BrnActiveRaceCar.h:243
			bool IsEngineOff() const;

			// BrnActiveRaceCar.h:247
			void SetBraking(bool);

			// BrnActiveRaceCar.h:251
			bool IsBraking() const;

			// BrnActiveRaceCar.h:255
			void SetReversing(bool);

			// BrnActiveRaceCar.h:259
			bool IsReversing() const;

			// BrnActiveRaceCar.h:263
			void SetIndicatingLeft(bool);

			// BrnActiveRaceCar.h:267
			bool IsIndicatingLeft() const;

			// BrnActiveRaceCar.h:271
			void SetIndicatingRight(bool);

			// BrnActiveRaceCar.h:275
			bool IsIndicatingRight() const;

			// BrnActiveRaceCar.h:279
			void SetRaceCarHidden(bool);

			// BrnActiveRaceCar.h:283
			bool IsRaceCarHidden() const;

			// BrnActiveRaceCar.h:286
			const BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue & GetDetachedPartQueue() const;

			// BrnActiveRaceCar.h:289
			BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue & GetDetachedPartQueue();

			// BrnActiveRaceCar.h:292
			const rw::math::vpu::Vector4 & GetPaintColour() const;

			// BrnActiveRaceCar.h:295
			const rw::math::vpu::Vector4 & GetPearlescentColour() const;

			// BrnActiveRaceCar.h:298
			void SetPaintColour(Vector4);

			// BrnActiveRaceCar.h:301
			void SetPearlescentColour(Vector4);

			// BrnActiveRaceCar.h:304
			void SetLOD(CgsGraphics::Model::State);

			// BrnActiveRaceCar.h:307
			CgsGraphics::Model::State GetLOD() const;

			// BrnActiveRaceCar.h:310
			float32_t * GetWheelAngularVelocities();

			// BrnActiveRaceCar.h:313
			const float32_t * GetWheelAngularVelocities() const;

			// BrnActiveRaceCar.h:317
			void SetDeformationSquared(float32_t);

			// BrnActiveRaceCar.h:320
			float32_t GetDeformationSquared() const;

			// BrnActiveRaceCar.h:323
			float32_t GetLightFlipFlopValue();

			// BrnActiveRaceCar.h:330
			bool GetArePoliceLightsActive();

			// BrnActiveRaceCar.h:339
			bool RequestBluesAndTwosStateSwitch(float, bool);

			// BrnActiveRaceCar.h:391
			void SetLightLocators(const VehicleLocatorData *);

			// BrnActiveRaceCar.h:394
			BrnPhysics::Deformation::ETagPointType GetLightLocatorType(uint32_t);

			// BrnActiveRaceCar.h:398
			Vector3 GetLightLocatorPos(uint32_t);

			// BrnActiveRaceCar.h:402
			uint32_t GetNumLightLocators();

			// BrnActiveRaceCar.h:406
			void SetWheelExists(uint32_t, bool);

			// BrnActiveRaceCar.h:410
			bool GetWheelExists(uint32_t) const;

			// BrnActiveRaceCar.h:416
			void SetCrackedGlassFractureAmountN(int, float32_t);

			// BrnActiveRaceCar.h:423
			void SetCrackedGlassEqualisationFactorN(int, float32_t);

			// BrnActiveRaceCar.h:430
			void SetCrackedGlassScaleFactorsN(int, const Vector2Template<float> &);

			// BrnActiveRaceCar.h:437
			float32_t GetCrackedGlassFractureAmountN(int) const;

			// BrnActiveRaceCar.h:444
			float32_t GetCrackedGlassEqualisationFactorN(int) const;

			// BrnActiveRaceCar.h:451
			Basic2dColouredVertex::Vector2 GetCrackedGlassScaleFactorsN(int) const;

			// BrnActiveRaceCar.h:458
			void ResetCrackedGlassFractureAmounts();

		}

		// BrnActiveRaceCar.h:1009
		enum EOnlineState {
			E_ONLINE_STATE_CONNECTING = 0,
			E_ONLINE_STATE_NORMAL = 1,
			E_ONLINE_STATE_LOST_CONTACT = 2,
			E_ONLINE_STATE_DISCONNECTED = 3,
			E_ONLINE_STATE_COUNT = 4,
		}

	}

	// BrnActiveRaceCar.h:79
	enum ERaceStartState {
		E_RACE_START_STATE_ON_START_LINE = 0,
		E_RACE_START_STATE_ROLLING_START = 1,
		E_RACE_START_STATE_RACING = 2,
	}

	// BrnActiveRaceCar.h:58
	const uint32_t KU_MAX_BODY_PARTS_PER_RACE_CAR = 96;

	// BrnActiveRaceCar.h:60
	const uint32_t KU_MAX_GLASS_VOLUMES_PER_RACE_CAR = 12;

	// BrnActiveRaceCar.h:63
	const int32_t KI_MAX_BRAKE_COUNTER = 10;

	// BrnActiveRaceCar.h:68
	const uint8_t KU_GLASS_RENDERDAMAGEFLAG_DEFAULT;

	// BrnActiveRaceCar.h:70
	const float32_t KF_BLUESTWOS_FLASH_DURATION;

	// BrnActiveRaceCar.h:71
	const float32_t KF_BLUESTWOS_FLASH_HALF_DURATION;

	// BrnActiveRaceCar.h:72
	const float32_t KF_BLUESTWOS_ONE_OVER_FLASH_DURATION;

	// BrnActiveRaceCar.h:73
	const float32_t KF_BLUESTWOS_FLASH_TIMEOUT;

	// BrnActiveRaceCar.h:76
	const float32_t KF_EVENT_START_RESET_DEFER_TIME;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// Declaration
	struct ActiveRaceCar {
		// BrnActiveRaceCar.h:132
		struct RenderParams {
		private:
			// BrnActiveRaceCar.h:468
			Matrix44Affine mBodyTransform;

			// BrnActiveRaceCar.h:469
			Vector3Plus[128] maVerletOffsets;

			// BrnActiveRaceCar.h:470
			Matrix44Affine[6] mWheelTransforms;

			// BrnActiveRaceCar.h:471
			Matrix44Affine[6] mWheelScaleTransforms;

			// BrnActiveRaceCar.h:472
			Vector3[4] maAxlePositions;

			// BrnActiveRaceCar.h:473
			Vector4 mPaintColour;

			// BrnActiveRaceCar.h:474
			Vector4 mPearlescentColour;

			// BrnActiveRaceCar.h:475
			Vector3[24] maLightLocatorPos;

			// BrnActiveRaceCar.h:476
			BrnPhysics::Deformation::ETagPointType[24] maLightLocatorType;

			// BrnActiveRaceCar.h:477
			bool[6] mabWheelExists;

			// BrnActiveRaceCar.h:478
			int32_t miNumLightLocators;

			// BrnActiveRaceCar.h:479
			float32_t[4] mafWheelAngularVelocities;

			// BrnActiveRaceCar.h:480
			float32_t mfDeformationSquared;

			// BrnActiveRaceCar.h:481
			BitArray<96u> mBodyPartVisibility;

			// Unknown accessibility
			// BrnActiveRaceCar.h:115
			typedef EventQueue<BrnWorld::DetachedPartRenderEvent,20> DetachedPartRenderQueue;

			// BrnActiveRaceCar.h:483
			BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue maDetachedParts;

			// BrnActiveRaceCar.h:485
			CgsGraphics::Model::State mLOD;

			// BrnActiveRaceCar.h:486
			bool mbDamaged;

			// BrnActiveRaceCar.h:487
			bool mbCrashing;

			// BrnActiveRaceCar.h:488
			bool mbIsEngineOff;

			// BrnActiveRaceCar.h:489
			bool mbIsBraking;

			// BrnActiveRaceCar.h:490
			bool mbIsReversing;

			// BrnActiveRaceCar.h:491
			bool mbIsIndicatingLeft;

			// BrnActiveRaceCar.h:492
			bool mbIsIndicatingRight;

			// BrnActiveRaceCar.h:493
			bool mbIsHidden;

			// BrnActiveRaceCar.h:496
			float32_t mfLightOpacityFlipFlop;

			// BrnActiveRaceCar.h:497
			float32_t mfLightSwitchTimeOut;

			// BrnActiveRaceCar.h:500
			bool mbBluesAndTwosCanSwitchState;

			// BrnActiveRaceCar.h:501
			bool mbBluesAndTwosActive;

			// BrnActiveRaceCar.h:504
			uint8_t mu8RenderDamageFlags;

			// BrnActiveRaceCar.h:506
			float32_t[8] mafCrackedGlassFractureAmount;

			// BrnActiveRaceCar.h:507
			float32_t[8] mafCrackedGlassEqualisationFactor;

			// BrnActiveRaceCar.h:508
			SmoothStep::Vector2[8] mavCrackedGlassScaleFactors;

		public:
			// BrnActiveRaceCar.h:138
			void Reset();

			// BrnActiveRaceCar.h:143
			void SetVerletOffset(uint32_t, Vector3Plus);

			// BrnActiveRaceCar.h:146
			const rw::math::vpu::Vector3Plus * GetVerletOffsets() const;

			// BrnActiveRaceCar.h:149
			Vector3Plus * GetVerletOffsets();

			// BrnActiveRaceCar.h:154
			void DEBUG_OverrideScratchAmount(float32_t);

			// BrnActiveRaceCar.h:162
			void SetWheelScale(uint32_t, Vector3);

			// BrnActiveRaceCar.h:166
			const rw::math::vpu::Matrix44Affine & GetWheelScaleMatrix(uint32_t) const;

			// BrnActiveRaceCar.h:170
			void ChangePartVisibility(uint8_t, bool);

			// BrnActiveRaceCar.h:174
			bool IsPartVisible(uint8_t) const;

			// BrnActiveRaceCar.h:178
			void MakeAllPartsVisible();

			// BrnActiveRaceCar.h:182
			void SetBodyTransform(Matrix44Affine);

			// BrnActiveRaceCar.h:186
			const rw::math::vpu::Matrix44Affine & GetBodyTransform() const;

			// BrnActiveRaceCar.h:190
			void SetWheelTransform(uint32_t, Matrix44Affine);

			// BrnActiveRaceCar.h:194
			const rw::math::vpu::Matrix44Affine & GetWheelTransform(uint32_t) const;

			// BrnActiveRaceCar.h:198
			void ResetTransforms();

			// BrnActiveRaceCar.h:204
			void SetAxlePosition(uint32_t, Vector3);

			// BrnActiveRaceCar.h:208
			const rw::math::vpu::Vector3 * GetAxlePosition(uint32_t) const;

			// BrnActiveRaceCar.h:212
			void ResetRenderDamageFlag();

			// BrnActiveRaceCar.h:215
			uint8_t GetRenderDamageFlag() const;

			// BrnActiveRaceCar.h:219
			void SetRenderDamageFlag(uint8_t);

			// BrnActiveRaceCar.h:223
			void SetCrashing(bool);

			// BrnActiveRaceCar.h:227
			bool GetCrashing() const;

			// BrnActiveRaceCar.h:231
			void SetDamaged(bool);

			// BrnActiveRaceCar.h:235
			bool IsDamaged() const;

			// BrnActiveRaceCar.h:239
			void SetEngineOff(bool);

			// BrnActiveRaceCar.h:243
			bool IsEngineOff() const;

			// BrnActiveRaceCar.h:247
			void SetBraking(bool);

			// BrnActiveRaceCar.h:251
			bool IsBraking() const;

			// BrnActiveRaceCar.h:255
			void SetReversing(bool);

			// BrnActiveRaceCar.h:259
			bool IsReversing() const;

			// BrnActiveRaceCar.h:263
			void SetIndicatingLeft(bool);

			// BrnActiveRaceCar.h:267
			bool IsIndicatingLeft() const;

			// BrnActiveRaceCar.h:271
			void SetIndicatingRight(bool);

			// BrnActiveRaceCar.h:275
			bool IsIndicatingRight() const;

			// BrnActiveRaceCar.h:279
			void SetRaceCarHidden(bool);

			// BrnActiveRaceCar.h:283
			bool IsRaceCarHidden() const;

			// BrnActiveRaceCar.h:286
			const BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue & GetDetachedPartQueue() const;

			// BrnActiveRaceCar.h:289
			BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue & GetDetachedPartQueue();

			// BrnActiveRaceCar.h:292
			const rw::math::vpu::Vector4 & GetPaintColour() const;

			// BrnActiveRaceCar.h:295
			const rw::math::vpu::Vector4 & GetPearlescentColour() const;

			// BrnActiveRaceCar.h:298
			void SetPaintColour(Vector4);

			// BrnActiveRaceCar.h:301
			void SetPearlescentColour(Vector4);

			// BrnActiveRaceCar.h:304
			void SetLOD(CgsGraphics::Model::State);

			// BrnActiveRaceCar.h:307
			CgsGraphics::Model::State GetLOD() const;

			// BrnActiveRaceCar.h:310
			float32_t * GetWheelAngularVelocities();

			// BrnActiveRaceCar.h:313
			const float32_t * GetWheelAngularVelocities() const;

			// BrnActiveRaceCar.h:317
			void SetDeformationSquared(float32_t);

			// BrnActiveRaceCar.h:320
			float32_t GetDeformationSquared() const;

			// BrnActiveRaceCar.h:323
			float32_t GetLightFlipFlopValue();

			// BrnActiveRaceCar.h:330
			bool GetArePoliceLightsActive();

			// BrnActiveRaceCar.h:339
			bool RequestBluesAndTwosStateSwitch(float, bool);

			// BrnActiveRaceCar.h:391
			void SetLightLocators(const VehicleLocatorData *);

			// BrnActiveRaceCar.h:394
			BrnPhysics::Deformation::ETagPointType GetLightLocatorType(uint32_t);

			// BrnActiveRaceCar.h:398
			Vector3 GetLightLocatorPos(uint32_t);

			// BrnActiveRaceCar.h:402
			uint32_t GetNumLightLocators();

			// BrnActiveRaceCar.h:406
			void SetWheelExists(uint32_t, bool);

			// BrnActiveRaceCar.h:410
			bool GetWheelExists(uint32_t) const;

			// BrnActiveRaceCar.h:416
			void SetCrackedGlassFractureAmountN(int, float32_t);

			// BrnActiveRaceCar.h:423
			void SetCrackedGlassEqualisationFactorN(int, float32_t);

			// BrnActiveRaceCar.h:430
			void SetCrackedGlassScaleFactorsN(int, const Vector2Template<float> &);

			// BrnActiveRaceCar.h:437
			float32_t GetCrackedGlassFractureAmountN(int) const;

			// BrnActiveRaceCar.h:444
			float32_t GetCrackedGlassEqualisationFactorN(int) const;

			// BrnActiveRaceCar.h:451
			SmoothStep::Vector2 GetCrackedGlassScaleFactorsN(int) const;

			// BrnActiveRaceCar.h:458
			void ResetCrackedGlassFractureAmounts();

		}

		// BrnActiveRaceCar.h:1009
		enum EOnlineState {
			E_ONLINE_STATE_CONNECTING = 0,
			E_ONLINE_STATE_NORMAL = 1,
			E_ONLINE_STATE_LOST_CONTACT = 2,
			E_ONLINE_STATE_DISCONNECTED = 3,
			E_ONLINE_STATE_COUNT = 4,
		}

	}

	// BrnActiveRaceCar.h:79
	enum ERaceStartState {
		E_RACE_START_STATE_ON_START_LINE = 0,
		E_RACE_START_STATE_ROLLING_START = 1,
		E_RACE_START_STATE_RACING = 2,
	}

	// BrnActiveRaceCar.h:58
	const uint32_t KU_MAX_BODY_PARTS_PER_RACE_CAR = 96;

	// BrnActiveRaceCar.h:60
	const uint32_t KU_MAX_GLASS_VOLUMES_PER_RACE_CAR = 12;

	// BrnActiveRaceCar.h:63
	const int32_t KI_MAX_BRAKE_COUNTER = 10;

	// BrnActiveRaceCar.h:68
	const uint8_t KU_GLASS_RENDERDAMAGEFLAG_DEFAULT;

	// BrnActiveRaceCar.h:70
	const float32_t KF_BLUESTWOS_FLASH_DURATION;

	// BrnActiveRaceCar.h:71
	const float32_t KF_BLUESTWOS_FLASH_HALF_DURATION;

	// BrnActiveRaceCar.h:72
	const float32_t KF_BLUESTWOS_ONE_OVER_FLASH_DURATION;

	// BrnActiveRaceCar.h:73
	const float32_t KF_BLUESTWOS_FLASH_TIMEOUT;

	// BrnActiveRaceCar.h:76
	const float32_t KF_EVENT_START_RESET_DEFER_TIME;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// Declaration
	struct ActiveRaceCar {
		// BrnActiveRaceCar.h:132
		struct RenderParams {
		private:
			// BrnActiveRaceCar.h:468
			Matrix44Affine mBodyTransform;

			// BrnActiveRaceCar.h:469
			Vector3Plus[128] maVerletOffsets;

			// BrnActiveRaceCar.h:470
			Matrix44Affine[6] mWheelTransforms;

			// BrnActiveRaceCar.h:471
			Matrix44Affine[6] mWheelScaleTransforms;

			// BrnActiveRaceCar.h:472
			Vector3[4] maAxlePositions;

			// BrnActiveRaceCar.h:473
			Vector4 mPaintColour;

			// BrnActiveRaceCar.h:474
			Vector4 mPearlescentColour;

			// BrnActiveRaceCar.h:475
			Vector3[24] maLightLocatorPos;

			// BrnActiveRaceCar.h:476
			BrnPhysics::Deformation::ETagPointType[24] maLightLocatorType;

			// BrnActiveRaceCar.h:477
			bool[6] mabWheelExists;

			// BrnActiveRaceCar.h:478
			int32_t miNumLightLocators;

			// BrnActiveRaceCar.h:479
			float32_t[4] mafWheelAngularVelocities;

			// BrnActiveRaceCar.h:480
			float32_t mfDeformationSquared;

			// BrnActiveRaceCar.h:481
			BitArray<96u> mBodyPartVisibility;

			// Unknown accessibility
			// BrnActiveRaceCar.h:115
			typedef EventQueue<BrnWorld::DetachedPartRenderEvent,20> DetachedPartRenderQueue;

			// BrnActiveRaceCar.h:483
			BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue maDetachedParts;

			// BrnActiveRaceCar.h:485
			CgsGraphics::Model::State mLOD;

			// BrnActiveRaceCar.h:486
			bool mbDamaged;

			// BrnActiveRaceCar.h:487
			bool mbCrashing;

			// BrnActiveRaceCar.h:488
			bool mbIsEngineOff;

			// BrnActiveRaceCar.h:489
			bool mbIsBraking;

			// BrnActiveRaceCar.h:490
			bool mbIsReversing;

			// BrnActiveRaceCar.h:491
			bool mbIsIndicatingLeft;

			// BrnActiveRaceCar.h:492
			bool mbIsIndicatingRight;

			// BrnActiveRaceCar.h:493
			bool mbIsHidden;

			// BrnActiveRaceCar.h:496
			float32_t mfLightOpacityFlipFlop;

			// BrnActiveRaceCar.h:497
			float32_t mfLightSwitchTimeOut;

			// BrnActiveRaceCar.h:500
			bool mbBluesAndTwosCanSwitchState;

			// BrnActiveRaceCar.h:501
			bool mbBluesAndTwosActive;

			// BrnActiveRaceCar.h:504
			uint8_t mu8RenderDamageFlags;

			// BrnActiveRaceCar.h:506
			float32_t[8] mafCrackedGlassFractureAmount;

			// BrnActiveRaceCar.h:507
			float32_t[8] mafCrackedGlassEqualisationFactor;

			// BrnActiveRaceCar.h:508
			Basic2dColouredVertex::Vector2[8] mavCrackedGlassScaleFactors;

		public:
			// BrnActiveRaceCar.h:138
			void Reset();

			// BrnActiveRaceCar.h:143
			void SetVerletOffset(uint32_t, Vector3Plus);

			// BrnActiveRaceCar.h:146
			const rw::math::vpu::Vector3Plus * GetVerletOffsets() const;

			// BrnActiveRaceCar.h:149
			Vector3Plus * GetVerletOffsets();

			// BrnActiveRaceCar.h:154
			void DEBUG_OverrideScratchAmount(float32_t);

			// BrnActiveRaceCar.h:162
			void SetWheelScale(uint32_t, Vector3);

			// BrnActiveRaceCar.h:166
			const rw::math::vpu::Matrix44Affine & GetWheelScaleMatrix(uint32_t) const;

			// BrnActiveRaceCar.h:170
			void ChangePartVisibility(uint8_t, bool);

			// BrnActiveRaceCar.h:174
			bool IsPartVisible(uint8_t) const;

			// BrnActiveRaceCar.h:178
			void MakeAllPartsVisible();

			// BrnActiveRaceCar.h:182
			void SetBodyTransform(Matrix44Affine);

			// BrnActiveRaceCar.h:186
			const rw::math::vpu::Matrix44Affine & GetBodyTransform() const;

			// BrnActiveRaceCar.h:190
			void SetWheelTransform(uint32_t, Matrix44Affine);

			// BrnActiveRaceCar.h:194
			const rw::math::vpu::Matrix44Affine & GetWheelTransform(uint32_t) const;

			// BrnActiveRaceCar.h:198
			void ResetTransforms();

			// BrnActiveRaceCar.h:204
			void SetAxlePosition(uint32_t, Vector3);

			// BrnActiveRaceCar.h:208
			const rw::math::vpu::Vector3 * GetAxlePosition(uint32_t) const;

			// BrnActiveRaceCar.h:212
			void ResetRenderDamageFlag();

			// BrnActiveRaceCar.h:215
			uint8_t GetRenderDamageFlag() const;

			// BrnActiveRaceCar.h:219
			void SetRenderDamageFlag(uint8_t);

			// BrnActiveRaceCar.h:223
			void SetCrashing(bool);

			// BrnActiveRaceCar.h:227
			bool GetCrashing() const;

			// BrnActiveRaceCar.h:231
			void SetDamaged(bool);

			// BrnActiveRaceCar.h:235
			bool IsDamaged() const;

			// BrnActiveRaceCar.h:239
			void SetEngineOff(bool);

			// BrnActiveRaceCar.h:243
			bool IsEngineOff() const;

			// BrnActiveRaceCar.h:247
			void SetBraking(bool);

			// BrnActiveRaceCar.h:251
			bool IsBraking() const;

			// BrnActiveRaceCar.h:255
			void SetReversing(bool);

			// BrnActiveRaceCar.h:259
			bool IsReversing() const;

			// BrnActiveRaceCar.h:263
			void SetIndicatingLeft(bool);

			// BrnActiveRaceCar.h:267
			bool IsIndicatingLeft() const;

			// BrnActiveRaceCar.h:271
			void SetIndicatingRight(bool);

			// BrnActiveRaceCar.h:275
			bool IsIndicatingRight() const;

			// BrnActiveRaceCar.h:279
			void SetRaceCarHidden(bool);

			// BrnActiveRaceCar.h:283
			bool IsRaceCarHidden() const;

			// BrnActiveRaceCar.h:286
			const BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue & GetDetachedPartQueue() const;

			// BrnActiveRaceCar.h:289
			BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue & GetDetachedPartQueue();

			// BrnActiveRaceCar.h:292
			const rw::math::vpu::Vector4 & GetPaintColour() const;

			// BrnActiveRaceCar.h:295
			const rw::math::vpu::Vector4 & GetPearlescentColour() const;

			// BrnActiveRaceCar.h:298
			void SetPaintColour(Vector4);

			// BrnActiveRaceCar.h:301
			void SetPearlescentColour(Vector4);

			// BrnActiveRaceCar.h:304
			void SetLOD(CgsGraphics::Model::State);

			// BrnActiveRaceCar.h:307
			CgsGraphics::Model::State GetLOD() const;

			// BrnActiveRaceCar.h:310
			float32_t * GetWheelAngularVelocities();

			// BrnActiveRaceCar.h:313
			const float32_t * GetWheelAngularVelocities() const;

			// BrnActiveRaceCar.h:317
			void SetDeformationSquared(float32_t);

			// BrnActiveRaceCar.h:320
			float32_t GetDeformationSquared() const;

			// BrnActiveRaceCar.h:323
			float32_t GetLightFlipFlopValue();

			// BrnActiveRaceCar.h:330
			bool GetArePoliceLightsActive();

			// BrnActiveRaceCar.h:339
			bool RequestBluesAndTwosStateSwitch(float, bool);

			// BrnActiveRaceCar.h:391
			void SetLightLocators(const VehicleLocatorData *);

			// BrnActiveRaceCar.h:394
			BrnPhysics::Deformation::ETagPointType GetLightLocatorType(uint32_t);

			// BrnActiveRaceCar.h:398
			Vector3 GetLightLocatorPos(uint32_t);

			// BrnActiveRaceCar.h:402
			uint32_t GetNumLightLocators();

			// BrnActiveRaceCar.h:406
			void SetWheelExists(uint32_t, bool);

			// BrnActiveRaceCar.h:410
			bool GetWheelExists(uint32_t) const;

			// BrnActiveRaceCar.h:416
			void SetCrackedGlassFractureAmountN(int, float32_t);

			// BrnActiveRaceCar.h:423
			void SetCrackedGlassEqualisationFactorN(int, float32_t);

			// BrnActiveRaceCar.h:430
			void SetCrackedGlassScaleFactorsN(int, const Vector2Template<float> &);

			// BrnActiveRaceCar.h:437
			float32_t GetCrackedGlassFractureAmountN(int) const;

			// BrnActiveRaceCar.h:444
			float32_t GetCrackedGlassEqualisationFactorN(int) const;

			// BrnActiveRaceCar.h:451
			Basic2dColouredVertex::Vector2 GetCrackedGlassScaleFactorsN(int) const;

			// BrnActiveRaceCar.h:458
			void ResetCrackedGlassFractureAmounts();

		}

		// BrnActiveRaceCar.h:1009
		enum EOnlineState {
			E_ONLINE_STATE_CONNECTING = 0,
			E_ONLINE_STATE_NORMAL = 1,
			E_ONLINE_STATE_LOST_CONTACT = 2,
			E_ONLINE_STATE_DISCONNECTED = 3,
			E_ONLINE_STATE_COUNT = 4,
		}

	}

	// BrnActiveRaceCar.h:79
	enum ERaceStartState {
		E_RACE_START_STATE_ON_START_LINE = 0,
		E_RACE_START_STATE_ROLLING_START = 1,
		E_RACE_START_STATE_RACING = 2,
	}

	// BrnActiveRaceCar.h:58
	const uint32_t KU_MAX_BODY_PARTS_PER_RACE_CAR = 96;

	// BrnActiveRaceCar.h:60
	const uint32_t KU_MAX_GLASS_VOLUMES_PER_RACE_CAR = 12;

	// BrnActiveRaceCar.h:63
	const int32_t KI_MAX_BRAKE_COUNTER = 10;

	// BrnActiveRaceCar.h:68
	const uint8_t KU_GLASS_RENDERDAMAGEFLAG_DEFAULT;

	// BrnActiveRaceCar.h:70
	const float32_t KF_BLUESTWOS_FLASH_DURATION;

	// BrnActiveRaceCar.h:71
	const float32_t KF_BLUESTWOS_FLASH_HALF_DURATION;

	// BrnActiveRaceCar.h:72
	const float32_t KF_BLUESTWOS_ONE_OVER_FLASH_DURATION;

	// BrnActiveRaceCar.h:73
	const float32_t KF_BLUESTWOS_FLASH_TIMEOUT;

	// BrnActiveRaceCar.h:76
	const float32_t KF_EVENT_START_RESET_DEFER_TIME;

}

// BrnActiveRaceCar.h:126
struct BrnWorld::ActiveRaceCar {
private:
	// BrnActiveRaceCar.h:997
	extern const uint16_t KU_SCRATCH_PAD_SIZE = 256;

	// BrnActiveRaceCar.h:1019
	extern const int32_t KI_PREV_TRANSFORM_BUFFER_SIZE = 4;

	// BrnActiveRaceCar.h:1020
	extern const float32_t KF_PREV_TRANSFORM_MIN_DISTANCE;

	// Unknown accessibility
	// BrnActiveRaceCar.h:90
	typedef EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,8> AddRemoveNetworkCarForCollisionQueue;

	// BrnActiveRaceCar.h:1026
	ActiveRaceCar::AddRemoveNetworkCarForCollisionQueue mAddRemoveNetworkCarForCollisionQueue;

	// BrnActiveRaceCar.h:1030
	Matrix44Affine mCentreOfMassTransform;

	// BrnActiveRaceCar.h:1032
	ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> mDeformationModelResourcePtr;

	// BrnActiveRaceCar.h:1033
	ResourcePtr<BrnVehicle::GraphicsSpec> mGraphicsModelResourcePtr;

	// BrnActiveRaceCar.h:1035
	VolumeInstanceId mHandlingBodyVolumeId;

	// BrnActiveRaceCar.h:1036
	VolumeInstanceId mBaseDeformationID;

	// BrnActiveRaceCar.h:1037
	RaceCarState mPhysicsState;

	// BrnActiveRaceCar.h:1038
	RaceCarCrashData mCrashData;

	// BrnActiveRaceCar.h:1040
	FixedRingBuffer<rw::math::vpu::Matrix44Affine,4> mPrevTransforms;

	// BrnActiveRaceCar.h:1041
	Vector3 mLastRecordedPosition;

	// BrnActiveRaceCar.h:1043
	AxisAlignedBox mDeformedBBox;

	// BrnActiveRaceCar.h:1044
	VecFloat mvfLowestPointWorldSpace;

	// BrnActiveRaceCar.h:1046
	RaceCar * mpRaceCar;

	// BrnActiveRaceCar.h:1048
	Vector3 mDeferredResetPosition;

	// BrnActiveRaceCar.h:1049
	Vector3 mDeferredResetDirection;

	// BrnActiveRaceCar.h:1050
	float32_t mfDeferredResetTimer;

	// BrnActiveRaceCar.h:1052
	float32_t mfInvulnerablityTime;

	// BrnActiveRaceCar.h:1053
	float32_t mfTimeSinceCreation;

	// BrnActiveRaceCar.h:1054
	float32_t mfTimeDriveableInCrash;

	// BrnActiveRaceCar.h:1055
	bool mbDriveAwayCheckRequired;

	// BrnActiveRaceCar.h:1057
	float32_t mfTimeToStartLineBoostChange;

	// BrnActiveRaceCar.h:1058
	int32_t miBrakeChangeCounter;

	// BrnActiveRaceCar.h:1060
	uint16_t muPrevAISection;

	// BrnActiveRaceCar.h:1061
	uint16_t muCurrAISection;

	// BrnActiveRaceCar.h:1062
	uint8_t muState;

	// BrnActiveRaceCar.h:1063
	BrnWorld::ActiveRaceCar::EOnlineState meOnlineState;

	// BrnActiveRaceCar.h:1064
	EActiveRaceCarIndex meActiveRaceCarIndex;

	// BrnActiveRaceCar.h:1066
	Vector3 mCurrentInAirRotations;

	// BrnActiveRaceCar.h:1067
	float32_t mfTimeSinceLastStable;

	// BrnActiveRaceCar.h:1068
	bool mbCurrentlyRotating;

	// BrnActiveRaceCar.h:1070
	BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState meEngineState;

	// BrnActiveRaceCar.h:1071
	float32_t mfEngineStateTime;

	// BrnActiveRaceCar.h:1072
	bool mbEnableEngineSwitchOff;

	// BrnActiveRaceCar.h:1074
	bool mbInsideAISectionSystem;

	// BrnActiveRaceCar.h:1075
	bool mbIsTouchingAnotherRaceCar;

	// BrnActiveRaceCar.h:1076
	bool mbIsTouchingPlayer;

	// BrnActiveRaceCar.h:1077
	bool mbIsTouchingWorld;

	// BrnActiveRaceCar.h:1078
	bool mbComingInRange;

	// BrnActiveRaceCar.h:1079
	bool mbIsJoiningGameMode;

	// BrnActiveRaceCar.h:1080
	bool mbIsInGameMode;

	// BrnActiveRaceCar.h:1081
	bool mbIsWaitingForDeferredReset;

	// BrnActiveRaceCar.h:1082
	bool mbCanDriveAwayFromCrash;

	// BrnActiveRaceCar.h:1084
	bool mbUncrashedThisFrame;

	// BrnActiveRaceCar.h:1085
	BrnWorld::ERaceStartState meRaceStartState;

	// BrnActiveRaceCar.h:1086
	bool mbIsDoingStartLineBoost;

	// BrnActiveRaceCar.h:1087
	bool mbAIToBeActivated;

	// BrnActiveRaceCar.h:1089
	bool mbIsWrecked;

	// BrnActiveRaceCar.h:1090
	bool mbCrashedIntoWater;

	// BrnActiveRaceCar.h:1091
	float32_t mfTimeInWater;

	// BrnActiveRaceCar.h:1092
	bool mbIsInShowtime;

	// BrnActiveRaceCar.h:1093
	bool mbTakenDown;

	// BrnActiveRaceCar.h:1095
	bool mbAddedToScene;

	// BrnActiveRaceCar.h:1096
	bool mbAddedForCollision;

	// BrnActiveRaceCar.h:1097
	bool mbWonLastEvent;

	// BrnActiveRaceCar.h:1099
	bool mbChangeCollisionState;

	// BrnActiveRaceCar.h:1100
	bool mbCollisionStateToChangeTo;

	// BrnActiveRaceCar.h:1101
	bool mbChangeCullingGroup;

	// BrnActiveRaceCar.h:1102
	InEventAddForCollision::CullingGroup mCullingGrouptoChangeTo;

	// BrnActiveRaceCar.h:1104
	int32_t miFlashFrequency;

	// BrnActiveRaceCar.h:1105
	bool mbNotSendingNetworkUpdates;

	// BrnActiveRaceCar.h:1106
	bool mbIsDisconnectedFromNetwork;

	// BrnActiveRaceCar.h:1107
	bool mbIsInCarSelectOnline;

	// BrnActiveRaceCar.h:1108
	bool mbCarSelectOnlineStateChanged;

	// BrnActiveRaceCar.h:1109
	bool mbReceivedNetworkDriverControls;

	// BrnActiveRaceCar.h:1110
	bool mbRenderThisFrame;

	// BrnActiveRaceCar.h:1113
	Vector3 mPlaceOnTrackPosition;

	// BrnActiveRaceCar.h:1114
	Vector3 mPlaceOnTrackDirection;

	// BrnActiveRaceCar.h:1115
	float32_t mfPlaceOnTrackSpeed;

	// BrnActiveRaceCar.h:1116
	bool mbToBePlacedOnTrack;

	// BrnActiveRaceCar.h:1118
	BrnPhysics::Deformation::DeformationResetType meBaseDeformationType;

	// BrnActiveRaceCar.h:1119
	float32_t mfBaseDeformAmount;

	// BrnActiveRaceCar.h:1122
	InEventAddForCollision::CullingGroup mCurrentCullingGroup;

	// BrnActiveRaceCar.h:1125
	BrnWorld::ActiveRaceCar::RenderParams mRenderParams;

	// BrnActiveRaceCar.h:1128
	int32_t miDefaultColourIndex;

	// BrnActiveRaceCar.h:1129
	int32_t miDefaultColourPalette;

	// BrnActiveRaceCar.h:1132
	float32_t mfIndicatorTime;

	// BrnActiveRaceCar.h:1133
	bool mbRightIndicatorActive;

	// BrnActiveRaceCar.h:1134
	bool mbLeftIndicatorActive;

public:
	// BrnActiveRaceCar.h:515
	void Construct(EActiveRaceCarIndex);

	// BrnActiveRaceCar.h:518
	bool Prepare();

	// BrnActiveRaceCar.h:535
	void Update(OutputBuffer_PrePhysics::GameEventQueue *, float32_t, float32_t, float32_t, float32_t, float32_t, bool, bool, bool, Random *, OutputBuffer_PreScene::VehicleInputInterface *, BrnGameState::GameStateModuleIO::EGameModeType, Vector2, Vector2);

	// BrnActiveRaceCar.h:542
	void Update_PreScene(OutputBuffer_PreScene::SceneInputInterface *, OutputBuffer_PreScene::VehicleInputInterface *, OutputBuffer_PreScene::RaceCarAIInterface *);

	// BrnActiveRaceCar.h:547
	void UpdateBoundingBox(OutputBuffer_PreScene::SceneInputInterface *);

	// BrnActiveRaceCar.h:550
	void Release();

	// BrnActiveRaceCar.h:553
	void Destruct();

	// BrnActiveRaceCar.h:560
	void Attach(RaceCar *, bool);

	// BrnActiveRaceCar.h:569
	void OnResourcesLoaded(const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &, const ResourcePtr<BrnVehicle::GraphicsSpec> &, VehicleInputInterface *, Attribute::Key, Vector3);

	// BrnActiveRaceCar.h:579
	void Create(VehicleInputInterface *, Attribute::Key, Matrix44Affine, Vector3, bool, uint8_t);

	// BrnActiveRaceCar.h:584
	void OnResourcesInvalidated(VehicleInputInterface *);

	// BrnActiveRaceCar.h:591
	void OnResourcesValidated(VehicleInputInterface *, const CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> &, const ResourcePtr<BrnVehicle::GraphicsSpec> &);

	// BrnActiveRaceCar.h:600
	void OnHandlingModelAdded(OutputBuffer_PreScene::SceneInputInterface *, OutputBuffer_PreScene::VehicleInputInterface *, float32_t);

	// BrnActiveRaceCar.h:606
	void Detach(VehicleInputInterface *, OutputBuffer_PreScene::SceneInputInterface *);

	// BrnActiveRaceCar.h:612
	void SetRaceStartState(BrnWorld::ERaceStartState);

	// BrnActiveRaceCar.h:617
	void SetBraking(bool);

	// BrnActiveRaceCar.h:623
	void UpdatePhysicsState(const RaceCarState *, WorldMap2D *);

	// BrnActiveRaceCar.h:628
	void UpdateWheelPhysicsState(const WheelPhysicalStates &);

	// BrnActiveRaceCar.h:633
	void UpdateCarSelectStateOnline(bool);

	// BrnActiveRaceCar.h:638
	void SetAISection(uint32_t);

	// BrnActiveRaceCar.h:642
	void SetDisconnectedFromNetwork();

	// BrnActiveRaceCar.h:646
	void SetNotSendingNetworkUpdates(bool);

	// BrnActiveRaceCar.h:650
	bool HasValidAISection();

	// BrnActiveRaceCar.h:659
	void OnCrash(bool, const RaceCarCrashEvent &, OutputBuffer_PreScene::SceneInputInterface *, bool, float32_t);

	// BrnActiveRaceCar.h:664
	void CalcBodyTransform(Matrix44Affine *) const;

	// BrnActiveRaceCar.h:670
	void GetResetCoords(Vector3 *, Vector3 *) const;

	// BrnActiveRaceCar.h:675
	void ResetAfterCrash(bool);

	// BrnActiveRaceCar.h:681
	void SendSceneUpdatesPostPhysics(OutputBuffer_PreScene::SceneInputInterface *, OutputBuffer_PreScene::VehicleInputInterface *, float32_t);

	// BrnActiveRaceCar.h:685
	void UpdateResetTransform();

	// BrnActiveRaceCar.h:689
	Matrix44Affine GetTransform() const;

	// BrnActiveRaceCar.h:692
	Vector3 GetPosition() const;

	// BrnActiveRaceCar.h:695
	Vector3 GetDirection() const;

	// BrnActiveRaceCar.h:698
	Vector3 GetVelocity() const;

	// BrnActiveRaceCar.h:701
	EActiveRaceCarIndex GetActiveRaceCarIndex() const;

	// BrnActiveRaceCar.h:704
	Matrix44Affine GetCentreOfMassTransform() const;

	// BrnActiveRaceCar.h:707
	RaceCar * GetGlobalRaceCar() const;

	// BrnActiveRaceCar.h:710
	const RaceCarState * GetPhysicsState() const;

	// BrnActiveRaceCar.h:713
	const RaceCarCrashData * GetCrashData() const;

	// BrnActiveRaceCar.h:716
	VolumeInstanceId GetHandlingBodyVolumeId() const;

	// BrnActiveRaceCar.h:719
	uint16_t GetCurrentAISection() const;

	// BrnActiveRaceCar.h:722
	uint16_t GetPreviousAISection() const;

	// BrnActiveRaceCar.h:725
	bool IsInactive() const;

	// BrnActiveRaceCar.h:728
	bool IsAttached() const;

	// BrnActiveRaceCar.h:731
	bool IsInCurrentGameMode() const;

	// BrnActiveRaceCar.h:735
	void SetInCurrentGameMode(bool);

	// BrnActiveRaceCar.h:738
	bool IsWaitingForLoad() const;

	// BrnActiveRaceCar.h:741
	bool IsWaitingForReset() const;

	// BrnActiveRaceCar.h:744
	bool IsActive() const;

	// BrnActiveRaceCar.h:747
	bool IsPlayer() const;

	// BrnActiveRaceCar.h:754
	bool IsOnRaceStartState(BrnWorld::ERaceStartState) const;

	// BrnActiveRaceCar.h:757
	bool IsInAnyRaceStartState() const;

	// BrnActiveRaceCar.h:760
	bool AIToBeActivated() const;

	// BrnActiveRaceCar.h:763
	void ClearAIToBeActivated();

	// BrnActiveRaceCar.h:766
	bool IsDoingStartLineBoost() const;

	// BrnActiveRaceCar.h:769
	bool IsCrashing() const;

	// BrnActiveRaceCar.h:772
	bool IsUncrashedThisFrame() const;

	// BrnActiveRaceCar.h:775
	bool IsOutsideOfAISectionSystem() const;

	// BrnActiveRaceCar.h:778
	bool IsInvulnerable() const;

	// BrnActiveRaceCar.h:781
	bool IsDrifting() const;

	// BrnActiveRaceCar.h:784
	bool IsFrontRayOccluded() const;

	// BrnActiveRaceCar.h:787
	bool IsInAir() const;

	// BrnActiveRaceCar.h:790
	bool IsTouchingAnotherRaceCar() const;

	// BrnActiveRaceCar.h:793
	bool IsTouchingPlayer() const;

	// BrnActiveRaceCar.h:796
	bool IsTouchingWorld() const;

	// BrnActiveRaceCar.h:799
	bool IsComingInRange();

	// BrnActiveRaceCar.h:802
	bool IsJoiningGameMode();

	// BrnActiveRaceCar.h:805
	bool IsDisconnectedFromNetwork() const;

	// BrnActiveRaceCar.h:808
	bool IsNotSendingNetworkUpdates() const;

	// BrnActiveRaceCar.h:811
	bool IsEngineRunning() const;

	// BrnActiveRaceCar.h:814
	BrnWorld::RaceCarEntityModuleIO::EActiveRaceCarEngineState GetEngineState();

	// BrnActiveRaceCar.h:817
	bool RenderThisFrame() const;

	// BrnActiveRaceCar.h:820
	ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec> GetDeformationModelResourcePtr() const;

	// BrnActiveRaceCar.h:824
	bool ToBePlacedOnTrack() const;

	// BrnActiveRaceCar.h:827
	Vector3 GetPlaceOnTrackPosition() const;

	// BrnActiveRaceCar.h:830
	Vector3 GetPlaceOnTrackDirection() const;

	// BrnActiveRaceCar.h:833
	float32_t GetPlaceOnTrackSpeed() const;

	// BrnActiveRaceCar.h:836
	float32_t GetBaseDeformAmount() const;

	// BrnActiveRaceCar.h:840
	void SetBaseDeformAmount(float32_t);

	// BrnActiveRaceCar.h:844
	void SetInvulnerabilityTime(float32_t);

	// BrnActiveRaceCar.h:847
	BrnPhysics::Deformation::DeformationResetType GetBaseDeformationResetType() const;

	// BrnActiveRaceCar.h:851
	void SetDeformationResetType(BrnPhysics::Deformation::DeformationResetType);

	// BrnActiveRaceCar.h:854
	void SetTouchingAnotherRaceCar();

	// BrnActiveRaceCar.h:857
	void SetTouchingPlayer();

	// BrnActiveRaceCar.h:860
	void SetTouchingWorld();

	// BrnActiveRaceCar.h:864
	void SetComingInRange(bool);

	// BrnActiveRaceCar.h:868
	void SetJoiningGameMode(bool);

	// BrnActiveRaceCar.h:871
	int32_t GetDefaultColourIndex();

	// BrnActiveRaceCar.h:874
	int32_t GetDefaultPaletteIndex();

	// BrnActiveRaceCar.h:877
	const BrnWorld::ActiveRaceCar::RenderParams * GetRenderParams() const;

	// BrnActiveRaceCar.h:880
	BrnWorld::ActiveRaceCar::RenderParams * GetRenderParams();

	// BrnActiveRaceCar.h:886
	void RequestPlaceOnTrack(Vector3, Vector3, float32_t);

	// BrnActiveRaceCar.h:891
	void RequestDeferredPlaceOnTrack(Vector3, Vector3);

	// BrnActiveRaceCar.h:894
	void ClearPlaceOnTrack();

	// BrnActiveRaceCar.h:897
	void SetAsOnlineConnecting();

	// BrnActiveRaceCar.h:900
	bool IsOnlineConnecting() const;

	// BrnActiveRaceCar.h:903
	void SetReceivedNetworkDriverControls();

	// BrnActiveRaceCar.h:906
	void RenderDamaged();

	// BrnActiveRaceCar.h:909
	bool IsWrecked();

	// BrnActiveRaceCar.h:912
	bool HasCrashedIntoWater();

	// BrnActiveRaceCar.h:915
	bool CanDriveAwayFromCrash();

	// BrnActiveRaceCar.h:919
	void SetCanDriveAwayFromCrash(bool);

	// BrnActiveRaceCar.h:922
	bool IsInShowtime() const;

	// BrnActiveRaceCar.h:925
	bool IsDriveableAfterCrash();

	// BrnActiveRaceCar.h:928
	bool IsDeformationFixedAfterCrash();

	// BrnActiveRaceCar.h:931
	bool IsCarAbleToDrive();

	// BrnActiveRaceCar.h:934
	void SetWrecked();

	// BrnActiveRaceCar.h:937
	void SetCrashedIntoWater();

	// BrnActiveRaceCar.h:940
	float32_t GetTimeInWater();

	// BrnActiveRaceCar.h:944
	void SetTimeInWater(float32_t);

	// BrnActiveRaceCar.h:948
	void SetInShowtime(bool);

	// BrnActiveRaceCar.h:952
	const AxisAlignedBox & GetDeformationBBox() const;

	// BrnActiveRaceCar.h:956
	const VecFloat GetLowestPointWorldSpace() const;

	// BrnActiveRaceCar.h:960
	void UpdateDeformationState(const DeformationState &);

	// BrnActiveRaceCar.h:963
	const rw::math::vpu::Vector3 GetInAirRotations() const;

	// BrnActiveRaceCar.h:966
	bool NeedsMovingToStartLine();

	// BrnActiveRaceCar.h:970
	void SetTakenDown(bool);

	// BrnActiveRaceCar.h:973
	bool IsTakenDown();

	// BrnActiveRaceCar.h:976
	bool GetWonLastEvent();

	// BrnActiveRaceCar.h:980
	void SetWonLastEvent(bool);

	// BrnActiveRaceCar.h:984
	void EnableEngineSwitchOff(bool);

	// BrnActiveRaceCar.h:989
	void SetIndicatorState(bool, bool);

	// BrnActiveRaceCar.h:992
	bool IsAddedForCollision() const;

private:
	// BrnActiveRaceCar.h:1138
	BoxVolume * GetPropCollisionBox(void *);

	// BrnActiveRaceCar.h:1141
	void ResetVerletOffsets();

	// BrnActiveRaceCar.h:1151
	void AddHandlingModel(VehicleInputInterface *, Attribute::Key, Matrix44Affine, Vector3, bool, uint8_t);

	// BrnActiveRaceCar.h:1156
	void RemoveHandlingModel(VehicleInputInterface *);

	// BrnActiveRaceCar.h:1161
	void InvalidateHandlingModel(VehicleInputInterface *);

	// BrnActiveRaceCar.h:1166
	void ValidateHandlingModel(VehicleInputInterface *);

	// BrnActiveRaceCar.h:1171
	void UpdateCullingGroup(OutputBuffer_PreScene::SceneInputInterface *);

	// BrnActiveRaceCar.h:1180
	void UpdateEngineState(float32_t, float32_t, float32_t, bool, bool);

	// BrnActiveRaceCar.h:1187
	void AddToScene(OutputBuffer_PreScene::SceneInputInterface *, OutputBuffer_PreScene::VehicleInputInterface *, float32_t);

	// BrnActiveRaceCar.h:1193
	void RemoveFromScene(OutputBuffer_PreScene::SceneInputInterface *, OutputBuffer_PreScene::VehicleInputInterface *);

	// BrnActiveRaceCar.h:1200
	void AddToCollision(OutputBuffer_PreScene::SceneInputInterface *, OutputBuffer_PreScene::VehicleInputInterface *);

	// BrnActiveRaceCar.h:1206
	void RemoveFromCollision(OutputBuffer_PreScene::SceneInputInterface *, OutputBuffer_PreScene::VehicleInputInterface *);

	// BrnActiveRaceCar.h:1210
	InEventAddForCollision::CullingGroup DetermineCullingGroup();

	// BrnActiveRaceCar.h:1214
	InEventAddForCollision::CullingGroup GetCullingGroup();

	// BrnActiveRaceCar.h:1219
	void SetCullingGroup(InEventAddForCollision::CullingGroup);

	// BrnActiveRaceCar.h:1223
	void UpdateLostContact();

	// BrnActiveRaceCar.h:1228
	void UpdateTimeSinceCreation(float32_t);

	// BrnActiveRaceCar.h:1233
	void CalculateWheelAngularVelocities(float32_t);

	// BrnActiveRaceCar.h:1237
	void ResetInAirRotations();

	// BrnActiveRaceCar.h:1242
	void UpdateInAirRotations(float32_t);

	// BrnActiveRaceCar.h:1247
	void UpdateIndicators(float32_t);

	// BrnActiveRaceCar.h:1252
	void SendAddedRemovedNetworkCarForCollisionEvents(OutputBuffer_PreScene::VehicleInputInterface *);

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// Declaration
	struct ActiveRaceCar {
		// BrnActiveRaceCar.h:132
		struct RenderParams {
		private:
			// BrnActiveRaceCar.h:468
			Matrix44Affine mBodyTransform;

			// BrnActiveRaceCar.h:469
			Vector3Plus[128] maVerletOffsets;

			// BrnActiveRaceCar.h:470
			Matrix44Affine[6] mWheelTransforms;

			// BrnActiveRaceCar.h:471
			Matrix44Affine[6] mWheelScaleTransforms;

			// BrnActiveRaceCar.h:472
			Vector3[4] maAxlePositions;

			// BrnActiveRaceCar.h:473
			Vector4 mPaintColour;

			// BrnActiveRaceCar.h:474
			Vector4 mPearlescentColour;

			// BrnActiveRaceCar.h:475
			Vector3[24] maLightLocatorPos;

			// BrnActiveRaceCar.h:476
			BrnPhysics::Deformation::ETagPointType[24] maLightLocatorType;

			// BrnActiveRaceCar.h:477
			bool[6] mabWheelExists;

			// BrnActiveRaceCar.h:478
			int32_t miNumLightLocators;

			// BrnActiveRaceCar.h:479
			float32_t[4] mafWheelAngularVelocities;

			// BrnActiveRaceCar.h:480
			float32_t mfDeformationSquared;

			// BrnActiveRaceCar.h:481
			BitArray<96u> mBodyPartVisibility;

			// Unknown accessibility
			// BrnActiveRaceCar.h:115
			typedef EventQueue<BrnWorld::DetachedPartRenderEvent,20> DetachedPartRenderQueue;

			// BrnActiveRaceCar.h:483
			BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue maDetachedParts;

			// BrnActiveRaceCar.h:485
			CgsGraphics::Model::State mLOD;

			// BrnActiveRaceCar.h:486
			bool mbDamaged;

			// BrnActiveRaceCar.h:487
			bool mbCrashing;

			// BrnActiveRaceCar.h:488
			bool mbIsEngineOff;

			// BrnActiveRaceCar.h:489
			bool mbIsBraking;

			// BrnActiveRaceCar.h:490
			bool mbIsReversing;

			// BrnActiveRaceCar.h:491
			bool mbIsIndicatingLeft;

			// BrnActiveRaceCar.h:492
			bool mbIsIndicatingRight;

			// BrnActiveRaceCar.h:493
			bool mbIsHidden;

			// BrnActiveRaceCar.h:496
			float32_t mfLightOpacityFlipFlop;

			// BrnActiveRaceCar.h:497
			float32_t mfLightSwitchTimeOut;

			// BrnActiveRaceCar.h:500
			bool mbBluesAndTwosCanSwitchState;

			// BrnActiveRaceCar.h:501
			bool mbBluesAndTwosActive;

			// BrnActiveRaceCar.h:504
			uint8_t mu8RenderDamageFlags;

			// BrnActiveRaceCar.h:506
			float32_t[8] mafCrackedGlassFractureAmount;

			// BrnActiveRaceCar.h:507
			float32_t[8] mafCrackedGlassEqualisationFactor;

			// BrnActiveRaceCar.h:508
			AISection::Vector2[8] mavCrackedGlassScaleFactors;

		public:
			// BrnActiveRaceCar.h:138
			void Reset();

			// BrnActiveRaceCar.h:143
			void SetVerletOffset(uint32_t, Vector3Plus);

			// BrnActiveRaceCar.h:146
			const rw::math::vpu::Vector3Plus * GetVerletOffsets() const;

			// BrnActiveRaceCar.h:149
			Vector3Plus * GetVerletOffsets();

			// BrnActiveRaceCar.h:154
			void DEBUG_OverrideScratchAmount(float32_t);

			// BrnActiveRaceCar.h:162
			void SetWheelScale(uint32_t, Vector3);

			// BrnActiveRaceCar.h:166
			const rw::math::vpu::Matrix44Affine & GetWheelScaleMatrix(uint32_t) const;

			// BrnActiveRaceCar.h:170
			void ChangePartVisibility(uint8_t, bool);

			// BrnActiveRaceCar.h:174
			bool IsPartVisible(uint8_t) const;

			// BrnActiveRaceCar.h:178
			void MakeAllPartsVisible();

			// BrnActiveRaceCar.h:182
			void SetBodyTransform(Matrix44Affine);

			// BrnActiveRaceCar.h:186
			const rw::math::vpu::Matrix44Affine & GetBodyTransform() const;

			// BrnActiveRaceCar.h:190
			void SetWheelTransform(uint32_t, Matrix44Affine);

			// BrnActiveRaceCar.h:194
			const rw::math::vpu::Matrix44Affine & GetWheelTransform(uint32_t) const;

			// BrnActiveRaceCar.h:198
			void ResetTransforms();

			// BrnActiveRaceCar.h:204
			void SetAxlePosition(uint32_t, Vector3);

			// BrnActiveRaceCar.h:208
			const rw::math::vpu::Vector3 * GetAxlePosition(uint32_t) const;

			// BrnActiveRaceCar.h:212
			void ResetRenderDamageFlag();

			// BrnActiveRaceCar.h:215
			uint8_t GetRenderDamageFlag() const;

			// BrnActiveRaceCar.h:219
			void SetRenderDamageFlag(uint8_t);

			// BrnActiveRaceCar.h:223
			void SetCrashing(bool);

			// BrnActiveRaceCar.h:227
			bool GetCrashing() const;

			// BrnActiveRaceCar.h:231
			void SetDamaged(bool);

			// BrnActiveRaceCar.h:235
			bool IsDamaged() const;

			// BrnActiveRaceCar.h:239
			void SetEngineOff(bool);

			// BrnActiveRaceCar.h:243
			bool IsEngineOff() const;

			// BrnActiveRaceCar.h:247
			void SetBraking(bool);

			// BrnActiveRaceCar.h:251
			bool IsBraking() const;

			// BrnActiveRaceCar.h:255
			void SetReversing(bool);

			// BrnActiveRaceCar.h:259
			bool IsReversing() const;

			// BrnActiveRaceCar.h:263
			void SetIndicatingLeft(bool);

			// BrnActiveRaceCar.h:267
			bool IsIndicatingLeft() const;

			// BrnActiveRaceCar.h:271
			void SetIndicatingRight(bool);

			// BrnActiveRaceCar.h:275
			bool IsIndicatingRight() const;

			// BrnActiveRaceCar.h:279
			void SetRaceCarHidden(bool);

			// BrnActiveRaceCar.h:283
			bool IsRaceCarHidden() const;

			// BrnActiveRaceCar.h:286
			const BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue & GetDetachedPartQueue() const;

			// BrnActiveRaceCar.h:289
			BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue & GetDetachedPartQueue();

			// BrnActiveRaceCar.h:292
			const rw::math::vpu::Vector4 & GetPaintColour() const;

			// BrnActiveRaceCar.h:295
			const rw::math::vpu::Vector4 & GetPearlescentColour() const;

			// BrnActiveRaceCar.h:298
			void SetPaintColour(Vector4);

			// BrnActiveRaceCar.h:301
			void SetPearlescentColour(Vector4);

			// BrnActiveRaceCar.h:304
			void SetLOD(CgsGraphics::Model::State);

			// BrnActiveRaceCar.h:307
			CgsGraphics::Model::State GetLOD() const;

			// BrnActiveRaceCar.h:310
			float32_t * GetWheelAngularVelocities();

			// BrnActiveRaceCar.h:313
			const float32_t * GetWheelAngularVelocities() const;

			// BrnActiveRaceCar.h:317
			void SetDeformationSquared(float32_t);

			// BrnActiveRaceCar.h:320
			float32_t GetDeformationSquared() const;

			// BrnActiveRaceCar.h:323
			float32_t GetLightFlipFlopValue();

			// BrnActiveRaceCar.h:330
			bool GetArePoliceLightsActive();

			// BrnActiveRaceCar.h:339
			bool RequestBluesAndTwosStateSwitch(float, bool);

			// BrnActiveRaceCar.h:391
			void SetLightLocators(const VehicleLocatorData *);

			// BrnActiveRaceCar.h:394
			BrnPhysics::Deformation::ETagPointType GetLightLocatorType(uint32_t);

			// BrnActiveRaceCar.h:398
			Vector3 GetLightLocatorPos(uint32_t);

			// BrnActiveRaceCar.h:402
			uint32_t GetNumLightLocators();

			// BrnActiveRaceCar.h:406
			void SetWheelExists(uint32_t, bool);

			// BrnActiveRaceCar.h:410
			bool GetWheelExists(uint32_t) const;

			// BrnActiveRaceCar.h:416
			void SetCrackedGlassFractureAmountN(int, float32_t);

			// BrnActiveRaceCar.h:423
			void SetCrackedGlassEqualisationFactorN(int, float32_t);

			// BrnActiveRaceCar.h:430
			void SetCrackedGlassScaleFactorsN(int, const Vector2Template<float> &);

			// BrnActiveRaceCar.h:437
			float32_t GetCrackedGlassFractureAmountN(int) const;

			// BrnActiveRaceCar.h:444
			float32_t GetCrackedGlassEqualisationFactorN(int) const;

			// BrnActiveRaceCar.h:451
			AISection::Vector2 GetCrackedGlassScaleFactorsN(int) const;

			// BrnActiveRaceCar.h:458
			void ResetCrackedGlassFractureAmounts();

		}

		// BrnActiveRaceCar.h:1009
		enum EOnlineState {
			E_ONLINE_STATE_CONNECTING = 0,
			E_ONLINE_STATE_NORMAL = 1,
			E_ONLINE_STATE_LOST_CONTACT = 2,
			E_ONLINE_STATE_DISCONNECTED = 3,
			E_ONLINE_STATE_COUNT = 4,
		}

	}

	// BrnActiveRaceCar.h:79
	enum ERaceStartState {
		E_RACE_START_STATE_ON_START_LINE = 0,
		E_RACE_START_STATE_ROLLING_START = 1,
		E_RACE_START_STATE_RACING = 2,
	}

	// BrnActiveRaceCar.h:58
	const uint32_t KU_MAX_BODY_PARTS_PER_RACE_CAR = 96;

	// BrnActiveRaceCar.h:60
	const uint32_t KU_MAX_GLASS_VOLUMES_PER_RACE_CAR = 12;

	// BrnActiveRaceCar.h:63
	const int32_t KI_MAX_BRAKE_COUNTER = 10;

	// BrnActiveRaceCar.h:68
	const uint8_t KU_GLASS_RENDERDAMAGEFLAG_DEFAULT;

	// BrnActiveRaceCar.h:70
	const float32_t KF_BLUESTWOS_FLASH_DURATION;

	// BrnActiveRaceCar.h:71
	const float32_t KF_BLUESTWOS_FLASH_HALF_DURATION;

	// BrnActiveRaceCar.h:72
	const float32_t KF_BLUESTWOS_ONE_OVER_FLASH_DURATION;

	// BrnActiveRaceCar.h:73
	const float32_t KF_BLUESTWOS_FLASH_TIMEOUT;

	// BrnActiveRaceCar.h:76
	const float32_t KF_EVENT_START_RESET_DEFER_TIME;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// Declaration
	struct ActiveRaceCar {
		// BrnActiveRaceCar.h:132
		struct RenderParams {
		private:
			// BrnActiveRaceCar.h:468
			Matrix44Affine mBodyTransform;

			// BrnActiveRaceCar.h:469
			Vector3Plus[128] maVerletOffsets;

			// BrnActiveRaceCar.h:470
			Matrix44Affine[6] mWheelTransforms;

			// BrnActiveRaceCar.h:471
			Matrix44Affine[6] mWheelScaleTransforms;

			// BrnActiveRaceCar.h:472
			Vector3[4] maAxlePositions;

			// BrnActiveRaceCar.h:473
			Vector4 mPaintColour;

			// BrnActiveRaceCar.h:474
			Vector4 mPearlescentColour;

			// BrnActiveRaceCar.h:475
			Vector3[24] maLightLocatorPos;

			// BrnActiveRaceCar.h:476
			BrnPhysics::Deformation::ETagPointType[24] maLightLocatorType;

			// BrnActiveRaceCar.h:477
			bool[6] mabWheelExists;

			// BrnActiveRaceCar.h:478
			int32_t miNumLightLocators;

			// BrnActiveRaceCar.h:479
			float32_t[4] mafWheelAngularVelocities;

			// BrnActiveRaceCar.h:480
			float32_t mfDeformationSquared;

			// BrnActiveRaceCar.h:481
			BitArray<96u> mBodyPartVisibility;

			// Unknown accessibility
			// BrnActiveRaceCar.h:115
			typedef EventQueue<BrnWorld::DetachedPartRenderEvent,20> DetachedPartRenderQueue;

			// BrnActiveRaceCar.h:483
			BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue maDetachedParts;

			// BrnActiveRaceCar.h:485
			CgsGraphics::Model::State mLOD;

			// BrnActiveRaceCar.h:486
			bool mbDamaged;

			// BrnActiveRaceCar.h:487
			bool mbCrashing;

			// BrnActiveRaceCar.h:488
			bool mbIsEngineOff;

			// BrnActiveRaceCar.h:489
			bool mbIsBraking;

			// BrnActiveRaceCar.h:490
			bool mbIsReversing;

			// BrnActiveRaceCar.h:491
			bool mbIsIndicatingLeft;

			// BrnActiveRaceCar.h:492
			bool mbIsIndicatingRight;

			// BrnActiveRaceCar.h:493
			bool mbIsHidden;

			// BrnActiveRaceCar.h:496
			float32_t mfLightOpacityFlipFlop;

			// BrnActiveRaceCar.h:497
			float32_t mfLightSwitchTimeOut;

			// BrnActiveRaceCar.h:500
			bool mbBluesAndTwosCanSwitchState;

			// BrnActiveRaceCar.h:501
			bool mbBluesAndTwosActive;

			// BrnActiveRaceCar.h:504
			uint8_t mu8RenderDamageFlags;

			// BrnActiveRaceCar.h:506
			float32_t[8] mafCrackedGlassFractureAmount;

			// BrnActiveRaceCar.h:507
			float32_t[8] mafCrackedGlassEqualisationFactor;

			// BrnActiveRaceCar.h:508
			AISection::Vector2[8] mavCrackedGlassScaleFactors;

		public:
			// BrnActiveRaceCar.h:138
			void Reset();

			// BrnActiveRaceCar.h:143
			void SetVerletOffset(uint32_t, Vector3Plus);

			// BrnActiveRaceCar.h:146
			const rw::math::vpu::Vector3Plus * GetVerletOffsets() const;

			// BrnActiveRaceCar.h:149
			Vector3Plus * GetVerletOffsets();

			// BrnActiveRaceCar.h:154
			void DEBUG_OverrideScratchAmount(float32_t);

			// BrnActiveRaceCar.h:162
			void SetWheelScale(uint32_t, Vector3);

			// BrnActiveRaceCar.h:166
			const rw::math::vpu::Matrix44Affine & GetWheelScaleMatrix(uint32_t) const;

			// BrnActiveRaceCar.h:170
			void ChangePartVisibility(uint8_t, bool);

			// BrnActiveRaceCar.h:174
			bool IsPartVisible(uint8_t) const;

			// BrnActiveRaceCar.h:178
			void MakeAllPartsVisible();

			// BrnActiveRaceCar.h:182
			void SetBodyTransform(Matrix44Affine);

			// BrnActiveRaceCar.h:186
			const rw::math::vpu::Matrix44Affine & GetBodyTransform() const;

			// BrnActiveRaceCar.h:190
			void SetWheelTransform(uint32_t, Matrix44Affine);

			// BrnActiveRaceCar.h:194
			const rw::math::vpu::Matrix44Affine & GetWheelTransform(uint32_t) const;

			// BrnActiveRaceCar.h:198
			void ResetTransforms();

			// BrnActiveRaceCar.h:204
			void SetAxlePosition(uint32_t, Vector3);

			// BrnActiveRaceCar.h:208
			const rw::math::vpu::Vector3 * GetAxlePosition(uint32_t) const;

			// BrnActiveRaceCar.h:212
			void ResetRenderDamageFlag();

			// BrnActiveRaceCar.h:215
			uint8_t GetRenderDamageFlag() const;

			// BrnActiveRaceCar.h:219
			void SetRenderDamageFlag(uint8_t);

			// BrnActiveRaceCar.h:223
			void SetCrashing(bool);

			// BrnActiveRaceCar.h:227
			bool GetCrashing() const;

			// BrnActiveRaceCar.h:231
			void SetDamaged(bool);

			// BrnActiveRaceCar.h:235
			bool IsDamaged() const;

			// BrnActiveRaceCar.h:239
			void SetEngineOff(bool);

			// BrnActiveRaceCar.h:243
			bool IsEngineOff() const;

			// BrnActiveRaceCar.h:247
			void SetBraking(bool);

			// BrnActiveRaceCar.h:251
			bool IsBraking() const;

			// BrnActiveRaceCar.h:255
			void SetReversing(bool);

			// BrnActiveRaceCar.h:259
			bool IsReversing() const;

			// BrnActiveRaceCar.h:263
			void SetIndicatingLeft(bool);

			// BrnActiveRaceCar.h:267
			bool IsIndicatingLeft() const;

			// BrnActiveRaceCar.h:271
			void SetIndicatingRight(bool);

			// BrnActiveRaceCar.h:275
			bool IsIndicatingRight() const;

			// BrnActiveRaceCar.h:279
			void SetRaceCarHidden(bool);

			// BrnActiveRaceCar.h:283
			bool IsRaceCarHidden() const;

			// BrnActiveRaceCar.h:286
			const BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue & GetDetachedPartQueue() const;

			// BrnActiveRaceCar.h:289
			BrnWorld::ActiveRaceCar::RenderParams::DetachedPartRenderQueue & GetDetachedPartQueue();

			// BrnActiveRaceCar.h:292
			const rw::math::vpu::Vector4 & GetPaintColour() const;

			// BrnActiveRaceCar.h:295
			const rw::math::vpu::Vector4 & GetPearlescentColour() const;

			// BrnActiveRaceCar.h:298
			void SetPaintColour(Vector4);

			// BrnActiveRaceCar.h:301
			void SetPearlescentColour(Vector4);

			// BrnActiveRaceCar.h:304
			void SetLOD(CgsGraphics::Model::State);

			// BrnActiveRaceCar.h:307
			CgsGraphics::Model::State GetLOD() const;

			// BrnActiveRaceCar.h:310
			float32_t * GetWheelAngularVelocities();

			// BrnActiveRaceCar.h:313
			const float32_t * GetWheelAngularVelocities() const;

			// BrnActiveRaceCar.h:317
			void SetDeformationSquared(float32_t);

			// BrnActiveRaceCar.h:320
			float32_t GetDeformationSquared() const;

			// BrnActiveRaceCar.h:323
			float32_t GetLightFlipFlopValue();

			// BrnActiveRaceCar.h:330
			bool GetArePoliceLightsActive();

			// BrnActiveRaceCar.h:339
			bool RequestBluesAndTwosStateSwitch(float, bool);

			// BrnActiveRaceCar.h:391
			void SetLightLocators(const VehicleLocatorData *);

			// BrnActiveRaceCar.h:394
			BrnPhysics::Deformation::ETagPointType GetLightLocatorType(uint32_t);

			// BrnActiveRaceCar.h:398
			Vector3 GetLightLocatorPos(uint32_t);

			// BrnActiveRaceCar.h:402
			uint32_t GetNumLightLocators();

			// BrnActiveRaceCar.h:406
			void SetWheelExists(uint32_t, bool);

			// BrnActiveRaceCar.h:410
			bool GetWheelExists(uint32_t) const;

			// BrnActiveRaceCar.h:416
			void SetCrackedGlassFractureAmountN(int, float32_t);

			// BrnActiveRaceCar.h:423
			void SetCrackedGlassEqualisationFactorN(int, float32_t);

			// BrnActiveRaceCar.h:430
			void SetCrackedGlassScaleFactorsN(int, const Vector2Template<float> &);

			// BrnActiveRaceCar.h:437
			float32_t GetCrackedGlassFractureAmountN(int) const;

			// BrnActiveRaceCar.h:444
			float32_t GetCrackedGlassEqualisationFactorN(int) const;

			// BrnActiveRaceCar.h:451
			AISection::Vector2 GetCrackedGlassScaleFactorsN(int) const;

			// BrnActiveRaceCar.h:458
			void ResetCrackedGlassFractureAmounts();

		}

		// BrnActiveRaceCar.h:1009
		enum EOnlineState {
			E_ONLINE_STATE_CONNECTING = 0,
			E_ONLINE_STATE_NORMAL = 1,
			E_ONLINE_STATE_LOST_CONTACT = 2,
			E_ONLINE_STATE_DISCONNECTED = 3,
			E_ONLINE_STATE_COUNT = 4,
		}

	}

	// BrnActiveRaceCar.h:79
	enum ERaceStartState {
		E_RACE_START_STATE_ON_START_LINE = 0,
		E_RACE_START_STATE_ROLLING_START = 1,
		E_RACE_START_STATE_RACING = 2,
	}

	// BrnActiveRaceCar.h:58
	const uint32_t KU_MAX_BODY_PARTS_PER_RACE_CAR = 96;

	// BrnActiveRaceCar.h:60
	const uint32_t KU_MAX_GLASS_VOLUMES_PER_RACE_CAR = 12;

	// BrnActiveRaceCar.h:63
	const int32_t KI_MAX_BRAKE_COUNTER = 10;

	// BrnActiveRaceCar.h:68
	const uint8_t KU_GLASS_RENDERDAMAGEFLAG_DEFAULT;

	// BrnActiveRaceCar.h:70
	const float32_t KF_BLUESTWOS_FLASH_DURATION;

	// BrnActiveRaceCar.h:71
	const float32_t KF_BLUESTWOS_FLASH_HALF_DURATION;

	// BrnActiveRaceCar.h:72
	const float32_t KF_BLUESTWOS_ONE_OVER_FLASH_DURATION;

	// BrnActiveRaceCar.h:73
	const float32_t KF_BLUESTWOS_FLASH_TIMEOUT;

	// BrnActiveRaceCar.h:76
	const float32_t KF_EVENT_START_RESET_DEFER_TIME;

}


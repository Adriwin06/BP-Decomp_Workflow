// VehicleAttribs.h:62
extern const float32_t krMPS2MPH;

// VehicleAttribs.h:63
extern const float32_t krMPH2MPS;

// VehicleAttribs.h:748
extern const RwInt32 knMaxNumGears = 6;

// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// Declaration
		struct VehicleAttribs {
			// VehicleAttribs.h:84
			struct VehicleBaseAttribs {
				// VehicleAttribs.h:86
				Vector3 mFrontRightWheelPos;

				// VehicleAttribs.h:87
				Vector3 mRearRightWheelPos;

				// VehicleAttribs.h:88
				Vector3 mCOMOffset;

				// VehicleAttribs.h:89
				Vector3Plus mCrashExtraVelocityFactors;

				// VehicleAttribs.h:90
				Vector4 mDrivetimeDeformLimits;

				// VehicleAttribs.h:121
				int32_t miRaceCarID;

				// VehicleAttribs.h:122
				InterpedParam3 mBrakeScaleToFactorCurve;

			private:
				// VehicleAttribs.h:378
				Vector4 mvMass_TimeForFullBrakeRecip_MaxSpeed_DownForce;

				// VehicleAttribs.h:379
				Vector4 mvDownForceZOffset_MagicBrakeFactorTurning_MagicBrakeFactorStraightLine_BrakeScaleToLockWheels;

				// VehicleAttribs.h:380
				Vector4 mvTractionLineLength_LowSpeedDrivingMPH_LowSpeedTyreFrictionTractionControl_LowSpeedThrottleTractionControl;

				// VehicleAttribs.h:381
				Vector4 mvLinearDrag_AngularDrag_HighSpeedAngularDamping_FrontWheelMass;

				// VehicleAttribs.h:382
				Vector4 mvRearWheelMass_PowerToFront_PowerToRear_DownForceLiftCo;

				// VehicleAttribs.h:383
				Vector4 mvPitchDampingOnTakeOff_YawDampingOnTakeOff_RollDampingOnTakeOff_RollLimitOnTakeOff;

				// VehicleAttribs.h:384
				Vector4 mvFrontSurfaceGripFactor_RearSurfaceGripFactor_SurfaceRoughnessFactor_SurfaceLinearDragFactor;

			public:
				// VehicleAttribs.h:126
				VecFloat GetDriveTimeDeformLimitX() const;

				// VehicleAttribs.h:130
				VecFloat GetDriveTimeDeformLimitNegY() const;

				// VehicleAttribs.h:134
				VecFloat GetDriveTimeDeformLimitPosZ() const;

				// VehicleAttribs.h:138
				VecFloat GetDriveTimeDeformLimitNegZ() const;

				// VehicleAttribs.h:142
				Vector3 GetCrashExtraAngularVelocityFactor() const;

				// VehicleAttribs.h:146
				VecFloat GetCrashExtraLinearVelocityFactor() const;

				// VehicleAttribs.h:150
				VecFloat GetMaxSpeedMps() const;

				// VehicleAttribs.h:154
				VecFloat GetMass() const;

				// VehicleAttribs.h:158
				VecFloat GetTimeForFullBrakeRecip() const;

				// VehicleAttribs.h:162
				VecFloat GetMaxSpeed() const;

				// VehicleAttribs.h:166
				VecFloat GetDownForce() const;

				// VehicleAttribs.h:170
				VecFloat GetDownForceZOffset() const;

				// VehicleAttribs.h:174
				VecFloat GetMagicBrakeFactorTurning() const;

				// VehicleAttribs.h:178
				VecFloat GetMagicBrakeFactorStraightLine() const;

				// VehicleAttribs.h:182
				VecFloat GetBrakeScaleToLockWheels() const;

				// VehicleAttribs.h:186
				VecFloat GetTractionLineLength() const;

				// VehicleAttribs.h:190
				VecFloat GetLowSpeedDrivingMPH() const;

				// VehicleAttribs.h:194
				VecFloat GetLowSpeedTyreFrictionTractionControl() const;

				// VehicleAttribs.h:198
				VecFloat GetLowSpeedThrottleTractionControl() const;

				// VehicleAttribs.h:202
				VecFloat GetLinearDrag() const;

				// VehicleAttribs.h:206
				VecFloat GetAngularDrag() const;

				// VehicleAttribs.h:210
				VecFloat GetHighSpeedAngularDamping() const;

				// VehicleAttribs.h:214
				VecFloat GetFrontWheelMass() const;

				// VehicleAttribs.h:218
				VecFloat GetRearWheelMass() const;

				// VehicleAttribs.h:222
				VecFloat GetPowerToFront() const;

				// VehicleAttribs.h:226
				VecFloat GetPowerToRear() const;

				// VehicleAttribs.h:230
				VecFloat GetDownForceLiftCo() const;

				// VehicleAttribs.h:234
				VecFloat GetPitchDampingOnTakeOff() const;

				// VehicleAttribs.h:238
				VecFloat GetYawDampingOnTakeOff() const;

				// VehicleAttribs.h:242
				VecFloat GetRollDampingOnTakeOff() const;

				// VehicleAttribs.h:246
				VecFloat GetRollLimitOnTakeOff() const;

				// VehicleAttribs.h:250
				VecFloat GetFrontSurfaceGripFactor() const;

				// VehicleAttribs.h:254
				VecFloat GetRearSurfaceGripFactor() const;

				// VehicleAttribs.h:258
				VecFloat GetSurfaceRoughnessFactor() const;

				// VehicleAttribs.h:262
				VecFloat GetSurfaceLinearDragFactor() const;

				// VehicleAttribs.h:266
				void SetMass(VecFloat);

				// VehicleAttribs.h:270
				void SetTimeForFullBrakeRecip(VecFloat);

				// VehicleAttribs.h:274
				void SetMaxSpeed(VecFloat);

				// VehicleAttribs.h:278
				void SetDownForce(VecFloat);

				// VehicleAttribs.h:282
				void SetDownForceZOffset(VecFloat);

				// VehicleAttribs.h:286
				void SetMagicBrakeFactorTurning(VecFloat);

				// VehicleAttribs.h:290
				void SetMagicBrakeFactorStraightLine(VecFloat);

				// VehicleAttribs.h:294
				void SetBrakeScaleToLockWheels(VecFloat);

				// VehicleAttribs.h:298
				void SetTractionLineLength(VecFloat);

				// VehicleAttribs.h:302
				void SetLowSpeedDrivingMPH(VecFloat);

				// VehicleAttribs.h:306
				void SetLowSpeedTyreFrictionTractionControl(VecFloat);

				// VehicleAttribs.h:310
				void SetLowSpeedThrottleTractionControl(VecFloat);

				// VehicleAttribs.h:314
				void SetLinearDrag(VecFloat);

				// VehicleAttribs.h:318
				void SetAngularDrag(VecFloat);

				// VehicleAttribs.h:322
				void SetHighSpeedAngularDamping(VecFloat);

				// VehicleAttribs.h:326
				void SetFrontWheelMass(VecFloat);

				// VehicleAttribs.h:330
				void SetRearWheelMass(VecFloat);

				// VehicleAttribs.h:334
				void SetPowerToFront(VecFloat);

				// VehicleAttribs.h:338
				void SetPowerToRear(VecFloat);

				// VehicleAttribs.h:342
				void SetDownForceLiftCo(VecFloat);

				// VehicleAttribs.h:346
				void SetPitchDampingOnTakeOff(VecFloat);

				// VehicleAttribs.h:350
				void SetYawDampingOnTakeOff(VecFloat);

				// VehicleAttribs.h:354
				void SetRollDampingOnTakeOff(VecFloat);

				// VehicleAttribs.h:358
				void SetRollLimitOnTakeOff(VecFloat);

				// VehicleAttribs.h:362
				void SetFrontSurfaceGripFactor(VecFloat);

				// VehicleAttribs.h:366
				void SetRearSurfaceGripFactor(VecFloat);

				// VehicleAttribs.h:370
				void SetSurfaceRoughnessFactor(VecFloat);

				// VehicleAttribs.h:374
				void SetSurfaceLinearDragFactor(VecFloat);

			}

			// VehicleAttribs.h:388
			struct SteeringAttribs {
			private:
				// VehicleAttribs.h:441
				VectorIntrinsicUnion::VectorIntrinsic mvReactionPerSec_SpeedForMinAngle_SpeedForMinAngleRecip_MinAngle;

				// VehicleAttribs.h:442
				VectorIntrinsicUnion::VectorIntrinsic mvMaxAngle_StraightReactionBias;

			public:
				// VehicleAttribs.h:392
				VecFloat GetReactionPerSec() const;

				// VehicleAttribs.h:396
				VecFloat GetSpeedForMinAngle() const;

				// VehicleAttribs.h:400
				VecFloat GetSpeedForMinAngleRecip() const;

				// VehicleAttribs.h:404
				VecFloat GetMinAngle() const;

				// VehicleAttribs.h:408
				VecFloat GetMaxAngle() const;

				// VehicleAttribs.h:412
				VecFloat GetStraightReactionBias() const;

				// VehicleAttribs.h:416
				void SetReactionPerSec(VecFloat);

				// VehicleAttribs.h:420
				void SetSpeedForMinAngle(VecFloat);

				// VehicleAttribs.h:424
				void SetSpeedForMinAngleRecip(VecFloat);

				// VehicleAttribs.h:428
				void SetMinAngle(VecFloat);

				// VehicleAttribs.h:432
				void SetMaxAngle(VecFloat);

				// VehicleAttribs.h:436
				void SetStraightReactionBias(VecFloat);

			}

			// VehicleAttribs.h:448
			struct DriftAttribs {
				// VehicleAttribs.h:450
				InterpedParam3 mDriftScaleToYawTorque;

			private:
				// VehicleAttribs.h:734
				Vector4 mvMinSpeedForDrift_SteeringDriftScaleFactor_CounterSteeringDriftScaleFactor_BaseCounterSteeringDriftScaleFactor;

				// VehicleAttribs.h:735
				Vector4 mvBrakingDriftScaleFactor_GasDriftScaleFactor_TimeToCapScale_CappedScale;

				// VehicleAttribs.h:736
				Vector4 mvDriftTorqueFallOff_GripFromSteering_GripFromBrake_TimeForNaturalDrift;

				// VehicleAttribs.h:737
				Vector4 mvNeutralTimeToReduceDrift_SideForceDriftScaleCutOff_SideForceDriftAngleCutOff_SideForceDriftSpeedCutOff;

				// VehicleAttribs.h:738
				Vector4 mvSideForcePeakDriftAngle_SideForceMagnitude_NaturalDriftDecay_NaturalDriftDecayPower;

				// VehicleAttribs.h:739
				Vector4 mvNaturalYawTorque_NaturalYawTorqueCutOffAngle_TorqueKickFromGasLetOff_DriftSidewaysDamping;

				// VehicleAttribs.h:740
				Vector4 mvDriftAngularDamping_MaxDriftAngle_CounterSteerTorqueScaleFactor_DriftPushTime;

				// VehicleAttribs.h:741
				Vector4 mvDriftPushScaleLimit_DriftPushBaseFactor_MaxPowerSlideFactor;

			public:
				// VehicleAttribs.h:485
				VecFloat GetMinSpeedForDrift() const;

				// VehicleAttribs.h:489
				VecFloat GetSteeringDriftScaleFactor() const;

				// VehicleAttribs.h:493
				VecFloat GetCounterSteeringDriftScaleFactor() const;

				// VehicleAttribs.h:497
				VecFloat GetBaseCounterSteeringDriftScaleFactor() const;

				// VehicleAttribs.h:501
				VecFloat GetBrakingDriftScaleFactor() const;

				// VehicleAttribs.h:505
				VecFloat GetGasDriftScaleFactor() const;

				// VehicleAttribs.h:509
				VecFloat GetTimeToCapScale() const;

				// VehicleAttribs.h:513
				VecFloat GetCappedScale() const;

				// VehicleAttribs.h:517
				VecFloat GetDriftTorqueFallOff() const;

				// VehicleAttribs.h:521
				VecFloat GetGripFromSteering() const;

				// VehicleAttribs.h:525
				VecFloat GetGripFromBrake() const;

				// VehicleAttribs.h:529
				VecFloat GetTimeForNaturalDrift() const;

				// VehicleAttribs.h:533
				VecFloat GetNeutralTimeToReduceDrift() const;

				// VehicleAttribs.h:537
				VecFloat GetSideForceDriftScaleCutOff() const;

				// VehicleAttribs.h:541
				VecFloat GetSideForceDriftAngleCutOff() const;

				// VehicleAttribs.h:545
				VecFloat GetSideForceDriftSpeedCutOff() const;

				// VehicleAttribs.h:549
				VecFloat GetSideForcePeakDriftAngle() const;

				// VehicleAttribs.h:553
				VecFloat GetSideForceMagnitude() const;

				// VehicleAttribs.h:557
				VecFloat GetNaturalDriftDecay() const;

				// VehicleAttribs.h:561
				VecFloat GetNaturalDriftDecayPower() const;

				// VehicleAttribs.h:565
				VecFloat GetNaturalYawTorque() const;

				// VehicleAttribs.h:569
				VecFloat GetNaturalYawTorqueCutOffAngle() const;

				// VehicleAttribs.h:573
				VecFloat GetTorqueKickFromGasLetOff() const;

				// VehicleAttribs.h:577
				VecFloat GetDriftSidewaysDamping() const;

				// VehicleAttribs.h:581
				VecFloat GetDriftAngularDamping() const;

				// VehicleAttribs.h:585
				VecFloat GetMaxDriftAngle() const;

				// VehicleAttribs.h:589
				VecFloat GetCounterSteerTorqueScaleFactor() const;

				// VehicleAttribs.h:593
				VecFloat GetDriftPushTime() const;

				// VehicleAttribs.h:597
				VecFloat GetDriftPushScaleLimit() const;

				// VehicleAttribs.h:601
				VecFloat GetDriftPushBaseFactor() const;

				// VehicleAttribs.h:605
				VecFloat GetMaxPowerSlideFactor() const;

				// VehicleAttribs.h:609
				void SetMinSpeedForDrift(VecFloat);

				// VehicleAttribs.h:613
				void SetSteeringDriftScaleFactor(VecFloat);

				// VehicleAttribs.h:617
				void SetCounterSteeringDriftScaleFactor(VecFloat);

				// VehicleAttribs.h:621
				void SetBaseCounterSteeringDriftScaleFactor(VecFloat);

				// VehicleAttribs.h:625
				void SetBrakingDriftScaleFactor(VecFloat);

				// VehicleAttribs.h:629
				void SetGasDriftScaleFactor(VecFloat);

				// VehicleAttribs.h:633
				void SetTimeToCapScale(VecFloat);

				// VehicleAttribs.h:637
				void SetCappedScale(VecFloat);

				// VehicleAttribs.h:641
				void SetDriftTorqueFallOff(VecFloat);

				// VehicleAttribs.h:645
				void SetGripFromSteering(VecFloat);

				// VehicleAttribs.h:649
				void SetGripFromBrake(VecFloat);

				// VehicleAttribs.h:653
				void SetTimeForNaturalDrift(VecFloat);

				// VehicleAttribs.h:657
				void SetNeutralTimeToReduceDrift(VecFloat);

				// VehicleAttribs.h:661
				void SetSideForceDriftScaleCutOff(VecFloat);

				// VehicleAttribs.h:665
				void SetSideForceDriftAngleCutOff(VecFloat);

				// VehicleAttribs.h:669
				void SetSideForceDriftSpeedCutOff(VecFloat);

				// VehicleAttribs.h:673
				void SetSideForcePeakDriftAngle(VecFloat);

				// VehicleAttribs.h:677
				void SetSideForceMagnitude(VecFloat);

				// VehicleAttribs.h:681
				void SetNaturalDriftDecay(VecFloat);

				// VehicleAttribs.h:685
				void SetNaturalDriftDecayPower(VecFloat);

				// VehicleAttribs.h:689
				void SetNaturalYawTorque(VecFloat);

				// VehicleAttribs.h:693
				void SetNaturalYawTorqueCutOffAngle(VecFloat);

				// VehicleAttribs.h:697
				void SetTorqueKickFromGasLetOff(VecFloat);

				// VehicleAttribs.h:701
				void SetDriftSidewaysDamping(VecFloat);

				// VehicleAttribs.h:705
				void SetDriftAngularDamping(VecFloat);

				// VehicleAttribs.h:709
				void SetMaxDriftAngle(VecFloat);

				// VehicleAttribs.h:713
				void SetCounterSteerTorqueScaleFactor(VecFloat);

				// VehicleAttribs.h:717
				void SetDriftPushTime(VecFloat);

				// VehicleAttribs.h:721
				void SetDriftPushScaleLimit(VecFloat);

				// VehicleAttribs.h:725
				void SetDriftPushBaseFactor(VecFloat);

				// VehicleAttribs.h:729
				void SetMaxPowerSlideFactor(VecFloat);

			}

			// VehicleAttribs.h:746
			struct EngineAttribs {
				// VehicleAttribs.h:748
				extern const RwInt32 knMaxNumGears = 6;

				// VehicleAttribs.h:760
				InterpedParam3 mTorqueCurve;

			private:
				// VehicleAttribs.h:891
				Vector4 mvDifferential_TransmissionEfficiency_EngineResistance_GearDownRPM;

				// VehicleAttribs.h:892
				Vector4 mvMaxTorque_TorqueFallOffRPM_MaxRPM_LSDMSpeedToAllowGearChanges;

				// VehicleAttribs.h:893
				Vector4 mvFlyWheelInertia_FlyWheelFriction_GearChangeTime;

				// VehicleAttribs.h:895
				Vector3[6] mavGearRatios_TorqueScales_GearUpRPMs;

			public:
				// VehicleAttribs.h:751
				void Construct();

				// VehicleAttribs.h:755
				void InitializeFromAttribs(physicsvehicleengineattribs &);

				// VehicleAttribs.h:758
				void InitializeForAI();

				// VehicleAttribs.h:778
				VecFloat GetDifferential() const;

				// VehicleAttribs.h:782
				VecFloat GetTransmissionEfficiency() const;

				// VehicleAttribs.h:786
				VecFloat GetEngineResistance() const;

				// VehicleAttribs.h:790
				VecFloat GetGearDownRPM() const;

				// VehicleAttribs.h:794
				VecFloat GetMaxTorque() const;

				// VehicleAttribs.h:798
				VecFloat GetTorqueFallOffRPM() const;

				// VehicleAttribs.h:802
				VecFloat GetMaxRPM() const;

				// VehicleAttribs.h:806
				VecFloat GetLSDMSpeedToAllowGearChanges() const;

				// VehicleAttribs.h:810
				VecFloat GetFlyWheelInertia() const;

				// VehicleAttribs.h:814
				VecFloat GetFlyWheelFriction() const;

				// VehicleAttribs.h:818
				VecFloat GetGearChangeTime() const;

				// VehicleAttribs.h:822
				VecFloat GetGearRatio(int32_t) const;

				// VehicleAttribs.h:826
				VecFloat GetTorqueScale(int32_t) const;

				// VehicleAttribs.h:830
				VecFloat GetGearUpRPM(int32_t) const;

				// VehicleAttribs.h:834
				void SetDifferential(VecFloat);

				// VehicleAttribs.h:838
				void SetTransmissionEfficiency(VecFloat);

				// VehicleAttribs.h:842
				void SetEngineResistance(VecFloat);

				// VehicleAttribs.h:846
				void SetGearDownRPM(VecFloat);

				// VehicleAttribs.h:850
				void SetMaxTorque(VecFloat);

				// VehicleAttribs.h:854
				void SetTorqueFallOffRPM(VecFloat);

				// VehicleAttribs.h:858
				void SetMaxRPM(VecFloat);

				// VehicleAttribs.h:862
				void SetLSDMSpeedToAllowGearChanges(VecFloat);

				// VehicleAttribs.h:866
				void SetFlyWheelInertia(VecFloat);

				// VehicleAttribs.h:870
				void SetFlyWheelFriction(VecFloat);

				// VehicleAttribs.h:874
				void SetGearChangeTime(VecFloat);

				// VehicleAttribs.h:878
				void SetGearRatio(int32_t, VecFloat);

				// VehicleAttribs.h:882
				void SetTorqueScale(int32_t, VecFloat);

				// VehicleAttribs.h:886
				void SetGearUpRPM(int32_t, VecFloat);

			}

			// VehicleAttribs.h:900
			struct SuspensionAttribs {
			private:
				// VehicleAttribs.h:1015
				Vector4 mvRestDisplacement_Dampening_UpwardMovement_DownwardMovement;

				// VehicleAttribs.h:1016
				Vector4 mvFrontWheelHeightOffset_RearWheelHeightOffset_InAirDamping_MaxPitchDampingOnLanding;

				// VehicleAttribs.h:1017
				Vector4 mvMaxYawDampingOnLanding_MaxRollDampingOnLanding_MaxVertVelocityDampingOnLanding_TimeToDampAfterLanding;

			public:
				// VehicleAttribs.h:918
				VecFloat GetRestDisplacement() const;

				// VehicleAttribs.h:922
				VecFloat GetDampening() const;

				// VehicleAttribs.h:926
				VecFloat GetUpwardMovement() const;

				// VehicleAttribs.h:930
				VecFloat GetDownwardMovement() const;

				// VehicleAttribs.h:934
				VecFloat GetFrontWheelHeightOffset() const;

				// VehicleAttribs.h:938
				VecFloat GetRearWheelHeightOffset() const;

				// VehicleAttribs.h:942
				VecFloat GetInAirDamping() const;

				// VehicleAttribs.h:946
				VecFloat GetMaxPitchDampingOnLanding() const;

				// VehicleAttribs.h:950
				VecFloat GetMaxYawDampingOnLanding() const;

				// VehicleAttribs.h:954
				VecFloat GetMaxRollDampingOnLanding() const;

				// VehicleAttribs.h:958
				VecFloat GetMaxVertVelocityDampingOnLanding() const;

				// VehicleAttribs.h:962
				VecFloat GetTimeToDampAfterLanding() const;

				// VehicleAttribs.h:966
				void SetRestDisplacement(VecFloat);

				// VehicleAttribs.h:970
				void SetDampening(VecFloat);

				// VehicleAttribs.h:974
				void SetUpwardMovement(VecFloat);

				// VehicleAttribs.h:978
				void SetDownwardMovement(VecFloat);

				// VehicleAttribs.h:982
				void SetFrontWheelHeightOffset(VecFloat);

				// VehicleAttribs.h:986
				void SetRearWheelHeightOffset(VecFloat);

				// VehicleAttribs.h:990
				void SetInAirDamping(VecFloat);

				// VehicleAttribs.h:994
				void SetMaxPitchDampingOnLanding(VecFloat);

				// VehicleAttribs.h:998
				void SetMaxYawDampingOnLanding(VecFloat);

				// VehicleAttribs.h:1002
				void SetMaxRollDampingOnLanding(VecFloat);

				// VehicleAttribs.h:1006
				void SetMaxVertVelocityDampingOnLanding(VecFloat);

				// VehicleAttribs.h:1010
				void SetTimeToDampAfterLanding(VecFloat);

			}

			// VehicleAttribs.h:1022
			struct BodyRollAttribs {
			private:
				// VehicleAttribs.h:1081
				Vector4 mvWeightTransferDecayX_WeightTransferDecayZ_FactorOfWeightX_FactorOfWeightZ;

				// VehicleAttribs.h:1082
				Vector4 mvWheelLongForceHeightOffset_WheelLatForceHeightOffset;

			public:
				// VehicleAttribs.h:1032
				VecFloat GetWeightTransferDecayX() const;

				// VehicleAttribs.h:1036
				VecFloat GetWeightTransferDecayZ() const;

				// VehicleAttribs.h:1040
				VecFloat GetFactorOfWeightX() const;

				// VehicleAttribs.h:1044
				VecFloat GetFactorOfWeightZ() const;

				// VehicleAttribs.h:1048
				VecFloat GetWheelLongForceHeightOffset() const;

				// VehicleAttribs.h:1052
				VecFloat GetWheelLatForceHeightOffset() const;

				// VehicleAttribs.h:1056
				void SetWeightTransferDecayX(VecFloat);

				// VehicleAttribs.h:1060
				void SetWeightTransferDecayZ(VecFloat);

				// VehicleAttribs.h:1064
				void SetFactorOfWeightX(VecFloat);

				// VehicleAttribs.h:1068
				void SetFactorOfWeightZ(VecFloat);

				// VehicleAttribs.h:1072
				void SetWheelLongForceHeightOffset(VecFloat);

				// VehicleAttribs.h:1076
				void SetWheelLatForceHeightOffset(VecFloat);

			}

			// VehicleAttribs.h:1087
			struct CollisionAttribs {
			private:
				// VehicleAttribs.h:1106
				Vector4 mvCrashSpeedMPS_CarAngularImpulseScale_Spare_Spare;

			public:
				// VehicleAttribs.h:1090
				VecFloat GetCrashSpeedMPS() const;

				// VehicleAttribs.h:1094
				void SetCrashSpeedMPS(VecFloat);

				// VehicleAttribs.h:1098
				VecFloat GetCarAngularImpulseScale() const;

				// VehicleAttribs.h:1102
				void SetCarAngularImpulseScale(VecFloat);

			}

			// VehicleAttribs.h:1110
			struct BoostAttribs {
			private:
				// VehicleAttribs.h:1113
				Vector4 mvBoostBase_MaxBoostSpeed_BoostLinearDrag_NormalBoostHeightOffset;

				// VehicleAttribs.h:1114
				Vector4 mvNormalBoostAcceleration_BoostKickMaxStartSpeed_BoostKickMaxTime_BoostKickMinTime;

				// VehicleAttribs.h:1115
				Vector4 mvBoostKickAcceleration_BoostKickHeightOffset;

				// Unknown accessibility
				// VehicleAttribs.h:1216
				int32_t miBoostRule;

			public:
				// VehicleAttribs.h:1135
				VecFloat GetBoostBase() const;

				// VehicleAttribs.h:1139
				VecFloat GetMaxBoostSpeed() const;

				// VehicleAttribs.h:1143
				VecFloat GetBoostLinearDrag() const;

				// VehicleAttribs.h:1147
				VecFloat GetNormalBoostHeightOffset() const;

				// VehicleAttribs.h:1151
				VecFloat GetNormalBoostAcceleration() const;

				// VehicleAttribs.h:1155
				VecFloat GetBoostKickMaxStartSpeed() const;

				// VehicleAttribs.h:1159
				VecFloat GetBoostKickMaxTime() const;

				// VehicleAttribs.h:1163
				VecFloat GetBoostKickMinTime() const;

				// VehicleAttribs.h:1167
				VecFloat GetBoostKickAcceleration() const;

				// VehicleAttribs.h:1171
				VecFloat GetBoostKickHeightOffset() const;

				// VehicleAttribs.h:1175
				void SetBoostBase(VecFloat);

				// VehicleAttribs.h:1179
				void SetMaxBoostSpeed(VecFloat);

				// VehicleAttribs.h:1183
				void SetBoostLinearDrag(VecFloat);

				// VehicleAttribs.h:1187
				void SetNormalBoostHeightOffset(VecFloat);

				// VehicleAttribs.h:1191
				void SetNormalBoostAcceleration(VecFloat);

				// VehicleAttribs.h:1195
				void SetBoostKickMaxStartSpeed(VecFloat);

				// VehicleAttribs.h:1199
				void SetBoostKickMaxTime(VecFloat);

				// VehicleAttribs.h:1203
				void SetBoostKickMinTime(VecFloat);

				// VehicleAttribs.h:1207
				void SetBoostKickAcceleration(VecFloat);

				// VehicleAttribs.h:1211
				void SetBoostKickHeightOffset(VecFloat);

			}

		}

	}

}

// VehicleAttribs.h:59
struct BrnPhysics::Vehicle::VehicleAttribs {
	// VehicleAttribs.h:62
	extern const float32_t krMPS2MPH;

	// VehicleAttribs.h:63
	extern const float32_t krMPH2MPS;

	// VehicleAttribs.h:1250
	BrnPhysics::Vehicle::VehicleAttribs::VehicleBaseAttribs mBaseAttribs;

	// VehicleAttribs.h:1251
	BrnPhysics::Vehicle::VehicleAttribs::SteeringAttribs mSteeringAttribs;

	// VehicleAttribs.h:1252
	BrnPhysics::Vehicle::VehicleAttribs::DriftAttribs mDriftAttribs;

	// VehicleAttribs.h:1253
	BrnPhysics::Vehicle::VehicleAttribs::EngineAttribs mEngineAttribs;

	// VehicleAttribs.h:1254
	BrnPhysics::Vehicle::VehicleAttribs::SuspensionAttribs mSuspensionAttribs;

	// VehicleAttribs.h:1255
	BrnPhysics::Vehicle::VehicleAttribs::BodyRollAttribs mBodyRollAttribs;

	// VehicleAttribs.h:1256
	BrnPhysics::Vehicle::VehicleAttribs::CollisionAttribs mCollisionAttribs;

	// VehicleAttribs.h:1257
	BrnPhysics::Vehicle::VehicleAttribs::BoostAttribs mBoostAttribs;

	// VehicleAttribs.h:1259
	BrnPhysics::Vehicle::Wheel::TireAttribs mFrontTireAttribs;

	// VehicleAttribs.h:1260
	BrnPhysics::Vehicle::Wheel::TireAttribs mRearTireAttribs;

	// VehicleAttribs.h:1262
	int32_t miRaceCarID;

	// VehicleAttribs.h:1263
	Attribute::Key mAttribsKey;

private:
	// VehicleAttribs.h:1267
	bool mbIsValid;

public:
	// VehicleAttribs.h:66
	float32_t MPSToMPH(float32_t);

	// VehicleAttribs.h:70
	float32_t MPHToMPS(float32_t);

	// VehicleAttribs.h:75
	bool IsValid() const;

	// VehicleAttribs.h:80
	VehicleAttribs & operator=(const VehicleAttribs &);

	// VehicleAttribs.h:1221
	void Construct();

	// VehicleAttribs.h:1224
	void Destruct();

	// VehicleAttribs.h:1228
	bool Prepare(uint32_t);

	// VehicleAttribs.h:1231
	void Release();

	// VehicleAttribs.h:1235
	void SetupAttribs(physicsvehiclehandling);

	// VehicleAttribs.h:1239
	void SetupAttribsForAI(VehicleAttribs *);

	// VehicleAttribs.h:1242
	void SetupAttribsForDonutAI();

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// Declaration
		struct VehicleAttribs {
			// VehicleAttribs.h:84
			struct VehicleBaseAttribs {
				// VehicleAttribs.h:86
				Vector3 mFrontRightWheelPos;

				// VehicleAttribs.h:87
				Vector3 mRearRightWheelPos;

				// VehicleAttribs.h:88
				Vector3 mCOMOffset;

				// VehicleAttribs.h:89
				Vector3Plus mCrashExtraVelocityFactors;

				// VehicleAttribs.h:90
				Vector4 mDrivetimeDeformLimits;

				// VehicleAttribs.h:121
				int32_t miRaceCarID;

				// VehicleAttribs.h:122
				InterpedParam3 mBrakeScaleToFactorCurve;

			private:
				// VehicleAttribs.h:378
				Vector4 mvMass_TimeForFullBrakeRecip_MaxSpeed_DownForce;

				// VehicleAttribs.h:379
				Vector4 mvDownForceZOffset_MagicBrakeFactorTurning_MagicBrakeFactorStraightLine_BrakeScaleToLockWheels;

				// VehicleAttribs.h:380
				Vector4 mvTractionLineLength_LowSpeedDrivingMPH_LowSpeedTyreFrictionTractionControl_LowSpeedThrottleTractionControl;

				// VehicleAttribs.h:381
				Vector4 mvLinearDrag_AngularDrag_HighSpeedAngularDamping_FrontWheelMass;

				// VehicleAttribs.h:382
				Vector4 mvRearWheelMass_PowerToFront_PowerToRear_DownForceLiftCo;

				// VehicleAttribs.h:383
				Vector4 mvPitchDampingOnTakeOff_YawDampingOnTakeOff_RollDampingOnTakeOff_RollLimitOnTakeOff;

				// VehicleAttribs.h:384
				Vector4 mvFrontSurfaceGripFactor_RearSurfaceGripFactor_SurfaceRoughnessFactor_SurfaceLinearDragFactor;

			public:
				// VehicleAttribs.h:126
				VecFloat GetDriveTimeDeformLimitX() const;

				// VehicleAttribs.h:130
				VecFloat GetDriveTimeDeformLimitNegY() const;

				// VehicleAttribs.h:134
				VecFloat GetDriveTimeDeformLimitPosZ() const;

				// VehicleAttribs.h:138
				VecFloat GetDriveTimeDeformLimitNegZ() const;

				// VehicleAttribs.h:142
				Vector3 GetCrashExtraAngularVelocityFactor() const;

				// VehicleAttribs.h:146
				VecFloat GetCrashExtraLinearVelocityFactor() const;

				// VehicleAttribs.h:150
				VecFloat GetMaxSpeedMps() const;

				// VehicleAttribs.h:154
				VecFloat GetMass() const;

				// VehicleAttribs.h:158
				VecFloat GetTimeForFullBrakeRecip() const;

				// VehicleAttribs.h:162
				VecFloat GetMaxSpeed() const;

				// VehicleAttribs.h:166
				VecFloat GetDownForce() const;

				// VehicleAttribs.h:170
				VecFloat GetDownForceZOffset() const;

				// VehicleAttribs.h:174
				VecFloat GetMagicBrakeFactorTurning() const;

				// VehicleAttribs.h:178
				VecFloat GetMagicBrakeFactorStraightLine() const;

				// VehicleAttribs.h:182
				VecFloat GetBrakeScaleToLockWheels() const;

				// VehicleAttribs.h:186
				VecFloat GetTractionLineLength() const;

				// VehicleAttribs.h:190
				VecFloat GetLowSpeedDrivingMPH() const;

				// VehicleAttribs.h:194
				VecFloat GetLowSpeedTyreFrictionTractionControl() const;

				// VehicleAttribs.h:198
				VecFloat GetLowSpeedThrottleTractionControl() const;

				// VehicleAttribs.h:202
				VecFloat GetLinearDrag() const;

				// VehicleAttribs.h:206
				VecFloat GetAngularDrag() const;

				// VehicleAttribs.h:210
				VecFloat GetHighSpeedAngularDamping() const;

				// VehicleAttribs.h:214
				VecFloat GetFrontWheelMass() const;

				// VehicleAttribs.h:218
				VecFloat GetRearWheelMass() const;

				// VehicleAttribs.h:222
				VecFloat GetPowerToFront() const;

				// VehicleAttribs.h:226
				VecFloat GetPowerToRear() const;

				// VehicleAttribs.h:230
				VecFloat GetDownForceLiftCo() const;

				// VehicleAttribs.h:234
				VecFloat GetPitchDampingOnTakeOff() const;

				// VehicleAttribs.h:238
				VecFloat GetYawDampingOnTakeOff() const;

				// VehicleAttribs.h:242
				VecFloat GetRollDampingOnTakeOff() const;

				// VehicleAttribs.h:246
				VecFloat GetRollLimitOnTakeOff() const;

				// VehicleAttribs.h:250
				VecFloat GetFrontSurfaceGripFactor() const;

				// VehicleAttribs.h:254
				VecFloat GetRearSurfaceGripFactor() const;

				// VehicleAttribs.h:258
				VecFloat GetSurfaceRoughnessFactor() const;

				// VehicleAttribs.h:262
				VecFloat GetSurfaceLinearDragFactor() const;

				// VehicleAttribs.h:266
				void SetMass(VecFloat);

				// VehicleAttribs.h:270
				void SetTimeForFullBrakeRecip(VecFloat);

				// VehicleAttribs.h:274
				void SetMaxSpeed(VecFloat);

				// VehicleAttribs.h:278
				void SetDownForce(VecFloat);

				// VehicleAttribs.h:282
				void SetDownForceZOffset(VecFloat);

				// VehicleAttribs.h:286
				void SetMagicBrakeFactorTurning(VecFloat);

				// VehicleAttribs.h:290
				void SetMagicBrakeFactorStraightLine(VecFloat);

				// VehicleAttribs.h:294
				void SetBrakeScaleToLockWheels(VecFloat);

				// VehicleAttribs.h:298
				void SetTractionLineLength(VecFloat);

				// VehicleAttribs.h:302
				void SetLowSpeedDrivingMPH(VecFloat);

				// VehicleAttribs.h:306
				void SetLowSpeedTyreFrictionTractionControl(VecFloat);

				// VehicleAttribs.h:310
				void SetLowSpeedThrottleTractionControl(VecFloat);

				// VehicleAttribs.h:314
				void SetLinearDrag(VecFloat);

				// VehicleAttribs.h:318
				void SetAngularDrag(VecFloat);

				// VehicleAttribs.h:322
				void SetHighSpeedAngularDamping(VecFloat);

				// VehicleAttribs.h:326
				void SetFrontWheelMass(VecFloat);

				// VehicleAttribs.h:330
				void SetRearWheelMass(VecFloat);

				// VehicleAttribs.h:334
				void SetPowerToFront(VecFloat);

				// VehicleAttribs.h:338
				void SetPowerToRear(VecFloat);

				// VehicleAttribs.h:342
				void SetDownForceLiftCo(VecFloat);

				// VehicleAttribs.h:346
				void SetPitchDampingOnTakeOff(VecFloat);

				// VehicleAttribs.h:350
				void SetYawDampingOnTakeOff(VecFloat);

				// VehicleAttribs.h:354
				void SetRollDampingOnTakeOff(VecFloat);

				// VehicleAttribs.h:358
				void SetRollLimitOnTakeOff(VecFloat);

				// VehicleAttribs.h:362
				void SetFrontSurfaceGripFactor(VecFloat);

				// VehicleAttribs.h:366
				void SetRearSurfaceGripFactor(VecFloat);

				// VehicleAttribs.h:370
				void SetSurfaceRoughnessFactor(VecFloat);

				// VehicleAttribs.h:374
				void SetSurfaceLinearDragFactor(VecFloat);

			}

			// VehicleAttribs.h:388
			struct SteeringAttribs {
			private:
				// VehicleAttribs.h:441
				VectorIntrinsicUnion::VectorIntrinsic mvReactionPerSec_SpeedForMinAngle_SpeedForMinAngleRecip_MinAngle;

				// VehicleAttribs.h:442
				VectorIntrinsicUnion::VectorIntrinsic mvMaxAngle_StraightReactionBias;

			public:
				// VehicleAttribs.h:392
				VecFloat GetReactionPerSec() const;

				// VehicleAttribs.h:396
				VecFloat GetSpeedForMinAngle() const;

				// VehicleAttribs.h:400
				VecFloat GetSpeedForMinAngleRecip() const;

				// VehicleAttribs.h:404
				VecFloat GetMinAngle() const;

				// VehicleAttribs.h:408
				VecFloat GetMaxAngle() const;

				// VehicleAttribs.h:412
				VecFloat GetStraightReactionBias() const;

				// VehicleAttribs.h:416
				void SetReactionPerSec(VecFloat);

				// VehicleAttribs.h:420
				void SetSpeedForMinAngle(VecFloat);

				// VehicleAttribs.h:424
				void SetSpeedForMinAngleRecip(VecFloat);

				// VehicleAttribs.h:428
				void SetMinAngle(VecFloat);

				// VehicleAttribs.h:432
				void SetMaxAngle(VecFloat);

				// VehicleAttribs.h:436
				void SetStraightReactionBias(VecFloat);

			}

			// VehicleAttribs.h:448
			struct DriftAttribs {
				// VehicleAttribs.h:450
				InterpedParam3 mDriftScaleToYawTorque;

			private:
				// VehicleAttribs.h:734
				Vector4 mvMinSpeedForDrift_SteeringDriftScaleFactor_CounterSteeringDriftScaleFactor_BaseCounterSteeringDriftScaleFactor;

				// VehicleAttribs.h:735
				Vector4 mvBrakingDriftScaleFactor_GasDriftScaleFactor_TimeToCapScale_CappedScale;

				// VehicleAttribs.h:736
				Vector4 mvDriftTorqueFallOff_GripFromSteering_GripFromBrake_TimeForNaturalDrift;

				// VehicleAttribs.h:737
				Vector4 mvNeutralTimeToReduceDrift_SideForceDriftScaleCutOff_SideForceDriftAngleCutOff_SideForceDriftSpeedCutOff;

				// VehicleAttribs.h:738
				Vector4 mvSideForcePeakDriftAngle_SideForceMagnitude_NaturalDriftDecay_NaturalDriftDecayPower;

				// VehicleAttribs.h:739
				Vector4 mvNaturalYawTorque_NaturalYawTorqueCutOffAngle_TorqueKickFromGasLetOff_DriftSidewaysDamping;

				// VehicleAttribs.h:740
				Vector4 mvDriftAngularDamping_MaxDriftAngle_CounterSteerTorqueScaleFactor_DriftPushTime;

				// VehicleAttribs.h:741
				Vector4 mvDriftPushScaleLimit_DriftPushBaseFactor_MaxPowerSlideFactor;

			public:
				// VehicleAttribs.h:485
				VecFloat GetMinSpeedForDrift() const;

				// VehicleAttribs.h:489
				VecFloat GetSteeringDriftScaleFactor() const;

				// VehicleAttribs.h:493
				VecFloat GetCounterSteeringDriftScaleFactor() const;

				// VehicleAttribs.h:497
				VecFloat GetBaseCounterSteeringDriftScaleFactor() const;

				// VehicleAttribs.h:501
				VecFloat GetBrakingDriftScaleFactor() const;

				// VehicleAttribs.h:505
				VecFloat GetGasDriftScaleFactor() const;

				// VehicleAttribs.h:509
				VecFloat GetTimeToCapScale() const;

				// VehicleAttribs.h:513
				VecFloat GetCappedScale() const;

				// VehicleAttribs.h:517
				VecFloat GetDriftTorqueFallOff() const;

				// VehicleAttribs.h:521
				VecFloat GetGripFromSteering() const;

				// VehicleAttribs.h:525
				VecFloat GetGripFromBrake() const;

				// VehicleAttribs.h:529
				VecFloat GetTimeForNaturalDrift() const;

				// VehicleAttribs.h:533
				VecFloat GetNeutralTimeToReduceDrift() const;

				// VehicleAttribs.h:537
				VecFloat GetSideForceDriftScaleCutOff() const;

				// VehicleAttribs.h:541
				VecFloat GetSideForceDriftAngleCutOff() const;

				// VehicleAttribs.h:545
				VecFloat GetSideForceDriftSpeedCutOff() const;

				// VehicleAttribs.h:549
				VecFloat GetSideForcePeakDriftAngle() const;

				// VehicleAttribs.h:553
				VecFloat GetSideForceMagnitude() const;

				// VehicleAttribs.h:557
				VecFloat GetNaturalDriftDecay() const;

				// VehicleAttribs.h:561
				VecFloat GetNaturalDriftDecayPower() const;

				// VehicleAttribs.h:565
				VecFloat GetNaturalYawTorque() const;

				// VehicleAttribs.h:569
				VecFloat GetNaturalYawTorqueCutOffAngle() const;

				// VehicleAttribs.h:573
				VecFloat GetTorqueKickFromGasLetOff() const;

				// VehicleAttribs.h:577
				VecFloat GetDriftSidewaysDamping() const;

				// VehicleAttribs.h:581
				VecFloat GetDriftAngularDamping() const;

				// VehicleAttribs.h:585
				VecFloat GetMaxDriftAngle() const;

				// VehicleAttribs.h:589
				VecFloat GetCounterSteerTorqueScaleFactor() const;

				// VehicleAttribs.h:593
				VecFloat GetDriftPushTime() const;

				// VehicleAttribs.h:597
				VecFloat GetDriftPushScaleLimit() const;

				// VehicleAttribs.h:601
				VecFloat GetDriftPushBaseFactor() const;

				// VehicleAttribs.h:605
				VecFloat GetMaxPowerSlideFactor() const;

				// VehicleAttribs.h:609
				void SetMinSpeedForDrift(VecFloat);

				// VehicleAttribs.h:613
				void SetSteeringDriftScaleFactor(VecFloat);

				// VehicleAttribs.h:617
				void SetCounterSteeringDriftScaleFactor(VecFloat);

				// VehicleAttribs.h:621
				void SetBaseCounterSteeringDriftScaleFactor(VecFloat);

				// VehicleAttribs.h:625
				void SetBrakingDriftScaleFactor(VecFloat);

				// VehicleAttribs.h:629
				void SetGasDriftScaleFactor(VecFloat);

				// VehicleAttribs.h:633
				void SetTimeToCapScale(VecFloat);

				// VehicleAttribs.h:637
				void SetCappedScale(VecFloat);

				// VehicleAttribs.h:641
				void SetDriftTorqueFallOff(VecFloat);

				// VehicleAttribs.h:645
				void SetGripFromSteering(VecFloat);

				// VehicleAttribs.h:649
				void SetGripFromBrake(VecFloat);

				// VehicleAttribs.h:653
				void SetTimeForNaturalDrift(VecFloat);

				// VehicleAttribs.h:657
				void SetNeutralTimeToReduceDrift(VecFloat);

				// VehicleAttribs.h:661
				void SetSideForceDriftScaleCutOff(VecFloat);

				// VehicleAttribs.h:665
				void SetSideForceDriftAngleCutOff(VecFloat);

				// VehicleAttribs.h:669
				void SetSideForceDriftSpeedCutOff(VecFloat);

				// VehicleAttribs.h:673
				void SetSideForcePeakDriftAngle(VecFloat);

				// VehicleAttribs.h:677
				void SetSideForceMagnitude(VecFloat);

				// VehicleAttribs.h:681
				void SetNaturalDriftDecay(VecFloat);

				// VehicleAttribs.h:685
				void SetNaturalDriftDecayPower(VecFloat);

				// VehicleAttribs.h:689
				void SetNaturalYawTorque(VecFloat);

				// VehicleAttribs.h:693
				void SetNaturalYawTorqueCutOffAngle(VecFloat);

				// VehicleAttribs.h:697
				void SetTorqueKickFromGasLetOff(VecFloat);

				// VehicleAttribs.h:701
				void SetDriftSidewaysDamping(VecFloat);

				// VehicleAttribs.h:705
				void SetDriftAngularDamping(VecFloat);

				// VehicleAttribs.h:709
				void SetMaxDriftAngle(VecFloat);

				// VehicleAttribs.h:713
				void SetCounterSteerTorqueScaleFactor(VecFloat);

				// VehicleAttribs.h:717
				void SetDriftPushTime(VecFloat);

				// VehicleAttribs.h:721
				void SetDriftPushScaleLimit(VecFloat);

				// VehicleAttribs.h:725
				void SetDriftPushBaseFactor(VecFloat);

				// VehicleAttribs.h:729
				void SetMaxPowerSlideFactor(VecFloat);

			}

			// VehicleAttribs.h:746
			struct EngineAttribs {
				// VehicleAttribs.h:748
				extern const RwInt32 knMaxNumGears = 6;

				// VehicleAttribs.h:760
				InterpedParam3 mTorqueCurve;

			private:
				// VehicleAttribs.h:891
				Vector4 mvDifferential_TransmissionEfficiency_EngineResistance_GearDownRPM;

				// VehicleAttribs.h:892
				Vector4 mvMaxTorque_TorqueFallOffRPM_MaxRPM_LSDMSpeedToAllowGearChanges;

				// VehicleAttribs.h:893
				Vector4 mvFlyWheelInertia_FlyWheelFriction_GearChangeTime;

				// VehicleAttribs.h:895
				Vector3[6] mavGearRatios_TorqueScales_GearUpRPMs;

			public:
				// VehicleAttribs.h:751
				void Construct();

				// VehicleAttribs.h:755
				void InitializeFromAttribs(physicsvehicleengineattribs &);

				// VehicleAttribs.h:758
				void InitializeForAI();

				// VehicleAttribs.h:778
				VecFloat GetDifferential() const;

				// VehicleAttribs.h:782
				VecFloat GetTransmissionEfficiency() const;

				// VehicleAttribs.h:786
				VecFloat GetEngineResistance() const;

				// VehicleAttribs.h:790
				VecFloat GetGearDownRPM() const;

				// VehicleAttribs.h:794
				VecFloat GetMaxTorque() const;

				// VehicleAttribs.h:798
				VecFloat GetTorqueFallOffRPM() const;

				// VehicleAttribs.h:802
				VecFloat GetMaxRPM() const;

				// VehicleAttribs.h:806
				VecFloat GetLSDMSpeedToAllowGearChanges() const;

				// VehicleAttribs.h:810
				VecFloat GetFlyWheelInertia() const;

				// VehicleAttribs.h:814
				VecFloat GetFlyWheelFriction() const;

				// VehicleAttribs.h:818
				VecFloat GetGearChangeTime() const;

				// VehicleAttribs.h:822
				VecFloat GetGearRatio(int32_t) const;

				// VehicleAttribs.h:826
				VecFloat GetTorqueScale(int32_t) const;

				// VehicleAttribs.h:830
				VecFloat GetGearUpRPM(int32_t) const;

				// VehicleAttribs.h:834
				void SetDifferential(VecFloat);

				// VehicleAttribs.h:838
				void SetTransmissionEfficiency(VecFloat);

				// VehicleAttribs.h:842
				void SetEngineResistance(VecFloat);

				// VehicleAttribs.h:846
				void SetGearDownRPM(VecFloat);

				// VehicleAttribs.h:850
				void SetMaxTorque(VecFloat);

				// VehicleAttribs.h:854
				void SetTorqueFallOffRPM(VecFloat);

				// VehicleAttribs.h:858
				void SetMaxRPM(VecFloat);

				// VehicleAttribs.h:862
				void SetLSDMSpeedToAllowGearChanges(VecFloat);

				// VehicleAttribs.h:866
				void SetFlyWheelInertia(VecFloat);

				// VehicleAttribs.h:870
				void SetFlyWheelFriction(VecFloat);

				// VehicleAttribs.h:874
				void SetGearChangeTime(VecFloat);

				// VehicleAttribs.h:878
				void SetGearRatio(int32_t, VecFloat);

				// VehicleAttribs.h:882
				void SetTorqueScale(int32_t, VecFloat);

				// VehicleAttribs.h:886
				void SetGearUpRPM(int32_t, VecFloat);

			}

			// VehicleAttribs.h:900
			struct SuspensionAttribs {
			private:
				// VehicleAttribs.h:1015
				Vector4 mvRestDisplacement_Dampening_UpwardMovement_DownwardMovement;

				// VehicleAttribs.h:1016
				Vector4 mvFrontWheelHeightOffset_RearWheelHeightOffset_InAirDamping_MaxPitchDampingOnLanding;

				// VehicleAttribs.h:1017
				Vector4 mvMaxYawDampingOnLanding_MaxRollDampingOnLanding_MaxVertVelocityDampingOnLanding_TimeToDampAfterLanding;

			public:
				// VehicleAttribs.h:918
				VecFloat GetRestDisplacement() const;

				// VehicleAttribs.h:922
				VecFloat GetDampening() const;

				// VehicleAttribs.h:926
				VecFloat GetUpwardMovement() const;

				// VehicleAttribs.h:930
				VecFloat GetDownwardMovement() const;

				// VehicleAttribs.h:934
				VecFloat GetFrontWheelHeightOffset() const;

				// VehicleAttribs.h:938
				VecFloat GetRearWheelHeightOffset() const;

				// VehicleAttribs.h:942
				VecFloat GetInAirDamping() const;

				// VehicleAttribs.h:946
				VecFloat GetMaxPitchDampingOnLanding() const;

				// VehicleAttribs.h:950
				VecFloat GetMaxYawDampingOnLanding() const;

				// VehicleAttribs.h:954
				VecFloat GetMaxRollDampingOnLanding() const;

				// VehicleAttribs.h:958
				VecFloat GetMaxVertVelocityDampingOnLanding() const;

				// VehicleAttribs.h:962
				VecFloat GetTimeToDampAfterLanding() const;

				// VehicleAttribs.h:966
				void SetRestDisplacement(VecFloat);

				// VehicleAttribs.h:970
				void SetDampening(VecFloat);

				// VehicleAttribs.h:974
				void SetUpwardMovement(VecFloat);

				// VehicleAttribs.h:978
				void SetDownwardMovement(VecFloat);

				// VehicleAttribs.h:982
				void SetFrontWheelHeightOffset(VecFloat);

				// VehicleAttribs.h:986
				void SetRearWheelHeightOffset(VecFloat);

				// VehicleAttribs.h:990
				void SetInAirDamping(VecFloat);

				// VehicleAttribs.h:994
				void SetMaxPitchDampingOnLanding(VecFloat);

				// VehicleAttribs.h:998
				void SetMaxYawDampingOnLanding(VecFloat);

				// VehicleAttribs.h:1002
				void SetMaxRollDampingOnLanding(VecFloat);

				// VehicleAttribs.h:1006
				void SetMaxVertVelocityDampingOnLanding(VecFloat);

				// VehicleAttribs.h:1010
				void SetTimeToDampAfterLanding(VecFloat);

			}

			// VehicleAttribs.h:1022
			struct BodyRollAttribs {
			private:
				// VehicleAttribs.h:1081
				Vector4 mvWeightTransferDecayX_WeightTransferDecayZ_FactorOfWeightX_FactorOfWeightZ;

				// VehicleAttribs.h:1082
				Vector4 mvWheelLongForceHeightOffset_WheelLatForceHeightOffset;

			public:
				// VehicleAttribs.h:1032
				VecFloat GetWeightTransferDecayX() const;

				// VehicleAttribs.h:1036
				VecFloat GetWeightTransferDecayZ() const;

				// VehicleAttribs.h:1040
				VecFloat GetFactorOfWeightX() const;

				// VehicleAttribs.h:1044
				VecFloat GetFactorOfWeightZ() const;

				// VehicleAttribs.h:1048
				VecFloat GetWheelLongForceHeightOffset() const;

				// VehicleAttribs.h:1052
				VecFloat GetWheelLatForceHeightOffset() const;

				// VehicleAttribs.h:1056
				void SetWeightTransferDecayX(VecFloat);

				// VehicleAttribs.h:1060
				void SetWeightTransferDecayZ(VecFloat);

				// VehicleAttribs.h:1064
				void SetFactorOfWeightX(VecFloat);

				// VehicleAttribs.h:1068
				void SetFactorOfWeightZ(VecFloat);

				// VehicleAttribs.h:1072
				void SetWheelLongForceHeightOffset(VecFloat);

				// VehicleAttribs.h:1076
				void SetWheelLatForceHeightOffset(VecFloat);

			}

			// VehicleAttribs.h:1087
			struct CollisionAttribs {
			private:
				// VehicleAttribs.h:1106
				Vector4 mvCrashSpeedMPS_CarAngularImpulseScale_Spare_Spare;

			public:
				// VehicleAttribs.h:1090
				VecFloat GetCrashSpeedMPS() const;

				// VehicleAttribs.h:1094
				void SetCrashSpeedMPS(VecFloat);

				// VehicleAttribs.h:1098
				VecFloat GetCarAngularImpulseScale() const;

				// VehicleAttribs.h:1102
				void SetCarAngularImpulseScale(VecFloat);

			}

			// VehicleAttribs.h:1110
			struct BoostAttribs {
			private:
				// VehicleAttribs.h:1113
				Vector4 mvBoostBase_MaxBoostSpeed_BoostLinearDrag_NormalBoostHeightOffset;

				// VehicleAttribs.h:1114
				Vector4 mvNormalBoostAcceleration_BoostKickMaxStartSpeed_BoostKickMaxTime_BoostKickMinTime;

				// VehicleAttribs.h:1115
				Vector4 mvBoostKickAcceleration_BoostKickHeightOffset;

				// Unknown accessibility
				// VehicleAttribs.h:1216
				int32_t miBoostRule;

			public:
				// VehicleAttribs.h:1135
				VecFloat GetBoostBase() const;

				// VehicleAttribs.h:1139
				VecFloat GetMaxBoostSpeed() const;

				// VehicleAttribs.h:1143
				VecFloat GetBoostLinearDrag() const;

				// VehicleAttribs.h:1147
				VecFloat GetNormalBoostHeightOffset() const;

				// VehicleAttribs.h:1151
				VecFloat GetNormalBoostAcceleration() const;

				// VehicleAttribs.h:1155
				VecFloat GetBoostKickMaxStartSpeed() const;

				// VehicleAttribs.h:1159
				VecFloat GetBoostKickMaxTime() const;

				// VehicleAttribs.h:1163
				VecFloat GetBoostKickMinTime() const;

				// VehicleAttribs.h:1167
				VecFloat GetBoostKickAcceleration() const;

				// VehicleAttribs.h:1171
				VecFloat GetBoostKickHeightOffset() const;

				// VehicleAttribs.h:1175
				void SetBoostBase(VecFloat);

				// VehicleAttribs.h:1179
				void SetMaxBoostSpeed(VecFloat);

				// VehicleAttribs.h:1183
				void SetBoostLinearDrag(VecFloat);

				// VehicleAttribs.h:1187
				void SetNormalBoostHeightOffset(VecFloat);

				// VehicleAttribs.h:1191
				void SetNormalBoostAcceleration(VecFloat);

				// VehicleAttribs.h:1195
				void SetBoostKickMaxStartSpeed(VecFloat);

				// VehicleAttribs.h:1199
				void SetBoostKickMaxTime(VecFloat);

				// VehicleAttribs.h:1203
				void SetBoostKickMinTime(VecFloat);

				// VehicleAttribs.h:1207
				void SetBoostKickAcceleration(VecFloat);

				// VehicleAttribs.h:1211
				void SetBoostKickHeightOffset(VecFloat);

			}

		}

	}

}

// VehicleAttribs.h:1280
struct BrnPhysics::Vehicle::SimpleVehicleAttribs {
private:
	// VehicleAttribs.h:1282
	Vector4 mvUpwardMovement_DownwardMovement_Mass_TractionLineLength;

	// VehicleAttribs.h:1283
	Vector4 mvFrontWheelMass_RearWheelMass_FrontWheelHeightOffset_RearWheelHeightOffset;

	// Unknown accessibility
	// VehicleAttribs.h:1287
	BrnPhysics::Vehicle::Wheel::TireAttribs mFrontTireAttribs;

	// Unknown accessibility
	// VehicleAttribs.h:1288
	BrnPhysics::Vehicle::Wheel::TireAttribs mRearTireAttribs;

	// Unknown accessibility
	// VehicleAttribs.h:1289
	Attribute::Key mAttribsKey;

	// Unknown accessibility
	// VehicleAttribs.h:1290
	Vector3 mFrontRightWheelPos;

	// Unknown accessibility
	// VehicleAttribs.h:1291
	Vector3 mRearRightWheelPos;

	// Unknown accessibility
	// VehicleAttribs.h:1292
	Vector3 mCOMOffset;

	// Unknown accessibility
	// VehicleAttribs.h:1301
	int32_t miRaceCarID;

	// Unknown accessibility
	// VehicleAttribs.h:1304
	bool mbIsValid;

public:
	// VehicleAttribs.h:1308
	void Construct();

	// VehicleAttribs.h:1311
	void Destruct();

	// VehicleAttribs.h:1314
	bool IsValid() const;

	// VehicleAttribs.h:1318
	void SetupAttribs(const VehicleAttribs *);

	// VehicleAttribs.h:1322
	void SetupAttribs(physicsvehiclehandling);

	// VehicleAttribs.h:1325
	VecFloat GetUpwardMovement() const;

	// VehicleAttribs.h:1329
	VecFloat GetDownwardMovement() const;

	// VehicleAttribs.h:1333
	VecFloat GetMass() const;

	// VehicleAttribs.h:1337
	VecFloat GetTractionLineLength() const;

	// VehicleAttribs.h:1341
	VecFloat GetFrontWheelMass() const;

	// VehicleAttribs.h:1345
	VecFloat GetRearWheelMass() const;

	// VehicleAttribs.h:1349
	VecFloat GetFrontWheelHeightOffset() const;

	// VehicleAttribs.h:1353
	VecFloat GetRearWheelHeightOffset() const;

	// VehicleAttribs.h:1357
	void SetUpwardMovement(VecFloat);

	// VehicleAttribs.h:1361
	void SetDownwardMovement(VecFloat);

	// VehicleAttribs.h:1365
	void SetMass(VecFloat);

	// VehicleAttribs.h:1369
	void SetTractionLineLength(VecFloat);

	// VehicleAttribs.h:1373
	void SetFrontWheelMass(VecFloat);

	// VehicleAttribs.h:1377
	void SetRearWheelMass(VecFloat);

	// VehicleAttribs.h:1381
	void SetFrontWheelHeightOffset(VecFloat);

	// VehicleAttribs.h:1385
	void SetRearWheelHeightOffset(VecFloat);

}


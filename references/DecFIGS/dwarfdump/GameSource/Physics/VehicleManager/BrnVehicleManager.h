// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// BrnVehicleManager.h:86
		const uint8_t KF_MAX_RACE_CAR_CRASHES = 32;

		// BrnVehicleManager.h:88
		const int32_t KI_MAX_NONPHYSICAL_CONTACTS = 128;

		// BrnVehicleManager.h:90
		const float32_t KF_SHOWTIME_UNCAP_SPEED_LIMIT_TIME;

	}

}

// BrnVehicleManager.h:1059
extern const int32_t kiRaceCarPairs = 64;

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnVehicleManager.h:86
		const uint8_t KF_MAX_RACE_CAR_CRASHES = 32;

		// BrnVehicleManager.h:88
		const int32_t KI_MAX_NONPHYSICAL_CONTACTS = 128;

		// BrnVehicleManager.h:90
		const float32_t KF_SHOWTIME_UNCAP_SPEED_LIMIT_TIME;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// Declaration
		struct VehicleManager {
			// BrnVehicleManager.h:140
			enum EPrepareStage {
				E_PREPARESTAGE_START = 0,
				E_PREPARESTAGE_DATA = 1,
				E_PREPARESTAGE_MANAGER = 2,
				E_PREPARESTAGE_DONE = 3,
			}

			// BrnVehicleManager.h:148
			enum EReleaseStage {
				E_RELEASESTAGE_START = 0,
				E_RELEASESTAGE_MANAGER = 1,
				E_RELEASESTAGE_DATA = 2,
				E_RELEASESTAGE_DONE = 3,
			}

			// BrnVehicleManager.h:156
			enum EStationaryPlayerWheelAngle {
				E_STATIONARY_PLAYER_WHEEL_ANGLE_LEFT = 0,
				E_STATIONARY_PLAYER_WHEEL_ANGLE_RIGHT = 1,
				E_STATIONARY_PLAYER_WHEEL_ANGLE_STRAIGHT = 2,
			}

			// BrnVehicleManager.h:762
			struct RaceCarResponseInfo {
				// BrnVehicleManager.h:764
				RaceCarContact * mpContact;

				// BrnVehicleManager.h:765
				VehicleOutputRequestInterface * mpRequestOutputInterface;

				// BrnVehicleManager.h:766
				VehicleOutputInterface * mpVehicleOutputInterface;

				// BrnVehicleManager.h:767
				VehicleManagerOutputInterface * mpManagerOutputInterface;

				// BrnVehicleManager.h:768
				DeformationInputInterface * mpDeformationInterface;

				// BrnVehicleManager.h:769
				EntityId mRaceCarAEntityID;

				// BrnVehicleManager.h:770
				EntityId mRaceCarBEntityID;

				// BrnVehicleManager.h:771
				EActiveRaceCarIndex meActiveRaceCarIndexA;

				// BrnVehicleManager.h:772
				EActiveRaceCarIndex meActiveRaceCarIndexB;

				// BrnVehicleManager.h:773
				BrnPhysics::Vehicle::RaceCarPhysics * mpRaceCarA;

				// BrnVehicleManager.h:774
				BrnPhysics::Vehicle::RaceCarPhysics * mpRaceCarB;

				// BrnVehicleManager.h:775
				Vector3 mClosingVelocityAtoB;

				// BrnVehicleManager.h:776
				VecFloat mvfSlamMagnitude;

				// BrnVehicleManager.h:777
				bool mbRaceCarAIsCrashing;

				// BrnVehicleManager.h:778
				bool mbRaceCarBIsCrashing;

				// BrnVehicleManager.h:779
				bool mbRaceCarAIsPlayer;

				// BrnVehicleManager.h:780
				bool mbRaceCarBIsPlayer;

				// BrnVehicleManager.h:781
				bool mbRaceCarAIsNetworkCar;

				// BrnVehicleManager.h:782
				bool mbRaceCarBIsNetworkCar;

				// BrnVehicleManager.h:783
				bool mbOtherCarIsAI;

				// BrnVehicleManager.h:784
				float_t mfClosingSpeed;

				// BrnVehicleManager.h:785
				float_t mfRaceCarASpeed;

				// BrnVehicleManager.h:786
				float_t mfRaceCarBSpeed;

				// BrnVehicleManager.h:787
				float_t mfNormalStressSq;

				// BrnVehicleManager.h:788
				Matrix44Affine mRaceCarATransform;

				// BrnVehicleManager.h:789
				Matrix44Affine mRaceCarBTransform;

				// BrnVehicleManager.h:790
				float_t mfAngleBetweenCars;

				// BrnVehicleManager.h:793
				BrnPhysics::Vehicle::EImpactType meImpactType;

				// BrnVehicleManager.h:794
				EActiveRaceCarIndex meAggressorActiveRaceCarIndex;

				// BrnVehicleManager.h:795
				EActiveRaceCarIndex meVictimActiveRaceCarIndex;

				// BrnVehicleManager.h:796
				bool mbCrashRaceCarA;

				// BrnVehicleManager.h:797
				bool mbCrashRaceCarB;

				// BrnVehicleManager.h:798
				bool mbPlayerWonImpact;

				// BrnVehicleManager.h:799
				uint32_t muImpactScore;

				// BrnVehicleManager.h:802
				BrnPhysics::Vehicle::EImpactSituation meImpactSitutation;

			}

		}

		// BrnVehicleManager.h:86
		const uint8_t KF_MAX_RACE_CAR_CRASHES = 32;

		// BrnVehicleManager.h:88
		const int32_t KI_MAX_NONPHYSICAL_CONTACTS = 128;

		// BrnVehicleManager.h:90
		const float32_t KF_SHOWTIME_UNCAP_SPEED_LIMIT_TIME;

	}

}

// BrnVehicleManager.h:100
struct BrnPhysics::Vehicle::RaceCarCrashData {
	// BrnVehicleManager.h:102
	EntityId mRaceCarEntityID;

	// BrnVehicleManager.h:103
	EntityId mOtherEntityID;

	// BrnVehicleManager.h:104
	float32_t mfTimeSinceImpact;

}

// BrnVehicleManager.h:108
struct BrnPhysics::Vehicle::VehicleManager {
	// BrnVehicleManager.h:112
	extern int32_t _miPerfMonUpdateVehicleImpacts;

	// BrnVehicleManager.h:113
	extern int32_t _miPerfMonProcessAboveGroundLineTests;

	// BrnVehicleManager.h:114
	extern int32_t _miPerfMonTractionLineTests;

	// BrnVehicleManager.h:115
	extern int32_t _miPerfMonTLTGetTractionLines;

	// BrnVehicleManager.h:116
	extern int32_t _miPerfMonTLTLineTest;

	// BrnVehicleManager.h:117
	extern int32_t _miPerfMonTLTProcessResults;

	// BrnVehicleManager.h:118
	extern int32_t _miPerfMonTLTTraffic;

	// BrnVehicleManager.h:119
	extern int32_t _miPerfMonTLTBegin;

	// BrnVehicleManager.h:120
	extern int32_t _miPerfMonTLTRunStream;

	// BrnVehicleManager.h:121
	extern int32_t _miPerfMonTLTFinish;

	// BrnVehicleManager.h:122
	extern int32_t _miPerfMonTLTEnd;

	// BrnVehicleManager.h:123
	extern int32_t _miPerfMonCrashFatal;

	// BrnVehicleManager.h:124
	extern int32_t _miPerfMonUpdateRaceCars;

	// BrnVehicleManager.h:125
	extern int32_t _miPerfMonURCDrivers;

	// BrnVehicleManager.h:126
	extern int32_t _miPerfMonURCVehicles;

	// BrnVehicleManager.h:127
	extern int32_t _miPerfMonURCRigidBodyChange;

	// BrnVehicleManager.h:128
	extern int32_t _miPerfMonURCAfterTouch;

	// BrnVehicleManager.h:129
	extern int32_t _miPerfMonUpdateTraffic;

	// BrnVehicleManager.h:130
	extern int32_t _miPerfMonUpdateAggressive;

	// BrnVehicleManager.h:131
	extern int32_t _miPerfMonUpdateCrashes;

	// BrnVehicleManager.h:132
	extern int32_t _miPerfMonUpdatePassBys;

	// BrnVehicleManager.h:136
	extern float32_t _mfDebugLastShuntClosingSpeed;

	// BrnVehicleManager.h:137
	extern float32_t _mfDebugLastShuntAggressorSpeed;

private:
	// BrnVehicleManager.h:812
	extern const uint8_t KU8_MAX_CRASH_CONTACTS = 32;

	// BrnVehicleManager.h:815
	BrnPhysics::Vehicle::VehicleManager::EPrepareStage mePrepareStage;

	// BrnVehicleManager.h:816
	BrnPhysics::Vehicle::VehicleManager::EReleaseStage meReleaseStage;

	// BrnVehicleManager.h:818
	Random mRandom;

	// BrnVehicleManager.h:821
	VehicleDriver[8] maRaceCarDrivers;

	// BrnVehicleManager.h:822
	BrnPhysics::Vehicle::RaceCarPhysics[8] maRaceCarVehicles;

	// BrnVehicleManager.h:823
	EntityId[8] maRaceCarEntityIDs;

	// BrnVehicleManager.h:824
	ResourceHandle[8] maRaceCarModelHandles;

	// BrnVehicleManager.h:825
	ResourceHandle[8] maRaceCarGraphicsModelHandles;

	// BrnVehicleManager.h:826
	RigidBodyId[8] maRaceCarHandlingBodyIDs;

	// BrnVehicleManager.h:827
	RaceCarCrashData[32] maRaceCarCrashes;

	// BrnVehicleManager.h:828
	BrnWorld::ERaceCarType[8] maeRaceCarTypes;

	// BrnVehicleManager.h:830
	VehicleInputInterface::RaceCarBitArray mUsedRaceCars;

	// BrnVehicleManager.h:831
	BitArray<32u> mUsedRaceCarCrashesList;

	// BrnVehicleManager.h:833
	StuntOffencesManager mStuntOffencesManager;

	// BrnVehicleManager.h:838
	VehicleInputInterface::RaceCarBitArray mHiddenRaceCars;

	// BrnVehicleManager.h:839
	VehicleInputInterface::RaceCarBitArray mRaceCarsAddedForCollision;

	// BrnVehicleManager.h:840
	VehicleInputInterface::RaceCarBitArray mNetworkCarsAddedForCollisionThisFrame;

	// BrnVehicleManager.h:841
	VehicleInputInterface::RaceCarBitArray mNetworkCarsRecievedFirstUpdate;

	// BrnVehicleManager.h:844
	uint32_t[8] mauNetworkCarHiddenFramesRemaining;

	// BrnVehicleManager.h:847
	PhysicalTrafficManager mPhysicalTrafficManager;

	// BrnVehicleManager.h:850
	PotentialContact[128] maNonPhysicalContacts;

	// BrnVehicleManager.h:851
	int32_t miNonPhysicalContactCount;

	// BrnVehicleManager.h:854
	ContactSpyData::DiscardedContactQueue mDiscardedContacts;

	// BrnVehicleManager.h:857
	BrnPhysics::Vehicle::VehicleManagerDebugComponent mDebugComponent;

	// BrnVehicleManager.h:860
	BrnPhysics::Vehicle::DebugComponent[8] maRaceCarDebugComponent;

	// BrnVehicleManager.h:861
	bool[8] mabRaceCarDebugComponentRegistered;

	// BrnVehicleManager.h:865
	bool mbSlamsAndShuntsOn;

	// BrnVehicleManager.h:866
	bool mbAllowSlamsAndShuntsEffectsForRivals;

	// BrnVehicleManager.h:868
	float32_t mfFrontRaySensorLength;

	// BrnVehicleManager.h:869
	float32_t mfFrontRayLength;

	// BrnVehicleManager.h:870
	float32_t mfRearRayLength;

	// BrnVehicleManager.h:872
	float32_t mfPlayerShuntScale;

	// BrnVehicleManager.h:873
	float32_t mfAIShuntScale;

	// BrnVehicleManager.h:874
	float32_t mfShuntDecay;

	// BrnVehicleManager.h:875
	float32_t mfVulnerabilityFactorMax;

	// BrnVehicleManager.h:876
	float32_t mfPlayerVulnerabilityDurationSeconds;

	// BrnVehicleManager.h:877
	float32_t mfAIVulnerabilityDurationSeconds;

	// BrnVehicleManager.h:878
	float32_t mfMinSteeringOverrideTimeSlam;

	// BrnVehicleManager.h:879
	float32_t mfMinSteeringOverrideTimeShunt;

	// BrnVehicleManager.h:880
	float32_t mfPlayerMaxSteeringOverrideTimeSlam;

	// BrnVehicleManager.h:881
	float32_t mfAIMaxSteeringOverrideTimeSlam;

	// BrnVehicleManager.h:882
	float32_t mfPlayerMaxSteeringOverrideTimeShunt;

	// BrnVehicleManager.h:883
	float32_t mfAIMaxSteeringOverrideTimeShunt;

	// BrnVehicleManager.h:884
	float32_t mfPlayerSlamForceScale;

	// BrnVehicleManager.h:885
	float32_t mfAISlamForceScale;

	// BrnVehicleManager.h:886
	float32_t mfMaxSlamClosingXSpeed;

	// BrnVehicleManager.h:887
	float32_t mfMinSecondsBetweenImpacts;

	// BrnVehicleManager.h:888
	float32_t mfMinAmountOfSlamForce;

	// BrnVehicleManager.h:889
	float32_t mfMinAmountOfShuntForce;

	// BrnVehicleManager.h:890
	float32_t mfTailgatingVunerabilityTime;

	// BrnVehicleManager.h:892
	float32_t mfBaseSlamMagnitude;

	// BrnVehicleManager.h:893
	float32_t mfBaseShuntMagnitude;

	// BrnVehicleManager.h:895
	float32_t mfTBoneTakedownMaxAngle;

	// BrnVehicleManager.h:896
	float32_t mfTBoneTakedownSpeed;

	// BrnVehicleManager.h:897
	float32_t mfMaxShuntAngle;

	// BrnVehicleManager.h:899
	float32_t mfMinNudgeSpeed;

	// BrnVehicleManager.h:900
	float32_t mfMinShuntSpeed;

	// BrnVehicleManager.h:901
	float32_t mfFatalShuntSpeed;

	// BrnVehicleManager.h:903
	float32_t mfSlamDecayRate;

	// BrnVehicleManager.h:905
	float32_t mfSlamEffectMinMagnitude;

	// BrnVehicleManager.h:906
	float32_t mfSlamEffectMaxMagnitude;

	// BrnVehicleManager.h:907
	float32_t mfMinShuntMagnitude;

	// BrnVehicleManager.h:908
	float32_t mfMaxShuntMagnitude;

	// BrnVehicleManager.h:909
	float32_t mfMinShuntBackwardsMagnitude;

	// BrnVehicleManager.h:910
	float32_t mfMaxShuntBackwardsMagnitude;

	// BrnVehicleManager.h:912
	float32_t mfMinTradingPaintSpeed;

	// BrnVehicleManager.h:913
	float32_t mfFatalSlamSpeed;

	// BrnVehicleManager.h:915
	float32_t mfFatalHitCrashingCarSpeed;

	// BrnVehicleManager.h:916
	float32_t mfMaxHeadToHeadAngle;

	// BrnVehicleManager.h:917
	float32_t mfMinHeadToHeadSpeed;

	// BrnVehicleManager.h:918
	float32_t mfMinHeadToHeadIndividualSpeed;

	// BrnVehicleManager.h:920
	float32_t mfAngleForVerticleTakedown;

	// BrnVehicleManager.h:923
	BrnPhysics::Vehicle::EImpactType[8] maeImpactType;

	// BrnVehicleManager.h:924
	uint8_t[8] mauImpactScore;

	// BrnVehicleManager.h:925
	float32_t[8] mafNoImpactTimeSeconds;

	// BrnVehicleManager.h:926
	int8_t[8] maiPhysicsSlamIndex;

	// BrnVehicleManager.h:929
	float32_t mfContactDisplaySeconds;

	// BrnVehicleManager.h:930
	BrnPhysics::Vehicle::EImpactType meDisplayImpactType;

	// BrnVehicleManager.h:931
	bool mbPlayerWonDisplayImpact;

	// BrnVehicleManager.h:934
	BitArray<8u> mPlayerWonImpact;

	// BrnVehicleManager.h:937
	float32_t[8] mafVulnerableTimeSeconds;

	// BrnVehicleManager.h:940
	float32_t[8] mafVulnerabilityFactor;

	// BrnVehicleManager.h:943
	float32_t[8] mafTotalVulnerableTime;

	// BrnVehicleManager.h:946
	float32_t[8] mafPlayerGrindingOtherDurationSeconds;

	// BrnVehicleManager.h:947
	float32_t[8] mafOtherGrindingPlayerDurationSeconds;

	// BrnVehicleManager.h:948
	float32_t[8] mafRubbingDurationSeconds;

	// BrnVehicleManager.h:949
	uint8_t[8] mau8FramesSincePlayerGrindingOther;

	// BrnVehicleManager.h:950
	uint8_t[8] mau8FramesSinceOtherGrindingPlayer;

	// BrnVehicleManager.h:951
	bool[8] mabRubbingThisUpdate;

	// BrnVehicleManager.h:953
	VehicleDriver mPlayerAiDriver;

	// BrnVehicleManager.h:954
	bool mbPlayerAiDriverValid;

	// BrnVehicleManager.h:955
	float32_t mfPlayerRecentSteering;

	// BrnVehicleManager.h:956
	float32_t mfSteeringUpdateRemainder;

	// BrnVehicleManager.h:959
	EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

	// BrnVehicleManager.h:962
	float32_t mfCrashingAICollisionCrashThresholdMPH;

	// BrnVehicleManager.h:963
	float32_t mfHeadOnWorldCrashThreshold;

	// BrnVehicleManager.h:964
	float32_t mfSideOnWorldCrashThreshold;

	// BrnVehicleManager.h:965
	float32_t mfTrafficCollisionCheckThresholdMPH;

	// BrnVehicleManager.h:966
	float32_t mfMinRCTrafficTranslateSpeedMPH;

	// BrnVehicleManager.h:968
	float32_t mfVerticalTakedownAngleDeg;

	// BrnVehicleManager.h:970
	Matrix44Affine mCameraMatrix;

	// BrnVehicleManager.h:972
	bool mbImpactTime;

	// BrnVehicleManager.h:973
	bool mbEasyCrashingEnabled;

	// BrnVehicleManager.h:974
	bool mbStopPlayerCrashing;

	// BrnVehicleManager.h:975
	bool mbStopAICrashing;

	// BrnVehicleManager.h:976
	bool mbCrashOnHandbrakeTurn;

	// BrnVehicleManager.h:977
	bool mbCrashPlayerNextUpdate;

	// BrnVehicleManager.h:978
	bool DEBUG_mbAlwaysCrashRaceCarToRaceCar;

	// BrnVehicleManager.h:979
	bool DEBUG_mbHornTakedownEnabled;

	// BrnVehicleManager.h:980
	bool mbDebugModifyTrafficContacts;

	// BrnVehicleManager.h:981
	bool mbTrafficCheckingAllowed;

	// BrnVehicleManager.h:983
	bool mbAftertouchIsForceAdditive;

	// BrnVehicleManager.h:984
	bool mbIsOnlineGameMode;

	// BrnVehicleManager.h:985
	bool mbUpdatedPlayerDriver;

	// BrnVehicleManager.h:986
	bool mbForceNoSlowMo;

	// BrnVehicleManager.h:987
	bool mbInOnlineGameModeStartLine;

	// BrnVehicleManager.h:988
	bool mbPlayerCarInJunkYard;

	// BrnVehicleManager.h:993
	float32_t mfPlayerStatStrength;

	// BrnVehicleManager.h:995
	float32_t mfPlayerStatDamageLimit;

	// BrnVehicleManager.h:997
	int32_t miCarSpeed;

	// BrnVehicleManager.h:998
	int32_t miCarStrength;

	// BrnVehicleManager.h:999
	int32_t miCarControl;

	// BrnVehicleManager.h:1000
	int32_t miCarBoost;

	// BrnVehicleManager.h:1001
	BrnResource::ECarType meCarType;

	// BrnVehicleManager.h:1004
	int32_t miPlayerSpeed;

	// BrnVehicleManager.h:1005
	int32_t miPlayerStrength;

	// BrnVehicleManager.h:1006
	int32_t miPlayerControl;

	// BrnVehicleManager.h:1007
	int32_t miPlayerBoost;

	// BrnVehicleManager.h:1010
	Time mCurrentTime;

	// BrnVehicleManager.h:1011
	Time mStartModeTime;

	// BrnVehicleManager.h:1012
	BrnGameState::GameStateModuleIO::EGameModeType meCurrentGameModeType;

	// BrnVehicleManager.h:1015
	float32_t mfCarStatStrengthSlamMax;

	// BrnVehicleManager.h:1016
	float32_t mfCarrStatStrengthSlamMin;

	// BrnVehicleManager.h:1017
	float32_t mfCarStatStrengthShuntMax;

	// BrnVehicleManager.h:1018
	float32_t mfCarrStatStrengthShuntMin;

	// BrnVehicleManager.h:1020
	float32_t mfCarStatStrengthBeingSlammedMax;

	// BrnVehicleManager.h:1021
	float32_t mfCarStatStrengthBeingSlammedMin;

	// BrnVehicleManager.h:1022
	float32_t mfCarStatStrengthBeingShuntedMax;

	// BrnVehicleManager.h:1023
	float32_t mfCarrStatStrengthBeingShuntedMin;

	// BrnVehicleManager.h:1026
	const BrnPhysics::Vehicle::SimpleVehiclePhysics * mpCachedCarA;

	// BrnVehicleManager.h:1027
	const BrnPhysics::Vehicle::SimpleVehiclePhysics * mpCachedCarB;

	// BrnVehicleManager.h:1028
	bool mbCachedCarCarPredictionResult;

	// BrnVehicleManager.h:1029
	Vector3 mCachedCarCarPredictionNormal;

	// BrnVehicleManager.h:1032
	BrnPhysics::Vehicle::VehicleManager::EStationaryPlayerWheelAngle meStationaryPlayerWheelAngle;

	// BrnVehicleManager.h:1035
	bool mbCrashRaceCarWhenFatal;

	// BrnVehicleManager.h:1038
	BrnGameState::EShowtimeBehaviour meShowtimeBehaviour;

	// BrnVehicleManager.h:1041
	int32_t miRaceCarWorldContactValidationPM;

	// BrnVehicleManager.h:1042
	uint8_t mn8RoundRobinControlWord;

	// BrnVehicleManager.h:1045
	BrnPhysics::ContactGenList * mpContactGenList;

	// BrnVehicleManager.h:1046
	CollisionGenerator * mpContactGenerator;

	// BrnVehicleManager.h:1047
	PrimitivePairListBuilder mDetachedPartPrimPairBuilder;

	// BrnVehicleManager.h:1048
	PrimitivePairListBuilder mDetachedWheelPrimPairBuilder;

	// BrnVehicleManager.h:1049
	PrimitivePairListBuilder mHingedPartVsVehiclePairBuilder;

	// BrnVehicleManager.h:1050
	EA::Jobs::Job * mpTractionLineTestsJob;

	// BrnVehicleManager.h:1051
	int32_t miFirstPartContactGenEntry;

	// BrnVehicleManager.h:1052
	CgsMemory::SimpleDataStreamProducer * mpSphereSphereStreamProducer;

	// BrnVehicleManager.h:1053
	CgsMemory::SimpleDataStreamProducer * mpSphereTriangleStreamProducer;

	// BrnVehicleManager.h:1054
	CgsMemory::SimpleDataStreamProducer * mpSweptSphereTriangleStreamProducer;

	// BrnVehicleManager.h:1055
	EA::Jobs::Job * mpSphereSphereStreamJob;

	// BrnVehicleManager.h:1056
	EA::Jobs::Job * mpSphereTriangleStreamJob;

	// BrnVehicleManager.h:1057
	EA::Jobs::Job * mpSweptSphereTriangleStreamJob;

	// BrnVehicleManager.h:1059
	extern const int32_t kiRaceCarPairs = 64;

	// BrnVehicleManager.h:1060
	BitArray<64u> mOverlappingRaceCars;

	// BrnVehicleManager.h:1065
	PrimitivePairListBuilder mTrafficSimpleTrafficPrimPairBuilder;

	// BrnVehicleManager.h:1066
	PrimitivePairListBuilder mRaceCarSimpleTrafficPrimPairBuilder;

	// BrnVehicleManager.h:1069
	CgsMemory::SimpleDataStreamProducer * mpBodyPartWithWorldStream;

	// BrnVehicleManager.h:1072
	int32_t miNumTrafficSphereWorldTests;

	// BrnVehicleManager.h:1075
	CgsMemory::SimpleDataStreamProducer * mpTractionLineStreamProducer;

	// BrnVehicleManager.h:1076
	int32_t miNumSPUTractionLineTests;

	// BrnVehicleManager.h:1087
	Sphere mStuckInCollisionTestCacheSphere;

	// BrnVehicleManager.h:1088
	bool mbPlayerCarStuckInCollision;

	// BrnVehicleManager.h:1091
	extern const uint8_t knVehicleRoundRobinFrontPlaneOccluded = 1;

	// BrnVehicleManager.h:1092
	extern const uint8_t knVehicleRoundRobinRearPlaneOccluded = 2;

	// BrnVehicleManager.h:1093
	extern const uint8_t knVehicleRoundRobinPlaneBools = 3;

	// BrnVehicleManager.h:1094
	extern const uint8_t knVehicleRoundRobinNextTest = 12;

	// BrnVehicleManager.h:1095
	extern const uint8_t knVehicleRoundRobinFrontPlaneToTest;

	// BrnVehicleManager.h:1096
	extern const uint8_t knVehicleRoundRobinRearPlaneToTest = 4;

	// BrnVehicleManager.h:1097
	extern const uint8_t knVehicleRoundRobinFrontSensorToTest = 8;

	// BrnVehicleManager.h:1099
	int32_t miImpactEventCount;

public:
	// BrnVehicleManager.h:165
	void Construct();

	// BrnVehicleManager.h:171
	bool Prepare(rw::LinearResourceAllocator *, InputBuffer_Update *);

	// BrnVehicleManager.h:175
	bool PrepareData(rw::LinearResourceAllocator *);

	// BrnVehicleManager.h:179
	bool Release();

	// BrnVehicleManager.h:183
	void Destruct();

	// BrnVehicleManager.h:193
	void ProcessVehicleMaintenanceEvents(IOBufferStack *, IOBufferStack *, const VehicleInputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:201
	void ProcessRemoveEvents(const VehicleInputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:208
	void ProcessCreateEvents(const VehicleInputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:213
	void ProcessValidationEvents(const VehicleInputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:220
	void ProcessResetEvents(const VehicleInputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:225
	void ProcessCollisionEvents(const VehicleInputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:235
	void ProcessCrashingNetworkCars(const VehicleDriverInputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *, VehicleOutputInterface *);

	// BrnVehicleManager.h:240
	void OnGameModePrepare(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnVehicleManager.h:245
	void OnGameModeStop(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnVehicleManager.h:250
	void ProcessNetworkCarDisconnect(const RemotePlayerDisconnectedAction *);

	// BrnVehicleManager.h:255
	void GenerateAboveGroundLineTests(VehicleOutputRequestInterface *) const;

	// BrnVehicleManager.h:260
	void ProcessAboveGroundLineTestsResults(const VehicleInputInterface::InLineTestResultQueue *);

	// BrnVehicleManager.h:264
	void UpdateCameraMatrix(const rw::math::vpu::Matrix44Affine *);

	// BrnVehicleManager.h:273
	void UpdateDrivers(float32_t, const VehicleDriverInputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *, VehicleOutputInterface *);

	// BrnVehicleManager.h:279
	void UpdatePlayerDriver(const BrnPlayerDriverControls *, BitArray<8u> &);

	// BrnVehicleManager.h:285
	void UpdateNetworkDriver(const BrnNetworkDriverControls *, BitArray<8u> &);

	// BrnVehicleManager.h:291
	void UpdateAIDriver(const BrnAIDriverControls *, BitArray<8u> &);

	// BrnVehicleManager.h:297
	void UpdateTrafficDriver(const BrnTrafficDriverControls *, BitArray<8u> &);

	// BrnVehicleManager.h:301
	void UpdateNetworkCatchup(const VehicleDriverInputInterface *);

	// BrnVehicleManager.h:308
	void StartVehicleTractionLineTests(IOBufferStack *, const VehicleInputInterface *, DeformationManager *, float32_t);

	// BrnVehicleManager.h:313
	void EndVehicleTractionLineTests(IOBufferStack *, const VehicleInputInterface *);

	// BrnVehicleManager.h:329
	void UpdateVehiclePhysics(IOBufferStack *, IOBufferStack *, BrnUpdateSet, Time, float32_t, float32_t, const VehicleInputInterface *, VehicleOutputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *, bool, EntityId);

	// BrnVehicleManager.h:341
	void DoCrashPrediction(IOBufferStack *, IOBufferStack *, float32_t, const VehicleInputInterface *, VehicleOutputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *, PotentialContactInterface *);

	// BrnVehicleManager.h:345
	void UpdateTriangleCache(InputBuffer_Update *);

	// BrnVehicleManager.h:353
	void UpdateVehiclePhysicsPostSimulation(const VehicleInputInterface *, const OutputBuffer *, float32_t, BrnGameState::GameStateModuleIO::GameEventQueue *);

	// BrnVehicleManager.h:357
	void UpdateVehicleEffects(const VehicleEffectsInputInterface *);

	// BrnVehicleManager.h:361
	void GetUpdatedVehicleBodies(OutUpdatedExternalBodyQueue *);

	// BrnVehicleManager.h:366
	void ReadUpdatedBodies(const OutputBuffer::OutUpdateRigidBodyQueue *, VecFloat);

	// BrnVehicleManager.h:370
	void ReadUpdatedBodyProperties(const InputBuffer::InChangeRigidBodyInertiaQueue *);

	// BrnVehicleManager.h:375
	void ProcessWheelContacts(float32_t, PotentialContactInterface *);

	// BrnVehicleManager.h:385
	void ProcessContactSpies(const ContactSpyData *, VehicleOutputRequestInterface *, VehicleOutputInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *, DeformationManager *, float32_t);

	// BrnVehicleManager.h:389
	void ProcessDeformationStates(const DeformationOutputInterface *);

	// BrnVehicleManager.h:393
	void WriteOutVehicleStats(VehicleOutputInterface *);

	// BrnVehicleManager.h:397
	void UpdateFatalCrashFlags(VehicleOutputInterface *);

	// BrnVehicleManager.h:403
	bool ValidateRaceCarContact(PotentialContact *, const VehicleInputInterface::InTriangleCacheInterface *, float32_t);

	// BrnVehicleManager.h:409
	bool ValidateRaceCarWorldContact(PotentialContact *, const VehicleInputInterface::InTriangleCacheInterface *, float32_t);

	// BrnVehicleManager.h:416
	bool ValidateTrafficContact(PotentialContact *, const VehicleInputInterface::InTriangleCacheInterface *, float32_t);

	// BrnVehicleManager.h:420
	bool ValidateAndFixUpTrafficTrafficContact(PotentialContact *) const;

	// BrnVehicleManager.h:432
	bool IsRaceCarCrashing(int32_t);

	// BrnVehicleManager.h:437
	void SetPlayerActiveRaceCarIndex(EActiveRaceCarIndex);

	// BrnVehicleManager.h:446
	void UpdateVehicleImpacts(const VehicleInputInterface::ImpactEventQueue *, VehicleOutputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:451
	void StartImpactTime(float32_t, bool);

	// BrnVehicleManager.h:454
	void EndImpactTime();

	// BrnVehicleManager.h:459
	void SetEasyCrashingEnabled(bool);

	// BrnVehicleManager.h:464
	void SetShowtimeBehaviour(BrnGameState::EShowtimeBehaviour);

	// BrnVehicleManager.h:469
	void SetShowtimeAimDirection(Vector3);

	// BrnVehicleManager.h:473
	void SetPlayerCarToShowtimeMode(bool);

	// BrnVehicleManager.h:477
	void SetPlayerCarCrashbreakerTriggered();

	// BrnVehicleManager.h:480
	void CheckState();

	// BrnVehicleManager.h:487
	void CreateContactEvent(RaceCarContact *, const OutContactSpy *, const PotentialContact *);

	// BrnVehicleManager.h:494
	void CreateContactEvent(TrafficContact *, const OutContactSpy *, const PotentialContact *);

	// BrnVehicleManager.h:499
	EntityId GetEntityId(RigidBodyId);

	// BrnVehicleManager.h:504
	RigidBodyId GetRigidBodyId(int32_t);

	// BrnVehicleManager.h:508
	void SetPlayerCrashingNextUpdate();

	// BrnVehicleManager.h:511
	BrnPhysics::Vehicle::RaceCarPhysics * GetRaceCarPhysics(RigidBodyId);

	// BrnVehicleManager.h:519
	void HACK_UpdateRaceCarBody(RigidBodyId, Matrix44Affine, Vector3, Vector3);

	// BrnVehicleManager.h:522
	void TurnOffSlamsAndShunts();

	// BrnVehicleManager.h:525
	void TurnOnSlamsAndShunts();

	// BrnVehicleManager.h:528
	void TurnOnSlamsAndShuntsEffectsForRivals();

	// BrnVehicleManager.h:531
	void TurnOffSlamsAndShuntsEffectsForRivals();

	// BrnVehicleManager.h:534
	void ClearTestedTraffic();

	// BrnVehicleManager.h:538
	void ApplyPlayerStats(const SendCarStatsAction *);

	// BrnVehicleManager.h:541
	bool HasRaceCarHadRecentImpact(EActiveRaceCarIndex);

	// BrnVehicleManager.h:545
	EntityId GetGlobalEntityIDFromPhysicsEntityID(EntityId);

	// BrnVehicleManager.h:549
	EntityId GetPhysicsEntityIDFromGlobalEntityID(EntityId);

	// BrnVehicleManager.h:554
	bool GetTrafficPhysicsEntityIDFromGlobalEntityID_Safe(EntityId, EntityId *);

	// BrnVehicleManager.h:562
	const ContactSpyData::DiscardedContactQueue * GetDiscardedContacts() const;

	// BrnVehicleManager.h:566
	void SetTailgatingVulnerability(EActiveRaceCarIndex);

	// BrnVehicleManager.h:570
	void SetStationaryPlayerWheelAngle(BrnPhysics::Vehicle::VehicleManager::EStationaryPlayerWheelAngle);

	// BrnVehicleManager.h:574
	void SetTrafficCheckingAllowed(bool);

	// BrnVehicleManager.h:579
	void RecordNetworkRaceCarsAddedForCollision(const VehicleInputInterface *);

	// BrnVehicleManager.h:583
	void SwitchPlayerAIDonuttingAttribs(bool);

	// BrnVehicleManager.h:588
	const PhysicalTrafficVehicle * GetTrafficVehicle(EntityId) const;

	// BrnVehicleManager.h:602
	void StartVehicleContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *, const InputBuffer::InOverlapPairsQueue *, float32_t, DeformationManager *, IOBufferStack *, LinearMalloc *, PotentialContactInterface *);

	// BrnVehicleManager.h:612
	void EndVehicleContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *, const InputBuffer::InOverlapPairsQueue *, float32_t, DeformationManager *, IOBufferStack *, LinearMalloc *, PotentialContactInterface *);

	// BrnVehicleManager.h:621
	void StartPartContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *, float32_t, DeformationManager *, IOBufferStack *, PotentialContactInterface *, LinearMalloc *);

	// BrnVehicleManager.h:628
	void EndPartContactGeneration(float32_t, DeformationManager *, IOBufferStack *, PotentialContactInterface *);

	// BrnVehicleManager.h:638
	void DoRaceCarWorldContactValidation(PotentialContactInterface *, const VehicleInputInterface::InTriangleCacheInterface *, float32_t, DeformationManager *);

	// BrnVehicleManager.h:643
	void DoTrafficWorldContactOrdering(PotentialContactInterface *);

	// BrnVehicleManager.h:647
	void FreeAllocations(IOBufferStack *);

	// BrnVehicleManager.h:653
	void BridgeSimpleTrafficWithCarContactsToSimulation(InputBuffer::InAddContactQueue *, const PotentialContactInterface *);

	// BrnVehicleManager.h:656
	bool GetForceNoSlowMo();

	// BrnVehicleManager.h:660
	void ResetForceNoSlowMo();

	// BrnVehicleManager.h:667
	void ValidateSimulationContacts(const InputBuffer::InAddContactQueue *);

	// BrnVehicleManager.h:674
	void ReadSurfaceProperties(Attribute::Key);

	// BrnVehicleManager.h:679
	void ClearSnappedNetworkCarContacts(DeformationManager *);

	// BrnVehicleManager.h:684
	void OnPrepareGameMode(const PrepareForModeAction *);

	// BrnVehicleManager.h:689
	void OnStartGameMode(const StartPlayingModeAction *);

	// BrnVehicleManager.h:694
	void OnJunkYardDriveThru(const JunkYardDriveThruAction *);

private:
	// BrnVehicleManager.h:715
	void DoCarCarContactGeneration(EntityId, EntityId, EntityId, EntityId, DeformationManager *, BrnPhysics::ContactGenList *, CollisionGenerator *, CgsMemory::SimpleDataStreamProducer *, uint16_t, float32_t);

	// BrnVehicleManager.h:726
	void DoRaceCarWorldContactGeneration(int32_t, DeformationManager *, const VehicleInputInterface::InTriangleCacheInterface *, BrnPhysics::ContactGenList *, CollisionGenerator *, CgsMemory::SimpleDataStreamProducer *, CgsMemory::SimpleDataStreamProducer *, uint32_t);

	// BrnVehicleManager.h:735
	void DoRaceCarWheelWorldContactGeneration(int32_t, DeformationManager *, const VehicleInputInterface::InTriangleCacheInterface *, BrnPhysics::ContactGenList *, CollisionGenerator *, float32_t);

	// BrnVehicleManager.h:746
	void DoTrafficCarWorldContactGeneration(int32_t, DeformationManager *, const VehicleInputInterface::InTriangleCacheInterface *, BrnPhysics::ContactGenList *, CollisionGenerator *, CgsMemory::SimpleDataStreamProducer *, uint32_t, LinearMalloc *);

	// BrnVehicleManager.h:751
	void ProcessAftertouchEvents(int32_t, BrnGameState::GameStateModuleIO::GameEventQueue *);

	// BrnVehicleManager.h:757
	void AddContactResultsToQueue(CollisionGenerator *, BrnPhysics::ContactGenList *, PotentialContactInterface *);

	// BrnVehicleManager.h:808
	EActiveRaceCarIndex GetChainedAttackerIndex(EActiveRaceCarIndex, EActiveRaceCarIndex) const;

	// BrnVehicleManager.h:1102
	void ClearCachedCarCarPrediction();

	// BrnVehicleManager.h:1110
	bool PrepareTriangleCache(InputBuffer_Update *);

	// BrnVehicleManager.h:1117
	void RemoveTrafficVehicle(uint8_t, VehicleOutputRequestInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:1126
	void AddRaceCarDeformationModel(DeformationInputInterface *, int32_t, Matrix44Affine, float32_t, BrnPhysics::Deformation::DeformationResetType);

	// BrnVehicleManager.h:1133
	void RemoveRaceCarDeformationModel(DeformationInputInterface *, int32_t);

	// BrnVehicleManager.h:1140
	void GetDataFromQueryID(SceneQueryId, uint8_t *, uint8_t *, uint8_t *) const;

	// BrnVehicleManager.h:1149
	void HandleRaceCarRaceCarContact(RaceCarContact, VehicleOutputRequestInterface *, VehicleOutputInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *, float32_t);

	// BrnVehicleManager.h:1158
	void HandleRaceCarTrafficCarPotentialContact(PotentialContact, VehicleOutputRequestInterface *, VehicleOutputInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *, float32_t);

	// BrnVehicleManager.h:1165
	bool IsPointBetweenTwoParallelPlanes(Vector3, Vector3, Vector3, Vector3);

	// BrnVehicleManager.h:1169
	bool CheckForPlayerSlammingAIIntoAI(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1173
	void CheckForAICarAICarCrash(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1177
	bool CheckForSlamAndTradingPaint(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1181
	bool CheckForShuntAndNudge(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1185
	bool CheckForHeadToHead(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1189
	bool CheckForTBoneTakedown(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1193
	bool CheckForVerticalTakedown(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1198
	bool CheckForVerticalTakedownSituation(const BrnPhysics::Vehicle::RaceCarPhysics *, Vector3);

	// BrnVehicleManager.h:1201
	bool CheckForHittingAlreadyCrashingCar(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1204
	bool CheckForGrindingAndRubbing(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1207
	bool CheckForStationaryTargetTakedown(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1211
	void CheckForAllTypesOfImpacts(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1215
	void ApplySlam(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1219
	void ApplyShunt(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1229
	void HandleRaceCarTrafficVehicleContactSpy(OutContactSpy *, PotentialContact *, VehicleOutputRequestInterface *, VehicleOutputInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:1237
	bool ShouldRaceCarCrashOnCarImpact(EActiveRaceCarIndex, const BrnPhysics::Vehicle::RaceCarPhysics *, const BrnPhysics::Vehicle::SimpleVehiclePhysics *, VecFloat, VecFloat) const;

	// BrnVehicleManager.h:1248
	void DecideOutcomeOfRaceCarTrafficContact(uint16_t, uint16_t, Vector3, Vector3, Vector3, VecFloat *, uint32_t *);

	// BrnVehicleManager.h:1258
	void HandleRaceCarWorldPotentialContact(PotentialContact, VehicleOutputRequestInterface *, VehicleOutputInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *, const VehicleInputInterface::InTriangleCacheInterface *, float32_t);

	// BrnVehicleManager.h:1267
	void HandleTrafficCarWorldPotentialContact(PotentialContact, VehicleOutputRequestInterface *, VehicleOutputInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *, float32_t);

	// BrnVehicleManager.h:1276
	void HandleTrafficCarTrafficCarPotentialContact(PotentialContact, VehicleOutputRequestInterface *, VehicleOutputInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *, float32_t);

	// BrnVehicleManager.h:1280
	void GenerateContactSituation(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1286
	bool PredictCarCarIntersection(const BrnPhysics::Vehicle::SimpleVehiclePhysics *, const BrnPhysics::Vehicle::SimpleVehiclePhysics *, float32_t);

	// BrnVehicleManager.h:1289
	VecFloat PredictCarWorldContactTime(const PotentialContact &);

	// BrnVehicleManager.h:1304
	void SetRaceCarCrashing(EntityId, EntityId, Vector3, Vector3, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *, BrnGameState::ETakedownType);

	// BrnVehicleManager.h:1314
	void SetNetworkCarCrashing(EntityId, EntityId, float32_t, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:1319
	void UpdateCrashes(float32_t);

	// BrnVehicleManager.h:1326
	bool PhysicallyCrashRaceCar(uint16_t, VehicleOutputRequestInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:1336
	void PhysicallyUncrashRaceCar(uint16_t, VehicleOutputRequestInterface *, DeformationInputInterface *, float32_t, bool, BrnPhysics::Deformation::DeformationResetType);

	// BrnVehicleManager.h:1344
	const rw::math::vpu::Vector3 ScaleCarSpacePositionToWheels(Vector3 *, BrnPhysics::Vehicle::VehiclePhysics *) const;

	// BrnVehicleManager.h:1353
	void UpdateAggressiveDriving(float32_t, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:1362
	void ForceRaceCarCrash(VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *, EActiveRaceCarIndex);

	// BrnVehicleManager.h:1372
	void ForceRaceCarCrash(VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *, EActiveRaceCarIndex, EntityId);

	// BrnVehicleManager.h:1384
	void CalculateSlamData(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *, float32_t *, float32_t *, float32_t *, float32_t *, Vector3 *, uint8_t *, float32_t *);

	// BrnVehicleManager.h:1393
	void CalculateShuntData(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *, Vector3 *, VecFloat *, float32_t *, float32_t *);

	// BrnVehicleManager.h:1408
	void SendImpactMessage(VehicleInputInterface::ImpactEventQueue *, BrnPhysics::Vehicle::EImpactType, EActiveRaceCarIndex, EActiveRaceCarIndex, Vector3, float32_t, float32_t, float32_t, float32_t, uint8_t);

	// BrnVehicleManager.h:1416
	void DoHornTakedowns(VehicleOutputRequestInterface *, VehicleOutputInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:1430
	void InstantTakedown(EntityId, EntityId, Vector3, Vector3, float32_t, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *, BrnGameState::ETakedownType);

	// BrnVehicleManager.h:1435
	Matrix44Affine GetVehicleBoundingBoxCentreTransform(BrnPhysics::Vehicle::VehiclePhysics *, EActiveRaceCarIndex) const;

	// BrnVehicleManager.h:1442
	void DoRaceCarTractionLineTestsAgainstTriangleCache(IOBufferStack *, const VehicleInputInterface *);

	// BrnVehicleManager.h:1448
	void DoTrafficTractionLineTestsAgainstTriangleCache(IOBufferStack *, const VehicleInputInterface *);

	// BrnVehicleManager.h:1454
	void DoPlayerTractionLineTestsPostSimulation(const VehicleInputInterface *, float32_t);

	// BrnVehicleManager.h:1459
	void DoPlayerStuckLineTests(const VehicleInputInterface *);

	// BrnVehicleManager.h:1466
	int32_t AddPlayerStuckInCollisionLineTests(CollisionGenerator *, const VehicleInputInterface::InTriangleCacheInterface *, DeformationManager *);

	// BrnVehicleManager.h:1471
	void ReadPlayerStuckTractionLineTestResults(SimpleDataStreamResultIterator &);

	// BrnVehicleManager.h:1478
	void UpdatePlayerStuckInCollisionTest(const VehicleInputInterface::InTriangleCacheInterface *, float32_t);

	// BrnVehicleManager.h:1483
	void UpdatePlayerStuckInCollisionSpheres(float32_t);

	// BrnVehicleManager.h:1492
	void CrashFatalRaceCars(VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *, EntityId);

	// BrnVehicleManager.h:1503
	void DoCrashPredictionForRaceCarAndTrafficVehicle(BrnPhysics::Vehicle::PotentialContactAverager *, PotentialContact *, float32_t, VehicleOutputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:1513
	void HandleCrashPredictionForRaceCarAndTrafficVehicle(BrnPhysics::Vehicle::PotentialContactAverager *, float32_t, VehicleOutputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:1524
	void HandleCrashPredictionForRaceCarAndWorld(float32_t, PotentialContactInterface *, const VehicleInputInterface *, VehicleOutputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:1529
	BrnPhysics::Vehicle::SimpleVehiclePhysics * GetVehiclePhysics(EntityId);

	// BrnVehicleManager.h:1534
	bool IsRaceCarHidden(EActiveRaceCarIndex) const;

	// BrnVehicleManager.h:1539
	void ProcessShowtimeShunts(const ContactSpyData *);

	// BrnVehicleManager.h:1546
	void ApplyShowtimeShunt(PhysicalTrafficVehicle *, const BrnPhysics::Vehicle::VehiclePhysics *, VecFloat);

	// BrnVehicleManager.h:1552
	void DoVehicleTractionLineAllocations(IOBufferStack *, CollisionGenerator *);

	// BrnVehicleManager.h:1558
	int32_t AddRaceCarTractionLineTests(CollisionGenerator *, const VehicleInputInterface::InTriangleCacheInterface *);

	// BrnVehicleManager.h:1564
	void RunTractionLineTestJobs(CollisionGenerator *);

	// BrnVehicleManager.h:1569
	void ReadRaceCarTractionLineTestResults(SimpleDataStreamResultIterator &);

	// BrnVehicleManager.h:1574
	void DoVehicleTractionLineDecallocations(IOBufferStack *);

	// BrnVehicleManager.h:1580
	// Declaration
	void SetNetworkRaceCarHidden(EActiveRaceCarIndex, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleManager.h:2066
		using namespace CgsDev::Message;

	}

	// BrnVehicleManager.h:1585
	void SetAllNetworkRaceCarsHidden(int32_t);

}

// BrnVehicleManager.h:108
struct BrnPhysics::Vehicle::VehicleManager {
	// BrnVehicleManager.h:112
	extern int32_t _miPerfMonUpdateVehicleImpacts;

	// BrnVehicleManager.h:113
	extern int32_t _miPerfMonProcessAboveGroundLineTests;

	// BrnVehicleManager.h:114
	extern int32_t _miPerfMonTractionLineTests;

	// BrnVehicleManager.h:115
	extern int32_t _miPerfMonTLTGetTractionLines;

	// BrnVehicleManager.h:116
	extern int32_t _miPerfMonTLTLineTest;

	// BrnVehicleManager.h:117
	extern int32_t _miPerfMonTLTProcessResults;

	// BrnVehicleManager.h:118
	extern int32_t _miPerfMonTLTTraffic;

	// BrnVehicleManager.h:119
	extern int32_t _miPerfMonTLTBegin;

	// BrnVehicleManager.h:120
	extern int32_t _miPerfMonTLTRunStream;

	// BrnVehicleManager.h:121
	extern int32_t _miPerfMonTLTFinish;

	// BrnVehicleManager.h:122
	extern int32_t _miPerfMonTLTEnd;

	// BrnVehicleManager.h:123
	extern int32_t _miPerfMonCrashFatal;

	// BrnVehicleManager.h:124
	extern int32_t _miPerfMonUpdateRaceCars;

	// BrnVehicleManager.h:125
	extern int32_t _miPerfMonURCDrivers;

	// BrnVehicleManager.h:126
	extern int32_t _miPerfMonURCVehicles;

	// BrnVehicleManager.h:127
	extern int32_t _miPerfMonURCRigidBodyChange;

	// BrnVehicleManager.h:128
	extern int32_t _miPerfMonURCAfterTouch;

	// BrnVehicleManager.h:129
	extern int32_t _miPerfMonUpdateTraffic;

	// BrnVehicleManager.h:130
	extern int32_t _miPerfMonUpdateAggressive;

	// BrnVehicleManager.h:131
	extern int32_t _miPerfMonUpdateCrashes;

	// BrnVehicleManager.h:132
	extern int32_t _miPerfMonUpdatePassBys;

	// BrnVehicleManager.h:136
	extern float32_t _mfDebugLastShuntClosingSpeed;

	// BrnVehicleManager.h:137
	extern float32_t _mfDebugLastShuntAggressorSpeed;

private:
	// BrnVehicleManager.h:812
	extern const uint8_t KU8_MAX_CRASH_CONTACTS = 32;

	// BrnVehicleManager.h:815
	BrnPhysics::Vehicle::VehicleManager::EPrepareStage mePrepareStage;

	// BrnVehicleManager.h:816
	BrnPhysics::Vehicle::VehicleManager::EReleaseStage meReleaseStage;

	// BrnVehicleManager.h:818
	Random mRandom;

	// BrnVehicleManager.h:821
	VehicleDriver[8] maRaceCarDrivers;

	// BrnVehicleManager.h:822
	BrnPhysics::Vehicle::RaceCarPhysics[8] maRaceCarVehicles;

	// BrnVehicleManager.h:823
	EntityId[8] maRaceCarEntityIDs;

	// BrnVehicleManager.h:824
	ResourceHandle[8] maRaceCarModelHandles;

	// BrnVehicleManager.h:825
	ResourceHandle[8] maRaceCarGraphicsModelHandles;

	// BrnVehicleManager.h:826
	RigidBodyId[8] maRaceCarHandlingBodyIDs;

	// BrnVehicleManager.h:827
	RaceCarCrashData[32] maRaceCarCrashes;

	// BrnVehicleManager.h:828
	BrnWorld::ERaceCarType[8] maeRaceCarTypes;

	// BrnVehicleManager.h:830
	VehicleInputInterface::RaceCarBitArray mUsedRaceCars;

	// BrnVehicleManager.h:831
	BitArray<32u> mUsedRaceCarCrashesList;

	// BrnVehicleManager.h:833
	StuntOffencesManager mStuntOffencesManager;

	// BrnVehicleManager.h:838
	VehicleInputInterface::RaceCarBitArray mHiddenRaceCars;

	// BrnVehicleManager.h:839
	VehicleInputInterface::RaceCarBitArray mRaceCarsAddedForCollision;

	// BrnVehicleManager.h:840
	VehicleInputInterface::RaceCarBitArray mNetworkCarsAddedForCollisionThisFrame;

	// BrnVehicleManager.h:841
	VehicleInputInterface::RaceCarBitArray mNetworkCarsRecievedFirstUpdate;

	// BrnVehicleManager.h:844
	uint32_t[8] mauNetworkCarHiddenFramesRemaining;

	// BrnVehicleManager.h:847
	PhysicalTrafficManager mPhysicalTrafficManager;

	// BrnVehicleManager.h:850
	PotentialContact[128] maNonPhysicalContacts;

	// BrnVehicleManager.h:851
	int32_t miNonPhysicalContactCount;

	// BrnVehicleManager.h:854
	ContactSpyData::DiscardedContactQueue mDiscardedContacts;

	// BrnVehicleManager.h:857
	BrnPhysics::Vehicle::VehicleManagerDebugComponent mDebugComponent;

	// BrnVehicleManager.h:860
	BrnPhysics::Vehicle::DebugComponent[8] maRaceCarDebugComponent;

	// BrnVehicleManager.h:861
	bool[8] mabRaceCarDebugComponentRegistered;

	// BrnVehicleManager.h:865
	bool mbSlamsAndShuntsOn;

	// BrnVehicleManager.h:866
	bool mbAllowSlamsAndShuntsEffectsForRivals;

	// BrnVehicleManager.h:868
	float32_t mfFrontRaySensorLength;

	// BrnVehicleManager.h:869
	float32_t mfFrontRayLength;

	// BrnVehicleManager.h:870
	float32_t mfRearRayLength;

	// BrnVehicleManager.h:872
	float32_t mfPlayerShuntScale;

	// BrnVehicleManager.h:873
	float32_t mfAIShuntScale;

	// BrnVehicleManager.h:874
	float32_t mfShuntDecay;

	// BrnVehicleManager.h:875
	float32_t mfVulnerabilityFactorMax;

	// BrnVehicleManager.h:876
	float32_t mfPlayerVulnerabilityDurationSeconds;

	// BrnVehicleManager.h:877
	float32_t mfAIVulnerabilityDurationSeconds;

	// BrnVehicleManager.h:878
	float32_t mfMinSteeringOverrideTimeSlam;

	// BrnVehicleManager.h:879
	float32_t mfMinSteeringOverrideTimeShunt;

	// BrnVehicleManager.h:880
	float32_t mfPlayerMaxSteeringOverrideTimeSlam;

	// BrnVehicleManager.h:881
	float32_t mfAIMaxSteeringOverrideTimeSlam;

	// BrnVehicleManager.h:882
	float32_t mfPlayerMaxSteeringOverrideTimeShunt;

	// BrnVehicleManager.h:883
	float32_t mfAIMaxSteeringOverrideTimeShunt;

	// BrnVehicleManager.h:884
	float32_t mfPlayerSlamForceScale;

	// BrnVehicleManager.h:885
	float32_t mfAISlamForceScale;

	// BrnVehicleManager.h:886
	float32_t mfMaxSlamClosingXSpeed;

	// BrnVehicleManager.h:887
	float32_t mfMinSecondsBetweenImpacts;

	// BrnVehicleManager.h:888
	float32_t mfMinAmountOfSlamForce;

	// BrnVehicleManager.h:889
	float32_t mfMinAmountOfShuntForce;

	// BrnVehicleManager.h:890
	float32_t mfTailgatingVunerabilityTime;

	// BrnVehicleManager.h:892
	float32_t mfBaseSlamMagnitude;

	// BrnVehicleManager.h:893
	float32_t mfBaseShuntMagnitude;

	// BrnVehicleManager.h:895
	float32_t mfTBoneTakedownMaxAngle;

	// BrnVehicleManager.h:896
	float32_t mfTBoneTakedownSpeed;

	// BrnVehicleManager.h:897
	float32_t mfMaxShuntAngle;

	// BrnVehicleManager.h:899
	float32_t mfMinNudgeSpeed;

	// BrnVehicleManager.h:900
	float32_t mfMinShuntSpeed;

	// BrnVehicleManager.h:901
	float32_t mfFatalShuntSpeed;

	// BrnVehicleManager.h:903
	float32_t mfSlamDecayRate;

	// BrnVehicleManager.h:905
	float32_t mfSlamEffectMinMagnitude;

	// BrnVehicleManager.h:906
	float32_t mfSlamEffectMaxMagnitude;

	// BrnVehicleManager.h:907
	float32_t mfMinShuntMagnitude;

	// BrnVehicleManager.h:908
	float32_t mfMaxShuntMagnitude;

	// BrnVehicleManager.h:909
	float32_t mfMinShuntBackwardsMagnitude;

	// BrnVehicleManager.h:910
	float32_t mfMaxShuntBackwardsMagnitude;

	// BrnVehicleManager.h:912
	float32_t mfMinTradingPaintSpeed;

	// BrnVehicleManager.h:913
	float32_t mfFatalSlamSpeed;

	// BrnVehicleManager.h:915
	float32_t mfFatalHitCrashingCarSpeed;

	// BrnVehicleManager.h:916
	float32_t mfMaxHeadToHeadAngle;

	// BrnVehicleManager.h:917
	float32_t mfMinHeadToHeadSpeed;

	// BrnVehicleManager.h:918
	float32_t mfMinHeadToHeadIndividualSpeed;

	// BrnVehicleManager.h:920
	float32_t mfAngleForVerticleTakedown;

	// BrnVehicleManager.h:923
	BrnPhysics::Vehicle::EImpactType[8] maeImpactType;

	// BrnVehicleManager.h:924
	uint8_t[8] mauImpactScore;

	// BrnVehicleManager.h:925
	float32_t[8] mafNoImpactTimeSeconds;

	// BrnVehicleManager.h:926
	int8_t[8] maiPhysicsSlamIndex;

	// BrnVehicleManager.h:929
	float32_t mfContactDisplaySeconds;

	// BrnVehicleManager.h:930
	BrnPhysics::Vehicle::EImpactType meDisplayImpactType;

	// BrnVehicleManager.h:931
	bool mbPlayerWonDisplayImpact;

	// BrnVehicleManager.h:934
	BitArray<8u> mPlayerWonImpact;

	// BrnVehicleManager.h:937
	float32_t[8] mafVulnerableTimeSeconds;

	// BrnVehicleManager.h:940
	float32_t[8] mafVulnerabilityFactor;

	// BrnVehicleManager.h:943
	float32_t[8] mafTotalVulnerableTime;

	// BrnVehicleManager.h:946
	float32_t[8] mafPlayerGrindingOtherDurationSeconds;

	// BrnVehicleManager.h:947
	float32_t[8] mafOtherGrindingPlayerDurationSeconds;

	// BrnVehicleManager.h:948
	float32_t[8] mafRubbingDurationSeconds;

	// BrnVehicleManager.h:949
	uint8_t[8] mau8FramesSincePlayerGrindingOther;

	// BrnVehicleManager.h:950
	uint8_t[8] mau8FramesSinceOtherGrindingPlayer;

	// BrnVehicleManager.h:951
	bool[8] mabRubbingThisUpdate;

	// BrnVehicleManager.h:953
	VehicleDriver mPlayerAiDriver;

	// BrnVehicleManager.h:954
	bool mbPlayerAiDriverValid;

	// BrnVehicleManager.h:955
	float32_t mfPlayerRecentSteering;

	// BrnVehicleManager.h:956
	float32_t mfSteeringUpdateRemainder;

	// BrnVehicleManager.h:959
	EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

	// BrnVehicleManager.h:962
	float32_t mfCrashingAICollisionCrashThresholdMPH;

	// BrnVehicleManager.h:963
	float32_t mfHeadOnWorldCrashThreshold;

	// BrnVehicleManager.h:964
	float32_t mfSideOnWorldCrashThreshold;

	// BrnVehicleManager.h:965
	float32_t mfTrafficCollisionCheckThresholdMPH;

	// BrnVehicleManager.h:966
	float32_t mfMinRCTrafficTranslateSpeedMPH;

	// BrnVehicleManager.h:968
	float32_t mfVerticalTakedownAngleDeg;

	// BrnVehicleManager.h:970
	Matrix44Affine mCameraMatrix;

	// BrnVehicleManager.h:972
	bool mbImpactTime;

	// BrnVehicleManager.h:973
	bool mbEasyCrashingEnabled;

	// BrnVehicleManager.h:974
	bool mbStopPlayerCrashing;

	// BrnVehicleManager.h:975
	bool mbStopAICrashing;

	// BrnVehicleManager.h:976
	bool mbCrashOnHandbrakeTurn;

	// BrnVehicleManager.h:977
	bool mbCrashPlayerNextUpdate;

	// BrnVehicleManager.h:978
	bool DEBUG_mbAlwaysCrashRaceCarToRaceCar;

	// BrnVehicleManager.h:979
	bool DEBUG_mbHornTakedownEnabled;

	// BrnVehicleManager.h:980
	bool mbDebugModifyTrafficContacts;

	// BrnVehicleManager.h:981
	bool mbTrafficCheckingAllowed;

	// BrnVehicleManager.h:983
	bool mbAftertouchIsForceAdditive;

	// BrnVehicleManager.h:984
	bool mbIsOnlineGameMode;

	// BrnVehicleManager.h:985
	bool mbUpdatedPlayerDriver;

	// BrnVehicleManager.h:986
	bool mbForceNoSlowMo;

	// BrnVehicleManager.h:987
	bool mbInOnlineGameModeStartLine;

	// BrnVehicleManager.h:988
	bool mbPlayerCarInJunkYard;

	// BrnVehicleManager.h:993
	float32_t mfPlayerStatStrength;

	// BrnVehicleManager.h:995
	float32_t mfPlayerStatDamageLimit;

	// BrnVehicleManager.h:997
	int32_t miCarSpeed;

	// BrnVehicleManager.h:998
	int32_t miCarStrength;

	// BrnVehicleManager.h:999
	int32_t miCarControl;

	// BrnVehicleManager.h:1000
	int32_t miCarBoost;

	// BrnVehicleManager.h:1001
	BrnResource::ECarType meCarType;

	// BrnVehicleManager.h:1004
	int32_t miPlayerSpeed;

	// BrnVehicleManager.h:1005
	int32_t miPlayerStrength;

	// BrnVehicleManager.h:1006
	int32_t miPlayerControl;

	// BrnVehicleManager.h:1007
	int32_t miPlayerBoost;

	// BrnVehicleManager.h:1010
	Time mCurrentTime;

	// BrnVehicleManager.h:1011
	Time mStartModeTime;

	// BrnVehicleManager.h:1012
	BrnGameState::GameStateModuleIO::EGameModeType meCurrentGameModeType;

	// BrnVehicleManager.h:1015
	float32_t mfCarStatStrengthSlamMax;

	// BrnVehicleManager.h:1016
	float32_t mfCarrStatStrengthSlamMin;

	// BrnVehicleManager.h:1017
	float32_t mfCarStatStrengthShuntMax;

	// BrnVehicleManager.h:1018
	float32_t mfCarrStatStrengthShuntMin;

	// BrnVehicleManager.h:1020
	float32_t mfCarStatStrengthBeingSlammedMax;

	// BrnVehicleManager.h:1021
	float32_t mfCarStatStrengthBeingSlammedMin;

	// BrnVehicleManager.h:1022
	float32_t mfCarStatStrengthBeingShuntedMax;

	// BrnVehicleManager.h:1023
	float32_t mfCarrStatStrengthBeingShuntedMin;

	// BrnVehicleManager.h:1026
	const BrnPhysics::Vehicle::SimpleVehiclePhysics * mpCachedCarA;

	// BrnVehicleManager.h:1027
	const BrnPhysics::Vehicle::SimpleVehiclePhysics * mpCachedCarB;

	// BrnVehicleManager.h:1028
	bool mbCachedCarCarPredictionResult;

	// BrnVehicleManager.h:1029
	Vector3 mCachedCarCarPredictionNormal;

	// BrnVehicleManager.h:1032
	BrnPhysics::Vehicle::VehicleManager::EStationaryPlayerWheelAngle meStationaryPlayerWheelAngle;

	// BrnVehicleManager.h:1035
	bool mbCrashRaceCarWhenFatal;

	// BrnVehicleManager.h:1038
	BrnGameState::EShowtimeBehaviour meShowtimeBehaviour;

	// BrnVehicleManager.h:1041
	int32_t miRaceCarWorldContactValidationPM;

	// BrnVehicleManager.h:1042
	uint8_t mn8RoundRobinControlWord;

	// BrnVehicleManager.h:1045
	BrnPhysics::ContactGenList * mpContactGenList;

	// BrnVehicleManager.h:1046
	CollisionGenerator * mpContactGenerator;

	// BrnVehicleManager.h:1047
	PrimitivePairListBuilder mDetachedPartPrimPairBuilder;

	// BrnVehicleManager.h:1048
	PrimitivePairListBuilder mDetachedWheelPrimPairBuilder;

	// BrnVehicleManager.h:1049
	PrimitivePairListBuilder mHingedPartVsVehiclePairBuilder;

	// BrnVehicleManager.h:1050
	EA::Jobs::Job * mpTractionLineTestsJob;

	// BrnVehicleManager.h:1051
	int32_t miFirstPartContactGenEntry;

	// BrnVehicleManager.h:1052
	CgsMemory::SimpleDataStreamProducer * mpSphereSphereStreamProducer;

	// BrnVehicleManager.h:1053
	CgsMemory::SimpleDataStreamProducer * mpSphereTriangleStreamProducer;

	// BrnVehicleManager.h:1054
	CgsMemory::SimpleDataStreamProducer * mpSweptSphereTriangleStreamProducer;

	// BrnVehicleManager.h:1055
	EA::Jobs::Job * mpSphereSphereStreamJob;

	// BrnVehicleManager.h:1056
	EA::Jobs::Job * mpSphereTriangleStreamJob;

	// BrnVehicleManager.h:1057
	EA::Jobs::Job * mpSweptSphereTriangleStreamJob;

	// BrnVehicleManager.h:1059
	extern const int32_t kiRaceCarPairs = 64;

	// BrnVehicleManager.h:1060
	BitArray<64u> mOverlappingRaceCars;

	// BrnVehicleManager.h:1065
	PrimitivePairListBuilder mTrafficSimpleTrafficPrimPairBuilder;

	// BrnVehicleManager.h:1066
	PrimitivePairListBuilder mRaceCarSimpleTrafficPrimPairBuilder;

	// BrnVehicleManager.h:1069
	CgsMemory::SimpleDataStreamProducer * mpBodyPartWithWorldStream;

	// BrnVehicleManager.h:1072
	int32_t miNumTrafficSphereWorldTests;

	// BrnVehicleManager.h:1075
	CgsMemory::SimpleDataStreamProducer * mpTractionLineStreamProducer;

	// BrnVehicleManager.h:1076
	int32_t miNumSPUTractionLineTests;

	// BrnVehicleManager.h:1087
	Sphere mStuckInCollisionTestCacheSphere;

	// BrnVehicleManager.h:1088
	bool mbPlayerCarStuckInCollision;

	// BrnVehicleManager.h:1091
	extern const uint8_t knVehicleRoundRobinFrontPlaneOccluded = 1;

	// BrnVehicleManager.h:1092
	extern const uint8_t knVehicleRoundRobinRearPlaneOccluded = 2;

	// BrnVehicleManager.h:1093
	extern const uint8_t knVehicleRoundRobinPlaneBools = 3;

	// BrnVehicleManager.h:1094
	extern const uint8_t knVehicleRoundRobinNextTest = 12;

	// BrnVehicleManager.h:1095
	extern const uint8_t knVehicleRoundRobinFrontPlaneToTest;

	// BrnVehicleManager.h:1096
	extern const uint8_t knVehicleRoundRobinRearPlaneToTest = 4;

	// BrnVehicleManager.h:1097
	extern const uint8_t knVehicleRoundRobinFrontSensorToTest = 8;

	// BrnVehicleManager.h:1099
	int32_t miImpactEventCount;

public:
	// BrnVehicleManager.h:165
	void Construct();

	// BrnVehicleManager.h:171
	bool Prepare(rw::LinearResourceAllocator *, InputBuffer_Update *);

	// BrnVehicleManager.h:175
	bool PrepareData(rw::LinearResourceAllocator *);

	// BrnVehicleManager.h:179
	bool Release();

	// BrnVehicleManager.h:183
	void Destruct();

	// BrnVehicleManager.h:193
	void ProcessVehicleMaintenanceEvents(IOBufferStack *, IOBufferStack *, const VehicleInputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:201
	// Declaration
	void ProcessRemoveEvents(const VehicleInputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleManager.cpp:1237
		using namespace CgsDev::Message;

		// BrnVehicleManager.cpp:1242
		using namespace CgsDev::Message;

	}

	// BrnVehicleManager.h:208
	// Declaration
	void ProcessCreateEvents(const VehicleInputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleManager.cpp:1475
		using namespace CgsDev::Message;

		// BrnVehicleManager.cpp:1487
		using namespace CgsDev::Message;

		// BrnVehicleManager.cpp:1496
		using namespace CgsDev::Message;

	}

	// BrnVehicleManager.h:213
	void ProcessValidationEvents(const VehicleInputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:220
	// Declaration
	void ProcessResetEvents(const VehicleInputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleManager.cpp:1731
		using namespace CgsDev::Message;

		// BrnVehicleManager.cpp:1736
		using namespace CgsDev::Message;

	}

	// BrnVehicleManager.h:225
	void ProcessCollisionEvents(const VehicleInputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:235
	void ProcessCrashingNetworkCars(const VehicleDriverInputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *, VehicleOutputInterface *);

	// BrnVehicleManager.h:240
	void OnGameModePrepare(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnVehicleManager.h:245
	void OnGameModeStop(BrnGameState::GameStateModuleIO::EGameModeType);

	// BrnVehicleManager.h:250
	void ProcessNetworkCarDisconnect(const RemotePlayerDisconnectedAction *);

	// BrnVehicleManager.h:255
	void GenerateAboveGroundLineTests(VehicleOutputRequestInterface *) const;

	// BrnVehicleManager.h:260
	void ProcessAboveGroundLineTestsResults(const VehicleInputInterface::InLineTestResultQueue *);

	// BrnVehicleManager.h:264
	void UpdateCameraMatrix(const rw::math::vpu::Matrix44Affine *);

	// BrnVehicleManager.h:273
	void UpdateDrivers(float32_t, const VehicleDriverInputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *, VehicleOutputInterface *);

	// BrnVehicleManager.h:279
	void UpdatePlayerDriver(const BrnPlayerDriverControls *, BitArray<8u> &);

	// BrnVehicleManager.h:285
	void UpdateNetworkDriver(const BrnNetworkDriverControls *, BitArray<8u> &);

	// BrnVehicleManager.h:291
	void UpdateAIDriver(const BrnAIDriverControls *, BitArray<8u> &);

	// BrnVehicleManager.h:297
	void UpdateTrafficDriver(const BrnTrafficDriverControls *, BitArray<8u> &);

	// BrnVehicleManager.h:301
	// Declaration
	void UpdateNetworkCatchup(const VehicleDriverInputInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleManager.cpp:4121
		using namespace CgsDev::Message;

	}

	// BrnVehicleManager.h:308
	void StartVehicleTractionLineTests(IOBufferStack *, const VehicleInputInterface *, DeformationManager *, float32_t);

	// BrnVehicleManager.h:313
	void EndVehicleTractionLineTests(IOBufferStack *, const VehicleInputInterface *);

	// BrnVehicleManager.h:329
	void UpdateVehiclePhysics(IOBufferStack *, IOBufferStack *, BrnUpdateSet, Time, float32_t, float32_t, const VehicleInputInterface *, VehicleOutputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *, bool, EntityId);

	// BrnVehicleManager.h:341
	void DoCrashPrediction(IOBufferStack *, IOBufferStack *, float32_t, const VehicleInputInterface *, VehicleOutputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *, PotentialContactInterface *);

	// BrnVehicleManager.h:345
	// Declaration
	void UpdateTriangleCache(InputBuffer_Update *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleManager.cpp:926
		using namespace CgsSceneManager::SceneManagerIO;

	}

	// BrnVehicleManager.h:353
	void UpdateVehiclePhysicsPostSimulation(const VehicleInputInterface *, const OutputBuffer *, float32_t, BrnGameState::GameStateModuleIO::GameEventQueue *);

	// BrnVehicleManager.h:357
	void UpdateVehicleEffects(const VehicleEffectsInputInterface *);

	// BrnVehicleManager.h:361
	void GetUpdatedVehicleBodies(OutUpdatedExternalBodyQueue *);

	// BrnVehicleManager.h:366
	void ReadUpdatedBodies(const OutputBuffer::OutUpdateRigidBodyQueue *, VecFloat);

	// BrnVehicleManager.h:370
	void ReadUpdatedBodyProperties(const InputBuffer::InChangeRigidBodyInertiaQueue *);

	// BrnVehicleManager.h:375
	void ProcessWheelContacts(float32_t, PotentialContactInterface *);

	// BrnVehicleManager.h:385
	void ProcessContactSpies(const ContactSpyData *, VehicleOutputRequestInterface *, VehicleOutputInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *, DeformationManager *, float32_t);

	// BrnVehicleManager.h:389
	void ProcessDeformationStates(const DeformationOutputInterface *);

	// BrnVehicleManager.h:393
	void WriteOutVehicleStats(VehicleOutputInterface *);

	// BrnVehicleManager.h:397
	void UpdateFatalCrashFlags(VehicleOutputInterface *);

	// BrnVehicleManager.h:403
	bool ValidateRaceCarContact(PotentialContact *, const VehicleInputInterface::InTriangleCacheInterface *, float32_t);

	// BrnVehicleManager.h:409
	bool ValidateRaceCarWorldContact(PotentialContact *, const VehicleInputInterface::InTriangleCacheInterface *, float32_t);

	// BrnVehicleManager.h:416
	bool ValidateTrafficContact(PotentialContact *, const VehicleInputInterface::InTriangleCacheInterface *, float32_t);

	// BrnVehicleManager.h:420
	bool ValidateAndFixUpTrafficTrafficContact(PotentialContact *) const;

	// BrnVehicleManager.h:432
	bool IsRaceCarCrashing(int32_t);

	// BrnVehicleManager.h:437
	void SetPlayerActiveRaceCarIndex(EActiveRaceCarIndex);

	// BrnVehicleManager.h:446
	void UpdateVehicleImpacts(const VehicleInputInterface::ImpactEventQueue *, VehicleOutputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:451
	void StartImpactTime(float32_t, bool);

	// BrnVehicleManager.h:454
	void EndImpactTime();

	// BrnVehicleManager.h:459
	void SetEasyCrashingEnabled(bool);

	// BrnVehicleManager.h:464
	void SetShowtimeBehaviour(BrnGameState::EShowtimeBehaviour);

	// BrnVehicleManager.h:469
	void SetShowtimeAimDirection(Vector3);

	// BrnVehicleManager.h:473
	void SetPlayerCarToShowtimeMode(bool);

	// BrnVehicleManager.h:477
	void SetPlayerCarCrashbreakerTriggered();

	// BrnVehicleManager.h:480
	void CheckState();

	// BrnVehicleManager.h:487
	void CreateContactEvent(RaceCarContact *, const OutContactSpy *, const PotentialContact *);

	// BrnVehicleManager.h:494
	void CreateContactEvent(TrafficContact *, const OutContactSpy *, const PotentialContact *);

	// BrnVehicleManager.h:499
	EntityId GetEntityId(RigidBodyId);

	// BrnVehicleManager.h:504
	RigidBodyId GetRigidBodyId(int32_t);

	// BrnVehicleManager.h:508
	void SetPlayerCrashingNextUpdate();

	// BrnVehicleManager.h:511
	BrnPhysics::Vehicle::RaceCarPhysics * GetRaceCarPhysics(RigidBodyId);

	// BrnVehicleManager.h:519
	void HACK_UpdateRaceCarBody(RigidBodyId, Matrix44Affine, Vector3, Vector3);

	// BrnVehicleManager.h:522
	void TurnOffSlamsAndShunts();

	// BrnVehicleManager.h:525
	void TurnOnSlamsAndShunts();

	// BrnVehicleManager.h:528
	void TurnOnSlamsAndShuntsEffectsForRivals();

	// BrnVehicleManager.h:531
	void TurnOffSlamsAndShuntsEffectsForRivals();

	// BrnVehicleManager.h:534
	void ClearTestedTraffic();

	// BrnVehicleManager.h:538
	void ApplyPlayerStats(const SendCarStatsAction *);

	// BrnVehicleManager.h:541
	bool HasRaceCarHadRecentImpact(EActiveRaceCarIndex);

	// BrnVehicleManager.h:545
	EntityId GetGlobalEntityIDFromPhysicsEntityID(EntityId);

	// BrnVehicleManager.h:549
	EntityId GetPhysicsEntityIDFromGlobalEntityID(EntityId);

	// BrnVehicleManager.h:554
	bool GetTrafficPhysicsEntityIDFromGlobalEntityID_Safe(EntityId, EntityId *);

	// BrnVehicleManager.h:562
	const ContactSpyData::DiscardedContactQueue * GetDiscardedContacts() const;

	// BrnVehicleManager.h:566
	void SetTailgatingVulnerability(EActiveRaceCarIndex);

	// BrnVehicleManager.h:570
	void SetStationaryPlayerWheelAngle(BrnPhysics::Vehicle::VehicleManager::EStationaryPlayerWheelAngle);

	// BrnVehicleManager.h:574
	void SetTrafficCheckingAllowed(bool);

	// BrnVehicleManager.h:579
	// Declaration
	void RecordNetworkRaceCarsAddedForCollision(const VehicleInputInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleManager.cpp:9696
		using namespace CgsDev::Message;

	}

	// BrnVehicleManager.h:583
	void SwitchPlayerAIDonuttingAttribs(bool);

	// BrnVehicleManager.h:588
	const PhysicalTrafficVehicle * GetTrafficVehicle(EntityId) const;

	// BrnVehicleManager.h:602
	void StartVehicleContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *, const InputBuffer::InOverlapPairsQueue *, float32_t, DeformationManager *, IOBufferStack *, LinearMalloc *, PotentialContactInterface *);

	// BrnVehicleManager.h:612
	// Declaration
	void EndVehicleContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *, const InputBuffer::InOverlapPairsQueue *, float32_t, DeformationManager *, IOBufferStack *, LinearMalloc *, PotentialContactInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleManagerContactGeneration.cpp:536
		using namespace CgsDev::Message;

	}

	// BrnVehicleManager.h:621
	void StartPartContactGeneration(const VehicleInputInterface::InTriangleCacheInterface *, float32_t, DeformationManager *, IOBufferStack *, PotentialContactInterface *, LinearMalloc *);

	// BrnVehicleManager.h:628
	void EndPartContactGeneration(float32_t, DeformationManager *, IOBufferStack *, PotentialContactInterface *);

	// BrnVehicleManager.h:638
	// Declaration
	void DoRaceCarWorldContactValidation(PotentialContactInterface *, const VehicleInputInterface::InTriangleCacheInterface *, float32_t, DeformationManager *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleManagerContactGeneration.cpp:1394
		using namespace CgsSceneManager::SceneManagerIO;

	}

	// BrnVehicleManager.h:643
	void DoTrafficWorldContactOrdering(PotentialContactInterface *);

	// BrnVehicleManager.h:647
	void FreeAllocations(IOBufferStack *);

	// BrnVehicleManager.h:653
	void BridgeSimpleTrafficWithCarContactsToSimulation(InputBuffer::InAddContactQueue *, const PotentialContactInterface *);

	// BrnVehicleManager.h:656
	bool GetForceNoSlowMo();

	// BrnVehicleManager.h:660
	void ResetForceNoSlowMo();

	// BrnVehicleManager.h:667
	// Declaration
	void ValidateSimulationContacts(const InputBuffer::InAddContactQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleManager.cpp:9866
		using namespace CgsPhysics::PhysicsSimulationIO;

	}

	// BrnVehicleManager.h:674
	void ReadSurfaceProperties(Attribute::Key);

	// BrnVehicleManager.h:679
	void ClearSnappedNetworkCarContacts(DeformationManager *);

	// BrnVehicleManager.h:684
	// Declaration
	void OnPrepareGameMode(const PrepareForModeAction *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleManager.cpp:10006
		using namespace CgsDev::Message;

	}

	// BrnVehicleManager.h:689
	// Declaration
	void OnStartGameMode(const StartPlayingModeAction *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleManager.cpp:10033
		using namespace CgsDev::Message;

	}

	// BrnVehicleManager.h:694
	// Declaration
	void OnJunkYardDriveThru(const JunkYardDriveThruAction *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleManager.cpp:10061
		using namespace CgsDev::Message;

		// BrnVehicleManager.cpp:10069
		using namespace CgsDev::Message;

	}

private:
	// BrnVehicleManager.h:715
	void DoCarCarContactGeneration(EntityId, EntityId, EntityId, EntityId, DeformationManager *, BrnPhysics::ContactGenList *, CollisionGenerator *, CgsMemory::SimpleDataStreamProducer *, uint16_t, float32_t);

	// BrnVehicleManager.h:726
	void DoRaceCarWorldContactGeneration(int32_t, DeformationManager *, const VehicleInputInterface::InTriangleCacheInterface *, BrnPhysics::ContactGenList *, CollisionGenerator *, CgsMemory::SimpleDataStreamProducer *, CgsMemory::SimpleDataStreamProducer *, uint32_t);

	// BrnVehicleManager.h:735
	void DoRaceCarWheelWorldContactGeneration(int32_t, DeformationManager *, const VehicleInputInterface::InTriangleCacheInterface *, BrnPhysics::ContactGenList *, CollisionGenerator *, float32_t);

	// BrnVehicleManager.h:746
	void DoTrafficCarWorldContactGeneration(int32_t, DeformationManager *, const VehicleInputInterface::InTriangleCacheInterface *, BrnPhysics::ContactGenList *, CollisionGenerator *, CgsMemory::SimpleDataStreamProducer *, uint32_t, LinearMalloc *);

	// BrnVehicleManager.h:751
	void ProcessAftertouchEvents(int32_t, BrnGameState::GameStateModuleIO::GameEventQueue *);

	// BrnVehicleManager.h:757
	void AddContactResultsToQueue(CollisionGenerator *, BrnPhysics::ContactGenList *, PotentialContactInterface *);

	// BrnVehicleManager.h:808
	EActiveRaceCarIndex GetChainedAttackerIndex(EActiveRaceCarIndex, EActiveRaceCarIndex) const;

	// BrnVehicleManager.h:1102
	void ClearCachedCarCarPrediction();

	// BrnVehicleManager.h:1110
	// Declaration
	bool PrepareTriangleCache(InputBuffer_Update *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleManager.cpp:891
		using namespace CgsSceneManager::SceneManagerIO;

	}

	// BrnVehicleManager.h:1117
	void RemoveTrafficVehicle(uint8_t, VehicleOutputRequestInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:1126
	void AddRaceCarDeformationModel(DeformationInputInterface *, int32_t, Matrix44Affine, float32_t, BrnPhysics::Deformation::DeformationResetType);

	// BrnVehicleManager.h:1133
	void RemoveRaceCarDeformationModel(DeformationInputInterface *, int32_t);

	// BrnVehicleManager.h:1140
	void GetDataFromQueryID(SceneQueryId, uint8_t *, uint8_t *, uint8_t *) const;

	// BrnVehicleManager.h:1149
	void HandleRaceCarRaceCarContact(RaceCarContact, VehicleOutputRequestInterface *, VehicleOutputInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *, float32_t);

	// BrnVehicleManager.h:1158
	void HandleRaceCarTrafficCarPotentialContact(PotentialContact, VehicleOutputRequestInterface *, VehicleOutputInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *, float32_t);

	// BrnVehicleManager.h:1165
	bool IsPointBetweenTwoParallelPlanes(Vector3, Vector3, Vector3, Vector3);

	// BrnVehicleManager.h:1169
	bool CheckForPlayerSlammingAIIntoAI(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1173
	void CheckForAICarAICarCrash(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1177
	bool CheckForSlamAndTradingPaint(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1181
	bool CheckForShuntAndNudge(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1185
	bool CheckForHeadToHead(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1189
	bool CheckForTBoneTakedown(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1193
	bool CheckForVerticalTakedown(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1198
	bool CheckForVerticalTakedownSituation(const BrnPhysics::Vehicle::RaceCarPhysics *, Vector3);

	// BrnVehicleManager.h:1201
	bool CheckForHittingAlreadyCrashingCar(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1204
	bool CheckForGrindingAndRubbing(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1207
	bool CheckForStationaryTargetTakedown(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1211
	void CheckForAllTypesOfImpacts(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1215
	void ApplySlam(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1219
	void ApplyShunt(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1229
	void HandleRaceCarTrafficVehicleContactSpy(OutContactSpy *, PotentialContact *, VehicleOutputRequestInterface *, VehicleOutputInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:1237
	bool ShouldRaceCarCrashOnCarImpact(EActiveRaceCarIndex, const BrnPhysics::Vehicle::RaceCarPhysics *, const BrnPhysics::Vehicle::SimpleVehiclePhysics *, VecFloat, VecFloat) const;

	// BrnVehicleManager.h:1248
	void DecideOutcomeOfRaceCarTrafficContact(uint16_t, uint16_t, Vector3, Vector3, Vector3, VecFloat *, uint32_t *);

	// BrnVehicleManager.h:1258
	void HandleRaceCarWorldPotentialContact(PotentialContact, VehicleOutputRequestInterface *, VehicleOutputInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *, const VehicleInputInterface::InTriangleCacheInterface *, float32_t);

	// BrnVehicleManager.h:1267
	void HandleTrafficCarWorldPotentialContact(PotentialContact, VehicleOutputRequestInterface *, VehicleOutputInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *, float32_t);

	// BrnVehicleManager.h:1276
	void HandleTrafficCarTrafficCarPotentialContact(PotentialContact, VehicleOutputRequestInterface *, VehicleOutputInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *, float32_t);

	// BrnVehicleManager.h:1280
	void GenerateContactSituation(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *);

	// BrnVehicleManager.h:1286
	bool PredictCarCarIntersection(const BrnPhysics::Vehicle::SimpleVehiclePhysics *, const BrnPhysics::Vehicle::SimpleVehiclePhysics *, float32_t);

	// BrnVehicleManager.h:1289
	VecFloat PredictCarWorldContactTime(const PotentialContact &);

	// BrnVehicleManager.h:1304
	// Declaration
	void SetRaceCarCrashing(EntityId, EntityId, Vector3, Vector3, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *, BrnGameState::ETakedownType) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleManager.cpp:7003
		using namespace CgsDev::Message;

		// BrnVehicleManager.cpp:7061
		using namespace CgsDev::Message;

	}

	// BrnVehicleManager.h:1314
	// Declaration
	void SetNetworkCarCrashing(EntityId, EntityId, float32_t, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleManager.cpp:3985
		using namespace CgsDev::Message;

		// BrnVehicleManager.cpp:4026
		using namespace CgsDev::Message;

	}

	// BrnVehicleManager.h:1319
	void UpdateCrashes(float32_t);

	// BrnVehicleManager.h:1326
	bool PhysicallyCrashRaceCar(uint16_t, VehicleOutputRequestInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:1336
	void PhysicallyUncrashRaceCar(uint16_t, VehicleOutputRequestInterface *, DeformationInputInterface *, float32_t, bool, BrnPhysics::Deformation::DeformationResetType);

	// BrnVehicleManager.h:1344
	const rw::math::vpu::Vector3 ScaleCarSpacePositionToWheels(Vector3 *, BrnPhysics::Vehicle::VehiclePhysics *) const;

	// BrnVehicleManager.h:1353
	void UpdateAggressiveDriving(float32_t, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:1362
	void ForceRaceCarCrash(VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *, EActiveRaceCarIndex);

	// BrnVehicleManager.h:1372
	void ForceRaceCarCrash(VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *, EActiveRaceCarIndex, EntityId);

	// BrnVehicleManager.h:1384
	void CalculateSlamData(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *, float32_t *, float32_t *, float32_t *, float32_t *, Vector3 *, uint8_t *, float32_t *);

	// BrnVehicleManager.h:1393
	void CalculateShuntData(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *, Vector3 *, VecFloat *, float32_t *, float32_t *);

	// BrnVehicleManager.h:1408
	void SendImpactMessage(VehicleInputInterface::ImpactEventQueue *, BrnPhysics::Vehicle::EImpactType, EActiveRaceCarIndex, EActiveRaceCarIndex, Vector3, float32_t, float32_t, float32_t, float32_t, uint8_t);

	// BrnVehicleManager.h:1416
	// Declaration
	void DoHornTakedowns(VehicleOutputRequestInterface *, VehicleOutputInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleManager.cpp:4690
		using namespace CgsDev::Message;

	}

	// BrnVehicleManager.h:1430
	void InstantTakedown(EntityId, EntityId, Vector3, Vector3, float32_t, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *, BrnGameState::ETakedownType);

	// BrnVehicleManager.h:1435
	Matrix44Affine GetVehicleBoundingBoxCentreTransform(BrnPhysics::Vehicle::VehiclePhysics *, EActiveRaceCarIndex) const;

	// BrnVehicleManager.h:1442
	void DoRaceCarTractionLineTestsAgainstTriangleCache(IOBufferStack *, const VehicleInputInterface *);

	// BrnVehicleManager.h:1448
	void DoTrafficTractionLineTestsAgainstTriangleCache(IOBufferStack *, const VehicleInputInterface *);

	// BrnVehicleManager.h:1454
	void DoPlayerTractionLineTestsPostSimulation(const VehicleInputInterface *, float32_t);

	// BrnVehicleManager.h:1459
	void DoPlayerStuckLineTests(const VehicleInputInterface *);

	// BrnVehicleManager.h:1466
	// Declaration
	int32_t AddPlayerStuckInCollisionLineTests(CollisionGenerator *, const VehicleInputInterface::InTriangleCacheInterface *, DeformationManager *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleManager.cpp:2059
		using namespace CgsSceneManager;

	}

	// BrnVehicleManager.h:1471
	// Declaration
	void ReadPlayerStuckTractionLineTestResults(SimpleDataStreamResultIterator &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleManager.cpp:2234
		using namespace CgsSceneManager;

	}

	// BrnVehicleManager.h:1478
	void UpdatePlayerStuckInCollisionTest(const VehicleInputInterface::InTriangleCacheInterface *, float32_t);

	// BrnVehicleManager.h:1483
	void UpdatePlayerStuckInCollisionSpheres(float32_t);

	// BrnVehicleManager.h:1492
	void CrashFatalRaceCars(VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, VehicleOutputInterface *, DeformationInputInterface *, EntityId);

	// BrnVehicleManager.h:1503
	void DoCrashPredictionForRaceCarAndTrafficVehicle(BrnPhysics::Vehicle::PotentialContactAverager *, PotentialContact *, float32_t, VehicleOutputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:1513
	void HandleCrashPredictionForRaceCarAndTrafficVehicle(BrnPhysics::Vehicle::PotentialContactAverager *, float32_t, VehicleOutputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:1524
	void HandleCrashPredictionForRaceCarAndWorld(float32_t, PotentialContactInterface *, const VehicleInputInterface *, VehicleOutputInterface *, VehicleOutputRequestInterface *, VehicleManagerOutputInterface *, DeformationInputInterface *);

	// BrnVehicleManager.h:1529
	BrnPhysics::Vehicle::SimpleVehiclePhysics * GetVehiclePhysics(EntityId);

	// BrnVehicleManager.h:1534
	bool IsRaceCarHidden(EActiveRaceCarIndex) const;

	// BrnVehicleManager.h:1539
	void ProcessShowtimeShunts(const ContactSpyData *);

	// BrnVehicleManager.h:1546
	void ApplyShowtimeShunt(PhysicalTrafficVehicle *, const BrnPhysics::Vehicle::VehiclePhysics *, VecFloat);

	// BrnVehicleManager.h:1552
	void DoVehicleTractionLineAllocations(IOBufferStack *, CollisionGenerator *);

	// BrnVehicleManager.h:1558
	// Declaration
	int32_t AddRaceCarTractionLineTests(CollisionGenerator *, const VehicleInputInterface::InTriangleCacheInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleManager.cpp:1978
		using namespace CgsSceneManager;

	}

	// BrnVehicleManager.h:1564
	void RunTractionLineTestJobs(CollisionGenerator *);

	// BrnVehicleManager.h:1569
	// Declaration
	void ReadRaceCarTractionLineTestResults(SimpleDataStreamResultIterator &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleManager.cpp:2171
		using namespace CgsSceneManager;

	}

	// BrnVehicleManager.h:1574
	void DoVehicleTractionLineDecallocations(IOBufferStack *);

	// BrnVehicleManager.h:1580
	// Declaration
	void SetNetworkRaceCarHidden(EActiveRaceCarIndex, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnVehicleManager.h:2066
		using namespace CgsDev::Message;

	}

	// BrnVehicleManager.h:1585
	void SetAllNetworkRaceCarsHidden(int32_t);

}

// BrnVehicleManager.h:1091
extern const uint8_t knVehicleRoundRobinFrontPlaneOccluded = 1;

// BrnVehicleManager.h:1092
extern const uint8_t knVehicleRoundRobinRearPlaneOccluded = 2;

// BrnVehicleManager.h:1093
extern const uint8_t knVehicleRoundRobinPlaneBools = 3;

// BrnVehicleManager.h:1094
extern const uint8_t knVehicleRoundRobinNextTest = 12;

// BrnVehicleManager.h:1095
extern const uint8_t knVehicleRoundRobinFrontPlaneToTest;

// BrnVehicleManager.h:1096
extern const uint8_t knVehicleRoundRobinRearPlaneToTest = 4;

// BrnVehicleManager.h:1097
extern const uint8_t knVehicleRoundRobinFrontSensorToTest = 8;

// Wheel.h:30
namespace BrnPhysics {
	// Wheel.h:33
	namespace Vehicle {
		// Declaration
		struct VehicleManager {
			// BrnVehicleManager.h:140
			enum EPrepareStage {
				E_PREPARESTAGE_START = 0,
				E_PREPARESTAGE_DATA = 1,
				E_PREPARESTAGE_MANAGER = 2,
				E_PREPARESTAGE_DONE = 3,
			}

			// BrnVehicleManager.h:148
			enum EReleaseStage {
				E_RELEASESTAGE_START = 0,
				E_RELEASESTAGE_MANAGER = 1,
				E_RELEASESTAGE_DATA = 2,
				E_RELEASESTAGE_DONE = 3,
			}

			// BrnVehicleManager.h:156
			enum EStationaryPlayerWheelAngle {
				E_STATIONARY_PLAYER_WHEEL_ANGLE_LEFT = 0,
				E_STATIONARY_PLAYER_WHEEL_ANGLE_RIGHT = 1,
				E_STATIONARY_PLAYER_WHEEL_ANGLE_STRAIGHT = 2,
			}

			// BrnVehicleManager.h:762
			struct RaceCarResponseInfo {
				// BrnVehicleManager.h:764
				RaceCarContact * mpContact;

				// BrnVehicleManager.h:765
				VehicleOutputRequestInterface * mpRequestOutputInterface;

				// BrnVehicleManager.h:766
				VehicleOutputInterface * mpVehicleOutputInterface;

				// BrnVehicleManager.h:767
				VehicleManagerOutputInterface * mpManagerOutputInterface;

				// BrnVehicleManager.h:768
				DeformationInputInterface * mpDeformationInterface;

				// BrnVehicleManager.h:769
				EntityId mRaceCarAEntityID;

				// BrnVehicleManager.h:770
				EntityId mRaceCarBEntityID;

				// BrnVehicleManager.h:771
				EActiveRaceCarIndex meActiveRaceCarIndexA;

				// BrnVehicleManager.h:772
				EActiveRaceCarIndex meActiveRaceCarIndexB;

				// BrnVehicleManager.h:773
				BrnPhysics::Vehicle::RaceCarPhysics * mpRaceCarA;

				// BrnVehicleManager.h:774
				BrnPhysics::Vehicle::RaceCarPhysics * mpRaceCarB;

				// BrnVehicleManager.h:775
				Vector3 mClosingVelocityAtoB;

				// BrnVehicleManager.h:776
				VecFloat mvfSlamMagnitude;

				// BrnVehicleManager.h:777
				bool mbRaceCarAIsCrashing;

				// BrnVehicleManager.h:778
				bool mbRaceCarBIsCrashing;

				// BrnVehicleManager.h:779
				bool mbRaceCarAIsPlayer;

				// BrnVehicleManager.h:780
				bool mbRaceCarBIsPlayer;

				// BrnVehicleManager.h:781
				bool mbRaceCarAIsNetworkCar;

				// BrnVehicleManager.h:782
				bool mbRaceCarBIsNetworkCar;

				// BrnVehicleManager.h:783
				bool mbOtherCarIsAI;

				// BrnVehicleManager.h:784
				float_t mfClosingSpeed;

				// BrnVehicleManager.h:785
				float_t mfRaceCarASpeed;

				// BrnVehicleManager.h:786
				float_t mfRaceCarBSpeed;

				// BrnVehicleManager.h:787
				float_t mfNormalStressSq;

				// BrnVehicleManager.h:788
				Matrix44Affine mRaceCarATransform;

				// BrnVehicleManager.h:789
				Matrix44Affine mRaceCarBTransform;

				// BrnVehicleManager.h:790
				float_t mfAngleBetweenCars;

				// BrnVehicleManager.h:793
				BrnPhysics::Vehicle::EImpactType meImpactType;

				// BrnVehicleManager.h:794
				EActiveRaceCarIndex meAggressorActiveRaceCarIndex;

				// BrnVehicleManager.h:795
				EActiveRaceCarIndex meVictimActiveRaceCarIndex;

				// BrnVehicleManager.h:796
				bool mbCrashRaceCarA;

				// BrnVehicleManager.h:797
				bool mbCrashRaceCarB;

				// BrnVehicleManager.h:798
				bool mbPlayerWonImpact;

				// BrnVehicleManager.h:799
				uint32_t muImpactScore;

				// BrnVehicleManager.h:802
				BrnPhysics::Vehicle::EImpactSituation meImpactSitutation;

			}

		}

		// BrnVehicleManager.h:86
		const uint8_t KF_MAX_RACE_CAR_CRASHES = 32;

		// BrnVehicleManager.h:88
		const int32_t KI_MAX_NONPHYSICAL_CONTACTS = 128;

		// BrnVehicleManager.h:90
		const float32_t KF_SHOWTIME_UNCAP_SPEED_LIMIT_TIME;

	}

}


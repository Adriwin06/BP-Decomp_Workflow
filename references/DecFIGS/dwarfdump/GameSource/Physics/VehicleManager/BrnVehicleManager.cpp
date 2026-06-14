// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnVehicleConstants.h:28
	namespace Vehicle {
		// BrnVehicleManager.cpp:256
		extern float32_t gfGroundContactCullHeight;

		// BrnVehicleManager.cpp:290
		const int32_t KI_TRACTION_LINE_STACK_SIZE = 4096;

		// BrnVehicleManager.cpp:297
		const VecFloat KVF_STUCK_IN_COLLISION_CACHE_SPHERE_RADIUS;

	}

}

// BrnVehicleManager.cpp:333
struct BrnPhysics::Vehicle::PotentialContactAverager {
private:
	// BrnVehicleManager.cpp:356
	PotentialContact[20] maContactPairs;

	// BrnVehicleManager.cpp:357
	float32_t[20] mafContactPairsCounts;

	// BrnVehicleManager.cpp:358
	uint32_t muContactPairCount;

public:
	// BrnVehicleManager.cpp:338
	void Construct();

	// BrnVehicleManager.cpp:342
	uint32_t GetContactPairCount() const;

	// BrnVehicleManager.cpp:347
	bool AddContactPair(PotentialContact);

	// BrnVehicleManager.cpp:353
	void GetAveragedContactPoint(uint32_t, PotentialContact &);

private:
	// BrnVehicleManager.cpp:363
	int32_t FindSlotForContact(PotentialContact, bool &);

}

// BrnVehicleManager.cpp:1945
void BrnPhysics::Vehicle::VehicleManager::DoVehicleTractionLineAllocations(IOBufferStack *  lpInputBufferStack, CollisionGenerator *  lpTractionContactGen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:1952
		int32_t liTotalNumTractionLines;

	}
}

// BrnVehicleManager.cpp:2292
void BrnPhysics::Vehicle::VehicleManager::DoVehicleTractionLineDecallocations(IOBufferStack *  lpInputBufferStack) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnVehicleManager.cpp:4331
void BrnPhysics::Vehicle::VehicleManager::ProcessWheelContacts(float32_t  lfSimTimerTimeStep, PotentialContactInterface *  lpPotentialContactQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnVehicleManager.cpp:5343
void BrnPhysics::Vehicle::VehicleManager::CheckForAICarAICarCrash(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *  lpInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnVehicleManager.cpp:9829
void BrnPhysics::Vehicle::VehicleManager::GetChainedAttackerIndex(EActiveRaceCarIndex  leVictimActiveRaceCarIndex, EActiveRaceCarIndex  leAggressorActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnVehicleManager.cpp:6624
void BrnPhysics::Vehicle::VehicleManager::GenerateContactSituation(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *  lpInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnVehicleManager.cpp:7341
void BrnPhysics::Vehicle::VehicleManager::ValidateRaceCarContact(PotentialContact *  lpContact, const VehicleInputInterface::InTriangleCacheInterface *  lpTriCacheInterface, float32_t  lfTimestep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnVehicleManager.cpp:8005
void BrnPhysics::Vehicle::VehicleManager::HandleRaceCarTrafficVehicleContactSpy(OutContactSpy *  lpSpy, PotentialContact *  lpContact, VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, VehicleManagerOutputInterface *  lpManagerOutputInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnVehicleManager.cpp:8689
void BrnPhysics::Vehicle::VehicleManager::OnGameModePrepare(BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnVehicleManager.cpp:8702
void BrnPhysics::Vehicle::VehicleManager::OnGameModeStop(BrnGameState::GameStateModuleIO::EGameModeType  leGameModeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnVehicleManager.cpp:8932
void BrnPhysics::Vehicle::VehicleManager::StartImpactTime(float32_t  lfTimeStepMultiplier, bool  lbAftertouchIsForceAdditive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnVehicleManager.cpp:8944
void BrnPhysics::Vehicle::VehicleManager::EndImpactTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnVehicleManager.cpp:9641
void BrnPhysics::Vehicle::VehicleManager::SetTailgatingVulnerability(EActiveRaceCarIndex  leTailgatedCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnVehicleManager.cpp:8261
void BrnPhysics::Vehicle::VehicleManager::IsRaceCarCrashing(int32_t  liRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnVehicleManager.cpp:4734
void BrnPhysics::Vehicle::VehicleManager::GetVehicleBoundingBoxCentreTransform(BrnPhysics::Vehicle::VehiclePhysics *  lpVehiclePhysics, EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnVehicleManager.cpp:4736
	Matrix44Affine & lTransform;

	{
		// BrnVehicleManager.cpp:4736
		Matrix44Affine lTransform;

		// BrnVehicleManager.cpp:4739
		Vector3 lAABBCentre;

		rw::math::vpu::GetVecFloat_Two(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Matrix44Affine::WAxis(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnVehicleManager.cpp:5319
void BrnPhysics::Vehicle::VehicleManager::CheckForVerticalTakedownSituation(const BrnPhysics::Vehicle::RaceCarPhysics *  lpRaceCarPhysics, const rw::math::vpu::Vector3  lContactPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:5321
		Matrix44Affine lTransform;

		// BrnVehicleManager.cpp:5322
		const AxisAlignedBox * lpBox;

		// BrnVehicleManager.cpp:5323
		Vector3 lDiff;

		// BrnVehicleManager.cpp:5324
		VecFloat lProjectionZ;

		// BrnVehicleManager.cpp:5325
		VecFloat lProjectionX;

		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		SimpleVehiclePhysics::GetDeformableBBox(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
	}
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
}

// BrnVehicleManager.cpp:8027
void BrnPhysics::Vehicle::VehicleManager::ShouldRaceCarCrashOnCarImpact(EActiveRaceCarIndex  leActiveRaceCarIndex, const BrnPhysics::Vehicle::RaceCarPhysics *  lpRaceCarPhysics, const BrnPhysics::Vehicle::SimpleVehiclePhysics *  lpOtherCar, const VecFloat  lvfClosingSpeed, const VecFloat  lvfStrengthScale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:8029
		VecFloat lvfRaceCarSpeedChange;

		// BrnVehicleManager.cpp:8030
		VecFloat lvfOtherCarMass;

		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		RaceCarPhysics::GetSameWayCrashSpeed(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
	}
}

// BrnVehicleManager.cpp:522
float32_t SignNonZero(float32_t  lfValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnVehicleManager.cpp:8843
void BrnPhysics::Vehicle::VehicleManager::CalculateShuntData(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *  lpInfo, Vector3 *  lpImpactDirection, VecFloat *  lpvfShuntMagnitude, float32_t *  lpfVulnerabilitySeconds, float32_t *  lpfSteeringDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:8845
		Matrix44Affine lContactedTransform;

		// BrnVehicleManager.cpp:8846
		EActiveRaceCarIndex leContactedActiveRaceCarIndex;

		// BrnVehicleManager.cpp:8847
		EActiveRaceCarIndex leAggressorActiveRaceCarIndex;

		// BrnVehicleManager.cpp:8848
		const rw::math::vpu::Vector3 lContactNormal;

		// BrnVehicleManager.cpp:8849
		BrnPhysics::Vehicle::EImpactSituation leImpactSituation;

		// BrnVehicleManager.cpp:8850
		const BrnPhysics::Vehicle::RaceCarPhysics * lpAggressorPhysics;

		// BrnVehicleManager.cpp:8851
		BrnPhysics::Vehicle::RaceCarPhysics * lpContactedPhysics;

		// BrnVehicleManager.cpp:8852
		float32_t lfVulnerabilitySeconds;

		// BrnVehicleManager.cpp:8853
		Vector3 lImpactDirection;

		// BrnVehicleManager.cpp:8854
		Vector3 lJoiningVector;

		// BrnVehicleManager.cpp:8855
		MaskScalar lNormalFacing;

		// BrnVehicleManager.cpp:8856
		VecFloat lvfContactedMass;

		// BrnVehicleManager.cpp:8857
		VecFloat lvfAggressorMass;

		// BrnVehicleManager.cpp:8858
		VecFloat lvfClosingSpeed;

		// BrnVehicleManager.cpp:8859
		VecFloat lvfShuntMagnitude;

		// BrnVehicleManager.cpp:8860
		float32_t lfSteeringDirection;

		// BrnVehicleManager.cpp:8861
		uint8_t lu8RaceCarType;

		// BrnVehicleManager.cpp:8862
		uint8_t lu8AggressorRaceCarType;

	}
	rw::math::vpu::CompLessThan(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	SignNonZero(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	{
	}
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::GetVecFloat_Two(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
}

// BrnVehicleManager.cpp:2835
void BrnPhysics::Vehicle::VehicleManager::PredictCarWorldContactTime(const const PotentialContact &  lContact) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnVehicleManager.cpp:2845
	VecFloat lvfImpactTime;

	{
		// BrnVehicleManager.cpp:2840
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnVehicleManager.cpp:2841
		Vector3 lCarVel;

		// BrnVehicleManager.cpp:2843
		VecFloat lvfSeparation;

		// BrnVehicleManager.cpp:2844
		VecFloat lvfVelocityIntoNormal;

		// BrnVehicleManager.cpp:2845
		VecFloat lvfImpactTime;

	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
}

// BrnVehicleManager.cpp:4762
void BrnPhysics::Vehicle::VehicleManager::IsPointBetweenTwoParallelPlanes(Vector3  lPos, Vector3  lFrontPlanePos, Vector3  lBackPlanePos, Vector3  lPlaneNormal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:4764
		float32_t lfFrontDot;

		// BrnVehicleManager.cpp:4765
		float32_t lfBackDot;

		rw::math::vpu::operator-=(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::fpu::Sgn<float>(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::fpu::Sgn<float>(/* parameters */);
	}
}

// BrnVehicleManager.cpp:5645
void BrnPhysics::Vehicle::VehicleManager::CheckForGrindingAndRubbing(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *  lpInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:5647
		int32_t liOtherIndex;

		// BrnVehicleManager.cpp:5648
		bool lbPlayerContactingWall;

		// BrnVehicleManager.cpp:5649
		bool lbOtherContactingWall;

	}
}

// BrnVehicleManager.cpp:8722
void BrnPhysics::Vehicle::VehicleManager::CalculateSlamData(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *  lpInfo, float32_t *  lpfSlamDuration, float32_t *  lpfAggressorReactionDuration, float32_t *  lpfSteeringDirection, float32_t *  lpfRecoveryTime, Vector3 *  lpSlamDirection, uint8_t *  lpuImpactScore, float32_t *  lpfVulnerabilitySeconds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:8724
		Matrix44Affine lContactedTransform;

		// BrnVehicleManager.cpp:8725
		EActiveRaceCarIndex leContactedActiveRaceCarIndex;

		// BrnVehicleManager.cpp:8726
		EActiveRaceCarIndex leAggressorActiveRaceCarIndex;

		// BrnVehicleManager.cpp:8727
		uint8_t luImpactScore;

		// BrnVehicleManager.cpp:8728
		BrnPhysics::Vehicle::EImpactSituation leImpactSituation;

		// BrnVehicleManager.cpp:8729
		const BrnPhysics::Vehicle::RaceCarPhysics * lpAggressorPhysics;

		// BrnVehicleManager.cpp:8730
		BrnPhysics::Vehicle::RaceCarPhysics * lpContactedPhysics;

		// BrnVehicleManager.cpp:8731
		Vector3 lJointingVector;

		// BrnVehicleManager.cpp:8732
		float32_t lfVulnerabilitySeconds;

		// BrnVehicleManager.cpp:8733
		float32_t lfSlamDuration;

		// BrnVehicleManager.cpp:8734
		float32_t lfAggressorReactionDuration;

		// BrnVehicleManager.cpp:8735
		float32_t lfVictumSlamPower;

		// BrnVehicleManager.cpp:8736
		float32_t lfSteeringDirection;

		// BrnVehicleManager.cpp:8737
		float32_t lfSlamPower;

		// BrnVehicleManager.cpp:8738
		float32_t lfMassFactor;

		// BrnVehicleManager.cpp:8739
		float32_t lfRecoveryTime;

		// BrnVehicleManager.cpp:8740
		Vector3 lContactPoint;

		// BrnVehicleManager.cpp:8741
		Vector3 lSlamDirection;

		// BrnVehicleManager.cpp:8742
		uint8_t lu8RaceCarType;

		// BrnVehicleManager.cpp:8743
		uint8_t lu8AggressorRaceCarType;

		// BrnVehicleManager.cpp:8745
		int8_t li8SlamNumber;

	}
	VehiclePhysics::GetSlamNumber(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	RaceCarPhysics::GetSlamSteering(/* parameters */);
	rw::math::fpu::Sgn<float>(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	RaceCarPhysics::GetSlamSteering(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		// BrnVehicleManager.cpp:8783
		float32_t KF_VIC_MIN;

		// BrnVehicleManager.cpp:8784
		float32_t KF_VIC_MAX;

		// BrnVehicleManager.cpp:8785
		float32_t KF_VIC_SCA;

		rw::math::fpu::Abs<float>(/* parameters */);
		rw::math::fpu::Clamp<float>(/* parameters */);
	}
}

// BrnVehicleManager.cpp:7132
void BrnPhysics::Vehicle::VehicleManager::PhysicallyCrashRaceCar(uint16_t  leActiveRaceCarIndex, VehicleOutputRequestInterface *  lpRequestOutputInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VehiclePhysics::SetDeformationModelIsActive(/* parameters */);
}

// BrnVehicleManager.cpp:1047
void BrnPhysics::Vehicle::VehicleManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:1049
		int32_t i;

	}
}

// BrnVehicleManager.cpp:9717
void BrnPhysics::Vehicle::VehicleManager::SwitchPlayerAIDonuttingAttribs(bool  lbDoDonutting) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnVehicleManager.cpp:3817
void BrnPhysics::Vehicle::VehicleManager::ProcessNetworkCarDisconnect(const RemotePlayerDisconnectedAction *  lpPlayerDisconnectedAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:3821
		int32_t liDisconnectedRaceCar;

	}
	BrnGameState::GameStateModuleIO::RemotePlayerDisconnectedAction::GetActiveRaceCarIndex(/* parameters */);
	VehicleDriver::ClearControls(/* parameters */);
	CgsContainers::BitArray<8u>::UnSetBit(/* parameters */);
}

// BrnVehicleManager.cpp:4788
void BrnPhysics::Vehicle::VehicleManager::CheckForSlamAndTradingPaint(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *  lpInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:4797
		Matrix44Affine lRaceCarATransform;

		// BrnVehicleManager.cpp:4798
		Matrix44Affine lRaceCarBTransform;

		// BrnVehicleManager.cpp:4810
		Vector3 lJoiningVector;

		// BrnVehicleManager.cpp:4811
		float32_t lfPlayerSlamPower;

		// BrnVehicleManager.cpp:4812
		float32_t lfOtherSlamPower;

		// BrnVehicleManager.cpp:4813
		bool lbPlayerInvolved;

	}
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	HasRaceCarHadRecentImpact(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	{
		// BrnVehicleManager.cpp:4827
		bool lbBoost;

		// BrnVehicleManager.cpp:4828
		uint8_t lu8RaceCarType;

	}
	HasRaceCarHadRecentImpact(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	RaceCarPhysics::GetSlamSteering(/* parameters */);
	RaceCarPhysics::GetSlamSteering(/* parameters */);
	rw::math::vpu::Sgn(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Sgn(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	VehiclePhysics::IsBeingSlamedOrShuntedByRaceCar(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	VehiclePhysics::IsBeingSlamedOrShunted(/* parameters */);
	VehiclePhysics::IsBeingSlamedOrShuntedByRaceCar(/* parameters */);
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	VehiclePhysics::IsBeingSlamedOrShunted(/* parameters */);
}

// BrnVehicleManager.cpp:4940
void BrnPhysics::Vehicle::VehicleManager::CheckForShuntAndNudge(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *  lpInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:4948
		Vector3 lJoiningVector;

		// BrnVehicleManager.cpp:4949
		VecFloat lvfPlayerWithNormalDot;

		// BrnVehicleManager.cpp:4950
		VecFloat lvfOtherWithNormalDot;

	}
	HasRaceCarHadRecentImpact(/* parameters */);
	HasRaceCarHadRecentImpact(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Matrix44Affine::ZAxis(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	VehiclePhysics::IsBeingSlamedOrShuntedByRaceCar(/* parameters */);
	VehiclePhysics::IsBeingSlamedOrShunted(/* parameters */);
}

// BrnVehicleManager.cpp:4574
void BrnPhysics::Vehicle::VehicleManager::ApplyShowtimeShunt(PhysicalTrafficVehicle *  lpVehicle, const BrnPhysics::Vehicle::VehiclePhysics *  lpAggressor, const VecFloat  lvfSlamPower) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	PhysicalTrafficVehicle::IsFullyPhysical(/* parameters */);
	PhysicalTrafficVehicle::GetFullTrafficPhysics(/* parameters */);
	VehiclePhysics::IsBeingSlamedOrShunted(/* parameters */);
	VehiclePhysics::ShuntEffect::IsActive(/* parameters */);
	rw::math::vpu::operator><VectorAxisW>(/* parameters */);
	{
		// BrnVehicleManager.cpp:4578
		Vector3 lDirection;

		// BrnVehicleManager.cpp:4579
		Vector3 lTrafficCentre;

		// BrnVehicleManager.cpp:4580
		Vector3 lAggressorPoint;

		// BrnVehicleManager.cpp:4581
		BrnPhysics::Vehicle::TrafficPhysics * lpTrafficPhysics;

		PhysicalTrafficVehicle::GetFullTrafficPhysics(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		{
		}
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		{
			// BrnVehicleManager.cpp:4593
			VecFloat lvfSpeedFactor;

			rw::math::vpu::operator/(/* parameters */);
		}
		rw::math::vpu::operator<=(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		{
			{
			}
		}
	}
	VehiclePhysics::ShuntEffect::GetLife(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
}

// BrnVehicleManager.cpp:7716
void BrnPhysics::Vehicle::VehicleManager::ValidateTrafficContact(PotentialContact *  lpContact, const VehicleInputInterface::InTriangleCacheInterface *  lpTriCacheInterface, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnVehicleManager.cpp:2140
void BrnPhysics::Vehicle::VehicleManager::RunTractionLineTestJobs(CollisionGenerator *  lpTractionContactGen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsMemory::SimpleDataStreamProducer::Begin(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:3407
void BrnPhysics::Vehicle::VehicleManager::DoPlayerTractionLineTestsPostSimulation(const VehicleInputInterface *  lpInputInterface, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:3410
		Vector3[4] laLinesStart;

		// BrnVehicleManager.cpp:3411
		Vector3[4] laLinesEnd;

		// BrnVehicleManager.cpp:3412
		VecFloat[4] lavfMinLineParams;

		// BrnVehicleManager.cpp:3413
		Vector4[4] laNormals;

		// BrnVehicleManager.cpp:3414
		VecFloat[4] lavfSurfaceTags;

		// BrnVehicleManager.cpp:3415
		bool[4] labIntersections;

		// BrnVehicleManager.cpp:3418
		const VehicleInputInterface::InTriangleCacheInterface * lpCacheInterface;

		// BrnVehicleManager.cpp:3420
		uint8_t lu8Wheel;

		// BrnVehicleManager.cpp:3423
		BrnPhysics::Vehicle::RaceCarPhysics * lpPlayerCar;

		// BrnVehicleManager.cpp:3427
		const VecFloat KF_ZERO;

		// BrnVehicleManager.cpp:3451
		const Triangle4 * lpCachedTriangles;

		// BrnVehicleManager.cpp:3452
		int32_t liNumCachedTri4s;

		// BrnVehicleManager.cpp:3467
		Vector3 lTractionLine;

		// BrnVehicleManager.cpp:3468
		Vector3 lIntersectPoint;

		// BrnVehicleManager.cpp:3469
		Vector3 lNormal;

		// BrnVehicleManager.cpp:3470
		uint32_t luSurfaceTag;

		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
		VehicleInputInterface::GetTriangleCacheInterface(/* parameters */);
		rw::math::vpu::VecFloat::operator=(/* parameters */);
		{
			// BrnVehicleManager.cpp:3443
			VecFloat lvfVelocityTowardsWheels;

			ExternallySimulatedBody::GetTransform(/* parameters */);
			rw::math::vpu::operator+=(/* parameters */);
			rw::math::vpu::Dot(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator>(/* parameters */);
		}
		CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetCachedTriangles(/* parameters */);
		CgsSceneManager::TriangleCacheManager::GetTrianglesForCachedObject(/* parameters */);
		CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetNumCachedTriangleBatches(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		{
			// BrnVehicleManager.cpp:3483
			VectorIntrinsicUnion lSurfaceTagsIntrinsic;

		}
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

// BrnVehicleManager.cpp:1085
void BrnPhysics::Vehicle::VehicleManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:1087
		int32_t i;

	}
}

// BrnVehicleManager.cpp:559
void BrnPhysics::Vehicle::VehicleManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:622
		int32_t i;

	}
	CgsNumeric::Random::Construct(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	VehiclePhysics::SetDebugComponent(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::ContactSpy::DiscardedContact,20>::Construct(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>::Clear(/* parameters */);
	CgsContainers::BitArray<8u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<8u>::UnSetAll(/* parameters */);
	TurnOnSlamsAndShuntsEffectsForRivals(/* parameters */);
	StuntOffencesManager::Construct(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	CgsGeometric::Sphere::Clear(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	StuntOffencesManager::ResetCompleteOutputValues(/* parameters */);
	StuntOffencesManager::ResetInProrgessOutputValues(/* parameters */);
	StuntOffencesManager::ResetStuntStatusInProgress(/* parameters */);
}

// BrnVehicleManager.cpp:8282
void BrnPhysics::Vehicle::VehicleManager::ScaleCarSpacePositionToWheels(Vector3 *  lpCarSpacePosition, BrnPhysics::Vehicle::VehiclePhysics *  lpVehiclePhysics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnVehicleManager.cpp:8284
	Vector3 lScaledPosition;

	{
		// BrnVehicleManager.cpp:8284
		Vector3 lScaledPosition;

		// BrnVehicleManager.cpp:8285
		Vector3 lWheelSeparation;

		SimpleVehiclePhysics::GetWheel(/* parameters */);
	}
	Wheel::GetPosition(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Wheel::GetPosition(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
	Wheel::GetPosition(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Wheel::GetPosition(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ, VectorAxisZ>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(/* parameters */);
	rw::math::vpu::operator==<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator==<VectorAxisZ>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(/* parameters */);
	operator/=<VectorAxisX>(/* parameters */);
	operator/=<VectorAxisZ>(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::_asmSwizzleStore<VectorAxisZ, VectorAxisZ>(/* parameters */);
	rw::math::vpu::_asmSwizzleStore<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnVehicleManager.cpp:3106
void BrnPhysics::Vehicle::VehicleManager::DoPlayerStuckLineTests(const VehicleInputInterface *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:3109
		Vector3 lLinesStart;

		// BrnVehicleManager.cpp:3110
		Vector4 lNormal;

		// BrnVehicleManager.cpp:3111
		Vector3 lLinesEnd;

		// BrnVehicleManager.cpp:3112
		VecFloat lvfMinLineParams;

		// BrnVehicleManager.cpp:3113
		VecFloat lvfSurfaceTags;

		// BrnVehicleManager.cpp:3114
		bool lbIntersections;

		// BrnVehicleManager.cpp:3116
		Matrix44Affine lCarTransform;

		// BrnVehicleManager.cpp:3117
		int8_t lnCurrentTest;

		// BrnVehicleManager.cpp:3118
		int8_t lnControlWordBools;

		// BrnVehicleManager.cpp:3120
		VectorIntrinsicUnion lSurfaceTagsIntrinsic;

		// BrnVehicleManager.cpp:3121
		uint32_t luSurfaceTag;

		// BrnVehicleManager.cpp:3122
		CollisionTag lCollisionTag;

		// BrnVehicleManager.cpp:3123
		uint16_t luMaterialId;

		// BrnVehicleManager.cpp:3124
		uint16_t luGroupId;

		// BrnVehicleManager.cpp:3127
		const VehicleInputInterface::InTriangleCacheInterface * lpCacheInterface;

		// BrnVehicleManager.cpp:3130
		BrnPhysics::Vehicle::RaceCarPhysics * lpPlayerCarPhysics;

		// BrnVehicleManager.cpp:3189
		const Triangle4 * lpCachedTriangles;

		// BrnVehicleManager.cpp:3190
		int32_t liNumCachedTri4s;

		VehicleInputInterface::GetTriangleCacheInterface(/* parameters */);
	}
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	VehiclePhysics::SetWedgedInWorld(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetCachedTriangles(/* parameters */);
	CgsSceneManager::TriangleCacheManager::GetTrianglesForCachedObject(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetNumCachedTriangleBatches(/* parameters */);
	Wheel::GetPosition(/* parameters */);
	Wheel::GetPosition(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	VehiclePhysics::SetWedgedInWorld(/* parameters */);
	VehiclePhysics::SetWedgedInWorld(/* parameters */);
	VehiclePhysics::SetFrontRayOccluded(/* parameters */);
	Wheel::GetPosition(/* parameters */);
	Wheel::GetPosition(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::TransformPoint(/* parameters */);
	VehiclePhysics::SetFrontRayOccluded(/* parameters */);
	Wheel::GetPosition(/* parameters */);
	Wheel::GetPosition(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnVehicleManager.cpp:3357
void BrnPhysics::Vehicle::VehicleManager::UpdatePlayerStuckInCollisionSpheres(float32_t  lfSimTimerTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:3363
		BrnPhysics::Vehicle::RaceCarPhysics * lpPlayerCar;

		// BrnVehicleManager.cpp:3364
		Vector3 lCurrentPlayerPos;

		// BrnVehicleManager.cpp:3370
		Vector3 lDisplVec;

		// BrnVehicleManager.cpp:3371
		VecFloat lvfDisplMag;

	}
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	CgsGeometric::Sphere::SetRadius(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator-(/* parameters */);
	CgsGeometric::Sphere::GetRadius(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	{
		// BrnVehicleManager.cpp:3383
		float32_t lfCurrentTime;

		VehiclePhysics::SetTimeUntilStuckInCollisionTest(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsGeometric::Sphere::SetPosition(/* parameters */);
	VehiclePhysics::SetTimeUntilStuckInCollisionTest(/* parameters */);
}

// BrnVehicleManager.cpp:3328
void BrnPhysics::Vehicle::VehicleManager::UpdatePlayerStuckInCollisionTest(const VehicleInputInterface::InTriangleCacheInterface *  lpTriCacheInterface, float32_t  lfSimTimerTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:7313
void BrnPhysics::Vehicle::VehicleManager::UpdateFatalCrashFlags(VehicleOutputInterface *  lpOutputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:7315
		int32_t liRaceCar;

	}
	CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	VehicleOutputInterface::GetRaceCarState(/* parameters */);
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:9158
void BrnPhysics::Vehicle::VehicleManager::CheckState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:9162
		int32_t i;

	}
	CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
}

// BrnVehicleManager.cpp:9281
void BrnPhysics::Vehicle::VehicleManager::HACK_UpdateRaceCarBody(RigidBodyId  lHandlingBodyID, const rw::math::vpu::Matrix44Affine &  lTransform, const rw::math::vpu::Vector3  lLinVel, const rw::math::vpu::Vector3  lAngVel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:9286
		int32_t i;

		CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
		CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	}
	ExternallySimulatedBody::SetTransform(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
}

// BrnVehicleManager.cpp:4628
void BrnPhysics::Vehicle::VehicleManager::ProcessDeformationStates(const DeformationOutputInterface *  lpDeformationOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnGameState::GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
	{
		// BrnVehicleManager.cpp:4635
		EntityId lePlayerCarEntityID;

		// BrnVehicleManager.cpp:4637
		const CarState * lpCarState;

		Deformation::DeformationOutputInterface::GetDeformationState(/* parameters */);
		Deformation::DeformationState::GetCarStateFromEntityId(/* parameters */);
		CgsContainers::BitArray<28u>::GetFirstNonZeroBit(/* parameters */);
		{
		}
		CgsContainers::BitArray<28u>::GetNextNonZeroBit(/* parameters */);
	}
}

// BrnVehicleManager.cpp:2232
void BrnPhysics::Vehicle::VehicleManager::ReadPlayerStuckTractionLineTestResults(const SimpleDataStreamResultIterator &  lIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:2236
		int32_t liPlayerIndex;

		// BrnVehicleManager.cpp:2245
		BrnPhysics::Vehicle::RaceCarPhysics * lpPlayerCar;

	}
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:2251
		const CgsSceneManager::CgsCollision::LineWithTriangleListStreamJobDesc::StreamResult * lpResult;

		CgsMemory::SimpleDataStreamResultIterator::GetCurrent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:2263
		bool lbStuckAlongFrontLeftToRearRight;

		// BrnVehicleManager.cpp:2264
		bool lbStuckAlongFrontRightToRearLeft;

		VehiclePhysics::SetTimeUntilStuckInCollisionTest(/* parameters */);
	}
}

// BrnVehicleManager.cpp:2169
void BrnPhysics::Vehicle::VehicleManager::ReadRaceCarTractionLineTestResults(const SimpleDataStreamResultIterator &  lIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:2175
		int32_t liRaceCar;

		// BrnVehicleManager.cpp:2176
		uint8_t lu8Wheel;

	}
	CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	{
		// BrnVehicleManager.cpp:2183
		const CgsSceneManager::CgsCollision::LineWithTriangleListStreamJobDesc::StreamResult * lpResult;

		CgsMemory::SimpleDataStreamResultIterator::GetCurrent(/* parameters */);
		{
			// BrnVehicleManager.cpp:2190
			BrnPhysics::Vehicle::EVehicleDrivenWheel leWheel;

			{
				// BrnVehicleManager.cpp:2195
				BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCar;

				// BrnVehicleManager.cpp:2205
				uint8_t lu8SurfaceId;

			}
		}
		CgsMemory::SimpleDataStreamResultIterator::GetNext(/* parameters */);
	}
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:1562
void BrnPhysics::Vehicle::VehicleManager::ProcessValidationEvents(const VehicleInputInterface *  lpInputInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:1564
		const VehicleInputInterface::ValidateRaceCarEventQueue * lpEventQueue;

		// BrnVehicleManager.cpp:1565
		int32_t liIndex;

	}
	{
		// BrnVehicleManager.cpp:1571
		const const ValidateRaceCarEvent & lEvent;

		// BrnVehicleManager.cpp:1573
		EActiveRaceCarIndex leActiveRaceCarIndex;

		Deformation::DeformationInputInterface::ValidateDeformationModel(/* parameters */);
		Deformation::DeformationInputInterface::InvalidateDeformationModel(/* parameters */);
	}
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::GetEvent(/* parameters */);
	CgsResource::ResourceHandle::Clear(/* parameters */);
	CgsResource::ResourceHandle::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:1755
void BrnPhysics::Vehicle::VehicleManager::SetAllNetworkRaceCarsHidden(int32_t  liMinNumHiddenFrames) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:1757
		int32_t liRaceCar;

	}
	CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	{
		// BrnVehicleManager.cpp:1765
		EActiveRaceCarIndex leRaceCar;

		SetNetworkRaceCarHidden(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnVehicleManager.cpp:1602
void BrnPhysics::Vehicle::VehicleManager::AddRaceCarDeformationModel(DeformationInputInterface *  lpDeformationInterface, int32_t  liVehicleIndex, const rw::math::vpu::Matrix44Affine &  lInitialTransform, float32_t  lfInitialDamageAmount, BrnPhysics::Deformation::DeformationResetType  leBaseDeformationType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsPhysics::RigidBodyId::operator std::uint64_t(/* parameters */);
	CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
	GetGlobalEntityIDFromPhysicsEntityID(/* parameters */);
	{
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	Deformation::DeformationInputInterface::AddDeformationModel(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Deformation::AddDeformationModelEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnVehicleManager.cpp:9132
void BrnPhysics::Vehicle::VehicleManager::SendImpactMessage(VehicleInputInterface::ImpactEventQueue *  lpImpactEventQueue, BrnPhysics::Vehicle::EImpactType  leImpactType, EActiveRaceCarIndex  leAggressorActiveRaceCarIndex, EActiveRaceCarIndex  leVictimActiveRaceCarIndex, const rw::math::vpu::Vector3  lDirection, float32_t  lfMagnitude, float32_t  lfDuration, float32_t  lfSteeringDirection, float32_t  lfRecoveryTime, uint8_t  luImpactScore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:9134
		ImpactEvent lEvent;

	}
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:8610
void BrnPhysics::Vehicle::VehicleManager::ApplySlam(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *  lpInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:8612
		VehicleInputInterface::ImpactEventQueue * lpImpactEventQueue;

		// BrnVehicleManager.cpp:8613
		Vector3 lSlamDirection;

		// BrnVehicleManager.cpp:8614
		float32_t lfSlamDuration;

		// BrnVehicleManager.cpp:8615
		float32_t lfAggressorReactionDuration;

		// BrnVehicleManager.cpp:8616
		float32_t lfSteeringDirection;

		// BrnVehicleManager.cpp:8617
		float32_t lfRecoveryTime;

		// BrnVehicleManager.cpp:8618
		float32_t lfVulnerabilityTime;

		// BrnVehicleManager.cpp:8619
		uint8_t luImpactScore;

	}
	VehicleOutputInterface::GetImpactEventQueue(/* parameters */);
	{
		// BrnVehicleManager.cpp:8647
		int8_t liAwardedAggressor;

		RaceCarPhysics::ClearSlamSteering(/* parameters */);
	}
}

// BrnVehicleManager.cpp:5868
void BrnPhysics::Vehicle::VehicleManager::ApplyShunt(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *  lpInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:5870
		Vector3 lImpactDirection;

		// BrnVehicleManager.cpp:5871
		VecFloat lvfShuntMagnitude;

		// BrnVehicleManager.cpp:5872
		float32_t lfVulnerabilitySeconds;

		// BrnVehicleManager.cpp:5873
		float32_t lfSteeringDirection;

	}
	{
		// BrnVehicleManager.cpp:5898
		int8_t liAttackerIndex;

	}
	VehicleOutputInterface::GetImpactEventQueue(/* parameters */);
}

// BrnVehicleManager.cpp:1521
void BrnPhysics::Vehicle::VehicleManager::ProcessCollisionEvents(const VehicleInputInterface *  lpInputInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:1523
		const VehicleInputInterface::SetRaceCarCollisionEventQueue * lpCollEvents;

		// BrnVehicleManager.cpp:1525
		int32_t liIndex;

		// BrnVehicleManager.cpp:1538
		const VehicleInputInterface::SetRaceCarCullingGroupEventQueue * lpCullEvents;

	}
	{
		// BrnVehicleManager.cpp:1531
		SetRaceCarCollisionEvent lEvent;

		// BrnVehicleManager.cpp:1533
		RigidBodyId lBodyId;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::GetEvent(/* parameters */);
		Deformation::DeformationInputInterface::SetDeformationModelCollision(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Deformation::SetModelCollisionEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:1544
		SetRaceCarCullingGroupEvent lEvent;

		// BrnVehicleManager.cpp:1546
		RigidBodyId lBodyId;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::GetEvent(/* parameters */);
		Deformation::DeformationInputInterface::SetDeformationModelCullingGroup(/* parameters */);
		CgsPhysics::RigidBodyId::Set(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Deformation::SetModelCullingGroupEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:1635
void BrnPhysics::Vehicle::VehicleManager::RemoveRaceCarDeformationModel(DeformationInputInterface *  lpDeformationInterface, int32_t  liVehicleIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsPhysics::RigidBodyId::operator std::uint64_t(/* parameters */);
	Deformation::DeformationInputInterface::RemoveDeformationModel(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Deformation::RemoveDeformationModelEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:7183
void BrnPhysics::Vehicle::VehicleManager::PhysicallyUncrashRaceCar(uint16_t  leActiveRaceCarIndex, VehicleOutputRequestInterface *  lpRequestOutputInterface, DeformationInputInterface *  lpDeformationInterface, float32_t  lfInitialDamageAmount, bool  lbResetDeformation, BrnPhysics::Deformation::DeformationResetType  leDeformationResetType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Deformation::DeformationInputInterface::DeactivateDeformationModel(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Deformation::DeactivateDeformationModelEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:887
void BrnPhysics::Vehicle::VehicleManager::PrepareTriangleCache(InputBuffer_Update *  lpSceneInputBuffer_Update) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:894
		InputBuffer_Update::InSmSceneUpdateInterface * lpSceneUpdateInterface;

		// BrnVehicleManager.cpp:896
		const float32_t kfRaceCarCacheSphereRadius;

		// BrnVehicleManager.cpp:898
		int32_t liRaceCar;

	}
	CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface(/* parameters */);
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddCachedObject(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:1184
void BrnPhysics::Vehicle::VehicleManager::ProcessRemoveEvents(const VehicleInputInterface *  lpInputInterface, VehicleOutputRequestInterface *  lpOutputInterface, VehicleManagerOutputInterface *  lpManagerOutputInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:1188
		RemoveRaceCarEvent lRaceCarEvent;

		// BrnVehicleManager.cpp:1189
		const VehicleInputInterface::RemoveRaceCarEventQueue * lpRemoveRaceCarEvents;

		// BrnVehicleManager.cpp:1190
		int32_t i;

	}
	{
		// BrnVehicleManager.cpp:1198
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnVehicleManager.cpp:1212
		RigidBodyId lRigidBodyID;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::GetEvent(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityIDEntityIndex(/* parameters */);
		CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
		VehicleDriver::ClearControls(/* parameters */);
		{
			// BrnVehicleManager.cpp:1221
			RigidBodyId lDummyRaceCarRigidBodyId;

			// BrnVehicleManager.cpp:1224
			EntityId lDummyRaceCarEntityId;

			CgsPhysics::RigidBodyId::Set(/* parameters */);
		}
		VehicleOutputRequestInterface::RemoveRigidBody(/* parameters */);
		CgsContainers::BitArray<8u>::UnSetBit(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsContainers::BitArray<8u>::UnSetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InRemoveRigidBody>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnVehicleManager.cpp:1268
void BrnPhysics::Vehicle::VehicleManager::ProcessCreateEvents(const VehicleInputInterface *  lpInputInterface, VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleManagerOutputInterface *  lpManagerOutputInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:1270
		VehicleAttribs lVehicleAttribs;

		// BrnVehicleManager.cpp:1271
		Vector3[6] laWheelPositions;

		// BrnVehicleManager.cpp:1272
		float32_t[6] lafWheelRadii;

		// BrnVehicleManager.cpp:1273
		CreateVehicleResult lResult;

		// BrnVehicleManager.cpp:1274
		CreateRaceCarEvent lEvent;

		// BrnVehicleManager.cpp:1275
		const VehicleInputInterface::CreateRaceCarEventQueue * lpCreateEvents;

		// BrnVehicleManager.cpp:1276
		StreamedDeformationSpec * lpDeformationModel;

		// BrnVehicleManager.cpp:1279
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnVehicleManager.cpp:1280
		int32_t i;

		VehicleAttribs(/* parameters */);
		{
			// BrnVehicleManager.cpp:1314
			burnoutcarasset lBaseCarAsset;

			// BrnVehicleManager.cpp:1315
			physicsvehiclehandling lHandling;

			// BrnVehicleManager.cpp:1329
			Vector3 lHandlingBodyOffset;

			// BrnVehicleManager.cpp:1357
			EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,50>::InAddRigidBody lNewBodyEvent;

			// BrnVehicleManager.cpp:1358
			NewRigidBody lNewRigidBody;

			// BrnVehicleManager.cpp:1359
			Inertia lInertia;

			// BrnVehicleManager.cpp:1360
			Vector3 lInertialTensor;

			// BrnVehicleManager.cpp:1361
			Vector3 lBoxExtent;

			// BrnVehicleManager.cpp:1362
			VecFloat lfMass;

			// BrnVehicleManager.cpp:1363
			VecFloat lfOne;

			// BrnVehicleManager.cpp:1420
			AxisAlignedBox lCarAABB;

			// BrnVehicleManager.cpp:1453
			VolumeInstanceId lHandlingVolumeID;

			CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::GetEvent(/* parameters */);
			operator=(/* parameters */);
			CgsSceneManager::VolumeInstanceId::GetEntityIDEntityIndex(/* parameters */);
			CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
			Attrib::Gen::burnoutcarasset::burnoutcarasset(/* parameters */);
			Attrib::Gen::physicsvehiclehandling::physicsvehiclehandling(/* parameters */);
			Attrib::Instance::SetDefaultLayout(/* parameters */);
			Attrib::Gen::physicsvehiclehandling::physicsvehiclehandling(/* parameters */);
			Attrib::Instance::SetDefaultLayout(/* parameters */);
			Attrib::Gen::physicsvehiclehandling::~physicsvehiclehandling(/* parameters */);
			rw::math::vpu::GetVector3_Zero(/* parameters */);
			VehicleAttribs::VehicleBaseAttribs::GetMass(/* parameters */);
			NewRigidBody(/* parameters */);
			rw::math::vpu::operator/(/* parameters */);
			rw::math::vpu::Abs(/* parameters */);
			rw::physics::Inertia::Inertia(/* parameters */);
			rw::physics::Inertia::SetAngularDrag(/* parameters */);
			rw::math::vpu::operator/(/* parameters */);
			rw::math::vpu::VecFloat::operator=(/* parameters */);
			rw::physics::Inertia::SetMaxLinearVelocity(/* parameters */);
			rw::physics::Inertia::SetMaxAngularVelocity(/* parameters */);
			rw::physics::Inertia::SetInverseInertia(/* parameters */);
			rw::physics::Inertia::SetLinearDrag(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			{
			}
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
			rw::physics::Inertia::SetInverseMass(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator*<VectorAxisY, VectorAxisY>(/* parameters */);
			rw::math::vpu::operator*<VectorAxisZ, VectorAxisZ>(/* parameters */);
			rw::math::vpu::operator*<VectorAxisX, VectorAxisX>(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator/(/* parameters */);
			rw::math::vpu::operator/(/* parameters */);
			rw::math::vpu::operator/(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
			NonConstructedClassContainer<CgsPhysics::NewRigidBody>::operator=(/* parameters */);
			{
				// BrnVehicleManager.cpp:1396
				EventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody,50>::InAddRigidBody lNewDummyBodyEvent;

				// BrnVehicleManager.cpp:1397
				NewRigidBody lNewDummyRigidBody;

				// BrnVehicleManager.cpp:1409
				EntityId lDummyRaceCarEntityId;

			}
			NewRigidBody(/* parameters */);
			operator=(/* parameters */);
			CgsPhysics::RigidBodyId::Set(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::physics::Inertia::SetAngularDrag(/* parameters */);
			NewRigidBody(/* parameters */);
			rw::physics::Inertia::SetInverseInertia(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
			rw::physics::Inertia::SetLinearDrag(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
			rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
			NewRigidBody(/* parameters */);
			CgsSceneManager::EntityId::SetOwner(/* parameters */);
			NonConstructedClassContainer<CgsPhysics::NewRigidBody>::operator=(/* parameters */);
			operator=(/* parameters */);
			CgsPhysics::RigidBodyId::Set(/* parameters */);
			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
			VehicleOutputRequestInterface::CreateNewRigidBody(/* parameters */);
			CgsContainers::BitArray<8u>::SetBit(/* parameters */);
			VehicleManagerOutputInterface::AddCreateVehicleResult(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			VehicleDriver::ClearControls(/* parameters */);
			BrnAIDriverControls::Clear(/* parameters */);
			Attrib::Gen::physicsvehiclehandling::~physicsvehiclehandling(/* parameters */);
			Attrib::Gen::burnoutcarasset::~burnoutcarasset(/* parameters */);
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsContainers::BitArray<8u>::UnSetBit(/* parameters */);
		SetNetworkRaceCarHidden(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>::GetMaxLength(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddRigidBody>::GetMaxLength(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// BrnVehicleManager.cpp:1335
			uint8_t luWheelIdx;

			// BrnVehicleManager.cpp:1336
			uint8_t luWheelCount;

			// BrnVehicleManager.cpp:1337
			Vector3 lAverageWheelPosition;

			rw::math::vpu::Vector3::SetZero(/* parameters */);
			Deformation::StreamedDeformationSpec::GetWheelSpec(/* parameters */);
			Deformation::StreamedDeformationSpec::GetWheelSpec(/* parameters */);
			rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
			rw::math::vpu::operator+=(/* parameters */);
			rw::math::vpu::VecFloat::operator float(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::operator+=(/* parameters */);
			rw::math::vpu::operator/=(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		StuntOffencesManager::SetCarHasJustBeenReset(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:1657
void BrnPhysics::Vehicle::VehicleManager::ProcessResetEvents(const VehicleInputInterface *  lpInputInterface, VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleManagerOutputInterface *  lpVehicleManagerOutputInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:1659
		ResetVehicleEvent lEvent;

		// BrnVehicleManager.cpp:1660
		const VehicleInputInterface::ResetRaceCarEventQueue * lpRaceCarResetQueue;

		// BrnVehicleManager.cpp:1661
		int32_t i;

	}
	CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	{
		// BrnVehicleManager.cpp:1677
		EActiveRaceCarIndex leRaceCar;

		// BrnVehicleManager.cpp:1687
		BrnPhysics::Vehicle::RaceCarPhysics * lpVehicle;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::GetEvent(/* parameters */);
		operator=(/* parameters */);
		VehicleDriver::ClearControls(/* parameters */);
		{
			// BrnVehicleManager.cpp:1703
			int32_t liWheel;

		}
		VehicleManagerOutputInterface::AddRaceCarResetEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	VehicleAttribs::VehicleBaseAttribs::GetMass(/* parameters */);
	StuntOffencesManager::SetCarHasJustBeenReset(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	VehiclePhysics::ClearJustResetCarTransform(/* parameters */);
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnVehicleManager.cpp:1788
void BrnPhysics::Vehicle::VehicleManager::GenerateAboveGroundLineTests(VehicleOutputRequestInterface *  lpOutputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:1790
		Vector3 lStart;

		// BrnVehicleManager.cpp:1791
		Vector3 lEnd;

		// BrnVehicleManager.cpp:1792
		int8_t liRaceCar;

	}
	CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	{
		// BrnVehicleManager.cpp:1803
		SceneQueryId lAboveGroundLineTestId;

		VehicleOutputRequestInterface::AddLineRequest(/* parameters */);
		AddEvent<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnVehicleManager.cpp:2717
void BrnPhysics::Vehicle::VehicleManager::ProcessAboveGroundLineTestsResults(const VehicleInputInterface::InLineTestResultQueue *  lpLineTestResults) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:2719
		OutEventLineTestNearestResult lLineResult;

		// BrnVehicleManager.cpp:2721
		uint8_t lu8Owner;

		// BrnVehicleManager.cpp:2722
		uint8_t lu8VehicleIndex;

		// BrnVehicleManager.cpp:2723
		uint8_t lu8Wheel;

		// BrnVehicleManager.cpp:2724
		int32_t liResult;

	}
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::GetEvent(/* parameters */);
	GetDataFromQueryID(/* parameters */);
	{
		// BrnVehicleManager.cpp:2757
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:2750
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:3680
void BrnPhysics::Vehicle::VehicleManager::UpdatePlayerDriver(const BrnPlayerDriverControls *  lpControls, const BitArray<8u> &  lUpdatedVehicles) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<8u>::SetBit(/* parameters */);
	{
		// BrnVehicleManager.cpp:3697
		const BrnPlayerDriverControls * lpRemoteDriverControls;

		// BrnVehicleManager.cpp:3698
		BrnPlayerDriverControls lPlayerDriverControls;

		VehicleDriver::GetControls(/* parameters */);
		BrnPlayerDriverControls::BrnPlayerDriverControls(/* parameters */);
		rw::math::fpu::Max<float>(/* parameters */);
		rw::math::fpu::Max<float>(/* parameters */);
		rw::math::fpu::Clamp<float>(/* parameters */);
		rw::math::fpu::Max<float>(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:3722
		int32_t i;

		CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:3684
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	VehiclePhysics::ClearJustBeenSlammed(/* parameters */);
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnVehicleManager.cpp:3742
void BrnPhysics::Vehicle::VehicleManager::UpdateNetworkDriver(const BrnNetworkDriverControls *  lpControls, const BitArray<8u> &  lUpdatedVehicles) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:3749
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<8u>::SetBit(/* parameters */);
	{
		// BrnVehicleManager.cpp:3745
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:3746
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:3757
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:3785
void BrnPhysics::Vehicle::VehicleManager::UpdateAIDriver(const BrnAIDriverControls *  lpControls, const BitArray<8u> &  lUpdatedVehicles) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<8u>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:3800
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:4295
void BrnPhysics::Vehicle::VehicleManager::ReadUpdatedBodyProperties(const InputBuffer::InChangeRigidBodyInertiaQueue *  lpUpdatedBodyProperties) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:4297
		InChangeRigidBodyInertia lEvent;

		// BrnVehicleManager.cpp:4298
		int16_t li8VehicleIndex;

		// BrnVehicleManager.cpp:4300
		VolumeInstanceId lID;

		// BrnVehicleManager.cpp:4302
		int32_t i;

	}
	CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InChangeRigidBodyInertia>::GetEvent(/* parameters */);
	CgsPhysics::RigidBodyId::operator std::uint64_t(/* parameters */);
	CgsSceneManager::VolumeInstanceId::GetEntityIDOwner(/* parameters */);
	{
		// BrnVehicleManager.cpp:4312
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:6182
void BrnPhysics::Vehicle::VehicleManager::PredictCarCarIntersection(const BrnPhysics::Vehicle::SimpleVehiclePhysics *  lpCarA, const BrnPhysics::Vehicle::SimpleVehiclePhysics *  lpCarB, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:6200
		const const AxisAlignedBox & lCarABB;

		// BrnVehicleManager.cpp:6201
		const const AxisAlignedBox & lCarBBB;

		// BrnVehicleManager.cpp:6204
		Vector3 lCarADims;

		// BrnVehicleManager.cpp:6205
		VecFloat lvfCarAFatness;

		// BrnVehicleManager.cpp:6208
		Vector3 lCarBDims;

		// BrnVehicleManager.cpp:6209
		VecFloat lvfCarBFatness;

		// BrnVehicleManager.cpp:6213
		BoxVolume * lpRaceCarAVolume;

		// BrnVehicleManager.cpp:6215
		BoxVolume * lpRaceCarBVolume;

		// BrnVehicleManager.cpp:6224
		PrimitivePairIntersectResult lResult;

		// BrnVehicleManager.cpp:6226
		Matrix44Affine lCarATrans;

		// BrnVehicleManager.cpp:6227
		Matrix44Affine lCarBTrans;

		// BrnVehicleManager.cpp:6228
		Vector3 lTimedAngularVelocity;

		// BrnVehicleManager.cpp:6267
		bool lbIntersection;

	}
	SimpleVehiclePhysics::GetDeformableBBox(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	SimpleVehiclePhysics::GetDeformableBBox(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Vector3::SetX(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3::SetX(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::collision::Volume::SetRadius(/* parameters */);
	rw::collision::Volume::SetRadius(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::collision::PrimitivePairIntersectResult::PrimitivePairIntersectResult(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
	}
	rw::math::vpu::Subtract(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::Subtract(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::Subtract(/* parameters */);
	{
		// BrnVehicleManager.cpp:6188
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:6195
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:6303
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	}
}

// BrnVehicleManager.cpp:7103
void BrnPhysics::Vehicle::VehicleManager::UpdateCrashes(float32_t  lfSimTimerTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:7105
		int32_t liIndex;

	}
	CgsContainers::BitArray<32u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	CgsContainers::BitArray<32u>::UnSetBit(/* parameters */);
	CgsContainers::BitArray<32u>::GetNextNonZeroBit(/* parameters */);
}

// BrnVehicleManager.cpp:7417
void BrnPhysics::Vehicle::VehicleManager::ValidateRaceCarWorldContact(PotentialContact *  lpInOutContact, const VehicleInputInterface::InTriangleCacheInterface *  lpTriCacheInterface, float32_t  lfTimestep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:7424
		BrnWorld::EEntityTypeID leOtherEntityType;

		// BrnVehicleManager.cpp:7425
		int32_t liRaceCarIndex;

		// BrnVehicleManager.cpp:7443
		BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCar;

		// BrnVehicleManager.cpp:7447
		Vector3 lPointOnRaceCar;

		// BrnVehicleManager.cpp:7448
		Vector3 lPointOnOther;

		// BrnVehicleManager.cpp:7451
		Vector3 lWheelPlaneNormal;

		// BrnVehicleManager.cpp:7452
		bool lbValidContact;

		// BrnVehicleManager.cpp:7454
		VecFloat lvfGroundContactCullHeight;

		// BrnVehicleManager.cpp:7455
		VecFloat lvfSpeedMph;

		// BrnVehicleManager.cpp:7456
		const VecFloat KVF_GROUND_CLEARANCE_MAX_SPEED_MPH;

		// BrnVehicleManager.cpp:7457
		const VecFloat KVF_GROUND_CLEARANCE_MIN_SPEED_MPH;

		// BrnVehicleManager.cpp:7459
		bool lbWallContact;

		// BrnVehicleManager.cpp:7577
		bool lbIsGroundContact;

		// BrnVehicleManager.cpp:7583
		Vector3 lGroundNormal;

		// BrnVehicleManager.cpp:7584
		Vector3 lPointOnPlane;

	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Y(/* parameters */);
	rw::math::vpu::Abs<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	VehiclePhysics::GetLinearVelocityMagnitude(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	{
		// BrnVehicleManager.cpp:7464
		int32_t liCacheIndex;

		// BrnVehicleManager.cpp:7467
		int32_t liTriangleIndex;

		// BrnVehicleManager.cpp:7470
		int32_t liIndexWithinBatch;

		// BrnVehicleManager.cpp:7471
		int32_t liBatchIndex;

		// BrnVehicleManager.cpp:7476
		int32_t liNum4TriBatches;

		// BrnVehicleManager.cpp:7481
		const Triangle4 * lpCachedTriangles;

		// BrnVehicleManager.cpp:7484
		CgsGeometric::Triangle4::AOSTriangle lTriangle;

		// BrnVehicleManager.cpp:7490
		Vector3 lTriPointPlaneDist;

		// BrnVehicleManager.cpp:7499
		const VecFloat kvfMaxCurbHeight;

		// BrnVehicleManager.cpp:7500
		const VecFloat kvfWallNormalMaxHeight;

		// BrnVehicleManager.cpp:7503
		bool lbIsOnGround;

		CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetNumCachedTriangleBatches(/* parameters */);
		CgsSceneManager::TriangleCacheManager::GetNumTriangleBatchesForCachedObject(/* parameters */);
		CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetCachedTriangles(/* parameters */);
		CgsGeometric::Triangle4::GetAOSTriangle(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		{
		}
		rw::math::vpu::Vector4::operator[](/* parameters */);
		{
		}
		rw::math::vpu::Vector4::operator[](/* parameters */);
		{
		}
		rw::math::vpu::Vector4::operator[](/* parameters */);
		rw::math::vpu::Vector4::operator[](/* parameters */);
		{
		}
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector4::operator[](/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		{
		}
		rw::math::vpu::Vector4::operator[](/* parameters */);
		{
		}
		rw::math::vpu::Vector4::operator[](/* parameters */);
		{
		}
		rw::math::vpu::Vector4::operator[](/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		{
		}
		{
		}
		{
		}
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		{
		}
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator=(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator=(/* parameters */);
		rw::math::vpu::operator< <VectorAxisX>(/* parameters */);
		rw::math::vpu::Abs<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		{
			// BrnVehicleManager.cpp:7515
			DebugInterface lDebInt;

			// BrnVehicleManager.cpp:7516
			const DebugRender & lRender;

			CgsDev::DebugInterface::DebugInterface(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			CgsDev::DebugInterface::~DebugInterface(/* parameters */);
		}
		{
			// BrnVehicleManager.cpp:7533
			DebugInterface lDebInt;

			// BrnVehicleManager.cpp:7534
			const DebugRender & lRender;

			CgsDev::DebugInterface::DebugInterface(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator+(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
			CgsDev::DebugInterface::~DebugInterface(/* parameters */);
		}
	}
	rw::math::vpu::operator<(/* parameters */);
	SimpleVehiclePhysics::IsContactBelowWheelPlane(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	{
		// BrnVehicleManager.cpp:7603
		VecFloat KVF_CAR_BOTTOM_PLANE_MODIFIER;

		// BrnVehicleManager.cpp:7605
		const Wheel * lpWheel;

		// BrnVehicleManager.cpp:7606
		Vector3 lBottomOfCar;

		// BrnVehicleManager.cpp:7609
		VecFloat lDistFromBottomOfCar;

		// BrnVehicleManager.cpp:7610
		Vector3 lPointOnRaceCarProjected;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::TransformPoint(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:7627
		Matrix44Affine lRaceCarTransform;

		// BrnVehicleManager.cpp:7628
		Vector3 lJoin;

		// BrnVehicleManager.cpp:7629
		Vector3 lCullExtents;

		// BrnVehicleManager.cpp:7632
		Vector3 lVelocity;

		// BrnVehicleManager.cpp:7638
		VecFloat lvfDotX;

		// BrnVehicleManager.cpp:7639
		VecFloat lvfDotY;

		// BrnVehicleManager.cpp:7640
		VecFloat lvfDotZ;

		// BrnVehicleManager.cpp:7643
		Vector3 lValidBoxMax;

		// BrnVehicleManager.cpp:7644
		Vector3 lValidBoxMin;

		// BrnVehicleManager.cpp:7645
		Vector3 lLocalVel;

		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	{
	}
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::operator< <VectorAxisX>(/* parameters */);
	{
		// BrnVehicleManager.cpp:7662
		const const AxisAlignedBox & lCarAABB;

		// BrnVehicleManager.cpp:7665
		VecFloat lvfVelocityDotX;

		// BrnVehicleManager.cpp:7667
		VecFloat lvfMinX;

		// BrnVehicleManager.cpp:7668
		VecFloat lvfMaxX;

		rw::math::vpu::Dot(/* parameters */);
		SimpleVehiclePhysics::GetDeformableBBox(/* parameters */);
		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
		rw::math::vpu::GetVecFloat_Zero(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
	}
	rw::math::vpu::operator<(/* parameters */);
	{
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+<VectorAxisW>(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
	}
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	{
	}
	rw::math::vpu::operator< <VectorAxisY>(/* parameters */);
	rw::math::vpu::operator< <VectorAxisZ>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	DebugComponent::SetLastWallTriangle(/* parameters */);
	{
		// BrnVehicleManager.cpp:7477
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator=(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
	}
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::operator><VectorAxisX>(/* parameters */);
	rw::math::vpu::operator< <VectorAxisY>(/* parameters */);
	rw::math::vpu::operator><VectorAxisY>(/* parameters */);
	rw::math::vpu::operator< <VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator><VectorAxisZ>(/* parameters */);
	{
		// BrnVehicleManager.cpp:7590
		VecFloat lvfDistFromPlane;

		rw::math::vpu::operator==(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Add(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnVehicleManager.cpp:8059
void BrnPhysics::Vehicle::VehicleManager::DecideOutcomeOfRaceCarTrafficContact(uint16_t  luActiveRaceCarIndex, uint16_t  lu16TrafficCarIndex, const rw::math::vpu::Vector3  lContactNormal, const rw::math::vpu::Vector3  lPointOnRaceCar, const rw::math::vpu::Vector3  lPointOnTraffic, VecFloat *  lpTrafficSlamMagnitude, uint32_t *  lpxOutResponseFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:8061
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnVehicleManager.cpp:8065
		bool lbVehicleIsLight;

		// BrnVehicleManager.cpp:8066
		bool lbVehicleIsReallyHeavy;

		// BrnVehicleManager.cpp:8067
		bool lbVehicleWasCheckedByThisRaceCar;

		// BrnVehicleManager.cpp:8075
		bool lbRaceCarIsPlayer;

		// BrnVehicleManager.cpp:8076
		bool lbRaceCarIsNetwork;

		// BrnVehicleManager.cpp:8078
		EntityId lTrafficGlobalEntityId;

		// BrnVehicleManager.cpp:8082
		bool lbVehicleIsTrailer;

		// BrnVehicleManager.cpp:8094
		const PhysicalTrafficVehicle * lpTrafficVehicle;

		// BrnVehicleManager.cpp:8097
		const BrnPhysics::Vehicle::SimpleVehiclePhysics * lpTrafficPhysics;

		// BrnVehicleManager.cpp:8099
		const BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCarPhysics;

		// BrnVehicleManager.cpp:8132
		Matrix44Affine lRaceCarTransform;

		// BrnVehicleManager.cpp:8133
		Matrix44Affine lTrafficTransform;

		// BrnVehicleManager.cpp:8134
		Vector3 lRaceCarVel;

		// BrnVehicleManager.cpp:8135
		Vector3 lTrafficVel;

		// BrnVehicleManager.cpp:8136
		Vector3 lZeroYNormal;

		// BrnVehicleManager.cpp:8137
		Vector3 lRelativeVel;

		// BrnVehicleManager.cpp:8138
		VecFloat lvfClosingSpeed;

		// BrnVehicleManager.cpp:8150
		bool lbRaceCarCouldCrash;

		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
	rw::math::vpu::IsSimilar(/* parameters */);
	{
	}
	rw::math::vpu::Subtract(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	PhysicalTrafficManager::GetGlobalTrafficEntityId(/* parameters */);
	BrnTraffic::GetVehicleSpecies(/* parameters */);
	PhysicalTrafficManager::GetTrafficVehicle(/* parameters */);
	PhysicalTrafficVehicle::HasBeenChecked(/* parameters */);
	PhysicalTrafficVehicle::GetPhysics(/* parameters */);
	{
		// BrnVehicleManager.cpp:8063
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	{
		// BrnVehicleManager.cpp:8223
		VecFloat lvfTrafficSpeedChange;

		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:8153
		VecFloat lvfStrengthScale;

		rw::math::vpu::GetVecFloat_One(/* parameters */);
	}
	rw::math::vpu::operator<(/* parameters */);
	{
		// BrnVehicleManager.cpp:8157
		VecFloat lvfZDot;

		// BrnVehicleManager.cpp:8158
		VecFloat lvfTrafficSpeedScale;

		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::GetVecFloat_One(/* parameters */);
		rw::math::vpu::GetVecFloat_Half(/* parameters */);
		SimpleVehiclePhysics::GetSpeed(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
	}
}

// BrnVehicleManager.cpp:9410
void BrnPhysics::Vehicle::VehicleManager::ReadSurfaceProperties(const Attribute::Key  lSurfaceListKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:9412
		surfacelist lSurfaceList;

		// BrnVehicleManager.cpp:9413
		int32_t liSurface;

		Attrib::Gen::surfacelist::surfacelist(/* parameters */);
	}
	Attrib::Instance::SetDefaultLayout(/* parameters */);
	Attrib::Gen::surfacelist::ChangeWithDefault(/* parameters */);
	{
		// BrnVehicleManager.cpp:9420
		surface lSampleSurface;

		// BrnVehicleManager.cpp:9421
		Vector4 lSampleColour;

		Attrib::Gen::surfacelist::Surfaces(/* parameters */);
		Attrib::Gen::surface::surface(/* parameters */);
		Attrib::Instance::SetDefaultLayout(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
	Attrib::Gen::surfacelist::Num_Surfaces(/* parameters */);
	Attrib::Gen::surface::~surface(/* parameters */);
	Attrib::Gen::surfacelist::~surfacelist(/* parameters */);
	{
		// BrnVehicleManager.cpp:9433
		surface lSurface;

		// BrnVehicleManager.cpp:9434
		gameplaysurface lGameplaySurface;

		// BrnVehicleManager.cpp:9435
		physicssurface lPhysicsSurface;

		Attrib::Gen::surface::surface(/* parameters */);
		Attrib::Gen::gameplaysurface::gameplaysurface(/* parameters */);
		Attrib::Gen::physicssurface::physicssurface(/* parameters */);
		Attrib::Gen::physicssurface::Roughness(/* parameters */);
		rw::math::vpu::VecFloat::operator=(/* parameters */);
		rw::math::vpu::VecFloat::operator=(/* parameters */);
		Attrib::Gen::physicssurface::~physicssurface(/* parameters */);
		rw::math::vpu::VecFloat::operator=(/* parameters */);
		Attrib::Gen::gameplaysurface::~gameplaysurface(/* parameters */);
		Attrib::Gen::surface::~surface(/* parameters */);
	}
	Attrib::Gen::surfacelist::Surfaces(/* parameters */);
	{
		// BrnVehicleManager.cpp:9422
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:9666
void BrnPhysics::Vehicle::VehicleManager::RecordNetworkRaceCarsAddedForCollision(const VehicleInputInterface *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:9670
		const VehicleInputInterface::NetworkCarsAddRemoveForCollisionQueue * lpRaceCarsAddedForCollisionQueue;

		// BrnVehicleManager.cpp:9680
		int32_t liEvent;

	}
	CgsContainers::BitArray<8u>::UnSetAll(/* parameters */);
	{
		// BrnVehicleManager.cpp:9684
		const const VehicleAddedForCollisionEvent & lEvent;

		// BrnVehicleManager.cpp:9687
		int32_t liRaceCar;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::GetEvent(/* parameters */);
		CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
		CgsContainers::BitArray<8u>::SetBit(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnVehicleManager.cpp:9737
void BrnPhysics::Vehicle::VehicleManager::BridgeSimpleTrafficWithCarContactsToSimulation(InputBuffer::InAddContactQueue *  lpSimContactQueue, const PotentialContactInterface *  lpPotentialContactsInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:9742
		int32_t liEvent;

		// BrnVehicleManager.cpp:9743
		ContactId lContactId;

		// BrnVehicleManager.cpp:9744
		PotentialContact lContact;

		// BrnVehicleManager.cpp:9747
		const PotentialContactInterface::CustomPotentialContactQueue * lpSimpleTrafficCarContacts;

	}
	{
		// BrnVehicleManager.cpp:9754
		EntityId lCarAGlobalId;

		// BrnVehicleManager.cpp:9755
		EntityId lCarBGlobalId;

		// BrnVehicleManager.cpp:9766
		InAddPotentialContact lAddContactEvent;

		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
		ContactId::Set(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		ContactId::SetUserData(/* parameters */);
		{
			// BrnVehicleManager.cpp:9795
			uint16_t lu16TrafficAIndex;

			// BrnVehicleManager.cpp:9796
			uint16_t lu16TrafficBIndex;

			// BrnVehicleManager.cpp:9798
			EntityId lTrafficAEntityId;

			// BrnVehicleManager.cpp:9799
			EntityId lTrafficBEntityId;

			PhysicalTrafficManager::GetPhysicsEntityId(/* parameters */);
			PhysicalTrafficManager::GetPhysicsEntityId(/* parameters */);
			CgsSceneManager::EntityId::Set(/* parameters */);
			CgsPhysics::RigidBodyId::Set(/* parameters */);
			CgsPhysics::RigidBodyId::Set(/* parameters */);
		}
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>::AddEventSafe(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:9779
		uint16_t lu16RaceCarIndex;

		// BrnVehicleManager.cpp:9780
		uint16_t lu16TrafficIndex;

		// BrnVehicleManager.cpp:9782
		EntityId lRaceCarEntityId;

		// BrnVehicleManager.cpp:9783
		EntityId lTrafficEntityId;

		CgsSceneManager::EntityId::Set(/* parameters */);
		PhysicalTrafficManager::GetPhysicsEntityId(/* parameters */);
		CgsSceneManager::EntityId::Set(/* parameters */);
		CgsPhysics::RigidBodyId::Set(/* parameters */);
		CgsPhysics::RigidBodyId::Set(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:9804
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:9864
void BrnPhysics::Vehicle::VehicleManager::ValidateSimulationContacts(const InputBuffer::InAddContactQueue *  lpContactQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:9870
		int32_t liEvent;

	}
	{
		// BrnVehicleManager.cpp:9874
		BrnWorld::EEntityTypeID leEntityA;

		// BrnVehicleManager.cpp:9875
		BrnWorld::EEntityTypeID leEntityB;

		// BrnVehicleManager.cpp:9878
		const InAddPotentialContact lContact;

		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InAddPotentialContact>::GetEvent(/* parameters */);
		CgsPhysics::RigidBodyId::GetEntityIDOwner(/* parameters */);
		CgsPhysics::RigidBodyId::GetEntityIDOwner(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:9887
		EntityId lTrafficPhysicsId;

		// BrnVehicleManager.cpp:9888
		uint16_t lu16TrafficIndex;

		CgsContainers::BitArray<20u>::IsBitSet(/* parameters */);
		{
			// BrnVehicleManager.cpp:9890
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		// BrnVehicleManager.cpp:9896
		EntityId lTrafficPhysicsId;

		// BrnVehicleManager.cpp:9897
		uint16_t lu16TrafficIndex;

		CgsContainers::BitArray<20u>::IsBitSet(/* parameters */);
		{
			// BrnVehicleManager.cpp:9899
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:9998
void BrnPhysics::Vehicle::VehicleManager::OnPrepareGameMode(const PrepareForModeAction *  lpPrepareModeAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnGameState::GameStateModuleIO::PrepareForModeAction::GetGameModeParams(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnVehicleManager.cpp:10026
void BrnPhysics::Vehicle::VehicleManager::OnStartGameMode(const StartPlayingModeAction *  lpStartModeAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnVehicleManager.cpp:10053
void BrnPhysics::Vehicle::VehicleManager::OnJunkYardDriveThru(const JunkYardDriveThruAction *  lpJunkYardAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnVehicleManager.cpp:962
void BrnPhysics::Vehicle::VehicleManager::PrepareData(rw::LinearResourceAllocator *  lpPhysicsAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:964
		int32_t i;

	}
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>::Clear(/* parameters */);
	CgsContainers::BitArray<8u>::UnSetAll(/* parameters */);
}

// BrnVehicleManager.cpp:811
void BrnPhysics::Vehicle::VehicleManager::Prepare(rw::LinearResourceAllocator *  lpPhysicsAllocator, InputBuffer_Update *  lpSceneInputBuffer_Update) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnVehicleManager.cpp:3514
void BrnPhysics::Vehicle::VehicleManager::UpdateVehicleEffects(const VehicleEffectsInputInterface *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:3516
		int32_t liLoop;

		// BrnVehicleManager.cpp:3519
		const VehicleEffectsInputInterface::CreateAirRamEventQueue * lpAirRamEventQueue;

	}
	{
		// BrnVehicleManager.cpp:3523
		CreateAirRamEvent lEvent;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>::GetEvent(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityIDOwner(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:3526
		BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCarPhysics;

		rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
	}
}

// BrnVehicleManager.cpp:4497
void BrnPhysics::Vehicle::VehicleManager::ProcessShowtimeShunts(const ContactSpyData *  lpContactSpies) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:4507
		const ContactSpyData::RaceCarContactQueue * lpRaceCarContactSpyQueue;

		// BrnVehicleManager.cpp:4508
		int32_t liNumContacts;

		// BrnVehicleManager.cpp:4509
		int32_t i;

		// BrnVehicleManager.cpp:4539
		const ContactSpyData::TrafficContactQueue * lpTrafficContactSpyQueue;

	}
	BrnGameState::GameStateModuleIO::IsShowtimeGameMode(/* parameters */);
	ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300>::GetLength(/* parameters */);
	ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::TrafficContact,400>::GetLength(/* parameters */);
	{
		// BrnVehicleManager.cpp:4547
		const const TrafficContact & lSpy;

		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::TrafficContact>::GetEvent(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:4552
		PhysicalTrafficVehicle * lpAggressor;

		// BrnVehicleManager.cpp:4555
		PhysicalTrafficVehicle * lpVictim;

		GetPhysicsEntityIDFromGlobalEntityID(/* parameters */);
		CgsSceneManager::EntityId::SetOwner(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		GetPhysicsEntityIDFromGlobalEntityID(/* parameters */);
		PhysicalTrafficVehicle::GetFullTrafficPhysics(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:4517
		const const RaceCarContact & lSpy;

		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::GetEvent(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:4524
		uint8_t luOwnerB;

		{
			// BrnVehicleManager.cpp:4528
			const BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCar;

			// BrnVehicleManager.cpp:4530
			PhysicalTrafficVehicle * lpVehicle;

			GetPhysicsEntityIDFromGlobalEntityID(/* parameters */);
			CgsSceneManager::EntityId::SetOwner(/* parameters */);
			{
				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
		}
	}
	PhysicalTrafficManager::GetPhysicsEntityIDFromGlobalEntityID(/* parameters */);
	PhysicalTrafficManager::GetPhysicsEntityIDFromGlobalEntityID(/* parameters */);
	PhysicalTrafficManager::GetPhysicsEntityIDFromGlobalEntityID(/* parameters */);
	{
		CgsSceneManager::EntityId::SetEntityIndex(/* parameters */);
	}
	{
		CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	}
	{
		CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsSceneManager::EntityId::SetEntityIndex(/* parameters */);
	CgsSceneManager::EntityId::SetEntityIndex(/* parameters */);
}

// BrnVehicleManager.cpp:4064
void BrnPhysics::Vehicle::VehicleManager::UpdateNetworkCatchup(const VehicleDriverInputInterface *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:4066
		const VehicleDriverInputInterface::UpdateDriverEventQueue * lpDriverQueue;

		// BrnVehicleManager.cpp:4067
		int32_t liId;

		// BrnVehicleManager.cpp:4067
		int32_t liSize;

		// BrnVehicleManager.cpp:4068
		const CgsModule::Event * lpEvent;

		CgsModule::VariableEventQueue<4920,16>::GetFirstEvent(/* parameters */);
	}
	{
	}
	{
		// BrnVehicleManager.cpp:4081
		const BrnNetworkDriverControls * lpControls;

		// BrnVehicleManager.cpp:4082
		int32_t liRaceCarIndex;

		{
			// BrnVehicleManager.cpp:4091
			BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCarPhysics;

			// BrnVehicleManager.cpp:4092
			VehicleDriver * lpVehicleDriver;

			// BrnVehicleManager.cpp:4108
			bool lbSnap;

			{
				// BrnVehicleManager.cpp:4089
				CgsDev::StrStream lStrStream;

				CgsDev::StrStream::StrStream(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
				CgsDev::StrStreamBase::operator<<(/* parameters */);
			}
			CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			CgsContainers::BitArray<8u>::SetBit(/* parameters */);
			SetNetworkRaceCarHidden(/* parameters */);
			CgsContainers::BitArray<8u>::SetBit(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnVehicleManager.cpp:1829
void BrnPhysics::Vehicle::VehicleManager::DoRaceCarTractionLineTestsAgainstTriangleCache(IOBufferStack *  lpInputBufferStack, const VehicleInputInterface *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:1836
		RaceCarTractionLineBuffer * lpTractionLineBuffer;

		// BrnVehicleManager.cpp:1843
		const VehicleInputInterface::InTriangleCacheInterface * lpCacheInterface;

		// BrnVehicleManager.cpp:1845
		int8_t liRaceCar;

		// BrnVehicleManager.cpp:1846
		uint8_t lu8Wheel;

	}
	CreateIOBuffer<BrnPhysics::Vehicle::RaceCarTractionLineBuffer>(/* parameters */);
	VehicleInputInterface::GetTriangleCacheInterface(/* parameters */);
	{
		// BrnVehicleManager.cpp:1856
		int32_t liLineIndex;

	}
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	{
		// BrnVehicleManager.cpp:1877
		const Triangle4 * lpCachedTriangles;

		// BrnVehicleManager.cpp:1878
		int32_t liNumCachedTri4s;

		// BrnVehicleManager.cpp:1880
		int32_t liLinesStartIndex;

		CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetCachedTriangles(/* parameters */);
		CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetNumCachedTriangleBatches(/* parameters */);
	}
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	{
		// BrnVehicleManager.cpp:1904
		int32_t liLineIndex;

		TractionLineBuffer<32>::GetIntersectPoint(/* parameters */);
		TractionLineBuffer<32>::GetIntersectNormal(/* parameters */);
		TractionLineBuffer<32>::GetSurfaceTag(/* parameters */);
	}
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	DestroyIOBuffer<BrnPhysics::Vehicle::RaceCarTractionLineBuffer>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::BitArray<8u>::GetZeroBitInInt(/* parameters */);
	CgsContainers::BitArray<8u>::GetZeroBitInInt(/* parameters */);
	CgsContainers::BitArray<8u>::GetZeroBitInInt(/* parameters */);
}

// BrnVehicleManager.cpp:9922
void BrnPhysics::Vehicle::VehicleManager::ClearSnappedNetworkCarContacts(DeformationManager *  lpDeformationManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:9924
		int32_t liRaceCar;

	}
	CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	Deformation::DeformationManager::ClearModelStoredContacts(/* parameters */);
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	{
	}
}

// BrnVehicleManager.cpp:4220
void BrnPhysics::Vehicle::VehicleManager::ReadUpdatedBodies(const OutputBuffer::OutUpdateRigidBodyQueue *  lpUpdatedBodies, const VecFloat  lvfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:4222
		OutUpdateRigidBody lEvent;

		// BrnVehicleManager.cpp:4225
		VolumeInstanceId lID;

		{
			// BrnVehicleManager.cpp:4227
			int32_t i;

		}
	}
	CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	{
		// BrnVehicleManager.cpp:4229
		BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCar;

	}
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	{
		// BrnVehicleManager.cpp:4232
		Vector3 lLinVel;

		rw::math::vpu::operator*(/* parameters */);
	}
	rw::math::vpu::operator-<VectorAxisY>(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
}

// BrnVehicleManager.cpp:4154
void BrnPhysics::Vehicle::VehicleManager::GetUpdatedVehicleBodies(OutUpdatedExternalBodyQueue *  lUpdatedVehicles) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:4156
		EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,60>::InUpdateExternalBody lUpdateEvent;

		// BrnVehicleManager.cpp:4157
		EntityId lBodyID;

		// BrnVehicleManager.cpp:4158
		int32_t i;

	}
	CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	ExternallySimulatedBody::GetTransform(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	RaceCarPhysics::SetWrittenIntoRWInSlowMo(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnVehicleManager.cpp:4187
		EventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody,60>::InUpdateExternalBody lUpdateDummyRaceCarEvent;

		// BrnVehicleManager.cpp:4189
		EntityId lDummyRaceCarEntityId;

		CgsPhysics::RigidBodyId::SetEntityId(/* parameters */);
		InUpdateExternalBody(/* parameters */);
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody>::AddEvent(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	operator=(/* parameters */);
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsPhysics::PhysicsSimulationIO::InUpdateExternalBody>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	RaceCarPhysics::SetWrittenIntoRWInSlowMo(/* parameters */);
	{
		{
			{
			}
		}
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnVehicleManager.cpp:2383
void BrnPhysics::Vehicle::VehicleManager::EndVehicleTractionLineTests(IOBufferStack *  lpInputBufferStack, const VehicleInputInterface *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:2404
		SimpleDataStreamResultIterator lIterator;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsMemory::SimpleDataStreamProducer::End(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:924
void BrnPhysics::Vehicle::VehicleManager::UpdateTriangleCache(InputBuffer_Update *  lpSceneInputBuffer_Update) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:929
		InputBuffer_Update::InSmSceneUpdateInterface * lpSceneUpdateInterface;

		// BrnVehicleManager.cpp:931
		int32_t liRaceCar;

		CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface(/* parameters */);
		CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	{
		// BrnVehicleManager.cpp:937
		VecFloat lvfRadius;

		SimpleVehiclePhysics::GetInnerCacheSphereRadius(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::UpdateCachedObjectPosition(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition::SetRadius(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
		}
		{
			{
			}
		}
	}
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:2315
void BrnPhysics::Vehicle::VehicleManager::DoTrafficTractionLineTestsAgainstTriangleCache(IOBufferStack *  lpInputBufferStack, const VehicleInputInterface *  lpInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:1976
void BrnPhysics::Vehicle::VehicleManager::AddRaceCarTractionLineTests(CollisionGenerator *  lpTractionContactGen, const VehicleInputInterface::InTriangleCacheInterface *  lpCacheInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:1984
		int32_t liNumTestsSubmitted;

		// BrnVehicleManager.cpp:1985
		int32_t liRaceCar;

		// BrnVehicleManager.cpp:1986
		uint8_t lu8Wheel;

	}
	CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	{
		// BrnVehicleManager.cpp:1994
		const Triangle4 * lpCachedTriangles;

		// BrnVehicleManager.cpp:1995
		int32_t liNumCachedTri4s;

		// BrnVehicleManager.cpp:1997
		void * lpCommandAddress;

		// BrnVehicleManager.cpp:1998
		CgsSceneManager::CgsCollision::LineWithTriangleListStreamJobDesc::StreamCommand * lpCommand;

		CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetCachedTriangles(/* parameters */);
		CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetNumCachedTriangleBatches(/* parameters */);
		CgsSceneManager::TriangleCacheManager::GetNumTriangleBatchesForCachedObject(/* parameters */);
		CgsMemory::SimpleDataStreamProducer::AllocateCommand(/* parameters */);
		CgsSceneManager::CgsCollision::TriangleList::SetTriangleBuffer(/* parameters */);
		CgsSceneManager::CgsCollision::TriangleList::ValidateTriangles(/* parameters */);
		{
			// BrnVehicleManager.cpp:2011
			Vector3 lTractionLineStart;

			// BrnVehicleManager.cpp:2012
			Vector3 lTractionLineEnd;

			// BrnVehicleManager.cpp:2013
			BrnPhysics::Vehicle::EVehicleDrivenWheel leWheel;

		}
	}
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:2053
void BrnPhysics::Vehicle::VehicleManager::AddPlayerStuckInCollisionLineTests(CollisionGenerator *  lpTractionContactGen, const VehicleInputInterface::InTriangleCacheInterface *  lpCacheInterface, DeformationManager *  lpDeformationManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:2061
		int32_t liPlayerIndex;

		// BrnVehicleManager.cpp:2071
		BrnPhysics::Vehicle::RaceCarPhysics * lpPlayerCar;

	}
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	Deformation::DeformationManager::IsPlayerDeformationModelActive(/* parameters */);
	{
		// BrnVehicleManager.cpp:2081
		const Triangle4 * lpCachedTriangles;

		// BrnVehicleManager.cpp:2082
		int32_t liNumCachedTri4s;

		// BrnVehicleManager.cpp:2083
		void * lpCommandAddress;

		// BrnVehicleManager.cpp:2084
		CgsSceneManager::CgsCollision::LineWithTriangleListStreamJobDesc::StreamCommand * lpCommand;

		// BrnVehicleManager.cpp:2087
		Vector3[4] laWheelTagPoints;

		CgsSceneManager::CgsCollision::TriangleList::SetTriangleBuffer(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Deformation::DeformationManager::GetPlayerCarModel(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetCachedTriangles(/* parameters */);
	CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetNumCachedTriangleBatches(/* parameters */);
	CgsSceneManager::TriangleCacheManager::GetNumTriangleBatchesForCachedObject(/* parameters */);
	CgsMemory::SimpleDataStreamProducer::AllocateCommand(/* parameters */);
	CgsSceneManager::CgsCollision::TriangleList::CheckAlignment(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:2340
void BrnPhysics::Vehicle::VehicleManager::StartVehicleTractionLineTests(IOBufferStack *  lpInputBufferStack, const VehicleInputInterface *  lpInputInterface, DeformationManager *  lpDeformationManager, float32_t  lfSimTimerTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:2347
		const VehicleInputInterface::InTriangleCacheInterface * lpCacheInterface;

	}
	VehicleInputInterface::GetTriangleCacheInterface(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:3057
void BrnPhysics::Vehicle::VehicleManager::UpdateVehiclePhysicsPostSimulation(const VehicleInputInterface *  lpInputInterface, const OutputBuffer *  lpSimModuleOutputBuffer, float32_t  lfTimeStep, BrnGameState::GameStateModuleIO::GameEventQueue *  lpGameEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:3059
		int32_t liRaceCar;

	}
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	VehicleDriver::ClearSnappedThisFrame(/* parameters */);
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:7240
void BrnPhysics::Vehicle::VehicleManager::WriteOutVehicleStats(VehicleOutputInterface *  lpOutputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:7246
		int32_t liRaceCar;

	}
	CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	{
		// BrnVehicleManager.cpp:7252
		Matrix44Affine lRaceCarTransform;

		// BrnVehicleManager.cpp:7253
		uint32_t luWheel;

		// BrnVehicleManager.cpp:7255
		BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCar;

		// BrnVehicleManager.cpp:7262
		bool lbForceReset;

		{
			// BrnVehicleManager.cpp:7276
			RaceCarState * lpPlayerRaceCarState;

		}
		IsRaceCarHidden(/* parameters */);
		VehicleOutputInterface::SetRaceCarHidden(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		VehicleOutputInterface::SetWheelTransform(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	}
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	{
		// BrnVehicleManager.cpp:7259
		CgsDev::StrStream lStrStream;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VehicleOutputInterface::GetRaceCarState(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:1137
void BrnPhysics::Vehicle::VehicleManager::ProcessVehicleMaintenanceEvents(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const VehicleInputInterface *  lpInputInterface, VehicleOutputRequestInterface *  lpOutputInterface, VehicleManagerOutputInterface *  lpManagerOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnVehicleManager.cpp:6797
void BrnPhysics::Vehicle::VehicleManager::HandleTrafficCarWorldPotentialContact(PotentialContact  lContact, VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, VehicleManagerOutputInterface *  lpManagerOutputInterface, DeformationInputInterface *  lpDeformationInterface, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:6799
		EntityId lTrafficEntityID;

		// BrnVehicleManager.cpp:6800
		EntityId lWorldEntityID;

		// BrnVehicleManager.cpp:6801
		Vector3 lPointOnCar;

		// BrnVehicleManager.cpp:6802
		Vector3 lPointOnWorld;

		// BrnVehicleManager.cpp:6803
		Vector3 lNormal;

		// BrnVehicleManager.cpp:6825
		EntityId lPhysTrafficId;

		// BrnVehicleManager.cpp:6832
		int32_t liPhysicalTrafficIndex;

		// BrnVehicleManager.cpp:6835
		Vector3 lPointVel;

		// BrnVehicleManager.cpp:6836
		Vector3 lUpdatedPointPos;

		// BrnVehicleManager.cpp:6838
		const PhysicalTrafficVehicle * lpTraffic;

		CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
	PhysicalTrafficManager::GetPhysicsEntityIDFromGlobalEntityID_Safe(/* parameters */);
	CgsSceneManager::EntityId::Set(/* parameters */);
	PhysicalTrafficManager::GetTrafficVehicle(/* parameters */);
	ExternalPhysicsBody::GetLocalVelocity(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	PhysicalTrafficManager::IsTrafficVehicleCrashed(/* parameters */);
	{
		// BrnVehicleManager.cpp:6856
		const PhysicalTrafficVehicle * lpTrafficCar;

		// BrnVehicleManager.cpp:6858
		Vector3 lGroundNormal;

		// BrnVehicleManager.cpp:6859
		Vector3 lPointOnPlane;

		PhysicalTrafficManager::GetTrafficVehicle(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
	}
}

// BrnVehicleManager.cpp:6676
void BrnPhysics::Vehicle::VehicleManager::HandleTrafficCarTrafficCarPotentialContact(PotentialContact  lContact, VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, VehicleManagerOutputInterface *  lpManagerOutputInterface, DeformationInputInterface *  lpDeformationInterface, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:6678
		EntityId lTrafficAEntityID;

		// BrnVehicleManager.cpp:6679
		EntityId lTrafficBEntityID;

		// BrnVehicleManager.cpp:6685
		EntityId lPhysTrafficIdA;

		// BrnVehicleManager.cpp:6686
		EntityId lPhysTrafficIdB;

		// BrnVehicleManager.cpp:6695
		uint16_t lu16TrafficIndexA;

		// BrnVehicleManager.cpp:6696
		uint16_t lu16TrafficIndexB;

		// BrnVehicleManager.cpp:6698
		const PhysicalTrafficVehicle * lpCarA;

		// BrnVehicleManager.cpp:6699
		const PhysicalTrafficVehicle * lpCarB;

		// BrnVehicleManager.cpp:6710
		Vector3 lCarAVel;

		// BrnVehicleManager.cpp:6711
		Vector3 lCarBVel;

		// BrnVehicleManager.cpp:6714
		Vector3 lRelativeVel;

		// BrnVehicleManager.cpp:6715
		float32_t lfClosingSpeed;

		// BrnVehicleManager.cpp:6717
		bool lbFastEnoughToCrash;

		// BrnVehicleManager.cpp:6719
		bool lbVehicleAIsTrailer;

		// BrnVehicleManager.cpp:6720
		bool lbVehicleBIsTrailer;

		// BrnVehicleManager.cpp:6722
		EntityId lPlayerId;

		CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
	}
	CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
	PhysicalTrafficManager::GetPhysicsEntityIDFromGlobalEntityID_Safe(/* parameters */);
	CgsSceneManager::EntityId::Set(/* parameters */);
	PhysicalTrafficManager::GetPhysicsEntityIDFromGlobalEntityID_Safe(/* parameters */);
	CgsSceneManager::EntityId::Set(/* parameters */);
	PhysicalTrafficManager::GetTrafficVehicle(/* parameters */);
	PhysicalTrafficManager::GetTrafficVehicle(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	BrnTraffic::GetVehicleSpecies(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	BrnTraffic::GetVehicleSpecies(/* parameters */);
	PhysicalTrafficManager::GetTrafficVehicle(/* parameters */);
	{
		// BrnVehicleManager.cpp:6738
		VecFloat lvfTrafficSpeedChange;

		rw::math::vpu::operator*(/* parameters */);
	}
	rw::math::vpu::operator/(/* parameters */);
	{
	}
	PhysicalTrafficManager::GetTrafficVehicle(/* parameters */);
	{
		// BrnVehicleManager.cpp:6767
		VecFloat lvfTrafficSpeedChange;

		rw::math::vpu::operator*(/* parameters */);
	}
	rw::math::vpu::operator/(/* parameters */);
	{
	}
}

// BrnVehicleManager.cpp:6902
void BrnPhysics::Vehicle::VehicleManager::SetRaceCarCrashing(EntityId  lRaceCarEntityID, EntityId  lCrashedIntoEntityID, const rw::math::vpu::Vector3  lCollisionNormal, const rw::math::vpu::Vector3  lContactPoint, VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleManagerOutputInterface *  lpManagerOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, DeformationInputInterface *  lpDeformationInterface, BrnGameState::ETakedownType  leTakedownType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:6910
		VolumeInstanceId lRaceCarVolumeInstanceID;

		// BrnVehicleManager.cpp:6913
		BrnWorld::EEntityTypeID leCrashIntoEntityOwner;

		// BrnVehicleManager.cpp:6916
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnVehicleManager.cpp:6918
		bool lbCarIsAI;

		// BrnVehicleManager.cpp:6953
		EntityId lRemappedRaceCarEntityID;

		// BrnVehicleManager.cpp:6954
		EntityId lRemappedCrashedIntoEntityID;

		// BrnVehicleManager.cpp:6963
		int32_t liCrash;

	}
	{
		// BrnVehicleManager.cpp:6957
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
	CgsContainers::BitArray<32u>::GetFirstNonZeroBit(/* parameters */);
	VehiclePhysics::GetSpeedOnLastCrashMPH(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	CgsContainers::BitArray<32u>::GetFirstZeroBit(/* parameters */);
	{
		// BrnVehicleManager.cpp:7063
		float32_t lfLongestTimeSinceImpact;

		// BrnVehicleManager.cpp:7064
		int32_t liIndex;

		CgsContainers::BitArray<32u>::GetFirstNonZeroBit(/* parameters */);
	}
	CgsContainers::BitArray<32u>::SetBit(/* parameters */);
	{
		// BrnVehicleManager.cpp:6981
		bool lbAISlowMo;

		// BrnVehicleManager.cpp:6994
		Vector3 lAIToPlayer;

		// BrnVehicleManager.cpp:7001
		bool lbDeformationWasActivated;

		// BrnVehicleManager.cpp:7032
		VehicleCrashedEvent lVehicleCrashedEvent;

		rw::math::vpu::operator-(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		VehiclePhysics::GetSpeedOnLastCrashMPH(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
	{
	}
	CgsContainers::BitArray<32u>::GetNextNonZeroBit(/* parameters */);
	CgsContainers::BitArray<32u>::IsBitSet(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnVehicleManager.cpp:6958
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:7089
		uint16_t luTrafficVehicleIndex;

		CgsModule::BaseEventQueue<uint16_t>::AddEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	CgsContainers::BitArray<32u>::GetNextNonZeroBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnVehicleManager.cpp:9189
void BrnPhysics::Vehicle::VehicleManager::InstantTakedown(EntityId  lVictimEntityId, EntityId  lAggressorEntityId, const rw::math::vpu::Vector3  lCollisionNormal, const rw::math::vpu::Vector3  lContactPoint, float32_t  lfNormalStressSq, VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleManagerOutputInterface *  lpManagerOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, DeformationInputInterface *  lpDeformationInterface, BrnGameState::ETakedownType  leTakedownType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:9191
		EActiveRaceCarIndex leVictimActiveRaceCarIndex;

		// BrnVehicleManager.cpp:9192
		EActiveRaceCarIndex leAggressorActiveRaceCarIndex;

		// BrnVehicleManager.cpp:9257
		EActiveRaceCarIndex leOtherCarIndex;

	}
	VehicleDriver::SetInvulnerableToVehicles(/* parameters */);
	RaceCarPhysics::OnTakendownPlayer(/* parameters */);
}

// BrnVehicleManager.cpp:8321
void BrnPhysics::Vehicle::VehicleManager::UpdateAggressiveDriving(float32_t  lfSimTimerTimeStep, VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleManagerOutputInterface *  lpVehicleManagerOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:8323
		VehicleGuiOutputMessages * lpGuiOutputMessages;

		// BrnVehicleManager.cpp:8326
		EActiveRaceCarIndex leActiveRaceCarIndex;

		VehicleManagerOutputInterface::GetVehicleGuiOutputMessages(/* parameters */);
	}
	HasRaceCarHadRecentImpact(/* parameters */);
	{
		// BrnVehicleManager.cpp:8354
		float32_t lfOldDuration;

		// BrnVehicleManager.cpp:8355
		float32_t lfNewDuration;

	}
	{
		// BrnVehicleManager.cpp:8405
		float32_t lfOldDuration;

		// BrnVehicleManager.cpp:8406
		float32_t lfNewDuration;

	}
	operator++(/* parameters */);
	{
		// BrnVehicleManager.cpp:8379
		Vector3 lCollisionNormal;

		rw::math::vpu::operator-(/* parameters */);
		CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
		CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		{
			{
			}
		}
	}
	{
		// BrnVehicleManager.cpp:8428
		Vector3 lCollisionNormal;

		rw::math::vpu::operator-(/* parameters */);
		CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
		CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		{
			{
			}
		}
	}
}

// BrnVehicleManager.cpp:5767
void BrnPhysics::Vehicle::VehicleManager::CheckForPlayerSlammingAIIntoAI(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *  lpInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:5769
		bool lbARaceCarWasCrashed;

	}
	{
		// BrnVehicleManager.cpp:5775
		BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCarA;

		// BrnVehicleManager.cpp:5776
		BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCarB;

		// BrnVehicleManager.cpp:5781
		VecFloat lvfClosingSpeed;

		// BrnVehicleManager.cpp:5785
		bool lbRaceCarABeingAttacked;

		// BrnVehicleManager.cpp:5786
		bool lbRaceCarBBeingAttacked;

		{
			// BrnVehicleManager.cpp:5796
			VecFloat lvfStrengthScaleA;

			// BrnVehicleManager.cpp:5797
			VecFloat lvfStrengthScaleB;

			{
				// BrnVehicleManager.cpp:5833
				EntityId lVictimCarId;

				// BrnVehicleManager.cpp:5834
				EntityId lAggressorCarId;

			}
		}
	}
	rw::math::vpu::VecFloat::operator=(/* parameters */);
	rw::math::vpu::VecFloat::SetFloat(/* parameters */);
	VehiclePhysics::WasContactingRaceCarWithinTime(/* parameters */);
	VehiclePhysics::WasContactingRaceCarWithinTime(/* parameters */);
	rw::math::vpu::GetVecFloat_Two(/* parameters */);
	rw::math::vpu::MaskScalar::MaskScalar(/* parameters */);
	rw::math::vpu::MaskScalar::MaskScalar(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	rw::math::vpu::Select(/* parameters */);
	{
		// BrnVehicleManager.cpp:5807
		EntityId lVictimCarId;

		// BrnVehicleManager.cpp:5808
		EntityId lAggressorCarId;

		CgsSceneManager::EntityId::Set(/* parameters */);
		CgsSceneManager::EntityId::Set(/* parameters */);
	}
	CgsSceneManager::EntityId::Set(/* parameters */);
	CgsSceneManager::EntityId::Set(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	VehiclePhysics::GetTimeSinceLastRaceCarContact(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	VehiclePhysics::GetTimeSinceLastRaceCarContact(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
}

// BrnVehicleManager.cpp:5476
void BrnPhysics::Vehicle::VehicleManager::CheckForHittingAlreadyCrashingCar(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *  lpInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:5478
		Matrix44Affine lRaceCarATransform;

		// BrnVehicleManager.cpp:5479
		Matrix44Affine lRaceCarBTransform;

		// BrnVehicleManager.cpp:5480
		Vector3 lZeroYNormal;

		// BrnVehicleManager.cpp:5481
		VecFloat lvfTimeACrashing;

		// BrnVehicleManager.cpp:5482
		VecFloat lvfTimeBCrashing;

		// BrnVehicleManager.cpp:5483
		BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCarPhysicsA;

		// BrnVehicleManager.cpp:5484
		BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCarPhysicsB;

		// BrnVehicleManager.cpp:5485
		int8_t liRaceCarIndexA;

		// BrnVehicleManager.cpp:5486
		int8_t liRaceCarIndexB;

		// BrnVehicleManager.cpp:5487
		bool lbRaceCarACrashingForLongEnough;

		// BrnVehicleManager.cpp:5488
		bool lbRaceCarBCrashingForLongEnough;

		// BrnVehicleManager.cpp:5489
		bool lbAIsNetworkCar;

		// BrnVehicleManager.cpp:5490
		bool lbBIsNetworkCar;

		// BrnVehicleManager.cpp:5491
		bool lbACrashing;

		// BrnVehicleManager.cpp:5492
		bool lbBCrashing;

		rw::math::vpu::GetVecFloat_One(/* parameters */);
	}
	VehiclePhysics::GetTimeCrashing(/* parameters */);
	VehiclePhysics::GetTimeCrashing(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	{
		// BrnVehicleManager.cpp:5529
		VecFloat lvfClosingSpeed;

		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::GetVecFloat_One(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
		rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:5583
		VecFloat lvfClosingSpeed;

		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::GetVecFloat_One(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
		rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
	}
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	VehiclePhysics::GetTimeCrashing(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	VehiclePhysics::WasContactingRaceCarWithinTime(/* parameters */);
	VehiclePhysics::GetTimeSinceLastRaceCarContact(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	{
		// BrnVehicleManager.cpp:5552
		EntityId lVictimCarId;

		// BrnVehicleManager.cpp:5553
		EntityId lAggressorCarId;

		CgsSceneManager::EntityId::Set(/* parameters */);
		CgsSceneManager::EntityId::Set(/* parameters */);
	}
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	VehiclePhysics::GetTimeCrashing(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	VehiclePhysics::WasContactingRaceCarWithinTime(/* parameters */);
	VehiclePhysics::GetTimeSinceLastRaceCarContact(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	{
		// BrnVehicleManager.cpp:5606
		EntityId lVictimCarId;

		// BrnVehicleManager.cpp:5607
		EntityId lAggressorCarId;

		CgsSceneManager::EntityId::Set(/* parameters */);
		CgsSceneManager::EntityId::Set(/* parameters */);
	}
}

// BrnVehicleManager.cpp:5386
void BrnPhysics::Vehicle::VehicleManager::CheckForStationaryTargetTakedown(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *  lpInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:5388
		Vector3 lVectorBetweenCars;

		// BrnVehicleManager.cpp:5389
		EntityId lAggressorId;

		// BrnVehicleManager.cpp:5390
		EntityId lVictimId;

		// BrnVehicleManager.cpp:5408
		float32_t lfCarASpeed;

		// BrnVehicleManager.cpp:5409
		float32_t lfCarBSpeed;

		// BrnVehicleManager.cpp:5410
		float32_t lfSpeedDifference;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::fpu::Abs<float>(/* parameters */);
	}
}

// BrnVehicleManager.cpp:5253
void BrnPhysics::Vehicle::VehicleManager::CheckForVerticalTakedown(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *  lpInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:5261
		bool lbIsVerticalTakedown;

		// BrnVehicleManager.cpp:5262
		EntityId lAggressorId;

		// BrnVehicleManager.cpp:5263
		EntityId lVictimId;

		// BrnVehicleManager.cpp:5264
		const BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCarPhysicsA;

		// BrnVehicleManager.cpp:5265
		const BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCarPhysicsB;

	}
	HasRaceCarHadRecentImpact(/* parameters */);
	HasRaceCarHadRecentImpact(/* parameters */);
	VehiclePhysics::GetTimeInAir(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	VehiclePhysics::GetTimeInAir(/* parameters */);
	rw::math::vpu::operator==(/* parameters */);
	VehiclePhysics::GetTimeInAir(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	VehiclePhysics::GetTimeInAir(/* parameters */);
	rw::math::vpu::operator==(/* parameters */);
}

// BrnVehicleManager.cpp:5157
void BrnPhysics::Vehicle::VehicleManager::CheckForTBoneTakedown(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *  lpInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:5159
		float32_t lfAngleAwayFromPerpendicular;

		// BrnVehicleManager.cpp:5160
		bool lbTBoneTakedownOnB;

		// BrnVehicleManager.cpp:5161
		bool lbTBoneTakedownOnA;

	}
	rw::math::fpu::Abs<float>(/* parameters */);
	rw::math::fpu::Abs<float>(/* parameters */);
	{
		// BrnVehicleManager.cpp:5207
		EntityId lVictimCarId;

		// BrnVehicleManager.cpp:5208
		EntityId lAggressorCarId;

	}
	{
		// BrnVehicleManager.cpp:5175
		const BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCarPhysicsA;

		// BrnVehicleManager.cpp:5176
		const BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCarPhysicsB;

		// BrnVehicleManager.cpp:5177
		Matrix44Affine lTransformA;

		// BrnVehicleManager.cpp:5178
		Matrix44Affine lTransformB;

		// BrnVehicleManager.cpp:5179
		const AxisAlignedBox * lpBoxA;

		// BrnVehicleManager.cpp:5180
		const AxisAlignedBox * lpBoxB;

		// BrnVehicleManager.cpp:5183
		Vector3 lFrontA;

		// BrnVehicleManager.cpp:5184
		Vector3 lBackA;

		// BrnVehicleManager.cpp:5185
		Vector3 lFrontB;

		// BrnVehicleManager.cpp:5186
		Vector3 lBackB;

		// BrnVehicleManager.cpp:5188
		VecFloat lfSpeedBRightAxis;

		// BrnVehicleManager.cpp:5189
		VecFloat lfSpeedARightAxis;

		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		SimpleVehiclePhysics::GetDeformableBBox(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		SimpleVehiclePhysics::GetDeformableBBox(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
	}
}

// BrnVehicleManager.cpp:5021
void BrnPhysics::Vehicle::VehicleManager::CheckForHeadToHead(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *  lpInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:5023
		EntityId lVictimCarId;

		// BrnVehicleManager.cpp:5024
		EntityId lAggressorCarId;

		// BrnVehicleManager.cpp:5025
		BrnPhysics::Vehicle::VehiclePhysics * lpRaceCarA;

		// BrnVehicleManager.cpp:5026
		BrnPhysics::Vehicle::VehiclePhysics * lpRaceCarB;

		// BrnVehicleManager.cpp:5027
		float32_t lfRaceCarAMomentum;

		// BrnVehicleManager.cpp:5028
		float32_t lfRaceCarBMomentum;

		// BrnVehicleManager.cpp:5029
		float32_t lfHeadToHeadAngleCheck;

		// BrnVehicleManager.cpp:5030
		bool lbRaceCarAFast;

		// BrnVehicleManager.cpp:5031
		bool lbRaceCarBFast;

		// BrnVehicleManager.cpp:5032
		bool lbInstantTakedown;

	}
	rw::math::fpu::Abs<float>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
}

// BrnVehicleManager.cpp:5706
void BrnPhysics::Vehicle::VehicleManager::CheckForAllTypesOfImpacts(BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo *  lpInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Abs<float>(/* parameters */);
	rw::math::vpu::Abs<float>(/* parameters */);
}

// BrnVehicleManager.cpp:4658
void BrnPhysics::Vehicle::VehicleManager::DoHornTakedowns(VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, VehicleManagerOutputInterface *  lpManagerOutputInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:4661
		bool lbInstantTakedownRequested;

		// BrnVehicleManager.cpp:4669
		float32_t lfNearestDistance;

		// BrnVehicleManager.cpp:4670
		int32_t lNearestKillableIndex;

		// BrnVehicleManager.cpp:4671
		Vector3 lPlayerPos;

	}
	{
		// BrnVehicleManager.cpp:4673
		int32_t i;

	}
	CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	{
		// BrnVehicleManager.cpp:4695
		EntityId lVictimEntityId;

		// BrnVehicleManager.cpp:4698
		EntityId lAggressorEntityId;

		// BrnVehicleManager.cpp:4701
		Vector3 lCollisionNormal;

		// BrnVehicleManager.cpp:4703
		const rw::math::vpu::Vector3 lContactPoint;

		// BrnVehicleManager.cpp:4705
		float32_t lfNormalStressSq;

		// BrnVehicleManager.cpp:4707
		BrnGameState::ETakedownType leTakedownType;

		CgsSceneManager::EntityId::Set(/* parameters */);
		CgsSceneManager::EntityId::Set(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
	}
	{
		// BrnVehicleManager.cpp:4680
		float32_t lfDistance;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
	}
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
}

// BrnVehicleManager.cpp:3577
void BrnPhysics::Vehicle::VehicleManager::UpdateDrivers(float32_t  lfSimTimerTimeStep, const VehicleDriverInputInterface *  lpInputInterface, VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleManagerOutputInterface *  lpManagerOutputInterface, DeformationInputInterface *  lpDeformationInterface, VehicleOutputInterface *  lpVehicleOutputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:3579
		const VehicleDriverInputInterface::UpdateDriverEventQueue * lpDriverQueue;

		// BrnVehicleManager.cpp:3580
		int32_t liId;

		// BrnVehicleManager.cpp:3580
		int32_t liSize;

		// BrnVehicleManager.cpp:3581
		const CgsModule::Event * lpEvent;

		// BrnVehicleManager.cpp:3585
		BitArray<8u> lUpdatedVehicles;

	}
	CgsModule::VariableEventQueue<4920,16>::GetFirstEvent(/* parameters */);
	VehicleDriver::SetInvulnerableToWorld(/* parameters */);
	{
		// BrnVehicleManager.cpp:3624
		const BrnAIDriverControls * lpControls;

	}
	{
		// BrnVehicleManager.cpp:3616
		const BrnNetworkDriverControls * lpControls;

	}
	{
		// BrnVehicleManager.cpp:3608
		const BrnPlayerDriverControls * lpControls;

	}
	{
		// BrnVehicleManager.cpp:3632
		const BrnTrafficDriverControls * lpControls;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:8553
void BrnPhysics::Vehicle::VehicleManager::ForceRaceCarCrash(VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleManagerOutputInterface *  lpVehicleManagerOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, DeformationInputInterface *  lpDeformationInterface, EActiveRaceCarIndex  leRaceCarIndex, EntityId  lCrashedIntoEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
	rw::math::vpu::GetVector3_Zero(/* parameters */);
}

// BrnVehicleManager.cpp:9322
void BrnPhysics::Vehicle::VehicleManager::CrashFatalRaceCars(VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleManagerOutputInterface *  lpVehicleManagerOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, DeformationInputInterface *  lpDeformationInterface, EntityId  lWorldEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:9324
		int32_t liRaceCar;

	}
	CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	{
	}
	{
		// BrnVehicleManager.cpp:9330
		uint8_t lu8Wheel;

		// BrnVehicleManager.cpp:9333
		BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCarPhysics;

		{
			// BrnVehicleManager.cpp:9354
			BrnPhysics::Vehicle::EVehicleDrivenWheel leWheel;

			// BrnVehicleManager.cpp:9357
			BrnPhysics::Vehicle::Wheel::RoadContact lRoadContact;

			// BrnVehicleManager.cpp:9362
			uint32_t luSurfaceId;

			// BrnVehicleManager.cpp:9368
			bool lbIsWaterSurface;

			Wheel::GetRoadContact(/* parameters */);
			StuntOffencesManager::SetCarHasJustBeenReset(/* parameters */);
		}
	}
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	{
		// BrnVehicleManager.cpp:9359
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:8585
void BrnPhysics::Vehicle::VehicleManager::ForceRaceCarCrash(VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleManagerOutputInterface *  lpVehicleManagerOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, DeformationInputInterface *  lpDeformationInterface, EActiveRaceCarIndex  leRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VehicleDriver::SetInvulnerableToWorld(/* parameters */);
	VehicleDriver::SetInvulnerableToVehicles(/* parameters */);
}

// BrnVehicleManager.cpp:5946
void BrnPhysics::Vehicle::VehicleManager::HandleRaceCarWorldPotentialContact(PotentialContact  lContact, VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, VehicleManagerOutputInterface *  lpManagerOutputInterface, DeformationInputInterface *  lpDeformationInterface, const VehicleInputInterface::InTriangleCacheInterface *  lpTriCacheInterface, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:5948
		EntityId lRaceCarEntityID;

		// BrnVehicleManager.cpp:5949
		EntityId lWorldEntityID;

		// BrnVehicleManager.cpp:5950
		Vector3 lPointOnCar;

		// BrnVehicleManager.cpp:5951
		Vector3 lPointOnWorld;

		// BrnVehicleManager.cpp:5952
		Vector3 lNormal;

		// BrnVehicleManager.cpp:5970
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnVehicleManager.cpp:5979
		Vector3 lPointVel;

		// BrnVehicleManager.cpp:5997
		BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCar;

		// BrnVehicleManager.cpp:6000
		Matrix44Affine lRaceCarTransform;

		// BrnVehicleManager.cpp:6004
		bool lbOpposingCarDir;

		// BrnVehicleManager.cpp:6005
		bool lbContactOnFrontOfCar;

		// BrnVehicleManager.cpp:6009
		Vector3 lPointOnWorldLocal;

		// BrnVehicleManager.cpp:6010
		Vector3 lPointOnCarLocal;

		// BrnVehicleManager.cpp:6060
		AxisAlignedBox lCarAABB;

		// BrnVehicleManager.cpp:6075
		bool lbHeadOnCrash;

		// BrnVehicleManager.cpp:6076
		bool lbSideOnCrash;

		// BrnVehicleManager.cpp:6077
		bool lbCarRolledOver;

	}
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsSimilar(/* parameters */);
	rw::math::vpu::Subtract(/* parameters */);
	CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
	CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
	{
		// BrnVehicleManager.cpp:5985
		Vector3 lProjectedPointOnCar;

		rw::math::vpu::operator*(/* parameters */);
		ExternalPhysicsBody::GetLocalVelocity(/* parameters */);
		rw::math::vpu::Cross(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::operator-=(/* parameters */);
	}
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	{
		// BrnVehicleManager.cpp:6014
		Vector3 lCarPosToWorldContactPoint;

		// BrnVehicleManager.cpp:6022
		Vector3 lCarPosToCarContactPoint;

		rw::math::vpu::Vector3::SetX(/* parameters */);
		rw::math::vpu::Vector3::SetY(/* parameters */);
	}
	ExternallySimulatedBody::GetTransform(/* parameters */);
	{
		// BrnVehicleManager.cpp:6034
		const VecFloat kvfCrashAngleDotMinSpeed;

		// BrnVehicleManager.cpp:6037
		const VecFloat kvfCrashAngleDotMaxSpeed;

		// BrnVehicleManager.cpp:6040
		const VecFloat kvfMaxSpeedMps;

		// BrnVehicleManager.cpp:6044
		VecFloat lvfCarVelocityZ;

		// BrnVehicleManager.cpp:6050
		VecFloat lvfZVelocityFactor;

		// BrnVehicleManager.cpp:6053
		VecFloat lvfCrashAngleDot;

	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3::SetZ(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Vector3::SetX(/* parameters */);
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::Vector3::SetZ(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		// BrnVehicleManager.cpp:6064
		const VecFloat kvfMaxWallPenetrationOnCrash;

	}
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator>=<VectorAxisX, VectorAxisX>(/* parameters */);
	{
		// BrnVehicleManager.cpp:6082
		VecFloat lvfHeadOnCollisionImpact;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:6093
		VecFloat lvfSideCollisionImpact;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:6105
		VecFloat lvfPitchRollDot;

		rw::math::vpu::GetVector3_YAxis(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:6116
		bool lbForceNoSlowMo;

		{
			// BrnVehicleManager.cpp:6124
			VecFloat lvfDistToClosestSide;

			// BrnVehicleManager.cpp:6127
			bool lbEdgeContact;

			rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
			rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
			rw::math::vpu::Min<rw::math::vpu::VecFloat>(/* parameters */);
		}
		rw::math::vpu::operator-(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:5956
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	rw::math::vpu::operator>=(/* parameters */);
	rw::math::vpu::operator<=<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator>=<VectorAxisZ>(/* parameters */);
	rw::math::vpu::operator><VectorAxisY>(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	rw::math::vpu::operator><VectorAxisY>(/* parameters */);
	rw::math::vpu::GetVecFloat_Half(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

// BrnVehicleManager.cpp:9562
void BrnPhysics::Vehicle::VehicleManager::HandleCrashPredictionForRaceCarAndWorld(float32_t  lfSimTimerTimeStep, PotentialContactInterface *  lpPotentialContactInterface, const VehicleInputInterface *  lpInputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleManagerOutputInterface *  lpVehicleManagerOutputInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:9564
		PotentialContactOrderer lOrderer;

		// BrnVehicleManager.cpp:9569
		const PotentialContactInterface::CustomPotentialContactQueue * lpRaceCarWorldContacts;

	}
	{
		// BrnVehicleManager.cpp:9576
		EntityId lLastCarId;

		// BrnVehicleManager.cpp:9612
		int32_t liNumContacts;

		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(/* parameters */);
		CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
		{
			// BrnVehicleManager.cpp:9578
			int32_t liEvent;

		}
		{
			// BrnVehicleManager.cpp:9580
			const const PotentialContact & lContact;

			CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(/* parameters */);
		}
		{
			// BrnVehicleManager.cpp:9584
			int32_t liNumContacts;

			PotentialContactOrderer::SortContacts(/* parameters */);
			{
				// BrnVehicleManager.cpp:9586
				int32_t liContactLoop;

				{
					// BrnVehicleManager.cpp:9588
					const PotentialContact * lpContact;

					PotentialContactOrderer::GetContact(/* parameters */);
				}
			}
			CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
		}
		PotentialContactOrderer::AddContact(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		{
			rw::math::vpu::Min<int>(/* parameters */);
		}
		PotentialContactOrderer::SortContacts(/* parameters */);
		{
			// BrnVehicleManager.cpp:9614
			int32_t liContactLoop;

			{
				// BrnVehicleManager.cpp:9616
				const PotentialContact * lpContact;

				PotentialContactOrderer::GetContact(/* parameters */);
			}
		}
	}
}

// BrnVehicleManager.cpp:3932
void BrnPhysics::Vehicle::VehicleManager::SetNetworkCarCrashing(EntityId  lRaceCarEntityID, EntityId  lCrashedIntoEntityID, float32_t  lfNormalStressSquared, VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleManagerOutputInterface *  lpManagerOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:3934
		VolumeInstanceId lRaceCarVolumeInstanceID;

		// BrnVehicleManager.cpp:3941
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnVehicleManager.cpp:3952
		EntityId lRemappedRaceCarEntityID;

		// BrnVehicleManager.cpp:3953
		EntityId lRemappedCrashedIntoEntityID;

		// BrnVehicleManager.cpp:3962
		int32_t liCrash;

	}
	{
		// BrnVehicleManager.cpp:3937
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:3956
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
	CgsContainers::BitArray<32u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<32u>::GetFirstZeroBit(/* parameters */);
	{
		// BrnVehicleManager.cpp:4028
		float32_t lfLongestTimeSinceImpact;

		// BrnVehicleManager.cpp:4029
		int32_t liIndex;

		CgsContainers::BitArray<32u>::GetFirstNonZeroBit(/* parameters */);
	}
	CgsContainers::BitArray<32u>::SetBit(/* parameters */);
	{
	}
	CgsContainers::BitArray<32u>::GetNextNonZeroBit(/* parameters */);
	CgsContainers::BitArray<32u>::IsBitSet(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnVehicleManager.cpp:3957
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnVehicleManager.cpp:3984
		bool lbDeformationWasActivated;

		// BrnVehicleManager.cpp:4011
		VehicleCrashedEvent lVehicleCrashedEvent;

		VehiclePhysics::GetSpeedOnLastCrashMPH(/* parameters */);
		rw::math::vpu::GetVector3_XAxis(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:3938
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	CgsContainers::BitArray<32u>::GetNextNonZeroBit(/* parameters */);
}

// BrnVehicleManager.cpp:3841
void BrnPhysics::Vehicle::VehicleManager::ProcessCrashingNetworkCars(const VehicleDriverInputInterface *  lpInputInterface, VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleManagerOutputInterface *  lpManagerOutputInterface, DeformationInputInterface *  lpDeformationInterface, VehicleOutputInterface *  lpVehicleOutputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:3843
		const VehicleDriverInputInterface::UpdateDriverEventQueue * lpDriverQueue;

		// BrnVehicleManager.cpp:3844
		int32_t liId;

		// BrnVehicleManager.cpp:3844
		int32_t liSize;

		// BrnVehicleManager.cpp:3845
		const CgsModule::Event * lpEvent;

		CgsModule::VariableEventQueue<4920,16>::GetFirstEvent(/* parameters */);
	}
	{
	}
	{
		// BrnVehicleManager.cpp:3857
		EActiveRaceCarIndex leDriverActiveRaceCarIndex;

		// BrnVehicleManager.cpp:3858
		const BrnNetworkDriverControls * lpControls;

		CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
		{
			// BrnVehicleManager.cpp:3876
			EntityId lCrashedIntoEntityID;

			// BrnVehicleManager.cpp:3877
			EntityId lRaceCarEntityID;

			CgsSceneManager::EntityId::Set(/* parameters */);
			CgsSceneManager::EntityId::Set(/* parameters */);
		}
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	ExternallySimulatedBody::SetTransform(/* parameters */);
	VehicleAttribs::VehicleBaseAttribs::GetMass(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:8964
void BrnPhysics::Vehicle::VehicleManager::UpdateVehicleImpacts(const VehicleInputInterface::ImpactEventQueue *  lpEventQueue, VehicleOutputInterface *  lpVehicleOutputInterface, VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleManagerOutputInterface *  lpVehicleManagerOutputInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:8966
		int32_t liEventIndex;

		{
			// BrnVehicleManager.cpp:8971
			const const ImpactEvent & lEvent;

			CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::GetEvent(/* parameters */);
		}
		{
			// BrnVehicleManager.cpp:8976
			bool lbPlayerIsAggressor;

			// BrnVehicleManager.cpp:8978
			EActiveRaceCarIndex leNetworkActiveRaceCarIndex;

			// BrnVehicleManager.cpp:9004
			bool lbRegisterThisImpact;

			// BrnVehicleManager.cpp:9006
			bool lbNewImpactIsSlam;

			// BrnVehicleManager.cpp:9008
			bool lbCurrentImpactIsSlam;

			// BrnVehicleManager.cpp:9010
			bool lbNewImpactIsShunt;

			HasRaceCarHadRecentImpact(/* parameters */);
			{
				// BrnVehicleManager.cpp:9091
				BrnGameState::GameStateModuleIO::GameEventQueue * lpGameEventQueue;

				// BrnVehicleManager.cpp:9093
				VehicleImpactEvent lVehicleImpactEvent;

				HasRaceCarHadRecentImpact(/* parameters */);
				CgsContainers::BitArray<8u>::SetBitToBool(/* parameters */);
			}
		}
	}
	{
		// BrnVehicleManager.cpp:9021
		int8_t liCurrentImpactPriority;

		// BrnVehicleManager.cpp:9022
		int8_t liNewImpactPriority;

	}
	CgsContainers::BitArray<8u>::UnSetBit(/* parameters */);
	{
		// BrnVehicleManager.cpp:9060
		int8_t liAwardedAggressor;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VehiclePhysics::RemoveSlam(/* parameters */);
	VehiclePhysics::ShuntEffect::SetLife(/* parameters */);
	VehiclePhysics::SlamEffect::Clear(/* parameters */);
	rw::math::vpu::Vector3Plus::SetZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

// BrnVehicleManager.cpp:6322
void BrnPhysics::Vehicle::VehicleManager::HandleRaceCarRaceCarContact(RaceCarContact  lContact, VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, VehicleManagerOutputInterface *  lpManagerOutputInterface, DeformationInputInterface *  lpDeformationInterface, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:6327
		int32_t liIndexA;

		// BrnVehicleManager.cpp:6328
		int32_t liIndexB;

		// BrnVehicleManager.cpp:6346
		BrnPhysics::Vehicle::VehicleManager::RaceCarResponseInfo lInfo;

		// BrnVehicleManager.cpp:6416
		bool lbPlayerInvolvedInImpact;

		// BrnVehicleManager.cpp:6594
		BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCarPhysicsA;

		// BrnVehicleManager.cpp:6595
		BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCarPhysicsB;

		// BrnVehicleManager.cpp:6596
		VecFloat lfMinA;

		// BrnVehicleManager.cpp:6597
		VecFloat lfMinB;

		// BrnVehicleManager.cpp:6598
		VecFloat lfContactDistanceA;

		// BrnVehicleManager.cpp:6599
		VecFloat lfContactDistanceB;

	}
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	VehiclePhysics::RecordRaceCarContact(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::fpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::GetVecFloat_Zero(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	rw::math::vpu::AngleBetweenVectors(/* parameters */);
	rw::math::vpu::ACos(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	{
	}
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sub(/* parameters */);
	vec_madd(/* parameters */);
	vec_nmsub(/* parameters */);
	rw::math::fpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sra(/* parameters */);
	{
	}
	{
	}
	{
	}
	vec_abs(/* parameters */);
	vec_madd(/* parameters */);
	vec_rsqrte(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		// BrnVehicleManager.cpp:6422
		BrnGameState::GameStateModuleIO::GameEventQueue * lpGameEventQueue;

		{
			// BrnVehicleManager.cpp:6440
			VehicleImpactEvent lVehicleImpactEvent;

		}
	}
	{
		// BrnVehicleManager.cpp:6510
		VehicleImpactEvent lVehicleImpactEvent;

		// BrnVehicleManager.cpp:6511
		BrnGameState::GameStateModuleIO::GameEventQueue * lpGameEventQueue;

		// BrnVehicleManager.cpp:6513
		int32_t liPlayerIndex;

		// BrnVehicleManager.cpp:6514
		int32_t liOtherIndex;

		// BrnVehicleManager.cpp:6541
		AggressiveDrivingFlags * lpAggressiveDrivingFlags;

		CgsContainers::BitArray<8u>::SetBitToBool(/* parameters */);
		CgsContainers::BitArray<8u>::SetBit(/* parameters */);
		VehicleOutputInterface::GetAggressiveDrivingFlags(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	ExternallySimulatedBody::GetTransform(/* parameters */);
	VehiclePhysics::IsBeingSlamedOrShuntedByRaceCar(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	VehiclePhysics::IsBeingSlamedOrShuntedByRaceCar(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	VehiclePhysics::SetTimeSinceLastRaceCarContact(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	VehicleOutputInterface::GetGameEventQueue(/* parameters */);
	{
		// BrnVehicleManager.cpp:6428
		VehicleImpactEvent lVehicleImpactEvent;

	}
	VehiclePhysics::RecordRaceCarContact(/* parameters */);
	VehiclePhysics::IsBeingSlamedOrShunted(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	{
		// BrnVehicleManager.cpp:6400
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:6397
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	VehiclePhysics::IsBeingSlamedOrShunted(/* parameters */);
	CgsContainers::BitArray<8u>::UnSetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnVehicleManager.cpp:4432
void BrnPhysics::Vehicle::VehicleManager::ProcessContactSpies(const ContactSpyData *  lpContactSpies, VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, VehicleManagerOutputInterface *  lpManagerOutputInterface, DeformationInputInterface *  lpDeformationInterface, DeformationManager *  lpDeformationManager, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:4434
		const ContactSpyData::RaceCarContactQueue * lpRaceCarContactSpyQueue;

		// BrnVehicleManager.cpp:4435
		int32_t liNumContacts;

		// BrnVehicleManager.cpp:4436
		int32_t i;

	}
	ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300>::GetLength(/* parameters */);
	{
		// BrnVehicleManager.cpp:4446
		const const RaceCarContact & lSpy;

		// BrnVehicleManager.cpp:4450
		uint8_t luOwnerB;

		// BrnVehicleManager.cpp:4471
		BrnPhysics::Vehicle::RaceCarPhysics * lpCarA;

		CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::RaceCarContact>::GetEvent(/* parameters */);
		CgsSceneManager::EntityId::operator std::uint32_t(/* parameters */);
	}
	RaceCarPhysics::GetNormalCausingCrash(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	SimpleVehiclePhysics::SetFatallyCrashing(/* parameters */);
}

// BrnVehicleManager.cpp:7740
void BrnPhysics::Vehicle::VehicleManager::HandleRaceCarTrafficCarPotentialContact(PotentialContact  lContact, VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, VehicleManagerOutputInterface *  lpManagerOutputInterface, DeformationInputInterface *  lpDeformationInterface, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:7742
		EntityId lRaceCarEntityID;

		// BrnVehicleManager.cpp:7743
		EntityId lTrafficEntityID;

		// BrnVehicleManager.cpp:7744
		Vector3 lPointOnRaceCar;

		// BrnVehicleManager.cpp:7745
		Vector3 lPointOnTraffic;

		// BrnVehicleManager.cpp:7746
		VecFloat lvfSlamMagnitude;

		// BrnVehicleManager.cpp:7747
		uint16_t leActiveRaceCarIndex;

		// BrnVehicleManager.cpp:7748
		uint16_t lu16TrafficCarIndex;

		// BrnVehicleManager.cpp:7758
		EntityId lPhysTrafficId;

		// BrnVehicleManager.cpp:7759
		EntityId lPhysRaceCarId;

		// BrnVehicleManager.cpp:7767
		BrnPhysics::Vehicle::RaceCarPhysics * lpRaceCar;

		// BrnVehicleManager.cpp:7769
		const PhysicalTrafficVehicle * lpTrafficVehicle;

		// BrnVehicleManager.cpp:7770
		const BrnPhysics::Vehicle::SimpleVehiclePhysics * lpTrafficPhysics;

		// BrnVehicleManager.cpp:7807
		uint32_t lxImpactResponseFlags;

		// BrnVehicleManager.cpp:7830
		bool lbRaceCarIsPlayer;

	}
	CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
	PhysicalTrafficManager::GetPhysicsEntityIDFromGlobalEntityID_Safe(/* parameters */);
	CgsSceneManager::VolumeInstanceId::GetEntityId(/* parameters */);
	CgsSceneManager::EntityId::Set(/* parameters */);
	GetPhysicsEntityIDFromGlobalEntityID(/* parameters */);
	CgsSceneManager::EntityId::SetOwner(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	PhysicalTrafficManager::GetTrafficVehicle(/* parameters */);
	PhysicalTrafficVehicle::GetPhysics(/* parameters */);
	{
		// BrnVehicleManager.cpp:7897
		bool lbCrashedByChecking;

		PhysicalTrafficVehicle::HasBeenChecked(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
	}
	{
		CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	}
	PhysicalTrafficManager::GetPhysicsEntityIDFromGlobalEntityID(/* parameters */);
	CgsSceneManager::EntityId::Set(/* parameters */);
	{
	}
	{
		// BrnVehicleManager.cpp:7954
		const VecFloat KVF_CORNER_IMPACT_THRESHOLD;

		// BrnVehicleManager.cpp:7955
		Matrix44Affine lCarTransform;

		// BrnVehicleManager.cpp:7956
		VecFloat lvfXDist;

		// BrnVehicleManager.cpp:7957
		VecFloat lvfZDist;

		// BrnVehicleManager.cpp:7958
		Vector3 lWorldOffset;

		// BrnVehicleManager.cpp:7959
		const const AxisAlignedBox & lCarAABB;

		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		SimpleVehiclePhysics::GetDeformableBBox(/* parameters */);
		rw::math::vpu::operator-<VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		{
			// BrnVehicleManager.cpp:7974
			const const AxisAlignedBox & lTrafficAABB;

			ExternallySimulatedBody::GetTransform(/* parameters */);
			rw::math::vpu::operator-(/* parameters */);
			SimpleVehiclePhysics::GetDeformableBBox(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			rw::math::vpu::operator-<VectorAxisZ>(/* parameters */);
			rw::math::vpu::Dot(/* parameters */);
			rw::math::vpu::Dot(/* parameters */);
			rw::math::vpu::operator>(/* parameters */);
			rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
			rw::math::vpu::operator>(/* parameters */);
		}
	}
	{
		// BrnVehicleManager.cpp:7906
		Matrix44Affine lCheckerTransform;

		// BrnVehicleManager.cpp:7907
		Vector3 lJoiningVector;

		// BrnVehicleManager.cpp:7908
		VecFloat lvfCosAngleToTraffic;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::GetVecFloat_Half(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		CgsPhysics::RigidBodyId::GetEntityId(/* parameters */);
	}
	{
	}
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsSceneManager::SceneManagerIO::PotentialContact::SwapEntityOrder(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	ExternalPhysicsBody::DampenAngularVelocity(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	std(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	vec_andc(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_sub(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	vec_sr(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	std(/* parameters */);
	vec_sub(/* parameters */);
	vec_sra(/* parameters */);
	vec_add(/* parameters */);
	vec_andc(/* parameters */);
	vec_sel(/* parameters */);
	vec_madd(/* parameters */);
	vec_ctf(/* parameters */);
	vec_madd(/* parameters */);
	std(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_andc(/* parameters */);
	vec_sel(/* parameters */);
	vec_nmsub(/* parameters */);
	vec_madd(/* parameters */);
	vec_ctu(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_sel(/* parameters */);
	vec_cmpeq(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_and(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_add(/* parameters */);
	vec_madd(/* parameters */);
	vec_cmpgt(/* parameters */);
	vec_add(/* parameters */);
	vec_cts(/* parameters */);
	vec_ctf(/* parameters */);
	vec_sub(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_madd(/* parameters */);
	vec_sel(/* parameters */);
	vec_sel(/* parameters */);
	{
		// BrnVehicleManager.cpp:7833
		TrafficCheckingEvent lEvent;

	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	CgsSceneManager::EntityId::SetEntityIndex(/* parameters */);
}

// BrnVehicleManager.cpp:9512
void BrnPhysics::Vehicle::VehicleManager::HandleCrashPredictionForRaceCarAndTrafficVehicle(BrnPhysics::Vehicle::PotentialContactAverager *  lpContactPairAverager, float32_t  lfSimTimerTimeStep, VehicleOutputInterface *  lpVehicleOutputInterface, VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleManagerOutputInterface *  lpVehicleManagerOutputInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:9520
		uint32_t luIndex;

		// BrnVehicleManager.cpp:9521
		PotentialContact lAveragedContact;

	}
}

// BrnVehicleManager.cpp:9468
void BrnPhysics::Vehicle::VehicleManager::DoCrashPredictionForRaceCarAndTrafficVehicle(BrnPhysics::Vehicle::PotentialContactAverager *  lpContactPairAverager, PotentialContact *  lpPotentialContact, float32_t  lfSimTimerTimeStep, VehicleOutputInterface *  lpVehicleOutputInterface, VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleManagerOutputInterface *  lpVehicleManagerOutputInterface, DeformationInputInterface *  lpDeformationInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::IsValid(/* parameters */);
	{
		// BrnVehicleManager.cpp:9477
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
}

// BrnVehicleManager.cpp:2876
void BrnPhysics::Vehicle::VehicleManager::DoCrashPrediction(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, float32_t  lfSimTimerTimeStep, const VehicleInputInterface *  lpInputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleManagerOutputInterface *  lpVehicleManagerOutputInterface, DeformationInputInterface *  lpDeformationInterface, PotentialContactInterface *  lpPotentialContactQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:2887
		PotentialContact lContact;

		// BrnVehicleManager.cpp:2888
		int32_t liContIndex;

		// BrnVehicleManager.cpp:2889
		PotentialContactAverager lContactPairAverager;

	}
	PotentialContactAverager(/* parameters */);
	ClearCachedCarCarPrediction(/* parameters */);
	PhysicalTrafficManager::AllocateInternalBuffers(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::ContactSpy::DiscardedContact>::Clear(/* parameters */);
	{
		// BrnVehicleManager.cpp:2906
		uint8_t luOwnerA;

		// BrnVehicleManager.cpp:2907
		uint8_t luOwnerB;

	}
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(/* parameters */);
	{
		// BrnVehicleManager.cpp:2929
		int32_t liEvent;

		// BrnVehicleManager.cpp:2931
		const PotentialContactInterface::CustomPotentialContactQueue * lpRaceCarTrafficContacts;

		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:3013
		int32_t liEvent;

		// BrnVehicleManager.cpp:3016
		const PotentialContactInterface::CustomPotentialContactQueue * lpTrafficWithWorldContacts;

		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetEvent(/* parameters */);
	}
	PhysicalTrafficManager::BridgeArticulatedJointRequestsToSim(/* parameters */);
	PhysicalTrafficManager::DeallocateInternalBuffers(/* parameters */);
	{
		// BrnVehicleManager.cpp:2974
		const VehicleInputInterface::InTriangleCacheInterface * lpCacheInterface;

		// BrnVehicleManager.cpp:2975
		const Triangle4 * lpCachedTriangles;

		// BrnVehicleManager.cpp:2976
		int32_t liNumCachedTri4s;

		// BrnVehicleManager.cpp:2978
		Vector3 lLineStart;

		// BrnVehicleManager.cpp:2979
		Vector3 lLineEnd;

		// BrnVehicleManager.cpp:2981
		const VecFloat KVF_LINE_TEST_START_DIST;

		// BrnVehicleManager.cpp:2986
		bool lbIntersections;

		// BrnVehicleManager.cpp:2987
		VecFloat lvfSurfaceTag;

		// BrnVehicleManager.cpp:2988
		Vector4 lNormal;

		// BrnVehicleManager.cpp:2989
		VecFloat lvfMinLineParam;

		// BrnVehicleManager.cpp:3003
		const VecFloat KVF_NORMAL_DOT_THRESHOLD;

		VehicleInputInterface::GetTriangleCacheInterface(/* parameters */);
		CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetCachedTriangles(/* parameters */);
		CgsSceneManager::SceneManagerIO::TriangleCacheInterface::GetNumCachedTriangleBatches(/* parameters */);
		CgsSceneManager::TriangleCacheManager::GetNumTriangleBatchesForCachedObject(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::GetVecFloat_Two(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:2909
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnVehicleManager.cpp:2910
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

// BrnVehicleManager.cpp:2780
void BrnPhysics::Vehicle::VehicleManager::ProcessAftertouchEvents(int32_t  liRaceCarIndex, BrnGameState::GameStateModuleIO::GameEventQueue *  lpOutputQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:2785
		float32_t lfOutSpin;

		// BrnVehicleManager.cpp:2787
		AftertouchEvent lAftertouchEvent;

		BrnPlayerDriverControls::GetAftertouchValues(/* parameters */);
		VehicleDriver::GetControls(/* parameters */);
		{
			// BrnVehicleManager.cpp:2801
			JustBouncedEvent lBouncedEvent;

		}
	}
	{
		// BrnVehicleManager.cpp:2815
		JustAppliedExtraSpinEvent lSpunEvent;

	}
}

// BrnVehicleManager.cpp:2439
void BrnPhysics::Vehicle::VehicleManager::UpdateVehiclePhysics(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, BrnUpdateSet  lUpdateSet, Time &  lCurrentTime, float32_t  lfSimTimerTimeStep, float32_t  lfGameTimerTimeStep, const VehicleInputInterface *  lpInputInterface, VehicleOutputInterface *  lpVehicleOutputInterface, VehicleOutputRequestInterface *  lpRequestOutputInterface, VehicleManagerOutputInterface *  lpVehicleManagerOutputInterface, DeformationInputInterface *  lpDeformationInterface, bool  lbIsOnlineGameMode, EntityId  lWorldEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnVehicleManager.cpp:2513
		int32_t liRaceCar;

		// BrnVehicleManager.cpp:2571
		int32_t i;

	}
	CgsSystem::Time::operator=(/* parameters */);
	CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	PhysicalTrafficManager::ResetAboveGroundTestResults(/* parameters */);
	{
		// BrnVehicleManager.cpp:2585
		bool _lbOverrideForceFrozen;

		// BrnVehicleManager.cpp:2586
		bool lbForceFreezePlayerCar;

		VehiclePhysics::SetForceFrozen(/* parameters */);
	}
	CgsContainers::BitArray<8u>::GetFirstNonZeroBit(/* parameters */);
	{
		// BrnVehicleManager.cpp:2684
		Vector3 lPlayerPos;

	}
	VehicleManagerOutputInterface::SetPlayerWheelFFSpring(/* parameters */);
	{
		// BrnVehicleManager.cpp:2539
		Vector3 lCarDir;

		// BrnVehicleManager.cpp:2540
		Vector3 lCarVel;

		rw::math::vpu::Magnitude(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		ExternallySimulatedBody::GetTransform(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::Dot(/* parameters */);
	}
	{
	}
	PhysicalTrafficManager::GetTrafficVehicle(/* parameters */);
	PhysicalTrafficManager::GetTrafficVehicle(/* parameters */);
	SimpleVehiclePhysics::ResetAboveGroundTestResult(/* parameters */);
	BrnWorld::CollisionTag::Construct(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	{
	}
	SimpleVehiclePhysics::ResetAboveGroundTestResult(/* parameters */);
	AboveGroundTestResult::Reset(/* parameters */);
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	BrnWorld::CollisionTag::Construct(/* parameters */);
	CgsContainers::BitArray<8u>::IsBitSet(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	VehiclePhysics::OverrideWheelAngle(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::DegToRad(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	VehiclePhysics::GetMaxSteeringAngle(/* parameters */);
	VehiclePhysics::SetPackedSteeringAngle(/* parameters */);
	rw::math::vpu::Vector4::SetX(/* parameters */);
	{
	}
	{
		// BrnVehicleManager.cpp:2593
		bool lbAftertouchIsForceAdditive;

		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
	CgsContainers::BitArray<8u>::GetNextNonZeroBit(/* parameters */);
	VehiclePhysics::OverrideWheelAngle(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::DegToRad(/* parameters */);
	VehiclePhysics::GetMaxSteeringAngle(/* parameters */);
	VehiclePhysics::SetPackedSteeringAngle(/* parameters */);
	rw::math::vpu::Vector4::SetX(/* parameters */);
	VehiclePhysics::RemoveSlam(/* parameters */);
	{
		// BrnVehicleManager.cpp:2618
		Inertia lInertia;

		// BrnVehicleManager.cpp:2619
		Vector3 lInertialTensor;

		// BrnVehicleManager.cpp:2620
		Vector3 lBoxExtent;

		// BrnVehicleManager.cpp:2621
		VecFloat lfMass;

		// BrnVehicleManager.cpp:2622
		VecFloat lfOne;

		rw::math::vpu::operator/(/* parameters */);
	}
}

// _built-in_
namespace :: {
	// BrnVehicleManager.cpp:85
	const float_t KF_SLAM_DECAY_RATE;

	// BrnVehicleManager.cpp:88
	const float_t KF_CULL_CONTACT_PADDING;

	// BrnVehicleManager.cpp:91
	const const char *[9] KPC_IMPACT_NAMES_PLAYER_WINS;

	// BrnVehicleManager.cpp:101
	const const char *[9] KPC_IMPACT_NAMES_PLAYER_LOSES;

	// BrnVehicleManager.cpp:112
	const int8_t[9] KI_IMPACT_PRIORITIES;

	// BrnVehicleManager.cpp:124
	const float32_t KF_AI_SLAM_ON_PLAYER_SCALE;

	// BrnVehicleManager.cpp:125
	const float32_t KF_AI_SHUNT_ON_PLAYER_SCALE;

	// BrnVehicleManager.cpp:128
	const float32_t KF_PLAYER_GRIND_SECONDS_TO_TRIGGER_TAKEDOWN;

	// BrnVehicleManager.cpp:129
	const float32_t KF_AI_GRIND_SECONDS_TO_TRIGGER_TAKEDOWN;

	// BrnVehicleManager.cpp:130
	const float32_t KF_GRIND_SECONDS_TO_MESSAGE;

	// BrnVehicleManager.cpp:131
	const float32_t KF_GRIND_TAKEDOWN_NORMAL_STRESS;

	// BrnVehicleManager.cpp:132
	const float32_t KF_MIN_GRIND_SPEED;

	// BrnVehicleManager.cpp:133
	const float32_t KF_RUBBING_SECONDS_TO_MESSAGE;

	// BrnVehicleManager.cpp:135
	const float32_t KF_TRAFFIC_CHECK_TAKEDOWN_NORMAL_STRESS;

	// BrnVehicleManager.cpp:137
	const float32_t KF_PLAYER_RECENT_STEERING_DAMPING_FACTOR;

	// BrnVehicleManager.cpp:138
	const float32_t KF_STEERING_UPDATE_STEP;

	// BrnVehicleManager.cpp:139
	const float32_t KF_CRASH_DEBOUNCE_TIME;

	// BrnVehicleManager.cpp:142
	const float32_t KF_MAX_PITCH_ROLL_ANGLE;

	// BrnVehicleManager.cpp:143
	const float32_t KF_COS_MAX_PITCH_ROLL_ANGLE;

	// BrnVehicleManager.cpp:146
	const VecFloat KVF_MAX_SHUNT_SPEED_INCREASE;

	// BrnVehicleManager.cpp:148
	const float32_t KF_MIN_SPEED_DIFFERENCE_FOR_STATIONARY_TAKEDOWN;

	// BrnVehicleManager.cpp:149
	const float32_t KF_MAX_VICIM_SPEED_FOR_STATIONARY_TAKEDOWN;

	// BrnVehicleManager.cpp:150
	const float32_t KF_MIN_AGGRESSOR_SPEED_FOR_STATIONARY_TAKEDOWN;

	// BrnVehicleManager.cpp:152
	const float32_t KR_ERSUIT_TO_MAX_STREGNTH_TIME_STEP;

	// BrnVehicleManager.cpp:154
	const VecFloat KF_VALID_TAKEDOWN_CONTACT_DISTANCE;

	// BrnVehicleManager.cpp:156
	VecFloat KVF_SHOW_TIME_PLAYER_SLAM_POWER;

	// BrnVehicleManager.cpp:158
	VecFloat KVF_SHOW_TIME_TRAFFIC_SLAM_POWER;

	// BrnVehicleManager.cpp:179
	const float_t KF_MIN_NUDGE_SPEED;

	// BrnVehicleManager.cpp:180
	const float_t KF_MIN_SHUNT_SPEED;

	// BrnVehicleManager.cpp:181
	const float_t KF_FATAL_SHUNT_SPEED;

	// BrnVehicleManager.cpp:182
	const float_t KF_MAX_SHUNT_ANGLE;

	// BrnVehicleManager.cpp:184
	const float_t KF_MIN_TRADING_PAINT_SPEED;

	// BrnVehicleManager.cpp:185
	const float_t KF_FATAL_SLAM_SPEED;

	// BrnVehicleManager.cpp:186
	const float_t KF_SLAM_EFFECT_MIN_MAGNITUDE;

	// BrnVehicleManager.cpp:187
	const float_t KF_SLAM_EFFECT_MAX_MAGNITUDE;

	// BrnVehicleManager.cpp:188
	const float_t KF_MIN_SHUNT_MAGNITUDE;

	// BrnVehicleManager.cpp:189
	const float_t KF_MAX_SHUNT_MAGNITUDE;

	// BrnVehicleManager.cpp:190
	const float_t KF_MIN_SHUNT_BACKWARDS_MAGNITUDE;

	// BrnVehicleManager.cpp:191
	const float_t KF_MAX_SHUNT_BACKWARDS_MAGNITUDE;

	// BrnVehicleManager.cpp:192
	const float_t KF_MAX_SLAM_CLOSING_SPEED;

	// BrnVehicleManager.cpp:195
	const float32_t KF_NETWORK_SLAM_DURATION_FROM_SHUNT;

	// BrnVehicleManager.cpp:196
	const float32_t KF_NETWORK_SLAM_RECOVERY_TIME_FROM_SHUNT;

	// BrnVehicleManager.cpp:199
	const float_t KF_ONLINE_SLAM_EFFECT_MIN_MAGNITUDE;

	// BrnVehicleManager.cpp:200
	const float_t KF_ONLINE_SLAM_EFFECT_MAX_MAGNITUDE;

	// BrnVehicleManager.cpp:201
	const float_t KF_ONLINE_MIN_SHUNT_MAGNITUDE;

	// BrnVehicleManager.cpp:202
	const float_t KF_ONLINE_MAX_SHUNT_MAGNITUDE;

	// BrnVehicleManager.cpp:203
	const float_t KF_ONLINE_MIN_SHUNT_BACKWARDS_MAGNITUDE;

	// BrnVehicleManager.cpp:204
	const float_t KF_ONLINE_MAX_SHUNT_BACKWARDS_MAGNITUDE;

	// BrnVehicleManager.cpp:205
	const float_t KF_ONLINE_MAX_SLAM_CLOSING_SPEED;

	// BrnVehicleManager.cpp:207
	const float32_t KI_ONLINE_SLAM_MIN_SECONDARY_SHUNT_SPEED;

	// BrnVehicleManager.cpp:208
	const float32_t KI_ONLINE_SLAM_MAX_SECONDARY_SHUNT_SPEED;

	// BrnVehicleManager.cpp:209
	const float32_t KI_ONLINE_SLAM_MAX_SECONDARY_SHUNT_MAGNITUDE;

	// BrnVehicleManager.cpp:211
	const float_t KF_FATAL_HIT_CRASHING_CAR_SPEED;

	// BrnVehicleManager.cpp:213
	const float_t KF_MAX_HEAD_TO_HEAD_ANGLE;

	// BrnVehicleManager.cpp:214
	const float_t KF_MIN_HEAD_TO_HEAD_SPEED;

	// BrnVehicleManager.cpp:215
	const float_t KF_MIN_HEAD_TO_HEAD_INDIVIDUAL_SPEED;

	// BrnVehicleManager.cpp:217
	const float_t KF_TBONE_TAKEDOWN_MAX_ANGLE;

	// BrnVehicleManager.cpp:218
	const float_t KF_TBONE_TAKEDOWN_SPEED;

	// BrnVehicleManager.cpp:220
	const uint32_t KU_POTENTIAL_CONTACT_AVERAGER_MAX_CONTACTS = 20;

	// BrnVehicleManager.cpp:223
	const float32_t KF_WHEEL_ANGLE_IN_CAR_SELECT_SCALE;

	// BrnVehicleManager.cpp:226
	const float_t KF_CARSTAT_STRENGTH_SLAMMAX;

	// BrnVehicleManager.cpp:227
	const float_t KF_CARRSTAT_STRENGTH_SLAMMIN;

	// BrnVehicleManager.cpp:228
	const float_t KF_CARSTAT_STRENGTH_SHUNTMAX;

	// BrnVehicleManager.cpp:229
	const float_t KF_CARRSTAT_STRENGTH_SHUNTMIN;

	// BrnVehicleManager.cpp:231
	const float_t KF_CARSTAT_STRENGTH_BEINGSLAMMEDMAX;

	// BrnVehicleManager.cpp:232
	const float_t KF_CARSTAT_STRENGTHB_EINGSLAMMEDMIN;

	// BrnVehicleManager.cpp:233
	const float_t KF_CARSTAT_STRENGTHB_EINGSHUNTEDMAX;

	// BrnVehicleManager.cpp:234
	const float_t KF_CARRSTAT_STRENGTH_BEINGSHUNTEDMIN;

	// BrnVehicleManager.cpp:237
	const float32_t KF_STUCK_LINETEST_LINEARCUTOFF;

	// BrnVehicleManager.cpp:238
	const float32_t KF_STUCK_LINETEST_ANGULARCUTOFF;

	// BrnVehicleManager.cpp:241
	const float32_t KF_MAX_TRAFFIC_CHECK_TO_TAKEDOWN_TIME;

	// BrnVehicleManager.cpp:244
	const float32_t KF_CARTYPE_AGGRESSION_MODIFIER_SLAMS;

	// BrnVehicleManager.cpp:245
	const float32_t KF_CARTYPE_AGGRESSION_MODIFIER_SHUNTS;

	// BrnVehicleManager.cpp:247
	const float32_t KI_REMOTE_CONTROL_DAMPENING;

	// BrnVehicleManager.cpp:249
	const int32_t KI_MAX_IMPACT_EVENT_COUNT = 32;

	// BrnVehicleManager.cpp:304
	extern uint8_t[256] gauScratch0;

	// BrnVehicleManager.cpp:305
	extern uint8_t[256] gauScratch1;

	// BrnVehicleManager.cpp:4569
	const VecFloat KVF_MAX_SHOW_TIME_SHUNT_SPEED_INCREASE;

	// BrnVehicleManager.cpp:4783
	const VecFloat KVF_MIN_SLAM_COS_ANGLE;

	// BrnVehicleManager.cpp:4784
	const float32_t KF_SLAM_POWER_TO_OVERRIDE_GRIND;

	// BrnVehicleManager.cpp:4785
	const uint8_t KU8_FRAMES_SINCE_LAST_GRIND_TO_DISCARD_SLAMS = 30;

	// BrnVehicleManager.cpp:5153
	const VecFloat KF_TBONE_EDGE_DISTANCE;

	// BrnVehicleManager.cpp:5248
	extern VecFloat KF_VERTICAL_TAKEDOWN_BOX_OVERLAP;

	// BrnVehicleManager.cpp:5249
	extern VecFloat KF_VERTICAL_TAKEDOWN_AIR_TIME;

	// BrnVehicleManager.cpp:5703
	const float32_t KF_MIN_COMBINED_SPEED_FOR_SPECIAL_IMPACTS;

	// BrnVehicleManager.cpp:5762
	const VecFloat KVF_TIME_TO_ALLOW_PLAYER_SLAMMING_AI_INTO_AI;

	// BrnVehicleManager.cpp:5763
	const VecFloat KVF_NON_ATTACTED_STRENGTH;

	// BrnVehicleManager.cpp:5937
	const VecFloat KVF_MIN_Y_NORMAL_FOR_ROLL_CRASH;

	// BrnVehicleManager.cpp:6177
	VecFloat KVF_CAR_SCALE;

	// BrnVehicleManager.cpp:7412
	const VecFloat KVF_WALL_NORMAL_DOT_THRESHOLD;

	// BrnVehicleManager.cpp:8020
	const VecFloat KVF_MAX_MASS_FOR_CHECK_TRAFFIC_CALC;

	// BrnVehicleManager.cpp:8050
	const VecFloat KVF_SPEED_CHANGE_TO_ALLOW_CHECK_TRAFFIC;

	// BrnVehicleManager.cpp:8313
	uint8_t KU8_FRAMES_TO_DEBOUNCE_GRINDING;

	// BrnVehicleManager.cpp:8314
	uint8_t KU8_FRAMES_TO_DEBOUNCE_GRINDING_TAKEDOWN;

	// BrnVehicleManager.cpp:8835
	const VecFloat KVF_MIN_SHUNT_MASS_FACTOR;

	// BrnVehicleManager.cpp:8836
	const VecFloat KVF_MAX_SHUNT_MASS_FACTOR;

}

// BrnVehicleManager.cpp:259
// BrnVehicleManager.cpp:260
// BrnVehicleManager.cpp:261
// BrnVehicleManager.cpp:262
// BrnVehicleManager.cpp:263
// BrnVehicleManager.cpp:264
// BrnVehicleManager.cpp:265
// BrnVehicleManager.cpp:266
// BrnVehicleManager.cpp:267
// BrnVehicleManager.cpp:268
// BrnVehicleManager.cpp:269
// BrnVehicleManager.cpp:270
// BrnVehicleManager.cpp:271
// BrnVehicleManager.cpp:272
// BrnVehicleManager.cpp:273
// BrnVehicleManager.cpp:274
// BrnVehicleManager.cpp:275
// BrnVehicleManager.cpp:276
// BrnVehicleManager.cpp:277
// BrnVehicleManager.cpp:278
// BrnVehicleManager.cpp:279
// BrnVehicleManager.cpp:283
// BrnVehicleManager.cpp:284

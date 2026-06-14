// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnCrashModeScoring.cpp:25
	const float32_t KF_MIN_LINEAR_SPEED;

	// BrnCrashModeScoring.cpp:26
	const float32_t KF_MIN_ANGULAR_SPEED;

	// BrnCrashModeScoring.cpp:28
	const int32_t KI_SCORE_BONUS_PER_CAR_HIT = 750;

	// BrnCrashModeScoring.cpp:29
	const int32_t KI_SCORE_BONUS_PER_VAN_HIT = 2000;

	// BrnCrashModeScoring.cpp:30
	const int32_t KI_SCORE_BONUS_PER_BUS_HIT = 5000;

	// BrnCrashModeScoring.cpp:31
	const int32_t KI_SCORE_BONUS_PER_BIGRIG_HIT = 10000;

	// BrnCrashModeScoring.cpp:32
	const int32_t KI_SCORE_BONUS_PER_CAR_LEAPED;

	// BrnCrashModeScoring.cpp:33
	const int32_t KI_SCORE_BONUS_PER_JUMP_SECOND;

	// BrnCrashModeScoring.cpp:34
	const int32_t KI_SCORE_BONUS_PER_PROP_HIT = 100;

	// BrnCrashModeScoring.cpp:35
	const int32_t KI_SCORE_BONUS_PER_BILLBOARD_HIT = 10000;

	// BrnCrashModeScoring.cpp:36
	const int32_t KI_SCORE_BONUS_FOR_STUNT;

	// BrnCrashModeScoring.cpp:38
	const float32_t KF_DISTANCE_BETWEEN_POSITION_STORES;

	// BrnCrashModeScoring.cpp:40
	const float32_t KF_MIN_TIME_BETWEEN_HITTING_OVERHEAD_SIGNS;

	// BrnCrashModeScoring.cpp:42
	const float32_t KF_PLAYER_INACTIVE_TIME_FOR_MODE_END;

	// BrnCrashModeScoring.cpp:43
	const float32_t KF_TIME_SINCE_LAST_EVENT_FOR_MODE_END;

	// BrnCrashModeScoring.cpp:44
	const float32_t KF_CRASH_BECOMES_INACTIVE_TIME;

	// BrnCrashModeScoring.cpp:47
	const float32_t KF_RESET_COMBO_COUNTER_LATITUDE_TIME;

	// BrnCrashModeScoring.cpp:50
	const float32_t KF_RESET_COMBO_GRACE_PERIOD;

	// BrnCrashModeScoring.cpp:53
	const CgsID K_ID_COMPACT = [0, 0, 0, 0, 112, 54, 0, 0];

	// BrnCrashModeScoring.cpp:54
	const CgsID K_ID_ASIAN_SALOON = [0, 0, 0, 0, 152, 112, 0, 0];

	// BrnCrashModeScoring.cpp:55
	const CgsID K_ID_US_SALOON = [0, 0, 0, 0, 210, 214, 0, 0];

	// BrnCrashModeScoring.cpp:56
	const CgsID K_ID_MPV = [0, 0, 0, 0, 254, 51, 192, 0];

	// BrnCrashModeScoring.cpp:57
	const CgsID K_ID_PICKUP = [0, 0, 0, 0, 10, 54, 0, 0];

	// BrnCrashModeScoring.cpp:58
	const CgsID K_ID_STATION_WAGON = [0, 0, 0, 0, 112, 182, 0, 0];

	// BrnCrashModeScoring.cpp:59
	const CgsID K_ID_SUBURBAN_SUV = [0, 0, 0, 0, 176, 122, 208, 0];

	// BrnCrashModeScoring.cpp:60
	const CgsID K_ID_RURAL_SUV = [0, 0, 0, 0, 176, 83, 192, 0];

	// BrnCrashModeScoring.cpp:61
	const CgsID K_ID_TAXI = [0, 0, 0, 0, 115, 107, 192, 0];

	// BrnCrashModeScoring.cpp:62
	const CgsID K_ID_LIMO = [0, 0, 0, 0, 209, 118, 0, 0];

	// BrnCrashModeScoring.cpp:63
	const CgsID K_ID_CITY_BUS = [0, 0, 0, 0, 167, 112, 0, 0];

	// BrnCrashModeScoring.cpp:64
	const CgsID K_ID_TOUR_BUS = [0, 0, 0, 0, 155, 148, 0, 0];

	// BrnCrashModeScoring.cpp:65
	const CgsID K_ID_SMALL_RV = [0, 0, 0, 0, 112, 48, 128, 0];

	// BrnCrashModeScoring.cpp:66
	const CgsID K_ID_COUNTRY_WAGON = [0, 0, 0, 0, 155, 11, 192, 0];

	// BrnCrashModeScoring.cpp:67
	const CgsID K_ID_CHERRY_PICKER = [0, 0, 0, 0, 155, 50, 208, 0];

	// BrnCrashModeScoring.cpp:68
	const CgsID K_ID_SMALL_BOX_TRUCK = [0, 0, 0, 0, 155, 89, 224, 0];

	// BrnCrashModeScoring.cpp:69
	const CgsID K_ID_SMALL_TOW_TRUCK = [0, 0, 0, 0, 155, 128, 240, 0];

	// BrnCrashModeScoring.cpp:70
	const CgsID K_ID_VAN = [0, 0, 0, 0, 47, 148, 0, 0];

	// BrnCrashModeScoring.cpp:71
	const CgsID K_ID_24_RESCUE_VAN = [0, 0, 0, 0, 133, 7, 0, 0];

	// BrnCrashModeScoring.cpp:72
	const CgsID K_ID_CHANNEL_5_VAN = [0, 0, 0, 0, 144, 227, 0, 0];

	// BrnCrashModeScoring.cpp:73
	const CgsID K_ID_REPAIR_VAN = [0, 0, 0, 0, 59, 112, 0, 0];

	// BrnCrashModeScoring.cpp:74
	const CgsID K_ID_MAIL_VAN = [0, 0, 0, 0, 75, 22, 0, 0];

	// BrnCrashModeScoring.cpp:75
	const CgsID K_ID_GILLETTE = [0, 0, 0, 0, 198, 40, 0, 0];

	// BrnCrashModeScoring.cpp:76
	const CgsID K_ID_DIESEL = [0, 0, 0, 0, 86, 64, 0, 0];

	// BrnCrashModeScoring.cpp:87
	const VehicleScoreLookup[24] K_VEHICLE_SCORE_LOOKUP_TABLE;

}

// BrnCrashModeScoring.cpp:79
struct BrnGameState::VehicleScoreLookup {
	// BrnCrashModeScoring.cpp:81
	CgsID midType;

	// BrnCrashModeScoring.cpp:82
	BrnTraffic::VehicleScoreCategory meCategory;

	// BrnCrashModeScoring.cpp:83
	int16_t miScore;

	// BrnCrashModeScoring.cpp:84
	int16_t miMultiplier;

}

// BrnCrashModeScoring.cpp:158
void BrnGameState::CrashModeScoring::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModeScoring.cpp:721
void BrnGameState::CrashModeScoring::DealWithDetachedWheel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModeScoring.cpp:344
void BrnGameState::CrashModeScoring::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModeScoring.cpp:359
void BrnGameState::CrashModeScoring::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModeScoring.cpp:833
void BrnGameState::CrashModeScoring::IsActiveCrash(const BrnGameState::CrashModeScoring::RecentCrash *  lpCrash) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModeScoring.cpp:835
		float32_t lfTimeSinceCrash;

	}
}

// BrnCrashModeScoring.cpp:885
void BrnGameState::CrashModeScoring::GetVehicleScoreData(BrnTraffic::VehicleClass  leVehicleClass, CgsID  lVehicleTypeID, int32_t *  lpiScore, int32_t *  lpiMultiplier, BrnTraffic::VehicleScoreCategory *  lpeCategory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModeScoring.cpp:891
		const int32_t ciNumVehicleScores;

		// BrnCrashModeScoring.cpp:893
		int32_t liIndex;

	}
	{
		// BrnCrashModeScoring.cpp:896
		const VehicleScoreLookup * lpLookup;

	}
	{
		// BrnCrashModeScoring.cpp:942
		char[13] lacBuffer;

	}
}

// BrnCrashModeScoring.cpp:604
void BrnGameState::CrashModeScoring::DealWithComboItem(const CrashComboItemEvent *  lpComboItemEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModeScoring.cpp:656
void BrnGameState::CrashModeScoring::DealWithHitOverheadSign() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModeScoring.cpp:694
void BrnGameState::CrashModeScoring::DealWithPickup(const PickupEvent *  lpPickupEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModeScoring.cpp:707
void BrnGameState::CrashModeScoring::DealWithVehicleLeaping(const VehicleLeaptEvent *  lpLeapEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModeScoring.cpp:763
void BrnGameState::CrashModeScoring::DealWithPlayerBounced(bool  lbOnCar, bool  lbWasGoodImpact, EntityId  lidImpactEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModeScoring.cpp:676
void BrnGameState::CrashModeScoring::DealWithCrashbreakerRequest(const TriggerCrashBreakerEvent *  lpCrashbreakerEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

// BrnCrashModeScoring.cpp:775
void BrnGameState::CrashModeScoring::HasCrashModeEnded(float32_t  lfPadding) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::fpu::IsZero(/* parameters */);
}

// BrnCrashModeScoring.cpp:376
void BrnGameState::CrashModeScoring::ClearData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModeScoring.cpp:410
		int32_t liIndex;

		rw::math::vpu::Vector3::SetZero(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		CgsContainers::RingBuffer<CgsID>::Clear(/* parameters */);
		CgsContainers::RingBuffer<std::uint16_t>::Clear(/* parameters */);
		CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::Clear(/* parameters */);
	}
}

// BrnCrashModeScoring.cpp:133
void BrnGameState::CrashModeScoring::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::Construct(/* parameters */);
	CgsContainers::FixedRingBuffer<uint16_t,8>::Construct(/* parameters */);
	CgsContainers::FixedRingBuffer<CgsID,8>::Construct(/* parameters */);
	CgsContainers::RingBuffer<CgsID>::Clear(/* parameters */);
}

// BrnCrashModeScoring.cpp:619
void BrnGameState::CrashModeScoring::DealWithHitProp(uint16_t  luPropIndex, uint8_t  luPropFlags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModeScoring.cpp:621
		int32_t liPropSetIndex;

	}
	CgsContainers::RingBuffer<std::uint16_t>::operator[](/* parameters */);
	CgsContainers::RingBuffer<std::uint16_t>::Push(/* parameters */);
}

// BrnCrashModeScoring.cpp:734
void BrnGameState::CrashModeScoring::DealWithShowtimeStunt(const BrnGameState::GameStateModuleIO::WorldStuntAction *  lpStuntAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModeScoring.cpp:736
		int32_t liStuntSetIndex;

	}
	CgsContainers::RingBuffer<CgsID>::operator[](/* parameters */);
	CgsContainers::RingBuffer<CgsID>::Push(/* parameters */);
}

// BrnCrashModeScoring.cpp:180
void BrnGameState::CrashModeScoring::Update(const PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, const VehicleOutputInterface::PhysicalTrafficStateQueue *  lpTrafficStateQueue, float32_t  lfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModeScoring.cpp:182
		const RaceCarState * lpPlayerState;

		// BrnCrashModeScoring.cpp:184
		float32_t lfLinearSpeed;

		// BrnCrashModeScoring.cpp:185
		float32_t lfAngularSpeed;

		// BrnCrashModeScoring.cpp:187
		Vector3 lPlayerPosition;

		// BrnCrashModeScoring.cpp:315
		int32_t liWheelIndex;

		// BrnCrashModeScoring.cpp:316
		int32_t liNumAttachedWheels;

	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerRaceCarState(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarCrashing(/* parameters */);
	{
		{
			{
			}
		}
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfo(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfoN(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfo(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfoN(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerInAir(/* parameters */);
	rw::math::vpu::IsZero(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
	rw::math::fpu::IsZero(/* parameters */);
	{
		// BrnCrashModeScoring.cpp:249
		Vector3 lFrameTravelDirection;

		// BrnCrashModeScoring.cpp:251
		float32_t lfDistanceTravelledThisFrame;

		// BrnCrashModeScoring.cpp:264
		Vector3 lLongTermTravelDirection;

		// BrnCrashModeScoring.cpp:266
		bool lbMovingForward;

		rw::math::vpu::operator-(/* parameters */);
		BrnMath::Magnitude2D(/* parameters */);
		rw::math::vpu::Sqrt(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator>=(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
	}
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::Max<float>(/* parameters */);
}

// BrnCrashModeScoring.cpp:809
void BrnGameState::CrashModeScoring::GetRecentCrash(uint16_t  luTrafficCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModeScoring.cpp:811
		int32_t liCrashSetIndex;

		// BrnCrashModeScoring.cpp:812
		int32_t liSetLength;

	}
	CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::operator[](/* parameters */);
}

// BrnCrashModeScoring.cpp:562
void BrnGameState::CrashModeScoring::DealWithScoreForVehicleClass(uint16_t  luTrafficEntityIndex, BrnTraffic::VehicleClass  leVehicleClass, CgsID  lVehicleTypeID, int32_t *  lpiVehicleTypeCrashed, int32_t *  lpiVehicleBaseScore, BrnTraffic::VehicleScoreCategory *  lpeVehicleScoreCategory, int32_t *  lpiScoreMultiplierEarned, int32_t *  lpiComboBonusEarned) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModeScoring.cpp:570
		int32_t liBaseValue;

		// BrnCrashModeScoring.cpp:571
		int32_t liMultiplier;

		// BrnCrashModeScoring.cpp:572
		int32_t liChainBonus;

		// BrnCrashModeScoring.cpp:573
		BrnTraffic::VehicleScoreCategory leCategory;

		// BrnCrashModeScoring.cpp:579
		const BrnGameState::CrashModeScoring::RecentCrash * lpRecentCrash;

	}
}

// BrnCrashModeScoring.cpp:431
void BrnGameState::CrashModeScoring::DealWithHitTrafficCar(EActiveRaceCarIndex  leLocalPlayerActiveRaceCarIndex, EntityId  lEntityIdA, EntityId  lEntityIdB, uint16_t *  lpOutVictimIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModeScoring.cpp:436
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnCrashModeScoring.cpp:437
		uint16_t luTrafficCarIndex;

		// BrnCrashModeScoring.cpp:438
		uint16_t luCrashChainCount;

		// BrnCrashModeScoring.cpp:521
		BrnGameState::CrashModeScoring::RecentCrash lCrash;

	}
	{
		// BrnCrashModeScoring.cpp:477
		const BrnGameState::CrashModeScoring::RecentCrash * lpRecentCrashA;

		// BrnCrashModeScoring.cpp:478
		const BrnGameState::CrashModeScoring::RecentCrash * lpRecentCrashB;

	}
	CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::IsFull(/* parameters */);
	CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::Append(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::Erase(/* parameters */);
}

// BrnCrashModeScoring.cpp:849
void BrnGameState::CrashModeScoring::DealWithRemovedTraffic(const GuiRemovedTrafficEvent *  lpRemovedTrafficEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModeScoring.cpp:851
		int32_t liIndex;

		// BrnCrashModeScoring.cpp:852
		int32_t liEndIndex;

		CgsContainers::Array<uint16_t,25u>::GetLength(/* parameters */);
	}
	{
		// BrnCrashModeScoring.cpp:856
		uint16_t luTrafficCarIndex;

		// BrnCrashModeScoring.cpp:858
		int32_t liCrashSetIndex;

		// BrnCrashModeScoring.cpp:859
		int32_t liSetLength;

		CgsContainers::Array<uint16_t,25u>::GetItem(/* parameters */);
	}
	CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::Array<BrnGameState::CrashModeScoring::RecentCrash,64u>::Erase(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}


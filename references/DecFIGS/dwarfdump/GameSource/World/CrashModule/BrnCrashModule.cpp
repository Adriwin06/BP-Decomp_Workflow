// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnCrashModule.cpp:29
	const float32_t KF_CRASH_TIME_ENDING_THRESHOLD;

	// BrnCrashModule.cpp:30
	const float32_t KF_STANDARD_CRASH_REMAIN_SECONDS;

	// BrnCrashModule.cpp:31
	const float32_t KF_CHECK_CRASH_REMAIN_SECONDS;

	// BrnCrashModule.cpp:32
	const float32_t KF_SPONTANEOUS_CRASH_REMAIN_SECONDS;

	// BrnCrashModule.cpp:33
	const float32_t KF_SLAMMED_CRASH_REMAIN_SECONDS;

	// BrnCrashModule.cpp:35
	const float32_t KF_NETWORK_CRASH_TIMEOUT;

	// BrnCrashModule.cpp:37
	const float32_t KF_PLAYER_CAR_RESET_SECONDS_NORMAL;

	// BrnCrashModule.cpp:38
	const float32_t KF_PLAYER_CAR_RESET_SECONDS_SHORT;

	// BrnCrashModule.cpp:39
	const float32_t KF_AI_CAR_RESET_SECONDS_NORMAL;

	// BrnCrashModule.cpp:40
	const float32_t KF_AI_CAR_RESET_SECONDS_FAST;

	// BrnCrashModule.cpp:43
	const float32_t KF_MAX_CAR_IDLE_TIME_FOR_CRASH_EXTENSION;

	// BrnCrashModule.cpp:44
	const float32_t KF_MIN_SPEED_FOR_CRASH_TIME_EXTENSION;

	// BrnCrashModule.cpp:45
	const float32_t KF_MIN_ANGULAR_SPEED_TIME_EXTENSION;

	// BrnCrashModule.cpp:46
	const int32_t KI_LIMITED_CRASH_TIME_EXTENSIONS = 3;

	// BrnCrashModule.cpp:47
	const int32_t KI_MAX_CRASH_TIME_EXTENSIONS = 10;

	// BrnCrashModule.cpp:48
	const float32_t KF_TIME_EXTENSION_SECONDS;

	// BrnCrashModule.cpp:49
	const float32_t KF_PLAYER_TOTALLED_CRASH_TIME;

	// BrnCrashModule.cpp:51
	const float32_t KF_MIN_TRAFFIC_OFFSCREEN_TIME_FOR_CLEARUP;

	// BrnCrashModule.cpp:53
	const float32_t KF_PLAYER_SHOWTIME_CAR_RESET_SECONDS;

	// BrnCrashModule.cpp:1773
	const VecFloat KVF_DIST_TO_ALLOW_CLEANUP_BEHIND;

	// BrnCrashModule.cpp:1774
	const VecFloat KVF_MIN_DIST_TO_RESPORN_AI;

	// BrnCrashModule.cpp:1775
	const VecFloat KVF_MIN_DIST_TO_RESPORN_AI_SQ;

	// BrnCrashModule.cpp:1776
	const float32_t KF_MAXIMUM_CRASH_TIME;

}

// BrnCrashModule.cpp:693
using BrnGameState::GameStateModuleIO;

// BrnCrashModule.cpp:77
void BrnWorld::RaceCarCrash::Construct(VolumeInstanceId  lRaceCarVolumeInstanceId, float32_t  lfSecondsBeforeClearup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModule.cpp:172
void BrnWorld::RaceCarCrash::GetOwner() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModule.cpp:192
void BrnWorld::RaceCarCrash::SetSecondsBeforeCleanup(float32_t  lfSeconds) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModule.cpp:106
void BrnWorld::RaceCarCrash::Tick(float32_t  lfSimTimeStep, const InputBuffer_PreScene::ActiveRaceCarInterface *  lpActiveRaceCarInterface, bool  lbPlayerPressingBoost, int32_t  liMaxExtensions, bool  lbExtensionsAllowed, bool  lbIsPlayerCrash, bool  lbIsInAGameMode, bool *  lpbNeedToSendCrashFinishingMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:108
		float32_t lfTimeBeforeTick;

		// BrnCrashModule.cpp:109
		bool lbEndThresholdPassedThisFrame;

		// BrnCrashModule.cpp:110
		bool lbTimeExtendedThisFrame;

		// BrnCrashModule.cpp:122
		EActiveRaceCarIndex leCrashOwner;

	}
	GetOwner(/* parameters */);
	RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
	{
		// BrnCrashModule.cpp:128
		float32_t lfPlayerCarSpeed;

		// BrnCrashModule.cpp:129
		float32_t lfAngularVelocity;

		RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		rw::math::vpu::Abs<float>(/* parameters */);
		RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
		{
			{
				{
				}
			}
		}
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		SetSecondsBeforeCleanup(/* parameters */);
	}
	RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
}

// BrnCrashModule.cpp:367
void BrnWorld::TrafficCrash::GetVehicleIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModule.cpp:337
void BrnWorld::TrafficCrash::GetOwner() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModule.cpp:209
void BrnWorld::TrafficCrash::Construct(int32_t  liOwner, uint16_t  luVehicle, float32_t  lfTimeTillClearup, bool  lbIsUnconfirmedNetwork) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModule.cpp:166
void BrnWorld::RaceCarCrash::ResetNetworkTimeout() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModule.cpp:361
void BrnWorld::TrafficCrash::IsConfirmedNetwork() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModule.cpp:295
void BrnWorld::TrafficCrash::ResetNetworkTimeout() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModule.cpp:180
void BrnWorld::RaceCarCrash::GetRaceCarVolumeInstanceId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModule.cpp:237
void BrnWorld::TrafficCrash::Tick(float32_t  lfSimTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModule.cpp:239
		float32_t lfTimeToCleanup;

	}
}

// BrnCrashModule.cpp:343
void BrnWorld::TrafficCrash::WantsToBeClearedUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModule.cpp:355
void BrnWorld::TrafficCrash::IsUnconfirmedNetwork() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModule.cpp:278
void BrnWorld::TrafficCrash::ConfirmNetworkOwner(EActiveRaceCarIndex  leConfirmedOwner) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModule.cpp:310
void BrnWorld::TrafficCrash::SetNetworkVehicleClearedUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModule.cpp:186
void BrnWorld::RaceCarCrash::GetSecondsBeforeCleanup() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModule.cpp:349
void BrnWorld::TrafficCrash::IsAllowedToBeClearedUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModule.cpp:261
void BrnWorld::TrafficCrash::MarkVehicleAsOnscreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashModule.cpp:326
void BrnWorld::TrafficCrash::OnOwnerDisconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


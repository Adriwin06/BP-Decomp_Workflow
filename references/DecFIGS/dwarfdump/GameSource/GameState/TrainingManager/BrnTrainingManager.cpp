// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnTrainingManager.cpp:40
	const float32_t KF_DEFAULT_TIME_OUT;

	// BrnTrainingManager.cpp:43
	const BrnProgression::ETrainingType[4] KAE_TIMED_TIPS;

	// BrnTrainingManager.cpp:51
	const float32_t[4] KAF_TIME_UNTIL_EACH_TIMED_TIP;

	// BrnTrainingManager.cpp:59
	const uint32_t[4] KAU_WINS_UNTIL_EACH_TIMED_TIP;

	// BrnTrainingManager.cpp:67
	const uint32_t KU_TIMED_TIPS_COUNT = 4;

	// BrnTrainingManager.cpp:71
	const float32_t KF_MIN_TIME_BETWEEN_TRAINING;

	// BrnTrainingManager.cpp:74
	const float32_t KF_MIN_TIME_BETWEEN_ATOMIKA_CRASHFM_VOS;

	// BrnTrainingManager.cpp:77
	const float32_t KF_MIN_TIME_BETWEEN_BOOST_TRAINING;

	// BrnTrainingManager.cpp:80
	const float32_t KF_MIN_TIME_IN_EVENT_FOR_BOOST_TRAINING;

	// BrnTrainingManager.cpp:82
	const int32_t KI_NUM_ATOMIKA_CRASHFM_VOS = 108;

	// BrnTrainingManager.cpp:85
	const float32_t KF_MAX_TIMED_PLAYED_FOR_NOOB_TRAINING_TIPS;

}

// BrnTrainingManager.cpp:556
void BrnGameState::TrainingManager::IsVoiceoverPlaying() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrainingManager.cpp:530
void BrnGameState::TrainingManager::OnTogglePictureParadise(bool  lbActive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrainingManager.cpp:544
void BrnGameState::TrainingManager::OnEnableTrainingTips(bool  lbActive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrainingManager.cpp:568
void BrnGameState::TrainingManager::OnVoiceoverFinished() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrainingManager.cpp:808
void BrnGameState::TrainingManager::UpdateOnlinePossible(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrainingManager.cpp:815
		int32_t liConnectionStatus;

	}
}

// BrnTrainingManager.cpp:106
void BrnGameState::TrainingManager::Construct(BrnProgression::ProgressionManager *  lpProgressionManager, BrnGameState::GameStateModule *  lpGameStateModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ResetStateTimer(/* parameters */);
}

// BrnTrainingManager.cpp:649
void BrnGameState::TrainingManager::IsTipAllowedInGameMode(BrnProgression::ETrainingType  leTrainingType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModule::GetLastActiveRaceCarInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerEngineState(/* parameters */);
}

// BrnTrainingManager.cpp:971
void BrnGameState::TrainingManager::DEBUG_ClearTrainingFlags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrainingManager.cpp:973
		Profile * lpProfile;

		BrnProgression::ProgressionManager::GetProfile(/* parameters */);
		BrnProgression::Profile::ClearTrainingFlags(/* parameters */);
	}
}

// BrnTrainingManager.cpp:832
void BrnGameState::TrainingManager::DoesTrainingPauseGame(BrnProgression::ETrainingType  leTrainingType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GameStateModule::IsOnlineGameMode(/* parameters */);
	ModeManager::IsOnlineGameMode(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnTrainingManager.cpp:632
void BrnGameState::TrainingManager::OnGameUnpaused() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrainingManager.cpp:615
void BrnGameState::TrainingManager::OnGamePaused() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrainingManager.cpp:351
void BrnGameState::TrainingManager::RequestTraining(BrnProgression::ETrainingType  leTrainingType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrainingManager.cpp:353
		const BrnProgression::Profile * lpProfile;

	}
	BrnProgression::Profile::HasPlayerSeenTrainingType(/* parameters */);
	BrnProgression::Profile::HasPlayerSeenTrainingType(/* parameters */);
	GameStateModule::GetLastActiveRaceCarInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	ModeManager::IsInProgress(/* parameters */);
	{
		// BrnTrainingManager.cpp:409
		EActiveRaceCarIndex liCarIdx;

		// BrnTrainingManager.cpp:411
		const BoostOutputInfo * lpBoostInfo;

		GameStateModule::GetLastActiveRaceCarInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
		GameStateModule::GetLastActiveRaceCarInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetBoostOutputInfoN(/* parameters */);
	}
	BrnProgression::Profile::HasPlayerSeenTrainingType(/* parameters */);
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

// BrnTrainingManager.cpp:940
void BrnGameState::TrainingManager::PlayNewAtomikaFreeburnVO() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrainingManager.cpp:942
		const BrnProgression::Profile * lpProfile;

		{
			// BrnTrainingManager.cpp:947
			BrnProgression::ETrainingType leTrainingTip;

		}
		BrnProgression::Profile::HasPlayerSeenTrainingType(/* parameters */);
	}
}

// BrnTrainingManager.cpp:784
void BrnGameState::TrainingManager::SendTrainingTickerMessage(InputBuffer::GameActionQueue *  lpGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrainingManager.cpp:786
		GameTrainingAction lAction;

		// BrnTrainingManager.cpp:787
		Profile * lpProfile;

		AddGameAction<BrnGameState::GameStateModuleIO::GameTrainingAction>(/* parameters */);
	}
	BrnProgression::ProgressionManager::GetProfile(/* parameters */);
	BrnProgression::Profile::SetTrainingAlreadySeen(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnTrainingManager.cpp:597
void BrnGameState::TrainingManager::ForceUnpause(InputBuffer::GameActionQueue *  lpGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrainingManager.cpp:601
		GameTrainingUnpauseAction lAction;

		AddGameAction<BrnGameState::GameStateModuleIO::GameTrainingUnpauseAction>(/* parameters */);
	}
}

// BrnTrainingManager.cpp:883
void BrnGameState::TrainingManager::TriggerAnyFollowOnTrainingTips(BrnProgression::ETrainingType  leFinishedTrainingType, InputBuffer::GameActionQueue *  lpGameActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrainingManager.cpp:891
		ShowSatNavAction lShowSatNavAction;

		AddGameAction<BrnGameState::GameStateModuleIO::ShowSatNavAction>(/* parameters */);
	}
	{
		// BrnTrainingManager.cpp:927
		GameTrainingPauseAction lAction;

		AddGameAction<BrnGameState::GameStateModuleIO::GameTrainingPauseAction>(/* parameters */);
	}
}

// BrnTrainingManager.cpp:144
void BrnGameState::TrainingManager::Update(const BrnGameState::GameStateModuleIO::PreWorldInputBuffer *  lpInput, InputBuffer::GameActionQueue *  lpGameActionQueue, PostWorldInputBuffer::RCEntityActiveRaceCarOutputInterface *  lpActiveRaceCarInterface, float32_t  lfGameTimeStep, bool  lbAllowTimedTutorialTips) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrainingManager.cpp:236
		bool lbTipsEnabled;

		{
			// BrnTrainingManager.cpp:281
			Profile * lpProfile;

			BrnProgression::ProgressionManager::GetProfile(/* parameters */);
			BrnProgression::Profile::SetTrainingAlreadySeen(/* parameters */);
			ResetStateTimer(/* parameters */);
		}
		ResetStateTimer(/* parameters */);
		{
			// BrnTrainingManager.cpp:273
			GameTrainingPauseAction lAction;

			AddGameAction<BrnGameState::GameStateModuleIO::GameTrainingPauseAction>(/* parameters */);
		}
	}
	{
		// BrnTrainingManager.cpp:301
		BrnProgression::ETrainingType leFinishedTrainingType;

		ResetStateTimer(/* parameters */);
	}
	{
		// BrnTrainingManager.cpp:181
		const BrnProgression::Profile * lpProfile;

		{
			// BrnTrainingManager.cpp:194
			uint32_t luIndex;

			BrnProgression::Profile::HasPlayerSeenTrainingType(/* parameters */);
		}
		{
			// BrnTrainingManager.cpp:214
			const BrnProgression::ETrainingType[6] KAE_TRAFFIC_LICENSE_TICKERS;

			BrnProgression::Profile::HasPlayerSeenTrainingType(/* parameters */);
		}
	}
	{
		// BrnTrainingManager.cpp:164
		SetPlayerCarDriverAction lSetPlayerCarDriverAction;

		AddGameAction<BrnGameState::GameStateModuleIO::SetPlayerCarDriverAction>(/* parameters */);
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
	CgsContainers::BitArray<256u>::IsBitSet(/* parameters */);
	{
		// BrnTrainingManager.cpp:309
		GameTrainingUnpauseAction lAction;

		AddGameAction<BrnGameState::GameStateModuleIO::GameTrainingUnpauseAction>(/* parameters */);
	}
	{
		// BrnTrainingManager.cpp:318
		SetPlayerCarDriverAction lSetPlayerCarDriverAction;

		AddGameAction<BrnGameState::GameStateModuleIO::SetPlayerCarDriverAction>(/* parameters */);
	}
}


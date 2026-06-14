struct _CGprogram;

struct _CGparameter;

struct AptSharedPtr<AptFile>;

struct AptFloatArrayCXForm;

struct AptUint32CXForm;

struct AptSavedInputRecord;

// Declaration
struct AptValue {
	// AptValue.h:596
	enum CIH_ONLY {
		CO_CIH = 0,
	}

protected:
	// AptValue.h:554
	extern const uint32_t MAX_REFCOUNT = 4095;

}

void BrnNetwork::UpdateMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CameraStatusMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CarSelectMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CollectableMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerFinishedRoundMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::HullSyncMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CrashingTrafficMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::TrafficHashMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RestartTrafficMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::AggressiveDrivingMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeSyncMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::DirtyTrickMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ImageMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::SelectedRoutesMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::MarkedManMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RoadRulesMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RoadRulesPersonalBestMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CameraRequestMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CameraRequestResponseMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::UpdateMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::UpdateMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerFinishedRoundMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlayerFinishedRoundMessage.cpp:184
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
}

void BrnNetwork::HullSyncMessage::OldMessagesAreValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::TrafficHashMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::TrafficHashMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::TrafficHashMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::TrafficHashMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficHashMessage.cpp:173
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
}

void BrnNetwork::TrafficHashMessage::OldMessagesAreValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CarSelectMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CarSelectMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CarSelectMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCarSelectMessage.cpp:190
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
}

void BrnNetwork::CrashingTrafficMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CrashingTrafficMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::AggressiveDrivingMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::AggressiveDrivingMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::AggressiveDrivingMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAggressiveDrivingMessage.cpp:133
		int32_t liIndex;

		// BrnAggressiveDrivingMessage.cpp:134
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
	{
		// BrnAggressiveDrivingMessage.cpp:140
		int32_t liAggressiveMoveType;

		// BrnAggressiveDrivingMessage.cpp:141
		int32_t liTakedownType;

	}
}

void BrnNetwork::AggressiveDrivingMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAggressiveDrivingMessage.cpp:179
		int32_t liIndex;

	}
}

void BrnNetwork::DirtyTrickMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::DirtyTrickMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::DirtyTrickMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDirtyTrickMessage.cpp:189
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
}

void BrnNetwork::CameraStatusMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CameraStatusMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CameraStatusMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCameraStatusMessage.cpp:135
		int32_t liCameraStatus;

		// BrnCameraStatusMessage.cpp:136
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
}

void BrnNetwork::CameraStatusMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CameraRequestMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CameraRequestMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCameraRequestMessage.cpp:133
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
}

void BrnNetwork::CameraRequestMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CameraRequestResponseMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CameraRequestResponseMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCameraRequestResponseMessage.cpp:134
		int32_t liCameraRequestResponse;

		// BrnCameraRequestResponseMessage.cpp:135
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
}

void BrnNetwork::CameraRequestResponseMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::SelectedRoutesMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::SelectedRoutesMessage::OldMessagesAreValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeSyncMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeSyncMessage::PackOrUnpack(CommonRelationshipStats *  lpRelationshipStats) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLiveRevengeSyncMessage.cpp:199
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
}

void BrnNetwork::LiveRevengeSyncMessage::PackOrUnpack(CommonRelationship *  lpCommonRelationship) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLiveRevengeSyncMessage.cpp:179
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
}

void BrnNetwork::LiveRevengeRelationship::GetLastChangedTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::GetTotalEvents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::GetCurrentScoreForLocalPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::GetOverallStats() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::SetLastTimeChanged(DateAndTime  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::SetTotalNumberOfEvents(int32_t  liTotalNumberOfEvents) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::SetCurrentScoreForPlayer(int32_t  liCurrentScoreForPlayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeRelationship::SetOverallStats(CommonRelationship *  lpOverallStats) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeSyncMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnLiveRevengeSyncMessage.cpp:141
		BrnNetworkManager::PackOrUnpackResult lxResult;

		// BrnLiveRevengeSyncMessage.cpp:146
		DateAndTime lTimeStamp;

		// BrnLiveRevengeSyncMessage.cpp:147
		int32_t liNumberOfEvents;

		// BrnLiveRevengeSyncMessage.cpp:148
		int32_t liRelationshipStatus;

		// BrnLiveRevengeSyncMessage.cpp:149
		CommonRelationship lOverallRelationship;

	}
	LiveRevengeRelationship::SetCurrentScoreForPlayer(/* parameters */);
	LiveRevengeRelationship::SetOverallStats(/* parameters */);
	LiveRevengeRelationship::SetTotalNumberOfEvents(/* parameters */);
}

void BrnNetwork::MarkedManMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::MarkedManMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMarkedManMessage.cpp:142
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
}

void BrnNetwork::MarkedManMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RoadRulesMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesMessage.cpp:139
		int32_t liIndex;

		{
			// BrnRoadRulesMessage.cpp:145
			int32_t liScoreIndex;

		}
	}
}

void BrnNetwork::RestartTrafficMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RestartTrafficMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRestartTrafficMessage.cpp:168
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// BrnRestartTrafficMessage.cpp:170
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
	operator++(/* parameters */);
}

void BrnNetwork::CollectableMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CollectableMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollectableMessage.cpp:150
		int32_t liType;

		// BrnCollectableMessage.cpp:151
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
}

void BrnNetwork::CollectableMessage::OldMessagesAreValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ImageMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ImageMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ImageMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnImageMessage.cpp:246
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
}

void BrnNetwork::ImageMessage::OldMessagesAreValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BurningHomeRunSwitchRunnerMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BurningHomeRunSwitchRunnerMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BurningHomeRunSwitchRunnerMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurningHomeRunSwitchRunnerMessage.cpp:125
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
}

void BrnNetwork::BurningHomeRunSwitchRunnerMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BurningHomeRunSwitchRunnerMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BurnoutSkillzMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ShowtimeUpdateMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ShowtimeUpdateMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ShowtimeUpdateMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ShowtimeUpdateMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnShowtimeUpdateMessage.cpp:88
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
}

void BrnNetwork::ShowtimeUpdateMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ShowtimeSwitchMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ShowtimeSwitchMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ShowtimeSwitchMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnShowtimeSwitchMessage.cpp:91
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
}

void BrnNetwork::ShowtimeSwitchMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ShowtimeSwitchMessage::OldMessagesAreValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::FreeburnChallengeMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::FreeburnChallengeMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::FreeburnChallengeMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFreeburnChallengeMessage.cpp:98
		BrnNetworkManager::PackOrUnpackResult lxResult;

		// BrnFreeburnChallengeMessage.cpp:99
		int32_t liValue;

	}
}

void BrnNetwork::FreeburnChallengeMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<2000>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::FburnChallengeStatusMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<2000>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:511
		uint64_t luIndex;

	}
}

void BrnNetwork::FburnChallengeStatusMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FastBitArray<2000>::UnSetAll(/* parameters */);
}

void BrnNetwork::FburnChallengeStatusMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFburnChallengeStatusMessage.cpp:82
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
}

void BrnNetwork::FburnChallengeStatusMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<60>::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::FburnSuccessUpdateMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FastBitArray<60>::UnSetAll() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFastBitArray.h:511
		uint64_t luIndex;

	}
}

void BrnNetwork::FburnSuccessUpdateMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FastBitArray<60>::UnSetAll(/* parameters */);
}

void BrnNetwork::FburnSuccessUpdateMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFburnSuccessUpdateMessage.cpp:88
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
}

void BrnNetwork::FburnSuccessUpdateMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::FburnChallengeSuccessMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFburnChallengeSuccessMessage.cpp:61
		int32_t liIndex;

	}
}

void BrnNetwork::FburnChallengeSuccessMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFburnChallengeSuccessMessage.cpp:81
		int32_t liIndex;

	}
}

void BrnNetwork::FburnChallengeSuccessMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFburnChallengeSuccessMessage.cpp:103
		BrnNetworkManager::PackOrUnpackResult lxResult;

		// BrnFburnChallengeSuccessMessage.cpp:107
		int32_t liIndex;

	}
}

void BrnNetwork::FburnChallengeSuccessMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::FburnChallengeSuccessMessage::OldMessagesAreValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::MemSet(void *  lpDestination, int  liValue, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ActiveFburnChallengeMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemSet(/* parameters */);
}

void BrnNetwork::ActiveFburnChallengeMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveFburnChallengeMessage.cpp:95
		int32_t liIndex;

		// BrnActiveFburnChallengeMessage.cpp:97
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
}

void BrnNetwork::ActiveFburnChallengeMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::MessageWithPlayerIDs::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CheckpointTriggeredMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::MessageWithPlayerIDs::Construct(/* parameters */);
}

void BrnNetwork::CheckpointTriggeredMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CheckpointTriggeredMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CheckpointTriggeredMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCheckpointTriggeredMessage.cpp:89
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
}

void BrnNetwork::CheckpointTriggeredMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CheckpointTriggeredMessage::OldMessagesAreValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::StatsUpdateMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::Message::IsMessageValid() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::Message::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::Message::SetDealtWith() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::StatsUpdateMessage::Retrieve(int32_t *  lpiNumberOfChallenges, int32_t *  lpiNumberOfRivals, int32_t *  lpiNumberOfAchievements, int32_t *  lpiNumberOfTakedowns) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::StatsUpdateMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::StatsUpdateMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::StatsUpdateMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnStatsUpdateMessage.cpp:170
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
}

void BrnNetwork::StatsUpdateMessage::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::UpdateMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnUpdateMessage.cpp:197
		Vector3 lMinPosition;

		// BrnUpdateMessage.cpp:198
		Vector3 lMaxPosition;

		// BrnUpdateMessage.cpp:199
		int32_t liCameraStatus;

		// BrnUpdateMessage.cpp:200
		int32_t liHeadsetStatus;

		// BrnUpdateMessage.cpp:202
		BrnNetworkManager::PackOrUnpackResult lxResult;

		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
	}
}

void BrnNetwork::CrashingTrafficMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashingTrafficMessage.cpp:214
		int32_t liIndex;

	}
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
}

void BrnNetwork::UpdateMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::SetIdentity(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::GetRow(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
	rw::math::vpu::Vector3::SetZero(/* parameters */);
}

void rw::math::vpu::Min(const rw::math::vpu::Vector3  v0, const rw::math::vpu::Vector3  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:305
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Max(const rw::math::vpu::Vector3  v0, const rw::math::vpu::Vector3  v1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:312
		VectorIntrinsicUnion::VectorIntrinsic r;

	}
}

void BrnNetwork::CrashingTrafficMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashingTrafficMessage.cpp:160
		Vector3 lMinPosition;

		// BrnCrashingTrafficMessage.cpp:161
		Vector3 lMaxPosition;

		// BrnCrashingTrafficMessage.cpp:162
		int32_t liIndex;

		// BrnCrashingTrafficMessage.cpp:164
		BrnNetworkManager::PackOrUnpackResult lxResult;

		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::GetW(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	rw::math::vpu::Max(/* parameters */);
}

void BrnNetwork::CarSelectMessage::PrepareForSend(uint16_t  lu16CurrentFrame, CgsID  lCarId, CgsID  lWheelId, uint16_t  lu16CarColourIndex, uint16_t  lu16CarPaintFinishIndex, bool  lbFinalSelection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::DirtyTrickMessage::PrepareForSend(uint16_t  lu16CurrentFrame, RoadRulesRecvData::NetworkPlayerID  lAggressorNetworkPlayerID, RoadRulesRecvData::NetworkPlayerID  lVictimNetworkPlayerID, uint8_t  lu8DirtyTrickType, uint8_t  lu8DirtyTrickStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CameraRequestMessage::PrepareForSend(uint16_t  lu16CurrentFrame, bool  lbReleaseFeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CameraRequestResponseMessage::PrepareForSend(uint16_t  lu16CurrentFrame, BrnNetwork::CameraRequestResponseMessage::EResponse  leCameraRequestResponse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::SelectedRoutesMessage::PrepareForSend(uint16_t  lu16CurrentFrame, int32_t  liRoundNumber, BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeSyncMessage::PrepareForSend(const LiveRevengeRelationship *  lpRelationship, uint16_t  lu16CurrentFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ShowtimeSwitchMessage::PrepareForSend(uint16_t  lu16FrameCount, const int32_t  liFinalShowtimeScore, const bool  lbEnteringShowtime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::FburnChallengeStatusMessage::PrepareForSend(uint16_t  lu16FrameCount, const CompletedFburnChallengesData::CompletedFburnChallenges *  lpCompletedChallenges) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ActiveFburnChallengeMessage::PrepareForSend(uint16_t  lu16FrameCount, CgsID  lChallengeID, RoadRulesRecvData::NetworkPlayerID *  lpaNetworkPlayerIDs, int32_t  liNumPlayersInChallenge) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveFburnChallengeMessage.cpp:143
		int32_t liIndex;

	}
}

void BrnNetwork::CheckpointTriggeredMessage::PrepareForSend(uint16_t  lu16FrameCount, const int32_t  liCheckpointIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTriggerId::Set(uint32_t  luHull, uint32_t  luLightTriggerIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficLightTrigger.h:209
		uint32_t luIndex;

	}
}

void BrnWorld::TriggerId::Set(uint8_t  lu8Owner, uint32_t  lu32Index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex(int32_t  lTriggerRegionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::Construct(int32_t  liEventID, LightTriggerId  lTrafficLightTriggerId, LandmarkIndex *  lpLandmarks, int32_t  liNumLandmarks) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.h:1488
		int32_t liIndex;

	}
}

void BrnNetwork::SelectedRoutesMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectedRoutesMessage.cpp:209
		int32_t liLandmarkIndex;

		// BrnSelectedRoutesMessage.cpp:210
		LandmarkIndex[16] laLandmarkIndex;

		// BrnSelectedRoutesMessage.cpp:211
		LightTriggerId lTriggerID;

		BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::Construct(/* parameters */);
	}
}

void CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::HullSyncMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Clear(/* parameters */);
}

void rw::RGBA::RGBA(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA32::RGBA32(float32_t  red, float32_t  green, float32_t  blue, float32_t  alpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Vector3Template(float  _x, float  _y, float  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Vector4Template(float  _x, float  _y, float  _z, float  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<double>::Vector2Template(double  _x, double  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<double>::Vector3Template(double  _x, double  _y, double  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Vector4Template(double  _x, double  _y, double  _z, double  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::Construct(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResource::SmallResource(const const SmallMemoryResource &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<3u>::BaseResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:307
		uint32_t i;

	}
}

void rw::BaseResources<3u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::EntityId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::VolumeInstanceId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeId::VolumeId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneQueryId::SceneQueryId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::RigidBodyId::RigidBodyId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::JointId::JointId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::DriveId::DriveId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::DegToRad<float>(float  angle_degrees) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Cos(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::cosf(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1394
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator*(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1539
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void CgsResource::BaseResourcePtr::~BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::RemoveFromCurrentList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void __static_initialization_and_destruction_0(int  __initialize_p, int  __priority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsResource::BaseResourcePtr::~BaseResourcePtr(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	CgsSceneManager::VolumeInstanceId::VolumeInstanceId(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	CgsSceneManager::VolumeId::VolumeId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::JointId::JointId(/* parameters */);
	CgsPhysics::DriveId::DriveId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

void CgsContainers::FastBitArray<60>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::FburnSuccessUpdateMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FastBitArray<60>::Construct(/* parameters */);
}

void BrnNetwork::LiveRevengeRelationship::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::UniquePlayerIDPS3::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::PlayerName::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CommonRelationship::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::CommonRelationshipStats::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::LiveRevengeSyncMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	LiveRevengeRelationship::Clear(/* parameters */);
	CommonRelationshipStats::Clear(/* parameters */);
}

void CgsCore::MemCpy(void *  lpDestination, const void *  lpSource, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RestartTrafficMessage::PrepareForSend(uint16_t  lu16CurrentFrame, uint16_t  lu16FrameSinceStartToResetTraffic, const uint16_t *  lpu16ActiveHullArray, const RoadRulesRecvData::NetworkPlayerID *  lpaPlayerIDsForActiveHulls) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemCpy(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void BrnNetwork::FburnChallengeSuccessMessage::PrepareForSend(uint16_t  lu16FrameCount, const bool *  lpaSuccessfulActions, const bool *  lpaAccumulationsThisFrame, const float32_t *  lpaActionScores) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemCpy(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void BrnNetwork::RestartTrafficMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemSet(/* parameters */);
	CgsCore::MemSet(/* parameters */);
}

void BrnNetwork::ActiveFburnChallengeMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemSet(/* parameters */);
}

void BrnNetwork::UpdateMessage::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void CgsSystem::Time::operator=(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::PlayerFinishedRoundMessage::Retrieve(uint8_t *  lpu8RoundNumber, Time *  lpFinishTime, float32_t *  lpfDistanceFromFinish, RoadRulesRecvData::NetworkPlayerID *  lpEliminatorNetworkPlayerID, int32_t *  liEliminations, bool *  lpbTimedOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::operator=(/* parameters */);
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::HullSyncMessage::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
	CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Clear(/* parameters */);
}

void BrnNetwork::TrafficHashMessage::Retrieve(uint16_t *  lpu16SyncedFramedSinceStart, uint16_t *  lpu16Update10HzFrame, uint16_t *  lpu16TrafficHash) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::CarSelectMessage::Retrieve(CgsID *  lpCarId, CgsID *  lpWheelId, uint16_t *  lpu16CarColourIndex, uint16_t *  lpu16CarPaintFinishIndex, bool *  lpbFinalSelection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::CrashingTrafficMessage::Retrieve(int32_t *  lpiCrashingTrafficDataCount, CrashingTrafficData *  lpaCrashingTrafficData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemCpy(/* parameters */);
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::AggressiveDrivingMessage::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::AggressiveDrivingMessage::Retrieve(int32_t *  lpiNumberOfAggressiveMoves, AggressiveMoveData *  lpAggressiveMoveDataArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemCpy(/* parameters */);
}

void BrnNetwork::DirtyTrickMessage::Retrieve(RoadRulesRecvData::NetworkPlayerID *  lpAggressorNetworkPlayerID, RoadRulesRecvData::NetworkPlayerID *  lpVictimNetworkPlayerID, uint8_t *  lpu8DirtyTrickType, uint8_t *  lpu8DirtyTrickStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::CameraStatusMessage::Retrieve(BrnNetwork::ECameraStatus *  lpeCameraStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::CameraRequestMessage::Retrieve(bool *  lpbReleaseFeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::CameraRequestResponseMessage::Retrieve(BrnNetwork::CameraRequestResponseMessage::EResponse *  lpeCameraRequestResponse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::SelectedRoutesMessage::Retrieve(int32_t *  lpiRoundNumber, BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event *  lpEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::LiveRevengeSyncMessage::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::LiveRevengeSyncMessage::Retrieve(LiveRevengeRelationship *  lpRelationship) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::MarkedManMessage::PrepareForSend(uint16_t  lu16CurrentFrame, RoadRulesRecvData::NetworkPlayerID  lMarkedMan, bool  lbFinalSelection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::MarkedManMessage::Retrieve(RoadRulesRecvData::NetworkPlayerID *  lpMarkedMan, bool *  lpbIsFinalSelection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::RoadRulesMessage::Retrieve(int32_t *  lpiNumRoadRulesScores, RoadRulesMessageData *  lpRoadRulesScoresArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemCpy(/* parameters */);
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::RestartTrafficMessage::Retrieve(uint16_t *  lu16FrameSinceStartToResetTraffic, uint16_t *  lpaActiveHulls, RoadRulesRecvData::NetworkPlayerID *  lpaPlayerIDsForActiveHulls) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemCpy(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::CollectableMessage::Retrieve(CgsID *  lpCollectableID, BrnNetwork::CollectableMessage::ECollectableType *  lpeType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::ImageMessage::Retrieve(RoadRulesRecvData::NetworkPlayerID *  lpImageSenderPlayerID, RoadRulesRecvData::NetworkPlayerID *  lpImageReceiverPlayerID, BrnGameState::GameStateModuleIO::EImageType *  lpeImageType, CgsID *  lpBeatenRoadID, uint16_t *  lpu16PhotoPacketNumber, uint16_t *  lpu16TotalPhotoPacketCount, uint16_t *  lpu16NumberOfBytesOfPhotoData, void *  lpPhotoData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemCpy(/* parameters */);
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::BurningHomeRunSwitchRunnerMessage::PrepareForSend(uint16_t  lu16CurrentFrame, RoadRulesRecvData::NetworkPlayerID  lNewRunnerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::BurningHomeRunSwitchRunnerMessage::Retrieve(RoadRulesRecvData::NetworkPlayerID *  lpNewRunnerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::BurnoutSkillzMessage::PrepareForSend(uint16_t  lu16FrameCount, const BurnoutSkillzData *  lpSkillzData, bool  lbInitialData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnGameState::BurnoutSkillzData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurnoutSkillzData.h:120
		BrnGameState::BurnoutSkillzData::EBurnoutSkillType leSkillIndex;

	}
}

void BrnGameState::operator++(const BrnGameState::BurnoutSkillzData::EBurnoutSkillType &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurnoutSkillzData.h:107
		BrnGameState::BurnoutSkillzData::EBurnoutSkillType leOldEnumIndex;

	}
}

void BrnNetwork::BurnoutSkillzMessage::Retrieve(BurnoutSkillzData *  lpSkillzData, bool *  lpbInitialData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
	BrnGameState::BurnoutSkillzData::Clear(/* parameters */);
}

void BrnNetwork::ShowtimeUpdateMessage::Retrieve(int32_t *  lpiShowtimeScore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::ShowtimeSwitchMessage::Retrieve(int32_t *  lpiFinalShowtimeScore, bool *  lpbEnteringShowtime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::FreeburnChallengeMessage::Retrieve(CgsID *  lpChallengeID, BrnNetwork::BrnNetworkModuleIO::EChallengeEventType *  lpeEventType, BrnGameState::EChallengeStatus *  lpeChallengeStatus, int32_t *  lpiActionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::FburnChallengeStatusMessage::Retrieve(CompletedFburnChallengesData::CompletedFburnChallenges *  lpCompletedChallenges) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::FburnSuccessUpdateMessage::Retrieve(int32_t *  lpiFramesSinceStart, int32_t *  lpiActionIndex, FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *  lpSuccessBitArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::FburnChallengeSuccessMessage::Retrieve(bool *  lpaSuccessfulActions, bool *  lpaAccumulationsThisFrame, float32_t *  lpaActionScores) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemCpy(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::ActiveFburnChallengeMessage::Retrieve(CgsID *  lpChallengeID, RoadRulesRecvData::NetworkPlayerID *  lpaNetworkPlayerIDs, int32_t *  lpiNumPlayersInChallenge) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnActiveFburnChallengeMessage.cpp:182
		int32_t liIndex;

		CgsNetwork::Message::Release(/* parameters */);
	}
}

void BrnNetwork::CheckpointTriggeredMessage::Retrieve(int32_t *  lpiCheckpointIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::Release(/* parameters */);
}

void CgsNetwork::Message::PrepareForSend(EMessageType  leType, uint16_t  lu16Frame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::Message::SetType(EMessageType  leType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::Message::SetU16Frame(uint16_t  lu16Frame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsNetwork::Message::SetReadyToSend() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::StatsUpdateMessage::PrepareForSend(uint16_t  lu16FrameCount, int32_t  liNumberOfChallenges, int32_t  liNumberOfRivals, int32_t  liNumberOfAchievements, int32_t  liNumberOfTakedowns) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::PrepareForSend(/* parameters */);
	CgsNetwork::Message::Release(/* parameters */);
	CgsNetwork::Message::SetReadyToSend(/* parameters */);
	CgsNetwork::Message::SetType(/* parameters */);
	CgsNetwork::Message::SetU16Frame(/* parameters */);
}

void BrnNetwork::BurnoutSkillzMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnGameState::BurnoutSkillzData::Clear(/* parameters */);
}

void BrnNetwork::BurnoutSkillzMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnGameState::BurnoutSkillzData::Clear(/* parameters */);
}

void CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::HullSyncMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::MessageWithPlayerIDs::Construct(/* parameters */);
	CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Construct(/* parameters */);
}

void BrnNetwork::CarSelectMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::MessageWithPlayerIDs::Construct(/* parameters */);
}

void BrnNetwork::DirtyTrickMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::MessageWithPlayerIDs::Construct(/* parameters */);
}

void BrnNetwork::CameraRequestMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::MessageWithPlayerIDs::Construct(/* parameters */);
}

void BrnNetwork::CameraRequestResponseMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::MessageWithPlayerIDs::Construct(/* parameters */);
}

void BrnNetwork::LiveRevengeSyncMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::MessageWithPlayerIDs::Construct(/* parameters */);
}

void BrnNetwork::MarkedManMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::MessageWithPlayerIDs::Construct(/* parameters */);
}

void BrnNetwork::RoadRulesMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::MessageWithPlayerIDs::Construct(/* parameters */);
}

void BrnNetwork::RoadRulesPersonalBestMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::MessageWithPlayerIDs::Construct(/* parameters */);
}

void BrnNetwork::RestartTrafficMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::MessageWithPlayerIDs::Construct(/* parameters */);
}

void BrnNetwork::CollectableMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::MessageWithPlayerIDs::Construct(/* parameters */);
}

void BrnNetwork::BurnoutSkillzMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::MessageWithPlayerIDs::Construct(/* parameters */);
	BrnGameState::BurnoutSkillzData::Clear(/* parameters */);
}

void BrnNetwork::ShowtimeSwitchMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::MessageWithPlayerIDs::Construct(/* parameters */);
}

void BrnNetwork::FreeburnChallengeMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::MessageWithPlayerIDs::Construct(/* parameters */);
}

void CgsContainers::FastBitArray<2000>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::FburnChallengeStatusMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::MessageWithPlayerIDs::Construct(/* parameters */);
	CgsContainers::FastBitArray<2000>::Construct(/* parameters */);
}

void BrnNetwork::FburnChallengeSuccessMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFburnChallengeSuccessMessage.cpp:39
		int32_t liIndex;

		CgsNetwork::MessageWithPlayerIDs::Construct(/* parameters */);
	}
}

void BrnNetwork::ActiveFburnChallengeMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::MessageWithPlayerIDs::Construct(/* parameters */);
	CgsCore::MemSet(/* parameters */);
}

void BrnStreetData::operator++(const BrnStreetData::ScoreType &  leEnumIndex, int  liDummyInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeData.h:56
		BrnStreetData::ScoreType leOldEnumIndex;

	}
}

void BrnNetwork::RoadRulesPersonalBestMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesPersonalBestMessage.cpp:165
		BrnStreetData::ScoreType leScoreType;

	}
	BrnStreetData::operator++(/* parameters */);
}

void CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::HullSyncMessage::PrepareForSend(uint16_t  lu16CurrentFrame, BrnNetwork::TrafficManager::TrafficSyncData::BufferedHullsToActivate *  laBufferedHullActivates) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::GetLength(/* parameters */);
}

void BrnNetwork::HullSyncMessage::Retrieve(BrnNetwork::TrafficManager::TrafficSyncData::BufferedHullsToActivate *  laBufferedHullActivates) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::GetLength(/* parameters */);
}

void BrnNetwork::SelectedRoutesMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectedRoutesMessage.cpp:53
		LightTriggerId lTriggerID;

	}
	CgsNetwork::MessageWithPlayerIDs::Construct(/* parameters */);
	BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::Construct(/* parameters */);
}

extern UpdateData & operator=(const const UpdateData &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Magnitude(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:160
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:161
			VectorIntrinsicUnion::VectorIntrinsic dotproduct;

			{
				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic yy;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic zz;

			}
			{
				// vector3_operation_inline.h:161
				const VectorIntrinsicUnion::VectorIntrinsic zero;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic isZeroMask;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic recipSqrt;

				// vector3_operation_inline.h:161
				VectorIntrinsicUnion::VectorIntrinsic result;

				{
					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:161
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector3_operation_inline.h:161
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::math::vpu::operator>=(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:797
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:799
		bool ret;

		{
			// vec_float_operation_inline.h:798
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::Normalize(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:195
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:196
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// vector3_operation_inline.h:196
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic yy;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic zz;

				}
				{
					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:453
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(float  f0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_macros.h:237
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_macros.h:238
			VectorIntrinsicUnion u;

		}
	}
}

void BrnNetwork::UpdateMessage::PrepareForSend(UpdateData *  lpUpdateData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnUpdateMessage.cpp:112
		Vector3 lMinPosition;

		// BrnUpdateMessage.cpp:113
		Vector3 lMaxPosition;

	}
	rw::math::vpu::Magnitude(/* parameters */);
	operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	{
	}
	{
		{
		}
	}
	rw::math::vpu::operator>=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator>=(/* parameters */);
	rw::math::vpu::Magnitude(/* parameters */);
	{
		{
			{
			}
		}
	}
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Min(/* parameters */);
	CgsNetwork::Message::PrepareForSend(/* parameters */);
	rw::math::vpu::Max(/* parameters */);
	CgsNetwork::Message::SetReadyToSend(/* parameters */);
	CgsNetwork::Message::SetType(/* parameters */);
	CgsNetwork::Message::SetU16Frame(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
}

void BrnNetwork::TrafficHashMessage::PrepareForSend(uint16_t  lu16CurrentFrame, uint16_t  lu16SyncedFramedSinceStart, uint16_t  lu16Update10HzFrame, uint16_t  lu16TrafficHash) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::PrepareForSend(/* parameters */);
	CgsNetwork::Message::SetReadyToSend(/* parameters */);
	CgsNetwork::Message::SetType(/* parameters */);
	CgsNetwork::Message::SetU16Frame(/* parameters */);
}

void BrnNetwork::CrashingTrafficMessage::PrepareForSend(uint16_t  lu16CurrentFrame, uint16_t  lu16FramesSinceStart, int32_t  liCrashingTrafficDataCount, CrashingTrafficData *  lpCrashingTrafficDataArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemCpy(/* parameters */);
	CgsNetwork::Message::PrepareForSend(/* parameters */);
	CgsNetwork::Message::SetReadyToSend(/* parameters */);
	CgsNetwork::Message::SetType(/* parameters */);
	CgsNetwork::Message::SetU16Frame(/* parameters */);
}

void BrnNetwork::AggressiveDrivingMessage::PrepareForSend(uint16_t  lu16CurrentFrame, int32_t  liNumberOfAggressiveMoves, AggressiveMoveData *  lpAggressiveMoveDataArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAggressiveDrivingMessage.cpp:69
		int32_t liIndex;

		CgsNetwork::Message::PrepareForSend(/* parameters */);
		CgsNetwork::Message::SetU16Frame(/* parameters */);
	}
}

void BrnNetwork::CameraStatusMessage::PrepareForSend(uint16_t  lu16CurrentFrame, BrnNetwork::ECameraStatus  leCameraStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::PrepareForSend(/* parameters */);
	CgsNetwork::Message::SetReadyToSend(/* parameters */);
	CgsNetwork::Message::SetType(/* parameters */);
	CgsNetwork::Message::SetU16Frame(/* parameters */);
}

void BrnNetwork::ShowtimeUpdateMessage::PrepareForSend(uint16_t  lu16FrameCount, const int32_t  liShowtimeScore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::PrepareForSend(/* parameters */);
}

void BrnNetwork::FburnSuccessUpdateMessage::PrepareForSend(uint16_t  lu16FrameCount, int32_t  liFramesSinceStart, int32_t  liActionIndex, const FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *  lpSuccessBitArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::Message::PrepareForSend(/* parameters */);
}

void CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Grow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:284
		HullToActivateInfo * lpNew;

		{
			// CgsArray.h:282
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::HullSyncMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHullSyncMessage.cpp:162
		uint32_t luHullIndex;

		CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Clear(/* parameters */);
	}
	{
		// BrnHullSyncMessage.cpp:169
		HullToActivateInfo * lpInfo;

		CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Grow(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsSystem::Time::SetFloatVal(float32_t  lfFloatVal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTime.h:329
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::PlayerFinishedRoundMessage::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::SetFloatVal(/* parameters */);
}

void BrnNetwork::PlayerFinishedRoundMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::MessageWithPlayerIDs::Construct(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
}

void CgsDev::StrStreamBase::operator<<(float32_t  lfReal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:598
		union UFloatInt {
			// CgsStrStream.h:599
			float32_t mfReal;

			// CgsStrStream.h:600
			int32_t miInt;

		}
		// CgsStrStream.h:602
		UFloatInt lFloatInt;

	}
}

void BrnNetwork::PlayerFinishedRoundMessage::PrepareForSend(uint16_t  lu16CurrentFrame, uint8_t  lu8RoundNumber, const Time &  lFinishTime, float32_t  lfDistanceFromFinish, RoadRulesRecvData::NetworkPlayerID  lEliminatorNetworkPlayerID, int32_t  liEliminations, bool  lbTimedOut) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::operator=(/* parameters */);
	{
		// BrnPlayerFinishedRoundMessage.cpp:113
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnPlayerFinishedRoundMessage.cpp:112
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
	}
	{
	}
}

void BrnNetwork::PlayerFinishedRoundMessage::GetPackedMessageSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::SetFloatVal(/* parameters */);
}

void CgsNetwork::Message::IsPacking() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:549
		CgsDev::StrStream lStrStream;

	}
}

void BrnNetwork::HullSyncMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnHullSyncMessage.cpp:190
		BrnNetworkManager::PackOrUnpackResult lxResult;

		// BrnHullSyncMessage.cpp:191
		int32_t liHullIndex;

		// BrnHullSyncMessage.cpp:192
		int32_t liHullCount;

		CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::GetLength(/* parameters */);
		CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::GetLength(/* parameters */);
		{
			// BrnHullSyncMessage.cpp:215
			HullToActivateInfo * lpHullActivate;

			CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::operator[](/* parameters */);
		}
		CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Grow(/* parameters */);
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
	CgsContainers::Array<BrnNetwork::HullToActivateInfo,7u>::Clear(/* parameters */);
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetLightTriggerID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetNumLandmarks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetEventID() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTriggerId::GetHull() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::TriggerId::GetIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::LightTriggerId::GetLightTriggerIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetLandmark(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.h:1569
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameStateSharedIO.h:1570
		CgsDev::StrStream lStrStream;

	}
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::operator std::int32_t() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::SelectedRoutesMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnSelectedRoutesMessage.cpp:156
		int32_t liEventID;

		// BrnSelectedRoutesMessage.cpp:157
		int32_t liLandmarkIndex;

		// BrnSelectedRoutesMessage.cpp:158
		uint8_t lu8NumLandmarks;

		// BrnSelectedRoutesMessage.cpp:159
		int32_t liHull;

		// BrnSelectedRoutesMessage.cpp:160
		int32_t liLightTrigger;

		// BrnSelectedRoutesMessage.cpp:161
		LightTriggerId lTriggerID;

		// BrnSelectedRoutesMessage.cpp:163
		int16_t[16] la16LandmarkIndices;

		// BrnSelectedRoutesMessage.cpp:164
		LandmarkIndex[16] laLandmarkIndex;

		// BrnSelectedRoutesMessage.cpp:166
		LandmarkIndex lLandmarkIndex;

		// BrnSelectedRoutesMessage.cpp:168
		BrnNetworkManager::PackOrUnpackResult lxResult;

		BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::GetLandmark(/* parameters */);
		BrnTraffic::LightTriggerId::Set(/* parameters */);
		BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event::Construct(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::RoadRulesMessage::PrepareForSend(uint16_t  lu16CurrentFrame, int32_t  liNumRoadRulesScores, RoadRulesMessageData *  lpRoadRulesScoresArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemCpy(/* parameters */);
	{
		// BrnRoadRulesMessage.cpp:72
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnRoadRulesMessage.cpp:71
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::RoadRulesMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesMessage.cpp:175
		int32_t liIndex;

		// BrnRoadRulesMessage.cpp:176
		BrnNetworkManager::PackOrUnpackResult lxResult;

		{
			// BrnRoadRulesMessage.cpp:182
			int32_t liScoreIndex;

		}
		{
			// BrnRoadRulesMessage.cpp:199
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

void BrnStreetData::ChallengeData::ContainsData(BrnStreetData::ScoreType  leVariable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<2u>::GetFirstNonZeroBit() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:543
		uint32_t liIndex;

		{
			// CgsBitArray.h:553
			int32_t liFirstOneBit;

			{
				// CgsBitArray.h:554
				CgsDev::StrStream lStrStream;

			}
		}
		{
			// CgsBitArray.h:559
			int32_t liFirstOneBit;

		}
	}
}

void CgsContainers::BitArray<2u>::GetZeroBitInInt(int64_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:796
		uint32_t liLeadingZeros;

	}
}

void CgsContainers::_CountLeadingZeros64(uint64_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:169
		uint64_t luRes;

	}
}

void CgsContainers::BitArray<2u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void BrnStreetData::ChallengeData::GetScore(BrnStreetData::ScoreType  leScoreType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::ScoreList::GetScore(BrnStreetData::ScoreType  leScoreType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RoadRulesPersonalBestMessage::PrepareForSend(uint16_t  lu16CurrentFrame, Road::ChallengeIndex  lChallengeIndex, ChallengeData  lPbScore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesPersonalBestMessage.cpp:68
		BrnStreetData::ScoreType leScoreType;

	}
	CgsCore::MemSet(/* parameters */);
	BrnStreetData::ChallengeData::ContainsData(/* parameters */);
	BrnStreetData::operator++(/* parameters */);
	CgsContainers::BitArray<2u>::IsBitSet(/* parameters */);
	BrnStreetData::ChallengeData::GetScore(/* parameters */);
}

void BrnStreetData::ChallengeHighScoreEntry::SetScore(BrnStreetData::ScoreType  leScoreType, int32_t  liScore, const PlayerName *  lpPlayerName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::BitArray<2u>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:212
		CgsDev::StrStream lStrStream;

	}
}

void BrnStreetData::ChallengeData::SetScore(BrnStreetData::ScoreType  leScoreType, int32_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnStreetData::ScoreList::SetScore(BrnStreetData::ScoreType  leScoreType, int32_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::RoadRulesPersonalBestMessage::Retrieve(PlayerName *  lpPlayerName, Road::ChallengeIndex *  lpChallengeIndex, ChallengeHighScoreEntry *  lPbScore) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesPersonalBestMessage.cpp:120
		BrnStreetData::ScoreType leScoreType;

	}
	BrnStreetData::operator++(/* parameters */);
	BrnStreetData::ChallengeHighScoreEntry::SetScore(/* parameters */);
	CgsNetwork::Message::Release(/* parameters */);
}

void BrnNetwork::RoadRulesPersonalBestMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRoadRulesPersonalBestMessage.cpp:195
		BrnStreetData::ScoreType leScoreType;

		// BrnRoadRulesPersonalBestMessage.cpp:197
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
	BrnStreetData::operator++(/* parameters */);
	{
		// BrnRoadRulesPersonalBestMessage.cpp:214
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::CollectableMessage::PrepareForSend(uint16_t  lu16CurrentFrame, CgsID  lCollectableID, BrnNetwork::CollectableMessage::ECollectableType  leType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCollectableMessage.cpp:67
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnNetwork::ImageMessage::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::MessageWithPlayerIDs::Construct(/* parameters */);
	{
		// BrnImageMessage.cpp:54
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsDev::StrStreamBase::operator<<(void *  lpPointer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:627
		CgsDev::PrintMode leSavedPrintMode;

	}
}

void CgsDev::StrStreamBase::operator<<(CgsDev::PrintMode  lePrintMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::ImageMessage::PrepareForSend(uint16_t  lu16CurrentFrame, RoadRulesRecvData::NetworkPlayerID  lImageSenderPlayerID, RoadRulesRecvData::NetworkPlayerID  lImageReceiverPlayerID, BrnGameState::GameStateModuleIO::EImageType  leImageType, CgsID  lRoadBeatenID, uint16_t  lu16PhotoPacketNumber, uint16_t  lu16TotalPhotoPacketCount, uint16_t  lu16NumberOfBytesOfPhotoData, void *  lpPhotoData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemCpy(/* parameters */);
	{
		// BrnImageMessage.cpp:127
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnImageMessage.cpp:128
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnImageMessage.cpp:129
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnImageMessage.cpp:130
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
	}
}

void BrnGameState::BurnoutSkillzData::GetBurnoutSkill(BrnGameState::BurnoutSkillzData::EBurnoutSkillType  leSkillType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BurnoutSkillzData::GetSkillAccuracy(BrnGameState::BurnoutSkillzData::EBurnoutSkillType  leSkillType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::BurnoutSkillzData::SetBurnoutSkill(BrnGameState::BurnoutSkillzData::EBurnoutSkillType  leSkillType, float32_t  lfNewValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnNetwork::BurnoutSkillzMessage::PackOrUnpack() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnBurnoutSkillzMessage.cpp:93
		BrnNetworkManager::PackOrUnpackResult lxResult;

		// BrnBurnoutSkillzMessage.cpp:94
		BrnGameState::BurnoutSkillzData::EBurnoutSkillType leSkillType;

	}
	BrnGameState::operator++(/* parameters */);
	{
		// BrnBurnoutSkillzMessage.cpp:102
		float32_t lfTemp;

		BrnGameState::BurnoutSkillzData::GetBurnoutSkill(/* parameters */);
		BrnGameState::BurnoutSkillzData::GetSkillAccuracy(/* parameters */);
		BrnGameState::BurnoutSkillzData::SetBurnoutSkill(/* parameters */);
	}
	{
		// BrnBurnoutSkillzMessage.cpp:104
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnGameState::BurnoutSkillzData::GetSkillAccuracy(/* parameters */);
}

void BrnNetwork::FreeburnChallengeMessage::PrepareForSend(uint16_t  lu16FrameCount, CgsID  lChallengeID, BrnNetwork::BrnNetworkModuleIO::EChallengeEventType  leEventType, BrnGameState::EChallengeStatus  leChallengeStatus, int32_t  liActionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnFreeburnChallengeMessage.cpp:152
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

::::KI_NETWORK_COMPRESSED_PICTURE_FORMAT = 1433534630;

::::KI_NETWORK_PHOTO_FORMAT = 1433536677;

::::K_GAMER_PICTURE_FORMAT = 1433536677;

::::K_NETWORK_PERF_CHANNEL = 8;

::::K_NETWORK2_PERF_CHANNEL = 9;

::::K_NETWORK3_PERF_CHANNEL = 18;

::::KU_INVALID_LANDMARK_INDEX = -1;

::::KF_ASPECTRATIO_WIDESCREEN = [63, 227, 142, 57];

::::KF_ASPECTRATIO_STANDARD = [63, 170, 170, 171];

::::KF_ASPECTRATIO_SQUARE = [63, 128, 0, 0];

::::KF_ASPECTRATIO_STAND_IN_PLEASE_REMOVE_ME = [63, 227, 142, 57];

::::KF_DEFAULT_FOVHORIZONTAL = [63, 201, 15, 219];

::::KF_DEFAULT_ASPECTRATIO = [63, 227, 142, 57];

::::KF_DEFAULT_NEARCLIPPLANE = [61, 204, 204, 205];

::::KF_DEFAULT_FARCLIPPLANE = [68, 122, 0, 0];

::::KF_DEFAULT_DEPTHOFFIELD = [63, 128, 0, 0];

::::KF_GRAVITY = [65, 28, 245, 195];

::::KE_PHYSICS_PERFMON_PAGE = 6;

::::kfSteeringPower = [63, 128, 0, 0];

CgsWorld::KU_INVALID_WORLD_MAP_VALUE = -1;

BrnReplays::KF_REPLAY_START_TIME = [65, 112, 0, 0];

BrnReplays::KF_REPLAY_LENGTH = [65, 160, 0, 0];

BrnReplays::KAC_STREAM_MAGIC_NUMBER = "REPLAY ";

CgsFileSystem::KU_INVALID_FILE_ID = -1;

CgsSceneManager::KF_DEFAULT_MIN_PADDING = [61, 204, 204, 205];

CgsSceneManager::KF_DEFAULT_MAX_PADDING = [64, 0, 0, 0];

CgsSceneManager::KU16_INVALID_ENTITY_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INSTANCE_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INDEX = -1;

CgsSceneManager::KU_SPATIAL_PARTITION_INVALID_ID = -1;

CgsSound::Playback::K_MIN_RESERVED_IDENT = -16;

CgsSound::Playback::K_INIT_SND9_SUBMIX_IDENT = -16;

Attrib::key_default = -2887443745685561006;

Attrib::h64_default = -2887443745685561006;

Attrib::Hash::physicsvehicledriftattribs::DriftAngularDamping = -7987274848054600901;

Attrib::Hash::physicsvehicledriftattribs::DriftMaxAngle = -2994767941176318032;

Attrib::Hash::physicsvehicledriftattribs::DriftSidewaysDamping = -2483459419315854033;

Attrib::Hash::physicsvehicledriftattribs::ForcedDriftStartSlip = -6912247002206191947;

Attrib::Hash::physicsvehicledriftattribs::ForcedDriftTimeToReachBaseSlip = -6629571209366667655;

Attrib::Hash::physicsvehicledriftattribs::GasDriftScaleFactor = -4333709530778156113;

Attrib::Hash::physicsvehicledriftattribs::GripFromBrake = -2382352998964909567;

Attrib::Hash::physicsvehicledriftattribs::GripFromGasLetOff = -639186851837051004;

Attrib::Hash::physicsvehicledriftattribs::InitialDriftPushBaseInc = -1687458581941323946;

Attrib::Hash::physicsvehicledriftattribs::InitialDriftPushTime = -2635178875663518084;

Attrib::Hash::physicsvehicledriftattribs::NaturalDriftScaleDecay = -701798028399705032;

Attrib::Hash::physicsvehicledriftattribs::NaturalYawTorque = -30919134522791338;

Attrib::Hash::physicsvehicledriftattribs::NaturalYawTorqueCutOffAngle = -327284094809810262;

Attrib::Hash::physicsvehicledriftattribs::NeutralTimeToReduceDrift = -1265753866060659382;

Attrib::Hash::physicsvehicledriftattribs::SideForceDirftScaleCutOff = -3301564056552839641;

Attrib::Hash::physicsvehicledriftattribs::SideForceDriftAngleCutOff = -2437558699454416996;

Attrib::Hash::physicsvehicledriftattribs::SideForceDriftSpeedCutOff = -7527846554673069815;

Attrib::Hash::physicsvehicledriftattribs::SideForcePeakDriftAngle = -1859027027580878885;

Attrib::Hash::physicsvehicledriftattribs::TimeForNaturalDrift = -2192670478953321175;

Attrib::Hash::physicsvehiclebodyrollattribs::FactorOfWeightX = -8854577714803822838;

Attrib::Hash::physicsvehiclebodyrollattribs::FactorOfWeightZ = -2898700536974267796;

Attrib::Hash::physicsvehiclebodyrollattribs::PitchSpringDampening = -2769872210820837534;

Attrib::Hash::physicsvehiclebodyrollattribs::RollSpringDampening = -8279220931350705981;

Attrib::Hash::physicsvehiclebodyrollattribs::WeightTransferDecayZ = -8641409400008704383;

Attrib::Hash::physicsvehiclesuspensionattribs::InAirDamping = -4391887702944398535;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxPitchDampingOnLanding = -5239064295522386902;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxRollDampingOnLanding = -2189969058134543695;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxVertVelocityDampingOnLanding = -7578424394703509952;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxYawDampingOnLanding = -9159666339184342346;

Attrib::Hash::physicsvehiclesteeringattribs::AiPidCoefficientDriftI = -2790084423631939863;

Attrib::Hash::physicsvehiclesteeringattribs::AiPidCoefficientP = -5300428111701324124;

Attrib::Hash::physicsvehiclesteeringattribs::SpeedForMaxAngle = -5882573263584155911;

Attrib::Hash::physicsvehiclesteeringattribs::SpeedForMinAngle = -703227396336610229;

Attrib::Hash::physicsvehiclesteeringattribs::StraightReactionBias = -153043821033732338;

Attrib::Hash::physicsvehicleengineattribs::Differential = -1187171424841002758;

Attrib::Hash::physicsvehicleengineattribs::EngineBraking = -7261967632121772986;

Attrib::Hash::physicsvehicleengineattribs::EngineLowEndTorqueFactor = -2588301351876699819;

Attrib::Hash::physicsvehicleengineattribs::FlyWheelInertia = -8061433635503997159;

Attrib::Hash::physicsvehicleengineattribs::GearRatios1 = -2125503289046983800;

Attrib::Hash::physicsvehicleengineattribs::GearRatios2 = -1019379010385919379;

Attrib::Hash::physicsvehicleengineattribs::GearUpRPMs1 = -8165513262891634271;

Attrib::Hash::physicsvehicleengineattribs::GearUpRPMs2 = -1326377965340261792;

Attrib::Hash::physicsvehicleengineattribs::MaxTorque = -4687445904566254869;

Attrib::Hash::physicsvehicleengineattribs::TorqueScales2 = -4818449724105158753;

Attrib::Hash::physicsvehicleengineattribs::TransmissionEfficiency = -2275951549147437131;

Attrib::Hash::physicsvehiclecollisionattribs::BodyBox = -7996561706975887698;

Attrib::Hash::physicsvehicleboostattribs::BlueBoostBase = -4153969524460304374;

Attrib::Hash::physicsvehicleboostattribs::BlueBoostKick = -6909139712711029827;

Attrib::Hash::physicsvehicleboostattribs::BlueMaxBoostSpeed = -2832201897230299495;

Attrib::Hash::physicsvehicleboostattribs::BoostBase = -1449587645724428634;

Attrib::Hash::physicsvehicleboostattribs::BoostKick = -7916157251067609346;

Attrib::Hash::physicsvehicleboostattribs::BoostKickHeightOffset = -7644159426826663967;

Attrib::Hash::physicsvehicleboostattribs::BoostKickMaxStartSpeed = -6769221666331370883;

Attrib::Hash::physicsvehicleboostattribs::BoostKickTime = -2762519771875884640;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleBaseAttribs = -3240169895484535073;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleBodyRollAttribs = -4714783353325512142;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleDriftAttribs = -1740125582048760770;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleEngineAttribs = -3611665628868408173;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleSteeringAttribs = -3941675927247818081;

Attrib::Hash::burnoutcarasset::CameraBumperBehaviourAsset = -2996460651824973746;

Attrib::Hash::burnoutcarasset::CarUnlockShot = -3361774045014665585;

Attrib::Hash::burnoutcarasset::DefaultWheel = -5763545711493309811;

Attrib::Hash::burnoutcarasset::EngineEntityKey = -8286362179805877589;

Attrib::Hash::burnoutcarasset::GameplayAsset = -4159014215320274250;

Attrib::Hash::burnoutcarasset::GraphicsAsset = -2452633230673053972;

Attrib::Hash::burnoutcarasset::MasterSceneMayaBinaryFile = -4033406791020503385;

Attrib::Hash::burnoutcarasset::SoundEngineAsset = -3616434373283268524;

Attrib::Hash::burnoutcarasset::SoundExhaustAsset = -6601183205448776399;

Attrib::Hash::physicsvehiclebaseattribs::AngularDrag = -2587998968637529485;

Attrib::Hash::physicsvehiclebaseattribs::BrakeScaleToFactor = -6724323949230824050;

Attrib::Hash::physicsvehiclebaseattribs::DownForceZOffset = -7435943572713341390;

Attrib::Hash::physicsvehiclebaseattribs::DriveTimeDeformLimitNegY = -3280670874417285740;

Attrib::Hash::physicsvehiclebaseattribs::DriveTimeDeformLimitPosZ = -1666416025769953155;

Attrib::Hash::physicsvehiclebaseattribs::DrivingMass = -3787790934024483857;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurveFloorSlipRatio = -1630393006643118008;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurvePeakCoefficient = -5067077354339468201;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurvePeakSlipRatio = -4731126951183549001;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireAdhesiveLimit = -1286355289157071958;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireDynamicFrictionCoefficient = -6349451596478070934;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireLongForceBias = -1377722699248955594;

Attrib::Hash::physicsvehiclebaseattribs::FrontWheelMass = -6833821662839661425;

Attrib::Hash::physicsvehiclebaseattribs::HighSpeedAngularDamping = -8330303592681147153;

Attrib::Hash::physicsvehiclebaseattribs::LinearDrag = -8487842249909718459;

Attrib::Hash::physicsvehiclebaseattribs::LockBrakeScale = -4714331935212091080;

Attrib::Hash::physicsvehiclebaseattribs::MagicBrakeFactorStraightLine = -2858441074664930156;

Attrib::Hash::physicsvehiclebaseattribs::MagicBrakeFactorTurning = -897565922227798600;

Attrib::Hash::physicsvehiclebaseattribs::PitchDampingOnTakeOff = -5137150473961999634;

Attrib::Hash::physicsvehiclebaseattribs::PowerToFront = -8388318914847005089;

Attrib::Hash::physicsvehiclebaseattribs::RearLatGripCurvePeakCoefficient = -753131893419114293;

Attrib::Hash::physicsvehiclebaseattribs::RearLatGripCurvePeakSlipRatio = -7653661541150633661;

Attrib::Hash::physicsvehiclebaseattribs::RearLongGripCurvePeakCoefficient = -412225798706036160;

Attrib::Hash::physicsvehiclebaseattribs::RearTireAdhesiveLimit = -9041112529150658;

Attrib::Hash::physicsvehiclebaseattribs::RearTireDynamicFrictionCoefficient = -5724009369781865567;

Attrib::Hash::physicsvehiclebaseattribs::RearTireLongForceBias = -8694020640479969529;

Attrib::Hash::physicsvehiclebaseattribs::RearWheelMass = -1977907534454313347;

Attrib::Hash::physicsvehiclebaseattribs::SurfaceFrontGripFactor = -179166364723212449;

Attrib::Hash::physicsvehiclebaseattribs::SurfaceRoughnessFactor = -2535698590537951711;

Attrib::Hash::physicsvehiclebaseattribs::TractionLineLength = -3299690291498919306;

Attrib::Hash::physicsvehiclebaseattribs::YawDampingOnTakeOff = -1675471727477182158;

Attrib::ClassName::physicsvehiclebaseattribs = -604515486933319770;

Attrib::ClassName::physicsvehiclehandling = -7610765364513722643;

Attrib::ClassName::physicsvehicleboostattribs = -1522656162225671394;

Attrib::ClassName::physicsvehiclecollisionattribs = -2335842357891624052;

Attrib::ClassName::physicsvehicleengineattribs = -553898650669114478;

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MIN = [70, 28, 64, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MAX = [71, 67, 80, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_RANGE = [71, 28, 64, 0];

BrnPhysics::Deformation::KE_PMP_DEFORMATION = 15;

BrnPhysics::Vehicle::kfVehicleDefaultAngularDrag = [55, 39, 197, 172];

BrnPhysics::Vehicle::kfVehicleDefaultLinearDrag = [55, 39, 197, 172];

BrnPhysics::Vehicle::kfVehicleDefaultMaxLinearDisplacement = [68, 250, 0, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxAngularDisplacement = [63, 0, 0, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxLinearVelocity = [71, 234, 96, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxAngularVelocity = [65, 240, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultAngularDrag = [0, 0, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultLinearDrag = [0, 0, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultMaxLinearDisplacement = [68, 250, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultMaxAngularDisplacement = [64, 160, 0, 0];

BrnPhysics::Vehicle::krMPS2MPH = [64, 15, 41, 247];

BrnPhysics::Vehicle::krMPH2MPS = [62, 228, 226, 109];

BrnPhysics::Vehicle::KF_STICK_AFTERTOUCH_MODIFIER = [62, 128, 0, 0];

BrnPhysics::Vehicle::KF_STUCK_IN_COLLISION_TEST_INTERVAL = [64, 160, 0, 0];

BrnAI::KF_MAX_TURN_ANGLE = [62, 178, 184, 194];

BrnAI::KF_AVERAGE_TURN_ANGLE = [62, 50, 184, 194];

BrnAI::KF_AI_MAX_SPEED_MULTIPLIER = [63, 153, 153, 154];

BrnAI::KF_AI_MAX_BOOST_SPEED_MULTIPLIER = [63, 140, 204, 205];

BrnAI::KF_IN_FRONT_OF_PLAYER_DISTANCE = [66, 160, 0, 0];

BrnAI::KX_SECTION_FLAG_AI_INTERSTATE_EXIT = -128;

BrnTraffic::KU_INVALID_SECTION = -1;

BrnTraffic::KU_INVALID_HULL = -1;

BrnTraffic::KU_INVALID_NEIGHBOUR = -1;

BrnTraffic::KU_INVALID_STOPLINE = -1;

BrnTraffic::KU_INVALID_FLOWTYPE = -1;

BrnTraffic::KU_INVALID_KILLZONEREGION = -1;

BrnTraffic::KU_INVALID_TRAFFIC_LIGHT_TRIGGER = -1;

BrnTraffic::KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE = [69, 204, 204, 0];

BrnTraffic::KU_INVALID_HULL_RUNTIME = -1;

BrnTraffic::KU_INVALID_UPDATE_FRAME = -1;

BrnTraffic::KF_UPDATE_TIME_DELTA_NO_SLOWMO = [61, 204, 204, 205];

BrnTraffic::KF_SECONDS_PER_MINUTE = [66, 112, 0, 0];

BrnTraffic::KF_HULL_CHANGE_PREDICTION_TIME = [64, 160, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_FEELERS_ANGLE = [62, 134, 10, 146];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_MAX = [64, 128, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_SCORE_FACTOR = [65, 32, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_PASSING_MAX_DISTANCE = [65, 32, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_HEIGHT_SKIP = [64, 64, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_MAX_RADIUS = [66, 112, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_SCORE_NEEDS_ACTION = [66, 130, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_ONLINE_SCORE_NEEDS_ACTION = [67, 72, 0, 0];

BrnTraffic::KF_DENSITY_BASE_SCALE = [63, 128, 0, 0];

BrnTraffic::KF_VEHICLE_BBOX_FATNESS = [62, 225, 71, 174];

BrnTraffic::KF_VEHICLE_COLLIDABILITY_RADIUS = [65, 160, 0, 0];

BrnTraffic::KF_VEHICLE_PARTIAL_UPDATE_DISTANCE = [67, 22, 0, 0];

BrnTraffic::KF_GENERATOR_PHASE_SHIFT = [63, 51, 51, 51];

BrnTraffic::KF_MIN_GENERATION_FACTOR = [63, 76, 204, 205];

BrnTraffic::KF_MAX_GENERATION_FACTOR = [63, 153, 153, 154];

BrnTraffic::KF_MAX_DIST_ACROSS_LANE_lhs = [63, 51, 51, 51];

BrnTraffic::KF_PARAM_END_OF_SECTION_APPROACH_DIST = [66, 160, 0, 0];

BrnTraffic::KF_PARAM_AVOIDANCE_BIAS = [64, 64, 0, 0];

BrnTraffic::KF_PARAM_SPACE_FACTOR = [64, 64, 0, 0];

BrnTraffic::KF_PARAM_NEXT_PARAM_TIME_THRESHOLD = [64, 0, 0, 0];

BrnTraffic::KF_PARAM_MIN_NEXT_PARAM_DIST_THRESHOLD = [65, 200, 0, 0];

BrnTraffic::KF_PARAM_MAX_ACCEL_FORCE = [62, 117, 194, 143];

BrnTraffic::KF_PARAM_MIN_MERGE_DISTANCE = [65, 96, 0, 0];

BrnTraffic::KF_PARAM_MIN_SPAWN_DISTANCE = [65, 160, 0, 0];

BrnTraffic::KF_PARAM_MIN_SPEED_FOR_STOPPED_AT_LIGHTS = [64, 160, 0, 0];

BrnTraffic::KF_PARAM_MIN_DIST_AHEAD_FOR_LANE_CHANGE = [65, 112, 0, 0];

BrnTraffic::KF_PARAM_MIN_DIST_BEHIND_FOR_LANE_CHANGE = [65, 160, 0, 0];

BrnTraffic::KF_PARAM_IMPATIENCE_PROB = [62, 153, 153, 154];

BrnTraffic::KF_PARAM_MIN_SWERVE_FOR_ANNOYANCE = [63, 0, 0, 0];

BrnTraffic::KF_PARAM_FLASH_LIGHTS_PROB = [63, 25, 153, 154];

BrnTraffic::KF_PARAM_BEEP_HORN_PROB = [63, 76, 204, 205];

BrnTraffic::KF_PARAM_BEEP_HORN_PROB_PANICKING = [63, 51, 51, 51];

BrnTraffic::KF_SPONTANEOUS_CONE_DEPTH_lhs = [65, 240, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_HALF_ANGLE_lhs = [65, 32, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_DEPTH_lhs = [66, 72, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_HALF_ANGLE_lhs = [65, 160, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_DEPTH_lhs = [66, 72, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_HALF_ANGLE_lhs = [64, 32, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_BRAKING_FACTOR = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_OPTIMAL_DISTANCE_FROM_TARGET_lhs = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_SPEED_BALANCE_FACTOR_lhs = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_START_DISTANCE_FROM_TARGET = [64, 64, 0, 0];

BrnTraffic::KF_VEHICLE_SLOW_FOR_PARAM_SPEED_FACTOR_lhs = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_STEERING_DELTA_lhs = [60, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_STEERING_ANGLE_lhs = [65, 200, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_SWERVE_COS_ANGLE = [63, 0, 0, 0];

BrnTraffic::KF_VEHICLE_DIRECTION_DAMPING_FACTOR_lhs = [64, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SWERVE_DISTANCE = [66, 112, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_SPONTANEOUS_CRASH_SPEED = [65, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SIDEWAYS_SWERVE_DISTANCE = [64, 192, 0, 0];

BrnTraffic::KF_VEHICLE_SAME_WAY_SWERVE_FACTOR = [62, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_INDICATOR_FLASH_TIME = [62, 76, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_INDICATOR_FLASH_TIME = [62, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MIN_HEADLIGHT_FLASH_TIME = [62, 25, 153, 154];

BrnTraffic::KF_VEHICLE_MAX_HEADLIGHT_FLASH_TIME = [62, 204, 204, 205];

BrnTraffic::KI_VEHICLE_MIN_BRAKELIGHT_DEBOUNCE = -6;

BrnTraffic::KF_VEHICLE_REACT_TO_PLAYER_CONE_BACK_BIAS = [64, 192, 0, 0];

BrnTraffic::KF_VEHICLE_REACT_TO_PLAYER_CONE_LENGTH = [66, 152, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_REACT_TO_PLAYER_SPEED = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DISTANCE_TO_MOVE_lhs = [62, 204, 204, 205];

BrnTraffic::KF_VEHICLE_STOPLINE_SIDE_SPACE_lhs = [63, 102, 102, 102];

BrnTraffic::KF_VEHICLE_STOPLINE_SIDE_VARIATION_lhs = [62, 128, 0, 0];

BrnTraffic::KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT = [65, 112, 0, 0];

BrnTraffic::KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT_SHOWTIME = [66, 32, 0, 0];

BrnTraffic::KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_SCALE = [61, 143, 92, 41];

BrnTraffic::KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_DECAY = [63, 51, 51, 51];

BrnTraffic::KF_VEHICLE_PHYSICAL_STEERING_SCALE = [63, 128, 0, 0];

BrnTraffic::KF_VEHICLE_PHYSICAL_STEERING_IF_RISK = [63, 166, 102, 102];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_SLAM_RECOVERY = [63, 192, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_COS_ANGLE_FOR_SLAM_RECOVERY = [63, 122, 225, 72];

BrnTraffic::KF_VEHICLE_MAX_DIST_TO_RECOVER_FROM_SLAM = [65, 240, 0, 0];

BrnTraffic::KF_VEHICLE_FLIPOUT_AND_SPINOUT_AIRRAMMAG_SCALE = [63, 25, 153, 154];

BrnTraffic::KF_VEHICLE_TIME_TO_STEER_FROM_SLAM = [64, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_TIME_FOR_RECOVERY = [64, 160, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_CLEANUP = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_TIME_FOR_REINSERTION = [65, 112, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_REINSERTION = [65, 32, 0, 0];

BrnTraffic::KF_VEHICLE_ROLL_FACTOR_lhs = [189, 204, 204, 205];

BrnTraffic::KF_VEHICLE_ROLL_FILTER_lhs = [67, 180, 0, 0];

BrnTraffic::KF_VEHICLE_PITCH_RECIP_MAX_DECEL_lhs = [62, 76, 204, 205];

BrnTraffic::KF_VEHICLE_PITCH_SCALE_lhs = [61, 76, 204, 205];

BrnTraffic::KF_VEHICLE_PITCH_DAMPING_FACTOR_lhs = [63, 115, 51, 51];

BrnTraffic::KF_APPROX_LANE_WIDTH_lhs = [64, 144, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_DIST_FROM_LANE_CENTRE_lhs = [63, 166, 102, 102];

BrnTraffic::KF_RIVAL_MAX_DIST_TO_LANE = [65, 112, 0, 0];

BrnTraffic::KF_RIVAL_MIN_COS_ANGLE_TO_LANE_DIR = [63, 76, 204, 205];

BrnTraffic::KF_VEHICLE_TIME_FOR_NEW_SWERVE = [63, 0, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_CHANGE_SWERVE_DIRECTION_TIME = [61, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_CHANGE_SWERVE_DIRECTION_TIME = [63, 128, 0, 0];

BrnTraffic::KF_BULB_WARMTH_DELTA_PER_SECOND = [69, 156, 64, 0];

BrnTraffic::KF_STOP_LINE_REACTION_DISTANCE = [66, 32, 0, 0];

BrnTraffic::KF_LANE_CHANGE_DICE_ROLL_SCALE = [64, 160, 0, 0];

BrnTraffic::KF_RENDER_CULL_DISTANCE = [67, 122, 0, 0];

BrnTraffic::KF_RENDER_CULL_CORONA_DISTANCE = [67, 250, 0, 0];

BrnTraffic::KF_CORONA_SCALE_DIST_AT_ONE = [65, 0, 0, 0];

BrnTraffic::KF_CORONA_SCALE_DIST_AT_TWO = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SWERVE_DISTANCE_SQ = [69, 97, 0, 0];

BrnTraffic::KF_RENDER_CULL_DISTANCE_SQ = [71, 116, 36, 0];

BrnTraffic::KF_RENDER_CULL_CORONA_DISTANCE_SQ = [72, 116, 36, 0];

BrnTraffic::KF_VEHICLE_PARTIAL_UPDATE_DISTANCE_SQ = [70, 175, 200, 0];

BrnTraffic::KF_VEHICLE_AVOIDABILITY_RADIUS = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_DEFAULT = [63, 0, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_THRESHOLD = [63, 128, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_DEFAULT = [63, 76, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_EVENTS = [62, 76, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_EVENTS = [63, 192, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_TRAFFIC = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_RACECAR = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_PLAYER = [66, 200, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_RANGE_MIN = [65, 32, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_RANGE_MAX = [66, 200, 0, 0];

BrnTraffic::KF_CRASHSLIDER_HOLLYWOOD_ACTION_THRESHOLD = [60, 35, 215, 10];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME = [61, 204, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME = [63, 192, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME_SPIKE = [0, 0, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME_SPIKE = [65, 32, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MIN = [65, 240, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MAX = [66, 52, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_TIME_AFTER_SPIKE_RELEVEL = [64, 160, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_SPIKE_AFTER_MISBOUNCE_TIME = [64, 64, 0, 0];

BrnTraffic::KF_VEHICLE_NOT_DRIVING_SO_SHOULD_GET_CLEARED_TIME = [65, 32, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_MIN_THRESHOLD_TO_WHACK = [63, 128, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_WHACK_HIM_CHANCE = [64, 160, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_WHACK_HIM_TIMER = [64, 160, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_CLEAR_TRAFFIC_TIME = [65, 240, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_HEIGHT = [68, 122, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS_IN_DRIVE_THRU = [67, 122, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP = [66, 180, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP_MIN_DISTSQ = [70, 28, 64, 0];

BrnTraffic::KE_TRAFFIC_PERFMON_PAGE = 2;

BrnProgression::KF_PLAYER_BOOST_THRESHOLD = [65, 160, 0, 0];

BrnProgression::KF_PLAYERSTAT_OVERDRIVE_EARNER = [67, 250, 0, 0];

BrnProgression::KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX = [66, 112, 0, 0];

BrnProgression::KF_PLAYER_STAT_TEMPORARY_ACCELERATOR = [65, 32, 0, 0];

BrnWorld::KI_INVALID_OPPONENT = -1;

BrnWorld::KI_INVALID_RIVAL = -1;

BrnWorld::KF_AI_INACTIVE_DISTANCE_BIAS = [65, 240, 0, 0];

BrnWorld::KF_INVALID_DISTANCE = [127, 127, 255, 255];

BrnWorld::KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME = [64, 0, 0, 0];

BrnWorld::KI_INVALID_CAR_COLOUR = -1;

BrnWorld::KI_INVALID_CAR_COLOUR_PALETTE = -1;

BrnWorld::KE_RACEECAR_PERFMON_PAGE = 12;

BrnWorld::KF_MIN_SPEED_FOR_AIR_MPH = [64, 0, 0, 0];

BrnWorld::KU_COLLISION_MASK_TOP_BIT = -32768;

BrnWorld::KF_POWER_PARK_NEARBY_RADIUS = [65, 112, 0, 0];

CgsInput::KF_BUTTONDOWNTHRESHOLD = [61, 204, 204, 205];

CgsUnicode::KU_TRAILING_BYTE_MASK = -64;

CgsUnicode::KU_TRAILING_BYTE = -128;

CgsUnicode::KU_SINGLE_BYTE_CHAR_MASK = -128;

CgsUnicode::KU_TWO_BYTE_CHAR_MASK = -32;

CgsUnicode::KU_TWO_BYTE_CHAR = -64;

CgsUnicode::KU_THREE_BYTE_CHAR_MASK = -16;

CgsUnicode::KU_THREE_BYTE_CHAR = -32;

CgsUnicode::KU_FOUR_BYTE_CHAR_MASK = -8;

CgsUnicode::KU_FOUR_BYTE_CHAR = -16;

CgsGraphics::DefaultValues::mkDefault_float_t = [0, 0, 0, 0];

CgsGraphics::DefaultValues::mkDefault_double_t = [0, 0, 0, 0, 0, 0, 0, 0];

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

BrnNetwork::KF_NETWORK_TIME_ACCURACY = [58, 218, 116, 14];

BrnNetwork::KF_NETWORK_DISTANCE_ACCURACY = [59, 163, 215, 10];

BrnNetwork::KU16_INVALID_FRAME = -1;

BrnNetwork::KF_MAX_LINEAR_SPEED = [67, 7, 0, 0];

BrnNetwork::KF_MAX_ANGULAR_SPEED = [66, 124, 0, 0];

BrnNetwork::KF_MIN_STEERING = [191, 128, 0, 0];

BrnNetwork::KF_MAX_STEERING = [63, 128, 0, 0];

BrnNetwork::KF_MIN_ACCELERATION = [0, 0, 0, 0];

BrnNetwork::KF_MAX_ACCELERATION = [63, 128, 0, 0];

BrnNetwork::KF_MIN_BRAKING = [0, 0, 0, 0];

BrnNetwork::KF_MAX_BRAKING = [63, 128, 0, 0];

BrnNetwork::KI_MIN_GEAR = -1;

BrnNetwork::KU16_MAX_FRAME = -2;

BrnNetwork::KF_ROUNDING_ERROR_SAFETY_RATIO_FOR_SPEED = [63, 125, 112, 164];

BrnNetwork::KI_MIN_ELIMINATOR_INDEX = -1;

BrnNetwork::KF_MIN_FRACTION = [0, 0, 0, 0];

BrnNetwork::KF_MAX_FRACTION = [63, 128, 0, 0];

BrnNetwork::KF_MIN_RACE_DISTANCE = [191, 128, 0, 0];

BrnNetwork::KF_MAX_RACE_DISTANCE = [72, 67, 80, 0];

BrnNetwork::KF_INVALID_NETWORK_DISTANCE = [191, 128, 0, 0];

BrnNetwork::KU16_MAX_HULL_SYNC_FRAME = -1;

BrnNetwork::KU16_MAX_TRAFFIC_HASH = -1;

BrnNetwork::KU16_MAX_UPDATE_FRAME = -1;

BrnNetwork::KU16_CRASHING_TRAFFIC_MAX_FRAMES_SINCE_SRT = -1;

BrnNetwork::KI_INVALID_ROAD_RULES_PB_SCORE = -1;

BrnNetwork::KU16_MAX_RESTART_FRAME = -1;

BrnNetwork::KU16_MAX_HULL_VALUE = -1;

BrnStreetData::KI_INTERSTATE_EXIT_ROAD_INDEX = -2;

CgsNetwork::K_INVALID_PLAYER_ID = -1;

CgsNetwork::KU16_MAX_FRAMES = -2;

CgsNetwork::KU8_INVALID_GAME_ID = -1;

CgsNetwork::KI8_INVALID_TYPE = -1;

CgsNetwork::KU16_INVALID_FRAME = -1;

CgsNetwork::KU16_HALF_OF_FRAMES = -32768;

CgsNetwork::KU_INVALID_FRAME = -1;

CgsNetwork::KU_HALF_OF_FRAMES = -2147483648;

CgsNetwork::KI_MAX_UINT32 = -1;

CgsNetwork::KI_MIN_INT32 = -2147483648;

CgsNetwork::KI_MIN_PLAYER_ID = -1;

CgsNetwork::KF_DEFAULT_MIN_TIME = [0, 0, 0, 0];

CgsNetwork::KF_DEFAULT_MAX_TIME = [72, 125, 32, 0];

CgsNetwork::KF_DEFAULT_MAX_TIME_ERROR = [60, 163, 215, 10];

CgsNetwork::KE_ACK_OR_NACK;

CgsNetwork::KE_HEADER = 41;

CgsNetwork::KE_ALL_MESSAGE_TYPES = 42;

CgsNetwork::KF_ONLINE_TIME_DIFFERENCE_TOLERANCE = [61, 76, 204, 205];

renderengine::PS3PIXELFORMAT_REMAP_MASK = -32768;

renderengine::PS3PIXELFORMAT_REMAPORDER_MASK = -2147483648;

renderengine::PS3VERTEXTYPE_NA = -1;

CgsDev::PI = [64, 73, 15, 219];

CgsDev::KC_DEBUG_CHARACTER_SQUARE = -128;

CgsDev::KC_DEBUG_CHARACTER_CROSS = -127;

CgsDev::KC_DEBUG_CHARACTER_CIRCLE = -126;

CgsDev::KC_DEBUG_CHARACTER_UP = -125;

CgsDev::KC_DEBUG_CHARACTER_DOWN = -124;

CgsDev::KC_DEBUG_CHARACTER_LEFT = -123;

CgsDev::KC_DEBUG_CHARACTER_RIGHT = -122;

CgsDev::KC_DEBUG_CHARACTER_DEBUG = -121;

CgsDev::WarningSystem::Discipline::ALL = -1;

CgsDev::WarningSystem::Discipline::SOUND_DESIGN = -2147483648;

CgsDev::WarningSystem::Discipline::SOUND_ALL = -2147483648;

CgsDev::Message::ALL = -1;

EA::Thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

EA::Thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

EA::Thread::kThreadPriorityUnknown = -2147483648;

EA::Thread::kThreadPriorityMin = -128;

EA::Thread::kProcessorDefault = -1;

EA::Thread::kProcessorAny = -2;

rw::audio::core::PRIORITY_PERMANENT = [66, 200, 0, 0];

rw::audio::core::PI = [64, 73, 15, 219];

rw::audio::core::CPU_CLOCK_MULTIPLIER = [66, 32, 0, 0];

rw::audio::core::PROCESSINGSTAGE_MASTERINGVOICE = -1;

rw::audio::core::DECIBEL_MIN = [196, 122, 0, 0];

rw::audio::core::LINEARGAIN_MIN = [0, 0, 0, 0];

rw::audio::core::CENTS_MIN = [199, 195, 80, 0];

rw::audio::core::LINEARPITCH_MIN = [21, 141, 145, 46];

rw::audio::core::PITCHLINEARTOCENTSCONST = [69, 121, 37, 5];

rw::audio::core::CODAERR_NOT_READY = -1;

rw::audio::core::CODAERR_UNSUPPORTED = -2;

rw::audio::core::EAXMA_HEADER_BLOCKSIZE_BITMASK = -4;

rw::datacontainer::DEFAULTBATCHSIZE = -2147483648;

rw::math::fpu::TOP_BIT32 = -2147483648;

rw::math::fpu::NOT_TOP_BIT32 = 2147483647;

rw::math::fpu::TOP_BIT64 = -9223372036854775808;

rw::math::fpu::MIN_INT32 = -2147483648;

rw::math::fpu::MIN_FLOAT = [0, 128, 0, 0];

rw::math::fpu::MAX_FLOAT = [127, 127, 255, 255];

rw::math::fpu::SMALL_FLOAT = [55, 128, 0, 0];

rw::math::fpu::DEGREES_TO_RADIANS = [60, 142, 250, 53];

rw::math::fpu::RADIANS_TO_DEGREES = [66, 101, 46, 225];

rw::math::fpu::E = [64, 45, 248, 84];

rw::math::fpu::PI = [64, 73, 15, 219];

rw::math::fpu::TWO_PI = [64, 201, 15, 219];

rw::math::fpu::HALF_PI = [63, 201, 15, 219];

rw::math::fpu::QUARTER_PI = [63, 73, 15, 219];

rw::math::fpu::SQRT_PI = [63, 226, 223, 197];

rw::math::fpu::INV_PI = [62, 162, 249, 131];

rw::math::fpu::SQRT_2 = [63, 181, 4, 243];

rw::math::fpu::SQRT_HALF = [63, 53, 4, 243];

rw::math::fpu::SQRT_3 = [63, 221, 179, 215];

rw::math::fpu::ZERO_FLOAT = [0, 0, 0, 0];

rw::math::fpu::VECTOR_MIN_SLERP_ANGLE = [61, 178, 184, 195];

rw::math::fpu::MATRIX_MIN_SLERP_ANGLE = [61, 14, 250, 53];

rw::math::fpu::QUATERNION_SLERP_DOT_TOLERANCE = [63, 127, 190, 119];

rw::math::fpu::MINIMUM_RECIPROCAL = [0, 32, 0, 0];

rw::math::fpu::ONE_MINUS_EPSILON = [63, 127, 255, 254];

rw::math::fpu::TOLERANCE = [58, 131, 18, 111];

rw::collision::krGPFeatureSimplificationThreshold = [61, 76, 204, 205];

rw::collision::krGPMinimumAllowedClippingAngle = [58, 131, 18, 111];

rw::core::thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

rw::core::thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

rw::core::thread::kThreadPriorityUnknown = -2147483648;

rw::core::thread::kThreadPriorityMin = -128;

rw::core::thread::kProcessorDefault = -1;

rw::core::thread::kProcessorAny = -2;


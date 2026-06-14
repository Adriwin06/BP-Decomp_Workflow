// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// BrnChallengeSuccessManager.cpp:36
	const int32_t KI_FRAME_GAP_BETWEEN_CHALLENGE_SUCCESS_ROUND_ROBIN = 6;

}

// BrnChallengeSuccessManager.cpp:136
void BrnNetwork::ChallengeSuccessManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnChallengeSuccessManager.cpp:153
void BrnNetwork::ChallengeSuccessManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnChallengeSuccessManager.cpp:242
void BrnNetwork::ChallengeSuccessManager::HandleSendingChallengeSuccessMessage(const bool *  lpaSuccessfulActions, const bool *  lpaAccumulationThisFrame, const float32_t *  lpaActionScores) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeSuccessManager.cpp:244
		int32_t liIndex;

		// BrnChallengeSuccessManager.cpp:245
		uint16_t lu16CurrentFrame;

	}
	{
		// BrnChallengeSuccessManager.cpp:255
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		// BrnChallengeSuccessManager.cpp:256
		BrnNetwork::ChallengeSuccessManager::ChallengeSuccessData * lpSuccessData;

		// BrnChallengeSuccessManager.cpp:257
		BrnNetwork::FburnChallengeSuccessMessage * lpChallengeSuccessMessage;

	}
}

// BrnChallengeSuccessManager.cpp:718
void BrnNetwork::ChallengeSuccessManager::GetChallengeSuccessDataEntry(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeSuccessManager.cpp:720
		int32_t liIndex;

		// BrnChallengeSuccessManager.cpp:721
		BrnNetwork::ChallengeSuccessManager::ChallengeSuccessData * lpEntry;

	}
}

// BrnChallengeSuccessManager.cpp:603
void BrnNetwork::ChallengeSuccessManager::AddPlayer(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeSuccessManager.cpp:605
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
	{
		// BrnChallengeSuccessManager.cpp:615
		BrnNetwork::ChallengeSuccessManager::ChallengeSuccessData * lpEntry;

	}
}

// BrnChallengeSuccessManager.cpp:650
void BrnNetwork::ChallengeSuccessManager::RemovePlayer(AggressiveMoveData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeSuccessManager.cpp:652
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

	}
	{
		// BrnChallengeSuccessManager.cpp:661
		BrnNetwork::ChallengeSuccessManager::ChallengeSuccessData * lpEntry;

	}
}

// BrnChallengeSuccessManager.cpp:98
void BrnNetwork::ChallengeSuccessManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeSuccessManager.cpp:100
		int32_t liIndex;

		CgsContainers::FastBitArray<60>::UnSetAll(/* parameters */);
	}
}

// BrnChallengeSuccessManager.cpp:684
void BrnNetwork::ChallengeSuccessManager::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeSuccessManager.cpp:686
		int32_t liIndex;

	}
	CgsContainers::FastBitArray<60>::UnSetAll(/* parameters */);
}

// BrnChallengeSuccessManager.cpp:186
void BrnNetwork::ChallengeSuccessManager::HandleSendingUpdateMessage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeSuccessManager.cpp:188
		int32_t liIndex;

		// BrnChallengeSuccessManager.cpp:189
		uint16_t lu16CurrentFrame;

	}
	{
		// BrnChallengeSuccessManager.cpp:199
		AggressiveMoveData::NetworkPlayerID lPlayerID;

		// BrnChallengeSuccessManager.cpp:200
		BrnNetwork::ChallengeSuccessManager::ChallengeSuccessData * lpSuccessData;

		{
			// BrnChallengeSuccessManager.cpp:216
			int32_t liFramesSinceStart;

			// BrnChallengeSuccessManager.cpp:217
			BrnNetwork::FburnSuccessUpdateMessage * lpUpdateMessage;

		}
	}
}

// BrnChallengeSuccessManager.cpp:168
void BrnNetwork::ChallengeSuccessManager::ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnChallengeSuccessManager.cpp:60
void BrnNetwork::ChallengeSuccessManager::Construct(BrnNetwork::BrnNetworkModule *  lpNetworkModule, CgsNetwork::PlayerManager *  lpPlayerManager, CgsNetwork::TimeManager *  lpTimeManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeSuccessManager.cpp:62
		int32_t liIndex;

	}
	CgsContainers::FastBitArray<60>::UnSetAll(/* parameters */);
}

// BrnChallengeSuccessManager.cpp:434
void BrnNetwork::ChallengeSuccessManager::TranslateSuccessUpdate60HzTo50Hz(FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *  lpChallegeSuccessArray, FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *  lpSuccessUpdateToTranslate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeSuccessManager.cpp:436
		int32_t liSrcIndex;

		// BrnChallengeSuccessManager.cpp:437
		int32_t liTranslatedIndex;

		CgsContainers::FastBitArray<60>::UnSetAll(/* parameters */);
	}
	CgsContainers::FastBitArray<60>::IsBitSet(/* parameters */);
	CgsContainers::FastBitArray<60>::SetBit(/* parameters */);
	CgsContainers::FastBitArray<60>::IsBitSet(/* parameters */);
	CgsContainers::FastBitArray<60>::SetBit(/* parameters */);
	CgsContainers::FastBitArray<60>::IsBitSet(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnChallengeSuccessManager.cpp:477
void BrnNetwork::ChallengeSuccessManager::TranslateSuccessUpdate50HzTo60Hz(FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *  lpChallegeSuccessArray, FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *  lpSuccessUpdateToTranslate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeSuccessManager.cpp:479
		int32_t liSrcIndex;

		// BrnChallengeSuccessManager.cpp:480
		int32_t liTranslatedIndex;

		CgsContainers::FastBitArray<60>::UnSetAll(/* parameters */);
	}
	CgsContainers::FastBitArray<60>::IsBitSet(/* parameters */);
	CgsContainers::FastBitArray<60>::SetBit(/* parameters */);
	CgsContainers::FastBitArray<60>::IsBitSet(/* parameters */);
	CgsContainers::FastBitArray<60>::SetBit(/* parameters */);
	CgsContainers::FastBitArray<60>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnChallengeSuccessManager.cpp:792
void BrnNetwork::ChallengeSuccessManager::_ChallengeSuccessMessageDeliveredCallback(bool  lbSuccess, bool  lbFakeNack, CgsNetwork::SignalMessage *  lpAck, AggressiveMoveData::NetworkPlayerID  lRecvingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[42] __FUNCTION__;

	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnChallengeSuccessManager.cpp:750
void BrnNetwork::ChallengeSuccessManager::_ChallengeSuccessMessageArrivedCallback(CgsNetwork::ReliableMessage *  lpMessage, AggressiveMoveData::NetworkPlayerID  lSendingPlayerID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeSuccessManager.cpp:752
		NetworkOutFburnChallengeSuccessEvent lChallengeSucessEvent;

		// BrnChallengeSuccessManager.cpp:753
		ChallengeSuccessManager * lpChallengeManager;

		// BrnChallengeSuccessManager.cpp:754
		BrnNetwork::FburnChallengeSuccessMessage * lpChallengeSuccessMessage;

	}
	BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutFburnChallengeSuccessEvent>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnChallengeSuccessManager.cpp:348
void BrnNetwork::ChallengeSuccessManager::HandleReceivedUpdateMessage(AggressiveMoveData::NetworkPlayerID  lSendingPlayerID, int32_t  liFrameSinceStartMessageSent, int32_t  liReceivedActionIndex, FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess *  lpChallegeSuccessArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeSuccessManager.cpp:350
		NetworkOutFburnChallengeSuccessUpdateEvent lSuccessUpdateEvent;

		// BrnChallengeSuccessManager.cpp:351
		CgsSystem::EFrameRate leLocalConsoleFrameRate;

		// BrnChallengeSuccessManager.cpp:352
		CgsSystem::EFrameRate leRemoteConsoleFrameRate;

		// BrnChallengeSuccessManager.cpp:353
		int32_t liLocalisedMessageSentFrame;

		// BrnChallengeSuccessManager.cpp:354
		CgsNetwork::NetworkPlayer * lpNetworkPlayer;

		// BrnChallengeSuccessManager.cpp:355
		FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess lSuccessUpdateToOutput;

		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		CgsNetwork::NetworkPlayer::GetRemoteConsoleFrameRate(/* parameters */);
		BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutFburnChallengeSuccessUpdateEvent>(/* parameters */);
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

// BrnChallengeSuccessManager.cpp:308
void BrnNetwork::ChallengeSuccessManager::CheckForNewUpdateMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeSuccessManager.cpp:310
		int32_t liIndex;

		{
			// BrnChallengeSuccessManager.cpp:315
			FburnChallengeSuccessUpdateAction::LastSecondChallengeSuccess lLastSecondChallengeSuccess;

			// BrnChallengeSuccessManager.cpp:316
			int32_t liFramesSinceStart;

			// BrnChallengeSuccessManager.cpp:317
			int32_t liReceivedActionIndex;

			// BrnChallengeSuccessManager.cpp:318
			BrnNetwork::ChallengeSuccessManager::ChallengeSuccessData * lpSuccessData;

			// BrnChallengeSuccessManager.cpp:319
			BrnNetwork::FburnSuccessUpdateMessage * lpReceivedMessage;

		}
	}
}

// BrnChallengeSuccessManager.cpp:519
void BrnNetwork::ChallengeSuccessManager::ProcessNetworkEvents(const NetworkEventQueue *  lpInputNetworkEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeSuccessManager.cpp:521
		const CgsModule::Event * lpEvent;

		// BrnChallengeSuccessManager.cpp:522
		int32_t liEventSize;

		// BrnChallengeSuccessManager.cpp:523
		int32_t liEventType;

	}
	CgsModule::VariableEventQueue<14000,16>::GetFirstEvent(/* parameters */);
	{
		// BrnChallengeSuccessManager.cpp:569
		const NetworkInFburnChallengeSuccessEvent * lpChallengeSuccessEvent;

	}
	{
		// BrnChallengeSuccessManager.cpp:536
		const NetworkInFburnSuccessUpdateEvent * lpSuccessEvent;

	}
	{
		// BrnChallengeSuccessManager.cpp:553
		const NetworkInFreeburnChallengeEvent * lpChallengeEvent;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnChallengeSuccessManager.cpp:288
void BrnNetwork::ChallengeSuccessManager::ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *  lpInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnNetworkModuleIO::PostSimulationInputBuffer::GetNetworkEventQueue(/* parameters */);
}


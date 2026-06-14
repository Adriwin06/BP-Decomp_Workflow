// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsReliableMessageManager.cpp:34
	const int32_t KI_FRAMES_TO_DISCARD_RELIABLE_MESSAGE = 3600;

	// CgsReliableMessageManager.cpp:35
	const int32_t KI_FRAMES_TO_RESEND_RELIABLE_MESSAGE = 7;

	// CgsReliableMessageManager.cpp:38
	const int32_t KI_FRAMES_TO_DISCARD_RELIABLE_MESSAGE_RECEIVED_DATA = 10800;

	// CgsReliableMessageManager.cpp:41
	const int32_t KI_RELIABLE_MSG_BUFFER_SIZE = 79520;

}

// CgsReliableMessageManager.cpp:745
void CgsNetwork::ReliableMessageManager::ClearRcvdReliableMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsReliableMessageManager.cpp:747
		int32_t i;

		StoredRcvdMessageData::Construct(/* parameters */);
	}
}

// CgsReliableMessageManager.cpp:181
void CgsNetwork::ReliableMessageManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FastBitArray<140>::Construct(/* parameters */);
}

// CgsReliableMessageManager.cpp:63
void CgsNetwork::ReliableMessageManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FastBitArray<140>::Construct(/* parameters */);
}

// CgsReliableMessageManager.cpp:154
void CgsNetwork::ReliableMessageManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FastBitArray<140>::Construct(/* parameters */);
}

// CgsReliableMessageManager.cpp:88
void CgsNetwork::ReliableMessageManager::Prepare(CgsNetwork::PlayerManager *  lpPlayerManager, CgsMemory::HeapMalloc *  lpHeapAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsReliableMessageManager.cpp:90
		int32_t liMessageIndex;

	}
	BufferedSendMessageData::Construct(/* parameters */);
	StoredRcvdMessageData::Construct(/* parameters */);
	CgsContainers::FastBitArray<140>::UnSetAll(/* parameters */);
}

// CgsReliableMessageManager.cpp:266
void CgsNetwork::ReliableMessageManager::AddBufferedReliableMessage(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lRecvingPlayerID, CgsNetwork::Message *  lpMsg, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsReliableMessageManager.cpp:268
		CgsNetwork::ReliableMessageManager::BufferedSendMessageData * lpBufRelMsg;

		// CgsReliableMessageManager.cpp:269
		int32_t i;

	}
	CgsContainers::FastBitArray<140>::IsBitSet(/* parameters */);
	CgsContainers::FastBitArray<140>::SetBit(/* parameters */);
	BufferedSendMessageData::Prepare(/* parameters */);
	{
		// CgsReliableMessageManager.cpp:306
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
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

// CgsReliableMessageManager.cpp:406
void CgsNetwork::ReliableMessageManager::RemoveBufferedReliableMessage(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FastBitArray<140>::UnSetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsReliableMessageManager.cpp:425
void CgsNetwork::ReliableMessageManager::ClearSendReliableMessages() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[26] __FUNCTION__;

	{
		// CgsReliableMessageManager.cpp:427
		int32_t i;

	}
	BufferedSendMessageData::Construct(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsReliableMessageManager.cpp:207
void CgsNetwork::ReliableMessageManager::GetNextReliableMessageToResend(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lPlayerID, uint16_t  lu16CurrentFrame, int32_t  liLastIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsReliableMessageManager.cpp:209
		uint16_t lu16LastFrameSent;

		// CgsReliableMessageManager.cpp:210
		Iterator lIt;

		CgsContainers::FastBitArray<140>::Begin(/* parameters */);
	}
	CgsContainers::FastBitArray<140>::Iterator::Iterator(/* parameters */);
	CgsContainers::FastBitArray<140>::Iterator::operator!=(/* parameters */);
	{
		// CgsReliableMessageManager.cpp:214
		CgsNetwork::ReliableMessageManager::BufferedSendMessageData * lpReliableMessageSendData;

		CgsContainers::FastBitArray<140>::Iterator::GetIndex(/* parameters */);
		CgsContainers::FastBitArray<140>::Iterator::GetIndex(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	GetFrameDiffWrapped16(/* parameters */);
	CgsContainers::FastBitArray<140>::Iterator::GetIndex(/* parameters */);
	CgsContainers::FastBitArray<140>::Iterator::GetIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsReliableMessageManager.cpp:368
void CgsNetwork::ReliableMessageManager::RemoveBufferedReliableMessage(CgsNetwork::SignalMessage *  lpAckOrNackMsg) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsReliableMessageManager.cpp:370
		Iterator lIt;

	}
	CgsContainers::FastBitArray<140>::Iterator::Iterator(/* parameters */);
	CgsContainers::FastBitArray<140>::Begin(/* parameters */);
	CgsContainers::FastBitArray<140>::Iterator::operator!=(/* parameters */);
	CgsContainers::FastBitArray<140>::Iterator::GetIndex(/* parameters */);
	CgsContainers::FastBitArray<140>::Iterator::GetIndex(/* parameters */);
	CgsContainers::FastBitArray<140>::Iterator::GetIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::FastBitArray<140>::Iterator::GetIndex(/* parameters */);
	MessageWithPlayerIDs::GetRecvingPlayerID(/* parameters */);
	CgsContainers::FastBitArray<140>::Iterator::GetIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsReliableMessageManager.cpp:563
void CgsNetwork::ReliableMessageManager::FakeNackMessage(CgsNetwork::Message *  lpMessageToNack, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lSendingPlayerID, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lRecvingPlayerID, bool  lbMarkNackAsFake) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsReliableMessageManager.cpp:565
		SignalMessage lFakeNack;

		// CgsReliableMessageManager.cpp:566
		CgsNetwork::NetworkPlayer * lpNetPlayer;

	}
	SignalMessage::SignalMessage(/* parameters */);
	MessageWithPlayerIDs::Construct(/* parameters */);
	SignalMessage::PrepareNack(/* parameters */);
	Message::SetReadyToSend(/* parameters */);
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

// CgsReliableMessageManager.cpp:500
void CgsNetwork::ReliableMessageManager::CheckForReliableMessageTimeout() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsReliableMessageManager.cpp:502
		Iterator lIt;

		// CgsReliableMessageManager.cpp:503
		uint16_t lu16FrameGap;

		CgsContainers::FastBitArray<140>::Begin(/* parameters */);
	}
	CgsContainers::FastBitArray<140>::Iterator::Iterator(/* parameters */);
	CgsContainers::FastBitArray<140>::Iterator::operator!=(/* parameters */);
	{
		// CgsReliableMessageManager.cpp:507
		CgsNetwork::ReliableMessageManager::BufferedSendMessageData * lpSendMessageData;

		GetFrameDiffWrapped16(/* parameters */);
	}
	CgsContainers::FastBitArray<140>::Iterator::GetIndex(/* parameters */);
	{
		// CgsReliableMessageManager.cpp:530
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lLocalPlayerID;

		CgsContainers::FastBitArray<140>::Iterator::GetIndex(/* parameters */);
	}
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
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsReliableMessageManager.cpp:453
void CgsNetwork::ReliableMessageManager::ClearPlayersSendReliableMessages(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lNetPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsReliableMessageManager.cpp:455
		Iterator lIt;

		// CgsReliableMessageManager.cpp:463
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lLocalPlayerID;

	}
	CgsContainers::FastBitArray<140>::Iterator::Iterator(/* parameters */);
	CgsContainers::FastBitArray<140>::Begin(/* parameters */);
	PlayerManager::GetNextLocalPlayerID(/* parameters */);
	CgsContainers::FastBitArray<140>::Iterator::operator!=(/* parameters */);
	CgsContainers::FastBitArray<140>::Iterator::GetIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::FastBitArray<140>::Iterator::GetIndex(/* parameters */);
	CgsContainers::FastBitArray<140>::Iterator::GetIndex(/* parameters */);
	CgsContainers::FastBitArray<140>::Iterator::GetIndex(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsReliableMessageManager.cpp:613
void CgsNetwork::ReliableMessageManager::MessageIsDuplicate(CgsNetwork::Message *  lpMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsReliableMessageManager.cpp:615
		CgsNetwork::ReliableMessage * lpReliableMsg;

		// CgsReliableMessageManager.cpp:616
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lSendingPlayerID;

		// CgsReliableMessageManager.cpp:617
		int32_t i;

		// CgsReliableMessageManager.cpp:618
		int32_t liSameTypeAndPlayerIndex;

	}
	MessageWithPlayerIDs::GetSendingPlayerID(/* parameters */);
	UInt16IsLargerWrapped(/* parameters */);
	UInt16IsLargerOrEqualWrapped(/* parameters */);
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

// CgsReliableMessageManager.cpp:710
void CgsNetwork::ReliableMessageManager::UpdateReliableMessagesReceived() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsReliableMessageManager.cpp:712
		int32_t i;

		StoredRcvdMessageData::Construct(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsReliableMessageManager.cpp:126
void CgsNetwork::ReliableMessageManager::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsReliableMessageManager.cpp:128
		Iterator lIt;

		CgsContainers::FastBitArray<140>::Iterator::Iterator(/* parameters */);
	}
	CgsContainers::FastBitArray<140>::Begin(/* parameters */);
}


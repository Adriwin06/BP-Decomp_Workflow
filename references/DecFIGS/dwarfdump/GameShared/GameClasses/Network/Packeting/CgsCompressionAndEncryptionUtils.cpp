// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsCompressionAndEncryptionUtils.cpp:133
	extern bool Release();

	// CgsCompressionAndEncryptionUtils.cpp:44
	const Time K_TIME_FOR_AVERAGE;

	// CgsCompressionAndEncryptionUtils.cpp:45
	const int32_t KI_MAX_MESSAGES_TO_PACK_TOGETHER = 41;

	// CgsCompressionAndEncryptionUtils.cpp:46
	const int32_t KI_MAX_SIGNAL_MESSAGES_TO_PACK_TOGETHER = 82;

	// CgsCompressionAndEncryptionUtils.cpp:47
	const int32_t KI_SIZE_PACKED_TYPES_BUFFER = 41;

}

// CgsCompressionAndEncryptionUtils.cpp:577
void CgsNetwork::CompressionAndEncryptionUtils::ExtractSendingPlayerID(uint8_t *  lpacBufferToUnPackFrom, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCompressionAndEncryptionUtils.cpp:579
		CgsNetwork::CompressionAndEncryptionUtils::PackedPacketHeader * lpHeader;

	}
	{
		// CgsCompressionAndEncryptionUtils.cpp:588
		CgsNetwork::CompressionAndEncryptionUtils::ReliablePackedPacketHeader * lpReliableHeader;

	}
}

// CgsCompressionAndEncryptionUtils.cpp:750
void CgsNetwork::CompressionAndEncryptionUtils::GetEntryIndex(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCompressionAndEncryptionUtils.cpp:753
		int32_t liEntryIndex;

	}
}

// CgsCompressionAndEncryptionUtils.cpp:642
void CgsNetwork::CompressionAndEncryptionUtils::RecordBitsTransmitted(CgsNetwork::CompressionAndEncryptionUtils::ESendRecvBandwidth  leSendRecv, CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lNetworkPlayerID, EMessageType  leMessageType, int32_t  liNumBits) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCompressionAndEncryptionUtils.cpp:645
		int32_t liEntryIndex;

	}
}

// CgsCompressionAndEncryptionUtils.cpp:665
void CgsNetwork::CompressionAndEncryptionUtils::UpdateBandwidthHistory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::MemCpy(/* parameters */);
}

// CgsCompressionAndEncryptionUtils.cpp:609
void CgsNetwork::CompressionAndEncryptionUtils::ResetBandwidthUsed(const TimerStatus *  lpTimerStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCompressionAndEncryptionUtils.cpp:612
		int32_t liIndex;

		CgsSystem::TimerStatus::GetTime(/* parameters */);
	}
	CgsSystem::Time::operator=(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsCore::MemSet(/* parameters */);
	CgsCore::MemSet(/* parameters */);
	CgsCore::MemSet(/* parameters */);
}

// CgsCompressionAndEncryptionUtils.cpp:80
void CgsNetwork::CompressionAndEncryptionUtils::Prepare(const TimerStatus *  lpTimerStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsCompressionAndEncryptionUtils.cpp:685
void CgsNetwork::CompressionAndEncryptionUtils::UpdateMaxBandwidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCompressionAndEncryptionUtils.cpp:689
		CgsNetwork::CompressionAndEncryptionUtils::ESendRecvBandwidth leSendRecv;

		// CgsCompressionAndEncryptionUtils.cpp:690
		int32_t liPlayerIndex;

		// CgsCompressionAndEncryptionUtils.cpp:691
		int32_t liMessageType;

	}
	operator++(/* parameters */);
	operator++(/* parameters */);
	GetBandwidthUsedInBits(/* parameters */);
	GetBandwidthUsedInBits(/* parameters */);
	GetBandwidthUsedInBits(/* parameters */);
	GetBandwidthUsedInBits(/* parameters */);
}

// CgsCompressionAndEncryptionUtils.cpp:97
void CgsNetwork::CompressionAndEncryptionUtils::Update(const TimerStatus *  lpTimerStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::operator+(/* parameters */);
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator>(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	CgsCore::MemSet(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsCompressionAndEncryptionUtils.cpp:160
void CgsNetwork::CompressionAndEncryptionUtils::Pack(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lNetworkPlayerID, CgsNetwork::Message **  lppMessagesToPack, int32_t  liNumMessagesInArray, CgsNetwork::SignalMessage **  lppSignalMessagesToPack, int32_t  liNumSignalMessagesInArray, uint8_t *  lpacBufferToPackInto, int32_t  liBufferSize, int32_t *  lpiBufferUsed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCompressionAndEncryptionUtils.cpp:162
		int32_t liMessageIndex;

		// CgsCompressionAndEncryptionUtils.cpp:163
		bool lbReliableMessagesIncluded;

		// CgsCompressionAndEncryptionUtils.cpp:164
		bool lbPackedAllMessages;

		// CgsCompressionAndEncryptionUtils.cpp:221
		CgsNetwork::CompressionAndEncryptionUtils::ReliablePackedPacketHeader lHeader;

		// CgsCompressionAndEncryptionUtils.cpp:231
		uint8_t[1000] lacPackedSignalMessages;

		// CgsCompressionAndEncryptionUtils.cpp:232
		int32_t liPackedSignalMessageBufferOffestInBits;

		// CgsCompressionAndEncryptionUtils.cpp:233
		int32_t liPackedSignalMessageBufferSizeInBits;

		// CgsCompressionAndEncryptionUtils.cpp:254
		uint8_t[1000] lacPackedMessageBodies;

		// CgsCompressionAndEncryptionUtils.cpp:255
		int32_t liPackedMessageBodiesBufferOffestInBits;

		// CgsCompressionAndEncryptionUtils.cpp:256
		int32_t liPackedMessageBodiesBufferSizeInBits;

		// CgsCompressionAndEncryptionUtils.cpp:52
		typedef uint8_t PackedMessageType;

		// CgsCompressionAndEncryptionUtils.cpp:257
		PackedMessageType[41] lau8PackedTypes;

		// CgsCompressionAndEncryptionUtils.cpp:258
		int32_t liPackedTypesOffset;

		// CgsCompressionAndEncryptionUtils.cpp:352
		int32_t liBytesUsed;

	}
	{
		// CgsCompressionAndEncryptionUtils.cpp:175
		int32_t liIndex;

		// CgsCompressionAndEncryptionUtils.cpp:176
		int32_t liMessageIndex;

		// CgsCompressionAndEncryptionUtils.cpp:177
		int32_t liCount;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsCompressionAndEncryptionUtils.cpp:236
		int32_t liPackedSizeInBits;

		Message::Pack(/* parameters */);
		BitStream::GetBitLength(/* parameters */);
		Message::SetDealtWith(/* parameters */);
	}
	CgsCore::MemCpy(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	{
		// CgsCompressionAndEncryptionUtils.cpp:396
		CgsDev::StrStream lStrStream;

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
	{
		// CgsCompressionAndEncryptionUtils.cpp:273
		int32_t liPackedSizeInBits;

		// CgsCompressionAndEncryptionUtils.cpp:276
		bool lbMessagePackedSuccessfully;

		// CgsCompressionAndEncryptionUtils.cpp:344
		EMessageType leMessageType;

		Message::Pack(/* parameters */);
	}
	CgsCore::MemCpy(/* parameters */);
	Message::SetDealtWith(/* parameters */);
	Message::GetGameID(/* parameters */);
	{
		// CgsCompressionAndEncryptionUtils.cpp:319
		CgsNetwork::ReliableMessage * lpReliableMsg;

		MessageWithPlayerIDs::GetSendingPlayerID(/* parameters */);
		MessageWithPlayerIDs::GetRecvingPlayerID(/* parameters */);
		MessageWithPlayerIDs::GetSendingPlayerID(/* parameters */);
		MessageWithPlayerIDs::GetRecvingPlayerID(/* parameters */);
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
	Message::GetGameID(/* parameters */);
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

// CgsCompressionAndEncryptionUtils.cpp:420
void CgsNetwork::CompressionAndEncryptionUtils::UnPack(CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID  lNetworkPlayerID, CgsNetwork::CompressionAndEncryptionUtils::RecvMessageData *  lpaMessagesToUnPackInto, int32_t  liNumMessagesInArray, CgsNetwork::SignalMessage **  lppSignalMessagesToUnPackInto, int32_t  liNumSignalMessagesInArray, uint8_t *  lpacBufferToUnPackFrom, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsCompressionAndEncryptionUtils.cpp:422
		int32_t liMessageIndex;

		// CgsCompressionAndEncryptionUtils.cpp:423
		int32_t lnNumMessages;

		// CgsCompressionAndEncryptionUtils.cpp:424
		int32_t lnNumSignalMessages;

		// CgsCompressionAndEncryptionUtils.cpp:425
		uint8_t * lpPackedSignalMessages;

		// CgsCompressionAndEncryptionUtils.cpp:426
		uint8_t * lpPackedBody;

		// CgsCompressionAndEncryptionUtils.cpp:427
		uint8_t * lpPackedTypes;

		// CgsCompressionAndEncryptionUtils.cpp:428
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lSendingPlayerID;

		// CgsCompressionAndEncryptionUtils.cpp:429
		CgsNetwork::MessageWithPlayerIDs::NetworkPlayerID lRecvingPlayerID;

		// CgsCompressionAndEncryptionUtils.cpp:430
		uint16_t lu16Frame;

		// CgsCompressionAndEncryptionUtils.cpp:431
		uint8_t lu8GameID;

		// CgsCompressionAndEncryptionUtils.cpp:432
		bool lbReliableMessagesIncluded;

		// CgsCompressionAndEncryptionUtils.cpp:444
		CgsNetwork::CompressionAndEncryptionUtils::PackedPacketHeader * lpHeader;

		// CgsCompressionAndEncryptionUtils.cpp:473
		int32_t liBufferOffsetInBits;

		// CgsCompressionAndEncryptionUtils.cpp:474
		int32_t liBufferLengthInBits;

		// CgsCompressionAndEncryptionUtils.cpp:496
		int32_t liPackedSignalMessagesSize;

		// CgsCompressionAndEncryptionUtils.cpp:499
		int32_t liHeaderSize;

		{
			// CgsCompressionAndEncryptionUtils.cpp:438
			int32_t i;

		}
	}
	{
		// CgsCompressionAndEncryptionUtils.cpp:456
		CgsNetwork::CompressionAndEncryptionUtils::ReliablePackedPacketHeader * lpReliableHeader;

	}
	{
		// CgsCompressionAndEncryptionUtils.cpp:477
		int32_t liPackedSizeInBits;

		MessageWithPlayerIDs::Construct(/* parameters */);
		Message::UnPack(/* parameters */);
	}
	{
		// CgsCompressionAndEncryptionUtils.cpp:510
		EMessageType leMessageType;

		// CgsCompressionAndEncryptionUtils.cpp:511
		int32_t liMessageToUnPackInto;

		// CgsCompressionAndEncryptionUtils.cpp:512
		int32_t liPackedSizeInBits;

		// CgsCompressionAndEncryptionUtils.cpp:513
		CgsNetwork::Message * lpMessageToUnpackInto;

		Message::SetGameID(/* parameters */);
		Message::SetType(/* parameters */);
		Message::SetU16Frame(/* parameters */);
		Message::UnPack(/* parameters */);
	}
	{
		// CgsCompressionAndEncryptionUtils.cpp:532
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsCompressionAndEncryptionUtils.cpp:543
		CgsNetwork::ReliableMessage * lpReliableMsg;

		MessageWithPlayerIDs::SetSendingPlayerID(/* parameters */);
		MessageWithPlayerIDs::SetRecvingPlayerID(/* parameters */);
	}
}

// CgsCompressionAndEncryptionUtils.cpp:57
// CgsCompressionAndEncryptionUtils.cpp:58
// CgsCompressionAndEncryptionUtils.cpp:59
// CgsCompressionAndEncryptionUtils.cpp:60
// CgsCompressionAndEncryptionUtils.cpp:61
// CgsCompressionAndEncryptionUtils.cpp:62

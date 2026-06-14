// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// BrnNetworkLiveRevengeRelationship.cpp:27
	const int32_t KI_NEW_RELATIONSHIP_UPPER_BOUNDARY = 3;

}

// BrnNetworkLiveRevengeRelationship.cpp:348
void BrnNetwork::LiveRevengeRelationship::OnRoundFinish() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkLiveRevengeRelationship.cpp:320
void BrnNetwork::LiveRevengeRelationship::AddMarkByRival() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkLiveRevengeRelationship.cpp:305
void BrnNetwork::LiveRevengeRelationship::AddMarkByPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkLiveRevengeRelationship.cpp:290
void BrnNetwork::LiveRevengeRelationship::AddWinByRival() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkLiveRevengeRelationship.cpp:275
void BrnNetwork::LiveRevengeRelationship::AddWinByLocalPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkLiveRevengeRelationship.cpp:260
void BrnNetwork::LiveRevengeRelationship::AddPaybackScoredByRival() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkLiveRevengeRelationship.cpp:245
void BrnNetwork::LiveRevengeRelationship::AddPaybackScoredByLocalPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkLiveRevengeRelationship.cpp:230
void BrnNetwork::LiveRevengeRelationship::AddPaybackDealtByRival() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkLiveRevengeRelationship.cpp:215
void BrnNetwork::LiveRevengeRelationship::AddPaybackDealtByLocalPlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkLiveRevengeRelationship.cpp:334
void BrnNetwork::LiveRevengeRelationship::OnRoundStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkLiveRevengeRelationship.cpp:391
void BrnNetwork::LiveRevengeRelationship::DEBUGResetTimeStamp(void *  lpParameter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeRelationship.cpp:393
		LiveRevengeRelationship * lpRelationship;

	}
}

// BrnNetworkLiveRevengeRelationship.cpp:406
void BrnNetwork::LiveRevengeRelationship::DEBUGSetTimeStampOld(void *  lpParameter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeRelationship.cpp:408
		LiveRevengeRelationship * lpRelationship;

		// BrnNetworkLiveRevengeRelationship.cpp:410
		DateAndTime lDateAndTime;

	}
}

// BrnNetworkLiveRevengeRelationship.cpp:443
void BrnNetwork::LiveRevengeRelationship::FlipCommonRelationship(CommonRelationship *  lpRelationship) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeRelationship.cpp:445
		CommonRelationshipStats lStats;

	}
}

// BrnNetworkLiveRevengeRelationship.cpp:461
void BrnNetwork::LiveRevengeRelationship::FlipPointOfView() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkLiveRevengeRelationship.cpp:172
void BrnNetwork::LiveRevengeRelationship::AddTakedownByRival(bool  lbMarkedMan) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ScoreSettled(/* parameters */);
}

// BrnNetworkLiveRevengeRelationship.cpp:126
void BrnNetwork::LiveRevengeRelationship::AddTakedownByLocalPlayer(bool  lbMarkedMan) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ScoreSettled(/* parameters */);
}

// BrnNetworkLiveRevengeRelationship.cpp:425
void BrnNetwork::LiveRevengeRelationship::DEBUGClearRelationship(void *  lpParameter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeRelationship.cpp:427
		LiveRevengeRelationship * lpRelationship;

		Clear(/* parameters */);
	}
	CommonRelationship::Clear(/* parameters */);
	CommonRelationshipStats::Clear(/* parameters */);
}

// BrnNetworkLiveRevengeRelationship.cpp:45
void BrnNetwork::LiveRevengeRelationship::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Clear(/* parameters */);
	CommonRelationship::Clear(/* parameters */);
}

// BrnNetworkLiveRevengeRelationship.cpp:61
void BrnNetwork::LiveRevengeRelationship::Prepare(const LiveRevengeRelationship::UniquePlayerID *  lpUniquePlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Clear(/* parameters */);
	CommonRelationshipStats::Clear(/* parameters */);
}

// BrnNetworkLiveRevengeRelationship.cpp:93
void BrnNetwork::LiveRevengeRelationship::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Clear(/* parameters */);
	CommonRelationship::Clear(/* parameters */);
	CommonRelationshipStats::Clear(/* parameters */);
}

// BrnNetworkLiveRevengeRelationship.cpp:109
void BrnNetwork::LiveRevengeRelationship::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Clear(/* parameters */);
	CommonRelationship::Clear(/* parameters */);
}

// BrnNetworkLiveRevengeRelationship.cpp:364
void BrnNetwork::LiveRevengeRelationship::GetRelationshipType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetTotalTakedowns(/* parameters */);
	GetTotalTakedowns(/* parameters */);
}

// BrnNetworkLiveRevengeRelationship.cpp:476
void BrnNetwork::LiveRevengeRelationship::Validate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::UniquePlayerIDPS3::IsValid(/* parameters */);
	{
		// BrnNetworkLiveRevengeRelationship.cpp:480
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkLiveRevengeRelationship.cpp:486
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkLiveRevengeRelationship.cpp:509
void BrnNetwork::LiveRevengeRelationship::ValidateStat(int32_t  liLocalPlayerStat, int32_t  liRemotePlayerStat, int32_t  liLocalRivalStat, int32_t  liRemoteRivalStat, const char *  lpcName, bool  lbShouldWeAssert) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkLiveRevengeRelationship.cpp:511
		bool lbDetectedWrong;

	}
	{
		// BrnNetworkLiveRevengeRelationship.cpp:533
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
		CgsNetwork::PlayerName::GetPlayerName(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkLiveRevengeRelationship.cpp:553
void BrnNetwork::LiveRevengeRelationship::Merge(LiveRevengeRelationship *  lpRemoteRelationship) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
}


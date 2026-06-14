// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// BrnNetworkScoreboardManager.cpp:37
	const char * KPC_VIEW;

	// BrnNetworkScoreboardManager.cpp:38
	const int32_t KI_OFFSET_NEEDS_RECENTERING = 4294967295;

	// BrnNetworkScoreboardManager.cpp:52
	const RankCodeToScoreboardColumnEDataType[7] KA_RANK_CODE_TO_SCOREBOARDCOLUMN_DATATYPE;

	// BrnNetworkScoreboardManager.cpp:63
	const int32_t KI_DS_RANK_CODE_TO_SCOREBOARD_SIZE = 7;

}

// BrnNetworkScoreboardManager.cpp:45
struct BrnNetwork::RankCodeToScoreboardColumnEDataType {
	// BrnNetworkScoreboardManager.cpp:47
	int32_t miDataType;

	// BrnNetworkScoreboardManager.cpp:48
	BrnNetwork::ScoreboardColumn::EDataType meDataType;

}

// BrnNetworkScoreboardManager.cpp:976
void BrnNetwork::ScoreboardManager::GetColumnIndexOfType(int32_t  liType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkScoreboardManager.cpp:978
		int32_t liColumnIndex;

	}
}

// BrnNetworkScoreboardManager.cpp:1053
void BrnNetwork::ScoreboardManager::_ScoreboardSortData(const void *  lpData1, const void *  lpData2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkScoreboardManager.cpp:1055
		const BrnNetwork::ScoreboardManager::ScoreboardRowSortData * lpSortData1;

		// BrnNetworkScoreboardManager.cpp:1056
		const BrnNetwork::ScoreboardManager::ScoreboardRowSortData * lpSortData2;

		// BrnNetworkScoreboardManager.cpp:1057
		int32_t liRetVal;

	}
}

// BrnNetworkScoreboardManager.cpp:1093
void BrnNetwork::ScoreboardManager::Disconnected() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent,1>::Clear(/* parameters */);
}

// BrnNetworkScoreboardManager.cpp:584
void BrnNetwork::ScoreboardManager::SetViewAndDownloadHeaders() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkScoreboardManager.cpp:626
void BrnNetwork::ScoreboardManager::OffsetScoreboard(int32_t  liNumberOfRows) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkScoreboardManager.cpp:628
		int32_t liLastRow;

	}
	rw::core::stdc::Max(/* parameters */);
	rw::core::stdc::Min(/* parameters */);
	rw::core::stdc::Max(/* parameters */);
}

// BrnNetworkScoreboardManager.cpp:612
void BrnNetwork::ScoreboardManager::PageDown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkScoreboardManager.cpp:599
void BrnNetwork::ScoreboardManager::PageUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkScoreboardManager.cpp:89
void BrnNetwork::ScoreboardManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent,1>::Construct(/* parameters */);
}

// BrnNetworkScoreboardManager.cpp:152
void BrnNetwork::ScoreboardManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent,1>::Clear(/* parameters */);
}

// BrnNetworkScoreboardManager.cpp:183
void BrnNetwork::ScoreboardManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent,1>::Clear(/* parameters */);
}

// BrnNetworkScoreboardManager.cpp:296
void BrnNetwork::ScoreboardManager::HandleScoreboardEvent(const NetworkInSelectScoreboardEvent *  lpSelectScoreboardEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent,1>::Clear(/* parameters */);
	CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent,1>::Push(/* parameters */);
}

// BrnNetworkScoreboardManager.cpp:115
void BrnNetwork::ScoreboardManager::Prepare(CgsNetwork::ServerInterface *  lpServerInterface, BrnNetwork::BrnNetworkModule *  lpModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::ServerInterfaceDirtySock::GetRankingsComponent(/* parameters */);
}

// BrnNetworkScoreboardManager.cpp:952
void BrnNetwork::ScoreboardManager::AddNumberBeforeAndAfter(Scoreboard *  lpScoreboard, int8_t  liCurrentRows) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkScoreboardManager.cpp:954
		int8_t liAfter;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnNetworkScoreboardManager.cpp:1027
void BrnNetwork::ScoreboardManager::DirtySockColumnTypeToEDataType(int32_t  liDSType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkScoreboardManager.cpp:1029
		int32_t liLoopCounter;

		{
			// BrnNetworkScoreboardManager.cpp:1039
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
}

// BrnNetworkScoreboardManager.cpp:1000
void BrnNetwork::ScoreboardManager::PostProcessColumnData(char *  lpcData, int32_t  liColumnIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::NetworkDecodeUncompressedCgsID(/* parameters */);
}

// BrnNetworkScoreboardManager.cpp:845
void BrnNetwork::ScoreboardManager::AddSortedRowDataToScoreboard(Scoreboard *  lpScoreboard) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkScoreboardManager.cpp:847
		BrnNetwork::ScoreboardManager::ScoreboardRowSortData[101] lacSortData;

		// BrnNetworkScoreboardManager.cpp:848
		int32_t liPointsColumnIndex;

		// BrnNetworkScoreboardManager.cpp:849
		int32_t liRankColumnIndex;

		// BrnNetworkScoreboardManager.cpp:850
		int32_t liRowCount;

		// BrnNetworkScoreboardManager.cpp:851
		int32_t liRowIndex;

		// BrnNetworkScoreboardManager.cpp:852
		int32_t liColumnIndex;

	}
	{
		// BrnNetworkScoreboardManager.cpp:875
		char[31] lacBuffer;

	}
	std(/* parameters */);
	{
		// BrnNetworkScoreboardManager.cpp:907
		ScoreboardRow lScoreboardRow;

		{
			// BrnNetworkScoreboardManager.cpp:918
			char[31] lacBuffer;

		}
	}
}

// BrnNetworkScoreboardManager.cpp:773
void BrnNetwork::ScoreboardManager::AddRowDataToScoreboard(Scoreboard *  lpScoreboard) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkScoreboardManager.cpp:775
		int32_t liColumnCounter;

		// BrnNetworkScoreboardManager.cpp:776
		int32_t liRowCounter;

	}
	{
		// BrnNetworkScoreboardManager.cpp:806
		ScoreboardRow lRow;

	}
	{
		// BrnNetworkScoreboardManager.cpp:818
		char[31] lacBuffer;

	}
	{
		// BrnNetworkScoreboardManager.cpp:781
		int32_t liLocalPlayerIndex;

		rw::core::stdc::Max(/* parameters */);
	}
}

// BrnNetworkScoreboardManager.cpp:694
void BrnNetwork::ScoreboardManager::AddColumnInfoToScoreboard(Scoreboard *  lpScoreboard) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkScoreboardManager.cpp:696
		int32_t liColumnCounter;

	}
	{
		// BrnNetworkScoreboardManager.cpp:703
		ScoreboardColumn lColumn;

		// BrnNetworkScoreboardManager.cpp:704
		int32_t liColumnTypeCode;

		// BrnNetworkScoreboardManager.cpp:705
		BrnNetwork::ScoreboardColumn::EDataType leDataType;

	}
	{
		// BrnNetworkScoreboardManager.cpp:746
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkScoreboardManager.cpp:653
void BrnNetwork::ScoreboardManager::BuildDownloadedScoreboard(Scoreboard *  lpScoreboard) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkScoreboardManager.cpp:655
		bool lbAreCategoryIndexAndVariationValid;

	}
}

// BrnNetworkScoreboardManager.cpp:373
void BrnNetwork::ScoreboardManager::CopyVariations(int32_t  liCategory, int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkScoreboardManager.cpp:375
		NetworkOutScoreboardHeadingList lVariationList;

		// BrnNetworkScoreboardManager.cpp:376
		int32_t liVariationLoopCounter;

		BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::Clear(/* parameters */);
	}
	BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::SetHeadingType(/* parameters */);
	{
		// BrnNetworkScoreboardManager.cpp:388
		char[31] lacBuffer;

		BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::AddHeading(/* parameters */);
		BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::SetPerRoad(/* parameters */);
	}
	BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::SetPerRoad(/* parameters */);
	BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::AddHeading(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutScoreboardHeadingList>(/* parameters */);
}

// BrnNetworkScoreboardManager.cpp:310
void BrnNetwork::ScoreboardManager::CopyCategories() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkScoreboardManager.cpp:312
		NetworkOutScoreboardHeadingList lCategoryList;

		// BrnNetworkScoreboardManager.cpp:313
		int32_t liCategoryLoopCounter;

		BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::Clear(/* parameters */);
	}
	BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::SetPerRoad(/* parameters */);
	BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::SetHeadingType(/* parameters */);
	BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::AddHeading(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutScoreboardHeadingList>(/* parameters */);
}

// BrnNetworkScoreboardManager.cpp:341
void BrnNetwork::ScoreboardManager::CopyIndexes(int32_t  liCategory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkScoreboardManager.cpp:343
		NetworkOutScoreboardHeadingList lIndexList;

		// BrnNetworkScoreboardManager.cpp:344
		int32_t liIndexLoopCounter;

		BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::Clear(/* parameters */);
	}
	BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::SetHeadingType(/* parameters */);
	BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::SetPerRoad(/* parameters */);
	BrnNetworkModuleIO::NetworkOutScoreboardHeadingList::AddHeading(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutScoreboardHeadingList>(/* parameters */);
}

// BrnNetworkScoreboardManager.cpp:414
void BrnNetwork::ScoreboardManager::ProcessEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkScoreboardManager.cpp:416
		NetworkInSelectScoreboardEvent lEvent;

		CgsContainers::FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent,1>::Pop(/* parameters */);
		{
			// BrnNetworkScoreboardManager.cpp:569
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		BrnNetworkModuleIO::NetworkInSelectScoreboardEvent::GetChosenCategory(/* parameters */);
		BrnNetworkModuleIO::NetworkInSelectScoreboardEvent::GetChosenIndex(/* parameters */);
		{
			// BrnNetworkScoreboardManager.cpp:487
			int32_t liUserType;

			// BrnNetworkScoreboardManager.cpp:488
			const char *[101] lapcUserListNames;

			// BrnNetworkScoreboardManager.cpp:489
			int32_t liUserListCount;

			// BrnNetworkScoreboardManager.cpp:490
			BrnNetwork::PlayerInfoData lPlayerInfo;

			PlayerInfoData::PlayerInfoData(/* parameters */);
			BrnNetworkModuleIO::NetworkInSelectScoreboardEvent::GetChosenVariation(/* parameters */);
			CgsNetwork::ServerInterfaceRankings::GetUserType(/* parameters */);
			PlayerInfoData::~PlayerInfoData(/* parameters */);
		}
	}
	{
		// BrnNetworkScoreboardManager.cpp:539
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
	}
	{
		// BrnNetworkScoreboardManager.cpp:519
		BrnNetworkManager::BuddyManager * lpBuddyManager;

		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkManager::GetBuddyManager(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
		BrnNetworkModule::GetNetworkManager(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkScoreboardManager.cpp:207
void BrnNetwork::ScoreboardManager::ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkScoreboardManager.cpp:270
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkScoreboardManager.cpp:262
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkScoreboardManager.cpp:244
		NetworkOutScoreboardEvent lScoreboardEvent;

		BrnNetworkModuleIO::NetworkOutScoreboardEvent::Construct(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutScoreboardEvent>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}


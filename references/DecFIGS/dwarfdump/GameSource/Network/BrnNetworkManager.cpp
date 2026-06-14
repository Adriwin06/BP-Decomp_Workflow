// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// BrnNetworkManager.cpp:115
	const char[12] KAC_VERSION;

	// BrnNetworkManager.cpp:122
	const char[4] KAC_SKU;

	// BrnNetworkManager.cpp:123
	const int32_t KI_DIRTYSOCK_PORT = 3659;

	// BrnNetworkManager.cpp:128
	const char[12] KAC_SLUS;

	// BrnNetworkManager.cpp:133
	const int32_t KI_DEBUG_MESSAGE_SIZE_EXCESS;

	// BrnNetworkManager.cpp:139
	const int32_t KI_TRAFFIC_HASH_MESSAGE_SIZE_EXCESS;

	// BrnNetworkManager.cpp:142
	const int32_t KI_MAX_MESSAGE_SIZE = 1968;

	// BrnNetworkManager.cpp:144
	const float32_t KF_TIME_GAP_TO_LEAVE_BEFORE_START_TIME;

	// BrnNetworkManager.cpp:145
	const float32_t KF_CAMERA_FEED_REQUEST_DELAY;

	// BrnNetworkManager.cpp:149
	const int32_t KI_TEXTURE_BUFFER_SIZE = 76800;

	// BrnNetworkManager.cpp:150
	const int32_t KI_COMPRESSED_TEXTURE_BUFFER_SIZE = 9600;

}

// BrnNetworkManager.cpp:2306
void BrnNetwork::BrnNetworkManager::UnitTestFrameCountFunctions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkManager.cpp:2195
void BrnNetwork::BrnNetworkManager::GetLocalConsoleFrameRate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkManager.cpp:2767
void BrnNetwork::BrnNetworkManager::OnGameLaunching() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkManager.cpp:2875
void BrnNetwork::BrnNetworkManager::JoinGameSession(char *  lpcSessionID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkManager.cpp:2889
void BrnNetwork::BrnNetworkManager::JoinGameSessionByID(int32_t  liGameID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkManager.cpp:2967
void BrnNetwork::BrnNetworkManager::PackOrUnpack(CgsNetwork::Message *  lpMessage, RoadRulesRecvData::NetworkPlayerID *  lpNetworkPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.cpp:2969
		int32_t liValue;

		// BrnNetworkManager.cpp:2970
		BrnNetworkManager::PackOrUnpackResult lxResult;

	}
}

// BrnNetworkManager.cpp:1836
void BrnNetwork::BrnNetworkManager::GetMaxMessageSize(bool  lbReliableOnly) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.cpp:1839
		struct MessageDef {
			// BrnNetworkManager.cpp:1840
			int32_t miMessageSize;

			// BrnNetworkManager.cpp:1841
			bool mbReliable;

		}

		// BrnNetworkManager.cpp:1844
		int32_t liMaxMsgSize;

		// BrnNetworkManager.cpp:1845
		int32_t liMsgType;

		// BrnNetworkManager.cpp:1847
		MessageDef[41] laMessageDefs;

	}
	{
		// BrnNetworkManager.cpp:1897
		int32_t liMessageSize;

		rw::math::vpu::Max<int32_t>(/* parameters */);
	}
}

// BrnNetworkManager.cpp:2368
void BrnNetwork::BrnNetworkManager::OnEnterGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkManager.cpp:2389
void BrnNetwork::BrnNetworkManager::OnLeaveGame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkManager.cpp:3075
void BrnNetwork::BrnNetworkManager::ProcessNetworkTextureDecodeEvent(const NetworkInDxtDecodeImageEvent *  lpDxtDecodeRequestEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnNetworkManager.cpp:2163
void BrnNetwork::BrnNetworkManager::SyncTimeClientReadyCallback(RoadRulesRecvData::NetworkPlayerID  lClientReadyID, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.cpp:2165
		BrnNetwork::BrnNetworkManager * lpNetworkManager;

	}
	GetServerInterface(/* parameters */);
}

// BrnNetworkManager.cpp:2988
void BrnNetwork::BrnNetworkManager::CaptureTelemetryEvent(BrnNetwork::ETelemetryHook  leType, const char *  lpcParameter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetServerInterface(/* parameters */);
}

// BrnNetworkManager.cpp:3005
void BrnNetwork::BrnNetworkManager::CaptureTelemetryEvent(BrnNetwork::ETelemetryHook  leType, int32_t  liParameter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.cpp:3009
		char[16] lacBuffer;

		GetServerInterface(/* parameters */);
	}
}

// BrnNetworkManager.cpp:3059
void BrnNetwork::BrnNetworkManager::CaptureTelemetryEvent(BrnNetwork::ETelemetryHook  leType, Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.cpp:3061
		int32_t liMills;

	}
}

// BrnNetworkManager.cpp:2447
void BrnNetwork::BrnNetworkManager::IsLocalPlayer(RoadRulesRecvData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.cpp:2449
		PlayerInfoData lPlayerInfo;

	}
	PlayerInfoData::PlayerInfoData(/* parameters */);
	PlayerInfoData::~PlayerInfoData(/* parameters */);
}

// BrnNetworkManager.cpp:3023
void BrnNetwork::BrnNetworkManager::CaptureTelemetryEvent(BrnNetwork::ETelemetryHook  leType, CgsID  lParameter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.cpp:3025
		char[16] lacBuffer;

		// BrnNetworkManager.cpp:3026
		int32_t liCharacterIndex;

		GetServerInterface(/* parameters */);
	}
}

// BrnNetworkManager.cpp:1147
void BrnNetwork::BrnNetworkManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetFreeBurnCar(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	SetCurrentDistrict(/* parameters */);
	SetCurrentCarColourIndex(/* parameters */);
	SetCurrentPaintFinishIndex(/* parameters */);
}

// BrnNetworkManager.cpp:781
void BrnNetwork::BrnNetworkManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::SetFloatVal(/* parameters */);
	SetCurrentPaintFinishIndex(/* parameters */);
	SetFreeBurnCar(/* parameters */);
	SetCurrentCarColourIndex(/* parameters */);
	SetCurrentDistrict(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
}

// BrnNetworkManager.cpp:2852
void BrnNetwork::BrnNetworkManager::OnGameFinish() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetTime(/* parameters */);
	CgsSystem::Time::GetFloatVal(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkManager.cpp:2828
void BrnNetwork::BrnNetworkManager::OnRoundFinish() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetTime(/* parameters */);
	CgsSystem::Time::GetFloatVal(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	IsDoingFreeBurnLobby(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkManager.cpp:2800
void BrnNetwork::BrnNetworkManager::OnRoundStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetTime(/* parameters */);
	CgsSystem::Time::GetFloatVal(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	IsDoingFreeBurnLobby(/* parameters */);
	IsDoingFreeBurnLobby(/* parameters */);
	GetTrafficManager(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkManager.cpp:2781
void BrnNetwork::BrnNetworkManager::OnGameStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetTime(/* parameters */);
	CgsSystem::Time::GetFloatVal(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkManager.cpp:2903
void BrnNetwork::BrnNetworkManager::GameHasFriendsIn(BrnNetwork::GameParams *  lpGameParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.cpp:2905
		int32_t liPlayerIndex;

		// BrnNetworkManager.cpp:2906
		PlayerName lPlayerName;

	}
	CgsNetwork::PlayerName::Construct(/* parameters */);
	CgsNetwork::ServerInterfacePlayerParamsBase::GetName(/* parameters */);
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
	}
}

// BrnNetworkManager.cpp:2934
void BrnNetwork::BrnNetworkManager::GameHasRivalsIn(BrnNetwork::GameParams *  lpGameParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.cpp:2936
		const LiveRevengeRelationship * lpRelationship;

		// BrnNetworkManager.cpp:2937
		int32_t liPlayerIndex;

	}
	CgsNetwork::ServerInterfacePlayerParamsBase::GetName(/* parameters */);
	LiveRevengeManager::GetRevengeRelationshipByName(/* parameters */);
	LiveRevengeRelationship::GetTotalTakedowns(/* parameters */);
}

// BrnNetworkManager.cpp:171
void BrnNetwork::BrnNetworkManager::Construct(BrnNetwork::BrnNetworkModule *  lpNetworkModule, bool  bEnableJuice) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.cpp:173
		NetworkManagerConstructParams lNetworkManagerConstructParams;

		// BrnNetworkManager.cpp:174
		PlayerManagerConstructParams lPlayerManagerConstructParams;

		// BrnNetworkManager.cpp:175
		BrnNetworkPlayerConstructParams[8] laPlayerConstructParams;

		// BrnNetworkManager.cpp:176
		int32_t liMaxMessageSize;

		// BrnNetworkManager.cpp:177
		int32_t liIndex;

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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		// BrnNetworkManager.cpp:217
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnNetworkManager.cpp:221
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
	CgsNetwork::NetworkManagerConstructParams::Construct(/* parameters */);
	BrnServerInterfaceBase::SetNetworkManager(/* parameters */);
	CgsNetwork::NetworkManager::GetPlayerManager(/* parameters */);
	CgsNetwork::StartTimeManager::SetGapTillStartTime(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	SetFreeBurnCar(/* parameters */);
	SetCurrentCarColourIndex(/* parameters */);
	SetCurrentDistrict(/* parameters */);
	SetCurrentPaintFinishIndex(/* parameters */);
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

// BrnNetworkManager.cpp:2667
void BrnNetwork::BrnNetworkManager::OutputPlayerResultsInfo(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.cpp:2669
		PlayerResultsData * lpPlayerResultsData;

		// BrnNetworkManager.cpp:2670
		StandingsData * lpStandingsData;

		// BrnNetworkManager.cpp:2671
		RoadRulesRecvData::NetworkPlayerID lPlayerID;

		// BrnNetworkManager.cpp:2672
		int32_t liPlayerResultsIndex;

		// BrnNetworkManager.cpp:2673
		bool lbFinished;

	}
	BrnNetworkModuleIO::OutputBuffer::GetPlayerResultsInterface(/* parameters */);
	BrnNetworkModuleIO::PlayerResultsInterface::GetPlayerResultsDataForWriting(/* parameters */);
	BrnNetworkModuleIO::PlayerResultsData::Clear(/* parameters */);
	BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkManager.cpp:2418
void BrnNetwork::BrnNetworkManager::PackTextureAndSendDisplayEventToGui(const NetworkTexture *  lpTexture, int32_t  liTextureIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.cpp:2421
		GuiEventNetworkPlayerImage lEvent;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	AddOutputGuiEvent<BrnGui::GuiEventNetworkPlayerImage>(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkManager.cpp:1405
void BrnNetwork::BrnNetworkManager::TriggerEventFromLogin(BrnNetwork::BrnNetworkManager::ELoginEvent  leEvent, void *  lpEventData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.cpp:1407
		GuiEventShowLoginQuestion lShowQuestionEvent;

	}
	AddOutputGuiEvent<CgsGui::GuiEventShowLoginQuestion>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkManager.cpp:2210
void BrnNetwork::BrnNetworkManager::OutputPlayerStatsToGui(RoadRulesRecvData::NetworkPlayerID  lPlayerID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.cpp:2212
		const NetworkPlayerStats * lpPlayerStats;

		// BrnNetworkManager.cpp:2213
		const char * lpcPlayerName;

		// BrnNetworkManager.cpp:2214
		int32_t liRank;

	}
	{
		// BrnNetworkManager.cpp:2251
		PlayerParams lPlayerParams;

		PlayerParams::PlayerParams(/* parameters */);
		PlayerParamsBase::GetRank(/* parameters */);
		PlayerParams::~PlayerParams(/* parameters */);
		CgsNetwork::ServerInterfacePlayerParamsBase::GetName(/* parameters */);
	}
	CameraPS3::GetRequestedPlayerID(/* parameters */);
	{
		// BrnNetworkManager.cpp:2228
		const NetworkPlayerStats * lpPlayerStats;

		NetworkPlayerStats::GetTimeStamp(/* parameters */);
		CgsSystem::Time::operator>(/* parameters */);
	}
	{
		// BrnNetworkManager.cpp:2259
		PlayerInfoData lPlayerInfo;

		PlayerInfoData::PlayerInfoData(/* parameters */);
		CgsNetwork::ServerInterfacePlayerInfoDataBase::GetRank(/* parameters */);
		PlayerInfoData::~PlayerInfoData(/* parameters */);
	}
	{
		// BrnNetworkManager.cpp:2278
		GuiEventNetworkPlayerStats lPlayerStatsEvent;

		GuiEventNetworkPlayerStats(/* parameters */);
		CgsCore::StrnCpy(/* parameters */);
		operator=(/* parameters */);
		AddOutputGuiEvent<BrnGui::GuiEventNetworkPlayerStats>(/* parameters */);
		BrnNetworkModule::GetOutputGuiEventQueue(/* parameters */);
		AddGuiEvent<BrnGui::GuiEventNetworkPlayerStats>(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
		NetworkPlayerStats::GetTimeStamp(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkManager.cpp:3127
void BrnNetwork::BrnNetworkManager::ProcessHLUpdateFlags(const BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNetwork::NetworkManager::GetPlayerManager(/* parameters */);
	GetServerInterface(/* parameters */);
	CgsNetwork::PlayerManager::SetDiskAccessible(/* parameters */);
	CgsNetwork::PlayerManager::SetDiskAccessible(/* parameters */);
	{
		// BrnNetworkManager.cpp:3151
		GuiEventNetworkDisconnected lDisconnectedEvent;

		// BrnNetworkManager.cpp:3152
		NetworkOutLocalPlayerDisconnected lNwDisconnectedEvent;

		AddOutputGuiEvent<CgsGui::GuiEventNetworkDisconnected>(/* parameters */);
		BrnNetworkModule::GetGameEventQueue(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutLocalPlayerDisconnected>(/* parameters */);
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

// BrnNetworkManager.cpp:3100
void BrnNetwork::BrnNetworkManager::DxtDecodeCallback(void *  lpPixels, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.cpp:3102
		NetworkOutImageDxtDecodedEvent lNetworkOutImageDxtDecodedEvent;

		// BrnNetworkManager.cpp:3103
		BrnNetwork::BrnNetworkManager * lpNetworkManager;

	}
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
	AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutImageDxtDecodedEvent>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkManager.cpp:2730
void BrnNetwork::BrnNetworkManager::OutputGameParameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.cpp:2732
		NetworkOutGameParamsChanged lEvent;

		// BrnNetworkManager.cpp:2733
		GameParams lGameParams;

		NetworkOutGameParamsChanged(/* parameters */);
		GameParams::GameParams(/* parameters */);
		BrnNetworkModuleIO::NetworkOutGameParamsChanged::Construct(/* parameters */);
		CgsNetwork::ServerInterfaceGameParamsBase::IsRankedGame(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutGameParamsChanged>(/* parameters */);
		GameParams::~GameParams(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnNetworkManager.cpp:1789
void BrnNetwork::BrnNetworkManager::UpdateMenuDataFromPlayerParams(int32_t  liServerInterfacePlayerIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.cpp:1791
		PlayerParams lPlayerParams;

		// BrnNetworkManager.cpp:1792
		PlayerMenuData * lpPlayerMenuData;

	}
	PlayerParams::PlayerParams(/* parameters */);
	PlayerParamsBase::GetFreeBurnCarID(/* parameters */);
	{
		// BrnNetworkManager.cpp:1809
		NetworkOutPlayerChangedCarEvent lChangedCarEvent;

		// BrnNetworkManager.cpp:1815
		NetworkOutPlayerChangedCarColourEvent lCarColourEvent;

		CgsNetwork::ServerInterfacePlayerParamsBase::GetID(/* parameters */);
		BrnNetworkModuleIO::NetworkOutPlayerChangedCarEvent::SetNetworkPlayerID(/* parameters */);
		BrnNetworkModuleIO::NetworkOutPlayerChangedCarEvent::SetModelID(/* parameters */);
		BrnNetworkModuleIO::NetworkOutPlayerChangedCarEvent::SetWheelID(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerChangedCarEvent>(/* parameters */);
		CgsNetwork::ServerInterfacePlayerParamsBase::GetID(/* parameters */);
		BrnNetworkModuleIO::NetworkOutPlayerChangedCarColourEvent::SetNetworkPlayerID(/* parameters */);
		CgsNetwork::ServerInterfacePlayerParamsBase::GetID(/* parameters */);
		BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
		BrnNetworkModuleIO::NetworkOutPlayerChangedCarColourEvent::SetCarColourIndex(/* parameters */);
		BrnNetworkModuleIO::NetworkOutPlayerChangedCarColourEvent::SetActiveRaceCarIndex(/* parameters */);
		BrnNetworkModuleIO::NetworkOutPlayerChangedCarColourEvent::SetPaintFinishIndex(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerChangedCarColourEvent>(/* parameters */);
	}
	PlayerParams::~PlayerParams(/* parameters */);
	{
		// BrnNetworkManager.cpp:1805
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
		// BrnNetworkManager.cpp:1799
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsNetwork::ServerInterfacePlayerParamsBase::GetID(/* parameters */);
	}
}

// BrnNetworkManager.cpp:1920
void BrnNetwork::BrnNetworkManager::PlayerManagerEventCallback(CgsNetwork::PlayerManager::EEvent  leEvent, void *  lpEventData, void *  lpUserData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.cpp:1922
		BrnNetwork::BrnNetworkManager * lpNetworkManager;

	}
	{
		// BrnNetworkManager.cpp:1930
		PlayerParams lPlayerParams;

		// BrnNetworkManager.cpp:1931
		PlayerMenuData * lpMenuData;

		// BrnNetworkManager.cpp:1932
		RoadRulesRecvData::NetworkPlayerID lPlayerID;

		// BrnNetworkManager.cpp:1933
		bool lbIsLocalPlayer;

		// BrnNetworkManager.cpp:1985
		NetworkOutPlayerAddedEvent lPlayerAdded;

		PlayerParamsBase::GetFreeBurnCarID(/* parameters */);
		BrnNetworkModuleIO::NetworkOutPlayerAddedEvent::SetNetworkPlayerID(/* parameters */);
		PlayerParamsBase::GetPlayerTeam(/* parameters */);
		BrnNetworkModuleIO::NetworkOutPlayerAddedEvent::SetModelID(/* parameters */);
		BrnNetworkModuleIO::NetworkOutPlayerAddedEvent::SetWheelID(/* parameters */);
		BrnNetworkModuleIO::NetworkOutPlayerAddedEvent::SetCarColourIndex(/* parameters */);
		BrnNetworkModuleIO::NetworkOutPlayerAddedEvent::SetLocalPlayer(/* parameters */);
		BrnNetworkModuleIO::NetworkOutPlayerAddedEvent::SetTeam(/* parameters */);
		BrnNetworkModuleIO::NetworkOutPlayerAddedEvent::SetCarPaintFinishIndex(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerAddedEvent>(/* parameters */);
		PlayerParams::~PlayerParams(/* parameters */);
	}
	PlayerParams::PlayerParams(/* parameters */);
	CgsCore::StrnCpy(/* parameters */);
	CgsNetwork::NetworkDecodeUncompressedCgsID(/* parameters */);
	{
		// BrnNetworkManager.cpp:2068
		NetworkPlayerDisconnectedEvent lPlayerDisconnectEvent;

		// BrnNetworkManager.cpp:2069
		RoadRulesRecvData::NetworkPlayerID lPlayerID;

		BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
		BrnNetworkModuleIO::NetworkPlayerDisconnectedEvent::Construct(/* parameters */);
	}
	{
		// BrnNetworkManager.cpp:2114
		NetworkPlayerDisconnectedEvent lPlayerDisconnectEvent;

		// BrnNetworkManager.cpp:2115
		RoadRulesRecvData::NetworkPlayerID lPlayerID;

		{
			// BrnNetworkManager.cpp:2125
			EActiveRaceCarIndex leActiveRaceCarIndex;

			BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
			BrnNetworkModuleIO::NetworkPlayerDisconnectedEvent::Construct(/* parameters */);
			AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkPlayerDisconnectedEvent>(/* parameters */);
		}
		BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
	}
	{
		// BrnNetworkManager.cpp:2087
		NetworkPlayerDisconnectedEvent lPlayerDisconnectEvent;

		// BrnNetworkManager.cpp:2088
		RoadRulesRecvData::NetworkPlayerID lPlayerID;

		{
			// BrnNetworkManager.cpp:2098
			EActiveRaceCarIndex leActiveRaceCarIndex;

			BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
		}
	}
	{
		// BrnNetworkManager.cpp:2001
		RoadRulesRecvData::NetworkPlayerID lPlayerID;

		// BrnNetworkManager.cpp:2013
		NetworkOutPlayerFinalisedEvent lPlayerFinalised;

		BrnNetworkModuleIO::NetworkOutPlayerFinalisedEvent::SetNetworkPlayerID(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerFinalisedEvent>(/* parameters */);
	}
	{
		// BrnNetworkManager.cpp:2021
		RoadRulesRecvData::NetworkPlayerID lPlayerID;

		GetServerInterface(/* parameters */);
		{
			// BrnNetworkManager.cpp:2041
			NetworkOutPlayerRemovedEvent lPlayerRemoved;

			// BrnNetworkManager.cpp:2042
			PlayerName lRemovedPlayerName;

			// BrnNetworkManager.cpp:2043
			CgsNetwork::PlayerMenuData * lpPlayerMenuData;

			CgsNetwork::NetworkManager::GetPlayerManager(/* parameters */);
			CgsNetwork::PlayerName::Construct(/* parameters */);
			BrnNetworkModuleIO::NetworkOutPlayerRemovedEvent::SetNetworkPlayerID(/* parameters */);
			BrnNetworkModuleIO::NetworkOutPlayerRemovedEvent::SetIsLocalPlayerInGame(/* parameters */);
			BrnNetworkModuleIO::NetworkOutPlayerRemovedEvent::SetPlayerName(/* parameters */);
			BrnNetworkModuleIO::NetworkOutPlayerRemovedEvent::SetIsLocalPlayerLeavingGame(/* parameters */);
			BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
			AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutPlayerRemovedEvent>(/* parameters */);
		}
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
		// BrnNetworkManager.cpp:1983
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
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
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnNetworkModuleIO::NetworkPlayerDisconnectedEvent::Construct(/* parameters */);
}

// BrnNetworkManager.cpp:2465
void BrnNetwork::BrnNetworkManager::OutputPlayerStatusInfo(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.cpp:2467
		InGamePlayerStatusData * lpPlayerStatusData;

		// BrnNetworkManager.cpp:2468
		LobbyPlayerStatusData * lpPlayerLobbyData;

		// BrnNetworkManager.cpp:2469
		PlayerMenuData * lpPlayerMenuData;

		// BrnNetworkManager.cpp:2470
		PlayerMenuData * lpLocalPlayerMenuData;

		// BrnNetworkManager.cpp:2471
		PlayerParams lPlayerParams;

		// BrnNetworkManager.cpp:2472
		GameParams lGameParams;

		// BrnNetworkManager.cpp:2473
		RoadRulesRecvData::NetworkPlayerID lPlayerID;

		// BrnNetworkManager.cpp:2474
		RoadRulesRecvData::NetworkPlayerID lLocalPlayerID;

		// BrnNetworkManager.cpp:2475
		int32_t liPlayerStatusDataIndex;

		// BrnNetworkManager.cpp:2476
		int32_t liNumPlayerStats;

		// BrnNetworkManager.cpp:2477
		CgsNetwork::FakeNetworkConditions::BufferedMessageData::ConnectionData lConnectionData;

		// BrnNetworkManager.cpp:2619
		GuiEventCamStatus leCamStatusEvent;

		GameParams::GameParams(/* parameters */);
	}
	PlayerParams::PlayerParams(/* parameters */);
	PlayerParams::PlayerParams(/* parameters */);
	CgsNetwork::NetworkManager::GetPlayerManager(/* parameters */);
	CgsNetwork::PlayerManager::GetNextLocalPlayerID(/* parameters */);
	{
		// BrnNetworkManager.cpp:2524
		const NetworkPlayerStats * lpNetworkPlayerStats;

		BrnNetworkModuleIO::OutputBuffer::GetInGamePlayerStatusInterface(/* parameters */);
		BrnNetworkModuleIO::InGamePlayerStatusInterface::GetPlayerStatusDataForWriting(/* parameters */);
		BrnNetworkModuleIO::InGamePlayerStatusData::Clear(/* parameters */);
		CgsNetwork::PlayerName::Clear(/* parameters */);
		LiveRevengeRelationship::Clear(/* parameters */);
		CommonRelationshipStats::Clear(/* parameters */);
		CommonRelationshipStats::Clear(/* parameters */);
		BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
		BrnNetworkModule::GetActiveRaceCarIndex(/* parameters */);
		operator=(/* parameters */);
		{
			// BrnNetworkManager.cpp:2533
			const LiveRevengeRelationship * lpRevengeRelationship;

			LiveRevengeManager::GetRevengeRelationship(/* parameters */);
		}
		BrnNetworkModuleIO::OutputBuffer::GetOnlineLobbyPlayerStatusInterface(/* parameters */);
		BrnNetworkModuleIO::OnlineLobbyPlayerStatusInterface::GetPlayerLobbyData(/* parameters */);
		BrnNetworkModuleIO::LobbyPlayerStatusData::Clear(/* parameters */);
		CgsNetwork::PlayerManager::IsLocalPlayer(/* parameters */);
		CgsNetwork::NetworkPlayer::GetConnectionData(/* parameters */);
		PlayerParamsBase::IsPlaying(/* parameters */);
		PlayerParamsBase::GetPlayerTeam(/* parameters */);
	}
	BrnNetworkModuleIO::OutputBuffer::GetInGamePlayerStatusInterface(/* parameters */);
	BrnNetworkModuleIO::InGamePlayerStatusInterface::SetNumPlayers(/* parameters */);
	AddOutputGuiEvent<BrnGui::GuiEventCamStatus>(/* parameters */);
	GameParams::~GameParams(/* parameters */);
	PlayerParams::~PlayerParams(/* parameters */);
	{
		// BrnNetworkManager.cpp:2550
		BrnNetwork::BrnNetworkPlayer * lpNetPlayer;

	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnNetworkModuleIO::OutputBuffer::GetInGamePlayerStatusInterface(/* parameters */);
	BrnNetworkModuleIO::InGamePlayerStatusInterface::SetGameName(/* parameters */);
	BrnNetworkModuleIO::OutputBuffer::GetInGamePlayerStatusInterface(/* parameters */);
	BrnNetworkModuleIO::InGamePlayerStatusInterface::SetLocalPlayerIsHost(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnNetworkManager.cpp:1206
void BrnNetwork::BrnNetworkManager::ProcessBeforeSimulation(const PreSimulationInputBuffer *  lpInput, BrnNetwork::BrnNetworkModuleIO::OutputBuffer *  lpOutput, TimerStatus *  lpGameTimerStatus, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::TimerStatus::GetTime(/* parameters */);
	CgsSystem::Time::Time(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	BrnNetworkModuleIO::OutputBuffer::SetInvitesOpen(/* parameters */);
}

// BrnNetworkManager.cpp:368
void BrnNetwork::BrnNetworkManager::Prepare(CgsSystem::EFrameRate  leLocalConsoleFrameRate, const LaunchData *  lpSoftRebootData, HeapMalloc *  lpHeapMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSystem::Time::SetFloatVal(/* parameters */);
	SetCurrentDistrict(/* parameters */);
	SetCurrentPaintFinishIndex(/* parameters */);
	SetFreeBurnCar(/* parameters */);
	SetCurrentCarColourIndex(/* parameters */);
	CgsSystem::Time::SetFloatVal(/* parameters */);
	{
		// BrnNetworkManager.cpp:386
		CgsNetwork::EManagerReturnCode lReturnCode;

		// BrnNetworkManager.cpp:390
		NetworkManagerPrepareParams lNetworkManagerPrepareParams;

		// BrnNetworkManager.cpp:391
		CgsNetwork::NetworkManagerPrepareParams::VersionDisplayPrepareParams lVersionDisplayPrepareParams;

		// BrnNetworkManager.cpp:392
		CgsNetwork::NetworkManagerPrepareParams::PlayerManagerPrepareParams lPlayerManagerPrepareParams;

		// BrnNetworkManager.cpp:393
		NetworkAdapterPrepareParams lNetworkAdapterPrepareParams;

		// BrnNetworkManager.cpp:399
		CgsNetwork::NetworkAdapterPrepareParams::PlatformIDs lPlatformIDs;

		CgsNetwork::NetworkManagerPrepareParams::VersionDisplayPrepareParams::Construct(/* parameters */);
		CgsNetwork::NetworkAdapterPrepareParams::PlatformIDs::Construct(/* parameters */);
		CgsNetwork::NetworkAdapterPrepareParams::Construct(/* parameters */);
		CgsNetwork::NetworkManagerPrepareParams::PlayerManagerPrepareParams::Construct(/* parameters */);
		CgsNetwork::NetworkManagerPrepareParams::Construct(/* parameters */);
	}
	{
		// BrnNetworkManager.cpp:427
		ServerInterfacePrepareParams lPrepareParams;

		CgsNetwork::ServerInterfacePrepareParams::Construct(/* parameters */);
	}
}

// BrnNetworkManager.cpp:1245
void BrnNetwork::BrnNetworkManager::ProcessAfterSimulation(const BrnNetwork::BrnNetworkModuleIO::PostSimulationInputBuffer *  lpInput, BrnUpdateSet  lUpdateSet) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.cpp:1247
		uint32_t luMemory;

		// BrnNetworkManager.cpp:1250
		bool lbAreWePlaying;

		{
			// BrnNetworkManager.cpp:1248
			uint32_t luNewAvailableMemory;

		}
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		CgsNetwork::NetworkAdapterPS3::SetShutdownAllowed(/* parameters */);
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		CgsNetwork::NetworkManager::GetTimeManager(/* parameters */);
		{
			// BrnNetworkManager.cpp:1271
			uint32_t luNewAvailableMemory;

		}
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		StateManager::IsReadyToJoinGameSession(/* parameters */);
		StateManager::IsReadyToJoinGameSession(/* parameters */);
		{
			// BrnNetworkManager.cpp:1288
			uint32_t luNewAvailableMemory;

		}
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		{
			// BrnNetworkManager.cpp:1292
			uint32_t luNewAvailableMemory;

		}
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		{
			// BrnNetworkManager.cpp:1296
			uint32_t luNewAvailableMemory;

		}
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		{
			// BrnNetworkManager.cpp:1300
			uint32_t luNewAvailableMemory;

		}
		{
			// BrnNetworkManager.cpp:1304
			uint32_t luNewAvailableMemory;

		}
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		{
			// BrnNetworkManager.cpp:1308
			uint32_t luNewAvailableMemory;

		}
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		{
			// BrnNetworkManager.cpp:1313
			uint32_t luNewAvailableMemory;

		}
		{
			// BrnNetworkManager.cpp:1317
			uint32_t luNewAvailableMemory;

		}
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		{
			// BrnNetworkManager.cpp:1321
			uint32_t luNewAvailableMemory;

		}
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		{
			// BrnNetworkManager.cpp:1325
			uint32_t luNewAvailableMemory;

		}
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		{
			// BrnNetworkManager.cpp:1329
			uint32_t luNewAvailableMemory;

		}
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		{
			// BrnNetworkManager.cpp:1333
			uint32_t luNewAvailableMemory;

		}
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		{
			// BrnNetworkManager.cpp:1338
			uint32_t luNewAvailableMemory;

		}
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		{
			// BrnNetworkManager.cpp:1343
			uint32_t luNewAvailableMemory;

		}
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		{
			// BrnNetworkManager.cpp:1349
			uint32_t luNewAvailableMemory;

		}
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		{
			// BrnNetworkManager.cpp:1355
			uint32_t luNewAvailableMemory;

		}
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		{
			// BrnNetworkManager.cpp:1365
			uint32_t luNewAvailableMemory;

		}
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		{
			// BrnNetworkManager.cpp:1372
			uint32_t luNewAvailableMemory;

		}
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		{
			// BrnNetworkManager.cpp:1377
			uint32_t luNewAvailableMemory;

		}
		CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
		CgsNetwork::TimeManager::NextFrame(/* parameters */);
		CgsSystem::Time::operator+=(/* parameters */);
		CgsSystem::Time::Time(/* parameters */);
		CgsSystem::Time::operator+=(/* parameters */);
		{
			// BrnNetworkManager.cpp:1382
			uint32_t luNewAvailableMemory;

		}
		BrnNetworkModule::GetNetworkToGameStateInterface(/* parameters */);
		BrnNetworkModuleIO::NetworkToGameStateInterface::SetFramesSinceStart(/* parameters */);
		{
			// BrnNetworkManager.cpp:1391
			uint32_t luNewAvailableMemory;

		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	SelectedRoutesManager::SetRoutesChanged(/* parameters */);
}

// BrnNetworkManager.cpp:1484
void BrnNetwork::BrnNetworkManager::TriggerEventFromServerInterface(CgsNetwork::EServerInterfaceEvent  leEvent, void *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnNetworkManager.cpp:1640
		GuiEventNetworkDisconnected lDisconnectedEvent;

		// BrnNetworkManager.cpp:1641
		NetworkOutLocalPlayerDisconnected lNwDisconnectedEvent;

		CgsCore::StrnCpy(/* parameters */);
		GetServerInterface(/* parameters */);
		AddOutputGuiEvent<CgsGui::GuiEventNetworkDisconnected>(/* parameters */);
		BrnNetworkModule::GetGameEventQueue(/* parameters */);
		BrnNetworkModule::GetNetworkEventQueue(/* parameters */);
		AddEvent<BrnNetwork::BrnNetworkModuleIO::NetworkOutLocalPlayerDisconnected>(/* parameters */);
	}
	{
		// BrnNetworkManager.cpp:1731
		GuiEventNetworkPlayerImage lNetworkPlayerImageEvent;

		// BrnNetworkManager.cpp:1736
		PlayerInfoData lPlayerInfo;

		AddOutputGuiEvent<BrnGui::GuiEventNetworkPlayerImage>(/* parameters */);
		PlayerInfoData::PlayerInfoData(/* parameters */);
		PlayerInfoData::~PlayerInfoData(/* parameters */);
	}
	{
		// BrnNetworkManager.cpp:1751
		CgsNetwork::EKickReason leKickReason;

	}
	{
		// BrnNetworkManager.cpp:1513
		int32_t liServerInterfacePlayerIndex;

	}
	{
		// BrnNetworkManager.cpp:1522
		GameParams lGameParams;

		// BrnNetworkManager.cpp:1523
		CgsNetwork::ServerInterfaceGames * lpGamesComponent;

		GameParams::GameParams(/* parameters */);
		CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
		GameParams::~GameParams(/* parameters */);
	}
	{
		// BrnNetworkManager.cpp:1560
		GuiEventNetworkCustomMatchResults lSearchResults;

		// BrnNetworkManager.cpp:1561
		int32_t liGamesIndex;

		// BrnNetworkManager.cpp:1562
		int32_t liSearchGamesIndex;

		// BrnNetworkManager.cpp:1563
		int32_t liNumGames;

		// BrnNetworkManager.cpp:1564
		CgsNetwork::ServerInterfaceGames * lpGamesComponent;

		// BrnNetworkManager.cpp:1565
		GameParams lGameParams;

		GameParams::~GameParams(/* parameters */);
	}
	GameParams::GameParams(/* parameters */);
	CgsNetwork::ServerInterfaceDirtySock::GetGameComponent(/* parameters */);
	CgsCore::StrnCpy(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	AddOutputGuiEvent<BrnGui::GuiEventNetworkCustomMatchResults>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsNetwork::NetworkManager::GetPlayerManager(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}


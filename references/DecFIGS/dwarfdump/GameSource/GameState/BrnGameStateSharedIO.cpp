// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnStuntModeScoring.h:26
	namespace GameStateModuleIO {
		// BrnGameStateSharedIO.cpp:306
		extern const char * GetModeDebugName(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnGameStateSharedIO.cpp:62
		extern const CgsID[64] KI_SAVE_GAME_CHALLENGE_INDEX_ROAD_ID_MAPPING;

		// BrnGameStateSharedIO.cpp:26
		const int32_t KI_INVALID_RACE_CAR_INDEX = 4294967295;

		// BrnGameStateSharedIO.cpp:27
		const int32_t KI_MAX_STRING_ID_SIZE = 32;

		// BrnGameStateSharedIO.cpp:30
		const const char *[17] KAPC_MODE_DEBUG_NAMES;

	}

}

// BrnGameStateSharedIO.cpp:285
void BrnGameState::GameStateModuleIO::RaceCarRaceDistanceInterface::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.cpp:287
		int32_t liRaceCarIndex;

	}
}

// BrnGameStateSharedIO.cpp:267
void BrnGameState::GameStateModuleIO::FlybyRivalData::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameStateSharedIO.cpp:147
void BrnGameState::GameStateModuleIO::FlybyData::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.cpp:151
		int32_t liFlybyCarIndex;

	}
}

// BrnGameStateSharedIO.cpp:233
void BrnGameState::GameStateModuleIO::FlybyData::SetMessageStyle(BrnGameState::GameStateModuleIO::FlybyRivalData::EMessageStyle  leMessageStyle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameStateSharedIO.cpp:170
void BrnGameState::GameStateModuleIO::FlybyData::AddCar(EActiveRaceCarIndex  leRaceCarIndex, const PlayerName *  lpPlayerName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameStateSharedIO.cpp:195
void BrnGameState::GameStateModuleIO::FlybyData::AddMessage(const char *  lpcMessage, const char *  lpcParameter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.cpp:201
		int32_t liFlybyCarIndex;

		// BrnGameStateSharedIO.cpp:202
		int32_t liCurrentMessageIndex;

	}
	CgsCore::StrnCpy(/* parameters */);
	CgsCore::StrnCpy(/* parameters */);
	{
		// BrnGameStateSharedIO.cpp:199
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGameStateSharedIO.cpp:209
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGameStateSharedIO.cpp:251
void BrnGameState::GameStateModuleIO::FlybyData::AddMessage(const char *  lpcMessage, int32_t  liParameter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateSharedIO.cpp:253
		char[20] lacBuffer;

	}
}


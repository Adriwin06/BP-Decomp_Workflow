// BrnChallengeData.h:27
namespace BrnStreetData {
	// BrnChallengeHighScoreEntry.cpp:275
	extern void UpdateEntry(ChallengeHighScoreEntry *, ChallengeHighScoreEntry *, ChallengeHighScoreEntry *);

}

// BrnChallengeHighScoreEntry.cpp:244
void BrnStreetData::ChallengeHighScoreEntry::IsWholeChallengeOwnedBySamePlayer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeHighScoreEntry.cpp:246
		BrnStreetData::ScoreType leScoreType;

	}
	operator++(/* parameters */);
	CgsNetwork::PlayerName::IsEqualTo(/* parameters */);
}

// BrnChallengeHighScoreEntry.cpp:219
void BrnStreetData::ChallengeHighScoreEntry::Copy(const ChallengeHighScoreEntry *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeHighScoreEntry.cpp:227
		int32_t liIndex;

	}
}

// BrnChallengeHighScoreEntry.cpp:300
void _GLOBAL__D__ZN12BrnGameState11ModeManager18miPreWorldUpdatePME() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnChallengeHighScoreEntry.cpp:299
void _GLOBAL__I__ZN12BrnGameState11ModeManager18miPreWorldUpdatePME() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnChallengeHighScoreEntry.cpp:97
void BrnStreetData::ChallengeHighScoreEntry::UpdateEntry(const ChallengeHighScoreEntry *  lpEntry, CgsContainers::FastBitArray<2> *  lpUpdateScoresBitArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeHighScoreEntry.cpp:99
		PlayerName lPlayerName;

		// BrnChallengeHighScoreEntry.cpp:100
		int32_t liScore;

		// BrnChallengeHighScoreEntry.cpp:101
		BrnStreetData::ScoreType leScoreIndex;

		// BrnChallengeHighScoreEntry.cpp:102
		bool lbEntryUpdated;

	}
	CgsContainers::FastBitArray<2>::UnSetAll(/* parameters */);
	CgsContainers::FastBitArray<2>::SetBit(/* parameters */);
	operator++(/* parameters */);
	ChallengeData::ContainsData(/* parameters */);
	ChallengeData::ContainsData(/* parameters */);
	SetScore(/* parameters */);
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	SetScore(/* parameters */);
	CgsContainers::BitArray<2u>::SetBit(/* parameters */);
	CgsContainers::BitArray<2u>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<2u>::SetBit(/* parameters */);
	CgsContainers::BitArray<2u>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnChallengeHighScoreEntry.cpp:171
void BrnStreetData::ChallengeHighScoreEntry::AreAnyScoresEqual(const ChallengeHighScoreEntry *  lpEntry, CgsContainers::FastBitArray<2> *  lpEqualScoresBitArray) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeHighScoreEntry.cpp:173
		BrnStreetData::ScoreType leScoreIndex;

	}
	CgsContainers::FastBitArray<2>::UnSetAll(/* parameters */);
	operator++(/* parameters */);
	ChallengeData::ContainsData(/* parameters */);
	ChallengeData::ContainsData(/* parameters */);
	{
		// BrnChallengeHighScoreEntry.cpp:187
		PlayerName lPlayerName;

		// BrnChallengeHighScoreEntry.cpp:188
		int32_t liScore;

		GetScore(/* parameters */);
		ChallengeData::GetScore(/* parameters */);
		CgsContainers::FastBitArray<2>::SetBit(/* parameters */);
	}
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
}

// BrnChallengeHighScoreEntry.cpp:40
void BrnStreetData::ChallengeHighScoreEntry::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeHighScoreEntry.cpp:42
		int32_t liScoreType;

	}
	CgsNetwork::PlayerName::Construct(/* parameters */);
	CgsNetwork::PlayerName::Clear(/* parameters */);
}

// BrnChallengeHighScoreEntry.cpp:64
void BrnStreetData::ChallengeHighScoreEntry::Construct(ChallengeData *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnChallengeHighScoreEntry.cpp:66
		PlayerName lPlayerName;

		// BrnChallengeHighScoreEntry.cpp:67
		BrnStreetData::ScoreType leScoreType;

		CgsNetwork::PlayerName::Construct(/* parameters */);
	}
	operator++(/* parameters */);
	ChallengeData::ContainsData(/* parameters */);
	ChallengeData::GetScore(/* parameters */);
	SetScore(/* parameters */);
	CgsContainers::BitArray<2u>::GetFirstNonZeroBit(/* parameters */);
}

// BrnChallengeHighScoreEntry.cpp:24

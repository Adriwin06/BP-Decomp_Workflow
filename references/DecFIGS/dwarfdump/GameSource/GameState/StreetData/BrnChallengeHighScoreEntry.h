// BrnChallengeHighScoreEntry.h:109
extern char[] KAC_LOCAL_PLAYER_NAME_TEXT;

// BrnChallengeHighScoreEntry.h:49
struct BrnStreetData::ChallengeHighScoreEntry : public ChallengeData {
	// BrnChallengeHighScoreEntry.h:109
	extern char[] KAC_LOCAL_PLAYER_NAME_TEXT;

private:
	// BrnChallengeHighScoreEntry.h:114
	PlayerName[2] maPlayerNames;

public:
	// BrnChallengeHighScoreEntry.h:56
	void Construct();

	// BrnChallengeHighScoreEntry.h:61
	void Construct(ChallengeData *);

	// BrnChallengeHighScoreEntry.h:74
	bool UpdateEntry(const ChallengeHighScoreEntry *, CgsContainers::FastBitArray<2> *);

	// BrnChallengeHighScoreEntry.h:80
	bool AreAnyScoresEqual(const ChallengeHighScoreEntry *, CgsContainers::FastBitArray<2> *);

	// BrnChallengeHighScoreEntry.h:88
	void GetScore(BrnStreetData::ScoreType, int32_t *, PlayerName *) const;

	// BrnChallengeHighScoreEntry.h:94
	void SetScore(BrnStreetData::ScoreType, int32_t, const PlayerName *);

	// BrnChallengeHighScoreEntry.h:99
	void ClearScore(BrnStreetData::ScoreType);

	// BrnChallengeHighScoreEntry.h:103
	void Copy(const ChallengeHighScoreEntry *);

	// BrnChallengeHighScoreEntry.h:107
	bool IsWholeChallengeOwnedBySamePlayer();

}

// BrnChallengeHighScoreEntry.h:202
void BrnStreetData::ChallengeParScoresEntry::GetScore(BrnStreetData::ScoreType  leScoreType, int32_t *  lpiScore, CgsID *  lpRivalId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


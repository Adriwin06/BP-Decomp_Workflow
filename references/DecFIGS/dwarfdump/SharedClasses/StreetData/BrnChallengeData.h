// BrnChallengeData.h:27
namespace BrnStreetData {
	struct Road;

}

// BrnChallengeData.h:70
extern const int32_t[2] KAI_MIN_SCORES;

// BrnChallengeData.h:71
extern const int32_t[2] KAI_MAX_SCORES;

// BrnChallengeData.h:191
extern const int32_t (*)(int32_t, int32_t)[2] mapComparisonFunctions;

// BrnChallengeData.h:27
namespace BrnStreetData {
	// BrnChallengeData.h:47
	enum ScoreType {
		E_SCORE_TYPE_START = 0,
		E_SCORE_TYPE_TIME = 0,
		E_SCORE_TYPE_CRASH = 1,
		E_SCORE_TYPE_COUNT = 2,
	}

	struct ScoreList;

	struct ChallengeData;

	struct ChallengePlayerScoreEntry;

	struct ChallengeParScoresEntry;

	struct Road;

	struct AIInfo;

	struct Street;

	struct StreetData;

	struct ChallengeHighScoreEntry;

}

// BrnChallengeData.h:68
struct BrnStreetData::ScoreList {
	// BrnChallengeData.h:70
	extern const int32_t[2] KAI_MIN_SCORES;

	// BrnChallengeData.h:71
	extern const int32_t[2] KAI_MAX_SCORES;

private:
	// BrnChallengeData.h:92
	int32_t[2] maScores;

public:
	// BrnChallengeData.h:74
	void Construct();

	// BrnChallengeData.h:78
	int32_t GetScore(BrnStreetData::ScoreType) const;

	// BrnChallengeData.h:83
	void SetScore(BrnStreetData::ScoreType, int32_t);

	// BrnChallengeData.h:86
	void FixDown();

	// BrnChallengeData.h:89
	void FixUp();

}

// BrnChallengeData.h:106
struct BrnStreetData::ChallengeData {
protected:
	// BrnChallengeData.h:184
	BitArray<2u> mDirty;

	// BrnChallengeData.h:185
	BitArray<2u> mValidScores;

	// BrnChallengeData.h:186
	ScoreList mScoreList;

	// BrnChallengeData.h:191
	extern const int32_t (*)(int32_t, int32_t)[2] mapComparisonFunctions;

public:
	// BrnChallengeData.h:112
	void Construct();

	// BrnChallengeData.h:119
	void SetClean(BrnStreetData::ScoreType);

	// BrnChallengeData.h:132
	const bool IsDirty(BrnStreetData::ScoreType);

	// BrnChallengeData.h:144
	const bool ContainsData(BrnStreetData::ScoreType) const;

	// BrnChallengeData.h:155
	const ScoreList * GetScoreList() const;

	// BrnChallengeData.h:159
	int32_t GetScore(BrnStreetData::ScoreType) const;

	// BrnChallengeData.h:164
	void SetScore(BrnStreetData::ScoreType, int32_t);

	// BrnChallengeData.h:167
	void FixDown();

	// BrnChallengeData.h:170
	void FixUp();

	// BrnChallengeData.h:173
	void Copy(const ChallengeData *);

	// BrnChallengeData.h:179
	int32_t CompareScores(BrnStreetData::ScoreType, int32_t, int32_t);

}

// BrnChallengeData.h:204
struct BrnStreetData::ChallengePlayerScoreEntry : public ChallengeData {
private:
	// BrnChallengeData.h:229
	CgsID[2] maCarIDs;

public:
	// BrnChallengeData.h:209
	void Construct();

	// BrnChallengeData.h:214
	void Copy(const ChallengePlayerScoreEntry *);

	// BrnChallengeData.h:219
	CgsID GetCarID(BrnStreetData::ScoreType) const;

	// BrnChallengeData.h:225
	void SetCarID(BrnStreetData::ScoreType, CgsID);

}

// BrnChallengeData.h:244
struct BrnStreetData::ChallengeParScoresEntry : public ChallengeData {
private:
	// BrnChallengeData.h:270
	CgsID[2] mRivals;

public:
	// BrnChallengeData.h:255
	void Construct(Time, CgsID, Time, CgsID, int32_t, CgsID);

	// BrnChallengeData.h:263
	void GetScore(BrnStreetData::ScoreType, int32_t *, CgsID *) const;

	// BrnChallengeData.h:266
	void Copy(const ChallengeParScoresEntry *);

}

// BrnChallengeData.h:27
namespace BrnStreetData {
	// BrnChallengeData.h:47
	enum ScoreType {
		E_SCORE_TYPE_START = 0,
		E_SCORE_TYPE_TIME = 0,
		E_SCORE_TYPE_CRASH = 1,
		E_SCORE_TYPE_COUNT = 2,
	}

	struct ScoreList;

	struct ChallengeData;

	struct ChallengePlayerScoreEntry;

	struct ChallengeParScoresEntry;

	struct Road;

	struct AIInfo;

	struct Street;

	struct StreetData;

	struct ChallengeHighScoreEntry;

	// BrnChallengeData.h:56
	extern BrnStreetData::ScoreType operator++(BrnStreetData::ScoreType &, int);

	// BrnChallengeData.h:56
	extern BrnStreetData::ScoreType & operator++(BrnStreetData::ScoreType &);

}

// BrnChallengeData.h:27
namespace BrnStreetData {
	// BrnChallengeData.h:47
	enum ScoreType {
		E_SCORE_TYPE_START = 0,
		E_SCORE_TYPE_TIME = 0,
		E_SCORE_TYPE_CRASH = 1,
		E_SCORE_TYPE_COUNT = 2,
	}

	struct ScoreList;

	struct ChallengeData;

	struct ChallengePlayerScoreEntry;

	struct ChallengeParScoresEntry;

	struct Road;

	struct AIInfo;

	struct Street;

	struct StreetData;

	struct ChallengeHighScoreEntry;

	// BrnChallengeData.h:56
	extern BrnStreetData::ScoreType operator++(BrnStreetData::ScoreType &, int);

}

// BrnChallengeData.h:27
namespace BrnStreetData {
	struct Road;

	// Declaration
	struct StreetDataResourceType {
	public:
		StreetDataResourceType();

	}

}

// BrnChallengeData.h:27
namespace BrnStreetData {
	// BrnChallengeData.h:47
	enum ScoreType {
		E_SCORE_TYPE_START = 0,
		E_SCORE_TYPE_TIME = 0,
		E_SCORE_TYPE_CRASH = 1,
		E_SCORE_TYPE_COUNT = 2,
	}

	struct ScoreList;

	struct ChallengeData;

	struct ChallengePlayerScoreEntry;

	struct ChallengeParScoresEntry;

	struct Road;

	struct AIInfo;

	struct Street;

	struct StreetData;

	struct StreetDataResourceType;

	// BrnChallengeData.h:509
	int32_t CompareFastestTimes(int32_t, int32_t);

	// BrnChallengeData.h:546
	int32_t CompareCrashScores(int32_t, int32_t);

}

// BrnChallengeData.h:27
namespace BrnStreetData {
	// BrnChallengeData.h:47
	enum ScoreType {
		E_SCORE_TYPE_START = 0,
		E_SCORE_TYPE_TIME = 0,
		E_SCORE_TYPE_CRASH = 1,
		E_SCORE_TYPE_COUNT = 2,
	}

	struct ScoreList;

	struct ChallengeData;

	struct ChallengePlayerScoreEntry;

	struct Road;

	struct ChallengeHighScoreEntry;

}


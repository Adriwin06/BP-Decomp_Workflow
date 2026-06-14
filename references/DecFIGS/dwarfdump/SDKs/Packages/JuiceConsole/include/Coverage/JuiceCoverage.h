// JuiceCoverage.h:37
struct Juice::CoverageManager : Processor {
	// JuiceCoverage.cpp:32
	extern Juice::CoverageManager *(*)() Activate;

private:
	// JuiceCoverage.h:63
	extern const int ASSETS;

	// JuiceCoverage.h:64
	extern const int STATS = 1;

	// JuiceCoverage.h:65
	extern const int EVENTS = 2;

	// JuiceCoverage.h:66
	extern const int NUM_AREAS = 3;

	// JuiceCoverage.h:67
	extern const int NUM_INDEPENDENT_CYCLES = 6;

	// JuiceCoverage.h:68
	extern const int NUM_NESTED_CYCLES = 4;

	// JuiceCoverage.h:69
	extern const int NUM_CYCLES = 10;

	// JuiceCoverage.h:74
	int[10] mCurrentCycle;

	// JuiceCoverage.h:76
	int mMapFileOffset;

	// JuiceCoverage.h:77
	int mNextCoverageSlot;

	// JuiceCoverage.h:79
	int mAssetsEnabled;

	// JuiceCoverage.h:80
	int mStatsEnabled;

	// JuiceCoverage.h:81
	int mEventsEnabled;

	// JuiceCoverage.h:82
	int mGameTrackerEnabled;

	// JuiceCoverage.h:83
	unsigned int mMaxEvents;

	// JuiceCoverage.h:85
	int[3] mFlagPointers;

	// JuiceCoverage.h:87
	extern const int kMaxPoints = 32;

	// JuiceCoverage.h:88
	Juice::CoveragePoint *[32] mCoveragePoints;

public:
	void CoverageManager(const CoverageManager &);

	// JuiceCoverage.cpp:34
	Juice::CoverageManager * InstanceFunction();

	// JuiceCoverage.cpp:61
	void Register(Juice::CoveragePoint *, const void *, unsigned char, const char *, int);

	// JuiceCoverage.cpp:82
	void SendHit(Juice::CoveragePoint *);

	// JuiceCoverage.cpp:98
	virtual void SendAsset(const char *, const char *, const char *, int);

	// JuiceCoverage.cpp:111
	virtual void SendGameStat(Juice::GameLevel, const char *, const char *, int);

	// JuiceCoverage.cpp:151
	virtual void SendGameStat(Juice::GameLevel, const char *, const char *, float);

	// JuiceCoverage.cpp:131
	virtual void SendGameStat(Juice::GameLevel, const char *, const char *, const char *);

	// JuiceCoverage.cpp:171
	virtual void SendEvent(const char *, const char *, const char *, int, float, const char *, const char *, const char *, float);

	// JuiceCoverage.cpp:191
	virtual void SendTracker(const char *, const char *, const char *, const char *);

	// JuiceCoverage.cpp:235
	virtual void Initialize(Juice::cJuiceCom *);

	// JuiceCoverage.cpp:243
	virtual void ProcessMessage(int);

	// JuiceCoverage.cpp:294
	virtual void Update();

	// JuiceCoverage.cpp:289
	virtual void Disable();

	// JuiceCoverage.cpp:206
	virtual void AdvanceCycle(Juice::GameLevel);

	// JuiceCoverage.cpp:225
	virtual void ResetCycle(Juice::GameLevel);

private:
	// JuiceCoverage.cpp:40
	void CoverageManager();

	// JuiceCoverage.h:72
	virtual void ~CoverageManager();

	// JuiceCoverage.cpp:299
	void SendAllCoverage();

}

// JuiceCoverage.h:24
struct Juice::CoveragePoint {
	int (*)(...) * _vptr.CoveragePoint;

private:
	// JuiceCoverage.h:31
	unsigned char mHitCount;

	// JuiceCoverage.h:32
	unsigned char mGameArea;

public:
	void CoveragePoint(const CoveragePoint &);

	// JuiceCoverage.cpp:307
	void CoveragePoint(int, const char *, long int);

	// JuiceCoverage.h:27
	virtual void ~CoveragePoint();

	// JuiceCoverage.cpp:317
	void Hit();

}

// JuiceCoverage.h:63
extern const int ASSETS;

// JuiceCoverage.h:64
extern const int STATS = 1;

// JuiceCoverage.h:65
extern const int EVENTS = 2;

// JuiceCoverage.h:66
extern const int NUM_AREAS = 3;

// JuiceCoverage.h:68
extern const int NUM_NESTED_CYCLES = 4;

// JuiceCoverage.h:69
extern const int NUM_CYCLES = 10;

// JuiceCoverage.h:87
extern const int kMaxPoints = 32;


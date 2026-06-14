// BrnCrashAnalyser.h:42
struct BrnDirector::CrashAnalysis {
	// BrnCrashAnalyser.h:53
	uint32_t mxEventFlags;

	// BrnCrashAnalyser.h:54
	bool mbIsPlayerCrashing;

	// BrnCrashAnalyser.h:55
	bool mbSuggestLeftOfLineOfAction;

public:
	// BrnCrashAnalyser.h:46
	void Clear();

}

// BrnCrashAnalyser.h:67
struct BrnDirector::CrashAnalyser {
private:
	// BrnCrashAnalyser.h:92
	CrashAnalysis mAnalysis;

	// BrnCrashAnalyser.h:93
	CrashAnalysis mLastAnalysis;

	// BrnCrashAnalyser.h:94
	CrashAnalysis mAnalysisAtLastShotChange;

public:
	// BrnCrashAnalyser.h:70
	void Construct();

	// BrnCrashAnalyser.h:73
	bool Prepare();

	// BrnCrashAnalyser.h:79
	// Declaration
	void Update(const BrnDirector::DirectorIO::InputBuffer *, const GameState *, EActiveRaceCarIndex) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCrashAnalyser.cpp:46
		using namespace AttribSys::Enums;

	}

	// BrnCrashAnalyser.h:82
	const BrnDirector::CrashAnalysis & GetAnalysis() const;

	// BrnCrashAnalyser.h:85
	const BrnDirector::CrashAnalysis & GetAnalysisAtLastShotChange() const;

	// BrnCrashAnalyser.h:88
	void SetShotChanged();

}


// BrnNetworkRoadRulesData.h:29
namespace BrnNetwork {
	// Declaration
	struct ScoreboardManager {
		// BrnNetworkScoreboardManager.h:55
		enum EState {
			E_STATE_IDLE = 0,
			E_STATE_GETTING_HEADINGS = 1,
			E_STATE_GETTING_SCOREBOARD = 2,
			E_STATE_COUNT = 3,
		}

	}

}

// BrnNetworkScoreboardManager.h:52
struct BrnNetwork::ScoreboardManager {
private:
	// BrnNetworkScoreboardManager.h:111
	extern const int KI_INVALID_HEADING = 4294967295;

	// BrnNetworkScoreboardManager.h:113
	int32_t miCurrentView;

	// BrnNetworkScoreboardManager.h:114
	int32_t miCurrentVariation;

	// BrnNetworkScoreboardManager.h:115
	int32_t miCurrentCategory;

	// BrnNetworkScoreboardManager.h:116
	int32_t miCurrentIndex;

	// BrnNetworkScoreboardManager.h:119
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkScoreboardManager.h:122
	extern const int32_t KI_EVENT_QUEUE_SIZE = 1;

	// BrnNetworkScoreboardManager.h:123
	FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent,1> mScoreboardEventQueue;

	// BrnNetworkScoreboardManager.h:125
	CgsNetwork::ServerInterfaceRankings * mpRankings;

	// BrnNetworkScoreboardManager.h:126
	CgsNetwork::ServerInterface * mpServerInterface;

	// BrnNetworkScoreboardManager.h:129
	BrnNetwork::ScoreboardManager::EState meCurrentState;

	// BrnNetworkScoreboardManager.h:131
	int32_t miCurrentViewOffset;

	// BrnNetworkScoreboardManager.h:134
	BrnNetwork::ScoreboardDebugComponent mDebugComponent;

public:
	// BrnNetworkScoreboardManager.h:67
	void Construct();

	// BrnNetworkScoreboardManager.h:73
	bool Prepare(CgsNetwork::ServerInterface *, BrnNetwork::BrnNetworkModule *);

	// BrnNetworkScoreboardManager.h:77
	bool Release();

	// BrnNetworkScoreboardManager.h:81
	void Destruct();

	// BrnNetworkScoreboardManager.h:86
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkScoreboardManager.h:91
	void HandleScoreboardEvent(const NetworkInSelectScoreboardEvent *);

	// BrnNetworkScoreboardManager.h:95
	void SetViewAndDownloadHeaders();

	// BrnNetworkScoreboardManager.h:99
	void Disconnected();

private:
	// BrnNetworkScoreboardManager.h:142
	void BuildDownloadedScoreboard(Scoreboard *);

	// BrnNetworkScoreboardManager.h:147
	void AddColumnInfoToScoreboard(Scoreboard *);

	// BrnNetworkScoreboardManager.h:152
	void AddRowDataToScoreboard(Scoreboard *);

	// BrnNetworkScoreboardManager.h:157
	void AddSortedRowDataToScoreboard(Scoreboard *);

	// BrnNetworkScoreboardManager.h:161
	void ProcessEventQueue();

	// BrnNetworkScoreboardManager.h:165
	void CopyCategories();

	// BrnNetworkScoreboardManager.h:171
	void CopyVariations(int32_t, int32_t);

	// BrnNetworkScoreboardManager.h:176
	void CopyIndexes(int32_t);

	// BrnNetworkScoreboardManager.h:180
	void PageUp();

	// BrnNetworkScoreboardManager.h:184
	void PageDown();

	// BrnNetworkScoreboardManager.h:189
	void OffsetScoreboard(int32_t);

	// BrnNetworkScoreboardManager.h:194
	int32_t GetColumnIndexOfType(int32_t);

	// BrnNetworkScoreboardManager.h:200
	void PostProcessColumnData(char *, int32_t);

	// BrnNetworkScoreboardManager.h:205
	BrnNetwork::ScoreboardColumn::EDataType DirtySockColumnTypeToEDataType(int32_t);

	// BrnNetworkScoreboardManager.h:211
	int _ScoreboardSortData(const void *, const void *);

	// BrnNetworkScoreboardManager.h:217
	void AddNumberBeforeAndAfter(Scoreboard *, int8_t);

}

// BrnNetworkScoreboardManager.h:122
extern const int32_t KI_EVENT_QUEUE_SIZE = 1;

// BrnJuiceNetworkScriptInterface.h:26
namespace BrnNetwork {
	// Declaration
	struct ScoreboardManager {
		// BrnNetworkScoreboardManager.h:55
		enum EState {
			E_STATE_IDLE = 0,
			E_STATE_GETTING_HEADINGS = 1,
			E_STATE_GETTING_SCOREBOARD = 2,
			E_STATE_COUNT = 3,
		}

	}

}

// BrnAggressiveDrivingMessage.h:31
namespace BrnNetwork {
	// Declaration
	struct ScoreboardManager {
		// BrnNetworkScoreboardManager.h:55
		enum EState {
			E_STATE_IDLE = 0,
			E_STATE_GETTING_HEADINGS = 1,
			E_STATE_GETTING_SCOREBOARD = 2,
			E_STATE_COUNT = 3,
		}

		// BrnNetworkScoreboardManager.h:104
		struct ScoreboardRowSortData {
			// BrnNetworkScoreboardManager.h:106
			int32_t miRowIndex;

			// BrnNetworkScoreboardManager.h:107
			int32_t miScore;

			// BrnNetworkScoreboardManager.h:108
			bool mbAscending;

		}

	}

}

// BrnNetworkScoreboardManager.h:52
struct BrnNetwork::ScoreboardManager {
private:
	// BrnNetworkScoreboardManager.h:111
	extern const int KI_INVALID_HEADING = 4294967295;

	// BrnNetworkScoreboardManager.h:113
	int32_t miCurrentView;

	// BrnNetworkScoreboardManager.h:114
	int32_t miCurrentVariation;

	// BrnNetworkScoreboardManager.h:115
	int32_t miCurrentCategory;

	// BrnNetworkScoreboardManager.h:116
	int32_t miCurrentIndex;

	// BrnNetworkScoreboardManager.h:119
	BrnNetwork::BrnNetworkModule * mpNetworkModule;

	// BrnNetworkScoreboardManager.h:122
	extern const int32_t KI_EVENT_QUEUE_SIZE = 1;

	// BrnNetworkScoreboardManager.h:123
	FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent,1> mScoreboardEventQueue;

	// BrnNetworkScoreboardManager.h:125
	CgsNetwork::ServerInterfaceRankings * mpRankings;

	// BrnNetworkScoreboardManager.h:126
	CgsNetwork::ServerInterface * mpServerInterface;

	// BrnNetworkScoreboardManager.h:129
	BrnNetwork::ScoreboardManager::EState meCurrentState;

	// BrnNetworkScoreboardManager.h:131
	int32_t miCurrentViewOffset;

	// BrnNetworkScoreboardManager.h:134
	BrnNetwork::ScoreboardDebugComponent mDebugComponent;

public:
	// BrnNetworkScoreboardManager.h:67
	void Construct();

	// BrnNetworkScoreboardManager.h:73
	bool Prepare(CgsNetwork::ServerInterface *, BrnNetwork::BrnNetworkModule *);

	// BrnNetworkScoreboardManager.h:77
	bool Release();

	// BrnNetworkScoreboardManager.h:81
	void Destruct();

	// BrnNetworkScoreboardManager.h:86
	void ProcessBeforeSimulation(BrnNetwork::BrnNetworkModuleIO::OutputBuffer *);

	// BrnNetworkScoreboardManager.h:91
	void HandleScoreboardEvent(const NetworkInSelectScoreboardEvent *);

	// BrnNetworkScoreboardManager.h:95
	void SetViewAndDownloadHeaders();

	// BrnNetworkScoreboardManager.h:99
	void Disconnected();

private:
	// BrnNetworkScoreboardManager.h:142
	void BuildDownloadedScoreboard(Scoreboard *);

	// BrnNetworkScoreboardManager.h:147
	void AddColumnInfoToScoreboard(Scoreboard *);

	// BrnNetworkScoreboardManager.h:152
	void AddRowDataToScoreboard(Scoreboard *);

	// BrnNetworkScoreboardManager.h:157
	void AddSortedRowDataToScoreboard(Scoreboard *);

	// BrnNetworkScoreboardManager.h:161
	void ProcessEventQueue();

	// BrnNetworkScoreboardManager.h:165
	void CopyCategories();

	// BrnNetworkScoreboardManager.h:171
	void CopyVariations(int32_t, int32_t);

	// BrnNetworkScoreboardManager.h:176
	void CopyIndexes(int32_t);

	// BrnNetworkScoreboardManager.h:180
	void PageUp();

	// BrnNetworkScoreboardManager.h:184
	void PageDown();

	// BrnNetworkScoreboardManager.h:189
	void OffsetScoreboard(int32_t);

	// BrnNetworkScoreboardManager.h:194
	int32_t GetColumnIndexOfType(int32_t);

	// BrnNetworkScoreboardManager.h:200
	void PostProcessColumnData(char *, int32_t);

	// BrnNetworkScoreboardManager.h:205
	BrnNetwork::ScoreboardColumn::EDataType DirtySockColumnTypeToEDataType(int32_t);

	// BrnNetworkScoreboardManager.h:211
	int _ScoreboardSortData(const void *, const void *);

	// BrnNetworkScoreboardManager.h:217
	// Declaration
	void AddNumberBeforeAndAfter(Scoreboard *, int8_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnNetworkScoreboardManager.cpp:956
		using namespace CgsDev::Message;

	}

}

// BrnNetworkScoreboardManager.h:111
extern const int KI_INVALID_HEADING = 4294967295;


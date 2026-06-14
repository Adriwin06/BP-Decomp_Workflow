// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceRankings {
	private:
		// CgsServerInterfaceRankings.h:243
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceRankings.h:244
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsServerInterfaceRankings.h:243
extern int[] KAI_ACTION_CODE_MAPPING;

// CgsServerInterfaceRankings.h:244
extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceRankings {
	public:
		// CgsServerInterfaceRankings.h:285
		bool IsBusy();

		// CgsServerInterfaceRankings.h:292
		int32_t GetUserType();

	private:
		// CgsServerInterfaceRankings.h:243
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceRankings.h:244
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsBitStream.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceRankings {
	private:
		// CgsServerInterfaceRankings.h:243
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceRankings.h:244
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceRankings {
	public:
		virtual ~ServerInterfaceRankings();

	private:
		// CgsServerInterfaceRankings.h:243
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceRankings.h:244
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsServerInterfaceRankings.h:56
void CgsNetwork::ServerInterfaceRankings::~ServerInterfaceRankings() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsNetworkConstants.h:26
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceRankings {
	public:
		virtual ~ServerInterfaceRankings();

		ServerInterfaceRankings();

	private:
		// CgsServerInterfaceRankings.h:243
		extern int[] KAI_ACTION_CODE_MAPPING;

		// CgsServerInterfaceRankings.h:244
		extern DSErrorToServerInterfaceErrorTable[] KA_DS_ERROR_TABLE_LOOKUP;

	}

}

// CgsServerInterfaceRankings.h:56
void CgsNetwork::ServerInterfaceRankings::ServerInterfaceRankings() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// Declaration
	struct ServerInterfaceRankings {
		// CgsServerInterfaceRankings.h:59
		enum EAction {
			E_ACTION_START = 0,
			E_ACTION_DOWNLOADING_HEADINGS = 0,
			E_ACTION_DOWNLOADING_RANK = 1,
			E_ACTION_COUNT = 2,
		}

	}

}

// CgsServerInterfaceRankings.h:56
struct CgsNetwork::ServerInterfaceRankings : public CgsNetwork::ServerInterfaceComponent {
private:
	// CgsServerInterfaceRankings.h:243
	extern int[] KAI_ACTION_CODE_MAPPING;

	// CgsServerInterfaceRankings.cpp:51
	extern const DSErrorToServerInterfaceErrorTable[2] KA_DS_ERROR_TABLE_LOOKUP;

	// CgsServerInterfaceRankings.cpp:57
	extern const char *[2] KAPC_ACTION_NAMES;

	// CgsServerInterfaceRankings.h:248
	CgsNetwork::ServerInterface * mpServerInterface;

	// CgsServerInterfaceRankings.h:251
	CgsNetwork::ServerInterfaceRankings::EAction meCurrentAction;

	// Unknown accessibility
	// lobbyrank.h:82
	typedef CgsNetwork::DirtySock::LobbyRankT LobbyRankT;

	// CgsServerInterfaceRankings.h:254
	ServerInterfaceRankings::LobbyRankT * mpLobbyRank;

	// CgsServerInterfaceRankings.h:257
	int32_t miUserType;

public:
	// CgsServerInterfaceRankings.cpp:77
	virtual void Construct();

	// CgsServerInterfaceRankings.cpp:101
	bool Prepare(CgsNetwork::ServerInterface *);

	// CgsServerInterfaceRankings.cpp:128
	void Update();

	// CgsServerInterfaceRankings.cpp:142
	bool Release();

	// CgsServerInterfaceRankings.cpp:167
	void Destruct();

	// CgsServerInterfaceRankings.h:285
	bool IsBusy();

	// CgsServerInterfaceRankings.cpp:182
	virtual void Suspend();

	// CgsServerInterfaceRankings.cpp:197
	virtual void Resume();

	// CgsServerInterfaceRankings.cpp:384
	void DownloadHeadings(const char *);

	// CgsServerInterfaceRankings.cpp:321
	int32_t GetNumberOfCategories();

	// CgsServerInterfaceRankings.cpp:539
	const char * GetCategoryName(int32_t);

	// CgsServerInterfaceRankings.cpp:347
	int32_t GetNumberOfIndexes(int32_t);

	// CgsServerInterfaceRankings.cpp:555
	const char * GetIndexName(int32_t, int32_t);

	// CgsServerInterfaceRankings.cpp:367
	int32_t GetNumberOfVariations(int32_t, int32_t);

	// CgsServerInterfaceRankings.cpp:572
	const char * GetVariationName(int32_t, int32_t, int32_t);

	// CgsServerInterfaceRankings.cpp:589
	void SelectScoreboard(int32_t, int32_t, int32_t);

	// CgsServerInterfaceRankings.cpp:712
	void CancelCurrentActionAndInvalidateScoreboard();

	// CgsServerInterfaceRankings.cpp:262
	const char * GetScoreboardTitle();

	// CgsServerInterfaceRankings.cpp:610
	const char * GetColumnTitle(int32_t);

	// CgsServerInterfaceRankings.cpp:644
	int32_t GetColumnWidth(int32_t);

	// CgsServerInterfaceRankings.cpp:658
	int32_t GetColumnStyle(int32_t);

	// CgsServerInterfaceRankings.cpp:672
	int32_t GetColumnType(int32_t);

	// CgsServerInterfaceRankings.cpp:278
	int32_t GetNumberOfColumns();

	// CgsServerInterfaceRankings.cpp:302
	int32_t GetNumberOfRows();

	// CgsServerInterfaceRankings.h:292
	int32_t GetUserType();

	// CgsServerInterfaceRankings.cpp:686
	bool ScoreboardHasParam(int32_t);

	// CgsServerInterfaceRankings.cpp:732
	int32_t GetRowThatContainsLocalUser();

	// CgsServerInterfaceRankings.cpp:475
	void DownloadScoreboardData(const char **, int32_t);

	// CgsServerInterfaceRankings.cpp:628
	void GetCell(int32_t, int32_t, char *, int32_t);

	// CgsServerInterfaceRankings.cpp:211
	virtual void OnEvent(CgsNetwork::EServerInterfaceEvent, void *);

private:
	// CgsServerInterfaceRankings.cpp:454
	CgsNetwork::EServerInterfaceError ConvertError(int, CgsNetwork::ServerInterfaceRankings::EAction);

	// CgsServerInterfaceRankings.cpp:433
	void FetchCategoriesCallback(ServerInterfaceRankings::LobbyRankT *, LobbyApiMsgT *, void *);

	// CgsServerInterfaceRankings.cpp:519
	void FetchRankCallback(ServerInterfaceRankings::LobbyRankT *, LobbyApiMsgT *, void *);

	// CgsServerInterfaceRankings.cpp:414
	void EndAction(int);

public:
	virtual void ~ServerInterfaceRankings();

}


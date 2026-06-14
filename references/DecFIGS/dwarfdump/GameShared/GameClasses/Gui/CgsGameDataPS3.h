// CgsGameDataPS3.h:50
struct CgsGui::GameData {
private:
	// CgsGameDataPS3.h:140
	extern GameData * mpInstance;

	// CgsGameDataPS3.h:142
	sys_memory_container_t mMemoryContainer;

	// CgsGameDataPS3.h:143
	ContentInformation * mpContentInformation;

	// CgsGameDataPS3.h:145
	char[1055] macContentInfoPath;

	// CgsGameDataPS3.h:146
	char[1055] macUserGameDataPath;

	// CgsGameDataPS3.h:148
	AsyncOp mAsyncOp;

	// CgsGameDataPS3.h:150
	int32_t miFreeSpaceRequiredKb;

	// CgsGameDataPS3.h:151
	int32_t miSaveGameRequiredKb;

	// CgsGameDataPS3.h:152
	int32_t miNumberOfMugshotTypes;

	// CgsGameDataPS3.h:153
	int32_t miNumberOfMugshotsPerType;

	// CgsGameDataPS3.h:154
	uint32_t muMugshotSizeBytes;

	// CgsGameDataPS3.h:155
	int32_t miCallbackResult;

	// CgsGameDataPS3.h:156
	int32_t miGameDataOverheadKb;

	// CgsGameDataPS3.h:158
	char[10] macTitleID;

	// CgsGameDataPS3.h:159
	char[6] macGameVersion;

public:
	// CgsGameDataPS3.h:57
	void Construct(sys_memory_container_t, int32_t, int32_t, uint32_t);

	// CgsGameDataPS3.h:61
	const char * GetUserGameDataDirectory() const;

	// CgsGameDataPS3.h:65
	bool UserGameDataDirectoryExists();

	// CgsGameDataPS3.h:72
	int32_t CheckGameData(const char *, int32_t, int32_t, int32_t *);

	// CgsGameDataPS3.h:78
	int32_t CreateUserGameDataFiles(const char *, ContentInformation *);

	// CgsGameDataPS3.h:85
	bool SaveGameDataFile(uint32_t, void *, uint32_t);

	// CgsGameDataPS3.h:92
	bool LoadGameDataFile(uint32_t, void *, uint32_t);

	// CgsGameDataPS3.h:96
	void SetTitleID(const char *);

	// CgsGameDataPS3.h:103
	void SetGameVersion(const char *);

private:
	// CgsGameDataPS3.h:112
	intptr_t GameDataThreadProc(void *);

	// CgsGameDataPS3.h:119
	void CheckGameDataCallbackStatic(CellGameDataCBResult *, CellGameDataStatGet *, CellGameDataStatSet *);

	// CgsGameDataPS3.h:126
	void CheckGameDataCallback(CellGameDataCBResult *, CellGameDataStatGet *, CellGameDataStatSet *);

	// CgsGameDataPS3.h:133
	void CreateGameDataCallbackStatic(CellGameDataCBResult *, CellGameDataStatGet *, CellGameDataStatSet *);

	// CgsGameDataPS3.h:138
	void CreateUserDirName(char *, const char *);

}


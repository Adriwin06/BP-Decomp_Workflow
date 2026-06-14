// JuiceCore.h:1244
extern const int kTotalProcessors = 15;

// JuiceCore.h:1090
struct Juice::tJuiceRemoteFileInfo {
	// JuiceCore.h:1091
	Juice::JuiceFileStatus mRemoteFileStatus;

	// JuiceCore.h:1092
	int mRemoteFileSize;

	// JuiceCore.h:1093
	Juice::JuiceFileMode mRemoteFileMode;

	// JuiceCore.h:1094
	Juice::JuiceFileType mRemoteFileType;

}

// JuiceCore.h:1100
struct Juice::JuiceHook {
	int (*)(...) * _vptr.JuiceHook;

	// JuiceCore.h:1102
	extern JuiceHook *(*)() Instance;

	// JuiceCore.h:1244
	extern const int kTotalProcessors = 15;

	// JuiceCore.h:1245
	extern int[16][32] mJuiceChannels;

private:
	// JuiceCore.h:1262
	int mEnabled;

	// JuiceCore.h:1263
	int mFrame;

	// JuiceCore.h:1264
	int mInitialConnectionSucceeded;

	// JuiceCore.h:1265
	int mPaused;

	// JuiceCore.h:1266
	int mTrapInit;

	// JuiceCore.h:1267
	int mHookConnected;

	// JuiceCore.h:1268
	bool mConsoleIsResetting;

	// JuiceCore.h:1269
	bool mHasCreatedUpdateThread;

	// JuiceCore.h:1270
	Juice::cJuiceCom * mJuiceCom;

	// JuiceCore.h:1271
	void *[15] mProcessors;

	// JuiceCore.h:1272
	Juice::JuiceMutex * mpMutex;

public:
	// JuiceCore.h:1104
	const int IsConnected();

	// JuiceCore.h:1105
	void SetConnected(int);

	// JuiceCore.h:1106
	const int GetFrame() const;

	// JuiceCore.h:1107
	Juice::cJuiceCom * GetJuiceCom() const;

	// JuiceCore.h:1108
	void DisableJuice();

	// JuiceCore.h:1109
	void DisconnectJuice();

	// JuiceCore.h:1110
	void UpdatePad(void *);

	// JuiceCore.h:1111
	void UpdatePad(void *, int);

	// JuiceCore.h:1112
	int JuiceSessionID();

	// JuiceCore.h:1113
	int IsConnectionPaused();

	// JuiceCore.h:1114
	void ResetConsole();

	// JuiceCore.h:1115
	void ActivateReset();

	// JuiceCore.h:1117
	void Connect();

	// JuiceCore.h:1118
	void FlushAll();

	// JuiceCore.h:1120
	void FrameUpdate();

	// JuiceCore.h:1121
	void AssetHit(const char *, const char *);

	// JuiceCore.h:1122
	void AssetHit(const char *, const char *, int);

	// JuiceCore.h:1123
	void AssetHit(const char *, const char *, const char *, int);

	// JuiceCore.h:1124
	void LogStat(int, const char *, const char *, int);

	// JuiceCore.h:1125
	void LogStat(int, const char *, const char *, const char *);

	// JuiceCore.h:1126
	void LogStat(int, const char *, const char *, float);

	// JuiceCore.h:1127
	void AdvanceCycle(int);

	// JuiceCore.h:1128
	void ResetCycle(int);

	// JuiceCore.h:1129
	void SetLanguage(int);

	// JuiceCore.h:1130
	void GameEvent(const char *, const char *, const char *, int, float, const char *, const char *, const char *);

	// JuiceCore.h:1131
	void GameTracker(const char *, const char *, const char *, const char *);

	// JuiceCore.h:1132
	void LogText(const char *);

	// JuiceCore.h:1133
	void LogPrintf(const char *, ...);

	// JuiceCore.h:1134
	void LogVarArgList(const char *, va_list);

	// JuiceCore.h:1135
	void InitTrapHandler();

	// JuiceCore.h:1136
	void AssertLog(int, const char *, const char *, const char *, const char *);

	// JuiceCore.h:1137
	void ExceptionLog(void *);

	// JuiceCore.h:1138
	void ErrorLog(char *, unsigned int, unsigned int *);

	// JuiceCore.h:1139
	void VerifyFunction(int, const char *);

	// JuiceCore.h:1141
	int ReplayData(int &, int, const char *, int);

	// JuiceCore.h:1142
	unsigned int ReplayData(unsigned int &, int, const char *, int);

	// JuiceCore.h:1143
	short int ReplayData(short int &, int, const char *, int);

	// JuiceCore.h:1144
	short unsigned int ReplayData(short unsigned int &, int, const char *, int);

	// JuiceCore.h:1145
	char ReplayData(char &, int, const char *, int);

	// JuiceCore.h:1146
	unsigned char ReplayData(unsigned char &, int, const char *, int);

	// JuiceCore.h:1147
	float ReplayData(float &, int, const char *, int);

	// JuiceCore.h:1148
	double ReplayData(double &, int, const char *, int);

	// JuiceCore.h:1150
	void ResumeReplay();

	// JuiceCore.h:1151
	void SuspendReplay();

	// JuiceCore.h:1152
	void SuspendCapture();

	// JuiceCore.h:1153
	void ResumeCapture();

	// JuiceCore.h:1154
	const int Replay_IsReplaying();

	// JuiceCore.h:1155
	const int Replay_IsCapturing();

	// JuiceCore.h:1156
	const int Replay_CheckNextEntry(int);

	// JuiceCore.h:1157
	void Replay_GetData(void *, int, int);

	// JuiceCore.h:1158
	const unsigned int Replay_GetData(int, int);

	// JuiceCore.h:1159
	void Replay_AddData(int, int, int);

	// JuiceCore.h:1160
	void Replay_AddData(const void *, int, int);

	// JuiceCore.h:1162
	char * Replay_AddOrGetData(char *, int, const char *, int);

	// JuiceCore.h:1163
	short unsigned int * Replay_AddOrGetData(short unsigned int *, int, const char *, int);

	// JuiceCore.h:1165
	char * Replay_AddOrGetBytes(char *, int, int, const char *, int);

	// JuiceCore.h:1166
	unsigned int CalculateUsedBytes(unsigned int);

	// JuiceCore.h:1167
	const int LoadSync(int, void *, const char *, int);

	// JuiceCore.h:1168
	void JuiceResumeBringUpISP();

	// JuiceCore.h:1169
	void JuicePauseTeardownISP();

	// JuiceCore.h:1170
	void JuiceResume();

	// JuiceCore.h:1171
	void JuicePause();

	// JuiceCore.h:1172
	void JuiceUpdate();

	// JuiceCore.h:1174
	void ThreadMonitor();

	// JuiceCore.h:1175
	void ThreadInfoUpdate();

	// JuiceCore.h:1176
	void ThreadRegister();

	// JuiceCore.h:1177
	void ThreadRelease();

	// JuiceCore.h:1178
	void ThreadCheckPoint(char *);

	// JuiceCore.h:1179
	unsigned int SpawnUpdateThread();

	// JuiceCore.h:1180
	void GameActivityEvent(unsigned int);

	// JuiceCore.h:1181
	void SetHangTimeout(unsigned int);

	// JuiceCore.h:1182
	void SetHangTimeout(unsigned int, unsigned int);

	// JuiceCore.h:1183
	int ThreadGameRegister(unsigned int);

	// JuiceCore.h:1184
	void SetThreadName(unsigned int, char *);

	// JuiceCore.h:1186
	void RegisterAsyncEvent(char *, char *);

	// JuiceCore.h:1187
	void UnregisterAsyncEvent(char *);

	// JuiceCore.h:1188
	void TriggerAsyncEvent(char *, char *);

	// JuiceCore.h:1189
	void SetScriptButtonDelta(int);

	// JuiceCore.h:1190
	void StopScriptButtonDelta();

	// JuiceCore.h:1191
	const int InScriptingMode();

	// JuiceCore.h:1192
	const int InAutomationMode();

	// JuiceCore.h:1193
	void AutomationCrashRebootOption(int);

	// JuiceCore.h:1194
	void AutomationDisconnectRebootOption(int);

	// JuiceCore.h:1196
	void BeginOnlineSession(char *, int, char *, char *, char *, char *);

	// JuiceCore.h:1197
	void EndOnlineSession();

	// JuiceCore.h:1198
	void BeginOnlineGame(int, int);

	// JuiceCore.h:1199
	void EndOnlineGame();

	// JuiceCore.h:1200
	void SetOnlineGameStatus(char *);

	// JuiceCore.h:1202
	void RebootWhenAutomating();

	// JuiceCore.h:1203
	void DisconnectRebootWhenAutomating();

	// JuiceCore.h:1205
	unsigned int GetCurrentSystemTime();

	// JuiceCore.h:1206
	unsigned int GetTimeElapsed(unsigned int &);

	// JuiceCore.h:1208
	int RemoteFileOpen(char *, int, int);

	// JuiceCore.h:1209
	void RemoteFileWrite(int, int, char *);

	// JuiceCore.h:1210
	void RemoteFileFlush(int);

	// JuiceCore.h:1211
	void RemoteFileFlushAll();

	// JuiceCore.h:1212
	int RemoteFileRead(int, int, char *, int);

	// JuiceCore.h:1213
	int InitialConnectionSucceded();

	// JuiceCore.h:1214
	void RemoteFileClose(int);

	// Unknown accessibility
	// JuiceCore.h:1095
	typedef tJuiceRemoteFileInfo tJuiceRemoteFileInfo;

	// JuiceCore.h:1215
	JuiceHook::tJuiceRemoteFileInfo RemoteFileUpdate(int, int);

	// JuiceCore.h:1217
	void TakeScreenshot(char *);

	// JuiceCore.h:1218
	void FinishScreenshot();

	// JuiceCore.h:1219
	int GetFrameNumber();

	// JuiceCore.h:1221
	void FeSetAttributeValue(char *, char *);

	// JuiceCore.h:1222
	void FeSetAttributeValue(char *, int);

	// JuiceCore.h:1223
	void FeSetAttributeValue(char *, bool);

	// JuiceCore.h:1224
	void FeSetContext(char *, char *);

	// JuiceCore.h:1227
	void InitMemoryMonitor(char *, unsigned int, unsigned int, unsigned int, const char *, unsigned int);

	// JuiceCore.h:1228
	void ChangeMemoryMonitorBuffer(char *, unsigned int, unsigned int);

	// JuiceCore.h:1229
	void DefineRamSpace(const char *, unsigned int, unsigned int);

	// JuiceCore.h:1230
	void DefineHeap(const char *, const char *, unsigned int);

	// JuiceCore.h:1231
	void RemoveHeap(const char *, unsigned int);

	// JuiceCore.h:1232
	void ClearHeap(const char *, unsigned int);

	// JuiceCore.h:1233
	void Alloc(const char *, const char *, unsigned int, unsigned int, unsigned int, unsigned int);

	// JuiceCore.h:1234
	void AllocInfo(const char *, unsigned int, const char *);

	// JuiceCore.h:1235
	void Free(const char *, unsigned int);

	// JuiceCore.h:1236
	void SetLabel(const char *);

	// JuiceCore.h:1239
	int SetChannel(int, int, int);

	// JuiceCore.h:1240
	int CheckChannel(int, int);

	// JuiceCore.h:1241
	JuiceHook * InternalInstanceFunc();

	// JuiceCore.h:1242
	JuiceHook * ExternalInstanceFunc();

	// JuiceCore.h:1243
	void PreInitialize(void *, void *, void *);

	// JuiceCore.h:1248
	void JobManager();

	// JuiceCore.h:1249
	unsigned int JobSubmit(unsigned int, const char *, unsigned int, unsigned int, unsigned int, unsigned int);

private:
	// JuiceCore.h:1253
	virtual void ~JuiceHook();

	// JuiceCore.h:1254
	void JuiceHook();

	// JuiceCore.h:1256
	void JuiceHook(const JuiceHook &);

	// JuiceCore.h:1257
	JuiceHook * operator=(JuiceHook);

	// JuiceCore.h:1259
	int AllInitialized();

	// JuiceCore.h:1260
	void InitializeChannels();

	// JuiceCore.h:1261
	unsigned int CreateUpdateThread();

}

// JuiceCore.h:1102
extern JuiceHook *(*)() Instance;

// JuiceCore.h:1100
struct Juice::JuiceHook {
	int (*)(...) * _vptr.JuiceHook;

	// JuiceCore.cpp:74
	extern JuiceHook *(*)() Instance;

	// JuiceCore.h:1244
	extern const int kTotalProcessors = 15;

	// JuiceCore.cpp:71
	extern int[16][32] mJuiceChannels;

private:
	// JuiceCore.h:1262
	int mEnabled;

	// JuiceCore.h:1263
	int mFrame;

	// JuiceCore.h:1264
	int mInitialConnectionSucceeded;

	// JuiceCore.h:1265
	int mPaused;

	// JuiceCore.h:1266
	int mTrapInit;

	// JuiceCore.h:1267
	int mHookConnected;

	// JuiceCore.h:1268
	bool mConsoleIsResetting;

	// JuiceCore.h:1269
	bool mHasCreatedUpdateThread;

	// JuiceCore.h:1270
	Juice::cJuiceCom * mJuiceCom;

	// JuiceCore.h:1271
	void *[15] mProcessors;

	// JuiceCore.h:1272
	JuiceMutex * mpMutex;

public:
	// JuiceCore.cpp:241
	const int IsConnected();

	// JuiceCore.cpp:250
	void SetConnected(int);

	// JuiceCore.h:1106
	const int GetFrame() const;

	// JuiceCore.h:1107
	Juice::cJuiceCom * GetJuiceCom() const;

	// JuiceCore.cpp:156
	void DisableJuice();

	// JuiceCore.cpp:227
	void DisconnectJuice();

	// JuiceCore.cpp:982
	void UpdatePad(void *);

	// JuiceCore.cpp:990
	void UpdatePad(void *, int);

	// JuiceCore.cpp:652
	int JuiceSessionID();

	// JuiceCore.cpp:644
	int IsConnectionPaused();

	// JuiceCore.cpp:2330
	void ResetConsole();

	// JuiceCore.cpp:2325
	void ActivateReset();

	// JuiceCore.cpp:259
	void Connect();

	// JuiceCore.cpp:458
	void FlushAll();

	// JuiceCore.cpp:565
	void FrameUpdate();

	// JuiceCore.cpp:668
	void AssetHit(const char *, const char *);

	// JuiceCore.cpp:693
	void AssetHit(const char *, const char *, int);

	// JuiceCore.cpp:719
	void AssetHit(const char *, const char *, const char *, int);

	// JuiceCore.cpp:742
	void LogStat(int, const char *, const char *, int);

	// JuiceCore.cpp:765
	void LogStat(int, const char *, const char *, const char *);

	// JuiceCore.cpp:788
	void LogStat(int, const char *, const char *, float);

	// JuiceCore.cpp:810
	void AdvanceCycle(int);

	// JuiceCore.cpp:832
	void ResetCycle(int);

	// JuiceCore.cpp:498
	void SetLanguage(int);

	// JuiceCore.cpp:857
	void GameEvent(const char *, const char *, const char *, int, float, const char *, const char *, const char *);

	// JuiceCore.cpp:883
	void GameTracker(const char *, const char *, const char *, const char *);

	// JuiceCore.cpp:969
	void LogText(const char *);

	// JuiceCore.cpp:907
	void LogPrintf(const char *, ...);

	// JuiceCore.cpp:924
	void LogVarArgList(const char *, va_list);

	// JuiceCore.cpp:1350
	void InitTrapHandler();

	// JuiceCore.cpp:1431
	void AssertLog(int, const char *, const char *, const char *, const char *);

	// JuiceCore.cpp:1379
	void ExceptionLog(void *);

	// JuiceCore.cpp:1398
	void ErrorLog(char *, unsigned int, unsigned int *);

	// JuiceCore.cpp:1412
	void VerifyFunction(int, const char *);

	// JuiceCore.cpp:1005
	int ReplayData(int &, int, const char *, int);

	// JuiceCore.cpp:1023
	unsigned int ReplayData(unsigned int &, int, const char *, int);

	// JuiceCore.cpp:1041
	short int ReplayData(short int &, int, const char *, int);

	// JuiceCore.cpp:1060
	short unsigned int ReplayData(short unsigned int &, int, const char *, int);

	// JuiceCore.cpp:1079
	char ReplayData(char &, int, const char *, int);

	// JuiceCore.cpp:1098
	unsigned char ReplayData(unsigned char &, int, const char *, int);

	// JuiceCore.cpp:1117
	float ReplayData(float &, int, const char *, int);

	// JuiceCore.cpp:1135
	double ReplayData(double &, int, const char *, int);

	// JuiceCore.cpp:1186
	void ResumeReplay();

	// JuiceCore.cpp:1172
	void SuspendReplay();

	// JuiceCore.cpp:1322
	void SuspendCapture();

	// JuiceCore.cpp:1336
	void ResumeCapture();

	// JuiceCore.cpp:1478
	const int Replay_IsReplaying();

	// JuiceCore.cpp:1465
	const int Replay_IsCapturing();

	// JuiceCore.cpp:1493
	const int Replay_CheckNextEntry(int);

	// JuiceCore.cpp:1509
	void Replay_GetData(void *, int, int);

	// JuiceCore.cpp:1523
	const unsigned int Replay_GetData(int, int);

	// JuiceCore.cpp:1542
	void Replay_AddData(int, int, int);

	// JuiceCore.cpp:1557
	void Replay_AddData(const void *, int, int);

	// JuiceCore.cpp:1574
	char * Replay_AddOrGetData(char *, int, const char *, int);

	// JuiceCore.cpp:1593
	short unsigned int * Replay_AddOrGetData(short unsigned int *, int, const char *, int);

	// JuiceCore.cpp:1613
	char * Replay_AddOrGetBytes(char *, int, int, const char *, int);

	// JuiceCore.cpp:1152
	unsigned int CalculateUsedBytes(unsigned int);

	// JuiceCore.cpp:1636
	const int LoadSync(int, void *, const char *, int);

	// JuiceCore.cpp:477
	void JuiceResumeBringUpISP();

	// JuiceCore.cpp:506
	void JuicePauseTeardownISP();

	// JuiceCore.cpp:529
	void JuiceResume();

	// JuiceCore.cpp:543
	void JuicePause();

	// JuiceCore.cpp:576
	void JuiceUpdate();

	// JuiceCore.cpp:1718
	void ThreadMonitor();

	// JuiceCore.cpp:1735
	void ThreadInfoUpdate();

	// JuiceCore.cpp:1750
	void ThreadRegister();

	// JuiceCore.cpp:1765
	void ThreadRelease();

	// JuiceCore.cpp:1780
	void ThreadCheckPoint(char *);

	// JuiceCore.cpp:1795
	unsigned int SpawnUpdateThread();

	// JuiceCore.cpp:1805
	void GameActivityEvent(unsigned int);

	// JuiceCore.cpp:1856
	void SetHangTimeout(unsigned int);

	// JuiceCore.cpp:1868
	void SetHangTimeout(unsigned int, unsigned int);

	// JuiceCore.cpp:1828
	int ThreadGameRegister(unsigned int);

	// JuiceCore.cpp:1844
	void SetThreadName(unsigned int, char *);

	// JuiceCore.cpp:1880
	void RegisterAsyncEvent(char *, char *);

	// JuiceCore.cpp:1888
	void UnregisterAsyncEvent(char *);

	// JuiceCore.cpp:1896
	void TriggerAsyncEvent(char *, char *);

	// JuiceCore.cpp:1904
	void SetScriptButtonDelta(int);

	// JuiceCore.cpp:1912
	void StopScriptButtonDelta();

	// JuiceCore.cpp:1920
	const int InScriptingMode();

	// JuiceCore.cpp:1929
	const int InAutomationMode();

	// JuiceCore.cpp:1938
	void AutomationCrashRebootOption(int);

	// JuiceCore.cpp:1946
	void AutomationDisconnectRebootOption(int);

	// JuiceCore.cpp:1206
	void BeginOnlineSession(char *, int, char *, char *, char *, char *);

	// JuiceCore.cpp:1231
	void EndOnlineSession();

	// JuiceCore.cpp:1254
	void BeginOnlineGame(int, int);

	// JuiceCore.cpp:1277
	void EndOnlineGame();

	// JuiceCore.cpp:1300
	void SetOnlineGameStatus(char *);

	// JuiceCore.cpp:1696
	void RebootWhenAutomating();

	// JuiceCore.cpp:1707
	void DisconnectRebootWhenAutomating();

	// JuiceCore.cpp:1954
	unsigned int GetCurrentSystemTime();

	// JuiceCore.cpp:1963
	unsigned int GetTimeElapsed(unsigned int &);

	// JuiceCore.cpp:1972
	int RemoteFileOpen(char *, int, int);

	// JuiceCore.cpp:1981
	void RemoteFileWrite(int, int, char *);

	// JuiceCore.cpp:1989
	void RemoteFileFlush(int);

	// JuiceCore.cpp:1997
	void RemoteFileFlushAll();

	// JuiceCore.cpp:2005
	int RemoteFileRead(int, int, char *, int);

	// JuiceCore.cpp:2056
	int InitialConnectionSucceded();

	// JuiceCore.cpp:2016
	void RemoteFileClose(int);

	// JuiceCore.cpp:2024
	RemoteFileManager::tJuiceRemoteFileInfo RemoteFileUpdate(int, int);

	// JuiceCore.cpp:2048
	void TakeScreenshot(char *);

	// JuiceCore.cpp:2040
	void FinishScreenshot();

	// JuiceCore.cpp:639
	int GetFrameNumber();

	// JuiceCore.cpp:2061
	void FeSetAttributeValue(char *, char *);

	// JuiceCore.cpp:2069
	void FeSetAttributeValue(char *, int);

	// JuiceCore.cpp:2080
	void FeSetAttributeValue(char *, bool);

	// JuiceCore.cpp:2095
	void FeSetContext(char *, char *);

	// JuiceCore.cpp:2103
	void InitMemoryMonitor(char *, unsigned int, unsigned int, unsigned int, const char *, unsigned int);

	// JuiceCore.cpp:2112
	void ChangeMemoryMonitorBuffer(char *, unsigned int, unsigned int);

	// JuiceCore.cpp:2120
	void DefineRamSpace(const char *, unsigned int, unsigned int);

	// JuiceCore.cpp:2128
	void DefineHeap(const char *, const char *, unsigned int);

	// JuiceCore.cpp:2136
	void RemoveHeap(const char *, unsigned int);

	// JuiceCore.cpp:2144
	void ClearHeap(const char *, unsigned int);

	// JuiceCore.cpp:2152
	void Alloc(const char *, const char *, unsigned int, unsigned int, unsigned int, unsigned int);

	// JuiceCore.cpp:2160
	void AllocInfo(const char *, unsigned int, const char *);

	// JuiceCore.cpp:2168
	void Free(const char *, unsigned int);

	// JuiceCore.cpp:2176
	void SetLabel(const char *);

	// JuiceCore.cpp:217
	int SetChannel(int, int, int);

	// JuiceCore.cpp:197
	int CheckChannel(int, int);

	// JuiceCore.cpp:112
	JuiceHook * InternalInstanceFunc();

	// JuiceCore.cpp:151
	JuiceHook * ExternalInstanceFunc();

	// JuiceCore.cpp:78
	void PreInitialize(void *, void *, void *);

	// JuiceCore.cpp:2296
	void JobManager();

	// JuiceCore.cpp:2306
	unsigned int JobSubmit(unsigned int, const char *, unsigned int, unsigned int, unsigned int, unsigned int);

private:
	// JuiceCore.h:1253
	virtual void ~JuiceHook();

	// JuiceCore.cpp:94
	void JuiceHook();

	// JuiceCore.h:1256
	void JuiceHook(const JuiceHook &);

	// JuiceCore.h:1257
	JuiceHook * operator=(JuiceHook);

	// JuiceCore.cpp:1443
	int AllInitialized();

	// JuiceCore.cpp:206
	void InitializeChannels();

	// JuiceCore.cpp:2231
	unsigned int CreateUpdateThread();

}

// JuiceCore.h:1100
struct Juice::JuiceHook {
	int (*)(...) * _vptr.JuiceHook;

	// JuiceCore.h:1102
	extern JuiceHook *(*)() Instance;

	// JuiceCore.h:1244
	extern const int kTotalProcessors = 15;

	// JuiceCore.h:1245
	extern int[16][32] mJuiceChannels;

private:
	// JuiceCore.h:1262
	int mEnabled;

	// JuiceCore.h:1263
	int mFrame;

	// JuiceCore.h:1264
	int mInitialConnectionSucceeded;

	// JuiceCore.h:1265
	int mPaused;

	// JuiceCore.h:1266
	int mTrapInit;

	// JuiceCore.h:1267
	int mHookConnected;

	// JuiceCore.h:1268
	bool mConsoleIsResetting;

	// JuiceCore.h:1269
	bool mHasCreatedUpdateThread;

	// JuiceCore.h:1270
	Juice::cJuiceCom * mJuiceCom;

	// JuiceCore.h:1271
	void *[15] mProcessors;

	// JuiceCore.h:1272
	JuiceMutex * mpMutex;

public:
	// JuiceCore.h:1104
	const int IsConnected();

	// JuiceCore.h:1105
	void SetConnected(int);

	// JuiceCore.h:1106
	const int GetFrame() const;

	// JuiceCore.h:1107
	Juice::cJuiceCom * GetJuiceCom() const;

	// JuiceCore.h:1108
	void DisableJuice();

	// JuiceCore.h:1109
	void DisconnectJuice();

	// JuiceCore.h:1110
	void UpdatePad(void *);

	// JuiceCore.h:1111
	void UpdatePad(void *, int);

	// JuiceCore.h:1112
	int JuiceSessionID();

	// JuiceCore.h:1113
	int IsConnectionPaused();

	// JuiceCore.h:1114
	void ResetConsole();

	// JuiceCore.h:1115
	void ActivateReset();

	// JuiceCore.h:1117
	void Connect();

	// JuiceCore.h:1118
	void FlushAll();

	// JuiceCore.h:1120
	void FrameUpdate();

	// JuiceCore.h:1121
	void AssetHit(const char *, const char *);

	// JuiceCore.h:1122
	void AssetHit(const char *, const char *, int);

	// JuiceCore.h:1123
	void AssetHit(const char *, const char *, const char *, int);

	// JuiceCore.h:1124
	void LogStat(int, const char *, const char *, int);

	// JuiceCore.h:1125
	void LogStat(int, const char *, const char *, const char *);

	// JuiceCore.h:1126
	void LogStat(int, const char *, const char *, float);

	// JuiceCore.h:1127
	void AdvanceCycle(int);

	// JuiceCore.h:1128
	void ResetCycle(int);

	// JuiceCore.h:1129
	void SetLanguage(int);

	// JuiceCore.h:1130
	void GameEvent(const char *, const char *, const char *, int, float, const char *, const char *, const char *);

	// JuiceCore.h:1131
	void GameTracker(const char *, const char *, const char *, const char *);

	// JuiceCore.h:1132
	void LogText(const char *);

	// JuiceCore.h:1133
	void LogPrintf(const char *, ...);

	// JuiceCore.h:1134
	void LogVarArgList(const char *, va_list);

	// JuiceCore.h:1135
	void InitTrapHandler();

	// JuiceCore.h:1136
	void AssertLog(int, const char *, const char *, const char *, const char *);

	// JuiceCore.h:1137
	void ExceptionLog(void *);

	// JuiceCore.h:1138
	void ErrorLog(char *, unsigned int, unsigned int *);

	// JuiceCore.h:1139
	void VerifyFunction(int, const char *);

	// JuiceCore.h:1141
	int ReplayData(int &, int, const char *, int);

	// JuiceCore.h:1142
	unsigned int ReplayData(unsigned int &, int, const char *, int);

	// JuiceCore.h:1143
	short int ReplayData(short int &, int, const char *, int);

	// JuiceCore.h:1144
	short unsigned int ReplayData(short unsigned int &, int, const char *, int);

	// JuiceCore.h:1145
	char ReplayData(char &, int, const char *, int);

	// JuiceCore.h:1146
	unsigned char ReplayData(unsigned char &, int, const char *, int);

	// JuiceCore.h:1147
	float ReplayData(float &, int, const char *, int);

	// JuiceCore.h:1148
	double ReplayData(double &, int, const char *, int);

	// JuiceCore.h:1150
	void ResumeReplay();

	// JuiceCore.h:1151
	void SuspendReplay();

	// JuiceCore.h:1152
	void SuspendCapture();

	// JuiceCore.h:1153
	void ResumeCapture();

	// JuiceCore.h:1154
	const int Replay_IsReplaying();

	// JuiceCore.h:1155
	const int Replay_IsCapturing();

	// JuiceCore.h:1156
	const int Replay_CheckNextEntry(int);

	// JuiceCore.h:1157
	void Replay_GetData(void *, int, int);

	// JuiceCore.h:1158
	const unsigned int Replay_GetData(int, int);

	// JuiceCore.h:1159
	void Replay_AddData(int, int, int);

	// JuiceCore.h:1160
	void Replay_AddData(const void *, int, int);

	// JuiceCore.h:1162
	char * Replay_AddOrGetData(char *, int, const char *, int);

	// JuiceCore.h:1163
	short unsigned int * Replay_AddOrGetData(short unsigned int *, int, const char *, int);

	// JuiceCore.h:1165
	char * Replay_AddOrGetBytes(char *, int, int, const char *, int);

	// JuiceCore.h:1166
	unsigned int CalculateUsedBytes(unsigned int);

	// JuiceCore.h:1167
	const int LoadSync(int, void *, const char *, int);

	// JuiceCore.h:1168
	void JuiceResumeBringUpISP();

	// JuiceCore.h:1169
	void JuicePauseTeardownISP();

	// JuiceCore.h:1170
	void JuiceResume();

	// JuiceCore.h:1171
	void JuicePause();

	// JuiceCore.h:1172
	void JuiceUpdate();

	// JuiceCore.h:1174
	void ThreadMonitor();

	// JuiceCore.h:1175
	void ThreadInfoUpdate();

	// JuiceCore.h:1176
	void ThreadRegister();

	// JuiceCore.h:1177
	void ThreadRelease();

	// JuiceCore.h:1178
	void ThreadCheckPoint(char *);

	// JuiceCore.h:1179
	unsigned int SpawnUpdateThread();

	// JuiceCore.h:1180
	void GameActivityEvent(unsigned int);

	// JuiceCore.h:1181
	void SetHangTimeout(unsigned int);

	// JuiceCore.h:1182
	void SetHangTimeout(unsigned int, unsigned int);

	// JuiceCore.h:1183
	int ThreadGameRegister(unsigned int);

	// JuiceCore.h:1184
	void SetThreadName(unsigned int, char *);

	// JuiceCore.h:1186
	void RegisterAsyncEvent(char *, char *);

	// JuiceCore.h:1187
	void UnregisterAsyncEvent(char *);

	// JuiceCore.h:1188
	void TriggerAsyncEvent(char *, char *);

	// JuiceCore.h:1189
	void SetScriptButtonDelta(int);

	// JuiceCore.h:1190
	void StopScriptButtonDelta();

	// JuiceCore.h:1191
	const int InScriptingMode();

	// JuiceCore.h:1192
	const int InAutomationMode();

	// JuiceCore.h:1193
	void AutomationCrashRebootOption(int);

	// JuiceCore.h:1194
	void AutomationDisconnectRebootOption(int);

	// JuiceCore.h:1196
	void BeginOnlineSession(char *, int, char *, char *, char *, char *);

	// JuiceCore.h:1197
	void EndOnlineSession();

	// JuiceCore.h:1198
	void BeginOnlineGame(int, int);

	// JuiceCore.h:1199
	void EndOnlineGame();

	// JuiceCore.h:1200
	void SetOnlineGameStatus(char *);

	// JuiceCore.h:1202
	void RebootWhenAutomating();

	// JuiceCore.h:1203
	void DisconnectRebootWhenAutomating();

	// JuiceCore.h:1205
	unsigned int GetCurrentSystemTime();

	// JuiceCore.h:1206
	unsigned int GetTimeElapsed(unsigned int &);

	// JuiceCore.h:1208
	int RemoteFileOpen(char *, int, int);

	// JuiceCore.h:1209
	void RemoteFileWrite(int, int, char *);

	// JuiceCore.h:1210
	void RemoteFileFlush(int);

	// JuiceCore.h:1211
	void RemoteFileFlushAll();

	// JuiceCore.h:1212
	int RemoteFileRead(int, int, char *, int);

	// JuiceCore.h:1213
	int InitialConnectionSucceded();

	// JuiceCore.h:1214
	void RemoteFileClose(int);

	// Unknown accessibility
	// JuiceCore.h:1095
	typedef tJuiceRemoteFileInfo tJuiceRemoteFileInfo;

	// JuiceCore.h:1215
	JuiceHook::tJuiceRemoteFileInfo RemoteFileUpdate(int, int);

	// JuiceCore.h:1217
	void TakeScreenshot(char *);

	// JuiceCore.h:1218
	void FinishScreenshot();

	// JuiceCore.h:1219
	int GetFrameNumber();

	// JuiceCore.h:1221
	void FeSetAttributeValue(char *, char *);

	// JuiceCore.h:1222
	void FeSetAttributeValue(char *, int);

	// JuiceCore.h:1223
	void FeSetAttributeValue(char *, bool);

	// JuiceCore.h:1224
	void FeSetContext(char *, char *);

	// JuiceCore.h:1227
	void InitMemoryMonitor(char *, unsigned int, unsigned int, unsigned int, const char *, unsigned int);

	// JuiceCore.h:1228
	void ChangeMemoryMonitorBuffer(char *, unsigned int, unsigned int);

	// JuiceCore.h:1229
	void DefineRamSpace(const char *, unsigned int, unsigned int);

	// JuiceCore.h:1230
	void DefineHeap(const char *, const char *, unsigned int);

	// JuiceCore.h:1231
	void RemoveHeap(const char *, unsigned int);

	// JuiceCore.h:1232
	void ClearHeap(const char *, unsigned int);

	// JuiceCore.h:1233
	void Alloc(const char *, const char *, unsigned int, unsigned int, unsigned int, unsigned int);

	// JuiceCore.h:1234
	void AllocInfo(const char *, unsigned int, const char *);

	// JuiceCore.h:1235
	void Free(const char *, unsigned int);

	// JuiceCore.h:1236
	void SetLabel(const char *);

	// JuiceCore.h:1239
	int SetChannel(int, int, int);

	// JuiceCore.h:1240
	int CheckChannel(int, int);

	// JuiceCore.h:1241
	JuiceHook * InternalInstanceFunc();

	// JuiceCore.h:1242
	JuiceHook * ExternalInstanceFunc();

	// JuiceCore.h:1243
	void PreInitialize(void *, void *, void *);

	// JuiceCore.h:1248
	void JobManager();

	// JuiceCore.h:1249
	unsigned int JobSubmit(unsigned int, const char *, unsigned int, unsigned int, unsigned int, unsigned int);

private:
	// JuiceCore.h:1253
	virtual void ~JuiceHook();

	// JuiceCore.h:1254
	void JuiceHook();

	// JuiceCore.h:1256
	void JuiceHook(const JuiceHook &);

	// JuiceCore.h:1257
	JuiceHook * operator=(JuiceHook);

	// JuiceCore.h:1259
	int AllInitialized();

	// JuiceCore.h:1260
	void InitializeChannels();

	// JuiceCore.h:1261
	unsigned int CreateUpdateThread();

}


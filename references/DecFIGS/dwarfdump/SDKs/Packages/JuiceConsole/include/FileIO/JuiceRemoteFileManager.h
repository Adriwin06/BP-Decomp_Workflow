// JuiceRemoteFileManager.h:25
struct Juice::RemoteFileManager : public Processor {
	// JuiceRemoteFileManager.cpp:20
	extern Juice::RemoteFileManager *(*)() Activate;

private:
	// JuiceRemoteFileManager.h:42
	JuiceMutex mRemoteFileMutex;

	// Unknown accessibility
	// JuiceCore.h:1095
	typedef tJuiceRemoteFileInfo tJuiceRemoteFileInfo;

	// JuiceRemoteFileManager.h:47
	RemoteFileManager::tJuiceRemoteFileInfo mFileInfo;

	// JuiceRemoteFileManager.h:50
	int mFileID;

	// JuiceRemoteFileManager.h:52
	extern const int REMOTE_FILE_BUFFER_SIZE = 1024;

	// JuiceRemoteFileManager.h:53
	JuiceComStreamReader * mRemoteFileReader;

	// JuiceRemoteFileManager.h:54
	char[1024] mRemoteFileBuf;

public:
	void RemoteFileManager(const RemoteFileManager &);

	// JuiceRemoteFileManager.cpp:58
	Juice::RemoteFileManager * InstanceFunction();

	// JuiceRemoteFileManager.cpp:80
	virtual void ProcessMessage(int);

	// JuiceRemoteFileManager.cpp:110
	virtual void Initialize(Juice::cJuiceCom *);

	// JuiceRemoteFileManager.cpp:245
	virtual void Update();

	// JuiceRemoteFileManager.cpp:116
	virtual void Disable();

	// JuiceRemoteFileManager.cpp:119
	int OpenFile(char *, Juice::JuiceFileMode, Juice::JuiceFileType);

	// JuiceRemoteFileManager.cpp:131
	void Write(int, int, char *);

	// JuiceRemoteFileManager.cpp:162
	void FileFlush(int);

	// JuiceRemoteFileManager.cpp:170
	void FileFlushAll();

	// JuiceRemoteFileManager.cpp:177
	int Read(int, char *, int, int);

	// JuiceRemoteFileManager.cpp:233
	void Close(int);

	// JuiceRemoteFileManager.cpp:254
	RemoteFileManager::tJuiceRemoteFileInfo RemoteFileUpdateInfo(int, int);

private:
	// JuiceRemoteFileManager.cpp:29
	void RemoteFileManager();

	// JuiceRemoteFileManager.cpp:48
	virtual void ~RemoteFileManager();

	// JuiceRemoteFileManager.cpp:67
	void InitFileInfo();

}

// JuiceRemoteFileManager.h:52
extern const int REMOTE_FILE_BUFFER_SIZE = 1024;


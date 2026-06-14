// CgsResourceModuleIO.h:46
struct CgsResource::ResourceIO::FileSystemStatusInterface {
private:
	// CgsResourceModuleIO.h:56
	bool mbDiskErrorOccured;

public:
	// CgsResourceModuleIO.h:50
	void Construct();

	// CgsResourceModuleIO.h:52
	bool GetDiskErrorOccured() const;

	// CgsResourceModuleIO.h:53
	void SetDiskErrorOccured(bool);

}

// CgsResourceModuleIO.h:68
struct CgsResource::ResourceIO::InputBuffer : public IOBuffer {
private:
	// CgsResourceModuleIO.h:86
	ResourceRequestQueue<16384> mResourceQueue;

public:
	// CgsResourceModuleIO.h:73
	void Construct();

	// CgsResourceModuleIO.h:77
	void Destruct();

	// CgsResourceModuleIO.h:80
	const ResourceRequestQueue<16384> * GetResourceQueue() const;

	// CgsResourceModuleIO.h:81
	ResourceRequestQueue<16384> * GetResourceQueue();

	// CgsResourceModuleIO.h:82
	void AppendResourceQueue(const ResourceRequestQueue<16384> *);

}

// CgsResourceModuleIO.h:98
struct CgsResource::ResourceIO::OutputBuffer : public IOBuffer {
private:
	// CgsResourceModuleIO.h:115
	FileSystemStatusInterface mFileSystemStatusInterface;

public:
	// CgsResourceModuleIO.h:103
	void Construct();

	// CgsResourceModuleIO.h:107
	void Destruct();

	// CgsResourceModuleIO.h:110
	const FileSystemStatusInterface * GetFileSystemStatusInterface() const;

	// CgsResourceModuleIO.h:111
	FileSystemStatusInterface * GetFileSystemStatusInterface();

}


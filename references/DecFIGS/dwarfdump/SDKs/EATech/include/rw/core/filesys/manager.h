// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:10
	namespace core {
		// list.h:15
		namespace filesys {
			// Declaration
			struct Manager {
				// manager.h:285
				enum ReadSchedulePolicy {
					READ_SCHEDULE_POLICY_FCFS = 0,
					READ_SCHEDULE_POLICY_SORTED = 1,
				}

				// manager.h:407
				struct SearchPathInfo {
					// manager.h:408
					char * mPath;

					// manager.h:409
					rw::core::filesys::Device * mDevice;

				}

			}

		}

	}

}

// manager.h:55
struct rw::core::filesys::Options {
	// manager.h:69
	unsigned int mMaxSearchLocations;

	// manager.h:73
	unsigned int mMaxSearchPathLength;

	// manager.h:78
	EA::Allocator::ICoreAllocator * mAllocator;

public:
	// manager.h:58
	void Options(EA::Allocator::ICoreAllocator *);

	// manager.h:61
	void Options(Channel *, EA::Allocator::ICoreAllocator *);

	// manager.h:64
	void Options(Channel *, EA::Allocator::ICoreAllocator *, unsigned int, unsigned int);

}

// manager.h:89
struct rw::core::filesys::Manager {
private:
	// manager.h:362
	extern Manager * sInstance;

	// manager.h:363
	extern EA::Allocator::ICoreAllocator * sAllocator;

	// manager.h:364
	extern EA::Thread::IRunnable * sIdleFunction;

	// manager.h:371
	ListSingle<rw::core::filesys::Device> mDeviceList;

	// manager.h:378
	ThreadParameters mThreadParams;

	// manager.h:386
	unsigned int mReadQuantumSize;

	// manager.h:389
	rw::core::filesys::Device * mNullDevice;

	// manager.h:394
	char * mSearchPath;

	// manager.h:398
	const char * mCurrDir;

	// manager.h:401
	unsigned int mMaxSearchPathLength;

	// manager.h:404
	unsigned int mMaxSearchLocations;

	// manager.h:413
	rw::core::filesys::Manager::SearchPathInfo * mSearchPathInfo;

	// manager.h:415
	rw::core::filesys::Manager::ReadSchedulePolicy mReadSchedulePolicy;

	// manager.h:421
	bool (*)(int) mErrorHandler;

public:
	// manager.h:91
	Manager * CreateInstance(const Options &);

	// manager.h:92
	Manager * GetInstance();

	// manager.h:93
	void DestroyInstance();

	// manager.h:95
	bool IsInitialized();

	// manager.h:98
	void * Allocate(size_t);

	// manager.h:99
	void Free(void *);

	// manager.h:112
	void SetThreadParameters(const ThreadParameters &);

	// manager.h:118
	const ThreadParameters & GetThreadParameters() const;

	// manager.h:131
	Thread * GetThread(const char *) const;

	// manager.h:134
	bool (*)(int) GetErrorHandler();

	// manager.h:187
	void SetErrorHandler(bool (*)(int));

	// manager.h:199
	rw::core::filesys::Device * RegisterDevice(rw::core::filesys::DeviceDriver *, unsigned int) const;

	// manager.h:200
	bool UnregisterDevice(rw::core::filesys::Device *) const;

	// manager.h:201
	void SetSearchPath(const char *);

	// manager.h:212
	void AddSearchLocation(const char *, unsigned int);

	// manager.h:213
	bool RemoveSearchLocation(const char *);

	// manager.h:221
	void SetIdleFunction(EA::Thread::IRunnable *);

	// manager.h:226
	void Idle();

	// manager.h:275
	void SetCWD(const char *);

	// manager.h:279
	const char * GetCWD() const;

	// manager.h:291
	void SetReadSchedulePolicy(rw::core::filesys::Manager::ReadSchedulePolicy);

	// manager.h:294
	rw::core::filesys::Manager::ReadSchedulePolicy GetReadSchedulePolicy() const;

	// manager.h:329
	void SetReadQuantumSize(unsigned int);

	// manager.h:336
	unsigned int GetReadQuantumSize() const;

	// manager.h:343
	EA::Allocator::ICoreAllocator * GetAllocator();

private:
	// manager.h:349
	void Manager(const Options &);

	// manager.h:350
	void ~Manager();

	// manager.h:352
	void * operator new(size_t);

	// manager.h:353
	void operator delete(void *);

	// manager.h:355
	void Init();

}

// manager.h:362
extern Manager * sInstance;

// manager.h:363
extern EA::Allocator::ICoreAllocator * sAllocator;

// manager.h:364
extern EA::Thread::IRunnable * sIdleFunction;


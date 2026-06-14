// eathread_mutex.h:62
struct EAMutexData {
	// eathread_mutex.h:63
	sys_mutex_t mMutex;

	// eathread_mutex.h:64
	int mnLockCount;

	// eathread_mutex.h:66
	EAThreadDynamicData::ThreadId mThreadId;

public:
	// eathread_mutex.h:69
	EAMutexData();

}

// eathread_mutex.h:162
struct EA::Thread::MutexParameters {
	// eathread_mutex.h:163
	bool mbIntraProcess;

	// eathread_mutex.h:164
	char[16] mName;

public:
	// eathread_mutex.h:166
	void MutexParameters(bool, const char *);

}

// eathread_mutex.h:176
struct EA::Thread::Mutex {
protected:
	// eathread_mutex.h:259
	EAMutexData mMutexData;

public:
	// eathread_mutex.h:190
	void Mutex(const MutexParameters *, bool);

	// eathread_mutex.h:195
	void ~Mutex();

	// eathread_mutex.h:199
	bool Init(const MutexParameters *);

	// eathread_mutex.h:222
	int Lock(const ThreadTime &);

	// eathread_mutex.h:228
	int Unlock();

	// eathread_mutex.h:239
	int GetLockCount() const;

	// eathread_mutex.h:250
	bool HasLock() const;

	// eathread_mutex.h:255
	void * GetPlatformData();

private:
	// eathread_mutex.h:263
	void Mutex(const Mutex &);

	// eathread_mutex.h:264
	Mutex & operator=(const Mutex &);

}

// eathread_mutex.h:306
struct EA::Thread::AutoMutex {
protected:
	// eathread_mutex.h:316
	const Mutex & mMutex;

public:
	// eathread_mutex.h:308
	void AutoMutex(Mutex &);

	// eathread_mutex.h:312
	void ~AutoMutex();

protected:
	// eathread_mutex.h:319
	void AutoMutex(const AutoMutex &);

	// eathread_mutex.h:320
	const AutoMutex & operator=(const AutoMutex &);

}


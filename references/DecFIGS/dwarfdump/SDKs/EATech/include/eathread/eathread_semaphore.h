// eathread_semaphore.h:59
struct EASemaphoreData {
	// eathread_semaphore.h:60
	sys_cond_t mCV;

	// eathread_semaphore.h:61
	sys_mutex_t mMutex;

	// eathread_semaphore.h:62
	EAThreadDynamicData::AtomicInt32 mnCount;

	// eathread_semaphore.h:63
	bool mbValid;

public:
	// eathread_semaphore.h:65
	EASemaphoreData();

}

// eathread_semaphore.h:156
struct EA::Thread::SemaphoreParameters {
	// eathread_semaphore.h:157
	int mInitialCount;

	// eathread_semaphore.h:158
	bool mbIntraProcess;

	// eathread_semaphore.h:159
	char[16] mName;

public:
	// eathread_semaphore.h:161
	void SemaphoreParameters(int, bool, const char *);

}

// eathread_semaphore.h:173
struct EA::Thread::Semaphore {
protected:
	// eathread_semaphore.h:243
	EASemaphoreData mSemaphoreData;

public:
	// eathread_semaphore.h:186
	void Semaphore(const SemaphoreParameters *, bool);

	// eathread_semaphore.h:192
	void Semaphore(int);

	// eathread_semaphore.h:197
	void ~Semaphore();

	// eathread_semaphore.h:201
	bool Init(const SemaphoreParameters *);

	// eathread_semaphore.h:220
	int Wait(const ThreadTime &);

	// eathread_semaphore.h:227
	int Post(int);

	// eathread_semaphore.h:234
	int GetCount() const;

	// eathread_semaphore.h:239
	void * GetPlatformData();

private:
	// eathread_semaphore.h:247
	void Semaphore(const Semaphore &);

	// eathread_semaphore.h:248
	Semaphore & operator=(const Semaphore &);

}


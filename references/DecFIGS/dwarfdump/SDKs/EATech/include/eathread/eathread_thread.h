// icoreallocator_interface.h:31
namespace EA {
	// eathread.h:197
	namespace Thread {
		// Declaration
		struct Thread {
			// eathread_thread.h:364
			enum Status {
				kStatusNone = 0,
				kStatusRunning = 1,
				kStatusEnded = 2,
			}

		}

	}

}

// eathread_thread.h:73
struct EAThreadDynamicData {
	// eathread.h:269
	typedef sys_ppu_thread_t ThreadId;

	// eathread_thread.h:79
	EAThreadDynamicData::ThreadId mThreadId;

	// eathread_thread.h:80
	int mnStatus;

	// eathread_thread.h:81
	intptr_t mnReturnValue;

	// eathread_thread.h:82
	void *[2] mpStartContext;

	// eathread_thread.h:83
	bool mbFunctionOrRunnable;

	// eathread_thread.h:84
	bool mbAttached;

	// eathread_thread.h:85
	void * mpStack;

	// eathread_thread.h:86
	void * mpAllocatedStack;

	// eathread_thread.h:87
	void * mpBeginThreadUserWrapper;

	// eathread_atomic.h:296
	typedef AtomicInt<std::int32_t> AtomicInt32;

	// eathread_thread.h:88
	EAThreadDynamicData::AtomicInt32 mnRefCount;

	// eathread_thread.h:89
	char[32] mName;

public:
	// eathread_thread.h:74
	EAThreadDynamicData();

	// eathread_thread.h:75
	~EAThreadDynamicData();

	// eathread_thread.h:76
	void AddRef();

	// eathread_thread.h:77
	void Release();

}

// eathread_thread.h:92
struct EAThreadData {
	// eathread_thread.h:93
	EAThreadDynamicData * mpData;

}

// eathread_thread.h:335
struct EA::Thread::ThreadParameters {
	// eathread_thread.h:336
	void * mpStack;

	// eathread_thread.h:337
	size_t mnStackSize;

	// eathread_thread.h:338
	int mnPriority;

	// eathread_thread.h:339
	int mnProcessor;

	// eathread_thread.h:340
	bool mbSuspended;

	// eathread_thread.h:341
	const char * mpName;

public:
	// eathread_thread.h:343
	void ThreadParameters();

}

// eathread_thread.h:362
struct EA::Thread::Thread {
	// eathread_thread.h:275
	typedef intptr_t (*)(RunnableFunction, void *) RunnableFunctionUserWrapper;

protected:
	// eathread_thread.h:603
	extern Thread::RunnableFunctionUserWrapper sGlobalRunnableFunctionUserWrapper;

	// Unknown accessibility
	// eathread_thread.h:326
	typedef intptr_t (*)(EA::Thread::IRunnable *, void *) RunnableClassUserWrapper;

	// eathread_thread.h:604
	extern Thread::RunnableClassUserWrapper sGlobalRunnableClassUserWrapper;

	// eathread_thread.h:605
	extern int sDefaultProcessor;

	// eathread_thread.h:606
	EAThreadData mThreadData;

public:
	// eathread_thread.h:373
	void Thread();

	// eathread_thread.h:377
	void Thread(const Thread &);

	// eathread_thread.h:384
	void ~Thread();

	// eathread_thread.h:388
	Thread & operator=(const Thread &);

	// eathread_thread.h:394
	Thread::RunnableFunctionUserWrapper GetGlobalRunnableFunctionUserWrapper();

	// eathread_thread.h:400
	void SetGlobalRunnableFunctionUserWrapper(Thread::RunnableFunctionUserWrapper);

	// eathread_thread.h:406
	Thread::RunnableClassUserWrapper GetGlobalRunnableClassUserWrapper();

	// eathread_thread.h:411
	void SetGlobalRunnableClassUserWrapper(Thread::RunnableClassUserWrapper);

	// eathread_thread.h:430
	EAThreadDynamicData::ThreadId Begin(RunnableFunction, void *, const ThreadParameters *, Thread::RunnableFunctionUserWrapper);

	// eathread_thread.h:449
	EAThreadDynamicData::ThreadId Begin(EA::Thread::IRunnable *, void *, const ThreadParameters *, Thread::RunnableClassUserWrapper);

	// eathread_thread.h:469
	// Declaration
	EA::Thread::Thread::Status WaitForEnd() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// eathread.h:346
		typedef double ThreadTime;

	}

	// eathread_thread.h:480
	EA::Thread::Thread::Status GetStatus(intptr_t *) const;

	// eathread_thread.h:488
	EAThreadDynamicData::ThreadId GetId() const;

	// eathread_thread.h:504
	int GetPriority() const;

	// eathread_thread.h:524
	bool SetPriority(int);

	// eathread_thread.h:539
	void SetProcessor(int);

	// eathread_thread.h:555
	void Wake();

	// eathread_thread.h:560
	const char * GetName() const;

	// eathread_thread.h:573
	void SetName(const char *);

	// eathread_thread.h:585
	void SetDefaultProcessor(int);

	// eathread_thread.h:591
	int GetDefaultProcessor();

	// eathread_thread.h:598
	void * GetPlatformData();

}

// eathread_thread.h:226
struct EA::Thread::IRunnable {
	int (*)(...) * _vptr.IRunnable;

public:
	// eathread_thread.h:227
	virtual void ~IRunnable();

	// eathread_thread.h:233
	virtual intptr_t Run(void *);

}

// eathread_thread.h:605
extern int sDefaultProcessor;


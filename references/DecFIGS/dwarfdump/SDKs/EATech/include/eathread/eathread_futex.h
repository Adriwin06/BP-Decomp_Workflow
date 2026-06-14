// eathread_futex.h:51
typedef sys_semaphore_t EAFutexSemaphore;

// eathread_futex.h:111
struct EA::Thread::Futex {
	// eathread_atomic.h:306
	typedef Futex::AtomicUint64 AtomicUWord;

	// eathread_atomic.h:299
	typedef AtomicInt<std::uint64_t> AtomicUint64;

protected:
	// eathread_futex.h:176
	Futex::AtomicUWord mUseCount;

	// Unknown accessibility
	// eathread.h:250
	typedef uint64_t Uint;

	// eathread_futex.h:177
	Futex::Uint mRecursionCount;

	// Unknown accessibility
	// eathread.h:307
	typedef Futex::Uint ThreadUniqueId;

	// eathread_futex.h:178
	Futex::ThreadUniqueId mThreadUniqueId;

	// eathread_futex.h:179
	EAFutexSemaphore mSemaphore;

public:
	// eathread_futex.h:117
	void Futex();

	// eathread_futex.h:124
	void ~Futex();

	// eathread_futex.h:133
	void Lock();

	// eathread_futex.h:142
	bool TryLock();

	// eathread_futex.h:149
	void Unlock();

	// eathread_futex.h:158
	int GetLockCount() const;

	// eathread_futex.h:162
	bool HasLock() const;

protected:
	// eathread_futex.h:184
	void CreateFSemaphore();

	// eathread_futex.h:185
	void DestroyFSemaphore();

	// eathread_futex.h:186
	void SignalFSemaphore();

	// eathread_futex.h:187
	void WaitFSemaphore();

private:
	// eathread_futex.h:192
	void Futex(const Futex &);

	// eathread_futex.h:193
	Futex & operator=(const Futex &);

}

// eathread_futex.h:225
struct EA::Thread::AutoFutex {
protected:
	// eathread_futex.h:235
	const Futex & mFutex;

public:
	// eathread_futex.h:227
	void AutoFutex(Futex &);

	// eathread_futex.h:231
	void ~AutoFutex();

protected:
	// eathread_futex.h:238
	void AutoFutex(const AutoFutex &);

	// eathread_futex.h:239
	const AutoFutex & operator=(const AutoFutex &);

}

// eathread_futex.h:111
struct EA::Thread::Futex {
	// eathread_atomic.h:306
	typedef DataStreamResultReader::AtomicUint64 AtomicUWord;

protected:
	// eathread_futex.h:176
	Futex::AtomicUWord mUseCount;

	// Unknown accessibility
	// eathread.h:250
	typedef uint64_t Uint;

	// eathread_futex.h:177
	Futex::Uint mRecursionCount;

	// Unknown accessibility
	// eathread.h:307
	typedef Futex::Uint ThreadUniqueId;

	// eathread_futex.h:178
	Futex::ThreadUniqueId mThreadUniqueId;

	// eathread_futex.h:179
	EAFutexSemaphore mSemaphore;

public:
	// eathread_futex.h:117
	void Futex();

	// eathread_futex.h:124
	void ~Futex();

	// eathread_futex.h:133
	void Lock();

	// eathread_futex.h:142
	bool TryLock();

	// eathread_futex.h:149
	void Unlock();

	// eathread_futex.h:158
	int GetLockCount() const;

	// eathread_futex.h:162
	bool HasLock() const;

protected:
	// eathread_futex.h:184
	void CreateFSemaphore();

	// eathread_futex.h:185
	void DestroyFSemaphore();

	// eathread_futex.h:186
	void SignalFSemaphore();

	// eathread_futex.h:187
	void WaitFSemaphore();

private:
	// eathread_futex.h:192
	void Futex(const Futex &);

	// eathread_futex.h:193
	Futex & operator=(const Futex &);

}


// icoreallocator_interface.h:31
namespace EA {
	// eathread.h:197
	namespace Thread {
		// Declaration
		struct RWMutex {
			// eathread_rwmutex.h:106
			enum LockType {
				kLockTypeNone = 0,
				kLockTypeRead = 1,
				kLockTypeWrite = 2,
			}

		}

	}

}

// eathread_rwmutex.h:43
struct EARWMutexData {
	// eathread_rwmutex.h:44
	sys_rwlock_t mRWMutex;

	// eathread_rwmutex.h:45
	EAThreadDynamicData::AtomicInt32 mnLockCount;

	// eathread_rwmutex.h:46
	int mLockType;

public:
	// eathread_rwmutex.h:48
	EARWMutexData();

}

// eathread_rwmutex.h:84
struct EA::Thread::RWMutexParameters {
	// eathread_rwmutex.h:85
	bool mbIntraProcess;

	// eathread_rwmutex.h:86
	char[16] mName;

public:
	// eathread_rwmutex.h:88
	void RWMutexParameters(bool, const char *);

}

// eathread_rwmutex.h:98
struct EA::Thread::RWMutex {
protected:
	// eathread_rwmutex.h:158
	EARWMutexData mRWMutexData;

public:
	// eathread_rwmutex.h:119
	void RWMutex(const RWMutexParameters *, bool);

	// eathread_rwmutex.h:124
	void ~RWMutex();

	// eathread_rwmutex.h:127
	bool Init(const RWMutexParameters *);

	// eathread_rwmutex.h:139
	int Lock(EA::Thread::RWMutex::LockType, const ThreadTime &);

	// eathread_rwmutex.h:146
	int Unlock();

	// eathread_rwmutex.h:149
	int GetLockCount(EA::Thread::RWMutex::LockType);

	// eathread_rwmutex.h:154
	void * GetPlatformData();

private:
	// eathread_rwmutex.h:162
	void RWMutex(const RWMutex &);

	// eathread_rwmutex.h:163
	RWMutex & operator=(const RWMutex &);

}


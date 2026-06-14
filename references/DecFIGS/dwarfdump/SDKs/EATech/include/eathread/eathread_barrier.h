// icoreallocator_interface.h:31
namespace EA {
	// eathread.h:197
	namespace Thread {
		// Declaration
		struct Barrier {
			// eathread_barrier.h:128
			enum Result {
				kResultPrimary = 0,
				kResultSecondary = 1,
				kResultError = -1,
				kResultTimeout = -2,
			}

		}

	}

}

// eathread_barrier.h:58
struct EABarrierData {
	// eathread_barrier.h:59
	sys_cond_t mCV;

	// eathread_barrier.h:60
	sys_mutex_t mMutex;

	// eathread_barrier.h:61
	int mnHeight;

	// eathread_barrier.h:62
	int mnCurrent;

	// eathread_barrier.h:63
	unsigned int mnCycle;

	// eathread_barrier.h:64
	bool mbValid;

public:
	// eathread_barrier.h:66
	EABarrierData();

}

// eathread_barrier.h:99
struct EA::Thread::BarrierParameters {
	// eathread_barrier.h:100
	int mHeight;

	// eathread_barrier.h:101
	bool mbIntraProcess;

	// eathread_barrier.h:102
	char[16] mName;

public:
	// eathread_barrier.h:104
	void BarrierParameters(int, bool, const char *);

}

// eathread_barrier.h:126
struct EA::Thread::Barrier {
protected:
	// eathread_barrier.h:186
	EABarrierData mBarrierData;

public:
	// eathread_barrier.h:141
	void Barrier(const BarrierParameters *, bool);

	// eathread_barrier.h:147
	void Barrier(int);

	// eathread_barrier.h:152
	void ~Barrier();

	// eathread_barrier.h:158
	bool Init(const BarrierParameters *);

	// eathread_barrier.h:177
	EA::Thread::Barrier::Result Wait(const ThreadTime &);

	// eathread_barrier.h:182
	void * GetPlatformData();

private:
	// eathread_barrier.h:190
	void Barrier(const Barrier &);

	// eathread_barrier.h:191
	Barrier & operator=(const Barrier &);

}


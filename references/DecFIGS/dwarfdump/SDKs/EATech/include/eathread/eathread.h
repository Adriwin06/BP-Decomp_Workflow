// icoreallocator_interface.h:31
namespace EA {
	// eathread.h:197
	namespace Thread {
		struct AtomicInt<std::int32_t>;

		struct ThreadParameters;

		struct IRunnable;

		// eathread.h:279
		const EAThreadDynamicData::ThreadId kThreadIdInvalid;

		// eathread.h:280
		const EAThreadDynamicData::ThreadId kThreadIdCurrent = 2147483647;

		// eathread.h:281
		const EAThreadDynamicData::ThreadId kThreadIdAny = 2147483646;

		// eathread.h:298
		const SysThreadId kSysThreadIdInvalid;

		// eathread.h:310
		const ThreadUniqueId kThreadUniqueIdInvalid;

		// eathread.h:347
		const ThreadTime kTimeoutImmediate;

		// eathread.h:348
		const ThreadTime kTimeoutNone;

		// eathread.h:382
		const int kThreadPriorityUnknown = 2147483648;

		// eathread.h:383
		const int kThreadPriorityMin = 4294967168;

		// eathread.h:384
		const int kThreadPriorityDefault;

		// eathread.h:385
		const int kThreadPriorityMax = 127;

		// eathread.h:397
		const int kSysThreadPriorityDefault = 1001;

		// eathread.h:453
		const int kProcessorDefault = 4294967295;

		// eathread.h:454
		const int kProcessorAny = 4294967294;

	}

}

// eathread.h:294
typedef EAThreadDynamicData::ThreadId SysThreadId;

// eathread.h:307
typedef Uint ThreadUniqueId;

// eathread.h:250
typedef uint64_t Uint;

// icoreallocator_interface.h:31
namespace EA {
	// eathread.h:197
	namespace Thread {
		struct AtomicInt<std::int32_t>;

		struct AtomicInt<std::uint64_t>;

		struct ThreadParameters;

		struct IRunnable;

		struct MutexParameters;

		struct Mutex;

		struct Futex;

		// eathread.h:279
		const EAThreadDynamicData::ThreadId kThreadIdInvalid;

		// eathread.h:280
		const EAThreadDynamicData::ThreadId kThreadIdCurrent = 2147483647;

		// eathread.h:281
		const EAThreadDynamicData::ThreadId kThreadIdAny = 2147483646;

		// eathread.h:298
		const SysThreadId kSysThreadIdInvalid;

		// eathread.h:310
		const Futex::ThreadUniqueId kThreadUniqueIdInvalid;

		// eathread.h:347
		const ThreadTime kTimeoutImmediate;

		// eathread.h:348
		const ThreadTime kTimeoutNone;

		// eathread.h:382
		const int kThreadPriorityUnknown = 2147483648;

		// eathread.h:383
		const int kThreadPriorityMin = 4294967168;

		// eathread.h:384
		const int kThreadPriorityDefault;

		// eathread.h:385
		const int kThreadPriorityMax = 127;

		// eathread.h:397
		const int kSysThreadPriorityDefault = 1001;

		// eathread.h:453
		const int kProcessorDefault = 4294967295;

		// eathread.h:454
		const int kProcessorAny = 4294967294;

	}

}

// icoreallocator_interface.h:31
namespace EA {
	// eathread.h:197
	namespace Thread {
		struct AtomicInt<std::int32_t>;

		struct AtomicInt<std::uint64_t>;

		struct AtomicPointer;

		struct ThreadParameters;

		struct IRunnable;

		struct MutexParameters;

		struct Mutex;

		struct BarrierParameters;

		struct Futex;

		// eathread.h:279
		const EAThreadDynamicData::ThreadId kThreadIdInvalid;

		// eathread.h:280
		const EAThreadDynamicData::ThreadId kThreadIdCurrent = 2147483647;

		// eathread.h:281
		const EAThreadDynamicData::ThreadId kThreadIdAny = 2147483646;

		// eathread.h:298
		const SysThreadId kSysThreadIdInvalid;

		// eathread.h:310
		const Futex::ThreadUniqueId kThreadUniqueIdInvalid;

		// eathread.h:347
		const ThreadTime kTimeoutImmediate;

		// eathread.h:348
		const ThreadTime kTimeoutNone;

		// eathread.h:382
		const int kThreadPriorityUnknown = 2147483648;

		// eathread.h:383
		const int kThreadPriorityMin = 4294967168;

		// eathread.h:384
		const int kThreadPriorityDefault;

		// eathread.h:385
		const int kThreadPriorityMax = 127;

		// eathread.h:397
		const int kSysThreadPriorityDefault = 1001;

		// eathread.h:453
		const int kProcessorDefault = 4294967295;

		// eathread.h:454
		const int kProcessorAny = 4294967294;

	}

}

// icoreallocator_interface.h:31
namespace EA {
	// eathread.h:197
	namespace Thread {
		struct AtomicInt<std::int32_t>;

		struct AtomicInt<std::uint64_t>;

		struct ThreadParameters;

		struct IRunnable;

		struct MutexParameters;

		struct Mutex;

		struct AutoMutex;

		struct Futex;

		// eathread.h:279
		const EAThreadDynamicData::ThreadId kThreadIdInvalid;

		// eathread.h:280
		const EAThreadDynamicData::ThreadId kThreadIdCurrent = 2147483647;

		// eathread.h:281
		const EAThreadDynamicData::ThreadId kThreadIdAny = 2147483646;

		// eathread.h:298
		const SysThreadId kSysThreadIdInvalid;

		// eathread.h:310
		const Futex::ThreadUniqueId kThreadUniqueIdInvalid;

		// eathread.h:347
		const ThreadTime kTimeoutImmediate;

		// eathread.h:348
		const ThreadTime kTimeoutNone;

		// eathread.h:382
		const int kThreadPriorityUnknown = 2147483648;

		// eathread.h:383
		const int kThreadPriorityMin = 4294967168;

		// eathread.h:384
		const int kThreadPriorityDefault;

		// eathread.h:385
		const int kThreadPriorityMax = 127;

		// eathread.h:397
		const int kSysThreadPriorityDefault = 1001;

		// eathread.h:453
		const int kProcessorDefault = 4294967295;

		// eathread.h:454
		const int kProcessorAny = 4294967294;

	}

}

// eathread.h:600
extern uint32_t EAFutexGetR13() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// eathread.h:601
		uint32_t x;

	}
}

// icoreallocator_interface.h:31
namespace EA {
	// eathread.h:197
	namespace Thread {
		struct AtomicInt<std::int32_t>;

		struct AtomicInt<std::uint64_t>;

		struct ThreadParameters;

		struct IRunnable;

		struct MutexParameters;

		struct Mutex;

		struct SemaphoreParameters;

		struct Semaphore;

		struct BarrierParameters;

		struct Futex;

		struct AutoFutex;

		// eathread.h:279
		const EAThreadDynamicData::ThreadId kThreadIdInvalid;

		// eathread.h:280
		const EAThreadDynamicData::ThreadId kThreadIdCurrent = 2147483647;

		// eathread.h:281
		const EAThreadDynamicData::ThreadId kThreadIdAny = 2147483646;

		// eathread.h:298
		const SysThreadId kSysThreadIdInvalid;

		// eathread.h:310
		const Futex::ThreadUniqueId kThreadUniqueIdInvalid;

		// eathread.h:347
		const ThreadTime kTimeoutImmediate;

		// eathread.h:348
		const ThreadTime kTimeoutNone;

		// eathread.h:382
		const int kThreadPriorityUnknown = 2147483648;

		// eathread.h:383
		const int kThreadPriorityMin = 4294967168;

		// eathread.h:384
		const int kThreadPriorityDefault;

		// eathread.h:385
		const int kThreadPriorityMax = 127;

		// eathread.h:397
		const int kSysThreadPriorityDefault = 1001;

		// eathread.h:453
		const int kProcessorDefault = 4294967295;

		// eathread.h:454
		const int kProcessorAny = 4294967294;

	}

}

// icoreallocator_interface.h:31
namespace EA {
	// eathread.h:197
	namespace Thread {
		struct AtomicInt<std::int32_t>;

		struct AtomicInt<std::uint64_t>;

		struct AtomicPointer;

		struct ThreadParameters;

		struct IRunnable;

		struct MutexParameters;

		struct Mutex;

		struct BarrierParameters;

		struct RWMutexParameters;

		struct Futex;

		// eathread.h:279
		const EAThreadDynamicData::ThreadId kThreadIdInvalid;

		// eathread.h:280
		const EAThreadDynamicData::ThreadId kThreadIdCurrent = 2147483647;

		// eathread.h:281
		const EAThreadDynamicData::ThreadId kThreadIdAny = 2147483646;

		// eathread.h:298
		const SysThreadId kSysThreadIdInvalid;

		// eathread.h:310
		const Futex::ThreadUniqueId kThreadUniqueIdInvalid;

		// eathread.h:347
		const ThreadTime kTimeoutImmediate;

		// eathread.h:348
		const ThreadTime kTimeoutNone;

		// eathread.h:382
		const int kThreadPriorityUnknown = 2147483648;

		// eathread.h:383
		const int kThreadPriorityMin = 4294967168;

		// eathread.h:384
		const int kThreadPriorityDefault;

		// eathread.h:385
		const int kThreadPriorityMax = 127;

		// eathread.h:397
		const int kSysThreadPriorityDefault = 1001;

		// eathread.h:453
		const int kProcessorDefault = 4294967295;

		// eathread.h:454
		const int kProcessorAny = 4294967294;

	}

}

// icoreallocator_interface.h:31
namespace EA {
	// eathread.h:197
	namespace Thread {
		struct AtomicInt<std::int32_t>;

		struct AtomicInt<std::uint64_t>;

		struct ThreadParameters;

		struct IRunnable;

		struct MutexParameters;

		struct Mutex;

		struct SemaphoreParameters;

		struct Semaphore;

		struct Futex;

		// eathread.h:279
		const EAThreadDynamicData::ThreadId kThreadIdInvalid;

		// eathread.h:280
		const EAThreadDynamicData::ThreadId kThreadIdCurrent = 2147483647;

		// eathread.h:281
		const EAThreadDynamicData::ThreadId kThreadIdAny = 2147483646;

		// eathread.h:298
		const SysThreadId kSysThreadIdInvalid;

		// eathread.h:310
		const Futex::ThreadUniqueId kThreadUniqueIdInvalid;

		// eathread.h:347
		const ThreadTime kTimeoutImmediate;

		// eathread.h:348
		const ThreadTime kTimeoutNone;

		// eathread.h:382
		const int kThreadPriorityUnknown = 2147483648;

		// eathread.h:383
		const int kThreadPriorityMin = 4294967168;

		// eathread.h:384
		const int kThreadPriorityDefault;

		// eathread.h:385
		const int kThreadPriorityMax = 127;

		// eathread.h:397
		const int kSysThreadPriorityDefault = 1001;

		// eathread.h:453
		const int kProcessorDefault = 4294967295;

		// eathread.h:454
		const int kProcessorAny = 4294967294;

	}

}

// icoreallocator_interface.h:31
namespace EA {
	// eathread.h:197
	namespace Thread {
		struct AtomicInt<std::int32_t>;

		struct AtomicInt<std::uint64_t>;

		struct ThreadParameters;

		struct IRunnable;

		struct Futex;

		// eathread.h:279
		const EAThreadDynamicData::ThreadId kThreadIdInvalid;

		// eathread.h:280
		const EAThreadDynamicData::ThreadId kThreadIdCurrent = 2147483647;

		// eathread.h:281
		const EAThreadDynamicData::ThreadId kThreadIdAny = 2147483646;

		// eathread.h:298
		const SysThreadId kSysThreadIdInvalid;

		// eathread.h:310
		const Futex::ThreadUniqueId kThreadUniqueIdInvalid;

		// eathread.h:347
		const ThreadTime kTimeoutImmediate;

		// eathread.h:348
		const ThreadTime kTimeoutNone;

		// eathread.h:382
		const int kThreadPriorityUnknown = 2147483648;

		// eathread.h:383
		const int kThreadPriorityMin = 4294967168;

		// eathread.h:384
		const int kThreadPriorityDefault;

		// eathread.h:385
		const int kThreadPriorityMax = 127;

		// eathread.h:397
		const int kSysThreadPriorityDefault = 1001;

		// eathread.h:453
		const int kProcessorDefault = 4294967295;

		// eathread.h:454
		const int kProcessorAny = 4294967294;

	}

}

// icoreallocator_interface.h:31
namespace EA {
	// eathread.h:197
	namespace Thread {
		struct AtomicInt<std::int32_t>;

		struct AtomicInt<std::uint64_t>;

		struct ThreadParameters;

		struct IRunnable;

		// eathread.h:279
		const EAThreadDynamicData::ThreadId kThreadIdInvalid;

		// eathread.h:280
		const EAThreadDynamicData::ThreadId kThreadIdCurrent = 2147483647;

		// eathread.h:281
		const EAThreadDynamicData::ThreadId kThreadIdAny = 2147483646;

		// eathread.h:298
		const SysThreadId kSysThreadIdInvalid;

		// eathread.h:310
		const ThreadUniqueId kThreadUniqueIdInvalid;

		// eathread.h:347
		const ThreadTime kTimeoutImmediate;

		// eathread.h:348
		const ThreadTime kTimeoutNone;

		// eathread.h:382
		const int kThreadPriorityUnknown = 2147483648;

		// eathread.h:383
		const int kThreadPriorityMin = 4294967168;

		// eathread.h:384
		const int kThreadPriorityDefault;

		// eathread.h:385
		const int kThreadPriorityMax = 127;

		// eathread.h:397
		const int kSysThreadPriorityDefault = 1001;

		// eathread.h:453
		const int kProcessorDefault = 4294967295;

		// eathread.h:454
		const int kProcessorAny = 4294967294;

	}

}

// icoreallocator_interface.h:31
namespace EA {
	// eathread.h:197
	namespace Thread {
		struct AtomicInt<std::int32_t>;

		struct AtomicInt<std::uint64_t>;

		struct AtomicPointer;

		struct ThreadParameters;

		struct IRunnable;

		struct BarrierParameters;

		struct Futex;

		// eathread.h:279
		const EAThreadDynamicData::ThreadId kThreadIdInvalid;

		// eathread.h:280
		const EAThreadDynamicData::ThreadId kThreadIdCurrent = 2147483647;

		// eathread.h:281
		const EAThreadDynamicData::ThreadId kThreadIdAny = 2147483646;

		// eathread.h:298
		const SysThreadId kSysThreadIdInvalid;

		// eathread.h:310
		const Futex::ThreadUniqueId kThreadUniqueIdInvalid;

		// eathread.h:347
		const ThreadTime kTimeoutImmediate;

		// eathread.h:348
		const ThreadTime kTimeoutNone;

		// eathread.h:382
		const int kThreadPriorityUnknown = 2147483648;

		// eathread.h:383
		const int kThreadPriorityMin = 4294967168;

		// eathread.h:384
		const int kThreadPriorityDefault;

		// eathread.h:385
		const int kThreadPriorityMax = 127;

		// eathread.h:397
		const int kSysThreadPriorityDefault = 1001;

		// eathread.h:453
		const int kProcessorDefault = 4294967295;

		// eathread.h:454
		const int kProcessorAny = 4294967294;

	}

}

// icoreallocator_interface.h:31
namespace EA {
	// eathread.h:197
	namespace Thread {
		struct AtomicInt<std::int32_t>;

		struct ThreadParameters;

		struct IRunnable;

		struct RWMutexParameters;

		// eathread.h:279
		const EAThreadDynamicData::ThreadId kThreadIdInvalid;

		// eathread.h:280
		const EAThreadDynamicData::ThreadId kThreadIdCurrent = 2147483647;

		// eathread.h:281
		const EAThreadDynamicData::ThreadId kThreadIdAny = 2147483646;

		// eathread.h:298
		const SysThreadId kSysThreadIdInvalid;

		// eathread.h:310
		const ThreadUniqueId kThreadUniqueIdInvalid;

		// eathread.h:347
		const ThreadTime kTimeoutImmediate;

		// eathread.h:348
		const ThreadTime kTimeoutNone;

		// eathread.h:382
		const int kThreadPriorityUnknown = 2147483648;

		// eathread.h:383
		const int kThreadPriorityMin = 4294967168;

		// eathread.h:384
		const int kThreadPriorityDefault;

		// eathread.h:385
		const int kThreadPriorityMax = 127;

		// eathread.h:397
		const int kSysThreadPriorityDefault = 1001;

		// eathread.h:453
		const int kProcessorDefault = 4294967295;

		// eathread.h:454
		const int kProcessorAny = 4294967294;

	}

}

// icoreallocator_interface.h:31
namespace EA {
	// eathread.h:197
	namespace Thread {
		struct AtomicInt<std::int32_t>;

		struct AtomicInt<std::uint64_t>;

		struct AtomicPointer;

		struct ThreadParameters;

		struct IRunnable;

		struct MutexParameters;

		struct Mutex;

		struct BarrierParameters;

		struct Futex;

		struct AutoFutex;

		// eathread.h:279
		const EAThreadDynamicData::ThreadId kThreadIdInvalid;

		// eathread.h:280
		const EAThreadDynamicData::ThreadId kThreadIdCurrent = 2147483647;

		// eathread.h:281
		const EAThreadDynamicData::ThreadId kThreadIdAny = 2147483646;

		// eathread.h:298
		const SysThreadId kSysThreadIdInvalid;

		// eathread.h:310
		const Futex::ThreadUniqueId kThreadUniqueIdInvalid;

		// eathread.h:347
		const ThreadTime kTimeoutImmediate;

		// eathread.h:348
		const ThreadTime kTimeoutNone;

		// eathread.h:382
		const int kThreadPriorityUnknown = 2147483648;

		// eathread.h:383
		const int kThreadPriorityMin = 4294967168;

		// eathread.h:384
		const int kThreadPriorityDefault;

		// eathread.h:385
		const int kThreadPriorityMax = 127;

		// eathread.h:397
		const int kSysThreadPriorityDefault = 1001;

		// eathread.h:453
		const int kProcessorDefault = 4294967295;

		// eathread.h:454
		const int kProcessorAny = 4294967294;

	}

}


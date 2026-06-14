// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:10
	namespace core {
		// base.h:33
		namespace thread {
			// base.h:49
			const ThreadId kThreadIdInvalid;

			// base.h:50
			const ThreadId kThreadIdCurrent = 2147483647;

			// base.h:51
			const ThreadId kThreadIdAny = 2147483646;

			// base.h:55
			const ThreadTime kTimeoutImmediate;

			// base.h:56
			const ThreadTime kTimeoutNone;

			// base.h:57
			const int kThreadPriorityUnknown = 2147483648;

			// base.h:58
			const int kThreadPriorityMin = 4294967168;

			// base.h:59
			const int kThreadPriorityDefault;

			// base.h:60
			const int kThreadPriorityMax = 127;

			// base.h:61
			const int kSysThreadPriorityDefault = 1001;

			// base.h:78
			const int kProcessorDefault = 4294967295;

			// base.h:80
			const int kProcessorAny = 4294967294;

		}

	}

}

// base.h:47
typedef EAThreadDynamicData::ThreadId ThreadId;

// base.h:53
typedef ThreadTime ThreadTime;


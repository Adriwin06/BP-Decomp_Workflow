// icoreallocator_interface.h:31
namespace EA {
	// config.h:14
	namespace Jobs {
		// wait_on.h:19
		enum WaitOnControl {
			WAIT_ON_CANCEL = 0,
			WAIT_ON_CONTINUE = 1,
			WAIT_ON_YIELD_THEN_CONTINUE = 2,
		}

		// wait_on.h:43
		namespace Detail {
			struct SchedulerBackend;

			struct BucketListNode<EA::Jobs::Job::Dependency,10>;

			struct BucketListNode<EA::Jobs::Job*,6>;

			struct BucketListNode<EA::Jobs::Event,10>;

		}

	}

}


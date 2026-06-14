// profiling.h:21
struct EA::Jobs::JobMetrics {
	// profiling.h:24
	uint64_t ticksAtSubmission;

	// profiling.h:25
	uint64_t ticksAtBegin;

	// profiling.h:26
	uint64_t ticksAtEnd;

	// profiling.h:27
	JobThreadHandle::JobThreadId threadId;

	// profiling.h:28
	EntryPoint entryPoint;

}


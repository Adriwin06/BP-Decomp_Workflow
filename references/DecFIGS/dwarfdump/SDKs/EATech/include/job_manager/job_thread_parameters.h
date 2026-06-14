// job_thread_parameters.h:19
struct EA::Jobs::JobThreadParameters {
	// job_thread_parameters.h:24
	EA::Jobs::JobEnvironment environment;

	// job_thread_parameters.h:25
	int stackSize;

	// job_thread_parameters.h:26
	int priority;

	// job_thread_parameters.h:27
	int processor;

	// job_thread_parameters.h:28
	EA::Jobs::JobAffinity affinity;

	// job_thread_parameters.h:29
	const char * ptrToName;

public:
	// job_thread_parameters.h:22
	void JobThreadParameters();

}


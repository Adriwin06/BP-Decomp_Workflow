// job_scheduler.h:35
struct EA::Jobs::JobScheduler {
private:
	// job_scheduler.h:83
	EA::Jobs::Detail::SchedulerBackend *[2] mSchedulers;

	// job_scheduler.h:84
	Futex mLock;

	// job_scheduler.h:85
	bool mEnableProfiling;

	// job_scheduler.h:86
	bool mInitialized;

public:
	// job_scheduler.h:40
	void * operator new(size_t);

	// job_scheduler.h:40
	void * operator new [](size_t);

	// job_scheduler.h:40
	void * operator new(size_t, void *);

	// job_scheduler.h:40
	void operator delete(void *);

	// job_scheduler.h:40
	void operator delete [](void *);

	// job_scheduler.h:42
	void JobScheduler();

	// job_scheduler.h:43
	void ~JobScheduler();

	// job_scheduler.h:45
	void SetProfiling(bool);

	// job_scheduler.h:46
	void Initialize(int, int);

	// job_scheduler.h:47
	void Destroy();

	// job_scheduler.h:49
	JobInstanceHandle Add(const EntryPoint &, const Param *);

	// job_scheduler.h:50
	JobInstanceHandle Add(const EntryPoint &, Param, Param, Param, Param);

	// job_scheduler.h:52
	JobInstanceHandle AddNotReady(const EntryPoint &, const Param *);

	// job_scheduler.h:53
	JobInstanceHandle AddNotReady(const EntryPoint &, Param, Param, Param, Param);

	// job_scheduler.h:55
	JobInstanceHandle Add(EA::Jobs::Job &);

	// job_scheduler.h:56
	void AddTree(EA::Jobs::Job &);

	// job_scheduler.h:57
	void AddJobs(EA::Jobs::Job *, int);

	// job_scheduler.h:59
	JobThreadHandle AddThread(const JobThreadParameters &);

	// job_scheduler.h:60
	JobThreadHandle GetThreadHandle(EA::Jobs::JobEnvironment, int) const;

	// job_scheduler.h:61
	int GetNumThreads(EA::Jobs::JobEnvironment) const;

	// job_scheduler.h:63
	void WaitOnAllJobs(WaitOnCallback *, void *, int) const;

	// job_scheduler.h:65
	bool JoinLocalQueueForOneJob(EA::Jobs::JobAffinity);

	// job_scheduler.h:67
	// Declaration
	void SetProfilingCallback(ProfilerCallback *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// profiling.h:32
		typedef void (const JobMetrics *, int, void *) ProfilerCallback;

	}

	// job_scheduler.h:68
	void SetProfilingContext(void *);

	// job_scheduler.h:69
	void FlushProfile();

	// job_scheduler.h:70
	void RunGarbageCollector();

	// job_scheduler.h:72
	void WakeThreads(EA::Jobs::JobEnvironment);

	// job_scheduler.h:74
	size_t GetJobThreadSleepTimeoutMS(EA::Jobs::JobEnvironment) const;

	// job_scheduler.h:75
	void SetJobThreadSleepTimeoutMS(EA::Jobs::JobEnvironment, size_t);

private:
	// job_scheduler.h:79
	void JobScheduler(const JobScheduler &);

	// job_scheduler.h:80
	EA::Jobs::JobScheduler & operator=(const JobScheduler &);

}


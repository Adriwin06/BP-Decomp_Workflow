// icoreallocator_interface.h:31
namespace EA {
	// config.h:14
	namespace Jobs {
		// Declaration
		struct Job {
			// job.h:135
			struct Dependency {
				// job.h:140
				EA::Jobs::Job * mJob;

				// job.h:141
				JobInstanceHandle mJobInstanceHandle;

				// job.h:142
				EA::Jobs::Event::When mTrigger;

			public:
				// job.h:136
				Dependency();

				// job.h:137
				Dependency(EA::Jobs::Job &, EA::Jobs::Event::When);

				// job.h:138
				Dependency(JobInstanceHandle, EA::Jobs::Event::When);

			}

		}

	}

}

// job.h:35
struct EA::Jobs::Job {
private:
	// job.h:118
	bool mSeen;

	// job.h:127
	EntryPoint mEntryPoint;

	// job.h:128
	Param[4] mParams;

	// job.h:130
	JobInstanceHandle mJobInstanceHandle;

	// job.h:132
	bool mHasJobDependency;

	// job.h:147
	BucketListNode<EA::Jobs::Job::Dependency,10> mDependencies;

	// job.h:151
	BucketListNode<EA::Jobs::Job*,6> mDependents;

	// job.h:155
	BucketListNode<EA::Jobs::Event,10>[2] mEvents;

	// job.h:157
	Event mStartEvent;

public:
	// job.h:38
	void * operator new(size_t);

	// job.h:38
	void * operator new [](size_t);

	// job.h:38
	void * operator new(size_t, void *);

	// job.h:38
	void operator delete(void *);

	// job.h:38
	void operator delete [](void *);

	// job.h:48
	void Job(const char *);

	// job.h:49
	void ~Job();

	// job.h:51
	void Clear();

	// job.h:53
	void DependsOn(EA::Jobs::Job *, EA::Jobs::Event::When);

	// job.h:54
	void DependsOn(JobInstanceHandle, EA::Jobs::Event::When);

	// job.h:55
	void AddEvent(const Event &, EA::Jobs::Event::When);

	// job.h:57
	void GetEnabler(Enabler *&, Enabler &) const;

	// job.h:59
	void WaitOn(WaitOnCallback *, void *, int) const;

	// job.h:60
	void WaitOnOrSleepOn(WaitOnCallback *, void *, int) const;

	// job.h:61
	void SleepOn() const;

	// job.h:62
	bool IsDone() const;

	// job.h:64
	EA::Jobs::Job * GetDependency(int) const;

	// job.h:65
	int GetNumDependencies() const;

	// job.h:67
	EA::Jobs::Job * GetDependent(int) const;

	// job.h:68
	int GetNumDependents() const;

	// job.h:70
	const EntryPoint & GetEntryPoint() const;

	// job.h:71
	void SetEntryPoint(EntryPoint);

	// job.h:73
	const char * GetName() const;

	// job.h:74
	EA::Jobs::JobPriority GetPriority() const;

	// job.h:75
	EA::Jobs::JobAffinity GetAffinity() const;

	// job.h:76
	EA::Jobs::JobEnvironment GetEnvironment() const;

	// job.h:77
	bool GetBreakOnEntry() const;

	// job.h:78
	EA::Jobs::EntryPoint::KernelSwap GetKernelSwap() const;

	// job.h:79
	EA::Jobs::EntryPoint::CodeRecycle GetCodeRecycle() const;

	// job.h:81
	void SetCode(EA::Jobs::JobEnvironment, const void *, int);

	// job.h:82
	void SetCode(void (*)(Param, Param, Param, Param));

	// job.h:83
	void SetName(const char *);

	// job.h:84
	void SetAffinity(EA::Jobs::JobAffinity);

	// job.h:85
	void SetPriority(EA::Jobs::JobPriority);

	// job.h:86
	void SetKernelSwap(EA::Jobs::EntryPoint::KernelSwap);

	// job.h:87
	void SetCodeRecycle(EA::Jobs::EntryPoint::CodeRecycle);

	// job.h:88
	void SetBreakOnEntry(bool);

	// job.h:90
	bool GetAllowSleepOn() const;

	// job.h:91
	void SetAllowSleepOn(bool);

	// job.h:94
	void SetParams(Param, Param, Param, Param);

	// job.h:95
	void SetParam(int, Param);

	// job.h:96
	Param GetParam(int) const;

	// job.h:97
	const Param * GetParams() const;

	// job.h:99
	void SetData(void *, size_t);

	// job.h:100
	void * GetData() const;

	// job.h:101
	uint32_t GetDataSize() const;

	// job.h:103
	const JobInstanceHandle & GetJobInstanceHandle() const;

	// job.h:105
	bool HasJobDependency() const;

	// job.h:109
	void INTERNAL_AddNotReady(EA::Jobs::JobScheduler &);

	// job.h:110
	void INTERNAL_SubmitEventsAndDeps(EA::Jobs::JobScheduler &);

	// job.h:111
	void INTERNAL_EnableIfZeroDeps(EA::Jobs::JobScheduler &);

	// job.h:113
	void INTERNAL_SetSeen();

	// job.h:114
	void INTERNAL_ClearSeen();

	// job.h:115
	bool INTERNAL_IsSeen() const;

private:
	// job.h:122
	void Job(const Job &);

	// job.h:123
	EA::Jobs::Job & operator=(const Job &);

}


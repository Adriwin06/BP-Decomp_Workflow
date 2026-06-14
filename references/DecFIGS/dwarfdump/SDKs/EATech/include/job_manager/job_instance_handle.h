// job_instance_handle.h:21
struct EA::Jobs::JobInstanceHandle {
private:
	// job_instance_handle.h:45
	uint64_t mSubmissionId;

	// job_instance_handle.h:46
	EA::Jobs::Detail::SchedulerBackend * mSchedulerBackend;

	// job_instance_handle.h:47
	uint16_t mIndex;

	// job_instance_handle.h:48
	uint16_t mPadding;

public:
	// job_instance_handle.h:24
	void JobInstanceHandle();

	// job_instance_handle.h:25
	void JobInstanceHandle(EA::Jobs::Detail::SchedulerBackend *, uint16_t, uint64_t);

	// job_instance_handle.h:27
	bool Valid() const;

	// job_instance_handle.h:29
	uint64_t GetSubmissionId() const;

	// job_instance_handle.h:30
	uint16_t GetIndex() const;

	// job_instance_handle.h:32
	// Declaration
	void GetEnabler(Enabler *&, Enabler &) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// config.h:27
		typedef uint32_t Enabler;

	}

	// job_instance_handle.h:33
	void Enable();

	// job_instance_handle.h:35
	void SleepOn() const;

	// job_instance_handle.h:36
	// Declaration
	void WaitOn(WaitOnCallback *, void *, int) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// wait_on.h:27
		typedef EA::Jobs::WaitOnControl (void *) WaitOnCallback;

	}

	// job_instance_handle.h:37
	void WaitOnOrSleepOn(WaitOnCallback *, void *, int) const;

	// job_instance_handle.h:39
	bool IsDone() const;

	// job_instance_handle.h:40
	void AddEvent(const Event &, EA::Jobs::Event::When);

	// job_instance_handle.h:41
	Event AddBarrier();

}


// job_thread_handle.h:23
struct EA::Jobs::JobThreadHandle {
private:
	// job_thread_handle.h:42
	EA::Jobs::Detail::SchedulerBackend * mSchedulerBackend;

	// job_thread_handle.h:43
	uint32_t mHandle;

public:
	// job_thread_handle.h:29
	void JobThreadHandle();

	// job_thread_handle.h:30
	void JobThreadHandle(EA::Jobs::Detail::SchedulerBackend *, uint32_t);

	// job_thread_handle.h:32
	void RequestEnd();

	// job_thread_handle.h:33
	void WaitForEnd();

	// Unknown accessibility
	// job_thread_id.h:26
	typedef uint64_t JobThreadId;

	// job_thread_handle.h:34
	JobThreadHandle::JobThreadId GetId() const;

	// job_thread_handle.h:35
	JobThreadParameters GetParameters() const;

	// job_thread_handle.h:37
	bool Valid() const;

	// job_thread_handle.h:38
	uint32_t Handle() const;

}


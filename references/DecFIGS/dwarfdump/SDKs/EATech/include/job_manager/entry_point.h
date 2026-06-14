// icoreallocator_interface.h:31
namespace EA {
	// config.h:14
	namespace Jobs {
		// Declaration
		struct EntryPoint {
			// entry_point.h:26
			enum KernelSwap {
				SWAP_OFF = 0,
				SWAP_ON = 1,
				SWAP_DEFAULT = 0,
			}

			// entry_point.h:33
			enum CodeRecycle {
				CODE_RECYCLE_OFF = 0,
				CODE_RECYCLE_ON = 1,
				CODE_RECYCLE_DEFAULT = 1,
			}

		}

	}

}

// entry_point.h:21
struct EA::Jobs::EntryPoint {
private:
	// entry_point.h:78
	char[16] mName;

	// entry_point.h:80
	EA::Jobs::JobPriority mPriority;

	// entry_point.h:81
	EA::Jobs::JobAffinity mAffinity;

	// entry_point.h:82
	EA::Jobs::JobEnvironment mEnvironment;

	// entry_point.h:83
	EA::Jobs::EntryPoint::KernelSwap mKernelSwap;

	// entry_point.h:84
	EA::Jobs::EntryPoint::CodeRecycle mCodeRecycle;

	// entry_point.h:85
	bool mBreakOnEntry;

	// entry_point.h:86
	bool mAllowSleepOn;

	// entry_point.h:89
	union {
		// entry_point.h:90
		void (*)(Param, Param, Param, Param) mLocalJob;

		// entry_point.h:93
		const char * mSpuJob;

	}

	// entry_point.h:98
	int mSpuJobSize;

	// entry_point.h:99
	SpuJobInfo mSpuJobInfo;

public:
	// entry_point.h:42
	void EntryPoint(EA::Jobs::JobEnvironment, const void *, int);

	// entry_point.h:43
	void EntryPoint(void (*)(Param, Param, Param, Param));

	// entry_point.h:45
	bool IsNull() const;

	// entry_point.h:47
	EA::Jobs::JobEnvironment GetEnvironment() const;

	// entry_point.h:48
	const char * GetName() const;

	// entry_point.h:49
	EA::Jobs::JobPriority GetPriority() const;

	// entry_point.h:50
	EA::Jobs::JobAffinity GetAffinity() const;

	// entry_point.h:51
	EA::Jobs::EntryPoint::KernelSwap GetKernelSwap() const;

	// entry_point.h:52
	EA::Jobs::EntryPoint::CodeRecycle GetCodeRecycle() const;

	// entry_point.h:53
	bool GetBreakOnEntry() const;

	// entry_point.h:55
	void SetCode(EA::Jobs::JobEnvironment, const void *, int);

	// entry_point.h:56
	void SetCode(void (*)(Param, Param, Param, Param));

	// entry_point.h:57
	void SetName(const char *);

	// entry_point.h:58
	void SetAffinity(EA::Jobs::JobAffinity);

	// entry_point.h:59
	void SetPriority(EA::Jobs::JobPriority);

	// entry_point.h:60
	void SetKernelSwap(EA::Jobs::EntryPoint::KernelSwap);

	// entry_point.h:61
	void SetCodeRecycle(EA::Jobs::EntryPoint::CodeRecycle);

	// entry_point.h:62
	void SetBreakOnEntry(bool);

	// entry_point.h:63
	void SetAllowSleepOn(bool);

	// entry_point.h:64
	bool GetAllowSleepOn() const;

	// entry_point.h:66
	void (*)(Param, Param, Param, Param) GetLocalJob() const;

	// entry_point.h:69
	const char * GetSpuJob() const;

	// entry_point.h:70
	int GetSpuJobSize() const;

	// entry_point.h:71
	const SpuJobInfo & GetSpuJobInfo() const;

private:
	// entry_point.h:76
	void SetDefaultSettings();

}


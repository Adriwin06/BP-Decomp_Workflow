// channel.h:42
struct rw::core::debug::Channel {
private:
	// channel.h:100
	unsigned int mDeviceCount;

	// channel.h:101
	unsigned int mIndex;

	// channel.h:102
	bool mEnabled;

	// channel.h:103
	bool mHaveInfo;

	// channel.h:104
	char[32] mName;

	// channel.h:106
	rw::core::debug::Device *[16] mDeviceList;

	// channel.h:108
	const char * mFileName;

	// channel.h:109
	unsigned int mLine;

	// channel.h:111
	DebugCriticalSection mCriticalSection;

	// channel.h:114
	PrintOpts mPrintOpts;

public:
	// channel.h:60
	void * operator new(size_t);

	// channel.h:61
	void operator delete(void *);

	// channel.h:63
	void Channel(const char *, rw::core::debug::Device *, unsigned int);

	// channel.h:64
	void ~Channel();

	// channel.h:66
	const char * GetName() const;

	// channel.h:67
	const char * GetFileName() const;

	// channel.h:68
	unsigned int GetLine() const;

	// channel.h:69
	void SetInfo(const char *, unsigned int);

	// channel.h:70
	bool HaveInfo() const;

	// channel.h:72
	const PrintOpts & GetPrintOpts() const;

	// channel.h:73
	void SetPrintOpts(const PrintOpts &);

	// channel.h:75
	void Enable();

	// channel.h:76
	void Disable();

	// channel.h:77
	bool IsEnabled() const;

	// channel.h:79
	bool AddDevice(rw::core::debug::Device *);

	// channel.h:80
	bool RemoveDevice(const rw::core::debug::Device *);

	// channel.h:83
	void Print(const char *, ...);

	// channel.h:84
	void Vprint(const char *, va_list);

	// channel.h:86
	void OutputData(const void *, unsigned int);

	// channel.h:88
	void Flush();

	// channel.h:90
	void EnterCritical();

	// channel.h:93
	void LeaveCritical();

	// channel.h:96
	rw::core::debug::Device * GetFirstDevice();

	// channel.h:97
	rw::core::debug::Device * GetNextDevice();

private:
	// channel.h:117
	void Channel(const Channel &);

	// channel.h:118
	Channel & operator=(const Channel &);

}


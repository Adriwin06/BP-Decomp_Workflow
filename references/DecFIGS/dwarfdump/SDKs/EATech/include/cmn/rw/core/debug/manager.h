// manager.h:74
struct rw::core::debug::PrintOpts {
	// manager.h:88
	bool mDate;

	// manager.h:89
	bool mTime;

	// manager.h:90
	bool mFile;

	// manager.h:91
	bool mLine;

	// manager.h:92
	bool mName;

	// manager.h:93
	bool mNewLine;

public:
	// manager.h:76
	void PrintOpts();

}

// manager.h:281
struct rw::core::debug::IFormatter {
	int (*)(...) * _vptr.IFormatter;

public:
	void IFormatter(const IFormatter &);

	// manager.h:283
	void * operator new(size_t);

	// manager.h:284
	void operator delete(void *);

	// manager.h:297
	virtual bool Format(char *, unsigned int, Channel *, const char *, va_list);

	// manager.h:300
	void IFormatter();

	// manager.h:301
	virtual void ~IFormatter();

}

// manager.h:266
extern rw::IResourceAllocator * sAllocator;

// manager.h:267
extern rw::core::debug::IFormatter * sFormatter;


// CgsDebugComponentMessageFilter.h:49
struct CgsDev::DebugComponentMessageFilter : public CgsDev::DebugComponent {
protected:
	// CgsDebugComponentMessageFilter.h:76
	int32_t miFilterIndex;

	// CgsDebugComponentMessageFilter.h:77
	bool mbFilterEnable;

public:
	void DebugComponentMessageFilter();

	void DebugComponentMessageFilter(const DebugComponentMessageFilter &);

	// CgsDebugComponentMessageFilter.cpp:64
	void Construct();

	// CgsDebugComponentMessageFilter.cpp:156
	// Declaration
	void SetFilterName(const char *, FilterFlag) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsMessage.h:40
		typedef uint64_t FilterFlag;

	}

protected:
	// CgsDebugComponentMessageFilter.cpp:254
	virtual const char * GetName() const;

	// CgsDebugComponentMessageFilter.cpp:268
	virtual const char * GetPath() const;

	// CgsDebugComponentMessageFilter.cpp:109
	virtual void OnActivate();

	// CgsDebugComponentMessageFilter.cpp:203
	void FilterEnableChangeCallback(void *, void *);

	// CgsDebugComponentMessageFilter.cpp:225
	// Declaration
	void FilterTypeChangeCallback(void *, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsDebugComponentMessageFilter.cpp:236
		using namespace Message;

		// CgsDebugComponentMessageFilter.cpp:240
		using namespace Message;

	}

}

// CgsDebugComponentMessageFilter.h:49
void CgsDev::DebugComponentMessageFilter::DebugComponentMessageFilter() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


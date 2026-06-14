// CgsThreadLayout.h:80
struct CgsSystem::ThreadLayout {
private:
	// CgsThreadLayout.h:119
	CgsSystem::IThreadClass * mpThreadClass;

	// CgsThreadLayout.h:120
	int32_t miPerfMonResource;

	// CgsThreadLayout.h:121
	int32_t miPerfMonUpdateWaitForDispatch;

	// CgsThreadLayout.h:122
	int32_t miPerfMonAllThreadSyncs;

	// CgsThreadLayout.h:123
	EAThreadDynamicData::ThreadId mUpdateThreadId;

	// CgsThreadLayout.h:124
	Thread mDispatchThread;

	// CgsThreadLayout.h:125
	Barrier mUpdateStartBarrier;

	// CgsThreadLayout.h:126
	Barrier mUpdateEndBarrier;

	// CgsThreadLayout.h:127
	CgsSystem::EFrameRate volatile meFrameRate;

	// CgsThreadLayout.h:128
	int32_t volatile miResourcePercentageOfFrame;

	// CgsThreadLayout.h:129
	bool mbUpdatingResourceSystem;

	// CgsThreadLayout.h:130
	AtomicPointer mAssertFromSecondaryThread;

public:
	// CgsThreadLayout.h:84
	void ThreadLayout();

	// CgsThreadLayout.h:92
	void Begin(CgsSystem::IThreadClass *, int32_t, int32_t, int32_t);

	// CgsThreadLayout.h:96
	bool Update();

	// CgsThreadLayout.h:100
	void SetFrameRate(CgsSystem::EFrameRate);

	// CgsThreadLayout.h:104
	void SetResourcePercentageOfFrame(int32_t);

	// CgsThreadLayout.h:108
	EAThreadDynamicData::ThreadId GetUpdateThreadId() const;

	// CgsThreadLayout.h:112
	EAThreadDynamicData::ThreadId GetDispatchThreadId() const;

	// CgsThreadLayout.h:116
	bool InteruptThreadForAssert(const AssertData *);

private:
	// CgsThreadLayout.h:135
	void InitThreads();

	// CgsThreadLayout.h:139
	intptr_t GlobalThreadBeginWrapper(RunnableFunction, void *);

	// CgsThreadLayout.h:143
	intptr_t DispatchThread(void *);

}

// CgsThreadLayout.h:47
struct CgsSystem::IThreadClass {
	int (*)(...) * _vptr.IThreadClass;

public:
	// CgsThreadLayout.h:50
	virtual bool UpdateThread();

	// CgsThreadLayout.h:53
	virtual void DispatchThread();

	// CgsThreadLayout.h:56
	virtual void ResourceUpdateThread(Mutex *);

	// CgsThreadLayout.h:59
	virtual void OnStartOfUpdateFrame();

	// CgsThreadLayout.h:62
	virtual void OnEndOfUpdateFrame();

	// CgsThreadLayout.h:65
	virtual void OnCompletionOfVsyncWait();

	// CgsThreadLayout.h:68
	virtual void RenderAssert(const AssertData *);

}

// CgsThreadLayout.h:47
struct CgsSystem::IThreadClass {
	int (*)(...) * _vptr.IThreadClass;

public:
	void IThreadClass(const IThreadClass &);

	void IThreadClass();

	// CgsThreadLayout.h:50
	virtual bool UpdateThread();

	// CgsThreadLayout.h:53
	virtual void DispatchThread();

	// CgsThreadLayout.h:56
	virtual void ResourceUpdateThread(Mutex *);

	// CgsThreadLayout.h:59
	virtual void OnStartOfUpdateFrame();

	// CgsThreadLayout.h:62
	virtual void OnEndOfUpdateFrame();

	// CgsThreadLayout.h:65
	virtual void OnCompletionOfVsyncWait();

	// CgsThreadLayout.h:68
	virtual void RenderAssert(const AssertData *);

}

// CgsThreadLayout.h:47
void CgsSystem::IThreadClass::IThreadClass() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsThreadLayout.h:80
struct CgsSystem::ThreadLayout {
private:
	// CgsThreadLayout.h:119
	CgsSystem::IThreadClass * mpThreadClass;

	// CgsThreadLayout.h:120
	int32_t miPerfMonResource;

	// CgsThreadLayout.h:121
	int32_t miPerfMonUpdateWaitForDispatch;

	// CgsThreadLayout.h:122
	int32_t miPerfMonAllThreadSyncs;

	// CgsThreadLayout.h:123
	EAThreadDynamicData::ThreadId mUpdateThreadId;

	// CgsThreadLayout.h:124
	Thread mDispatchThread;

	// CgsThreadLayout.h:125
	Barrier mUpdateStartBarrier;

	// CgsThreadLayout.h:126
	Barrier mUpdateEndBarrier;

	// CgsThreadLayout.h:127
	CgsSystem::EFrameRate volatile meFrameRate;

	// CgsThreadLayout.h:128
	int32_t volatile miResourcePercentageOfFrame;

	// CgsThreadLayout.h:129
	bool mbUpdatingResourceSystem;

	// CgsThreadLayout.h:130
	AtomicPointer mAssertFromSecondaryThread;

public:
	// CgsThreadLayout.h:84
	void ThreadLayout();

	// CgsThreadLayout.h:92
	void Begin(CgsSystem::IThreadClass *, int32_t, int32_t, int32_t);

	// CgsThreadLayout.h:96
	bool Update();

	// CgsThreadLayout.h:100
	void SetFrameRate(CgsSystem::EFrameRate);

	// CgsThreadLayout.h:104
	void SetResourcePercentageOfFrame(int32_t);

	// CgsThreadLayout.h:108
	EAThreadDynamicData::ThreadId GetUpdateThreadId() const;

	// CgsThreadLayout.h:112
	EAThreadDynamicData::ThreadId GetDispatchThreadId() const;

	// CgsThreadLayout.h:116
	bool InteruptThreadForAssert(const AssertData *);

private:
	// CgsThreadLayout.h:135
	// Declaration
	void InitThreads() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsThreadLayout.cpp:128
		using namespace CgsDev::Message;

		// CgsThreadLayout.cpp:129
		using namespace CgsDev::Message;

	}

	// CgsThreadLayout.h:139
	intptr_t GlobalThreadBeginWrapper(RunnableFunction, void *);

	// CgsThreadLayout.h:143
	// Declaration
	intptr_t DispatchThread(void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsThreadLayout.cpp:168
		using namespace CgsDev::Message;

	}

}


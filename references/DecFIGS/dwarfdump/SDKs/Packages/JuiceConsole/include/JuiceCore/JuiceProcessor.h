// JuiceProcessor.h:18
struct Juice::Processor {
	int (*)(...) * _vptr.Processor;

protected:
	// JuiceProcessor.h:51
	Juice::cJuiceCom * mCom;

	// JuiceProcessor.h:52
	bool mInitialized;

	// JuiceProcessor.h:53
	bool mEnabled;

public:
	void Processor(const Processor &);

	// JuiceProcessor.cpp:14
	void Processor();

	// JuiceProcessor.h:21
	virtual void ~Processor();

	// JuiceProcessor.h:24
	const bool InitializeComplete() const;

	// JuiceProcessor.h:30
	const bool Enabled() const;

	// JuiceProcessor.cpp:21
	virtual void Initialize(Juice::cJuiceCom *);

	// JuiceProcessor.h:39
	virtual void Disable();

	// JuiceProcessor.h:42
	virtual void Flush();

	// JuiceProcessor.h:45
	virtual void ProcessMessage(int);

	// JuiceProcessor.h:48
	virtual void Update();

}


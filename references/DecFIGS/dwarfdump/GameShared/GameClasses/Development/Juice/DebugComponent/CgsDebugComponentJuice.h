// CgsDebugComponentJuice.h:49
struct CgsDev::DebugComponentJuice : public CgsDev::DebugComponent {
private:
	// CgsDebugComponentJuice.h:78
	CgsJuice mJuice;

	// CgsDebugComponentJuice.h:80
	bool mbPause;

public:
	// CgsDebugComponentJuice.cpp:58
	void Construct(const JuiceConstructParams *);

	// CgsDebugComponentJuice.cpp:76
	virtual void Update();

	// CgsDebugComponentJuice.h:92
	CgsJuice & GetJuice();

protected:
	// CgsDebugComponentJuice.h:67
	virtual const char * GetName() const;

	// CgsDebugComponentJuice.h:70
	virtual bool IsSimple() const;

	// CgsDebugComponentJuice.cpp:90
	virtual void OnActivate();

private:
	// CgsDebugComponentJuice.cpp:112
	void DebugTogglePause(void *);

	// CgsDebugComponentJuice.cpp:140
	void DebugAssertTest(void *);

}


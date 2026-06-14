// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// CgsAttribSysDebugComponent.h:43
	const char * KPAC_DEBUG_COMPONENT_NAME;

	// CgsAttribSysDebugComponent.h:44
	const char * KPAC_DEBUG_COMPONENT_PATH;

	// CgsAttribSysDebugComponent.h:47
	const int32_t KI_LOG_WINDOW_NUM_LINES = 20;

	// CgsAttribSysDebugComponent.h:48
	const float32_t KF_LOG_WINDOW_WIDTH;

	// CgsAttribSysDebugComponent.h:49
	const float32_t KF_LOG_WINDOW_HEIGHT;

}

// CgsAttribSysDebugComponent.h:65
void CgsAttribSys::AttribSysDebugComponent::AttribSysDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAttribSysDebugComponent.h:65
struct CgsAttribSys::AttribSysDebugComponent : public CgsDev::DebugComponent {
private:
	// CgsAttribSysDebugComponent.cpp:36
	extern CgsDev::DebugUI::LogWindow sLogWindow;

public:
	// CgsAttribSysDebugComponent.cpp:61
	void Construct();

	// CgsAttribSysDebugComponent.cpp:82
	void Destruct();

	// CgsAttribSysDebugComponent.cpp:125
	virtual void Update();

	// CgsAttribSysDebugComponent.cpp:144
	CgsDev::DebugUI::LogWindowStrStream & GetLogWindowStream();

protected:
	// CgsAttribSysDebugComponent.cpp:100
	virtual void OnActivate();

	// CgsAttribSysDebugComponent.h:135
	virtual const char * GetName() const;

	// CgsAttribSysDebugComponent.h:153
	virtual const char * GetPath() const;

	// CgsAttribSysDebugComponent.h:171
	virtual bool IsSimple() const;

}


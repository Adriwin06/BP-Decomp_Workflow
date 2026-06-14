// BrnCrashPlayDebugComponent.h:47
struct BrnWorld::CrashPlayDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnCrashPlayDebugComponent.h:92
	CrashPlayManager * mpCrashPlayManager;

	// BrnCrashPlayDebugComponent.h:94
	bool mbDisplayCrashBreaker;

public:
	// BrnCrashPlayDebugComponent.cpp:48
	void Construct(CrashPlayManager *);

	// BrnCrashPlayDebugComponent.cpp:62
	void Destruct();

	// BrnCrashPlayDebugComponent.cpp:80
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// BrnCrashPlayDebugComponent.cpp:97
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnCrashPlayDebugComponent.cpp:109
	virtual void Update();

protected:
	// BrnCrashPlayDebugComponent.cpp:123
	virtual const char * GetName() const;

	// BrnCrashPlayDebugComponent.cpp:135
	virtual const char * GetPath() const;

	// BrnCrashPlayDebugComponent.cpp:148
	virtual void OnActivate();

private:
	// BrnCrashPlayDebugComponent.cpp:168
	void DrawCrashBreaker(CgsDev::Debug3DImmediateRender *) const;

}

// BrnCrashPlayDebugComponent.h:47
void BrnWorld::CrashPlayDebugComponent::CrashPlayDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


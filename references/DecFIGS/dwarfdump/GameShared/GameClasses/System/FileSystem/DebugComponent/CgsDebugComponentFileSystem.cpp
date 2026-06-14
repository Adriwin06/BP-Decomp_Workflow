// CgsDeviceOperation.h:24
namespace CgsFileSystem {
	// CgsDebugComponentFileSystem.cpp:84
	MenuItemStreamInfo[8] gaMenuItemStreamUsageRead;

}

// CgsDebugComponentFileSystem.cpp:49
struct CgsFileSystem::MenuItemStreamInfo : public CgsDev::DebugUI::MenuItem {
private:
	// CgsDebugComponentFileSystem.cpp:67
	extern const int32_t KI_MAX_STREAM_HISTORY = 512;

	// CgsDebugComponentFileSystem.cpp:69
	CgsFileSystem::StreamDeviceDiskRead * mpStreamDevice;

	// CgsDebugComponentFileSystem.cpp:70
	const char * mpcFileName;

	// CgsDebugComponentFileSystem.cpp:72
	uint8_t[512] maiHistory;

	// CgsDebugComponentFileSystem.cpp:73
	uint8_t miHead;

public:
	void MenuItemStreamInfo(const MenuItemStreamInfo &);

	void MenuItemStreamInfo();

	// CgsDebugComponentFileSystem.cpp:697
	void Prepare(CgsFileSystem::StreamDeviceDiskRead *);

	// CgsDebugComponentFileSystem.cpp:723
	void SetFileName(const char *);

	// CgsDebugComponentFileSystem.cpp:757
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

	// CgsDebugComponentFileSystem.cpp:782
	virtual void Render(CgsDev::Debug2DImmediateRender *, float32_t, float32_t, bool, float32_t);

	// CgsDebugComponentFileSystem.cpp:816
	virtual void ComputeSize();

}

// CgsDebugComponentFileSystem.cpp:49
void CgsFileSystem::MenuItemStreamInfo::MenuItemStreamInfo() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugComponentFileSystem.cpp:67
extern const int32_t KI_MAX_STREAM_HISTORY = 512;


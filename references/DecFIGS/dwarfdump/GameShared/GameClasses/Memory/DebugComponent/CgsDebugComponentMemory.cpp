// CgsHeapMalloc.h:33
namespace CgsMemory {
	// CgsDebugComponentMemory.cpp:45
	const float32_t KF_BANK_WIDTH;

	// CgsDebugComponentMemory.cpp:46
	const float32_t KF_BANK_HEIGHT;

	// CgsDebugComponentMemory.cpp:93
	MemoryBankMenuItem gMemoryBankMenuItem;

}

// CgsDebugComponentMemory.cpp:53
struct CgsMemory::MemoryBankMenuItem : public CgsDev::DebugUI::MenuItem {
protected:
	// CgsDebugComponentMemory.cpp:79
	uint32_t muRootBankTotalSize;

	// CgsDebugComponentMemory.cpp:81
	uint32_t muResourceType;

	// CgsDebugComponentMemory.cpp:85
	const CgsMemory::MemoryModule * mpMemoryModule;

public:
	void MemoryBankMenuItem(const MemoryBankMenuItem &);

	void MemoryBankMenuItem();

	// CgsDebugComponentMemory.cpp:106
	void Construct(const CgsMemory::MemoryModule *);

	// CgsDebugComponentMemory.cpp:120
	void Prepare();

	// CgsDebugComponentMemory.cpp:137
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

	// CgsDebugComponentMemory.cpp:176
	virtual void Render(CgsDev::Debug2DImmediateRender *, float32_t, float32_t, bool, float32_t);

	// CgsDebugComponentMemory.cpp:215
	virtual void ComputeSize();

	// CgsDebugComponentMemory.cpp:232
	virtual bool IsUseful() const;

protected:
	// CgsDebugComponentMemory.cpp:246
	float32_t ComputeBankHeight(uint32_t);

	// CgsDebugComponentMemory.cpp:291
	void RenderBank(CgsDev::Debug2DImmediateRender *, float32_t, float32_t, uint32_t);

}

// CgsDebugComponentMemory.cpp:53
void CgsMemory::MemoryBankMenuItem::MemoryBankMenuItem() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


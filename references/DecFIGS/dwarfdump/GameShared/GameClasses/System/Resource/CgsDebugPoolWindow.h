// CgsDebugPoolWindow.h:49
void CgsResource::DebugPoolWindow::DebugPoolWindow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceID.h:30
namespace CgsResource {
	// Declaration
	struct DebugPoolWindow {
		// CgsDebugPoolWindow.h:53
		struct HeapDisplayInfo {
			// CgsDebugPoolWindow.h:55
			Heap * mpHeap;

			// CgsDebugPoolWindow.h:56
			char[128] macName;

			// CgsDebugPoolWindow.h:57
			char[16] macShortName;

			// CgsDebugPoolWindow.h:58
			uint32_t muBytesPerSegment;

			// CgsDebugPoolWindow.h:59
			uint32_t muScroll;

		}

	}

}

// CgsDebugPoolWindow.h:49
struct CgsResource::DebugPoolWindow : public CgsDev::DebugUI::Window {
private:
	// CgsDebugPoolWindow.h:74
	const Pool * mpPool;

	// CgsDebugPoolWindow.h:75
	CgsResource::DebugPoolWindow::HeapDisplayInfo[6] maHeaps;

	// CgsDebugPoolWindow.h:76
	int32_t miNumHeaps;

	// CgsDebugPoolWindow.h:77
	int32_t miSelectedHeap;

	// CgsDebugPoolWindow.h:79
	float32_t mrTextDrawPos;

public:
	// CgsDebugPoolWindow.cpp:34
	// Declaration
	void Reset(const Pool *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsDebugPoolWindow.cpp:36
		using namespace CgsResource;

	}

	// CgsDebugPoolWindow.cpp:90
	virtual void Render(CgsDev::Debug2DImmediateRender *);

	// CgsDebugPoolWindow.cpp:151
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

private:
	// CgsDebugPoolWindow.cpp:219
	void RenderHeap(CgsDev::Debug2DImmediateRender *, CgsResource::DebugPoolWindow::HeapDisplayInfo *, float32_t, float32_t, float32_t, float32_t);

	// CgsDebugPoolWindow.cpp:363
	RGBA CalculateColour(float32_t);

	// CgsDebugPoolWindow.cpp:61
	void AddHeap(const Heap *, const char *, const char *);

	// CgsDebugPoolWindow.cpp:387
	void AddTextLine(CgsDev::Debug2DImmediateRender *, char *, RGBA);

}


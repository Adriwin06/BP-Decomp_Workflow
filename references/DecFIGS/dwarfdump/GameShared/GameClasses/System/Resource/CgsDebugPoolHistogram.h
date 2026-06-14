// CgsResourceID.h:30
namespace CgsResource {
	// CgsDebugPoolHistogram.h:33
	const int32_t KI_NUMHISTOGRAMCOUNTS = 15;

	// CgsDebugPoolHistogram.h:34
	const int32_t[15] KAI_HISTOGRAMCOUNTS;

}

// CgsSmallResource.h:24
namespace CgsResource {
	// CgsDebugPoolHistogram.h:33
	const int32_t KI_NUMHISTOGRAMCOUNTS = 15;

	// CgsDebugPoolHistogram.h:34
	const int32_t[15] KAI_HISTOGRAMCOUNTS;

}

// CgsLuaState.h:37
namespace CgsResource {
	// CgsDebugPoolHistogram.h:33
	const int32_t KI_NUMHISTOGRAMCOUNTS = 15;

	// CgsDebugPoolHistogram.h:34
	const int32_t[15] KAI_HISTOGRAMCOUNTS;

}

// programbuffer.h:24
namespace CgsResource {
	// CgsDebugPoolHistogram.h:33
	const int32_t KI_NUMHISTOGRAMCOUNTS = 15;

	// CgsDebugPoolHistogram.h:34
	const int32_t[15] KAI_HISTOGRAMCOUNTS;

}

// CgsDebugPoolHistogram.h:51
void CgsResource::DebugPoolHistogram::~DebugPoolHistogram() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugPoolHistogram.h:51
void CgsResource::DebugPoolHistogram::DebugPoolHistogram() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugPoolHistogram.h:51
struct CgsResource::DebugPoolHistogram : public CgsDev::DebugUI::Window {
private:
	// CgsDebugPoolHistogram.h:66
	const Pool * mpPool;

	// CgsDebugPoolHistogram.h:67
	int32_t miMaxResources;

	// CgsDebugPoolHistogram.h:68
	int32_t miLoadedResources;

	// CgsDebugPoolHistogram.h:69
	int32_t[16] mauValues;

	// CgsDebugPoolHistogram.h:70
	Entry::ResourceDescriptor mSaved;

public:
	// CgsDebugPoolHistogram.cpp:37
	void Reset(const Pool *);

	// CgsDebugPoolHistogram.cpp:45
	virtual void Render(CgsDev::Debug2DImmediateRender *);

	// CgsDebugPoolHistogram.cpp:75
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

private:
	// CgsDebugPoolHistogram.cpp:116
	void AddToCount(int32_t);

	// CgsDebugPoolHistogram.cpp:131
	void DrawBar(CgsDev::Debug2DImmediateRender *, char *, int32_t, float);

}


// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugInternal.h:37
	namespace DebugUI {
		// CgsMenuItemVariableLineGraph.h:36
		const float32_t KF_OFFSET_TO_MIN_MAX;

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsTypes.h:34
	namespace DebugUI {
		// CgsMenuItemVariableLineGraph.h:36
		const float32_t KF_OFFSET_TO_MIN_MAX;

	}

}

// CgsMenuItemVariableLineGraph.h:51
void CgsDev::DebugUI::MenuItemVariableLineGraph::MenuItemVariableLineGraph() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsMenuItemVariableLineGraph.h:51
struct CgsDev::DebugUI::MenuItemVariableLineGraph : public CgsDev::DebugUI::MenuItem {
private:
	// CgsMenuItemVariableLineGraph.h:74
	float32_t *[5] mapfFloats;

	// CgsMenuItemVariableLineGraph.h:75
	float32_t[5][360] maafHistory;

	// CgsMenuItemVariableLineGraph.h:76
	int32_t miHistoryHead;

	// CgsMenuItemVariableLineGraph.h:77
	float32_t mfMinVal;

	// CgsMenuItemVariableLineGraph.h:78
	float32_t mfMaxVal;

public:
	// CgsMenuItemVariableLineGraph.cpp:62
	virtual void Prepare();

	// CgsMenuItemVariableLineGraph.cpp:97
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

	// CgsMenuItemVariableLineGraph.cpp:146
	virtual void Render(CgsDev::Debug2DImmediateRender *, float32_t, float32_t, bool, float32_t);

	// CgsMenuItemVariableLineGraph.cpp:193
	virtual void ComputeSize();

	// CgsMenuItemVariableLineGraph.cpp:213
	void AddFloat(float32_t *);

private:
	// CgsMenuItemVariableLineGraph.cpp:252
	void RecalculateMinMax();

	// CgsMenuItemVariableLineGraph.h:91
	float32_t ScaleDown(float32_t);

}


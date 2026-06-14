// CgsWidgetLineGraph.h:55
extern const int32_t KI_HISTORY_SIZE = 360;

// CgsWidgetLineGraph.h:56
extern const int32_t KI_MAX_FLOATS = 5;

// CgsWidgetLineGraph.h:52
struct CgsDev::DebugUI::WidgetLineGraph : public CgsDev::DebugUI::Widget {
	// CgsWidgetLineGraph.h:55
	extern const int32_t KI_HISTORY_SIZE = 360;

	// CgsWidgetLineGraph.h:56
	extern const int32_t KI_MAX_FLOATS = 5;

protected:
	// CgsWidgetLineGraph.h:71
	float32_t *[5][360] mpaaiValuesArray;

	// CgsWidgetLineGraph.h:72
	int32_t miFloatCount;

	// CgsWidgetLineGraph.h:73
	int32_t miHistoryCount;

	// CgsWidgetLineGraph.h:74
	int32_t miFirstValueIndex;

	// CgsWidgetLineGraph.h:75
	RGBA * mpColoursArray;

	// CgsWidgetLineGraph.h:76
	int32_t miColoursArraySize;

	// CgsWidgetLineGraph.h:77
	RGBA mColourBackground;

public:
	void WidgetLineGraph(const WidgetLineGraph &);

	void WidgetLineGraph();

	// CgsWidgetLineGraph.cpp:55
	void Prepare();

	// CgsWidgetLineGraph.cpp:82
	virtual void Render(CgsDev::Debug2DImmediateRender *, float32_t, float32_t, float32_t, float32_t);

	// CgsWidgetLineGraph.h:87
	void SetValues(float32_t *[5][360], int32_t);

	// CgsWidgetLineGraph.h:95
	void SetFirstValue(int32_t);

	// CgsWidgetLineGraph.h:101
	void SetColours(RGBA *, int32_t);

	// CgsWidgetLineGraph.h:108
	void SetCustomBackgroundColour(RGBA);

}

// CgsWidgetLineGraph.h:52
void CgsDev::DebugUI::WidgetLineGraph::WidgetLineGraph() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


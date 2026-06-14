// CgsWidgetBarGraph.h:52
struct CgsDev::DebugUI::WidgetBarGraph : public CgsDev::DebugUI::Widget {
protected:
	// CgsWidgetBarGraph.h:65
	uint8_t * mpiValuesArray;

	// CgsWidgetBarGraph.h:66
	int32_t miValueCount;

	// CgsWidgetBarGraph.h:67
	int32_t miFirstValueIndex;

	// CgsWidgetBarGraph.h:68
	RGBA * mpColoursArray;

	// CgsWidgetBarGraph.h:69
	int32_t miColoursArraySize;

	// CgsWidgetBarGraph.h:70
	RGBA mColourBackground;

public:
	void WidgetBarGraph(const WidgetBarGraph &);

	void WidgetBarGraph();

	// CgsWidgetBarGraph.cpp:55
	void Prepare();

	// CgsWidgetBarGraph.cpp:81
	virtual void Render(CgsDev::Debug2DImmediateRender *, float32_t, float32_t, float32_t, float32_t);

	// CgsWidgetBarGraph.h:80
	void SetValues(uint8_t *, int32_t);

	// CgsWidgetBarGraph.h:87
	void SetFirstValue(int32_t);

	// CgsWidgetBarGraph.h:93
	void SetColours(RGBA *, int32_t);

	// CgsWidgetBarGraph.h:100
	void SetCustomBackgroundColour(RGBA);

}

// CgsWidgetBarGraph.h:52
void CgsDev::DebugUI::WidgetBarGraph::WidgetBarGraph() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsTypes.h:34
	namespace DebugUI {
		// Declaration
		struct WidgetBarGraph {
		public:
			WidgetBarGraph();

			// CgsWidgetBarGraph.h:87
			void SetFirstValue(int32_t);

			// CgsWidgetBarGraph.h:80
			void SetValues(uint8_t *, int32_t);

		}

	}

}


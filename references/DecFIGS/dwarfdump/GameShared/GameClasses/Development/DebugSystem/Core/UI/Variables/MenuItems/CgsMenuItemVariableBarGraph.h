// CgsMenuItemVariableBarGraph.h:48
struct CgsDev::DebugUI::MenuItemVariableBarGraph : public CgsDev::DebugUI::MenuItemVariable {
private:
	// CgsMenuItemVariableBarGraph.h:65
	extern const int32_t KI_HISTORY_SIZE = 60;

	// CgsMenuItemVariableBarGraph.h:67
	float32_t[60] mafHistory;

	// CgsMenuItemVariableBarGraph.h:68
	int32_t miHistoryHead;

	// CgsMenuItemVariableBarGraph.h:69
	float32_t mfMinVal;

	// CgsMenuItemVariableBarGraph.h:70
	float32_t mfMaxVal;

public:
	// CgsMenuItemVariableBarGraph.cpp:52
	virtual void Prepare(Variable *);

	// CgsMenuItemVariableBarGraph.cpp:81
	virtual void Update(float32_t, CgsDev::DebugUI::InputEvent);

	// CgsMenuItemVariableBarGraph.cpp:117
	virtual void Render(CgsDev::Debug2DImmediateRender *, float32_t, float32_t, bool, float32_t);

	// CgsMenuItemVariableBarGraph.cpp:160
	virtual void ComputeSize();

private:
	// CgsMenuItemVariableBarGraph.h:83
	uint8_t ScaleDown(float32_t);

}

// CgsMenuItemVariableBarGraph.h:65
extern const int32_t KI_HISTORY_SIZE = 60;


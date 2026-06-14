// BrnPropEntityDebugComponent.h:43
struct BrnWorld::PropEntityDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnPropEntityDebugComponent.h:82
	Vector2 mMapDimensions;

	// BrnPropEntityDebugComponent.h:83
	Vector2 mScreenSize;

	// BrnPropEntityDebugComponent.h:84
	float32_t mfAspect;

	// BrnPropEntityDebugComponent.h:86
	BrnWorld::PropEntityModule * mpPropEntityModule;

	// BrnPropEntityDebugComponent.h:87
	bool mbRenderProps;

	// BrnPropEntityDebugComponent.h:88
	bool mbRenderPropStats;

	// BrnPropEntityDebugComponent.h:89
	bool mbRenderPartStats;

	// BrnPropEntityDebugComponent.h:90
	bool mbRenderModuleStats;

	// BrnPropEntityDebugComponent.h:91
	bool mbRenderCellGrid;

	// BrnPropEntityDebugComponent.h:92
	bool mbRenderInertiaBoxes;

	// BrnPropEntityDebugComponent.h:93
	bool mbRenderTrafficLights;

	// BrnPropEntityDebugComponent.h:95
	float32_t mfCellGridZoom;

	// BrnPropEntityDebugComponent.h:97
	uint32_t muUsedInstances;

	// BrnPropEntityDebugComponent.h:98
	uint32_t muUsedProps;

	// BrnPropEntityDebugComponent.h:99
	uint32_t muUsedParts;

	// BrnPropEntityDebugComponent.h:100
	uint32_t muFrameCountForUpdate;

public:
	// BrnPropEntityDebugComponent.cpp:45
	void Construct(BrnWorld::PropEntityModule *);

	// BrnPropEntityDebugComponent.cpp:70
	void Destruct();

	// BrnPropEntityDebugComponent.cpp:112
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// BrnPropEntityDebugComponent.cpp:144
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

protected:
	// BrnPropEntityDebugComponent.cpp:87
	virtual const char * GetName() const;

	// BrnPropEntityDebugComponent.cpp:99
	virtual const char * GetPath() const;

	// BrnPropEntityDebugComponent.cpp:931
	virtual bool IsSimple();

	// BrnPropEntityDebugComponent.cpp:275
	virtual void OnActivate();

	// BrnPropEntityDebugComponent.cpp:309
	virtual void OnRegister();

private:
	// BrnPropEntityDebugComponent.cpp:800
	void RenderModuleStats(CgsDev::Debug2DImmediateRender *);

	// BrnPropEntityDebugComponent.cpp:165
	void RenderCellGrid(CgsDev::Debug2DImmediateRender *);

	// BrnPropEntityDebugComponent.cpp:437
	void RenderProps(CgsDev::Debug3DImmediateRender *);

	// BrnPropEntityDebugComponent.cpp:574
	void RenderTrafficLights(CgsDev::Debug3DImmediateRender *);

	// BrnPropEntityDebugComponent.cpp:334
	void RenderInertiaBoxes(CgsDev::Debug3DImmediateRender *);

	// BrnPropEntityDebugComponent.cpp:413
	void RenderInertiaBox(CgsDev::Debug3DImmediateRender *, Matrix44Affine, Vector3, VecFloat);

	// BrnPropEntityDebugComponent.cpp:631
	void RenderPropStats(CgsDev::Debug3DImmediateRender *);

	// BrnPropEntityDebugComponent.cpp:739
	void RenderPartStats(CgsDev::Debug3DImmediateRender *);

	// BrnPropEntityDebugComponent.cpp:946
	void Draw(VolRef::Volume *, CgsDev::Debug3DImmediateRender *, Matrix44Affine) const;

	// BrnPropEntityDebugComponent.cpp:246
	Vector2 ToCellGridScreenCoords(Vector3);

	// BrnPropEntityDebugComponent.cpp:321
	void ResetProps(void *);

}

// BrnPropEntityDebugComponent.h:43
void BrnWorld::PropEntityDebugComponent::PropEntityDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


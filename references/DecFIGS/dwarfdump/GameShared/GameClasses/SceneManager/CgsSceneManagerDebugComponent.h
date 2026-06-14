// CgsSceneManagerDebugComponent.h:55
void CgsSceneManager::SceneManagerDebugComponent::SceneManagerDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSceneManagerDebugComponent.h:55
struct CgsSceneManager::SceneManagerDebugComponent : public CgsDev::DebugComponent {
	// CgsSceneManagerDebugComponent.cpp:52
	extern int32_t _miTriangleTestPerfMon;

	// CgsSceneManagerDebugComponent.h:58
	extern int32_t _miTriangleTestTrace;

private:
	// CgsSceneManagerDebugComponent.h:143
	const CgsSceneManager::SceneManagerModule * mpSceneManagerModule;

	// CgsSceneManagerDebugComponent.h:144
	bool mbDrawCollisionVolumes;

	// CgsSceneManagerDebugComponent.h:145
	bool mbDrawTriangleTest;

	// CgsSceneManagerDebugComponent.h:146
	bool mbDrawPadding;

	// CgsSceneManagerDebugComponent.h:147
	Vector3 mInitialCameraPosition;

	// Unknown accessibility
	// vector3.h:125
	typedef Vector3Template<float> Vector3;

	// CgsSceneManagerDebugComponent.h:148
	SceneManagerDebugComponent::Vector3 mTriangleOffset;

	// CgsSceneManagerDebugComponent.h:149
	float32_t mfPadding;

	// CgsSceneManagerDebugComponent.h:150
	float32_t mfTriangleScale;

	// CgsSceneManagerDebugComponent.h:151
	int32_t miTestsToExecute;

	// CgsSceneManagerDebugComponent.h:152
	int32_t miTotalCycles;

	// CgsSceneManagerDebugComponent.h:153
	int32_t miCyclesPerCall;

	// CgsSceneManagerDebugComponent.h:154
	int32_t miCyclesPerTriangle;

	// CgsSceneManagerDebugComponent.h:155
	bool mbDrawCachedTriangles;

	// CgsSceneManagerDebugComponent.h:156
	bool mbDrawCacheSpheres;

	// CgsSceneManagerDebugComponent.h:157
	bool mbDrawNonCachedTriangles;

	// CgsSceneManagerDebugComponent.h:158
	bool mbDrawNonCachedSpheres;

public:
	// CgsSceneManagerDebugComponent.cpp:114
	void Construct(const CgsSceneManager::SceneManagerModule *);

	// CgsSceneManagerDebugComponent.cpp:155
	void Destruct();

	// CgsSceneManagerDebugComponent.cpp:191
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// CgsSceneManagerDebugComponent.cpp:160
	virtual void Update();

protected:
	// CgsSceneManagerDebugComponent.cpp:233
	virtual void OnActivate();

	// CgsSceneManagerDebugComponent.h:80
	virtual const char * GetName() const;

	// CgsSceneManagerDebugComponent.h:83
	virtual const char * GetPath() const;

private:
	// CgsSceneManagerDebugComponent.cpp:611
	void DrawTriangleTest(CgsDev::Debug3DImmediateRender *);

	// CgsSceneManagerDebugComponent.cpp:526
	void DrawPrimitives(CgsDev::Debug3DImmediateRender *);

	// CgsSceneManagerDebugComponent.cpp:548
	void DebugRenderCollisionVolume(const VolRef::Volume *, CgsDev::Debug3DImmediateRender *, Matrix44Affine) const;

	// CgsSceneManagerDebugComponent.cpp:748
	void DrawTriangle(CgsDev::Debug3DImmediateRender *, Vector3, Vector3, Vector3, Vector3, MaskScalar, Vector3, Vector3);

	// CgsSceneManagerDebugComponent.cpp:320
	void DrawCachedObjectTriangles(CgsDev::Debug3DImmediateRender *);

	// CgsSceneManagerDebugComponent.cpp:430
	void DrawCachedObjectSpheres(CgsDev::Debug3DImmediateRender *);

	// CgsSceneManagerDebugComponent.cpp:475
	void DrawCachedTriangle(CgsDev::Debug3DImmediateRender *, Vector3, Vector3, Vector3, RGBA);

	// CgsSceneManagerDebugComponent.cpp:77
	const VolumeManager * GetVolumeManager();

	// CgsSceneManagerDebugComponent.cpp:95
	const EntityManager * GetEntityManager();

}


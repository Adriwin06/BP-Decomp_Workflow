// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsTriangleCollisionDebugComponent.h:39
	const int32_t KI_MAX_NUM_COLLISION_POLY_CALLBACKS = 4;

}

// CgsTriangleCollisionDebugComponent.h:72
struct CgsSceneManager::DrawCollisionPolyCallbackData {
	// CgsTriangleCollisionDebugComponent.h:59
	typedef void (CgsDev::Debug3DImmediateRender *, void *, const rw::math::vpu::Vector3 *, int32_t, Vector3, uint32_t, int32_t) DrawCollisionPolyCallback;

private:
	// CgsTriangleCollisionDebugComponent.h:91
	DrawCollisionPolyCallbackData::DrawCollisionPolyCallback * mpCallbackFunc;

	// CgsTriangleCollisionDebugComponent.h:92
	void * mpUserData;

public:
	// CgsTriangleCollisionDebugComponent.h:79
	void Construct(DrawCollisionPolyCallbackData::DrawCollisionPolyCallback *, void *);

	// CgsTriangleCollisionDebugComponent.h:83
	DrawCollisionPolyCallbackData::DrawCollisionPolyCallback * GetCallback();

	// CgsTriangleCollisionDebugComponent.h:87
	void * GetUserData();

}

// CgsTriangleCollisionDebugComponent.h:230
extern DrawCollisionPolyCallbackData[4] saDrawPolyCallbacks;

// CgsTriangleCollisionDebugComponent.h:231
extern int32_t siNumDrawPolyCallbacks;

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsTriangleCollisionDebugComponent.h:39
	const int32_t KI_MAX_NUM_COLLISION_POLY_CALLBACKS = 4;

}

// CgsEntityId.h:27
namespace CgsSceneManager {
	// Declaration
	struct TriangleCollisionDebugComponent {
	public:
		TriangleCollisionDebugComponent();

	private:
		// CgsTriangleCollisionDebugComponent.h:230
		extern DrawCollisionPolyCallbackData[4] saDrawPolyCallbacks;

		// CgsTriangleCollisionDebugComponent.h:231
		extern int32_t siNumDrawPolyCallbacks;

	}

	// CgsTriangleCollisionDebugComponent.h:39
	const int32_t KI_MAX_NUM_COLLISION_POLY_CALLBACKS = 4;

}

// CgsTriangleCollisionDebugComponent.h:119
void CgsSceneManager::TriangleCollisionDebugComponent::TriangleCollisionDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsTriangleCollisionDebugComponent.h:119
struct CgsSceneManager::TriangleCollisionDebugComponent : public CgsDev::DebugComponent {
private:
	// CgsTriangleCollisionDebugComponent.h:162
	const TriangleCollisionManager * mpTriCollisionManager;

	// CgsTriangleCollisionDebugComponent.h:165
	Frustum mViewFrustum;

	// CgsTriangleCollisionDebugComponent.h:168
	bool mbDrawPolySoups;

	// CgsTriangleCollisionDebugComponent.h:169
	bool mbDrawSoupAabbs;

	// CgsTriangleCollisionDebugComponent.h:170
	bool mbDrawPolyNormals;

	// CgsTriangleCollisionDebugComponent.h:171
	bool mbUpdateViewFrustum;

	// CgsTriangleCollisionDebugComponent.h:172
	bool mbDrawEdgeCosines;

	// CgsTriangleCollisionDebugComponent.h:174
	bool mbTestSphere;

	// CgsTriangleCollisionDebugComponent.h:175
	SceneManagerDebugComponent::Vector3 mSpherePos;

	// CgsTriangleCollisionDebugComponent.h:176
	float32_t mfSphereRad;

	// CgsTriangleCollisionDebugComponent.h:177
	bool mbNeedToInitSpherePos;

	// CgsTriangleCollisionDebugComponent.h:178
	uint32_t muSphereTestCycles;

	// CgsTriangleCollisionDebugComponent.h:179
	float32_t mfSphereTestTimeSecs;

	// CgsTriangleCollisionDebugComponent.h:180
	float32_t mfSphereTestTimePercentFrame;

	// CgsTriangleCollisionDebugComponent.h:181
	int32_t miSphereTestResultCount;

	// CgsTriangleCollisionDebugComponent.h:182
	int32_t miSphereTestPerfMon;

	// CgsTriangleCollisionDebugComponent.h:183
	int32_t miSphereTestGetListsPerfMon;

	// CgsTriangleCollisionDebugComponent.h:184
	int32_t miSphereTestProcessSoupsPerfMon;

	// CgsTriangleCollisionDebugComponent.h:186
	bool mbTestLine;

	// CgsTriangleCollisionDebugComponent.h:187
	bool mbNeedToInitLinePosition;

	// CgsTriangleCollisionDebugComponent.h:188
	SceneManagerDebugComponent::Vector3 mLineStartPosition;

	// CgsTriangleCollisionDebugComponent.h:189
	SceneManagerDebugComponent::Vector3 mLineEndPosition;

	// CgsTriangleCollisionDebugComponent.h:190
	int32_t miLineTestPerfMon;

	// CgsTriangleCollisionDebugComponent.h:191
	int32_t miLineTestGetListsPerfMon;

	// CgsTriangleCollisionDebugComponent.h:192
	int32_t miLineTestProcessSoupsPerfMon;

	// CgsTriangleCollisionDebugComponent.h:194
	bool mbTestBox;

	// CgsTriangleCollisionDebugComponent.h:195
	bool mbNeedToInitBoxPos;

	// CgsTriangleCollisionDebugComponent.h:196
	SceneManagerDebugComponent::Vector3 mBoxPos;

	// CgsTriangleCollisionDebugComponent.h:197
	SceneManagerDebugComponent::Vector3 mBoxSize;

	// CgsTriangleCollisionDebugComponent.h:198
	SceneManagerDebugComponent::Vector3 mBoxOrientation;

	// CgsTriangleCollisionDebugComponent.h:199
	uint32_t muBoxTestCycles;

	// CgsTriangleCollisionDebugComponent.h:200
	int32_t miNumBoxTests;

	// CgsTriangleCollisionDebugComponent.h:201
	uint32_t muBoxTestCyclesPerTriangle;

	// CgsTriangleCollisionDebugComponent.h:202
	float32_t mfBoxTestTime;

	// CgsTriangleCollisionDebugComponent.h:203
	float32_t mfBoxTestPercent;

	// CgsTriangleCollisionDebugComponent.h:205
	bool mbTestSweptSphere;

	// CgsTriangleCollisionDebugComponent.h:206
	bool mbNeedToInitSweptSpherePos;

	// CgsTriangleCollisionDebugComponent.h:207
	SceneManagerDebugComponent::Vector3 mSweptSpherePos;

	// CgsTriangleCollisionDebugComponent.h:208
	float32_t mSweptSphereSize;

	// CgsTriangleCollisionDebugComponent.h:209
	SceneManagerDebugComponent::Vector3 mSweptSphereVelocity;

	// CgsTriangleCollisionDebugComponent.h:211
	extern const int32_t KI_MAX_NUM_LEVELS = 8;

	// CgsTriangleCollisionDebugComponent.h:212
	extern const int32_t KI_SPACIAL_BUFFER_SIZE = 2097152;

	// CgsTriangleCollisionDebugComponent.h:214
	int32_t miMaxLevelToDraw;

	// CgsTriangleCollisionDebugComponent.h:215
	int32_t miMinLevelToDraw;

	// CgsTriangleCollisionDebugComponent.h:216
	char * mpcSpacialBuffer;

	// CgsTriangleCollisionDebugComponent.h:217
	int32_t miNumLevels;

	// CgsTriangleCollisionDebugComponent.h:218
	int32_t miLastNumLevels;

	// CgsTriangleCollisionDebugComponent.h:219
	int32_t miMemUse;

	// CgsTriangleCollisionDebugComponent.h:220
	int32_t miNumListsSearched;

	// CgsTriangleCollisionDebugComponent.h:222
	LinearMalloc mMalloc;

	// CgsTriangleCollisionDebugComponent.h:225
	float32_t mfSoupDrawDistance;

	// CgsTriangleCollisionDebugComponent.cpp:64
	extern DrawCollisionPolyCallbackData[4] saDrawPolyCallbacks;

	// CgsTriangleCollisionDebugComponent.cpp:61
	extern int32_t siNumDrawPolyCallbacks;

public:
	// CgsTriangleCollisionDebugComponent.cpp:88
	void Construct(const TriangleCollisionManager *);

	// CgsTriangleCollisionDebugComponent.cpp:164
	void Destruct();

	// CgsTriangleCollisionDebugComponent.cpp:228
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// CgsTriangleCollisionDebugComponent.cpp:182
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// CgsTriangleCollisionDebugComponent.cpp:1470
	bool RegisterDrawCollisionPolyCallback(DrawCollisionPolyCallbackData::DrawCollisionPolyCallback *, void *);

protected:
	// CgsTriangleCollisionDebugComponent.h:358
	virtual const char * GetPath() const;

	// CgsTriangleCollisionDebugComponent.h:364
	virtual const char * GetName() const;

	// CgsTriangleCollisionDebugComponent.cpp:248
	virtual void OnActivate();

private:
	// CgsTriangleCollisionDebugComponent.cpp:519
	// Declaration
	void TestPolySoupSphereCollision(CgsDev::Debug3DImmediateRender *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriangleCollisionDebugComponent.cpp:521
		using namespace CgsGeometric;

	}

	// CgsTriangleCollisionDebugComponent.cpp:637
	void TestPolySoupLineCollision(CgsDev::Debug3DImmediateRender *);

	// CgsTriangleCollisionDebugComponent.cpp:755
	// Declaration
	void TestPolySoupBoxCollision(CgsDev::Debug3DImmediateRender *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriangleCollisionDebugComponent.cpp:765
		using namespace CgsGeometric;

	}

	// CgsTriangleCollisionDebugComponent.cpp:884
	// Declaration
	void TestPolySoupSweptSphereCollision(CgsDev::Debug3DImmediateRender *, CgsDev::Debug2DImmediateRender *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriangleCollisionDebugComponent.cpp:895
		using namespace CgsGeometric;

	}

	// CgsTriangleCollisionDebugComponent.cpp:383
	// Declaration
	void BuildSpacialMap() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriangleCollisionDebugComponent.cpp:385
		using namespace CgsGeometric;

		// CgsTriangleCollisionDebugComponent.cpp:386
		using namespace rw::math::vpu;

	}

	// CgsTriangleCollisionDebugComponent.cpp:418
	void DrawSpacialMapQuery(CgsDev::Debug3DImmediateRender *, AxisAlignedBoxArg);

	// CgsTriangleCollisionDebugComponent.cpp:499
	uint16_t DoSpacialMapQuery(uint16_t *, AxisAlignedBoxArg);

	// CgsTriangleCollisionDebugComponent.cpp:1025
	// Declaration
	void DrawPolySoups(CgsDev::Debug3DImmediateRender *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriangleCollisionDebugComponent.cpp:1027
		using namespace CgsGeometric;

	}

	// CgsTriangleCollisionDebugComponent.cpp:1132
	// Declaration
	void DrawPolySoupPoly(CgsDev::Debug3DImmediateRender *, const PolygonSoup *, int32_t, uint8_t, bool) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriangleCollisionDebugComponent.cpp:1134
		using namespace CgsGeometric;

	}

	// CgsTriangleCollisionDebugComponent.cpp:1353
	void UpdateViewFrustum(CgsDev::Debug3DImmediateRender *);

	// CgsTriangleCollisionDebugComponent.cpp:1296
	bool IsPolyVisible(const rw::math::vpu::Vector3 *, int32_t, CgsDev::Debug3DImmediateRender *);

	// CgsTriangleCollisionDebugComponent.cpp:1514
	void DrawCollisionPoly(CgsDev::Debug3DImmediateRender *, const rw::math::vpu::Vector3 *, int32_t, Vector3, uint32_t, int32_t);

	// CgsTriangleCollisionDebugComponent.h:350
	DrawCollisionPolyCallbackData * GetDrawPolyCallbackData(int32_t);

}

// CgsTriangleCollisionDebugComponent.h:211
extern const int32_t KI_MAX_NUM_LEVELS = 8;

// CgsTriangleCollisionDebugComponent.h:212
extern const int32_t KI_SPACIAL_BUFFER_SIZE = 2097152;


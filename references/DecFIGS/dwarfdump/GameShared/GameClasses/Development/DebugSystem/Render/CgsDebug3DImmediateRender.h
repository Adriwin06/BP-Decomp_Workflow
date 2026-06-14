// CgsStrStream.h:39
namespace CgsDev {
	// Declaration
	struct Debug3DImmediateRender {
		// CgsDebug3DImmediateRender.h:132
		enum ZTestEnable {
			E_ZTEST_ON = 0,
			E_ZTEST_OFF = 1,
			E_ZTEST_COUNT = 2,
		}

		// CgsDebug3DImmediateRender.h:158
		enum ProjectionMode {
			E_PROJECTION_2D = 0,
			E_PROJECTION_3D = 1,
			E_PROJECTION_COUNT = 2,
		}

		// CgsDebug3DImmediateRender.h:168
		enum DrawingMode {
			E_DRAWING_LINES = 0,
			E_DRAWING_TRIANGLES = 1,
			E_DRAWING_QUADS = 2,
			E_DRAWING_TRISTRIP_SOLID = 3,
			E_DRAWING_TRISTRIP_LINES = 4,
			E_DRAWING_FONT = 5,
			E_DRAWING_COUNT = 6,
		}

	}

}

// CgsDebug3DImmediateRender.h:64
struct CgsDev::Debug3DImmediateRender {
private:
	// CgsDebug3DImmediateRender.h:164
	CgsDev::Debug3DImmediateRender::ProjectionMode meProjectionMode;

	// CgsDebug3DImmediateRender.h:178
	CgsDev::Debug3DImmediateRender::DrawingMode meDrawingMode;

	// CgsDebug3DImmediateRender.h:181
	CgsDev::Debug3DImmediateRender::ZTestEnable meZTestEnable;

	// CgsDebug3DImmediateRender.h:188
	extern const int32_t KI_NUMCIRCLESEGMENTS;

	// CgsDebug3DImmediateRender.h:189
	extern const int32_t KI_NUMCYLINDERSEGMENTS;

	// CgsDebug3DImmediateRender.h:190
	extern const int32_t KI_NUMCAPSULESEGMENTS;

	// CgsDebug3DImmediateRender.h:191
	extern const int8_t[24] KAI_WIREFRAMECUBEINDICES;

	// CgsDebug3DImmediateRender.h:192
	extern const int8_t[32] KAI_SOLIDCUBEINDICES;

	// CgsDebug3DImmediateRender.h:193
	extern const float32_t KF_POINTBOXRADIUS;

	// CgsDebug3DImmediateRender.h:194
	extern const float32_t KF_ARROWHEAD_SIZE_RATIO;

	// CgsDebug3DImmediateRender.h:195
	extern const float32_t KF_ARROWHEAD_MAX_SIZE;

	// CgsDebug3DImmediateRender.h:198
	extern const int32_t KI_SPHERE_MESH_SIZE = 4;

	// CgsDebug3DImmediateRender.h:199
	extern const int32_t KI_SPHERE_VERTEX_COUNT = 34;

	// CgsDebug3DImmediateRender.h:200
	extern const int32_t KI_SPHERE_INDEX_COUNT = 192;

	// CgsDebug3DImmediateRender.h:203
	Vector3 mPointBoxRadius;

	// CgsDebug3DImmediateRender.h:204
	float32_t mfVirtualScreenWidth;

	// CgsDebug3DImmediateRender.h:205
	float32_t mfVirtualScreenHeight;

	// CgsDebug3DImmediateRender.h:224
	CgsGraphics::Im3dRenderBuffer * mpRenderBuffer;

	// CgsDebug3DImmediateRender.h:225
	SafeResourceHandle<CgsResource::Font> mpFont;

	// CgsDebug3DImmediateRender.h:226
	VectorFont mVectorFont;

	// CgsDebug3DImmediateRender.h:228
	extern const int32_t KI_VERTEX_BUFFER_SIZE = 1000;

	// CgsDebug3DImmediateRender.h:229
	Im3dVertex[1000] maIm3dVertsArray;

	// CgsDebug3DImmediateRender.h:230
	int16_t miIm3dVertsHead;

	// CgsDebug3DImmediateRender.h:233
	Matrix44 mViewProjectionMatrix;

	// CgsDebug3DImmediateRender.h:234
	Vector3 mCameraPosition;

	// CgsDebug3DImmediateRender.h:237
	TextRenderer mTextRenderer;

	// CgsDebug3DImmediateRender.h:238
	renderengine::PrimitiveType mePrimitiveType;

	// CgsDebug3DImmediateRender.h:241
	uint8_t[192] maSphereIndices;

public:
	// CgsDebug3DImmediateRender.h:69
	void Construct(rw::IResourceAllocator *, float32_t, float32_t);

	// CgsDebug3DImmediateRender.h:72
	void Destruct();

	// CgsDebug3DImmediateRender.h:77
	void Begin(const rw::math::vpu::Matrix44 &, Vector3);

	// CgsDebug3DImmediateRender.h:80
	void End();

	// CgsDebug3DImmediateRender.h:85
	Vector2 GetVirtualScreenSize() const;

	// CgsDebug3DImmediateRender.h:88
	Vector3 GetCameraPosition() const;

	// CgsDebug3DImmediateRender.h:91
	const rw::math::vpu::Matrix44 GetViewProjectionMatrix() const;

	// CgsDebug3DImmediateRender.h:94
	void DrawText(Vector3, const char *, float32_t, RGBA);

	// CgsDebug3DImmediateRender.h:95
	void DrawLine(Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:96
	void DrawHollowTriangle(Vector3, Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:97
	void DrawPoint(Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:98
	void DrawQuad(Vector3, Vector3, Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:99
	void DrawAngleDeg(Vector3, float32_t, RGBA);

	// CgsDebug3DImmediateRender.h:100
	void DrawSolidQuad(Vector3, Vector3, Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:101
	void DrawSolidTriangle(Vector3, Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:102
	void DrawAngleRad(Vector3, float32_t, RGBA);

	// CgsDebug3DImmediateRender.h:103
	void DrawAxis(Matrix44Affine);

	// CgsDebug3DImmediateRender.h:104
	void DrawSphere(Vector3, float32_t, RGBA);

	// CgsDebug3DImmediateRender.h:105
	void DrawSolidSphere(Vector3, float32_t, RGBA);

	// CgsDebug3DImmediateRender.h:106
	void DrawHollowSphere(Vector3, float32_t, RGBA);

	// CgsDebug3DImmediateRender.h:107
	void DrawCircle(Matrix44Affine, float32_t, RGBA);

	// CgsDebug3DImmediateRender.h:108
	void DrawCircle(Vector3, Vector3, float32_t, RGBA);

	// CgsDebug3DImmediateRender.h:109
	void DrawBox(Vector3, Vector3, Matrix44Affine, RGBA);

	// CgsDebug3DImmediateRender.h:110
	void DrawBox(Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:111
	void DrawSolidBox(Vector3, Vector3, Matrix44Affine, RGBA);

	// CgsDebug3DImmediateRender.h:112
	void DrawSolidBox(Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:113
	void DrawArrow(Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:114
	void DrawSolidArrow(Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:115
	void DrawCapsule(Vector3, Vector3, float32_t, RGBA);

	// CgsDebug3DImmediateRender.h:116
	void DrawCylinder(Vector3, Vector3, float32_t, RGBA);

	// CgsDebug3DImmediateRender.h:117
	void DrawTriangle(Vector3, Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:119
	void DrawVolume(const CapsuleVolume *, Matrix44Affine, RGBA);

	// CgsDebug3DImmediateRender.h:120
	void DrawVolume(const SphereVolume *, Matrix44Affine, RGBA);

	// CgsDebug3DImmediateRender.h:121
	void DrawVolume(const CylinderVolume *, Matrix44Affine, RGBA);

	// CgsDebug3DImmediateRender.h:122
	void DrawVolume(const BoxVolume *, Matrix44Affine, RGBA);

	// CgsDebug3DImmediateRender.h:123
	void DrawVolume(const TriangleVolume *, Matrix44Affine, RGBA);

	// CgsDebug3DImmediateRender.h:125
	float32_t CalcTextWidth(const char *, float32_t) const;

	// CgsDebug3DImmediateRender.h:126
	Vector2 CalcTextExtent(const char *, float32_t) const;

	// CgsDebug3DImmediateRender.h:128
	void Draw2DLineForVectorFont(Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:138
	void SetZTestEnable(CgsDev::Debug3DImmediateRender::ZTestEnable);

	// CgsDebug3DImmediateRender.h:143
	void SetRenderBuffer(CgsGraphics::Im3dRenderBuffer *);

	// CgsDebug3DImmediateRender.h:147
	void SetDebugFont(SafeResourceHandle<CgsResource::Font> &);

	// CgsDebug3DImmediateRender.h:149
	RGBA CalculateInterpolatedColour(RGBA, RGBA, float32_t);

	// CgsDebug3DImmediateRender.h:152
	void Debug3DImmediateRender();

private:
	// CgsDebug3DImmediateRender.h:165
	void SetProjectionMode(CgsDev::Debug3DImmediateRender::ProjectionMode);

	// CgsDebug3DImmediateRender.h:179
	void SetDrawingMode(CgsDev::Debug3DImmediateRender::DrawingMode);

	// CgsDebug3DImmediateRender.h:184
	void SetDebugRenderStates();

	// CgsDebug3DImmediateRender.h:185
	void CreateDebugRenderStates(rw::IResourceAllocator *);

	// CgsDebug3DImmediateRender.h:209
	Vector3 Vert2D(Vector2);

	// CgsDebug3DImmediateRender.h:212
	void AddVertex(Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:213
	void AddLine(Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:214
	void AddTriangle(Vector3, Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:215
	void AddQuad(Vector3, Vector3, Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:216
	void DispatchVertices();

	// CgsDebug3DImmediateRender.h:219
	void BuildSphereIndices();

	// CgsDebug3DImmediateRender.h:220
	void GetSphereVertices(Vector3 *, Vector3, float32_t);

	// CgsDebug3DImmediateRender.h:248
	Debug3DImmediateRender & operator=(const Debug3DImmediateRender &);

	// CgsDebug3DImmediateRender.h:250
	void Debug3DImmediateRender(const Debug3DImmediateRender &);

}

// CgsDebug3DImmediateRender.h:188
extern const int32_t KI_NUMCIRCLESEGMENTS;

// CgsDebug3DImmediateRender.h:189
extern const int32_t KI_NUMCYLINDERSEGMENTS;

// CgsDebug3DImmediateRender.h:190
extern const int32_t KI_NUMCAPSULESEGMENTS;

// CgsDebug3DImmediateRender.h:191
extern const int8_t[24] KAI_WIREFRAMECUBEINDICES;

// CgsDebug3DImmediateRender.h:192
extern const int8_t[32] KAI_SOLIDCUBEINDICES;

// CgsDebug3DImmediateRender.h:193
extern const float32_t KF_POINTBOXRADIUS;

// CgsDebug3DImmediateRender.h:194
extern const float32_t KF_ARROWHEAD_SIZE_RATIO;

// CgsDebug3DImmediateRender.h:195
extern const float32_t KF_ARROWHEAD_MAX_SIZE;

// CgsDebug3DImmediateRender.h:198
extern const int32_t KI_SPHERE_MESH_SIZE = 4;

// CgsDebug3DImmediateRender.h:200
extern const int32_t KI_SPHERE_INDEX_COUNT = 192;

// CgsDebug3DImmediateRender.h:228
extern const int32_t KI_VERTEX_BUFFER_SIZE = 1000;

// CgsDebug3DImmediateRender.h:64
struct CgsDev::Debug3DImmediateRender {
private:
	// CgsDebug3DImmediateRender.h:164
	CgsDev::Debug3DImmediateRender::ProjectionMode meProjectionMode;

	// CgsDebug3DImmediateRender.h:178
	CgsDev::Debug3DImmediateRender::DrawingMode meDrawingMode;

	// CgsDebug3DImmediateRender.h:181
	CgsDev::Debug3DImmediateRender::ZTestEnable meZTestEnable;

	// CgsDebug3DImmediateRender.h:188
	extern const int32_t KI_NUMCIRCLESEGMENTS;

	// CgsDebug3DImmediateRender.h:189
	extern const int32_t KI_NUMCYLINDERSEGMENTS;

	// CgsDebug3DImmediateRender.h:190
	extern const int32_t KI_NUMCAPSULESEGMENTS;

	// CgsDebug3DImmediateRender.h:191
	extern const int8_t[24] KAI_WIREFRAMECUBEINDICES;

	// CgsDebug3DImmediateRender.h:192
	extern const int8_t[32] KAI_SOLIDCUBEINDICES;

	// CgsDebug3DImmediateRender.h:193
	extern const float32_t KF_POINTBOXRADIUS;

	// CgsDebug3DImmediateRender.h:194
	extern const float32_t KF_ARROWHEAD_SIZE_RATIO;

	// CgsDebug3DImmediateRender.h:195
	extern const float32_t KF_ARROWHEAD_MAX_SIZE;

	// CgsDebug3DImmediateRender.h:198
	extern const int32_t KI_SPHERE_MESH_SIZE = 4;

	// CgsDebug3DImmediateRender.h:199
	extern const int32_t KI_SPHERE_VERTEX_COUNT = 34;

	// CgsDebug3DImmediateRender.h:200
	extern const int32_t KI_SPHERE_INDEX_COUNT = 192;

	// CgsDebug3DImmediateRender.h:203
	Vector3 mPointBoxRadius;

	// CgsDebug3DImmediateRender.h:204
	float32_t mfVirtualScreenWidth;

	// CgsDebug3DImmediateRender.h:205
	float32_t mfVirtualScreenHeight;

	// CgsDebug3DImmediateRender.h:224
	CgsGraphics::Im3dRenderBuffer * mpRenderBuffer;

	// CgsDebug3DImmediateRender.h:225
	SafeResourceHandle<CgsResource::Font> mpFont;

	// CgsDebug3DImmediateRender.h:226
	VectorFont mVectorFont;

	// CgsDebug3DImmediateRender.h:228
	extern const int32_t KI_VERTEX_BUFFER_SIZE = 1000;

	// CgsDebug3DImmediateRender.h:229
	Im3dVertex[1000] maIm3dVertsArray;

	// CgsDebug3DImmediateRender.h:230
	int16_t miIm3dVertsHead;

	// CgsDebug3DImmediateRender.h:233
	Matrix44 mViewProjectionMatrix;

	// CgsDebug3DImmediateRender.h:234
	Vector3 mCameraPosition;

	// CgsDebug3DImmediateRender.h:237
	TextRenderer mTextRenderer;

	// CgsDebug3DImmediateRender.h:238
	renderengine::PrimitiveType mePrimitiveType;

	// CgsDebug3DImmediateRender.h:241
	uint8_t[192] maSphereIndices;

public:
	// CgsDebug3DImmediateRender.h:69
	void Construct(rw::IResourceAllocator *, float32_t, float32_t);

	// CgsDebug3DImmediateRender.h:72
	void Destruct();

	// CgsDebug3DImmediateRender.h:77
	void Begin(const rw::math::vpu::Matrix44 &, Vector3);

	// CgsDebug3DImmediateRender.h:80
	void End();

	// CgsDebug3DImmediateRender.h:85
	Vector2 GetVirtualScreenSize() const;

	// CgsDebug3DImmediateRender.h:88
	Vector3 GetCameraPosition() const;

	// CgsDebug3DImmediateRender.h:91
	const rw::math::vpu::Matrix44 GetViewProjectionMatrix() const;

	// CgsDebug3DImmediateRender.h:94
	void DrawText(Vector3, const char *, float32_t, RGBA);

	// CgsDebug3DImmediateRender.h:95
	void DrawLine(Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:96
	void DrawHollowTriangle(Vector3, Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:97
	void DrawPoint(Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:98
	void DrawQuad(Vector3, Vector3, Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:99
	void DrawAngleDeg(Vector3, float32_t, RGBA);

	// CgsDebug3DImmediateRender.h:100
	void DrawSolidQuad(Vector3, Vector3, Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:101
	void DrawSolidTriangle(Vector3, Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:102
	void DrawAngleRad(Vector3, float32_t, RGBA);

	// CgsDebug3DImmediateRender.h:103
	void DrawAxis(Matrix44Affine);

	// CgsDebug3DImmediateRender.h:104
	void DrawSphere(Vector3, float32_t, RGBA);

	// CgsDebug3DImmediateRender.h:105
	void DrawSolidSphere(Vector3, float32_t, RGBA);

	// CgsDebug3DImmediateRender.h:106
	void DrawHollowSphere(Vector3, float32_t, RGBA);

	// CgsDebug3DImmediateRender.h:107
	void DrawCircle(Matrix44Affine, float32_t, RGBA);

	// CgsDebug3DImmediateRender.h:108
	void DrawCircle(Vector3, Vector3, float32_t, RGBA);

	// CgsDebug3DImmediateRender.h:109
	void DrawBox(Vector3, Vector3, Matrix44Affine, RGBA);

	// CgsDebug3DImmediateRender.h:110
	void DrawBox(Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:111
	void DrawSolidBox(Vector3, Vector3, Matrix44Affine, RGBA);

	// CgsDebug3DImmediateRender.h:112
	void DrawSolidBox(Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:113
	void DrawArrow(Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:114
	void DrawSolidArrow(Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:115
	void DrawCapsule(Vector3, Vector3, float32_t, RGBA);

	// CgsDebug3DImmediateRender.h:116
	void DrawCylinder(Vector3, Vector3, float32_t, RGBA);

	// CgsDebug3DImmediateRender.h:117
	void DrawTriangle(Vector3, Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:119
	void DrawVolume(const rw::collision::CapsuleVolume *, Matrix44Affine, RGBA);

	// CgsDebug3DImmediateRender.h:120
	void DrawVolume(const rw::collision::SphereVolume *, Matrix44Affine, RGBA);

	// CgsDebug3DImmediateRender.h:121
	void DrawVolume(const rw::collision::CylinderVolume *, Matrix44Affine, RGBA);

	// CgsDebug3DImmediateRender.h:122
	void DrawVolume(const rw::collision::BoxVolume *, Matrix44Affine, RGBA);

	// CgsDebug3DImmediateRender.h:123
	void DrawVolume(const rw::collision::TriangleVolume *, Matrix44Affine, RGBA);

	// CgsDebug3DImmediateRender.h:125
	float32_t CalcTextWidth(const char *, float32_t) const;

	// CgsDebug3DImmediateRender.h:126
	Vector2 CalcTextExtent(const char *, float32_t) const;

	// CgsDebug3DImmediateRender.h:128
	void Draw2DLineForVectorFont(Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:138
	void SetZTestEnable(CgsDev::Debug3DImmediateRender::ZTestEnable);

	// CgsDebug3DImmediateRender.h:143
	void SetRenderBuffer(CgsGraphics::Im3dRenderBuffer *);

	// CgsDebug3DImmediateRender.h:147
	void SetDebugFont(SafeResourceHandle<CgsResource::Font> &);

	// CgsDebug3DImmediateRender.h:149
	RGBA CalculateInterpolatedColour(RGBA, RGBA, float32_t);

	// CgsDebug3DImmediateRender.h:152
	void Debug3DImmediateRender();

private:
	// CgsDebug3DImmediateRender.h:165
	void SetProjectionMode(CgsDev::Debug3DImmediateRender::ProjectionMode);

	// CgsDebug3DImmediateRender.h:179
	void SetDrawingMode(CgsDev::Debug3DImmediateRender::DrawingMode);

	// CgsDebug3DImmediateRender.h:184
	void SetDebugRenderStates();

	// CgsDebug3DImmediateRender.h:185
	void CreateDebugRenderStates(rw::IResourceAllocator *);

	// CgsDebug3DImmediateRender.h:209
	Vector3 Vert2D(Vector2);

	// CgsDebug3DImmediateRender.h:212
	void AddVertex(Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:213
	void AddLine(Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:214
	void AddTriangle(Vector3, Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:215
	void AddQuad(Vector3, Vector3, Vector3, Vector3, RGBA);

	// CgsDebug3DImmediateRender.h:216
	void DispatchVertices();

	// CgsDebug3DImmediateRender.h:219
	void BuildSphereIndices();

	// CgsDebug3DImmediateRender.h:220
	void GetSphereVertices(Vector3 *, Vector3, float32_t);

	// CgsDebug3DImmediateRender.h:248
	Debug3DImmediateRender & operator=(const Debug3DImmediateRender &);

	// CgsDebug3DImmediateRender.h:250
	void Debug3DImmediateRender(const Debug3DImmediateRender &);

}

// CgsDebug3DImmediateRender.h:199
extern const int32_t KI_SPHERE_VERTEX_COUNT = 34;


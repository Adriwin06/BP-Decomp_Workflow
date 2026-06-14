// CgsStrStream.h:39
namespace CgsDev {
	// Declaration
	struct Debug2DImmediateRender {
		// CgsDebug2DImmediateRender.h:155
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

// CgsDebug2DImmediateRender.h:57
struct CgsDev::DebugGraph {
	// CgsDebug2DImmediateRender.h:66
	char[256] macName;

	// CgsDebug2DImmediateRender.h:67
	float32_t mfMin;

	// CgsDebug2DImmediateRender.h:68
	float32_t mfMax;

	// CgsDebug2DImmediateRender.h:46
	typedef FixedRingBuffer<float32_t,256> GraphRingBuffer;

	// CgsDebug2DImmediateRender.h:69
	DebugGraph::GraphRingBuffer mBuffer;

public:
	// CgsDebug2DImmediateRender.h:61
	void Construct();

	// CgsDebug2DImmediateRender.h:64
	void Clear();

}

// CgsDebug2DImmediateRender.h:81
struct CgsDev::Debug2DImmediateRender {
private:
	// CgsDebug2DImmediateRender.h:165
	CgsDev::Debug2DImmediateRender::DrawingMode meDrawingMode;

	// CgsDebug2DImmediateRender.h:193
	SafeResourceHandle<CgsResource::Font> mpFont;

	// CgsDebug2DImmediateRender.h:194
	VectorFont mVectorFont;

	// CgsDebug2DImmediateRender.h:196
	CgsGraphics::Im2dRenderBuffer * mpRenderBuffer;

	// CgsDebug2DImmediateRender.h:197
	float32_t mfVirtualScreenWidth;

	// CgsDebug2DImmediateRender.h:198
	float32_t mfVirtualScreenHeight;

	// CgsDebug2DImmediateRender.h:201
	extern const int32_t KI_VERTEX_BUFFER_SIZE = 1000;

	// CgsDebug2DImmediateRender.h:202
	ImCommandBatchTransformTextureBlendRender::Im2dVertex[1000] maIm2dVertsArray;

	// CgsDebug2DImmediateRender.h:203
	int16_t miIm2dVertsHead;

	// CgsDebug2DImmediateRender.h:206
	TextRenderer mTextRenderer;

	// CgsDebug2DImmediateRender.h:207
	renderengine::PrimitiveType mePrimitiveType;

public:
	// CgsDebug2DImmediateRender.h:86
	void Construct(rw::IResourceAllocator *, float32_t, float32_t);

	// CgsDebug2DImmediateRender.h:89
	void Destruct();

	// CgsDebug2DImmediateRender.h:94
	void Begin();

	// CgsDebug2DImmediateRender.h:97
	void End();

	// CgsDebug2DImmediateRender.h:102
	Vector2 GetVirtualScreenSize() const;

	// CgsDebug2DImmediateRender.h:105
	void DrawText(const char *, Vector2, float32_t, RGBA, bool);

	// CgsDebug2DImmediateRender.h:106
	void DrawLine(Vector2, Vector2, RGBA);

	// CgsDebug2DImmediateRender.h:107
	void DrawBox(Vector2, Vector2, RGBA);

	// CgsDebug2DImmediateRender.h:108
	void DrawFrame(Vector2, Vector2, RGBA);

	// CgsDebug2DImmediateRender.h:109
	void DrawWirePolygon(const rw::math::vpu::Vector2 *, uint32_t, RGBA);

	// CgsDebug2DImmediateRender.h:110
	void DrawSolidConvexPolygon(const rw::math::vpu::Vector2 *, uint32_t, RGBA);

	// CgsDebug2DImmediateRender.h:111
	void DrawCircle(Vector2, float32_t, int32_t, RGBA);

	// CgsDebug2DImmediateRender.h:114
	void DrawText(const char *, float32_t, float32_t, float32_t, RGBA);

	// CgsDebug2DImmediateRender.h:115
	void DrawBox(float32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebug2DImmediateRender.h:116
	void DrawFrame(float32_t, float32_t, float32_t, float32_t, RGBA, float32_t);

	// CgsDebug2DImmediateRender.h:117
	void DrawTextInBox(const char *, float32_t, float32_t, float32_t, float32_t, float32_t, RGBA, float32_t);

	// CgsDebug2DImmediateRender.h:118
	void DrawAlignedText(const char *, float32_t, float32_t, float32_t, RGBA, float32_t);

	// CgsDebug2DImmediateRender.h:119
	void DrawHorizontalBar(Vector2, Vector2, float32_t, float32_t, RGBA, RGBA);

	// CgsDebug2DImmediateRender.h:120
	void DrawTextWithBackground(const char *, float32_t, float32_t, float32_t, RGBA, RGBA, float32_t);

	// CgsDebug2DImmediateRender.h:123
	void DrawValue(int32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebug2DImmediateRender.h:124
	void DrawValue(float32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebug2DImmediateRender.h:125
	void Draw2DValue(float32_t, float32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebug2DImmediateRender.h:126
	void DrawDataSize(int32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebug2DImmediateRender.h:127
	void DrawFraction(int32_t, int32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebug2DImmediateRender.h:128
	float32_t DrawGraph(CgsDev::DebugGraph *, const Vector2Template<float> &, const Vector2Template<float> &, RGBA, RGBA);

	// CgsDebug2DImmediateRender.h:130
	float32_t CalcTextWidth(const char *, float32_t) const;

	// CgsDebug2DImmediateRender.h:131
	Vector2 CalcTextExtent(const char *, float32_t) const;

	// CgsDebug2DImmediateRender.h:134
	bool Is2DPointOnScreen(Vector2) const;

	// CgsDebug2DImmediateRender.h:135
	bool Is2DTextOnScreen(const char *, Vector2, float32_t) const;

	// CgsDebug2DImmediateRender.h:136
	bool Is2DLineOnScreen(Vector2, Vector2) const;

	// CgsDebug2DImmediateRender.h:137
	bool Is2DBoxOnScreen(Vector2, Vector2) const;

	// CgsDebug2DImmediateRender.h:138
	bool Is2DPolygonOnScreen(const rw::math::vpu::Vector2 *, uint32_t) const;

	// CgsDebug2DImmediateRender.h:143
	void SetRenderBuffer(CgsGraphics::Im2dRenderBuffer *);

	// CgsDebug2DImmediateRender.h:147
	void SetDebugFont(SafeResourceHandle<CgsResource::Font> &);

	// CgsDebug2DImmediateRender.h:150
	void Debug2DImmediateRender();

private:
	// CgsDebug2DImmediateRender.h:166
	void SetDrawingMode(CgsDev::Debug2DImmediateRender::DrawingMode);

	// CgsDebug2DImmediateRender.h:169
	void SetDebugRenderStates();

	// CgsDebug2DImmediateRender.h:172
	void AddVertex(Vector2, RGBA);

	// CgsDebug2DImmediateRender.h:173
	void AddLine(Vector2, Vector2, RGBA);

	// CgsDebug2DImmediateRender.h:174
	void AddTriangle(Vector2, Vector2, Vector2, RGBA);

	// CgsDebug2DImmediateRender.h:175
	void AddQuad(Vector2, Vector2, Vector2, Vector2, RGBA);

	// CgsDebug2DImmediateRender.h:176
	void DispatchVertices();

	// CgsDebug2DImmediateRender.h:183
	bool Do2DLinesIntersect(Vector2, Vector2, Vector2, Vector2) const;

	// CgsDebug2DImmediateRender.h:190
	bool Do2DBoxesIntersect(Vector2, Vector2, Vector2, Vector2) const;

	// CgsDebug2DImmediateRender.h:214
	Debug2DImmediateRender & operator=(const Debug2DImmediateRender &);

	// CgsDebug2DImmediateRender.h:216
	void Debug2DImmediateRender(const Debug2DImmediateRender &);

}

// CgsDebug2DImmediateRender.h:201
extern const int32_t KI_VERTEX_BUFFER_SIZE = 1000;

// CgsDebug2DImmediateRender.h:81
struct CgsDev::Debug2DImmediateRender {
private:
	// CgsDebug2DImmediateRender.h:165
	CgsDev::Debug2DImmediateRender::DrawingMode meDrawingMode;

	// CgsDebug2DImmediateRender.h:193
	SafeResourceHandle<CgsResource::Font> mpFont;

	// CgsDebug2DImmediateRender.h:194
	VectorFont mVectorFont;

	// CgsDebug2DImmediateRender.h:196
	CgsGraphics::Im2dRenderBuffer * mpRenderBuffer;

	// CgsDebug2DImmediateRender.h:197
	float32_t mfVirtualScreenWidth;

	// CgsDebug2DImmediateRender.h:198
	float32_t mfVirtualScreenHeight;

	// CgsDebug2DImmediateRender.h:201
	extern const int32_t KI_VERTEX_BUFFER_SIZE = 1000;

	// CgsDebug2DImmediateRender.h:202
	TextRenderer::Im2dVertex[1000] maIm2dVertsArray;

	// CgsDebug2DImmediateRender.h:203
	int16_t miIm2dVertsHead;

	// CgsDebug2DImmediateRender.h:206
	TextRenderer mTextRenderer;

	// CgsDebug2DImmediateRender.h:207
	renderengine::PrimitiveType mePrimitiveType;

public:
	// CgsDebug2DImmediateRender.h:86
	void Construct(rw::IResourceAllocator *, float32_t, float32_t);

	// CgsDebug2DImmediateRender.h:89
	void Destruct();

	// CgsDebug2DImmediateRender.h:94
	void Begin();

	// CgsDebug2DImmediateRender.h:97
	void End();

	// CgsDebug2DImmediateRender.h:102
	Vector2 GetVirtualScreenSize() const;

	// CgsDebug2DImmediateRender.h:105
	void DrawText(const char *, Vector2, float32_t, RGBA, bool);

	// CgsDebug2DImmediateRender.h:106
	void DrawLine(Vector2, Vector2, RGBA);

	// CgsDebug2DImmediateRender.h:107
	void DrawBox(Vector2, Vector2, RGBA);

	// CgsDebug2DImmediateRender.h:108
	void DrawFrame(Vector2, Vector2, RGBA);

	// CgsDebug2DImmediateRender.h:109
	void DrawWirePolygon(const rw::math::vpu::Vector2 *, uint32_t, RGBA);

	// CgsDebug2DImmediateRender.h:110
	void DrawSolidConvexPolygon(const rw::math::vpu::Vector2 *, uint32_t, RGBA);

	// CgsDebug2DImmediateRender.h:111
	void DrawCircle(Vector2, float32_t, int32_t, RGBA);

	// CgsDebug2DImmediateRender.h:114
	void DrawText(const char *, float32_t, float32_t, float32_t, RGBA);

	// CgsDebug2DImmediateRender.h:115
	void DrawBox(float32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebug2DImmediateRender.h:116
	void DrawFrame(float32_t, float32_t, float32_t, float32_t, RGBA, float32_t);

	// CgsDebug2DImmediateRender.h:117
	void DrawTextInBox(const char *, float32_t, float32_t, float32_t, float32_t, float32_t, RGBA, float32_t);

	// CgsDebug2DImmediateRender.h:118
	void DrawAlignedText(const char *, float32_t, float32_t, float32_t, RGBA, float32_t);

	// CgsDebug2DImmediateRender.h:119
	void DrawHorizontalBar(Vector2, Vector2, float32_t, float32_t, RGBA, RGBA);

	// CgsDebug2DImmediateRender.h:120
	void DrawTextWithBackground(const char *, float32_t, float32_t, float32_t, RGBA, RGBA, float32_t);

	// CgsDebug2DImmediateRender.h:123
	void DrawValue(int32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebug2DImmediateRender.h:124
	void DrawValue(float32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebug2DImmediateRender.h:125
	void Draw2DValue(float32_t, float32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebug2DImmediateRender.h:126
	void DrawDataSize(int32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebug2DImmediateRender.h:127
	void DrawFraction(int32_t, int32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebug2DImmediateRender.h:128
	float32_t DrawGraph(CgsDev::DebugGraph *, const Vector2Template<float> &, const Vector2Template<float> &, RGBA, RGBA);

	// CgsDebug2DImmediateRender.h:130
	float32_t CalcTextWidth(const char *, float32_t) const;

	// CgsDebug2DImmediateRender.h:131
	Vector2 CalcTextExtent(const char *, float32_t) const;

	// CgsDebug2DImmediateRender.h:134
	bool Is2DPointOnScreen(Vector2) const;

	// CgsDebug2DImmediateRender.h:135
	bool Is2DTextOnScreen(const char *, Vector2, float32_t) const;

	// CgsDebug2DImmediateRender.h:136
	bool Is2DLineOnScreen(Vector2, Vector2) const;

	// CgsDebug2DImmediateRender.h:137
	bool Is2DBoxOnScreen(Vector2, Vector2) const;

	// CgsDebug2DImmediateRender.h:138
	bool Is2DPolygonOnScreen(const rw::math::vpu::Vector2 *, uint32_t) const;

	// CgsDebug2DImmediateRender.h:143
	void SetRenderBuffer(CgsGraphics::Im2dRenderBuffer *);

	// CgsDebug2DImmediateRender.h:147
	void SetDebugFont(SafeResourceHandle<CgsResource::Font> &);

	// CgsDebug2DImmediateRender.h:150
	void Debug2DImmediateRender();

private:
	// CgsDebug2DImmediateRender.h:166
	void SetDrawingMode(CgsDev::Debug2DImmediateRender::DrawingMode);

	// CgsDebug2DImmediateRender.h:169
	void SetDebugRenderStates();

	// CgsDebug2DImmediateRender.h:172
	void AddVertex(Vector2, RGBA);

	// CgsDebug2DImmediateRender.h:173
	void AddLine(Vector2, Vector2, RGBA);

	// CgsDebug2DImmediateRender.h:174
	void AddTriangle(Vector2, Vector2, Vector2, RGBA);

	// CgsDebug2DImmediateRender.h:175
	void AddQuad(Vector2, Vector2, Vector2, Vector2, RGBA);

	// CgsDebug2DImmediateRender.h:176
	void DispatchVertices();

	// CgsDebug2DImmediateRender.h:183
	bool Do2DLinesIntersect(Vector2, Vector2, Vector2, Vector2) const;

	// CgsDebug2DImmediateRender.h:190
	bool Do2DBoxesIntersect(Vector2, Vector2, Vector2, Vector2) const;

	// CgsDebug2DImmediateRender.h:214
	Debug2DImmediateRender & operator=(const Debug2DImmediateRender &);

	// CgsDebug2DImmediateRender.h:216
	void Debug2DImmediateRender(const Debug2DImmediateRender &);

}

// CgsDebug2DImmediateRender.h:81
struct CgsDev::Debug2DImmediateRender {
private:
	// CgsDebug2DImmediateRender.h:165
	CgsDev::Debug2DImmediateRender::DrawingMode meDrawingMode;

	// CgsDebug2DImmediateRender.h:193
	SafeResourceHandle<CgsResource::Font> mpFont;

	// CgsDebug2DImmediateRender.h:194
	VectorFont mVectorFont;

	// CgsDebug2DImmediateRender.h:196
	CgsGraphics::Im2dRenderBuffer * mpRenderBuffer;

	// CgsDebug2DImmediateRender.h:197
	float32_t mfVirtualScreenWidth;

	// CgsDebug2DImmediateRender.h:198
	float32_t mfVirtualScreenHeight;

	// CgsDebug2DImmediateRender.h:201
	extern const int32_t KI_VERTEX_BUFFER_SIZE = 1000;

	// CgsDebug2DImmediateRender.h:202
	GuiGeometryMesh::Im2dVertex[1000] maIm2dVertsArray;

	// CgsDebug2DImmediateRender.h:203
	int16_t miIm2dVertsHead;

	// CgsDebug2DImmediateRender.h:206
	TextRenderer mTextRenderer;

	// CgsDebug2DImmediateRender.h:207
	renderengine::PrimitiveType mePrimitiveType;

public:
	// CgsDebug2DImmediateRender.h:86
	void Construct(rw::IResourceAllocator *, float32_t, float32_t);

	// CgsDebug2DImmediateRender.h:89
	void Destruct();

	// CgsDebug2DImmediateRender.h:94
	void Begin();

	// CgsDebug2DImmediateRender.h:97
	void End();

	// CgsDebug2DImmediateRender.h:102
	Vector2 GetVirtualScreenSize() const;

	// CgsDebug2DImmediateRender.h:105
	void DrawText(const char *, Vector2, float32_t, RGBA, bool);

	// CgsDebug2DImmediateRender.h:106
	void DrawLine(Vector2, Vector2, RGBA);

	// CgsDebug2DImmediateRender.h:107
	void DrawBox(Vector2, Vector2, RGBA);

	// CgsDebug2DImmediateRender.h:108
	void DrawFrame(Vector2, Vector2, RGBA);

	// CgsDebug2DImmediateRender.h:109
	void DrawWirePolygon(const rw::math::vpu::Vector2 *, uint32_t, RGBA);

	// CgsDebug2DImmediateRender.h:110
	void DrawSolidConvexPolygon(const rw::math::vpu::Vector2 *, uint32_t, RGBA);

	// CgsDebug2DImmediateRender.h:111
	void DrawCircle(Vector2, float32_t, int32_t, RGBA);

	// CgsDebug2DImmediateRender.h:114
	void DrawText(const char *, float32_t, float32_t, float32_t, RGBA);

	// CgsDebug2DImmediateRender.h:115
	void DrawBox(float32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebug2DImmediateRender.h:116
	void DrawFrame(float32_t, float32_t, float32_t, float32_t, RGBA, float32_t);

	// CgsDebug2DImmediateRender.h:117
	void DrawTextInBox(const char *, float32_t, float32_t, float32_t, float32_t, float32_t, RGBA, float32_t);

	// CgsDebug2DImmediateRender.h:118
	void DrawAlignedText(const char *, float32_t, float32_t, float32_t, RGBA, float32_t);

	// CgsDebug2DImmediateRender.h:119
	void DrawHorizontalBar(Vector2, Vector2, float32_t, float32_t, RGBA, RGBA);

	// CgsDebug2DImmediateRender.h:120
	void DrawTextWithBackground(const char *, float32_t, float32_t, float32_t, RGBA, RGBA, float32_t);

	// CgsDebug2DImmediateRender.h:123
	void DrawValue(int32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebug2DImmediateRender.h:124
	void DrawValue(float32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebug2DImmediateRender.h:125
	void Draw2DValue(float32_t, float32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebug2DImmediateRender.h:126
	void DrawDataSize(int32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebug2DImmediateRender.h:127
	void DrawFraction(int32_t, int32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebug2DImmediateRender.h:128
	float32_t DrawGraph(CgsDev::DebugGraph *, const Vector2Template<float> &, const Vector2Template<float> &, RGBA, RGBA);

	// CgsDebug2DImmediateRender.h:130
	float32_t CalcTextWidth(const char *, float32_t) const;

	// CgsDebug2DImmediateRender.h:131
	Vector2 CalcTextExtent(const char *, float32_t) const;

	// CgsDebug2DImmediateRender.h:134
	bool Is2DPointOnScreen(Vector2) const;

	// CgsDebug2DImmediateRender.h:135
	bool Is2DTextOnScreen(const char *, Vector2, float32_t) const;

	// CgsDebug2DImmediateRender.h:136
	bool Is2DLineOnScreen(Vector2, Vector2) const;

	// CgsDebug2DImmediateRender.h:137
	bool Is2DBoxOnScreen(Vector2, Vector2) const;

	// CgsDebug2DImmediateRender.h:138
	bool Is2DPolygonOnScreen(const rw::math::vpu::Vector2 *, uint32_t) const;

	// CgsDebug2DImmediateRender.h:143
	void SetRenderBuffer(CgsGraphics::Im2dRenderBuffer *);

	// CgsDebug2DImmediateRender.h:147
	void SetDebugFont(SafeResourceHandle<CgsResource::Font> &);

	// CgsDebug2DImmediateRender.h:150
	void Debug2DImmediateRender();

private:
	// CgsDebug2DImmediateRender.h:166
	void SetDrawingMode(CgsDev::Debug2DImmediateRender::DrawingMode);

	// CgsDebug2DImmediateRender.h:169
	void SetDebugRenderStates();

	// CgsDebug2DImmediateRender.h:172
	void AddVertex(Vector2, RGBA);

	// CgsDebug2DImmediateRender.h:173
	void AddLine(Vector2, Vector2, RGBA);

	// CgsDebug2DImmediateRender.h:174
	void AddTriangle(Vector2, Vector2, Vector2, RGBA);

	// CgsDebug2DImmediateRender.h:175
	void AddQuad(Vector2, Vector2, Vector2, Vector2, RGBA);

	// CgsDebug2DImmediateRender.h:176
	void DispatchVertices();

	// CgsDebug2DImmediateRender.h:183
	bool Do2DLinesIntersect(Vector2, Vector2, Vector2, Vector2) const;

	// CgsDebug2DImmediateRender.h:190
	bool Do2DBoxesIntersect(Vector2, Vector2, Vector2, Vector2) const;

	// CgsDebug2DImmediateRender.h:214
	Debug2DImmediateRender & operator=(const Debug2DImmediateRender &);

	// CgsDebug2DImmediateRender.h:216
	void Debug2DImmediateRender(const Debug2DImmediateRender &);

}


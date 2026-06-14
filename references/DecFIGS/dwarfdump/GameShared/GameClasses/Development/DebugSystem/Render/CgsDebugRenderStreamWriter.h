// CgsStrStream.h:39
namespace CgsDev {
	// Declaration
	struct DebugRenderStreamWriter {
		// CgsDebugRenderStreamWriter.h:54
		enum Justification {
			E_JUSTIFY_LEFT = 0,
			E_JUSTIFY_CENTRE = 1,
			E_JUSTIFY_RIGHT = 2,
		}

	}

}

// CgsDebugRenderStreamWriter.h:52
struct CgsDev::DebugRenderStreamWriter {
private:
	// CgsDebugRenderStreamWriter.h:113
	DataStreamResultPoster mOutput;

	// CgsDebugRenderStreamWriter.h:114
	DebugStreamInput mTempBuffer;

	// CgsDebugRenderStreamWriter.h:115
	bool mbEnabled;

public:
	// CgsDebugRenderStreamWriter.h:60
	void Construct(DebugRenderStreamReader *);

	// CgsDebugRenderStreamWriter.h:61
	void Destruct();

	// CgsDebugRenderStreamWriter.h:64
	void Draw2DText(const char *, Vector2, float32_t, RGBA);

	// CgsDebugRenderStreamWriter.h:65
	void Draw2DText(const char *, float32_t, float32_t, float32_t, RGBA);

	// CgsDebugRenderStreamWriter.h:66
	void Draw2DLine(Vector2, Vector2, RGBA);

	// CgsDebugRenderStreamWriter.h:67
	void Draw2DBox(Vector2, Vector2, RGBA);

	// CgsDebugRenderStreamWriter.h:68
	void Draw2DFrame(Vector2, Vector2, RGBA);

	// CgsDebugRenderStreamWriter.h:70
	void Draw2DLineAtAngle(Vector2, float32_t, float32_t, RGBA);

	// CgsDebugRenderStreamWriter.h:71
	void Draw2DArrowHead(Vector2, float32_t, float32_t, RGBA);

	// CgsDebugRenderStreamWriter.h:72
	void Draw2DArrow(Vector2, float32_t, float32_t, RGBA);

	// CgsDebugRenderStreamWriter.h:73
	void Draw2DArrow(Vector2, Vector2, RGBA);

	// CgsDebugRenderStreamWriter.h:76
	void Draw2DValue(int32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebugRenderStreamWriter.h:77
	void Draw2DValue(float32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebugRenderStreamWriter.h:78
	void Draw2DDataSize(int32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebugRenderStreamWriter.h:79
	void Draw2DFraction(int32_t, int32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebugRenderStreamWriter.h:82
	void Draw2DTextJustified(const char *, Vector2, CgsDev::DebugRenderStreamWriter::Justification, float32_t, RGBA);

	// CgsDebugRenderStreamWriter.h:85
	void DrawText(Vector3, const char *, float32_t, RGBA);

	// CgsDebugRenderStreamWriter.h:86
	void DrawLine(Vector3, Vector3, RGBA);

	// CgsDebugRenderStreamWriter.h:87
	void DrawPoint(Vector3, RGBA);

	// CgsDebugRenderStreamWriter.h:88
	void DrawQuad(Vector3, Vector3, Vector3, Vector3, RGBA);

	// CgsDebugRenderStreamWriter.h:89
	void DrawSolidQuad(Vector3, Vector3, Vector3, Vector3, RGBA);

	// CgsDebugRenderStreamWriter.h:90
	void DrawAngleDeg(Vector3, float32_t, RGBA);

	// CgsDebugRenderStreamWriter.h:91
	void DrawAngleRad(Vector3, float32_t, RGBA);

	// CgsDebugRenderStreamWriter.h:92
	void DrawAxis(Matrix44Affine);

	// CgsDebugRenderStreamWriter.h:93
	void DrawSphere(Vector3, float32_t, RGBA);

	// CgsDebugRenderStreamWriter.h:94
	void DrawSolidSphere(Vector3, float32_t, RGBA);

	// CgsDebugRenderStreamWriter.h:95
	void DrawHollowSphere(Vector3, float32_t, RGBA);

	// CgsDebugRenderStreamWriter.h:96
	void DrawCircle(Matrix44Affine, float32_t, RGBA);

	// CgsDebugRenderStreamWriter.h:97
	void DrawCircle(Vector3, Vector3, float32_t, RGBA);

	// CgsDebugRenderStreamWriter.h:98
	void DrawBox(Vector3, Vector3, Matrix44Affine, RGBA);

	// CgsDebugRenderStreamWriter.h:99
	void DrawBox(Vector3, Vector3, RGBA);

	// CgsDebugRenderStreamWriter.h:100
	void DrawSolidBox(Vector3, Vector3, Matrix44Affine, RGBA);

	// CgsDebugRenderStreamWriter.h:101
	void DrawSolidBox(Vector3, Vector3, RGBA);

	// CgsDebugRenderStreamWriter.h:102
	void DrawArrow(Vector3, Vector3, RGBA);

	// CgsDebugRenderStreamWriter.h:103
	void DrawSolidArrow(Vector3, Vector3, RGBA);

	// CgsDebugRenderStreamWriter.h:104
	void DrawCapsule(Vector3, Vector3, float32_t, RGBA);

	// CgsDebugRenderStreamWriter.h:105
	void DrawCylinder(Vector3, Vector3, float32_t, RGBA);

	// CgsDebugRenderStreamWriter.h:106
	void DrawTriangle(Vector3, Vector3, Vector3, RGBA);

	// CgsDebugRenderStreamWriter.h:107
	void DrawWireTriangle(Vector3, Vector3, Vector3, RGBA);

	// CgsDebugRenderStreamWriter.h:108
	void DrawCross(Vector3, float32_t, RGBA);

private:
	// CgsDebugRenderStreamWriter.h:118
	void Flush();

	// CgsDebugRenderStreamWriter.h:121
	void Add2DEvent(const void *, int32_t, int32_t);

	// CgsDebugRenderStreamWriter.h:124
	void Add3DEvent(const void *, int32_t, int32_t);

	// CgsDebugRenderStreamWriter.h:135
	void Add2DStringEvent(const char *, int32_t);

	// CgsDebugRenderStreamWriter.h:138
	void Add3DStringEvent(const char *, int32_t);

}

// CgsDebugRenderStreamWriter.h:236
extern void Add3DEvent<CgsDev::Internal::CInEventDrawTriangle>(const const CInEventDrawTriangle &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.h:229
extern void Add2DEvent<CgsDev::Internal::CInEventDrawFrame2D>(const const CInEventDrawFrame2D &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.h:229
extern void Add2DEvent<CgsDev::Internal::CInEventDrawText2D>(const const CInEventDrawText2D &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.h:229
extern void Add2DEvent<CgsDev::Internal::CInEventDrawLine2D>(const const CInEventDrawLine2D &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.h:229
extern void Add2DEvent<CgsDev::Internal::CInEventDrawBox2D>(const const CInEventDrawBox2D &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.h:236
extern void Add3DEvent<CgsDev::Internal::CInEventDrawQuad>(const const CInEventDrawQuad &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.h:236
extern void Add3DEvent<CgsDev::Internal::CInEventDrawText>(const const CInEventDrawText &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.h:236
extern void Add3DEvent<CgsDev::Internal::CInEventDrawLine>(const const CInEventDrawLine &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.h:236
extern void Add3DEvent<CgsDev::Internal::CInEventDrawPoint>(const const CInEventDrawPoint &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.h:236
extern void Add3DEvent<CgsDev::Internal::CInEventDrawAngle>(const const CInEventDrawAngle &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.h:236
extern void Add3DEvent<CgsDev::Internal::CInEventDrawAxis>(const const CInEventDrawAxis &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.h:236
extern void Add3DEvent<CgsDev::Internal::CInEventDrawSphere>(const const CInEventDrawSphere &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.h:236
extern void Add3DEvent<CgsDev::Internal::CInEventDrawSolidSphere>(const const CInEventDrawSolidSphere &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.h:236
extern void Add3DEvent<CgsDev::Internal::CInEventDrawHollowSphere>(const const CInEventDrawHollowSphere &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.h:236
extern void Add3DEvent<CgsDev::Internal::CInEventDrawCircle>(const const CInEventDrawCircle &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.h:236
extern void Add3DEvent<CgsDev::Internal::CInEventDrawBox>(const const CInEventDrawBox &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.h:236
extern void Add3DEvent<CgsDev::Internal::CInEventDrawBoxAA>(const const CInEventDrawBoxAA &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.h:236
extern void Add3DEvent<CgsDev::Internal::CInEventDrawSolidBox>(const const CInEventDrawSolidBox &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.h:236
extern void Add3DEvent<CgsDev::Internal::CInEventDrawSolidBoxAA>(const const CInEventDrawSolidBoxAA &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.h:236
extern void Add3DEvent<CgsDev::Internal::CInEventDrawArrow>(const const CInEventDrawArrow &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.h:236
extern void Add3DEvent<CgsDev::Internal::CInEventDrawSolidArrow>(const const CInEventDrawSolidArrow &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.h:236
extern void Add3DEvent<CgsDev::Internal::CInEventDrawCapsule>(const const CInEventDrawCapsule &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugRenderStreamWriter.h:236
extern void Add3DEvent<CgsDev::Internal::CInEventDrawCylinder>(const const CInEventDrawCylinder &  lEvent, int32_t  liEventId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


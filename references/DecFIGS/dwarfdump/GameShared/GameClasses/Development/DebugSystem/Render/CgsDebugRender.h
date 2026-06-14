// CgsStrStream.h:39
namespace CgsDev {
	// Declaration
	struct DebugRender {
		// CgsDebugRender.h:112
		enum Justification {
			E_JUSTIFY_LEFT = 0,
			E_JUSTIFY_CENTRE = 1,
			E_JUSTIFY_RIGHT = 2,
		}

	}

}

// CgsDebugRender.h:71
struct CgsDev::DebugRender {
private:
	// CgsDebugRender.h:157
	VariableEventQueue<16384,16> m3DEventQueue;

	// CgsDebugRender.h:158
	VariableEventQueue<16384,16> m2DEventQueue;

public:
	// CgsDebugRender.h:76
	void Construct();

	// CgsDebugRender.h:79
	void Destruct();

	// CgsDebugRender.h:83
	void Dispatch3D(CgsDev::Debug3DImmediateRender *, bool);

	// CgsDebugRender.h:86
	void Dispatch2D(CgsDev::Debug2DImmediateRender *, bool);

	// CgsDebugRender.h:89
	void Clear();

	// CgsDebugRender.h:93
	void Draw2DText(const char *, Vector2, float32_t, RGBA);

	// CgsDebugRender.h:94
	void Draw2DText(const char *, float32_t, float32_t, float32_t, RGBA);

	// CgsDebugRender.h:95
	void Draw2DLine(Vector2, Vector2, RGBA);

	// CgsDebugRender.h:96
	void Draw2DBox(Vector2, Vector2, RGBA);

	// CgsDebugRender.h:97
	void Draw2DFrame(Vector2, Vector2, RGBA);

	// CgsDebugRender.h:99
	void Draw2DLineAtAngle(Vector2, float32_t, float32_t, RGBA);

	// CgsDebugRender.h:100
	void Draw2DArrowHead(Vector2, float32_t, float32_t, RGBA);

	// CgsDebugRender.h:101
	void Draw2DArrow(Vector2, float32_t, float32_t, RGBA);

	// CgsDebugRender.h:102
	void Draw2DArrow(Vector2, Vector2, RGBA);

	// CgsDebugRender.h:105
	void Draw2DValue(int32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebugRender.h:106
	void Draw2DValue(float32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebugRender.h:107
	void Draw2DDataSize(int32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebugRender.h:108
	void Draw2DFraction(int32_t, int32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebugRender.h:109
	float32_t Draw2DGraph(CgsDev::DebugGraph *, const Vector2Template<float> &, const Vector2Template<float> &, RGBA, RGBA);

	// CgsDebugRender.h:117
	void Draw2DTextJustified(const char *, Vector2, CgsDev::DebugRender::Justification, float32_t, RGBA);

	// CgsDebugRender.h:120
	void DrawText(Vector3, const char *, float32_t, RGBA);

	// CgsDebugRender.h:121
	void DrawLine(Vector3, Vector3, RGBA);

	// CgsDebugRender.h:122
	void DrawPoint(Vector3, RGBA);

	// CgsDebugRender.h:123
	void DrawQuad(Vector3, Vector3, Vector3, Vector3, RGBA);

	// CgsDebugRender.h:124
	void DrawSolidQuad(Vector3, Vector3, Vector3, Vector3, RGBA);

	// CgsDebugRender.h:125
	void DrawAngleDeg(Vector3, float32_t, RGBA);

	// CgsDebugRender.h:126
	void DrawAngleRad(Vector3, float32_t, RGBA);

	// CgsDebugRender.h:127
	void DrawAxis(Matrix44Affine);

	// CgsDebugRender.h:128
	void DrawSphere(Vector3, float32_t, RGBA);

	// CgsDebugRender.h:129
	void DrawSolidSphere(Vector3, float32_t, RGBA);

	// CgsDebugRender.h:130
	void DrawHollowSphere(Vector3, float32_t, RGBA);

	// CgsDebugRender.h:131
	void DrawCircle(Matrix44Affine, float32_t, RGBA);

	// CgsDebugRender.h:132
	void DrawCircle(Vector3, Vector3, float32_t, RGBA);

	// CgsDebugRender.h:133
	void DrawBox(Vector3, Vector3, Matrix44Affine, RGBA);

	// CgsDebugRender.h:134
	void DrawBox(Vector3, Vector3, RGBA);

	// CgsDebugRender.h:135
	void DrawSolidBox(Vector3, Vector3, Matrix44Affine, RGBA);

	// CgsDebugRender.h:136
	void DrawSolidBox(Vector3, Vector3, RGBA);

	// CgsDebugRender.h:137
	void DrawArrow(Vector3, Vector3, RGBA);

	// CgsDebugRender.h:138
	void DrawSolidArrow(Vector3, Vector3, RGBA);

	// CgsDebugRender.h:139
	void DrawCapsule(Vector3, Vector3, float32_t, RGBA);

	// CgsDebugRender.h:140
	void DrawCylinder(Vector3, Vector3, float32_t, RGBA);

	// CgsDebugRender.h:141
	void DrawTriangle(Vector3, Vector3, Vector3, RGBA);

	// CgsDebugRender.h:142
	void DrawWireTriangle(Vector3, Vector3, Vector3, RGBA);

	// CgsDebugRender.h:143
	void DrawCross(Vector3, float32_t, RGBA);

	// CgsDebugRender.h:145
	void DrawVolume(const CapsuleVolume *, Matrix44Affine, RGBA);

	// CgsDebugRender.h:146
	void DrawVolume(const SphereVolume *, Matrix44Affine, RGBA);

	// CgsDebugRender.h:147
	void DrawVolume(const CylinderVolume *, Matrix44Affine, RGBA);

	// CgsDebugRender.h:148
	void DrawVolume(const BoxVolume *, Matrix44Affine, RGBA);

	// CgsDebugRender.h:149
	void DrawVolume(const TriangleVolume *, Matrix44Affine, RGBA);

	// CgsDebugRender.h:152
	void DebugRender();

private:
	// CgsDebugRender.h:164
	DebugRender & operator=(const DebugRender &);

	// CgsDebugRender.h:166
	void DebugRender(const DebugRender &);

}

// CgsDebugRender.h:71
struct CgsDev::DebugRender {
private:
	// CgsDebugRender.h:157
	VariableEventQueue<16384,16> m3DEventQueue;

	// CgsDebugRender.h:158
	VariableEventQueue<16384,16> m2DEventQueue;

public:
	// CgsDebugRender.h:76
	void Construct();

	// CgsDebugRender.h:79
	void Destruct();

	// CgsDebugRender.h:83
	void Dispatch3D(CgsDev::Debug3DImmediateRender *, bool);

	// CgsDebugRender.h:86
	void Dispatch2D(CgsDev::Debug2DImmediateRender *, bool);

	// CgsDebugRender.h:89
	void Clear();

	// CgsDebugRender.h:93
	void Draw2DText(const char *, Vector2, float32_t, RGBA);

	// CgsDebugRender.h:94
	void Draw2DText(const char *, float32_t, float32_t, float32_t, RGBA);

	// CgsDebugRender.h:95
	void Draw2DLine(Vector2, Vector2, RGBA);

	// CgsDebugRender.h:96
	void Draw2DBox(Vector2, Vector2, RGBA);

	// CgsDebugRender.h:97
	void Draw2DFrame(Vector2, Vector2, RGBA);

	// CgsDebugRender.h:99
	void Draw2DLineAtAngle(Vector2, float32_t, float32_t, RGBA);

	// CgsDebugRender.h:100
	void Draw2DArrowHead(Vector2, float32_t, float32_t, RGBA);

	// CgsDebugRender.h:101
	void Draw2DArrow(Vector2, float32_t, float32_t, RGBA);

	// CgsDebugRender.h:102
	void Draw2DArrow(Vector2, Vector2, RGBA);

	// CgsDebugRender.h:105
	void Draw2DValue(int32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebugRender.h:106
	void Draw2DValue(float32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebugRender.h:107
	void Draw2DDataSize(int32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebugRender.h:108
	void Draw2DFraction(int32_t, int32_t, float32_t, float32_t, float32_t, RGBA);

	// CgsDebugRender.h:109
	float32_t Draw2DGraph(CgsDev::DebugGraph *, const Vector2Template<float> &, const Vector2Template<float> &, RGBA, RGBA);

	// CgsDebugRender.h:117
	void Draw2DTextJustified(const char *, Vector2, CgsDev::DebugRender::Justification, float32_t, RGBA);

	// CgsDebugRender.h:120
	void DrawText(Vector3, const char *, float32_t, RGBA);

	// CgsDebugRender.h:121
	void DrawLine(Vector3, Vector3, RGBA);

	// CgsDebugRender.h:122
	void DrawPoint(Vector3, RGBA);

	// CgsDebugRender.h:123
	void DrawQuad(Vector3, Vector3, Vector3, Vector3, RGBA);

	// CgsDebugRender.h:124
	void DrawSolidQuad(Vector3, Vector3, Vector3, Vector3, RGBA);

	// CgsDebugRender.h:125
	void DrawAngleDeg(Vector3, float32_t, RGBA);

	// CgsDebugRender.h:126
	void DrawAngleRad(Vector3, float32_t, RGBA);

	// CgsDebugRender.h:127
	void DrawAxis(Matrix44Affine);

	// CgsDebugRender.h:128
	void DrawSphere(Vector3, float32_t, RGBA);

	// CgsDebugRender.h:129
	void DrawSolidSphere(Vector3, float32_t, RGBA);

	// CgsDebugRender.h:130
	void DrawHollowSphere(Vector3, float32_t, RGBA);

	// CgsDebugRender.h:131
	void DrawCircle(Matrix44Affine, float32_t, RGBA);

	// CgsDebugRender.h:132
	void DrawCircle(Vector3, Vector3, float32_t, RGBA);

	// CgsDebugRender.h:133
	void DrawBox(Vector3, Vector3, Matrix44Affine, RGBA);

	// CgsDebugRender.h:134
	void DrawBox(Vector3, Vector3, RGBA);

	// CgsDebugRender.h:135
	void DrawSolidBox(Vector3, Vector3, Matrix44Affine, RGBA);

	// CgsDebugRender.h:136
	void DrawSolidBox(Vector3, Vector3, RGBA);

	// CgsDebugRender.h:137
	void DrawArrow(Vector3, Vector3, RGBA);

	// CgsDebugRender.h:138
	void DrawSolidArrow(Vector3, Vector3, RGBA);

	// CgsDebugRender.h:139
	void DrawCapsule(Vector3, Vector3, float32_t, RGBA);

	// CgsDebugRender.h:140
	void DrawCylinder(Vector3, Vector3, float32_t, RGBA);

	// CgsDebugRender.h:141
	void DrawTriangle(Vector3, Vector3, Vector3, RGBA);

	// CgsDebugRender.h:142
	void DrawWireTriangle(Vector3, Vector3, Vector3, RGBA);

	// CgsDebugRender.h:143
	void DrawCross(Vector3, float32_t, RGBA);

	// CgsDebugRender.h:145
	void DrawVolume(const rw::collision::CapsuleVolume *, Matrix44Affine, RGBA);

	// CgsDebugRender.h:146
	void DrawVolume(const rw::collision::SphereVolume *, Matrix44Affine, RGBA);

	// CgsDebugRender.h:147
	void DrawVolume(const rw::collision::CylinderVolume *, Matrix44Affine, RGBA);

	// CgsDebugRender.h:148
	void DrawVolume(const rw::collision::BoxVolume *, Matrix44Affine, RGBA);

	// CgsDebugRender.h:149
	void DrawVolume(const rw::collision::TriangleVolume *, Matrix44Affine, RGBA);

	// CgsDebugRender.h:152
	void DebugRender();

private:
	// CgsDebugRender.h:164
	DebugRender & operator=(const DebugRender &);

	// CgsDebugRender.h:166
	void DebugRender(const DebugRender &);

}


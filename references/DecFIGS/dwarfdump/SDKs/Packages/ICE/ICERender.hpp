// ICERender.hpp:35
struct ICE::Poly {
	// ICERender.hpp:36
	Vector3[4] Vertices;

}

// ICERender.hpp:40
struct ICE::ICERender {
public:
	// ICERender.hpp:43
	void StartScreenShot();

	// ICERender.hpp:44
	bool IsScreenShotDone();

	// ICERender.hpp:45
	void StartTakingScreenshotFrames();

	// ICERender.hpp:46
	void StopTakingScreenshotFrames();

	// ICERender.hpp:47
	bool IsTakingScreenshotFrames();

	// ICERender.hpp:48
	bool IsWidescreen();

	// ICERender.hpp:49
	bool IsCameraPaused();

	// ICERender.hpp:55
	void ScrPrintf(int32_t, int32_t, float32_t, const char *, ...);

	// ICERender.hpp:62
	// Declaration
	void ScrPrintf(int32_t, int32_t, float32_t, const Vector4 *, const char *, ...) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// ICEMath.hpp:60
		typedef Vector4 Vector4;

	}

	// ICERender.hpp:68
	void ScrShadowPrintf(int32_t, int32_t, float32_t, const char *, ...);

	// ICERender.hpp:76
	void ScrPrintfArg(int32_t, int32_t, float32_t, const Vector4 *, const char *, va_list &);

	// ICERender.hpp:82
	void RenderPoly(Poly *, const Vector4 *, const Vector4 *, Matrix4 *);

	// ICERender.hpp:89
	void RenderPoly(Poly *, const Vector4 *, const Vector4 *, const Vector4 *, const Vector4 *);

	// ICERender.hpp:97
	void RenderPoly(Poly *, const Vector4 *, const Vector4 *, const Vector4 *, const Vector4 *, Matrix4 *);

}


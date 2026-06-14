// BrnIm3dSmokeRenderer.h:49
struct BrnGraphics::Im3dSmokeRenderer : public CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex> {
protected:
	// BrnIm3dSmokeRenderer.h:69
	ProgramVariableHandle mOffsetHandle;

	// BrnIm3dSmokeRenderer.h:70
	ProgramVariableHandle mScaleHandle;

	// BrnIm3dSmokeRenderer.h:72
	ProgramVariableHandle mDepthConversionHandle;

	// BrnIm3dSmokeRenderer.h:73
	ProgramVariableHandle mDepthFadeConstantsHandle;

public:
	void Im3dSmokeRenderer(const Im3dSmokeRenderer &);

	void Im3dSmokeRenderer();

	// BrnIm3dSmokeRenderer.h:56
	void Construct(rw::IResourceAllocator *);

	// BrnIm3dSmokeRenderer.h:64
	void SetConstants(Vector2, float32_t, float32_t, float32_t);

}

// BrnIm3dSmokeRenderer.h:49
void BrnGraphics::Im3dSmokeRenderer::Im3dSmokeRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


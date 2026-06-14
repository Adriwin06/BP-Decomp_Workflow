// BrnLionBlendIm3d.h:52
struct BrnGraphics::Im3dBlend : public CgsGraphics::Im3dBase<BrnGraphics::LionBlendVertex> {
protected:
	// BrnLionBlendIm3d.h:76
	ProgramVariableHandle mViewProjectionMatrixStateHandle_Normal;

	// BrnLionBlendIm3d.h:77
	ProgramVariableHandle mColourScaleStateHandle_Normal;

	// BrnLionBlendIm3d.h:79
	ProgramVariableHandle mViewProjectionMatrixStateHandle_ZFade;

	// BrnLionBlendIm3d.h:80
	ProgramVariableHandle mColourScaleStateHandle_ZFade;

	// BrnLionBlendIm3d.h:81
	ProgramVariableHandle mOffsetStateHandle_ZFade;

	// BrnLionBlendIm3d.h:82
	ProgramVariableHandle mScaleStateHandle_ZFade;

	// BrnLionBlendIm3d.h:84
	ProgramVariableHandle mDepthConversionStateHandle_ZFade;

	// BrnLionBlendIm3d.h:85
	ProgramVariableHandle mDepthFadeStateHandle_ZFade;

public:
	void Im3dBlend(const Im3dBlend &);

	void Im3dBlend();

	// BrnLionBlendIm3d.h:58
	void Construct(rw::IResourceAllocator *);

	// BrnLionBlendIm3d.h:71
	void BeginRendering(Matrix44, float32_t, bool8_t, float32_t, float32_t, float32_t, float32_t, float32_t, TextureState *);

}

// BrnLionBlendIm3d.h:52
void BrnGraphics::Im3dBlend::Im3dBlend() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


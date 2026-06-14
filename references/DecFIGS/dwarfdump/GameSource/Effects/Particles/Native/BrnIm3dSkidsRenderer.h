// BrnEnvironmentMap.h:31
namespace BrnGraphics {
	// Declaration
	struct Im3dSkidsRenderer {
	public:
		// BrnIm3dSkidsRenderer.cpp:66
		void Construct(rw::IResourceAllocator *);

		// BrnIm3dSkidsRenderer.h:99
		void SetTransform(Matrix44);

		// BrnIm3dSkidsRenderer.h:111
		void SetBlendStartColour(Vector4);

		// BrnIm3dSkidsRenderer.h:124
		void SetBlendEndColour(Vector4);

	}

}

// BrnIm3dSkidsRenderer.h:49
struct BrnGraphics::Im3dSkidsRenderer : public CgsGraphics::ImRenderer<BrnGraphics::SkidVertex> {
protected:
	// BrnIm3dSkidsRenderer.h:72
	ProgramVariableHandle mWorldViewProjStateHandle;

	// BrnIm3dSkidsRenderer.h:73
	ProgramVariableHandle mStartColourStateHandle;

	// BrnIm3dSkidsRenderer.h:74
	ProgramVariableHandle mEndColourStateHandle;

public:
	void Im3dSkidsRenderer(const Im3dSkidsRenderer &);

	void Im3dSkidsRenderer();

	// BrnIm3dSkidsRenderer.h:55
	void Construct(rw::IResourceAllocator *);

	// BrnIm3dSkidsRenderer.h:99
	void SetTransform(Matrix44);

	// BrnIm3dSkidsRenderer.h:111
	void SetBlendStartColour(Vector4);

	// BrnIm3dSkidsRenderer.h:124
	void SetBlendEndColour(Vector4);

}

// BrnIm3dSkidsRenderer.h:49
void BrnGraphics::Im3dSkidsRenderer::Im3dSkidsRenderer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


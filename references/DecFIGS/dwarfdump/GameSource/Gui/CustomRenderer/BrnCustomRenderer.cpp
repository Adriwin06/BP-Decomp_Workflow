// CgsGuiShared.h:45
namespace BrnGui {
	// BrnCustomRenderer.cpp:868
	// Declaration
	extern void SetMaskRect(CgsGraphics::Im2dRenderBuffer *, TextureState *, const rw::math::vpu::Vector4 &, const rw::math::vpu::Vector4 &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCustomRenderer.cpp:870
		using namespace rw::math;

	}

	// BrnCustomRenderer.cpp:922
	// Declaration
	extern void SetMaskRect(CgsGraphics::Im3dRenderBuffer *, TextureState *, const rw::math::vpu::Vector4 &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCustomRenderer.cpp:924
		using namespace rw::math;

	}

	// BrnCustomRenderer.cpp:837
	extern void SetMaskAspectCorrectionMatrix();

	// BrnCustomRenderer.cpp:963
	extern void UnsetMaskRect(CgsGraphics::Im3dRenderBuffer *);

	// BrnCustomRenderer.cpp:906
	extern void UnsetMaskRect(CgsGraphics::Im2dRenderBuffer *);

	// BrnCustomRenderer.cpp:826
	Matrix33 gs33MaskSpace;

	// BrnCustomRenderer.cpp:827
	Matrix33 gs33MaskAspectCorrectionMatrix;

}


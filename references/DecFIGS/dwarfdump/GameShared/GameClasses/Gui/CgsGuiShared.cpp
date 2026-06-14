// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsGuiShared.cpp:42
	// Declaration
	extern bool GetDistanceFromLineSegment(const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &, float32_t *, float32_t *, Vector3 *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsGuiShared.cpp:44
		using namespace rw::math;

	}

	// CgsGuiShared.cpp:96
	// Declaration
	extern const rw::math::vpu::Matrix44 Convert2dTo3dTransform(const Im2dTransform &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsGuiShared.cpp:98
		using namespace rw::math;

	}

	// CgsGuiShared.cpp:111
	// Declaration
	extern const rw::math::vpu::Matrix44 & GetNormalisedToRendererTransform() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsGuiShared.cpp:113
		using namespace rw::math;

	}

	// CgsGuiShared.cpp:124
	// Declaration
	extern const Im3dVertex * Convert2dTo3dVerts(const GuiGeometryMesh::Im2dVertex *, uint32_t, const Im2dTransform &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsGuiShared.cpp:126
		using namespace rw::math;

	}

	// CgsGuiShared.cpp:189
	// Declaration
	extern Camera GetGuiCamera() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsGuiShared.cpp:191
		using namespace rw::math;

	}

	// CgsGuiShared.cpp:180
	extern void SetGuiCamera(CgsGui::eGuiCameraType);

	// CgsGuiShared.cpp:177
	CgsGui::eGuiCameraType mCurrentGuiCamera;

}


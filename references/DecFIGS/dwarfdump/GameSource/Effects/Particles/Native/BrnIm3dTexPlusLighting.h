// BrnEnvironmentMap.h:31
namespace BrnGraphics {
	// Declaration
	struct Im3dTexPlusLighting {
	public:
		// BrnIm3dTexPlusLighting.cpp:66
		void Construct(rw::IResourceAllocator *);

		// BrnIm3dTexPlusLighting.h:139
		void SetViewProjection(Matrix44);

		// BrnIm3dTexPlusLighting.h:152
		void SetEye(Vector3);

		// BrnIm3dTexPlusLighting.h:167
		void SetLightDirection(Vector3);

		// BrnIm3dTexPlusLighting.h:181
		void SetLightColour(Vector3);

		// BrnIm3dTexPlusLighting.h:199
		void SetShinyParams(float32_t, float32_t, float32_t, float32_t);

		// BrnIm3dTexPlusLighting.h:118
		void SetTransformArray(const rw::math::vpu::Matrix44 *);

		// Unknown accessibility
		// BrnIm3dTexPlusLighting.h:54
		extern const uint32_t KU_NUM_TRANSFORMS = 32;

	}

}

// BrnIm3dTexPlusLighting.h:54
extern const uint32_t KU_NUM_TRANSFORMS = 32;

// BrnIm3dTexPlusLighting.h:50
struct BrnGraphics::Im3dTexPlusLighting : public CgsGraphics::ImRenderer<BrnGraphics::WorldTexturedVertex> {
	// BrnIm3dTexPlusLighting.h:54
	extern const uint32_t KU_NUM_TRANSFORMS = 32;

protected:
	// BrnIm3dTexPlusLighting.h:98
	ProgramVariableHandle mTransformArrayStateHandle;

	// BrnIm3dTexPlusLighting.h:99
	ProgramVariableHandle mViewProjectionMatrixStateHandle;

	// BrnIm3dTexPlusLighting.h:100
	ProgramVariableHandle mEyeStateHandle;

	// BrnIm3dTexPlusLighting.h:102
	ProgramVariableHandle mWorldLightDirectionStateHandle;

	// BrnIm3dTexPlusLighting.h:103
	ProgramVariableHandle mLightColourStateHandle;

	// BrnIm3dTexPlusLighting.h:104
	ProgramVariableHandle mShinyParamsStateHandle;

public:
	void Im3dTexPlusLighting(const Im3dTexPlusLighting &);

	void Im3dTexPlusLighting();

	// BrnIm3dTexPlusLighting.h:59
	void Construct(rw::IResourceAllocator *);

	// BrnIm3dTexPlusLighting.h:118
	void SetTransformArray(const rw::math::vpu::Matrix44 *);

	// BrnIm3dTexPlusLighting.h:139
	void SetViewProjection(Matrix44);

	// BrnIm3dTexPlusLighting.h:152
	void SetEye(Vector3);

	// BrnIm3dTexPlusLighting.h:167
	void SetLightDirection(Vector3);

	// BrnIm3dTexPlusLighting.h:181
	void SetLightColour(Vector3);

	// BrnIm3dTexPlusLighting.h:199
	void SetShinyParams(float32_t, float32_t, float32_t, float32_t);

}

// BrnIm3dTexPlusLighting.h:50
void BrnGraphics::Im3dTexPlusLighting::Im3dTexPlusLighting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


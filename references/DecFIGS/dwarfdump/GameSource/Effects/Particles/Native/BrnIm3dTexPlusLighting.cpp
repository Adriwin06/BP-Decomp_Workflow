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


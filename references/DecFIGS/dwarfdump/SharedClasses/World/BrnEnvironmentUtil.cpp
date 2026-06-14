// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnEnvironmentUtil.h:31
	namespace EnvironmentSettings {
		// BrnEnvironmentUtil.cpp:50
		extern Vector3 ComputeSkyColour(Vector4, Vector4, Vector4, Vector3, Vector3, Vector3);

		// BrnEnvironmentUtil.cpp:100
		extern void ComputeIrradianceRigFromSky(Vector3 &, Vector3 &, Vector3 &, Vector3 &, Vector3 &, Vector3 &, Vector4, Vector4, Vector4, Vector3, Vector3);

		// BrnEnvironmentUtil.cpp:156
		extern Vector3 ComputeKeyLightDirection(float32_t, float32_t, float32_t, float32_t);

	}

}


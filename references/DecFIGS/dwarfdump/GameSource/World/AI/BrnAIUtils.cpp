// BrnRoute.h:26
namespace BrnAI {
	// BrnAIUtils.cpp:172
	extern float32_t StepTo(float32_t, float32_t, float32_t);

	// BrnAIUtils.cpp:138
	extern void Convert3DVectorTo2D(Vector3, Vector2 &);

	// BrnAIUtils.cpp:211
	extern bool Calc2DIntersectionEquationData(Vector2, Vector2, Vector2, Vector2, float32_t *, float32_t *);

	// BrnAIUtils.cpp:154
	extern void Convert2DVectorTo3D(Vector2, float32_t, Vector3 &);

	// BrnAIUtils.cpp:115
	extern void Rotate2DVectorByAngle(Vector2, float32_t, Vector2 &);

	// BrnAIUtils.cpp:88
	extern float32_t FindUnsignedAngleBetween2DVectors(Vector2, Vector2);

	// BrnAIUtils.cpp:43
	extern float32_t FindSignedAngleBetween2DVectors(Vector2, Vector2);

}


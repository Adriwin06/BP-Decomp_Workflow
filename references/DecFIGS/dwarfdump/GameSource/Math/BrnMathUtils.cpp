// BrnMathUtils.h:27
namespace BrnMath {
	// BrnMathUtils.cpp:114
	extern float32_t GetPointToInfiniteLineDistance(Vector3, Vector3, Vector3);

	// BrnMathUtils.cpp:48
	extern Matrix44Affine BuildTransform(Vector3, Vector3, Vector3);

	// BrnMathUtils.cpp:83
	extern bool IsPointInsideBox(Vector3, Matrix44Affine, Vector3);

}


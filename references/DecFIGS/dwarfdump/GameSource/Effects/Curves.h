// BrnEffectsData.h:75
namespace BrnEffects {
	// Curves.h:27
	namespace Curves {
		struct SmoothStep;

	}

}

// Curves.h:29
struct BrnEffects::Curves::SmoothStep {
	// Curves.h:135
	Road::Vector3 mCurveParams;

	// Curves.h:138
	Basic2dColouredVertex::Vector2 mScaleFactors;

public:
	// Curves.h:51
	void SmoothStep(const Vector3Template<float> &, const Vector2Template<float> &);

	// Curves.h:62
	float32_t Evaluate(const Vector2Template<float> &, const Vector2Template<float> &, float32_t);

	// Curves.h:77
	float32_t Evaluate(const Vector3Template<float> &, const Vector2Template<float> &, float32_t);

	// Curves.h:126
	float32_t Evaluate(float32_t) const;

}

// BrnEffectsDebugComponent.h:36
namespace BrnEffects {
	// Curves.h:27
	namespace Curves {
		struct SmoothStep;

	}

}

// Curves.h:29
struct BrnEffects::Curves::SmoothStep {
	// vector3.h:125
	typedef Vector3Template<float> Vector3;

	// Curves.h:135
	SmoothStep::Vector3 mCurveParams;

	// Curves.h:138
	FontChar::Vector2 mScaleFactors;

public:
	// Curves.h:51
	void SmoothStep(const Vector3Template<float> &, const Vector2Template<float> &);

	// Curves.h:62
	float32_t Evaluate(const Vector2Template<float> &, const Vector2Template<float> &, float32_t);

	// Curves.h:77
	float32_t Evaluate(const Vector3Template<float> &, const Vector2Template<float> &, float32_t);

	// Curves.h:126
	float32_t Evaluate(float32_t) const;

}

// Curves.h:24
namespace BrnEffects {
	// Curves.h:27
	namespace Curves {
		struct SmoothStep;

	}

	struct EffectsEnvironmentInterface;

}

// Curves.h:29
struct BrnEffects::Curves::SmoothStep {
	// vector3.h:125
	typedef Vector3Template<float> Vector3;

	// Curves.h:135
	SmoothStep::Vector3 mCurveParams;

	// vector2.h:123
	typedef Vector2Template<float> Vector2;

	// Curves.h:138
	SmoothStep::Vector2 mScaleFactors;

public:
	// Curves.h:51
	void SmoothStep(const Vector3Template<float> &, const Vector2Template<float> &);

	// Curves.h:62
	float32_t Evaluate(const Vector2Template<float> &, const Vector2Template<float> &, float32_t);

	// Curves.h:77
	float32_t Evaluate(const Vector3Template<float> &, const Vector2Template<float> &, float32_t);

	// Curves.h:126
	float32_t Evaluate(float32_t) const;

}

// Curves.h:29
struct BrnEffects::Curves::SmoothStep {
	// Curves.h:135
	Road::Vector3 mCurveParams;

	// Curves.h:138
	AISection::Vector2 mScaleFactors;

public:
	// Curves.h:51
	void SmoothStep(const Vector3Template<float> &, const Vector2Template<float> &);

	// Curves.h:62
	float32_t Evaluate(const Vector2Template<float> &, const Vector2Template<float> &, float32_t);

	// Curves.h:77
	float32_t Evaluate(const Vector3Template<float> &, const Vector2Template<float> &, float32_t);

	// Curves.h:126
	float32_t Evaluate(float32_t) const;

}

// Curves.h:24
namespace BrnEffects {
	// Curves.h:27
	namespace Curves {
		struct SmoothStep;

	}

	struct BloomData;

	struct VignetteData;

	struct DepthOfFieldData;

	struct BlurData;

	struct TintData;

	struct TintData2d;

	struct BrnCrashTriangleCache;

	struct BrnCrashLineTriangleCacheFormat;

	struct BrnCrashTrianglePackedFormat;

}

// Curves.h:24
namespace BrnEffects {
	// Curves.h:27
	namespace Curves {
		struct SmoothStep;

	}

}

// Curves.h:24
namespace BrnEffects {
	// Curves.h:27
	namespace Curves {
		struct SmoothStep;

	}

	struct BloomData;

	struct VignetteData;

	struct DepthOfFieldData;

	struct BlurData;

	struct TintData;

	struct TintData2d;

	struct EffectsEnvironmentInterface;

	struct BrnCrashTriangleCache;

	struct BrnCrashLineTriangleCacheFormat;

	struct BrnCrashTrianglePackedFormat;

}


// CgsPerlinNoise.h:32
namespace CgsNumeric {
	struct PerlinNoise;

	struct PerlinImprovedNoise;

}

// CgsPerlinNoise.h:45
struct CgsNumeric::PerlinNoise {
public:
	// CgsPerlinNoise.h:50
	float32_t Noise(int32_t);

	// CgsPerlinNoise.h:54
	float32_t Noise(float32_t);

private:
	// CgsPerlinNoise.h:63
	float32_t CosineInterpolation(float32_t, float32_t, float32_t);

}

// CgsPerlinNoise.h:78
struct CgsNumeric::PerlinImprovedNoise {
private:
	// CgsPerlinNoise.h:87
	extern int[512] mpaPermutations;

public:
	// CgsPerlinNoise.h:80
	float32_t Noise(float32_t, float32_t, float32_t);

private:
	// CgsPerlinNoise.h:83
	float32_t Fade(float32_t);

	// CgsPerlinNoise.h:84
	float32_t Lerp(float32_t, float32_t, float32_t);

	// CgsPerlinNoise.h:85
	float32_t Grad(int, float32_t, float32_t, float32_t);

}


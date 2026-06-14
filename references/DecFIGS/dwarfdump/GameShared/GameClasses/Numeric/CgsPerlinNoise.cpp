// CgsPerlinNoise.cpp:68
void CgsNumeric::PerlinImprovedNoise::Fade(float32_t  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPerlinNoise.cpp:90
void CgsNumeric::PerlinImprovedNoise::Grad(int  hash, float32_t  x, float32_t  y, float32_t  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPerlinNoise.cpp:92
		int h;

		// CgsPerlinNoise.cpp:93
		float32_t u;

		// CgsPerlinNoise.cpp:94
		float32_t v;

	}
}

// CgsPerlinNoise.cpp:79
void CgsNumeric::PerlinImprovedNoise::Lerp(float32_t  t, float32_t  a, float32_t  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPerlinNoise.cpp:106
void CgsNumeric::PerlinImprovedNoise::Noise(float32_t  x, float32_t  y, float32_t  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPerlinNoise.cpp:108
		int32_t X;

		// CgsPerlinNoise.cpp:109
		int32_t Y;

		// CgsPerlinNoise.cpp:110
		int32_t Z;

		// CgsPerlinNoise.cpp:116
		float32_t u;

		// CgsPerlinNoise.cpp:117
		float32_t v;

		// CgsPerlinNoise.cpp:118
		float32_t w;

		// CgsPerlinNoise.cpp:120
		int32_t A;

		// CgsPerlinNoise.cpp:121
		int32_t AA;

		// CgsPerlinNoise.cpp:122
		int32_t AB;

		// CgsPerlinNoise.cpp:124
		int32_t B;

		// CgsPerlinNoise.cpp:125
		int32_t BA;

		// CgsPerlinNoise.cpp:126
		int32_t BB;

		rw::math::fpu::Floor<float>(/* parameters */);
		rw::math::fpu::Floor<float>(/* parameters */);
		rw::math::fpu::Floor<float>(/* parameters */);
	}
	__fsel(/* parameters */);
	__fsel(/* parameters */);
	__fsel(/* parameters */);
	Fade(/* parameters */);
	__fsel(/* parameters */);
	__fsel(/* parameters */);
	Fade(/* parameters */);
	Fade(/* parameters */);
	Grad(/* parameters */);
	Grad(/* parameters */);
	Lerp(/* parameters */);
	Grad(/* parameters */);
	Grad(/* parameters */);
	Lerp(/* parameters */);
	Grad(/* parameters */);
	Grad(/* parameters */);
	Lerp(/* parameters */);
	Grad(/* parameters */);
	Grad(/* parameters */);
}

// CgsPerlinNoise.cpp:147
void CgsNumeric::PerlinNoise::Noise(int32_t  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPerlinNoise.cpp:160
void CgsNumeric::PerlinNoise::CosineInterpolation(float32_t  lfA, float32_t  lfB, float32_t  lfX) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPerlinNoise.cpp:162
		float32_t lfVal;

	}
}

// CgsPerlinNoise.cpp:174
void CgsNumeric::PerlinNoise::Noise(float32_t  lfX) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPerlinNoise.cpp:178
		float32_t lfXFloor;

		// CgsPerlinNoise.cpp:179
		float32_t lfXFraction;

		// CgsPerlinNoise.cpp:180
		int32_t lnX;

		rw::math::fpu::Floor<float>(/* parameters */);
	}
	__fsel(/* parameters */);
	CosineInterpolation(/* parameters */);
	CgsNumeric::PerlinNoise::Noise(/* parameters */);
	CgsNumeric::PerlinNoise::Noise(/* parameters */);
}

// CgsPerlinNoise.cpp:25

// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundUtils.h:41
	namespace Utils {
		// CgsSoundUtils.cpp:148
		extern int32_t IntClamp(int32_t, int32_t, int32_t);

		// CgsSoundUtils.cpp:138
		extern int32_t CrossFadeVol(int32_t, int32_t);

		// CgsSoundUtils.cpp:805
		extern Vector2 GetVectorFromSpline(VecFloat, const rw::math::vpu::Matrix44 &);

		// CgsSoundUtils.cpp:783
		extern float32_t GetValueFromSpline(float32_t, const rw::math::vpu::Matrix44 &);

		// CgsSoundUtils.cpp:47
		extern int32_t[513] gaArraySinTable;

		// CgsSoundUtils.cpp:85
		extern float32_t[513] gafArraySinTable;

		// CgsSoundUtils.cpp:129
		const float32_t KF_LAST_ELEMENT_IN_ARRAY;

	}

}

// CgsSoundUtils.cpp:445
void CgsSound::Utils::InterpolateLine::InterpolateLine() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSoundUtils.cpp:457
void CgsSound::Utils::InterpolateLine::~InterpolateLine() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSoundUtils.cpp:577
void CgsSound::Utils::Slope::~Slope() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSoundUtils.cpp:651
void CgsSound::Utils::Graph::Graph(Vector2 *  laPoints, const uint8_t  lu8NumOfPoints) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSoundUtils.cpp:159
void CgsSound::Utils::Curve::GetOutput(float32_t  lfInput, CgsSound::Utils::Curve::ECurveType  leCurveType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundUtils.cpp:201
		float32_t lfOut;

	}
	{
		// CgsSoundUtils.cpp:193
		int32_t lnIndex;

	}
	{
		// CgsSoundUtils.cpp:184
		float32_t lfOut;

	}
}

// CgsSoundUtils.cpp:466
void CgsSound::Utils::InterpolateLine::Initialize(float32_t  lfStart, float32_t  lfFinish, float32_t  lfLength, CgsSound::Utils::Curve::ECurveType  leCurve) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSoundUtils.cpp:519
void CgsSound::Utils::InterpolateLine::Update(float32_t  lfDeltaTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundUtils.cpp:539
		float32_t t;

		// CgsSoundUtils.cpp:540
		float32_t s;

		// CgsSoundUtils.cpp:541
		float32_t x;

		// CgsSoundUtils.cpp:543
		float32_t lfDelta;

		// CgsSoundUtils.cpp:544
		float32_t Result;

	}
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
}

// CgsSoundUtils.cpp:489
void CgsSound::Utils::InterpolateLine::Update(float32_t  lfDeltaTime, float32_t  lfNewFinish) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSoundUtils.cpp:501
void CgsSound::Utils::InterpolateLine::Reset(float32_t  lfResetValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSoundUtils.cpp:212
void CgsSound::Utils::Curve::GetOutput(int32_t  lnInput, CgsSound::Utils::Curve::ECurveType  leCurveType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundUtils.cpp:228
		int32_t lnRemainder;

		// CgsSoundUtils.cpp:229
		int32_t nindex;

		// CgsSoundUtils.cpp:231
		int32_t lnMain;

		// CgsSoundUtils.cpp:232
		int32_t lnDifference;

	}
	{
		// CgsSoundUtils.cpp:264
		int32_t lnOut;

	}
	{
		// CgsSoundUtils.cpp:250
		int32_t lnRemainder;

		// CgsSoundUtils.cpp:251
		int32_t lnIndex;

		// CgsSoundUtils.cpp:254
		int32_t lnOut;

		// CgsSoundUtils.cpp:255
		int32_t lnDiff;

		// CgsSoundUtils.cpp:256
		int32_t lnScaledDiff;

		// CgsSoundUtils.cpp:257
		int32_t lnQOut;

	}
	{
		// CgsSoundUtils.cpp:242
		int32_t lnOut;

	}
}

// CgsSoundUtils.cpp:600
void CgsSound::Utils::Slope::Initialize(const const SlopeParams &  params) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Abs<float>(/* parameters */);
}

// CgsSoundUtils.cpp:586
void CgsSound::Utils::Slope::Initialize(float32_t  lfMinInput, float32_t  lfMaxInput, float32_t  lfMinOutput, float32_t  lfMaxOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundUtils.cpp:589
		SlopeParams lTempparams;

	}
}

// CgsSoundUtils.cpp:641
void CgsSound::Utils::Slope::GetParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSoundUtils.cpp:612
void CgsSound::Utils::Slope::GetValue(float32_t  lfInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundUtils.cpp:615
		float32_t lfScale;

		// CgsSoundUtils.cpp:618
		float32_t lfOutput;

		rw::math::vpu::Clamp(/* parameters */);
	}
}

// CgsSoundUtils.cpp:627
void CgsSound::Utils::Slope::GetValue(float32_t  lfInput, CgsSound::Utils::Curve::ECurveType  lCurve) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundUtils.cpp:630
		float32_t lfScale;

		// CgsSoundUtils.cpp:635
		float32_t lfOutput;

	}
	rw::math::vpu::Clamp(/* parameters */);
}

// CgsSoundUtils.cpp:659
void CgsSound::Utils::Graph::GetYValue(float32_t  lfInputXAxis) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSoundUtils.cpp:676
		uint8_t i;

		// CgsSoundUtils.cpp:686
		float lfDeltaX;

		// CgsSoundUtils.cpp:687
		float lfResult;

		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		rw::math::vpu::Clamp(/* parameters */);
		rw::math::vpu::Min<float>(/* parameters */);
		rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	}
	rw::math::vpu::operator>=<VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::GetX(/* parameters */);
	rw::math::vpu::operator< <VectorAxisX>(/* parameters */);
	rw::math::vpu::Vector2::GetX(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Lerp(/* parameters */);
	{
	}
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
}

// CgsSoundUtils.cpp:552
void CgsSound::Utils::Slope::Slope() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSoundUtils.cpp:556
void CgsSound::Utils::Slope::Slope(const const SlopeParams &  params) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSoundUtils.cpp:566
void CgsSound::Utils::Slope::Slope(float32_t  lfMinInput, float32_t  lfMaxInput, float32_t  lfMinOutput, float32_t  lfMaxOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


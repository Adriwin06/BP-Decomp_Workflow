// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnEnvironmentUtil.h:31
	namespace EnvironmentSettings {
		// BrnEnvironmentData.cpp:247
		extern void BuildTimeOfDay(char *, float);

		// BrnEnvironmentData.cpp:282
		extern bool ParseTimeOfDay(float &, const char *);

		// BrnEnvironmentData.cpp:493
		extern bool IsFieldEmpty(std::FILE *);

		// BrnEnvironmentData.cpp:623
		extern bool ConsumeEOL(std::FILE *);

		// BrnEnvironmentData.cpp:505
		extern bool ConsumeBlanks(std::FILE *);

		// BrnEnvironmentData.cpp:611
		extern bool ConsumeFieldValue(char *, std::FILE *);

		// BrnEnvironmentData.cpp:544
		extern bool ConsumeFieldValue(float32_t &, std::FILE *);

		// BrnEnvironmentData.cpp:527
		extern bool ConsumeFieldName(char *, std::FILE *);

		// BrnEnvironmentData.cpp:557
		extern bool ConsumeFieldValue(float32_t &, float32_t &, std::FILE *);

		// BrnEnvironmentData.cpp:570
		extern bool ConsumeFieldValue(float32_t &, float32_t &, float32_t &, std::FILE *);

		// BrnEnvironmentData.cpp:583
		extern bool ConsumeFieldValue(Vector2 &, std::FILE *);

		// BrnEnvironmentData.cpp:597
		extern bool ConsumeFieldValue(Vector3 &, std::FILE *);

		// BrnEnvironmentData.cpp:189
		extern bool ConsumeFieldValue<BrnWorld::EnvironmentSettings::CloudsData>(CloudsData &, const char *, std::FILE *);

		// BrnEnvironmentData.cpp:189
		extern bool ConsumeFieldValue<BrnWorld::EnvironmentSettings::LightingData>(LightingData &, const char *, std::FILE *);

		// BrnEnvironmentData.cpp:189
		extern bool ConsumeFieldValue<BrnWorld::EnvironmentSettings::ScatteringData>(ScatteringData &, const char *, std::FILE *);

		// BrnEnvironmentData.cpp:189
		extern bool ConsumeFieldValue<BrnEffects::VignetteData>(VignetteData &, const char *, std::FILE *);

		// BrnEnvironmentData.cpp:189
		extern bool ConsumeFieldValue<BrnEffects::BloomData>(BloomData &, const char *, std::FILE *);

		// BrnEnvironmentData.cpp:317
		extern bool ParseEnvironmentFile(float32_t &, char &[4][256], float32_t &[4], Keyframe::BloomData &, Keyframe::VignetteData &, char *, ScatteringData &, LightingData &, CloudsData &, const char *);

	}

}

// BrnEnvironmentData.cpp:998
void BrnWorld::EnvironmentSettings::CloudsData::SetToBlend(const const CloudsData &  lValue0, float  lfWeight0, const const CloudsData &  lValue1, float  lfWeight1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentData.cpp:1000
		int i;

		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
}

// BrnEnvironmentData.cpp:1042
void BrnWorld::EnvironmentSettings::CloudsData::SetToBlend(const const CloudsData &  lValueA0, float32_t  lfWeightA0, const const CloudsData &  lValueA1, float32_t  lfWeightA1, const const CloudsData &  lValueB0, float32_t  lfWeightB0, const const CloudsData &  lValueB1, float32_t  lfWeightB1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentData.cpp:1045
		int i;

		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+(/* parameters */);
	}
}

// BrnEnvironmentData.cpp:29
// BrnEnvironmentData.cpp:30
// BrnEnvironmentData.cpp:31
// BrnEnvironmentData.cpp:32
// BrnEnvironmentData.cpp:33
// BrnEnvironmentData.cpp:34
// BrnEnvironmentData.cpp:35
// BrnEnvironmentData.cpp:36
// BrnEnvironmentData.cpp:37
// BrnEnvironmentData.cpp:39
// BrnEnvironmentData.cpp:40
// BrnEnvironmentData.cpp:41
// BrnEnvironmentData.cpp:42
// BrnEnvironmentData.cpp:43
// BrnEnvironmentData.cpp:44
// BrnEnvironmentData.cpp:45
// BrnEnvironmentData.cpp:46
// BrnEnvironmentData.cpp:47
// BrnEnvironmentData.cpp:49
// BrnEnvironmentData.cpp:50
// BrnEnvironmentData.cpp:51
// BrnEnvironmentData.cpp:76
// BrnEnvironmentData.cpp:53
// BrnEnvironmentData.cpp:54
// BrnEnvironmentData.cpp:56
// BrnEnvironmentData.cpp:57
// BrnEnvironmentData.cpp:58
// BrnEnvironmentData.cpp:59
// BrnEnvironmentData.cpp:60
// BrnEnvironmentData.cpp:61
// BrnEnvironmentData.cpp:62
// BrnEnvironmentData.cpp:102
// BrnEnvironmentData.cpp:64
// BrnEnvironmentData.cpp:65
// BrnEnvironmentData.cpp:66
// BrnEnvironmentData.cpp:67
// BrnEnvironmentData.cpp:68
// BrnEnvironmentData.cpp:69
// BrnEnvironmentData.cpp:70
// BrnEnvironmentData.cpp:71
// BrnEnvironmentData.cpp:115

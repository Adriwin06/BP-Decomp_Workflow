// BrnEnvironmentData.h:47
extern const rw::math::vpu::Vector3 kv3DefSkyTopColour;

// BrnEnvironmentData.h:48
extern const rw::math::vpu::Vector3 kv3DefSkyHorColour;

// BrnEnvironmentData.h:49
extern const rw::math::vpu::Vector3 kv3DefSkySunColour;

// BrnEnvironmentData.h:50
extern const float32_t kfDefSkyHorPow;

// BrnEnvironmentData.h:51
extern const float32_t kfDefSkySunPow;

// BrnEnvironmentData.h:52
extern const float32_t kfDefSkyDrk;

// BrnEnvironmentData.h:53
extern const float32_t kfDefSkyHorBleedScl;

// BrnEnvironmentData.h:54
extern const float32_t kfDefSkyHorBleedPow;

// BrnEnvironmentData.h:55
extern const float32_t kfDefSkySunBleedPow;

// BrnEnvironmentData.h:57
extern const rw::math::vpu::Vector3 kv3DefScattTopColour;

// BrnEnvironmentData.h:58
extern const rw::math::vpu::Vector3 kv3DefScattHorColour;

// BrnEnvironmentData.h:59
extern const rw::math::vpu::Vector3 kv3DefScattSunColour;

// BrnEnvironmentData.h:60
extern const float32_t kfDefScattHorPow;

// BrnEnvironmentData.h:61
extern const float32_t kfDefScattSunPow;

// BrnEnvironmentData.h:62
extern const float32_t kfDefScattDrk;

// BrnEnvironmentData.h:63
extern const float32_t kfDefScattHorBleedScl;

// BrnEnvironmentData.h:64
extern const float32_t kfDefScattHorBleedPow;

// BrnEnvironmentData.h:65
extern const float32_t kfDefScattSunBleedPow;

// BrnEnvironmentData.h:67
extern const float32_t[2] kafDefScattDist;

// BrnEnvironmentData.h:68
extern const float32_t kfDefScattPow;

// BrnEnvironmentData.h:69
extern const float32_t kfDefScattCap;

// BrnEnvironmentData.h:100
extern const NamedField[22] kaNamedFields;

// BrnEnvironmentData.h:127
extern const rw::math::vpu::Vector3 kv3DefKeyLightColour;

// BrnEnvironmentData.h:128
extern const rw::math::vpu::Vector3 kv3DefSpecularColour;

// BrnEnvironmentData.h:129
extern const rw::math::vpu::Vector3 kv3DefKeyFillColour;

// BrnEnvironmentData.h:130
extern const rw::math::vpu::Vector3 kv3DefShadowFillColour;

// BrnEnvironmentData.h:131
extern const rw::math::vpu::Vector3 kv3DefRightFillColour;

// BrnEnvironmentData.h:132
extern const rw::math::vpu::Vector3 kv3DefLeftFillColour;

// BrnEnvironmentData.h:133
extern const rw::math::vpu::Vector3 kv3DefUpFillColour;

// BrnEnvironmentData.h:134
extern const rw::math::vpu::Vector3 kv3DefDownFillColour;

// BrnEnvironmentData.h:135
extern const float32_t kfDefAmbientIrradianceScale;

// BrnEnvironmentData.h:150
extern const NamedField[9] kaNamedFields;

// BrnEnvironmentData.h:176
extern const int32_t kiLayerCount = 2;

// BrnEnvironmentData.h:178
extern Vector3[2] kav3DefLayerLiteColour;

// BrnEnvironmentData.h:179
extern Vector3[2] kav3DefLayerDarkColour;

// BrnEnvironmentData.h:180
extern const float32_t[2] kafDefLayerDensity;

// BrnEnvironmentData.h:181
extern const float32_t[2] kafDefLayerFeathering;

// BrnEnvironmentData.h:182
extern const float32_t[2] kafDefLayerOpacity;

// BrnEnvironmentData.h:183
extern const float32_t[2] kafDefLayerSpeed;

// BrnEnvironmentData.h:184
extern const float32_t[2] kafDefLayerScale;

// BrnEnvironmentData.h:185
extern const float32_t kfDefDirectionAngle;

// BrnEnvironmentData.h:198
extern const NamedField[15] kaNamedFields;

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnEnvironmentUtil.h:31
	namespace EnvironmentSettings {
		// BrnEnvironmentData.h:777
		extern bool ParseEnvironmentFile(float32_t &, Keyframe::BloomData &, Keyframe::VignetteData &, char *, ScatteringData &, LightingData &, CloudsData &, const char *);

	}

}

// BrnEnvironmentData.h:46
struct BrnWorld::EnvironmentSettings::ScatteringData {
	// BrnEnvironmentData.h:47
	extern const rw::math::vpu::Vector3 kv3DefSkyTopColour;

	// BrnEnvironmentData.h:48
	extern const rw::math::vpu::Vector3 kv3DefSkyHorColour;

	// BrnEnvironmentData.h:49
	extern const rw::math::vpu::Vector3 kv3DefSkySunColour;

	// BrnEnvironmentData.h:50
	extern const float32_t kfDefSkyHorPow;

	// BrnEnvironmentData.h:51
	extern const float32_t kfDefSkySunPow;

	// BrnEnvironmentData.h:52
	extern const float32_t kfDefSkyDrk;

	// BrnEnvironmentData.h:53
	extern const float32_t kfDefSkyHorBleedScl;

	// BrnEnvironmentData.h:54
	extern const float32_t kfDefSkyHorBleedPow;

	// BrnEnvironmentData.h:55
	extern const float32_t kfDefSkySunBleedPow;

	// BrnEnvironmentData.h:57
	extern const rw::math::vpu::Vector3 kv3DefScattTopColour;

	// BrnEnvironmentData.h:58
	extern const rw::math::vpu::Vector3 kv3DefScattHorColour;

	// BrnEnvironmentData.h:59
	extern const rw::math::vpu::Vector3 kv3DefScattSunColour;

	// BrnEnvironmentData.h:60
	extern const float32_t kfDefScattHorPow;

	// BrnEnvironmentData.h:61
	extern const float32_t kfDefScattSunPow;

	// BrnEnvironmentData.h:62
	extern const float32_t kfDefScattDrk;

	// BrnEnvironmentData.h:63
	extern const float32_t kfDefScattHorBleedScl;

	// BrnEnvironmentData.h:64
	extern const float32_t kfDefScattHorBleedPow;

	// BrnEnvironmentData.h:65
	extern const float32_t kfDefScattSunBleedPow;

	// BrnEnvironmentData.h:67
	extern const float32_t[2] kafDefScattDist;

	// BrnEnvironmentData.h:68
	extern const float32_t kfDefScattPow;

	// BrnEnvironmentData.h:69
	extern const float32_t kfDefScattCap;

	// BrnEnvironmentData.h:71
	Vector3 mv3SkyTopColour;

	// BrnEnvironmentData.h:72
	Vector3 mv3SkyHorColour;

	// BrnEnvironmentData.h:73
	Vector3 mv3SkySunColour;

	// BrnEnvironmentData.h:74
	float32_t mfSkyHorPow;

	// BrnEnvironmentData.h:75
	float32_t mfSkySunPow;

	// BrnEnvironmentData.h:76
	float32_t mfSkyDrk;

	// BrnEnvironmentData.h:77
	float32_t mfSkyHorBleedScl;

	// BrnEnvironmentData.h:78
	float32_t mfSkyHorBleedPow;

	// BrnEnvironmentData.h:79
	float32_t mfSkySunBleedPow;

	// BrnEnvironmentData.h:81
	Vector3 mv3ScattTopColour;

	// BrnEnvironmentData.h:82
	Vector3 mv3ScattHorColour;

	// BrnEnvironmentData.h:83
	Vector3 mv3ScattSunColour;

	// BrnEnvironmentData.h:84
	float32_t mfScattHorPow;

	// BrnEnvironmentData.h:85
	float32_t mfScattSunPow;

	// BrnEnvironmentData.h:86
	float32_t mfScattDrk;

	// BrnEnvironmentData.h:87
	float32_t mfScattHorBleedScl;

	// BrnEnvironmentData.h:88
	float32_t mfScattHorBleedPow;

	// BrnEnvironmentData.h:89
	float32_t mfScattSunBleedPow;

	// BrnEnvironmentData.h:91
	float32_t[2] mafScattDist;

	// BrnEnvironmentData.h:92
	float32_t mfScattPow;

	// BrnEnvironmentData.h:93
	float32_t mfScattCap;

	// BrnEnvironmentData.h:100
	extern const NamedField[22] kaNamedFields;

public:
	// BrnEnvironmentData.h:103
	void Construct();

	// BrnEnvironmentData.h:107
	void EndianSwap(ScatteringData &);

	// BrnEnvironmentData.h:112
	void SetToBlend(const ScatteringData &, float32_t, const ScatteringData &, float32_t);

	// BrnEnvironmentData.h:119
	void SetToBlend(const ScatteringData &, float32_t, const ScatteringData &, float32_t, const ScatteringData &, float32_t, const ScatteringData &, float32_t);

}

// BrnEnvironmentData.h:125
struct BrnWorld::EnvironmentSettings::LightingData {
	// BrnEnvironmentData.h:127
	extern const rw::math::vpu::Vector3 kv3DefKeyLightColour;

	// BrnEnvironmentData.h:128
	extern const rw::math::vpu::Vector3 kv3DefSpecularColour;

	// BrnEnvironmentData.h:129
	extern const rw::math::vpu::Vector3 kv3DefKeyFillColour;

	// BrnEnvironmentData.h:130
	extern const rw::math::vpu::Vector3 kv3DefShadowFillColour;

	// BrnEnvironmentData.h:131
	extern const rw::math::vpu::Vector3 kv3DefRightFillColour;

	// BrnEnvironmentData.h:132
	extern const rw::math::vpu::Vector3 kv3DefLeftFillColour;

	// BrnEnvironmentData.h:133
	extern const rw::math::vpu::Vector3 kv3DefUpFillColour;

	// BrnEnvironmentData.h:134
	extern const rw::math::vpu::Vector3 kv3DefDownFillColour;

	// BrnEnvironmentData.h:135
	extern const float32_t kfDefAmbientIrradianceScale;

	// BrnEnvironmentData.h:137
	Vector3 mv3KeyLightColour;

	// BrnEnvironmentData.h:138
	Vector3 mv3SpecularColour;

	// BrnEnvironmentData.h:140
	Vector3 mv3KeyFillColour;

	// BrnEnvironmentData.h:141
	Vector3 mv3ShadowFillColour;

	// BrnEnvironmentData.h:142
	Vector3 mv3RightFillColour;

	// BrnEnvironmentData.h:143
	Vector3 mv3LeftFillColour;

	// BrnEnvironmentData.h:144
	Vector3 mv3UpFillColour;

	// BrnEnvironmentData.h:145
	Vector3 mv3DownFillColour;

	// BrnEnvironmentData.h:146
	float32_t mfAmbientIrradianceScale;

	// BrnEnvironmentData.h:150
	extern const NamedField[9] kaNamedFields;

public:
	// BrnEnvironmentData.h:153
	void Construct();

	// BrnEnvironmentData.h:157
	void EndianSwap(LightingData &);

	// BrnEnvironmentData.h:162
	void SetToBlend(const LightingData &, float32_t, const LightingData &, float32_t);

	// BrnEnvironmentData.h:169
	void SetToBlend(const LightingData &, float32_t, const LightingData &, float32_t, const LightingData &, float32_t, const LightingData &, float32_t);

}

// BrnEnvironmentData.h:175
struct BrnWorld::EnvironmentSettings::CloudsData {
	// BrnEnvironmentData.h:176
	extern const int32_t kiLayerCount = 2;

	// BrnEnvironmentData.h:178
	extern Vector3[2] kav3DefLayerLiteColour;

	// BrnEnvironmentData.h:179
	extern Vector3[2] kav3DefLayerDarkColour;

	// BrnEnvironmentData.h:180
	extern const float32_t[2] kafDefLayerDensity;

	// BrnEnvironmentData.h:181
	extern const float32_t[2] kafDefLayerFeathering;

	// BrnEnvironmentData.h:182
	extern const float32_t[2] kafDefLayerOpacity;

	// BrnEnvironmentData.h:183
	extern const float32_t[2] kafDefLayerSpeed;

	// BrnEnvironmentData.h:184
	extern const float32_t[2] kafDefLayerScale;

	// BrnEnvironmentData.h:185
	extern const float32_t kfDefDirectionAngle;

	// BrnEnvironmentData.h:187
	Vector3[2] mav3LayerLiteColour;

	// BrnEnvironmentData.h:188
	Vector3[2] mav3LayerDarkColour;

	// BrnEnvironmentData.h:189
	float32_t[2] mafLayerDensity;

	// BrnEnvironmentData.h:190
	float32_t[2] mafLayerFeathering;

	// BrnEnvironmentData.h:191
	float32_t[2] mafLayerOpacity;

	// BrnEnvironmentData.h:192
	float32_t[2] mafLayerSpeed;

	// BrnEnvironmentData.h:193
	float32_t[2] mafLayerScale;

	// BrnEnvironmentData.h:194
	float32_t mfDirectionAngle;

	// BrnEnvironmentData.h:198
	extern const NamedField[15] kaNamedFields;

public:
	// BrnEnvironmentData.h:201
	void Construct();

	// BrnEnvironmentData.h:205
	void EndianSwap(CloudsData &);

	// BrnEnvironmentData.h:210
	void SetToBlend(const CloudsData &, float32_t, const CloudsData &, float32_t);

	// BrnEnvironmentData.h:217
	void SetToBlend(const CloudsData &, float32_t, const CloudsData &, float32_t, const CloudsData &, float32_t, const CloudsData &, float32_t);

}


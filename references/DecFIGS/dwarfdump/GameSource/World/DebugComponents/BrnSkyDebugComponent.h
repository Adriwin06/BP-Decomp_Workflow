// BrnSkyDebugComponent.h:55
struct BrnWorld::EnvironmentSettings::DebugComponent : public CgsDev::DebugComponent {
private:
	// BrnSkyDebugComponent.h:90
	EnvironmentManager * mpEnvironmentManager;

	// BrnSkyDebugComponent.h:95
	bool mbPrintDebugInfo;

	// BrnSkyDebugComponent.h:97
	bool mbSimulateTimeOfDay;

	// BrnSkyDebugComponent.h:98
	uint32_t muTimeOfDay_HH;

	// BrnSkyDebugComponent.h:98
	uint32_t muTimeOfDay_MM;

	// BrnSkyDebugComponent.h:98
	uint32_t muTimeOfDay_SS;

	// BrnSkyDebugComponent.h:99
	float32_t mfTimeOfDayDelta;

	// BrnSkyDebugComponent.h:100
	float32_t mfCloudDelta;

	// BrnSkyDebugComponent.h:102
	float32_t mfSkyTopColour_r;

	// BrnSkyDebugComponent.h:102
	float32_t mfSkyTopColour_g;

	// BrnSkyDebugComponent.h:102
	float32_t mfSkyTopColour_b;

	// BrnSkyDebugComponent.h:103
	float32_t mfSkyHorColour_r;

	// BrnSkyDebugComponent.h:103
	float32_t mfSkyHorColour_g;

	// BrnSkyDebugComponent.h:103
	float32_t mfSkyHorColour_b;

	// BrnSkyDebugComponent.h:104
	float32_t mfSkySunColour_r;

	// BrnSkyDebugComponent.h:104
	float32_t mfSkySunColour_g;

	// BrnSkyDebugComponent.h:104
	float32_t mfSkySunColour_b;

	// BrnSkyDebugComponent.h:105
	float32_t mfSkyHorPow;

	// BrnSkyDebugComponent.h:106
	float32_t mfSkySunPow;

	// BrnSkyDebugComponent.h:107
	float32_t mfSkyDrk;

	// BrnSkyDebugComponent.h:108
	float32_t mfSkyHorBleedScl;

	// BrnSkyDebugComponent.h:109
	float32_t mfSkyHorBleedPow;

	// BrnSkyDebugComponent.h:110
	float32_t mfSkySunBleedPow;

	// BrnSkyDebugComponent.h:112
	float32_t mfScattTopColour_r;

	// BrnSkyDebugComponent.h:112
	float32_t mfScattTopColour_g;

	// BrnSkyDebugComponent.h:112
	float32_t mfScattTopColour_b;

	// BrnSkyDebugComponent.h:113
	float32_t mfScattHorColour_r;

	// BrnSkyDebugComponent.h:113
	float32_t mfScattHorColour_g;

	// BrnSkyDebugComponent.h:113
	float32_t mfScattHorColour_b;

	// BrnSkyDebugComponent.h:114
	float32_t mfScattSunColour_r;

	// BrnSkyDebugComponent.h:114
	float32_t mfScattSunColour_g;

	// BrnSkyDebugComponent.h:114
	float32_t mfScattSunColour_b;

	// BrnSkyDebugComponent.h:115
	float32_t mfScattHorPow;

	// BrnSkyDebugComponent.h:116
	float32_t mfScattSunPow;

	// BrnSkyDebugComponent.h:117
	float32_t mfScattDrk;

	// BrnSkyDebugComponent.h:118
	float32_t mfScattHorBleedScl;

	// BrnSkyDebugComponent.h:119
	float32_t mfScattHorBleedPow;

	// BrnSkyDebugComponent.h:120
	float32_t mfScattSunBleedPow;

	// BrnSkyDebugComponent.h:121
	float32_t[2] mafScattDist;

	// BrnSkyDebugComponent.h:122
	float32_t mfScattPow;

	// BrnSkyDebugComponent.h:123
	float32_t mfScattCap;

	// BrnSkyDebugComponent.h:125
	float32_t mfKeyFillColour_r;

	// BrnSkyDebugComponent.h:125
	float32_t mfKeyFillColour_g;

	// BrnSkyDebugComponent.h:125
	float32_t mfKeyFillColour_b;

	// BrnSkyDebugComponent.h:126
	float32_t mfShadowFillColour_r;

	// BrnSkyDebugComponent.h:126
	float32_t mfShadowFillColour_g;

	// BrnSkyDebugComponent.h:126
	float32_t mfShadowFillColour_b;

	// BrnSkyDebugComponent.h:127
	float32_t mfRightFillColour_r;

	// BrnSkyDebugComponent.h:127
	float32_t mfRightFillColour_g;

	// BrnSkyDebugComponent.h:127
	float32_t mfRightFillColour_b;

	// BrnSkyDebugComponent.h:128
	float32_t mfLeftFillColour_r;

	// BrnSkyDebugComponent.h:128
	float32_t mfLeftFillColour_g;

	// BrnSkyDebugComponent.h:128
	float32_t mfLeftFillColour_b;

	// BrnSkyDebugComponent.h:129
	float32_t mfUpFillColour_r;

	// BrnSkyDebugComponent.h:129
	float32_t mfUpFillColour_g;

	// BrnSkyDebugComponent.h:129
	float32_t mfUpFillColour_b;

	// BrnSkyDebugComponent.h:130
	float32_t mfDownFillColour_r;

	// BrnSkyDebugComponent.h:130
	float32_t mfDownFillColour_g;

	// BrnSkyDebugComponent.h:130
	float32_t mfDownFillColour_b;

	// BrnSkyDebugComponent.h:132
	float32_t mfKeyLightColour_r;

	// BrnSkyDebugComponent.h:132
	float32_t mfKeyLightColour_g;

	// BrnSkyDebugComponent.h:132
	float32_t mfKeyLightColour_b;

	// BrnSkyDebugComponent.h:133
	float32_t mfSpecularColour_r;

	// BrnSkyDebugComponent.h:133
	float32_t mfSpecularColour_g;

	// BrnSkyDebugComponent.h:133
	float32_t mfSpecularColour_b;

	// BrnSkyDebugComponent.h:134
	float32_t mfAmbientIrradianceScale;

	// BrnSkyDebugComponent.h:136
	float32_t[2] mafCloudLayerDensity;

	// BrnSkyDebugComponent.h:137
	float32_t[2] mafCloudLayerFeathering;

	// BrnSkyDebugComponent.h:138
	float32_t[2] mafCloudLayerOpacity;

	// BrnSkyDebugComponent.h:139
	float32_t mfCloudLayerDarkColourR;

	// BrnSkyDebugComponent.h:140
	float32_t mfCloudLayerDarkColourG;

	// BrnSkyDebugComponent.h:141
	float32_t mfCloudLayerDarkColourB;

	// BrnSkyDebugComponent.h:142
	float32_t mfCloudLayerLiteColourR;

	// BrnSkyDebugComponent.h:143
	float32_t mfCloudLayerLiteColourG;

	// BrnSkyDebugComponent.h:144
	float32_t mfCloudLayerLiteColourB;

	// BrnSkyDebugComponent.h:146
	float32_t mfSunTiltAtHorizon;

	// BrnSkyDebugComponent.h:147
	float32_t mfSunTiltAtMidday;

	// BrnSkyDebugComponent.h:149
	float32_t[3] mafJunkyardKeyLightDirection;

	// BrnSkyDebugComponent.h:150
	bool mbCalculateJunkyardKeyLightDirectionFromTime;

	// BrnSkyDebugComponent.h:151
	bool mbOverrideJunkyardKeyLightDirection;

	// BrnSkyDebugComponent.h:152
	bool mbGetJunkyardKeyLightDirection;

	// BrnSkyDebugComponent.h:154
	uint32_t muSunElevTodLBoundHH;

	// BrnSkyDebugComponent.h:155
	uint32_t muSunElevTodLBoundMM;

	// BrnSkyDebugComponent.h:156
	uint32_t muSunElevTodLBoundSS;

	// BrnSkyDebugComponent.h:158
	uint32_t muSunElevTodUBoundHH;

	// BrnSkyDebugComponent.h:159
	uint32_t muSunElevTodUBoundMM;

	// BrnSkyDebugComponent.h:160
	uint32_t muSunElevTodUBoundSS;

public:
	// BrnSkyDebugComponent.cpp:48
	// Declaration
	void Construct(BrnEnvironmentManager *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnEnvironmentManager.h:44
		typedef EnvironmentManager BrnEnvironmentManager;

	}

	// BrnSkyDebugComponent.cpp:92
	void Destruct();

	// BrnSkyDebugComponent.cpp:105
	virtual void Update();

	// BrnSkyDebugComponent.cpp:176
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

protected:
	// BrnSkyDebugComponent.cpp:253
	virtual const char * GetName() const;

	// BrnSkyDebugComponent.cpp:265
	virtual const char * GetPath() const;

	// BrnSkyDebugComponent.cpp:277
	virtual void OnActivate();

private:
	// BrnSkyDebugComponent.cpp:658
	void DebugToManager();

	// BrnSkyDebugComponent.cpp:739
	void ManagerToDebug();

}

// BrnSkyDebugComponent.h:55
void BrnWorld::EnvironmentSettings::DebugComponent::DebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


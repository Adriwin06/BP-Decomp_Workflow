// BrnTrafficFuzzyLogicBehaviours.h:54
struct BrnTraffic::Fuzzy::FuzzyBehaviourLogic {
	// BrnTrafficFuzzyLogicBehaviours.h:95
	bool mbDEBUGRenderParamScores;

	// BrnTrafficFuzzyLogicBehaviours.h:96
	Vector3 mDEBUGLastCameraPos;

	// BrnTrafficFuzzyLogicBehaviours.h:97
	Vector3 mDEBUGCurrentParamPos;

private:
	// BrnTrafficFuzzyLogicBehaviours.h:104
	FuzzyEnvelopeSet4 mDistanceEnvelopes;

	// BrnTrafficFuzzyLogicBehaviours.h:105
	FuzzyEnvelopeSet4 mHeightEnvelopes;

	// BrnTrafficFuzzyLogicBehaviours.h:106
	FuzzyEnvelopeSet4 mClosingSpeedEnvelopes;

	// BrnTrafficFuzzyLogicBehaviours.h:107
	FuzzyEnvelopeSet4 mLanePosEnvelopes;

	// BrnTrafficFuzzyLogicBehaviours.h:108
	FuzzyEnvelopeSet4 mAbsoluteSpeedEnvelopes;

	// BrnTrafficFuzzyLogicBehaviours.h:109
	FuzzyEnvelopeSet4 mTrafficLightEnvelopes;

	// BrnTrafficFuzzyLogicBehaviours.h:110
	FuzzyEnvelopeSet4 mNextParamDistEnvelopes;

	// BrnTrafficFuzzyLogicBehaviours.h:111
	FuzzyEnvelopeSet4 mTimeQueueingEnvelopes;

	// BrnTrafficFuzzyLogicBehaviours.h:114
	Vector4 mNormalScore_ExtremeSwerveStickiness_Z_W;

	// BrnTrafficFuzzyLogicBehaviours.h:117
	FuzzyEnvelopeSet4 mSwerveDistanceEnvelopes;

	// BrnTrafficFuzzyLogicBehaviours.h:118
	FuzzyEnvelopeSet4 mSwerveAngleEnvelopes;

	// BrnTrafficFuzzyLogicBehaviours.h:120
	TweakValues * mpTweakValues;

public:
	// BrnTrafficFuzzyLogicBehaviours.h:62
	void Construct(TweakValues *);

	// BrnTrafficFuzzyLogicBehaviours.h:81
	void ProcessParamRules(VecFloat *, Vector4, Vector4, Vector4) const;

	// BrnTrafficFuzzyLogicBehaviours.h:87
	void ReloadBehaviours();

	// BrnTrafficFuzzyLogicBehaviours.h:92
	void DEBUGSetLastCameraPos(Vector3) const;

	// BrnTrafficFuzzyLogicBehaviours.h:93
	void DEBUGSetCurrentParamPos(Vector3) const;

private:
	// BrnTrafficFuzzyLogicBehaviours.h:125
	void ResetToDefaults();

	// BrnTrafficFuzzyLogicBehaviours.h:135
	void SetupEnvelope(int32_t, int32_t, float32_t, float32_t, float32_t, float32_t);

	// BrnTrafficFuzzyLogicBehaviours.h:141
	void SetConstantValue(int32_t, float32_t);

	// BrnTrafficFuzzyLogicBehaviours.h:146
	void DEBUGRenderParamScores(const VecFloat *) const;

	// BrnTrafficFuzzyLogicBehaviours.h:156
	void DEBUGRenderScore(DebugRender *, float32_t, Vector3, Vector3, uint32_t, uint32_t, uint32_t) const;

}

// BrnTrafficFuzzyLogicBehaviours.h:54
struct BrnTraffic::Fuzzy::FuzzyBehaviourLogic {
	// BrnTrafficFuzzyLogicBehaviours.h:95
	bool mbDEBUGRenderParamScores;

	// BrnTrafficFuzzyLogicBehaviours.h:96
	Vector3 mDEBUGLastCameraPos;

	// BrnTrafficFuzzyLogicBehaviours.h:97
	Vector3 mDEBUGCurrentParamPos;

private:
	// BrnTrafficFuzzyLogicBehaviours.h:104
	FuzzyEnvelopeSet4 mDistanceEnvelopes;

	// BrnTrafficFuzzyLogicBehaviours.h:105
	FuzzyEnvelopeSet4 mHeightEnvelopes;

	// BrnTrafficFuzzyLogicBehaviours.h:106
	FuzzyEnvelopeSet4 mClosingSpeedEnvelopes;

	// BrnTrafficFuzzyLogicBehaviours.h:107
	FuzzyEnvelopeSet4 mLanePosEnvelopes;

	// BrnTrafficFuzzyLogicBehaviours.h:108
	FuzzyEnvelopeSet4 mAbsoluteSpeedEnvelopes;

	// BrnTrafficFuzzyLogicBehaviours.h:109
	FuzzyEnvelopeSet4 mTrafficLightEnvelopes;

	// BrnTrafficFuzzyLogicBehaviours.h:110
	FuzzyEnvelopeSet4 mNextParamDistEnvelopes;

	// BrnTrafficFuzzyLogicBehaviours.h:111
	FuzzyEnvelopeSet4 mTimeQueueingEnvelopes;

	// BrnTrafficFuzzyLogicBehaviours.h:114
	Vector4 mNormalScore_ExtremeSwerveStickiness_Z_W;

	// BrnTrafficFuzzyLogicBehaviours.h:117
	FuzzyEnvelopeSet4 mSwerveDistanceEnvelopes;

	// BrnTrafficFuzzyLogicBehaviours.h:118
	FuzzyEnvelopeSet4 mSwerveAngleEnvelopes;

	// BrnTrafficFuzzyLogicBehaviours.h:120
	TweakValues * mpTweakValues;

public:
	// BrnTrafficFuzzyLogicBehaviours.h:62
	void Construct(TweakValues *);

	// BrnTrafficFuzzyLogicBehaviours.h:81
	void ProcessParamRules(VecFloat *, Vector4, Vector4, Vector4) const;

	// BrnTrafficFuzzyLogicBehaviours.h:87
	// Declaration
	void ReloadBehaviours() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnTrafficFuzzyLogicBehaviours.cpp:465
		using namespace CgsDev::Message;

		// BrnTrafficFuzzyLogicBehaviours.cpp:470
		using namespace CgsDev::Message;

		// BrnTrafficFuzzyLogicBehaviours.cpp:496
		using namespace CgsDev::Message;

		// BrnTrafficFuzzyLogicBehaviours.cpp:500
		using namespace CgsDev::Message;

		// BrnTrafficFuzzyLogicBehaviours.cpp:505
		using namespace CgsDev::Message;

		// BrnTrafficFuzzyLogicBehaviours.cpp:512
		using namespace CgsDev::Message;

		// BrnTrafficFuzzyLogicBehaviours.cpp:526
		using namespace CgsDev::Message;

		// BrnTrafficFuzzyLogicBehaviours.cpp:530
		using namespace CgsDev::Message;

		// BrnTrafficFuzzyLogicBehaviours.cpp:535
		using namespace CgsDev::Message;

		// BrnTrafficFuzzyLogicBehaviours.cpp:543
		using namespace CgsDev::Message;

	}

	// BrnTrafficFuzzyLogicBehaviours.h:92
	void DEBUGSetLastCameraPos(Vector3) const;

	// BrnTrafficFuzzyLogicBehaviours.h:93
	void DEBUGSetCurrentParamPos(Vector3) const;

private:
	// BrnTrafficFuzzyLogicBehaviours.h:125
	void ResetToDefaults();

	// BrnTrafficFuzzyLogicBehaviours.h:135
	void SetupEnvelope(int32_t, int32_t, float32_t, float32_t, float32_t, float32_t);

	// BrnTrafficFuzzyLogicBehaviours.h:141
	void SetConstantValue(int32_t, float32_t);

	// BrnTrafficFuzzyLogicBehaviours.h:146
	void DEBUGRenderParamScores(const VecFloat *) const;

	// BrnTrafficFuzzyLogicBehaviours.h:156
	void DEBUGRenderScore(DebugRender *, float32_t, Vector3, Vector3, uint32_t, uint32_t, uint32_t) const;

}


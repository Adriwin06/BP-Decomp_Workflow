// BrnTrafficFuzzyEnvelopeSet.h:95
extern const int32_t KI_MAX_ENVELOPES = 4;

// BrnTrafficFuzzyEnvelopeSet.h:43
struct BrnTraffic::FuzzyEnvelopeSet4 {
private:
	// BrnTrafficFuzzyEnvelopeSet.h:89
	Vector4 mAttackStart;

	// BrnTrafficFuzzyEnvelopeSet.h:90
	Vector4 mDecayStop;

	// BrnTrafficFuzzyEnvelopeSet.h:91
	Vector4 mAttackGradient;

	// BrnTrafficFuzzyEnvelopeSet.h:92
	Vector4 mDecayGradient;

	// BrnTrafficFuzzyEnvelopeSet.h:95
	extern const int32_t KI_MAX_ENVELOPES = 4;

public:
	// BrnTrafficFuzzyEnvelopeSet.h:48
	void Construct();

	// BrnTrafficFuzzyEnvelopeSet.h:57
	void SetEnvelope(int32_t, VecFloat, VecFloat, VecFloat, VecFloat);

	// BrnTrafficFuzzyEnvelopeSet.h:62
	Vector4 CalcScores(VecFloat) const;

	// BrnTrafficFuzzyEnvelopeSet.h:68
	VecFloat CalcScore(int32_t, VecFloat) const;

}


// CgsAptAnimChannel.h:46
struct CgsGui::AnimChannel {
private:
	// CgsAptAnimChannel.h:82
	CgsGui::Interpolator * mpCurrentInterpolator;

	// CgsAptAnimChannel.h:84
	bool mbActive;

	// CgsAptAnimChannel.h:85
	float32_t mfCurrentValue;

	// CgsAptAnimChannel.h:87
	CgsGui::Interpolator mLinearInterpolator;

public:
	// CgsAptAnimChannel.h:51
	void Construct();

	// CgsAptAnimChannel.h:56
	void SetAnimation(AnimChannelData);

	// CgsAptAnimChannel.h:60
	float32_t GetCurrentValue() const;

	// CgsAptAnimChannel.h:65
	void Update(AnimChannelData::Time);

	// CgsAptAnimChannel.h:69
	void Stop();

	// CgsAptAnimChannel.h:73
	bool IsActive() const;

private:
	// CgsAptAnimChannel.h:80
	CgsGui::Interpolator * GetInterpolator(CgsGui::AnimChannelData::InterpolateType);

}


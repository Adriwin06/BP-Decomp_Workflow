// CgsVoiceProfilingData.h:44
struct CgsSound::Playback::VoiceProfilingData<128u> {
private:
	// CgsVoiceProfilingData.h:100
	float[128] mafAveragingHistory;

	// CgsVoiceProfilingData.h:102
	float mfMaximumTime;

	// CgsVoiceProfilingData.h:103
	float mfMinimumTime;

	// CgsVoiceProfilingData.h:104
	float mfAverageTime;

	// CgsVoiceProfilingData.h:105
	float mfMostRecentTime;

public:
	// CgsVoiceProfilingData.h:47
	void VoiceProfilingData();

	// CgsVoiceProfilingData.h:62
	void Reset();

	// CgsVoiceProfilingData.h:114
	void SubmitNewTime(float, float);

	// CgsVoiceProfilingData.h:156
	float GetMaximumTime() const;

	// CgsVoiceProfilingData.h:163
	float GetMinimumTime() const;

	// CgsVoiceProfilingData.h:170
	float GetAverageTime() const;

	// CgsVoiceProfilingData.h:149
	float GetMostRecentTime() const;

	// CgsVoiceProfilingData.h:178
	float GetTimeByIndex(unsigned int) const;

}


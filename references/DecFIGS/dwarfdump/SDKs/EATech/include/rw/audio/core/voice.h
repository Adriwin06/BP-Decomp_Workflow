// importnamespaces.h:8
namespace rw {
	// pdebug.h:13
	namespace audio {
		// pdebug.h:15
		namespace core {
			// voice.h:97
			enum ExpelReason {
				EXPELREASON_NOTEXPELLED = 0,
				EXPELREASON_ERROR = 1,
				EXPELREASON_CPULIMIT = 2,
				EXPELREASON_PLAYBACKOVER = 3,
			}

			// voice.h:36
			const unsigned char PROCESSINGSTAGE_SOURCEVOICE;

			// voice.h:50
			const unsigned char PROCESSINGSTAGE_MASTERINGVOICE = 255;

		}

	}

}

// voice.h:74
struct rw::audio::core::PlugInLocationDesc {
	// voice.h:78
	unsigned char registryIndex;

	// voice.h:85
	short unsigned int instanceSize;

}

// voice.h:170
struct rw::audio::core::Voice {
private:
	// voice.h:928
	CpuCycleAverager mCpuCycleAverager;

	// voice.h:930
	System * mpSystem;

	// voice.h:933
	const char * mpName;

	// voice.h:936
	PlugInLocationDesc * mpPlugInLocationDescs;

	// voice.h:939
	ListDNode mExpelNode;

	// voice.h:942
	float mPitch;

	// voice.h:945
	float mDecaySamples;

	// voice.h:948
	float mDecayEatenSamples;

	// voice.h:950
	float mExpelAfterDecaySamples;

	// voice.h:952
	unsigned int mCreationTimeStamp;

	// voice.h:953
	float mPriority;

	// voice.h:956
	unsigned int mCpuTicks;

	// voice.h:959
	unsigned int mSize;

	// voice.h:962
	unsigned char mNumPlugIns;

	// voice.h:974
	unsigned char mDiscontinuityPlugIn;

	// voice.h:979
	unsigned char mInputPlugInStartPoint;

	// voice.h:981
	unsigned char mState;

	// voice.h:983
	unsigned char mProcessingStage;

	// voice.h:986
	unsigned char mExpelReason;

	// voice.h:992
	rw::audio::core::PlugIn *[1] mpPlugIns;

public:
	// voice.h:313
	rw::audio::core::Voice * CreateInstance(int, int, rw::audio::core::PlugInConfig *, rw::audio::core::PlugIn ***, System *);

	// voice.h:335
	void Release();

	// voice.h:426
	void SetPriority(float);

	// voice.h:442
	float GetPriority() const;

	// voice.h:489
	bool IsExpelled() const;

	// voice.h:593
	float GetLatency() const;

	// voice.h:635
	float GetDecayTime() const;

	// voice.h:666
	void SetName(const char *);

	// voice.h:685
	const char * GetName() const;

	// voice.h:714
	unsigned int GetCpuTicks() const;

	// voice.h:731
	float GetCpu() const;

	// voice.h:756
	unsigned int GetPpuTicks() const;

	// voice.h:774
	unsigned int GetNumPlugIns() const;

	// voice.h:796
	rw::audio::core::PlugIn *const* GetPlugInPointers() const;

	// voice.h:818
	System * GetSystem() const;

	// voice.h:840
	int GetProcessingStage() const;

	// voice.h:855
	int GetExpelReason() const;

	// voice.h:867
	void ProvideCpuEstimate(float);

	// voice.h:879
	void ReleaseImmediate(bool);

private:
	// voice.h:897
	void ExpelImmediate(rw::audio::core::ExpelReason);

	// voice.h:901
	void ExpelAfterDecay();

	// voice.h:908
	float GetLatencyInSamples() const;

	// voice.h:910
	float GetDecayInSamples() const;

	// voice.h:916
	void AdjustDecaySamples(float);

	// voice.h:921
	int CreateInstanceHandler(Command *);

	// voice.h:922
	int ReleaseHandler(Command *);

	// voice.h:923
	int SetPriorityHandler(Command *);

	// voice.h:926
	bool RemoveActiveVoice();

}


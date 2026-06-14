// CgsPooledVoice.h:52
struct CgsSound::Logic::PooledVoice {
private:
	// CgsPooledVoice.h:117
	CgsSound::Logic::VoiceWrapper mVoice;

	// CgsPooledVoice.h:119
	float32_t mfSecondaryGain;

	// CgsPooledVoice.h:121
	uint32_t muAge;

	// CgsPooledVoice.h:122
	bool mbInUse;

public:
	// CgsPooledVoice.h:62
	void Create(const CgsSound::Logic::VoiceWrapper::CreateParams &);

	// CgsPooledVoice.h:70
	void Play(uint32_t);

	// CgsPooledVoice.h:73
	CgsSound::Logic::VoiceWrapper & GetVoice();

	// CgsPooledVoice.h:76
	float32_t GetSecondaryGain();

	// CgsPooledVoice.h:80
	void SetSecondaryGain(float32_t);

protected:
	// CgsPooledVoice.h:84
	void Construct();

	// CgsPooledVoice.h:87
	bool Prepare();

	// CgsPooledVoice.h:90
	void Update();

	// CgsPooledVoice.h:93
	bool Release();

	// CgsPooledVoice.h:96
	void Destruct();

	// CgsPooledVoice.h:101
	void SetInUse(bool);

	// CgsPooledVoice.h:104
	bool GetInUse() const;

	// CgsPooledVoice.h:107
	uint32_t GetAge() const;

	// CgsPooledVoice.h:110
	void IncrementAge();

}


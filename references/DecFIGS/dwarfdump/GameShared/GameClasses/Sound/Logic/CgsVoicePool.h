// CgsVoicePool.h:116
struct CgsSound::Logic::VoicePool<4> : public CgsSound::Logic::VoicePoolBase {
private:
	// CgsVoicePool.h:123
	PooledVoice[4] maPooledVoices;

public:
	void ~VoicePool();

	void VoicePool();

	void VoicePool(const VoicePool<4> &);

	// CgsVoicePool.h:411
	bool Prepare();

}

// CgsVoicePool.h:53
struct CgsSound::Logic::VoicePoolBase {
	int (*)(...) * _vptr.VoicePoolBase;

private:
	// CgsVoicePool.h:104
	CgsSound::Logic::Module * mpLogicModule;

	// CgsVoicePool.h:105
	PooledVoice * mpaPooledVoices;

	// CgsVoicePool.h:107
	uint32_t muPooledVoiceCount;

	// CgsVoicePool.h:108
	uint32_t muDebugFrameIndex;

public:
	void VoicePoolBase();

	void VoicePoolBase(const VoicePoolBase &);

	// CgsVoicePool.h:145
	void Construct(CgsSound::Logic::Module *);

	// CgsVoicePool.h:213
	void Update();

	// CgsVoicePool.h:312
	bool Release();

	// CgsVoicePool.h:199
	void Destruct();

	// CgsVoicePool.h:336
	PooledVoice & GetFreeVoice();

	// CgsVoicePool.h:260
	void SetGain(int32_t, float32_t, Partial::Name);

	// CgsVoicePool.h:288
	void SetParameter(int32_t, float32_t, Partial::Name);

	// CgsVoicePool.h:237
	void StopAll();

	// CgsVoicePool.h:385
	virtual bool IsPlaying();

protected:
	// CgsVoicePool.h:168
	bool Prepare(PooledVoice *, uint32_t);

}

// CgsVoicePool.h:116
void CgsSound::Logic::VoicePool<4>::~VoicePool() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoicePool.h:116
void CgsSound::Logic::VoicePool<4>::VoicePool() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsVoicePool.h:53
void CgsSound::Logic::VoicePoolBase::VoicePoolBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


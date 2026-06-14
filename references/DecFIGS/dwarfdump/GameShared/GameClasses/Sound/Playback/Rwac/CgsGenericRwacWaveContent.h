// CgsGenericRwacWaveContent.h:43
extern const Name SK_WAVE_DATA_CONTENT_TYPE;

// CgsGenericRwacWaveContent.h:105
extern const Name SK_SLOT_CLASSNAME;

// CgsGenericRwacWaveContent.h:103
struct CgsSound::Playback::GenericRwacContentSlot : public CgsSound::Playback::ISlotImplementation {
	// CgsGenericRwacWaveContent.cpp:74
	extern const Name SK_SLOT_CLASSNAME;

public:
	// CgsGenericRwacWaveContent.cpp:81
	virtual bool DoPlay(const Slot &, CgsSound::Playback::PlayerVoice &, CgsSound::Playback::Content &, uint32_t);

	// CgsGenericRwacWaveContent.cpp:110
	virtual bool DoStop(const Slot &, CgsSound::Playback::PlayerVoice &, CgsSound::Playback::Content &);

	// CgsGenericRwacWaveContent.cpp:130
	virtual bool DoUpdatePlaying(System *, const Slot &, CgsSound::Playback::PlayerVoice &, CgsSound::Playback::Content &);

}

// CgsGenericRwacWaveContent.h:41
struct CgsSound::Playback::GenericRwacWaveContent : public CgsSound::Playback::Content {
	// CgsGenericRwacWaveContent.cpp:44
	extern const Name SK_WAVE_DATA_CONTENT_TYPE;

private:
	// CgsGenericRwacWaveContent.h:70
	ContentLoader<CgsResource::BinaryFileResource> mLoader;

public:
	void GenericRwacWaveContent(const CgsSound::Playback::GenericRwacWaveContent &);

	// CgsGenericRwacWaveContent.h:48
	void GenericRwacWaveContent(CgsSound::Playback::Factory &, const ContentSpec &, uint32_t);

	// CgsGenericRwacWaveContent.h:94
	bool GetStreamPath(char *, size_t) const;

protected:
	// CgsGenericRwacWaveContent.cpp:49
	virtual bool DoLoad();

	// CgsGenericRwacWaveContent.cpp:56
	virtual bool DoUnload();

	// CgsGenericRwacWaveContent.cpp:64
	virtual void DoUpdate(float);

	// CgsGenericRwacWaveContent.h:85
	virtual void * DoGetData();

public:
	virtual void ~GenericRwacWaveContent();

}

// CgsGenericRwacWaveContent.h:41
void CgsSound::Playback::GenericRwacWaveContent::~GenericRwacWaveContent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


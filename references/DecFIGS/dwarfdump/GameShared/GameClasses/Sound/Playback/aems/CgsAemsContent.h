// CgsAemsContent.h:200
struct CgsSound::Playback::AemsContentSlot : public CgsSound::Playback::ISlotImplementation {
	// CgsAemsContent.cpp:54
	extern const Name SK_SLOT_CLASSNAME;

public:
	// CgsAemsContent.cpp:85
	virtual bool DoPlay(const Slot &, CgsSound::Playback::PlayerVoice &, CgsSound::Playback::Content &, uint32_t);

	// CgsAemsContent.cpp:103
	virtual bool DoStop(const Slot &, CgsSound::Playback::PlayerVoice &, CgsSound::Playback::Content &);

	// CgsAemsContent.cpp:72
	virtual bool DoUpdatePlaying(System *, const Slot &, CgsSound::Playback::PlayerVoice &, CgsSound::Playback::Content &, float);

}

// CgsAemsContent.h:115
struct CgsSound::Playback::AemsContent : public CgsSound::Playback::Content {
	// CgsAemsContent.cpp:45
	extern const Name SK_CONTENT_CLASS;

	// CgsAemsContent.cpp:48
	extern const Name SK_CONTENT_TYPE;

private:
	// CgsAemsContent.h:189
	ContentLoader<CgsResource::BinaryFileResource> mLoader;

	// CgsAemsContent.h:190
	int miAemsBankHandle;

	// CgsAemsContent.h:191
	bool mbRemoveBegun;

	// CgsAemsContent.h:192
	void * mpAemsData;

public:
	void AemsContent(const CgsSound::Playback::AemsContent &);

	// CgsAemsContent.h:123
	void AemsContent(CgsSound::Playback::Factory &, const ContentSpec &, uint32_t);

	// CgsAemsContent.h:129
	virtual void ~AemsContent();

protected:
	// CgsAemsContent.h:133
	virtual bool DoLoad();

	// CgsAemsContent.h:134
	virtual bool DoUnload();

	// CgsAemsContent.h:135
	virtual void DoUpdate(float);

	// CgsAemsContent.h:136
	virtual void * DoGetData();

	// CgsAemsContent.h:141
	virtual bool DoOnPostLoad();

	// CgsAemsContent.h:155
	virtual bool DoOnPreUnload();

	// CgsAemsContent.h:183
	void * AddAemsBankCallback(void *, int, int);

}

// CgsAemsContent.h:38
struct CgsSound::Playback::CsisContent : public CgsSound::Playback::Content {
	// CgsAemsContent.cpp:39
	extern const Name SK_CONTENT_CLASS;

	// CgsAemsContent.cpp:42
	extern const Name SK_CONTENT_TYPE;

private:
	// CgsAemsContent.h:95
	ContentLoader<CgsResource::BinaryFileResource> mLoader;

	// CgsAemsContent.h:96
	void * mpCsisData;

public:
	void CsisContent(const CgsSound::Playback::CsisContent &);

	// CgsAemsContent.h:46
	void CsisContent(CgsSound::Playback::Factory &, const ContentSpec &, uint32_t);

	// CgsAemsContent.h:52
	virtual void ~CsisContent();

protected:
	// CgsAemsContent.h:56
	virtual bool DoLoad();

	// CgsAemsContent.h:57
	virtual bool DoUnload();

	// CgsAemsContent.h:58
	virtual void DoUpdate(float);

	// CgsAemsContent.h:59
	virtual void * DoGetData();

	// CgsAemsContent.h:64
	virtual bool DoOnPostLoad();

	// CgsAemsContent.h:81
	virtual bool DoOnPreUnload();

}


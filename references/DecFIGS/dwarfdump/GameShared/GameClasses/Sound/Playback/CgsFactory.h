// CgsFactory.h:54
struct CgsSound::Playback::Factory : public CgsSound::Playback::Object {
private:
	// CgsFactory.h:201
	Name mName;

	// CgsFactory.h:202
	const CgsSound::Playback::Environment & mEnvironment;

public:
	void Factory(const CgsSound::Playback::Factory &);

	// CgsFactory.h:224
	void * operator new(size_t, CgsSound::Playback::Environment &);

	// CgsFactory.h:234
	void operator delete(void *, CgsSound::Playback::Environment &);

	// CgsFactory.h:67
	void operator delete(void *);

	// CgsFactory.h:243
	void Factory(Name, CgsSound::Playback::Environment &);

	// CgsFactory.h:85
	virtual void ~Factory();

	// CgsFactory.h:255
	Name GetName();

	// CgsFactory.h:290
	uint32_t CreateContent(const ContentSpec &, Handle<CgsSound::Playback::Content> &, uint32_t);

	// CgsFactory.h:310
	void Update(float);

	// CgsFactory.h:334
	CgsSound::Playback::Environment & GetEnvironment();

protected:
	// CgsFactory.h:139
	bool Install(CgsSound::Playback::Factory *);

	// CgsFactory.h:147
	void Uninstall(CgsSound::Playback::Factory *);

	// CgsFactory.h:157
	virtual bool DoCreateVoice(const VoiceSpec &, Handle<CgsSound::Playback::Voice> &, uint32_t);

	// CgsFactory.h:168
	virtual bool DoCreateContent(const ContentSpec &, Handle<CgsSound::Playback::Content> &, uint32_t);

	// CgsFactory.h:172
	virtual void DoUpdate(float);

	// CgsFactory.h:317
	virtual void DoDispose();

private:
	// CgsFactory.h:207
	CgsSound::Playback::Factory & operator=(const CgsSound::Playback::Factory &);

}

// CgsFactory.h:195
extern Handle<CgsSound::Playback::GenericRwacWaveContent> FactoryNew<CgsSound::Playback::GenericRwacWaveContent, CgsSound::Playback::ContentSpec, uint32_t>(const const ContentSpec &  lParam, const const uint32_t &  lParam2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsFactory.h:195
extern Handle<CgsSound::Playback::GenericRwacReverbIRContent> FactoryNew<CgsSound::Playback::GenericRwacReverbIRContent, CgsSound::Playback::ContentSpec, uint32_t>(const const ContentSpec &  lParam, const const uint32_t &  lParam2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsFactory.h:195
extern Handle<CgsSound::Playback::CsisContent> FactoryNew<CgsSound::Playback::CsisContent, CgsSound::Playback::ContentSpec, uint32_t>(const const ContentSpec &  lParam, const const uint32_t &  lParam2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsFactory.h:195
extern Handle<CgsSound::Playback::AemsContent> FactoryNew<CgsSound::Playback::AemsContent, CgsSound::Playback::ContentSpec, uint32_t>(const const ContentSpec &  lParam, const const uint32_t &  lParam2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsFactory.h:195
extern Handle<CgsSound::Playback::SplicerContent> FactoryNew<CgsSound::Playback::SplicerContent, CgsSound::Playback::ContentSpec, uint32_t>(const const ContentSpec &  lParam, const const uint32_t &  lParam2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsFactory.h:266
extern uint32_t CreateVoice<CgsSound::Playback::Voice>(const const VoiceSpec &  lVoiceSpec, const Handle<CgsSound::Playback::Voice> &  lVoiceOut, uint32_t  luiIdent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsFactory.h:272
		uint32_t lu32VoiceIndex;

	}
}

// CgsFactory.h:195
extern Handle<CgsSound::Playback::SplicerPlayerVoice> FactoryNew<CgsSound::Playback::SplicerPlayerVoice, CgsSound::Playback::VoiceSpec, uint32_t>(const const VoiceSpec &  lParam, const const uint32_t &  lParam2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsFactory.h:195
extern Handle<CgsSound::Playback::GenericRwacSubmixVoice> FactoryNew<CgsSound::Playback::GenericRwacSubmixVoice, CgsSound::Playback::VoiceSpec, uint32_t>(const const VoiceSpec &  lParam, const const uint32_t &  lParam2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsFactory.h:195
extern Handle<CgsSound::Playback::GenericRwacMasterVoice> FactoryNew<CgsSound::Playback::GenericRwacMasterVoice, CgsSound::Playback::VoiceSpec, uint32_t>(const const VoiceSpec &  lParam, const const uint32_t &  lParam2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsFactory.h:195
extern Handle<CgsSound::Playback::GenericRwacPlayerVoice> FactoryNew<CgsSound::Playback::GenericRwacPlayerVoice, CgsSound::Playback::VoiceSpec, uint32_t>(const const VoiceSpec &  lParam, const const uint32_t &  lParam2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsFactory.h:195
extern Handle<CgsSound::Playback::AemsPlayerVoice> FactoryNew<CgsSound::Playback::AemsPlayerVoice, CgsSound::Playback::VoiceSpec, uint32_t>(const const VoiceSpec &  lParam, const const uint32_t &  lParam2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


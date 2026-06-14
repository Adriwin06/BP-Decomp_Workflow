// CgsHandle.h:50
struct CgsSound::Playback::Handle<CgsSound::Playback::Content> {
private:
	// CgsHandle.h:187
	CgsSound::Playback::Content * mpObject;

public:
	// CgsHandle.h:199
	void Handle(CgsSound::Playback::Content *);

	// CgsHandle.h:209
	void Handle(const Handle<CgsSound::Playback::Content> &);

	// CgsHandle.h:217
	void ~Handle();

	// CgsHandle.h:226
	Handle<CgsSound::Playback::Content> & operator=(const Handle<CgsSound::Playback::Content> &);

	// CgsHandle.h:251
	bool operator!() const;

	// CgsHandle.h:259
	bool operator bool() const;

	// CgsHandle.h:268
	bool operator==(const Handle<CgsSound::Playback::Content> &) const;

	// CgsHandle.h:277
	bool operator!=(const Handle<CgsSound::Playback::Content> &) const;

	// CgsHandle.h:285
	CgsSound::Playback::Content * operator->();

	// CgsHandle.h:294
	const CgsSound::Playback::Content * operator->() const;

	// CgsHandle.h:303
	CgsSound::Playback::Content & operator*();

	// CgsHandle.h:312
	const CgsSound::Playback::Content & operator*() const;

private:
	// CgsHandle.h:321
	void AcquireObject() const;

	// CgsHandle.h:332
	void ReleaseObject() const;

}

// CgsHandle.h:50
struct CgsSound::Playback::Handle<CgsSound::Playback::Factory> {
private:
	// CgsHandle.h:187
	CgsSound::Playback::Factory * mpObject;

public:
	// CgsHandle.h:199
	void Handle(CgsSound::Playback::Factory *);

	// CgsHandle.h:209
	void Handle(const Handle<CgsSound::Playback::Factory> &);

	// CgsHandle.h:217
	void ~Handle();

	// CgsHandle.h:226
	Handle<CgsSound::Playback::Factory> & operator=(const Handle<CgsSound::Playback::Factory> &);

	// CgsHandle.h:251
	bool operator!() const;

	// CgsHandle.h:259
	bool operator bool() const;

	// CgsHandle.h:268
	bool operator==(const Handle<CgsSound::Playback::Factory> &) const;

	// CgsHandle.h:277
	bool operator!=(const Handle<CgsSound::Playback::Factory> &) const;

	// CgsHandle.h:285
	CgsSound::Playback::Factory * operator->();

	// CgsHandle.h:294
	const CgsSound::Playback::Factory * operator->() const;

	// CgsHandle.h:303
	CgsSound::Playback::Factory & operator*();

	// CgsHandle.h:312
	const CgsSound::Playback::Factory & operator*() const;

private:
	// CgsHandle.h:321
	void AcquireObject() const;

	// CgsHandle.h:332
	void ReleaseObject() const;

}

// CgsHandle.h:50
struct CgsSound::Playback::Handle<CgsSound::Playback::Voice> {
private:
	// CgsHandle.h:187
	CgsSound::Playback::Voice * mpObject;

public:
	// CgsHandle.h:199
	void Handle(CgsSound::Playback::Voice *);

	// CgsHandle.h:209
	void Handle(const Handle<CgsSound::Playback::Voice> &);

	// CgsHandle.h:217
	void ~Handle();

	// CgsHandle.h:226
	Handle<CgsSound::Playback::Voice> & operator=(const Handle<CgsSound::Playback::Voice> &);

	// CgsHandle.h:251
	bool operator!() const;

	// CgsHandle.h:259
	bool operator bool() const;

	// CgsHandle.h:268
	bool operator==(const Handle<CgsSound::Playback::Voice> &) const;

	// CgsHandle.h:277
	bool operator!=(const Handle<CgsSound::Playback::Voice> &) const;

	// CgsHandle.h:285
	CgsSound::Playback::Voice * operator->();

	// CgsHandle.h:294
	const CgsSound::Playback::Voice * operator->() const;

	// CgsHandle.h:303
	CgsSound::Playback::Voice & operator*();

	// CgsHandle.h:312
	const CgsSound::Playback::Voice & operator*() const;

private:
	// CgsHandle.h:321
	void AcquireObject() const;

	// CgsHandle.h:332
	void ReleaseObject() const;

}

// CgsHandle.h:50
struct CgsSound::Playback::Handle<CgsSound::Playback::Environment> {
private:
	// CgsHandle.h:187
	CgsSound::Playback::Environment * mpObject;

public:
	// CgsHandle.h:199
	void Handle(CgsSound::Playback::Environment *);

	// CgsHandle.h:209
	void Handle(const Handle<CgsSound::Playback::Environment> &);

	// CgsHandle.h:217
	void ~Handle();

	// CgsHandle.h:226
	Handle<CgsSound::Playback::Environment> & operator=(const Handle<CgsSound::Playback::Environment> &);

	// CgsHandle.h:251
	bool operator!() const;

	// CgsHandle.h:259
	bool operator bool() const;

	// CgsHandle.h:268
	bool operator==(const Handle<CgsSound::Playback::Environment> &) const;

	// CgsHandle.h:277
	bool operator!=(const Handle<CgsSound::Playback::Environment> &) const;

	// CgsHandle.h:285
	CgsSound::Playback::Environment * operator->();

	// CgsHandle.h:294
	const CgsSound::Playback::Environment * operator->() const;

	// CgsHandle.h:303
	CgsSound::Playback::Environment & operator*();

	// CgsHandle.h:312
	const CgsSound::Playback::Environment & operator*() const;

private:
	// CgsHandle.h:321
	void AcquireObject() const;

	// CgsHandle.h:332
	void ReleaseObject() const;

}

// CgsHandle.h:50
struct CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacFactory> {
private:
	// CgsHandle.h:187
	CgsSound::Playback::GenericRwacFactory * mpObject;

public:
	// CgsHandle.h:199
	void Handle(CgsSound::Playback::GenericRwacFactory *);

	// CgsHandle.h:209
	void Handle(const Handle<CgsSound::Playback::GenericRwacFactory> &);

	// CgsHandle.h:217
	void ~Handle();

	// CgsHandle.h:226
	Handle<CgsSound::Playback::GenericRwacFactory> & operator=(const Handle<CgsSound::Playback::GenericRwacFactory> &);

	// CgsHandle.h:251
	bool operator!() const;

	// CgsHandle.h:259
	bool operator bool() const;

	// CgsHandle.h:268
	bool operator==(const Handle<CgsSound::Playback::GenericRwacFactory> &) const;

	// CgsHandle.h:277
	bool operator!=(const Handle<CgsSound::Playback::GenericRwacFactory> &) const;

	// CgsHandle.h:285
	CgsSound::Playback::GenericRwacFactory * operator->();

	// CgsHandle.h:294
	const CgsSound::Playback::GenericRwacFactory * operator->() const;

	// CgsHandle.h:303
	CgsSound::Playback::GenericRwacFactory & operator*();

	// CgsHandle.h:312
	const CgsSound::Playback::GenericRwacFactory & operator*() const;

private:
	// CgsHandle.h:321
	void AcquireObject() const;

	// CgsHandle.h:332
	void ReleaseObject() const;

}

// CgsHandle.h:50
struct CgsSound::Playback::Handle<CgsSound::Playback::SubmixVoice> {
private:
	// CgsHandle.h:187
	CgsSound::Playback::SubmixVoice * mpObject;

public:
	// CgsHandle.h:199
	void Handle(CgsSound::Playback::SubmixVoice *);

	// CgsHandle.h:209
	void Handle(const Handle<CgsSound::Playback::SubmixVoice> &);

	// CgsHandle.h:217
	void ~Handle();

	// CgsHandle.h:226
	Handle<CgsSound::Playback::SubmixVoice> & operator=(const Handle<CgsSound::Playback::SubmixVoice> &);

	// CgsHandle.h:251
	bool operator!() const;

	// CgsHandle.h:259
	bool operator bool() const;

	// CgsHandle.h:268
	bool operator==(const Handle<CgsSound::Playback::SubmixVoice> &) const;

	// CgsHandle.h:277
	bool operator!=(const Handle<CgsSound::Playback::SubmixVoice> &) const;

	// CgsHandle.h:285
	CgsSound::Playback::SubmixVoice * operator->();

	// CgsHandle.h:294
	const CgsSound::Playback::SubmixVoice * operator->() const;

	// CgsHandle.h:303
	CgsSound::Playback::SubmixVoice & operator*();

	// CgsHandle.h:312
	const CgsSound::Playback::SubmixVoice & operator*() const;

private:
	// CgsHandle.h:321
	void AcquireObject() const;

	// CgsHandle.h:332
	void ReleaseObject() const;

}

// CgsHandle.h:50
struct CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacWaveContent> {
private:
	// CgsHandle.h:187
	CgsSound::Playback::GenericRwacWaveContent * mpObject;

public:
	// CgsHandle.h:199
	void Handle(CgsSound::Playback::GenericRwacWaveContent *);

	// CgsHandle.h:209
	void Handle(const Handle<CgsSound::Playback::GenericRwacWaveContent> &);

	// CgsHandle.h:217
	void ~Handle();

	// CgsHandle.h:226
	Handle<CgsSound::Playback::GenericRwacWaveContent> & operator=(const Handle<CgsSound::Playback::GenericRwacWaveContent> &);

	// CgsHandle.h:251
	bool operator!() const;

	// CgsHandle.h:259
	bool operator bool() const;

	// CgsHandle.h:268
	bool operator==(const Handle<CgsSound::Playback::GenericRwacWaveContent> &) const;

	// CgsHandle.h:277
	bool operator!=(const Handle<CgsSound::Playback::GenericRwacWaveContent> &) const;

	// CgsHandle.h:285
	CgsSound::Playback::GenericRwacWaveContent * operator->();

	// CgsHandle.h:294
	const CgsSound::Playback::GenericRwacWaveContent * operator->() const;

	// CgsHandle.h:303
	CgsSound::Playback::GenericRwacWaveContent & operator*();

	// CgsHandle.h:312
	const CgsSound::Playback::GenericRwacWaveContent & operator*() const;

private:
	// CgsHandle.h:321
	void AcquireObject() const;

	// CgsHandle.h:332
	void ReleaseObject() const;

}

// CgsHandle.h:50
struct CgsSound::Playback::Handle<CgsSound::Playback::AemsFactory> {
private:
	// CgsHandle.h:187
	CgsSound::Playback::AemsFactory * mpObject;

public:
	// CgsHandle.h:199
	void Handle(CgsSound::Playback::AemsFactory *);

	// CgsHandle.h:209
	void Handle(const Handle<CgsSound::Playback::AemsFactory> &);

	// CgsHandle.h:217
	void ~Handle();

	// CgsHandle.h:226
	Handle<CgsSound::Playback::AemsFactory> & operator=(const Handle<CgsSound::Playback::AemsFactory> &);

	// CgsHandle.h:251
	bool operator!() const;

	// CgsHandle.h:259
	bool operator bool() const;

	// CgsHandle.h:268
	bool operator==(const Handle<CgsSound::Playback::AemsFactory> &) const;

	// CgsHandle.h:277
	bool operator!=(const Handle<CgsSound::Playback::AemsFactory> &) const;

	// CgsHandle.h:285
	CgsSound::Playback::AemsFactory * operator->();

	// CgsHandle.h:294
	const CgsSound::Playback::AemsFactory * operator->() const;

	// CgsHandle.h:303
	CgsSound::Playback::AemsFactory & operator*();

	// CgsHandle.h:312
	const CgsSound::Playback::AemsFactory & operator*() const;

private:
	// CgsHandle.h:321
	void AcquireObject() const;

	// CgsHandle.h:332
	void ReleaseObject() const;

}

// CgsHandle.h:50
struct CgsSound::Playback::Handle<CgsSound::Playback::SplicerFactory> {
private:
	// CgsHandle.h:187
	CgsSound::Playback::SplicerFactory * mpObject;

public:
	// CgsHandle.h:199
	void Handle(CgsSound::Playback::SplicerFactory *);

	// CgsHandle.h:209
	void Handle(const Handle<CgsSound::Playback::SplicerFactory> &);

	// CgsHandle.h:217
	void ~Handle();

	// CgsHandle.h:226
	Handle<CgsSound::Playback::SplicerFactory> & operator=(const Handle<CgsSound::Playback::SplicerFactory> &);

	// CgsHandle.h:251
	bool operator!() const;

	// CgsHandle.h:259
	bool operator bool() const;

	// CgsHandle.h:268
	bool operator==(const Handle<CgsSound::Playback::SplicerFactory> &) const;

	// CgsHandle.h:277
	bool operator!=(const Handle<CgsSound::Playback::SplicerFactory> &) const;

	// CgsHandle.h:285
	CgsSound::Playback::SplicerFactory * operator->();

	// CgsHandle.h:294
	const CgsSound::Playback::SplicerFactory * operator->() const;

	// CgsHandle.h:303
	CgsSound::Playback::SplicerFactory & operator*();

	// CgsHandle.h:312
	const CgsSound::Playback::SplicerFactory & operator*() const;

private:
	// CgsHandle.h:321
	void AcquireObject() const;

	// CgsHandle.h:332
	void ReleaseObject() const;

}

// CgsHandle.h:50
struct CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacPlayerVoice> {
private:
	// CgsHandle.h:187
	CgsSound::Playback::GenericRwacPlayerVoice * mpObject;

public:
	// CgsHandle.h:199
	void Handle(CgsSound::Playback::GenericRwacPlayerVoice *);

	// CgsHandle.h:209
	void Handle(const Handle<CgsSound::Playback::GenericRwacPlayerVoice> &);

	// CgsHandle.h:217
	void ~Handle();

	// CgsHandle.h:226
	Handle<CgsSound::Playback::GenericRwacPlayerVoice> & operator=(const Handle<CgsSound::Playback::GenericRwacPlayerVoice> &);

	// CgsHandle.h:251
	bool operator!() const;

	// CgsHandle.h:259
	bool operator bool() const;

	// CgsHandle.h:268
	bool operator==(const Handle<CgsSound::Playback::GenericRwacPlayerVoice> &) const;

	// CgsHandle.h:277
	bool operator!=(const Handle<CgsSound::Playback::GenericRwacPlayerVoice> &) const;

	// CgsHandle.h:285
	CgsSound::Playback::GenericRwacPlayerVoice * operator->();

	// CgsHandle.h:294
	const CgsSound::Playback::GenericRwacPlayerVoice * operator->() const;

	// CgsHandle.h:303
	CgsSound::Playback::GenericRwacPlayerVoice & operator*();

	// CgsHandle.h:312
	const CgsSound::Playback::GenericRwacPlayerVoice & operator*() const;

private:
	// CgsHandle.h:321
	void AcquireObject() const;

	// CgsHandle.h:332
	void ReleaseObject() const;

}

// CgsHandle.h:50
struct CgsSound::Playback::Handle<CgsSound::Playback::PlayerVoice> {
private:
	// CgsHandle.h:187
	CgsSound::Playback::PlayerVoice * mpObject;

public:
	// CgsHandle.h:199
	void Handle(CgsSound::Playback::PlayerVoice *);

	// CgsHandle.h:209
	void Handle(const Handle<CgsSound::Playback::PlayerVoice> &);

	// CgsHandle.h:217
	void ~Handle();

	// CgsHandle.h:226
	Handle<CgsSound::Playback::PlayerVoice> & operator=(const Handle<CgsSound::Playback::PlayerVoice> &);

	// CgsHandle.h:251
	bool operator!() const;

	// CgsHandle.h:259
	bool operator bool() const;

	// CgsHandle.h:268
	bool operator==(const Handle<CgsSound::Playback::PlayerVoice> &) const;

	// CgsHandle.h:277
	bool operator!=(const Handle<CgsSound::Playback::PlayerVoice> &) const;

	// CgsHandle.h:285
	CgsSound::Playback::PlayerVoice * operator->();

	// CgsHandle.h:294
	const CgsSound::Playback::PlayerVoice * operator->() const;

	// CgsHandle.h:303
	CgsSound::Playback::PlayerVoice & operator*();

	// CgsHandle.h:312
	const CgsSound::Playback::PlayerVoice & operator*() const;

private:
	// CgsHandle.h:321
	void AcquireObject() const;

	// CgsHandle.h:332
	void ReleaseObject() const;

}

// CgsHandle.h:50
struct CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacSubmixVoice> {
private:
	// CgsHandle.h:187
	CgsSound::Playback::GenericRwacSubmixVoice * mpObject;

public:
	// CgsHandle.h:199
	void Handle(CgsSound::Playback::GenericRwacSubmixVoice *);

	// CgsHandle.h:209
	void Handle(const Handle<CgsSound::Playback::GenericRwacSubmixVoice> &);

	// CgsHandle.h:217
	void ~Handle();

	// CgsHandle.h:226
	Handle<CgsSound::Playback::GenericRwacSubmixVoice> & operator=(const Handle<CgsSound::Playback::GenericRwacSubmixVoice> &);

	// CgsHandle.h:251
	bool operator!() const;

	// CgsHandle.h:259
	bool operator bool() const;

	// CgsHandle.h:268
	bool operator==(const Handle<CgsSound::Playback::GenericRwacSubmixVoice> &) const;

	// CgsHandle.h:277
	bool operator!=(const Handle<CgsSound::Playback::GenericRwacSubmixVoice> &) const;

	// CgsHandle.h:285
	CgsSound::Playback::GenericRwacSubmixVoice * operator->();

	// CgsHandle.h:294
	const CgsSound::Playback::GenericRwacSubmixVoice * operator->() const;

	// CgsHandle.h:303
	CgsSound::Playback::GenericRwacSubmixVoice & operator*();

	// CgsHandle.h:312
	const CgsSound::Playback::GenericRwacSubmixVoice & operator*() const;

private:
	// CgsHandle.h:321
	void AcquireObject() const;

	// CgsHandle.h:332
	void ReleaseObject() const;

}

// CgsHandle.h:50
struct CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacMasterVoice> {
private:
	// CgsHandle.h:187
	CgsSound::Playback::GenericRwacMasterVoice * mpObject;

public:
	// CgsHandle.h:199
	void Handle(CgsSound::Playback::GenericRwacMasterVoice *);

	// CgsHandle.h:209
	void Handle(const Handle<CgsSound::Playback::GenericRwacMasterVoice> &);

	// CgsHandle.h:217
	void ~Handle();

	// CgsHandle.h:226
	Handle<CgsSound::Playback::GenericRwacMasterVoice> & operator=(const Handle<CgsSound::Playback::GenericRwacMasterVoice> &);

	// CgsHandle.h:251
	bool operator!() const;

	// CgsHandle.h:259
	bool operator bool() const;

	// CgsHandle.h:268
	bool operator==(const Handle<CgsSound::Playback::GenericRwacMasterVoice> &) const;

	// CgsHandle.h:277
	bool operator!=(const Handle<CgsSound::Playback::GenericRwacMasterVoice> &) const;

	// CgsHandle.h:285
	CgsSound::Playback::GenericRwacMasterVoice * operator->();

	// CgsHandle.h:294
	const CgsSound::Playback::GenericRwacMasterVoice * operator->() const;

	// CgsHandle.h:303
	CgsSound::Playback::GenericRwacMasterVoice & operator*();

	// CgsHandle.h:312
	const CgsSound::Playback::GenericRwacMasterVoice & operator*() const;

private:
	// CgsHandle.h:321
	void AcquireObject() const;

	// CgsHandle.h:332
	void ReleaseObject() const;

}

// CgsHandle.h:50
struct CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacReverbIRContent> {
private:
	// CgsHandle.h:187
	CgsSound::Playback::GenericRwacReverbIRContent * mpObject;

public:
	// CgsHandle.h:199
	void Handle(CgsSound::Playback::GenericRwacReverbIRContent *);

	// CgsHandle.h:209
	void Handle(const Handle<CgsSound::Playback::GenericRwacReverbIRContent> &);

	// CgsHandle.h:217
	void ~Handle();

	// CgsHandle.h:226
	Handle<CgsSound::Playback::GenericRwacReverbIRContent> & operator=(const Handle<CgsSound::Playback::GenericRwacReverbIRContent> &);

	// CgsHandle.h:251
	bool operator!() const;

	// CgsHandle.h:259
	bool operator bool() const;

	// CgsHandle.h:268
	bool operator==(const Handle<CgsSound::Playback::GenericRwacReverbIRContent> &) const;

	// CgsHandle.h:277
	bool operator!=(const Handle<CgsSound::Playback::GenericRwacReverbIRContent> &) const;

	// CgsHandle.h:285
	CgsSound::Playback::GenericRwacReverbIRContent * operator->();

	// CgsHandle.h:294
	const CgsSound::Playback::GenericRwacReverbIRContent * operator->() const;

	// CgsHandle.h:303
	CgsSound::Playback::GenericRwacReverbIRContent & operator*();

	// CgsHandle.h:312
	const CgsSound::Playback::GenericRwacReverbIRContent & operator*() const;

private:
	// CgsHandle.h:321
	void AcquireObject() const;

	// CgsHandle.h:332
	void ReleaseObject() const;

}

// CgsHandle.h:50
struct CgsSound::Playback::Handle<CgsSound::Playback::AemsPlayerVoice> {
private:
	// CgsHandle.h:187
	CgsSound::Playback::AemsPlayerVoice * mpObject;

public:
	// CgsHandle.h:199
	void Handle(CgsSound::Playback::AemsPlayerVoice *);

	// CgsHandle.h:209
	void Handle(const Handle<CgsSound::Playback::AemsPlayerVoice> &);

	// CgsHandle.h:217
	void ~Handle();

	// CgsHandle.h:226
	Handle<CgsSound::Playback::AemsPlayerVoice> & operator=(const Handle<CgsSound::Playback::AemsPlayerVoice> &);

	// CgsHandle.h:251
	bool operator!() const;

	// CgsHandle.h:259
	bool operator bool() const;

	// CgsHandle.h:268
	bool operator==(const Handle<CgsSound::Playback::AemsPlayerVoice> &) const;

	// CgsHandle.h:277
	bool operator!=(const Handle<CgsSound::Playback::AemsPlayerVoice> &) const;

	// CgsHandle.h:285
	CgsSound::Playback::AemsPlayerVoice * operator->();

	// CgsHandle.h:294
	const CgsSound::Playback::AemsPlayerVoice * operator->() const;

	// CgsHandle.h:303
	CgsSound::Playback::AemsPlayerVoice & operator*();

	// CgsHandle.h:312
	const CgsSound::Playback::AemsPlayerVoice & operator*() const;

private:
	// CgsHandle.h:321
	void AcquireObject() const;

	// CgsHandle.h:332
	void ReleaseObject() const;

}

// CgsHandle.h:50
struct CgsSound::Playback::Handle<CgsSound::Playback::CsisContent> {
private:
	// CgsHandle.h:187
	CgsSound::Playback::CsisContent * mpObject;

public:
	// CgsHandle.h:199
	void Handle(CgsSound::Playback::CsisContent *);

	// CgsHandle.h:209
	void Handle(const Handle<CgsSound::Playback::CsisContent> &);

	// CgsHandle.h:217
	void ~Handle();

	// CgsHandle.h:226
	Handle<CgsSound::Playback::CsisContent> & operator=(const Handle<CgsSound::Playback::CsisContent> &);

	// CgsHandle.h:251
	bool operator!() const;

	// CgsHandle.h:259
	bool operator bool() const;

	// CgsHandle.h:268
	bool operator==(const Handle<CgsSound::Playback::CsisContent> &) const;

	// CgsHandle.h:277
	bool operator!=(const Handle<CgsSound::Playback::CsisContent> &) const;

	// CgsHandle.h:285
	CgsSound::Playback::CsisContent * operator->();

	// CgsHandle.h:294
	const CgsSound::Playback::CsisContent * operator->() const;

	// CgsHandle.h:303
	CgsSound::Playback::CsisContent & operator*();

	// CgsHandle.h:312
	const CgsSound::Playback::CsisContent & operator*() const;

private:
	// CgsHandle.h:321
	void AcquireObject() const;

	// CgsHandle.h:332
	void ReleaseObject() const;

}

// CgsHandle.h:50
struct CgsSound::Playback::Handle<CgsSound::Playback::AemsContent> {
private:
	// CgsHandle.h:187
	CgsSound::Playback::AemsContent * mpObject;

public:
	// CgsHandle.h:199
	void Handle(CgsSound::Playback::AemsContent *);

	// CgsHandle.h:209
	void Handle(const Handle<CgsSound::Playback::AemsContent> &);

	// CgsHandle.h:217
	void ~Handle();

	// CgsHandle.h:226
	Handle<CgsSound::Playback::AemsContent> & operator=(const Handle<CgsSound::Playback::AemsContent> &);

	// CgsHandle.h:251
	bool operator!() const;

	// CgsHandle.h:259
	bool operator bool() const;

	// CgsHandle.h:268
	bool operator==(const Handle<CgsSound::Playback::AemsContent> &) const;

	// CgsHandle.h:277
	bool operator!=(const Handle<CgsSound::Playback::AemsContent> &) const;

	// CgsHandle.h:285
	CgsSound::Playback::AemsContent * operator->();

	// CgsHandle.h:294
	const CgsSound::Playback::AemsContent * operator->() const;

	// CgsHandle.h:303
	CgsSound::Playback::AemsContent & operator*();

	// CgsHandle.h:312
	const CgsSound::Playback::AemsContent & operator*() const;

private:
	// CgsHandle.h:321
	void AcquireObject() const;

	// CgsHandle.h:332
	void ReleaseObject() const;

}

// CgsHandle.h:50
struct CgsSound::Playback::Handle<CgsSound::Playback::SplicerPlayerVoice> {
private:
	// CgsHandle.h:187
	CgsSound::Playback::SplicerPlayerVoice * mpObject;

public:
	// CgsHandle.h:199
	void Handle(CgsSound::Playback::SplicerPlayerVoice *);

	// CgsHandle.h:209
	void Handle(const Handle<CgsSound::Playback::SplicerPlayerVoice> &);

	// CgsHandle.h:217
	void ~Handle();

	// CgsHandle.h:226
	Handle<CgsSound::Playback::SplicerPlayerVoice> & operator=(const Handle<CgsSound::Playback::SplicerPlayerVoice> &);

	// CgsHandle.h:251
	bool operator!() const;

	// CgsHandle.h:259
	bool operator bool() const;

	// CgsHandle.h:268
	bool operator==(const Handle<CgsSound::Playback::SplicerPlayerVoice> &) const;

	// CgsHandle.h:277
	bool operator!=(const Handle<CgsSound::Playback::SplicerPlayerVoice> &) const;

	// CgsHandle.h:285
	CgsSound::Playback::SplicerPlayerVoice * operator->();

	// CgsHandle.h:294
	const CgsSound::Playback::SplicerPlayerVoice * operator->() const;

	// CgsHandle.h:303
	CgsSound::Playback::SplicerPlayerVoice & operator*();

	// CgsHandle.h:312
	const CgsSound::Playback::SplicerPlayerVoice & operator*() const;

private:
	// CgsHandle.h:321
	void AcquireObject() const;

	// CgsHandle.h:332
	void ReleaseObject() const;

}

// CgsHandle.h:50
struct CgsSound::Playback::Handle<CgsSound::Playback::SplicerContent> {
private:
	// CgsHandle.h:187
	CgsSound::Playback::SplicerContent * mpObject;

public:
	// CgsHandle.h:199
	void Handle(CgsSound::Playback::SplicerContent *);

	// CgsHandle.h:209
	void Handle(const Handle<CgsSound::Playback::SplicerContent> &);

	// CgsHandle.h:217
	void ~Handle();

	// CgsHandle.h:226
	Handle<CgsSound::Playback::SplicerContent> & operator=(const Handle<CgsSound::Playback::SplicerContent> &);

	// CgsHandle.h:251
	bool operator!() const;

	// CgsHandle.h:259
	bool operator bool() const;

	// CgsHandle.h:268
	bool operator==(const Handle<CgsSound::Playback::SplicerContent> &) const;

	// CgsHandle.h:277
	bool operator!=(const Handle<CgsSound::Playback::SplicerContent> &) const;

	// CgsHandle.h:285
	CgsSound::Playback::SplicerContent * operator->();

	// CgsHandle.h:294
	const CgsSound::Playback::SplicerContent * operator->() const;

	// CgsHandle.h:303
	CgsSound::Playback::SplicerContent & operator*();

	// CgsHandle.h:312
	const CgsSound::Playback::SplicerContent & operator*() const;

private:
	// CgsHandle.h:321
	void AcquireObject() const;

	// CgsHandle.h:332
	void ReleaseObject() const;

}

// CgsHandle.h:239
extern Handle<CgsSound::Playback::GenericRwacWaveContent> & operator CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacWaveContent>&<CgsSound::Playback::GenericRwacWaveContent>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHandle.h:239
extern Handle<CgsSound::Playback::AemsPlayerVoice> & operator CgsSound::Playback::Handle<CgsSound::Playback::AemsPlayerVoice>&<CgsSound::Playback::AemsPlayerVoice>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHandle.h:239
extern Handle<CgsSound::Playback::SplicerFactory> & operator CgsSound::Playback::Handle<CgsSound::Playback::SplicerFactory>&<CgsSound::Playback::SplicerFactory>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHandle.h:239
extern Handle<CgsSound::Playback::AemsFactory> & operator CgsSound::Playback::Handle<CgsSound::Playback::AemsFactory>&<CgsSound::Playback::AemsFactory>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHandle.h:239
extern Handle<CgsSound::Playback::PlayerVoice> & operator CgsSound::Playback::Handle<CgsSound::Playback::PlayerVoice>&<CgsSound::Playback::PlayerVoice>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHandle.h:239
extern Handle<CgsSound::Playback::GenericRwacPlayerVoice> & operator CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacPlayerVoice>&<CgsSound::Playback::GenericRwacPlayerVoice>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHandle.h:239
extern Handle<CgsSound::Playback::Factory> & operator CgsSound::Playback::Handle<CgsSound::Playback::Factory>&<CgsSound::Playback::Factory>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHandle.h:239
extern Handle<CgsSound::Playback::Content> & operator CgsSound::Playback::Handle<CgsSound::Playback::Content>&<CgsSound::Playback::Content>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHandle.h:239
extern Handle<CgsSound::Playback::GenericRwacReverbIRContent> & operator CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacReverbIRContent>&<CgsSound::Playback::GenericRwacReverbIRContent>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHandle.h:239
extern Handle<CgsSound::Playback::CsisContent> & operator CgsSound::Playback::Handle<CgsSound::Playback::CsisContent>&<CgsSound::Playback::CsisContent>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHandle.h:239
extern Handle<CgsSound::Playback::AemsContent> & operator CgsSound::Playback::Handle<CgsSound::Playback::AemsContent>&<CgsSound::Playback::AemsContent>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHandle.h:239
extern Handle<CgsSound::Playback::SplicerContent> & operator CgsSound::Playback::Handle<CgsSound::Playback::SplicerContent>&<CgsSound::Playback::SplicerContent>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHandle.h:239
extern Handle<CgsSound::Playback::Voice> & operator CgsSound::Playback::Handle<CgsSound::Playback::Voice>&<CgsSound::Playback::Voice>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHandle.h:239
extern Handle<CgsSound::Playback::Environment> & operator CgsSound::Playback::Handle<CgsSound::Playback::Environment>&<CgsSound::Playback::Environment>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHandle.h:239
extern Handle<CgsSound::Playback::GenericRwacFactory> & operator CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacFactory>&<CgsSound::Playback::GenericRwacFactory>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHandle.h:239
extern Handle<CgsSound::Playback::SubmixVoice> & operator CgsSound::Playback::Handle<CgsSound::Playback::SubmixVoice>&<CgsSound::Playback::SubmixVoice>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHandle.h:239
extern Handle<CgsSound::Playback::SplicerPlayerVoice> & operator CgsSound::Playback::Handle<CgsSound::Playback::SplicerPlayerVoice>&<CgsSound::Playback::SplicerPlayerVoice>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHandle.h:239
extern Handle<CgsSound::Playback::GenericRwacSubmixVoice> & operator CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacSubmixVoice>&<CgsSound::Playback::GenericRwacSubmixVoice>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHandle.h:239
extern Handle<CgsSound::Playback::GenericRwacMasterVoice> & operator CgsSound::Playback::Handle<CgsSound::Playback::GenericRwacMasterVoice>&<CgsSound::Playback::GenericRwacMasterVoice>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


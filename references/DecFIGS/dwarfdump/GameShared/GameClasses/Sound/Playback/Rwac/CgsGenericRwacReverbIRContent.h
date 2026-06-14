// CgsGenericRwacReverbIRContent.h:69
struct CgsSound::Playback::GenericRwacReverbIRSlot : public CgsSound::Playback::ISlotImplementation {
	// CgsGenericRwacReverbIRContent.cpp:41
	extern const Name SK_SLOT_CLASSNAME;

public:
	// CgsGenericRwacReverbIRContent.cpp:75
	virtual void DoPostAttach(const Slot &, CgsSound::Playback::Voice &, CgsSound::Playback::Content &);

	// CgsGenericRwacReverbIRContent.cpp:101
	virtual void DoPreDetach(const Slot &, CgsSound::Playback::Voice &, CgsSound::Playback::Content &);

}

// CgsGenericRwacReverbIRContent.h:40
struct CgsSound::Playback::GenericRwacReverbIRContent : public CgsSound::Playback::Content {
	// CgsGenericRwacReverbIRContent.cpp:44
	extern const Name SK_REVERB_IR_DATA_CONTENT_TYPE;

private:
	// CgsGenericRwacReverbIRContent.h:64
	ContentLoader<CgsResource::AlignedBinaryFileResource> mLoader;

public:
	void GenericRwacReverbIRContent(const CgsSound::Playback::GenericRwacReverbIRContent &);

	// CgsGenericRwacReverbIRContent.h:47
	void GenericRwacReverbIRContent(CgsSound::Playback::Factory &, const ContentSpec &, uint32_t);

protected:
	// CgsGenericRwacReverbIRContent.cpp:49
	virtual bool DoLoad();

	// CgsGenericRwacReverbIRContent.cpp:56
	virtual bool DoUnload();

	// CgsGenericRwacReverbIRContent.cpp:64
	virtual void DoUpdate(float);

	// CgsGenericRwacReverbIRContent.h:61
	virtual void * DoGetData();

public:
	virtual void ~GenericRwacReverbIRContent();

}

// CgsGenericRwacReverbIRContent.h:40
void CgsSound::Playback::GenericRwacReverbIRContent::~GenericRwacReverbIRContent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


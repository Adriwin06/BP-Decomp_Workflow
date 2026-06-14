// BrnMixerControl.h:36
struct BrnSound::Logic::MixerControl : public BrnSound::Logic::BrnEffectControl {
protected:
	// BrnMixerControl.cpp:33
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

private:
	// BrnMixerControl.h:80
	void * mpMixerData;

	// BrnMixerControl.h:82
	const char * mpcNicotineBundle;

	// BrnMixerControl.h:83
	const char * mpcNicotineAsset;

	// BrnMixerControl.h:84
	const char * mpcNicotineSnapshotAsset;

	// BrnMixerControl.h:87
	GuiEventAudioSettings mCachedSettings;

public:
	void MixerControl(const BrnSound::Logic::MixerControl &);

	void MixerControl();

	// BrnMixerControl.cpp:33
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnMixerControl.cpp:33
	virtual const char * GetTypeName() const;

	// BrnMixerControl.h:38
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnMixerControl.cpp:33
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// BrnMixerControl.cpp:63
	virtual void SetupLoadData();

	// BrnMixerControl.cpp:96
	virtual bool Attach();

	// BrnMixerControl.cpp:126
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMixerControl.cpp:128
		using namespace ParameterIndexes::MasterVoiceSpec;

	}

	// BrnMixerControl.cpp:156
	// Declaration
	virtual void Notify(const CgsSound::Io::MessageHeader *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnMixerControl.cpp:158
		using namespace CgsSound::Io;

	}

	// BrnMixerControl.h:109
	int32_t GetMusicVolumeForMixer() const;

private:
	// BrnMixerControl.cpp:193
	void RestartMixer();

public:
	virtual void ~MixerControl();

}

// BrnMixerControl.h:36
void BrnSound::Logic::MixerControl::~MixerControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMixerControl.h:36
void BrnSound::Logic::MixerControl::MixerControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


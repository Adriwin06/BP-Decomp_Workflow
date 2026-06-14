// CgsGainArrayPlugin.h:14
struct CgsSound::Playback::Plugins::GainArray : public rw::audio::core::PlugIn {
	// CgsGainArrayPlugin.h:16
	extern const DecoderDesc::Guid GUID = 1246183728;

private:
	// CgsGainArrayPlugin.cpp:12
	extern unsigned char[1472] sSpuElf;

	// CgsGainArrayPlugin.cpp:101
	extern PlugInDescRunTime sPlugInDescRunTime;

	// CgsGainArrayPlugin.cpp:19
	extern ChannelMapPair[2] sChannelMaps;

	// CgsGainArrayPlugin.cpp:26
	extern ParameterDescRunTime[6] sParameterDescRunTime;

	// CgsGainArrayPlugin.h:38
	extern ParameterDescToolSide[] sParameterDescToolSide;

	// CgsGainArrayPlugin.h:39
	extern PlugInDescToolSide sPlugInDescToolSide;

	// CgsGainArrayPlugin.h:53
	rw::audio::core::PlugIn::Attribute_t[6] mAttribute;

	// CgsGainArrayPlugin.h:54
	float[6] mPreviousGain;

public:
	void GainArray(const GainArray &);

	void GainArray();

	// CgsGainArrayPlugin.cpp:140
	PlugInDescRunTime * GetPlugInDescRunTime();

	// CgsGainArrayPlugin.h:18
	const PlugInDescToolSide * GetPlugInDescToolSide();

private:
	// CgsGainArrayPlugin.h:41
	unsigned int GetSize(rw::audio::core::PlugInConfig *);

	// CgsGainArrayPlugin.cpp:146
	bool CreateInstance(rw::audio::core::PlugIn *, void *);

public:
	// CgsGainArrayPlugin.h:49
	rw::audio::core::BufferStatus Process(rw::audio::core::PlugIn *, Mixer *, bool);

	virtual void ~GainArray();

}

// CgsGainArrayPlugin.h:14
void CgsSound::Playback::Plugins::GainArray::~GainArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGainArrayPlugin.h:14
void CgsSound::Playback::Plugins::GainArray::GainArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGainArrayPlugin.h:16
extern const DecoderDesc::Guid GUID = 1246183728;


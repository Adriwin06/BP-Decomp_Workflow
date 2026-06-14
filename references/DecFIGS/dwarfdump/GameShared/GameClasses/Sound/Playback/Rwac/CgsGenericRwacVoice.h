// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// Declaration
		struct GenericRwacVoice {
			// CgsGenericRwacVoice.h:329
			struct ParameterMap {
				// CgsGenericRwacVoice.h:330
				uint8_t mu8ParameterIndex;

				// CgsGenericRwacVoice.h:331
				uint8_t mu8PluginOffset;

				// CgsGenericRwacVoice.h:332
				uint8_t mu8Attribute;

				// CgsGenericRwacVoice.h:333
				uint8_t mu8Direction;

			}

		}

	}

}

// CgsGenericRwacVoice.h:42
struct CgsSound::Playback::GenericRwacVoiceScratchpad {
	// CgsGenericRwacVoice.h:44
	extern const uint32_t SKU32_SCRATCHPAD_SIZE = 64;

private:
	// CgsGenericRwacVoice.h:58
	size_t muIndex;

	// CgsGenericRwacVoice.h:59
	uint8_t[64] mau8Buff;

public:
	// CgsGenericRwacVoice.h:46
	void GenericRwacVoiceScratchpad();

	// CgsGenericRwacVoice.h:51
	void * Allocate(size_t);

}

// CgsGenericRwacVoice.h:96
struct CgsSound::Playback::GenericRwacVoiceConfig {
	// CgsGenericRwacVoice.h:98
	extern const uint32_t SKU32_CONFIG_COUNT = 32;

private:
	// CgsGenericRwacVoice.h:173
	PlugInConfig[32] maConfig;

	// CgsGenericRwacVoice.h:174
	GenericRwacVoiceScratchpad mScratchPad;

	// CgsGenericRwacVoice.h:175
	uint32_t mu32PluginCount;

	// CgsGenericRwacVoice.h:176
	uint32_t mu32FirstSendPlugin;

	// CgsGenericRwacVoice.h:177
	int miProcessingStage;

	// CgsGenericRwacVoice.h:178
	CgsSound::Playback::EVoiceType meVoiceType;

	// CgsGenericRwacVoice.h:179
	const CgsSound::Playback::Environment & mEnvironment;

public:
	// CgsGenericRwacVoice.h:103
	GenericRwacVoiceConfig & Acquire(CgsSound::Playback::Environment &, uint32_t);

	// CgsGenericRwacVoice.h:106
	void Release();

	// CgsGenericRwacVoice.h:111
	PlugInConfig & GetConfig(uint32_t);

	// CgsGenericRwacVoice.h:118
	void SetConfig(uint32_t, PlugInRegistry::PlugInHandle, uint8_t, void *);

	// CgsGenericRwacVoice.h:121
	GenericRwacVoiceScratchpad & GetScratchpad();

	// CgsGenericRwacVoice.h:124
	uint32_t GetPluginCount() const;

	// CgsGenericRwacVoice.h:128
	void SetPluginCount(uint32_t);

	// CgsGenericRwacVoice.h:131
	uint32_t GetFirstSendPlugin() const;

	// CgsGenericRwacVoice.h:135
	void SetFirstSendPlugin(uint32_t);

	// CgsGenericRwacVoice.h:138
	int GetProcessingStage() const;

	// CgsGenericRwacVoice.h:142
	void SetProcessingStage(int);

	// CgsGenericRwacVoice.h:145
	CgsSound::Playback::EVoiceType GetVoiceType() const;

	// CgsGenericRwacVoice.h:149
	void SetVoiceType(CgsSound::Playback::EVoiceType);

protected:
	// CgsGenericRwacVoice.h:156
	void * operator new(size_t, CgsSound::Playback::Environment &);

	// CgsGenericRwacVoice.h:161
	void operator delete(void *, CgsSound::Playback::Environment &);

	// CgsGenericRwacVoice.h:166
	void GenericRwacVoiceConfig(CgsSound::Playback::Environment &, uint32_t);

private:
	// CgsGenericRwacVoice.h:183
	GenericRwacVoiceConfig & operator=(const GenericRwacVoiceConfig &);

}

// CgsGenericRwacVoice.h:324
struct CgsSound::Playback::GenericRwacVoice {
	// CgsGenericRwacVoice.h:326
	extern const uint32_t SKU32_PARAMETER_MAP_COUNT = 16;

private:
	// CgsGenericRwacVoice.h:418
	extern const uint32_t SKU32_PLUGIN_CONFIG_COUNT = 16;

	// CgsGenericRwacVoice.h:419
	extern PlugInConfig[16] saPlugInConfig;

	// CgsGenericRwacVoice.h:421
	CgsSound::Playback::GenericRwacFactory * mpFactory;

	// CgsGenericRwacVoice.h:422
	rw::audio::core::Voice * mpVoice;

	// CgsGenericRwacVoice.h:423
	rw::audio::core::PlugIn ** mppPlugin;

	// CgsGenericRwacVoice.h:424
	uint16_t mu16PluginCount;

	// CgsGenericRwacVoice.h:425
	uint16_t mu16FirstSendPlugin;

	// CgsGenericRwacVoice.h:426
	CgsSound::Playback::GenericRwacVoice::ParameterMap[16] maParameterMap;

	// CgsGenericRwacVoice.h:427
	uint32_t mu32ParameterMapCount;

	// CgsGenericRwacVoice.h:428
	uint8_t mu8Flags;

public:
	// CgsGenericRwacVoice.h:337
	void ~GenericRwacVoice();

	// CgsGenericRwacVoice.h:344
	bool CreateVoiceInstance(const VoiceSpec &, CgsSound::Playback::Voice &, CgsSound::Playback::GenericRwacFactory &, rw::audio::core::PlugIn **);

	// CgsGenericRwacVoice.h:348
	void AddParameterMap(CgsSound::Playback::GenericRwacVoice::ParameterMap);

	// CgsGenericRwacVoice.h:351
	rw::audio::core::Voice * GetVoice();

	// CgsGenericRwacVoice.h:354
	uint32_t GetPluginCount() const;

	// CgsGenericRwacVoice.h:357
	rw::audio::core::PlugIn * GetPlugin(uint32_t);

	// CgsGenericRwacVoice.h:360
	rw::audio::core::PlugIn * GetSendPlugin(uint32_t);

	// CgsGenericRwacVoice.h:365
	bool ConnectSend(uint32_t, CgsSound::Playback::SubmixVoice *);

	// CgsGenericRwacVoice.h:374
	CgsSound::Playback::GenericRwacFactory & GetRwacFactory();

	// CgsGenericRwacVoice.h:377
	uint8_t GetFlags() const;

	// CgsGenericRwacVoice.h:382
	void SetFlags(uint8_t);

	// CgsGenericRwacVoice.h:387
	float GetCpuTicks();

	// CgsGenericRwacVoice.h:394
	void DisplayVoiceCpu(float *, float *, float, bool);

protected:
	// CgsGenericRwacVoice.h:408
	void GenericRwacVoice();

}

// CgsGenericRwacVoice.h:497
using rw::audio::core;

// CgsGenericRwacVoice.h:534
using rw::audio::core;

// CgsGenericRwacVoice.h:532
extern void Update<CgsSound::Playback::SplicerPlayerVoice>(System *  lpRwacSystem, const CgsSound::Playback::SplicerPlayerVoice &  lVoice) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGenericRwacVoice.h:540
		uint32_t lu32SendCount;

		// CgsGenericRwacVoice.h:542
		uint32_t lu32InputParameterCount;

		// CgsGenericRwacVoice.h:544
		uint32_t lu32I;

		// CgsGenericRwacVoice.h:545
		bool lbSendParameters;

		// CgsGenericRwacVoice.h:547
		uint8_t lu8NewFlags;

		CgsSound::Playback::Voice::GetSendCount(/* parameters */);
		CgsSound::Playback::GenericRwacVoice::SetFlags(/* parameters */);
		CgsSound::Playback::Voice::GetInputParameterCount(/* parameters */);
		{
			// CgsGenericRwacVoice.h:552
			const const Send & lSend;

			CgsSound::Playback::Voice::GetSend(/* parameters */);
			CgsSound::Playback::GenericRwacVoice::GetSendPlugin(/* parameters */);
			rw::audio::core::PlugIn::SetAttribute(/* parameters */);
			CgsSound::Playback::Send::Get(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// CgsGenericRwacVoice.h:563
			CgsSound::Playback::GenericRwacVoice::ParameterMap lParameterMap;

			{
				// CgsGenericRwacVoice.h:569
				const const InputParameter & lParameter;

				CgsSound::Playback::Voice::GetInputParameter(/* parameters */);
				CgsSound::Playback::GenericRwacVoice::GetPlugin(/* parameters */);
				rw::audio::core::PlugIn::SetAttribute(/* parameters */);
				CgsSound::Playback::InputParameter::Get(/* parameters */);
				rw::math::vpu::Max<float>(/* parameters */);
			}
		}
		{
			// CgsGenericRwacVoice.h:579
			const OutputParameter & lParameter;

			// CgsGenericRwacVoice.h:584
			RwacCommandPluginGetAttribute lCommand;

			CgsSound::Playback::Voice::GetOutputParameter(/* parameters */);
			CgsSound::Playback::GenericRwacVoice::GetPlugin(/* parameters */);
			CgsSound::Playback::RwacCommandPluginGetAttribute::RwacCommandPluginGetAttribute(/* parameters */);
			CgsSound::Playback::GenericRwacVoice::GetRwacFactory(/* parameters */);
			CgsSound::Playback::GenericRwacFactory::GetCommandQueue(/* parameters */);
			operator<< <CgsSound::Playback::RwacCommandPluginGetAttribute>(/* parameters */);
		}
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsGenericRwacVoice.h:532
extern void Update<CgsSound::Playback::GenericRwacPlayerVoice>(System *  lpRwacSystem, const CgsSound::Playback::GenericRwacPlayerVoice &  lVoice) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGenericRwacVoice.h:540
		uint32_t lu32SendCount;

		// CgsGenericRwacVoice.h:542
		uint32_t lu32InputParameterCount;

		// CgsGenericRwacVoice.h:544
		uint32_t lu32I;

		// CgsGenericRwacVoice.h:545
		bool lbSendParameters;

		// CgsGenericRwacVoice.h:547
		uint8_t lu8NewFlags;

		CgsSound::Playback::Voice::GetSendCount(/* parameters */);
		CgsSound::Playback::GenericRwacVoice::SetFlags(/* parameters */);
		CgsSound::Playback::Voice::GetInputParameterCount(/* parameters */);
		{
			// CgsGenericRwacVoice.h:552
			const const Send & lSend;

			CgsSound::Playback::Voice::GetSend(/* parameters */);
			CgsSound::Playback::GenericRwacVoice::GetSendPlugin(/* parameters */);
			rw::audio::core::PlugIn::SetAttribute(/* parameters */);
			CgsSound::Playback::Send::Get(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// CgsGenericRwacVoice.h:563
			CgsSound::Playback::GenericRwacVoice::ParameterMap lParameterMap;

			{
				// CgsGenericRwacVoice.h:569
				const const InputParameter & lParameter;

				CgsSound::Playback::Voice::GetInputParameter(/* parameters */);
				CgsSound::Playback::GenericRwacVoice::GetPlugin(/* parameters */);
				rw::audio::core::PlugIn::SetAttribute(/* parameters */);
				CgsSound::Playback::InputParameter::Get(/* parameters */);
				rw::math::vpu::Max<float>(/* parameters */);
			}
		}
		{
			// CgsGenericRwacVoice.h:579
			const OutputParameter & lParameter;

			// CgsGenericRwacVoice.h:584
			RwacCommandPluginGetAttribute lCommand;

			CgsSound::Playback::Voice::GetOutputParameter(/* parameters */);
			CgsSound::Playback::GenericRwacVoice::GetPlugin(/* parameters */);
			CgsSound::Playback::RwacCommandPluginGetAttribute::RwacCommandPluginGetAttribute(/* parameters */);
			CgsSound::Playback::GenericRwacVoice::GetRwacFactory(/* parameters */);
			CgsSound::Playback::GenericRwacFactory::GetCommandQueue(/* parameters */);
			operator<< <CgsSound::Playback::RwacCommandPluginGetAttribute>(/* parameters */);
		}
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsGenericRwacVoice.h:532
extern void Update<CgsSound::Playback::GenericRwacSubmixVoice>(System *  lpRwacSystem, const CgsSound::Playback::GenericRwacSubmixVoice &  lVoice) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGenericRwacVoice.h:540
		uint32_t lu32SendCount;

		// CgsGenericRwacVoice.h:542
		uint32_t lu32InputParameterCount;

		// CgsGenericRwacVoice.h:544
		uint32_t lu32I;

		// CgsGenericRwacVoice.h:545
		bool lbSendParameters;

		// CgsGenericRwacVoice.h:547
		uint8_t lu8NewFlags;

		CgsSound::Playback::Voice::GetSendCount(/* parameters */);
		CgsSound::Playback::GenericRwacVoice::SetFlags(/* parameters */);
		CgsSound::Playback::Voice::GetInputParameterCount(/* parameters */);
		{
			// CgsGenericRwacVoice.h:552
			const const Send & lSend;

			CgsSound::Playback::Voice::GetSend(/* parameters */);
			CgsSound::Playback::GenericRwacVoice::GetSendPlugin(/* parameters */);
			rw::audio::core::PlugIn::SetAttribute(/* parameters */);
			CgsSound::Playback::Send::Get(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// CgsGenericRwacVoice.h:563
			CgsSound::Playback::GenericRwacVoice::ParameterMap lParameterMap;

			{
				// CgsGenericRwacVoice.h:569
				const const InputParameter & lParameter;

				CgsSound::Playback::Voice::GetInputParameter(/* parameters */);
				CgsSound::Playback::GenericRwacVoice::GetPlugin(/* parameters */);
				rw::audio::core::PlugIn::SetAttribute(/* parameters */);
				CgsSound::Playback::InputParameter::Get(/* parameters */);
				rw::math::vpu::Max<float>(/* parameters */);
			}
		}
		{
			// CgsGenericRwacVoice.h:579
			const OutputParameter & lParameter;

			// CgsGenericRwacVoice.h:584
			RwacCommandPluginGetAttribute lCommand;

			CgsSound::Playback::Voice::GetOutputParameter(/* parameters */);
			CgsSound::Playback::GenericRwacVoice::GetPlugin(/* parameters */);
			CgsSound::Playback::RwacCommandPluginGetAttribute::RwacCommandPluginGetAttribute(/* parameters */);
			CgsSound::Playback::GenericRwacVoice::GetRwacFactory(/* parameters */);
			CgsSound::Playback::GenericRwacFactory::GetCommandQueue(/* parameters */);
			operator<< <CgsSound::Playback::RwacCommandPluginGetAttribute>(/* parameters */);
		}
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsGenericRwacVoice.h:532
extern void Update<CgsSound::Playback::GenericRwacMasterVoice>(System *  lpRwacSystem, const CgsSound::Playback::GenericRwacMasterVoice &  lVoice) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGenericRwacVoice.h:540
		uint32_t lu32SendCount;

		// CgsGenericRwacVoice.h:542
		uint32_t lu32InputParameterCount;

		// CgsGenericRwacVoice.h:544
		uint32_t lu32I;

		// CgsGenericRwacVoice.h:545
		bool lbSendParameters;

		// CgsGenericRwacVoice.h:547
		uint8_t lu8NewFlags;

		CgsSound::Playback::Voice::GetSendCount(/* parameters */);
		CgsSound::Playback::GenericRwacVoice::SetFlags(/* parameters */);
		CgsSound::Playback::Voice::GetInputParameterCount(/* parameters */);
		{
			// CgsGenericRwacVoice.h:552
			const const Send & lSend;

			CgsSound::Playback::Voice::GetSend(/* parameters */);
			CgsSound::Playback::GenericRwacVoice::GetSendPlugin(/* parameters */);
			rw::audio::core::PlugIn::SetAttribute(/* parameters */);
			CgsSound::Playback::Send::Get(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// CgsGenericRwacVoice.h:563
			CgsSound::Playback::GenericRwacVoice::ParameterMap lParameterMap;

			{
				// CgsGenericRwacVoice.h:569
				const const InputParameter & lParameter;

				CgsSound::Playback::Voice::GetInputParameter(/* parameters */);
				CgsSound::Playback::GenericRwacVoice::GetPlugin(/* parameters */);
				rw::audio::core::PlugIn::SetAttribute(/* parameters */);
				CgsSound::Playback::InputParameter::Get(/* parameters */);
				rw::math::vpu::Max<float>(/* parameters */);
			}
		}
		{
			// CgsGenericRwacVoice.h:579
			const OutputParameter & lParameter;

			// CgsGenericRwacVoice.h:584
			RwacCommandPluginGetAttribute lCommand;

			CgsSound::Playback::Voice::GetOutputParameter(/* parameters */);
			CgsSound::Playback::GenericRwacVoice::GetPlugin(/* parameters */);
			CgsSound::Playback::RwacCommandPluginGetAttribute::RwacCommandPluginGetAttribute(/* parameters */);
			CgsSound::Playback::GenericRwacVoice::GetRwacFactory(/* parameters */);
			CgsSound::Playback::GenericRwacFactory::GetCommandQueue(/* parameters */);
			operator<< <CgsSound::Playback::RwacCommandPluginGetAttribute>(/* parameters */);
		}
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsGenericRwacVoice.h:532
extern void Update<CgsSound::Playback::AemsPlayerVoice>(System *  lpRwacSystem, const CgsSound::Playback::AemsPlayerVoice &  lVoice) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsGenericRwacVoice.h:540
		uint32_t lu32SendCount;

		// CgsGenericRwacVoice.h:542
		uint32_t lu32InputParameterCount;

		// CgsGenericRwacVoice.h:544
		uint32_t lu32I;

		// CgsGenericRwacVoice.h:545
		bool lbSendParameters;

		// CgsGenericRwacVoice.h:547
		uint8_t lu8NewFlags;

		CgsSound::Playback::Voice::GetSendCount(/* parameters */);
		CgsSound::Playback::GenericRwacVoice::SetFlags(/* parameters */);
		CgsSound::Playback::Voice::GetInputParameterCount(/* parameters */);
		{
			// CgsGenericRwacVoice.h:552
			const const Send & lSend;

			CgsSound::Playback::Voice::GetSend(/* parameters */);
			CgsSound::Playback::GenericRwacVoice::GetSendPlugin(/* parameters */);
			rw::audio::core::PlugIn::SetAttribute(/* parameters */);
			CgsSound::Playback::Send::Get(/* parameters */);
		}
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		{
			// CgsGenericRwacVoice.h:563
			CgsSound::Playback::GenericRwacVoice::ParameterMap lParameterMap;

			{
				// CgsGenericRwacVoice.h:569
				const const InputParameter & lParameter;

				CgsSound::Playback::Voice::GetInputParameter(/* parameters */);
				CgsSound::Playback::GenericRwacVoice::GetPlugin(/* parameters */);
				rw::audio::core::PlugIn::SetAttribute(/* parameters */);
				CgsSound::Playback::InputParameter::Get(/* parameters */);
				rw::math::vpu::Max<float>(/* parameters */);
			}
		}
		{
			// CgsGenericRwacVoice.h:579
			const OutputParameter & lParameter;

			// CgsGenericRwacVoice.h:584
			RwacCommandPluginGetAttribute lCommand;

			CgsSound::Playback::Voice::GetOutputParameter(/* parameters */);
			CgsSound::Playback::GenericRwacVoice::GetPlugin(/* parameters */);
			CgsSound::Playback::RwacCommandPluginGetAttribute::RwacCommandPluginGetAttribute(/* parameters */);
			CgsSound::Playback::GenericRwacVoice::GetRwacFactory(/* parameters */);
			CgsSound::Playback::GenericRwacFactory::GetCommandQueue(/* parameters */);
			operator<< <CgsSound::Playback::RwacCommandPluginGetAttribute>(/* parameters */);
		}
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsGenericRwacVoice.h:84
extern rw::audio::core::SubMix::ConstructorParams * Allocate<rw::audio::core::SubMix::ConstructorParams>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGenericRwacVoice.h:44
extern const uint32_t SKU32_SCRATCHPAD_SIZE = 64;

// CgsGenericRwacVoice.h:98
extern const uint32_t SKU32_CONFIG_COUNT = 32;

// CgsGenericRwacVoice.h:326
extern const uint32_t SKU32_PARAMETER_MAP_COUNT = 16;

// CgsGenericRwacVoice.h:418
extern const uint32_t SKU32_PLUGIN_CONFIG_COUNT = 16;


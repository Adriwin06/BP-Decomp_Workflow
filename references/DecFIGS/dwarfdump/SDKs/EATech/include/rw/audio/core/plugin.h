// importnamespaces.h:8
namespace rw {
	// pdebug.h:13
	namespace audio {
		// pdebug.h:15
		namespace core {
			// Declaration
			struct PlugIn {
				// plugin.h:2306
				union Attribute_t {
					// plugin.h:2318
					double f64;

					// plugin.h:2331
					float f32;

				}
			}

			// plugin.h:104
			enum PlugInType {
				PLUGINTYPE_INPUT_SOURCE = 0,
				PLUGINTYPE_INPUT_RECHANNEL = 1,
				PLUGINTYPE_INPUT_RESAMPLE = 2,
				PLUGINTYPE_INPUT_PROCESS = 3,
				PLUGINTYPE_STANDARD = 4,
				PLUGINTYPE_MAX = 5,
			}

			// plugin.h:247
			enum ParameterDirection {
				PARAMETERDIRECTION_INPUT = 0,
				PARAMETERDIRECTION_OUTPUT = 1,
			}

			// plugin.h:288
			enum ParameterType {
				PARAMETERTYPE_ENUM = 0,
				PARAMETERTYPE_FLOAT32 = 1,
				PARAMETERTYPE_FLOAT64 = 2,
				PARAMETERTYPE_POINTERTOSTRING = 3,
				PARAMETERTYPE_POINTER = 4,
				PARAMETERTYPE_GUID = 5,
			}

		}

	}

}

// plugin.h:221
struct rw::audio::core::ChannelMapPair {
	// plugin.h:225
	signed char input;

	// plugin.h:230
	signed char output;

}

// plugin.h:396
struct rw::audio::core::EnumMemberDesc {
	// plugin.h:414
	char * pNameCpp;

	// plugin.h:430
	char * pNameSaf;

	// plugin.h:442
	char * help;

	// plugin.h:456
	int value;

}

// plugin.h:472
struct rw::audio::core::EnumDesc {
	// plugin.h:487
	char * name;

	// plugin.h:498
	char * help;

	// plugin.h:511
	int numMembers;

	// plugin.h:522
	EnumMemberDesc * pEnumMemberDesc;

}

// plugin.h:539
struct rw::audio::core::ParameterDescToolSide {
	// plugin.h:560
	char * pNameCpp;

	// plugin.h:576
	char * pNameSaf;

	// plugin.h:592
	char * help;

	// plugin.h:619
	char * units;

	// plugin.h:642
	double defaultValue;

	// plugin.h:658
	double minValue;

	// plugin.h:673
	double maxValue;

	// plugin.h:686
	EnumDesc * pEnumDesc;

}

// plugin.h:703
struct rw::audio::core::ParameterDescRunTime {
	// plugin.h:713
	rw::audio::core::ParameterDirection parameterDirection;

	// plugin.h:724
	rw::audio::core::ParameterType parameterType;

	// plugin.h:758
	double minExtremeValue;

	// plugin.h:772
	double maxExtremeValue;

	// plugin.h:787
	ParameterDescToolSide * pParameterDescToolSide;

}

// plugin.h:800
struct rw::audio::core::EventDescToolSide {
	// plugin.h:810
	char * pNameCppEnum;

	// plugin.h:826
	char * pNameCppStruct;

	// plugin.h:843
	char * pNameSaf;

	// plugin.h:845
	char * help;

}

// plugin.h:858
struct rw::audio::core::EventDescRunTime {
	// plugin.h:869
	int numParameters;

	// plugin.h:886
	EventDescToolSide * pEventDescToolSide;

}

// plugin.h:899
struct rw::audio::core::PlugInDescToolSide {
	// plugin.h:910
	char * help;

}

// plugin.h:969
struct rw::audio::core::PlugInDescRunTime {
	// plugin.h:993
	char * name;

	// plugin.h:1047
	unsigned int (*)(rw::audio::core::PlugInConfig *) GetSize;

	// plugin.h:1110
	bool (*)(rw::audio::core::PlugIn *, void *) CreateInstance;

	// plugin.h:1302
	unsigned char * pSpuElf;

	// plugin.h:1318
	unsigned int spuElfSize;

	// plugin.h:1333
	ChannelMapPair * pChannelMaps;

	// plugin.h:1358
	ParameterDescRunTime * pParameterDescRunTime;

	// plugin.h:1373
	EventDescRunTime * pEventDescRunTime;

	// plugin.h:1388
	PlugInDescToolSide * pPlugInDescToolSide;

	// plugin.h:1400
	void * listNode;

	// plugin.h:1437
	DecoderDesc::Guid guid;

	// plugin.h:1440
	unsigned char plugInType;

	// plugin.h:1458
	unsigned char numConstructorParameters;

	// plugin.h:1479
	unsigned char numAttributes;

	// plugin.h:1496
	unsigned char numEvents;

	// plugin.h:1499
	unsigned char isVariableInputChannels;

	// plugin.h:1502
	unsigned char isVariableOutputChannels;

	// plugin.h:1514
	unsigned char registryIndex;

}

// plugin.h:1576
struct rw::audio::core::PlugIn {
	int (*)(...) * _vptr.PlugIn;

private:
	// plugin.h:2359
	System * mpSystemUseGetSystemAccessor;

	// plugin.h:2361
	rw::audio::core::Voice * mpVoice;

	// plugin.h:2366
	rw::audio::core::PlugIn::Attribute_t * mpAttribute;

	// plugin.h:2372
	PlugInDescRunTime * mpPlugInDescRunTime;

	// plugin.h:2377
	rw::audio::core::Voice * mpVoiceSpu;

	// plugin.h:2378
	System * mpSystemSpuUseGetSystemAccessor;

	// plugin.h:2381
	float mLatencyInSamples;

	// plugin.h:2382
	float mDecaySamples;

	// plugin.h:2384
	unsigned int mCpuTicks;

	// plugin.h:2386
	unsigned char mInputChannels;

	// plugin.h:2387
	unsigned char mOutputChannels;

public:
	void PlugIn(const PlugIn &);

	PlugIn & operator=(const PlugIn &);

	// plugin.h:1617
	void SetAttribute(int, float);

	// plugin.h:2391
	void SetAttribute(System *, int, float);

	// plugin.h:1658
	void GetAttribute(int, float *) const;

	// plugin.h:1676
	void GetAttribute(int, double *) const;

	// plugin.h:1699
	void Event(int, void *);

	// plugin.h:1715
	int GetOutputChannels() const;

	// plugin.h:1737
	const PlugInRegistry::PlugInHandle GetPlugInHandle() const;

	// plugin.h:1804
	unsigned int GetCpuTicks() const;

	// plugin.h:1822
	float GetCpu() const;

	// plugin.h:1859
	unsigned int GetPpuTicks() const;

protected:
	// plugin.h:1985
	void ExpelAfterDecay();

	// plugin.h:2037
	void SetLatency(float);

	// plugin.h:2101
	void SetDecay(float);

	// plugin.h:2120
	rw::audio::core::Voice * GetVoice() const;

	// plugin.h:2146
	System * GetSystem() const;

	// plugin.h:2170
	int GetInputChannels() const;

	// plugin.h:2176
	void SetInputChannels(unsigned char);

	// plugin.h:2182
	void SetOutputChannels(unsigned char);

	// plugin.h:2209
	virtual void ReleaseEvent();

	// plugin.h:2233
	virtual void EventEvent(int, void *);

	// plugin.h:2283
	virtual unsigned int GetPpuTicksEvent() const;

	// plugin.h:2334
	void PlugIn();

	// plugin.h:2335
	virtual void ~PlugIn();

private:
	// plugin.h:2346
	rw::audio::core::PlugIn * CreateInstance(void *, rw::audio::core::Voice *, PlugInDescRunTime *, rw::audio::core::PlugInConfig *, int);

	// plugin.h:2354
	int SetAttributeHandler(Command *);

}

// plugin.h:1576
struct rw::audio::core::PlugIn {
	int (*)(...) * _vptr.PlugIn;

private:
	// plugin.h:2359
	System * mpSystemUseGetSystemAccessor;

	// plugin.h:2361
	rw::audio::core::Voice * mpVoice;

	// plugin.h:2366
	rw::audio::core::PlugIn::Attribute_t * mpAttribute;

	// plugin.h:2372
	PlugInDescRunTime * mpPlugInDescRunTime;

	// plugin.h:2377
	rw::audio::core::Voice * mpVoiceSpu;

	// plugin.h:2378
	System * mpSystemSpuUseGetSystemAccessor;

	// plugin.h:2381
	float mLatencyInSamples;

	// plugin.h:2382
	float mDecaySamples;

	// plugin.h:2384
	unsigned int mCpuTicks;

	// plugin.h:2386
	unsigned char mInputChannels;

	// plugin.h:2387
	unsigned char mOutputChannels;

public:
	void PlugIn(const rw::audio::core::PlugIn &);

	PlugIn & operator=(const rw::audio::core::PlugIn &);

	// plugin.h:1617
	void SetAttribute(int, float);

	// plugin.h:2391
	void SetAttribute(System *, int, float);

	// plugin.h:1658
	void GetAttribute(int, float *) const;

	// plugin.h:1676
	void GetAttribute(int, double *) const;

	// plugin.h:1699
	void Event(int, void *);

	// plugin.h:1715
	int GetOutputChannels() const;

	// plugin.h:1737
	const PlugInRegistry::PlugInHandle GetPlugInHandle() const;

	// plugin.h:1804
	unsigned int GetCpuTicks() const;

	// plugin.h:1822
	float GetCpu() const;

	// plugin.h:1859
	unsigned int GetPpuTicks() const;

protected:
	// plugin.h:1985
	void ExpelAfterDecay();

	// plugin.h:2037
	void SetLatency(float);

	// plugin.h:2101
	void SetDecay(float);

	// plugin.h:2120
	rw::audio::core::Voice * GetVoice() const;

	// plugin.h:2146
	System * GetSystem() const;

	// plugin.h:2170
	int GetInputChannels() const;

	// plugin.h:2176
	void SetInputChannels(unsigned char);

	// plugin.h:2182
	void SetOutputChannels(unsigned char);

	// plugin.h:2209
	virtual void ReleaseEvent();

	// plugin.h:2233
	virtual void EventEvent(int, void *);

	// plugin.h:2283
	virtual unsigned int GetPpuTicksEvent() const;

	// plugin.h:2334
	void PlugIn();

	// plugin.h:2335
	virtual void ~PlugIn();

private:
	// plugin.h:2346
	rw::audio::core::PlugIn * CreateInstance(void *, rw::audio::core::Voice *, PlugInDescRunTime *, rw::audio::core::PlugInConfig *, int);

	// plugin.h:2354
	int SetAttributeHandler(Command *);

}

// importnamespaces.h:8
namespace rw {
	// pdebug.h:13
	namespace audio {
		// pdebug.h:15
		namespace core {
			// Declaration
			struct PlugIn {
				// plugin.h:2306
				union Attribute_t {
					// plugin.h:2318
					double f64;

					// plugin.h:2331
					float f32;

				}
				// plugin.h:2349
				struct SetAttributeCommand : public Command {
					// plugin.h:2350
					int attribute;

					// plugin.h:2351
					float value;

				}

			}

			// plugin.h:104
			enum PlugInType {
				PLUGINTYPE_INPUT_SOURCE = 0,
				PLUGINTYPE_INPUT_RECHANNEL = 1,
				PLUGINTYPE_INPUT_RESAMPLE = 2,
				PLUGINTYPE_INPUT_PROCESS = 3,
				PLUGINTYPE_STANDARD = 4,
				PLUGINTYPE_MAX = 5,
			}

			// plugin.h:247
			enum ParameterDirection {
				PARAMETERDIRECTION_INPUT = 0,
				PARAMETERDIRECTION_OUTPUT = 1,
			}

			// plugin.h:288
			enum ParameterType {
				PARAMETERTYPE_ENUM = 0,
				PARAMETERTYPE_FLOAT32 = 1,
				PARAMETERTYPE_FLOAT64 = 2,
				PARAMETERTYPE_POINTERTOSTRING = 3,
				PARAMETERTYPE_POINTER = 4,
				PARAMETERTYPE_GUID = 5,
			}

		}

	}

}

// plugin.h:1929
extern void Initialize<rw::audio::core::GinsuPlayer>(GinsuPlayer *  pThis, uintptr_t  attributeOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// plugin.h:1929
extern void Initialize<rw::audio::core::SndPlayer1_CgsStreamMod>(SndPlayer1_CgsStreamMod *  pThis, uintptr_t  attributeOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// plugin.h:1929
extern void Initialize<CgsSound::Playback::Plugins::GainArray>(GainArray *  pThis, uintptr_t  attributeOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


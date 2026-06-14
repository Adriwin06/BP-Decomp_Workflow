// BrnSoundLogicModuleIo.h:50
struct BrnSound::Module::Io::LogicOutputBuffer : public OutputBuffer {
	// BrnSoundLogicModuleIo.h:81
	RootOutputBuffer::AttribSysRequestInterface mAttribSysRequestInterface;

	// BrnSoundLogicModuleIo.h:82
	RootOutputBuffer::SoundResourceRequestInterface mResourceRequestInterface;

public:
	// BrnSoundLogicModuleIo.h:60
	void Construct();

	// BrnSoundLogicModuleIo.h:65
	const RootOutputBuffer::SoundResourceRequestInterface * GetResourceRequestInterface() const;

	// BrnSoundLogicModuleIo.h:69
	const RootOutputBuffer::AttribSysRequestInterface * GetAttribSysRequestInterface() const;

	// BrnSoundLogicModuleIo.h:73
	RootOutputBuffer::SoundResourceRequestInterface * GetResourceRequestInterface();

	// BrnSoundLogicModuleIo.h:77
	RootOutputBuffer::AttribSysRequestInterface * GetAttribSysRequestInterface();

}

// BrnSoundLogicModuleIo.h:97
struct BrnSound::Module::Io::LogicPreUpdateOutputBuffer : public RootPreUpdateOutputBuffer {
}


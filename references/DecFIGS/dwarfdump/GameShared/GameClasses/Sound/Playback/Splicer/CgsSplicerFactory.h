// CgsSplicerFactory.h:60
extern const Name SK_NAME;

// CgsSplicerFactory.h:44
struct CgsSound::Playback::SplicerFactorySpec {
	// CgsSplicerFactory.h:45
	Handle<CgsSound::Playback::GenericRwacFactory> mhRwacFactory;

	// CgsSplicerFactory.h:46
	RegistrySpec mRegistrySpec;

}

// CgsSplicerFactory.h:58
struct CgsSound::Playback::SplicerFactory : public CgsSound::Playback::Factory {
	// CgsSplicerFactory.cpp:38
	extern const Name SK_NAME;

private:
	// CgsSplicerFactory.h:128
	Registry * mpRegistry;

	// Unknown accessibility
	// CgsGenericRwacFactory.h:863
	typedef Handle<CgsSound::Playback::GenericRwacFactory> GenericRwacFactoryHandle;

	// CgsSplicerFactory.h:129
	SplicerFactory::GenericRwacFactoryHandle mhRwacFactory;

	// CgsSplicerFactory.h:130
	SpliceManager * mpManager;

public:
	void SplicerFactory(const CgsSound::Playback::SplicerFactory &);

	// CgsSplicerFactory.h:152
	size_t GetAllocationSize(const SplicerFactorySpec &);

	// CgsSplicerFactory.cpp:78
	Handle<CgsSound::Playback::SplicerFactory> Create(CgsSound::Playback::Environment &, const SplicerFactorySpec &);

	// CgsSplicerFactory.cpp:138
	void SplicerAssertFunc(char *);

	// CgsSplicerFactory.cpp:87
	virtual void ~SplicerFactory();

	// CgsSplicerFactory.h:170
	void AddRegistry(Registry &);

	// CgsSplicerFactory.h:84
	SplicerFactory::GenericRwacFactoryHandle GetRwacFactory();

protected:
	// CgsSplicerFactory.cpp:60
	void SplicerFactory(CgsSound::Playback::Environment &, const SplicerFactorySpec &);

	// CgsSplicerFactory.h:94
	SpliceManager & GetSpliceManager();

	// CgsSplicerFactory.h:161
	Registry & GetRegistry();

	// CgsSplicerFactory.cpp:102
	virtual bool DoCreateVoice(const VoiceSpec &, Handle<CgsSound::Playback::Voice> &, uint32_t);

	// CgsSplicerFactory.cpp:119
	virtual bool DoCreateContent(const ContentSpec &, Handle<CgsSound::Playback::Content> &, uint32_t);

	// CgsSplicerFactory.cpp:130
	virtual void DoUpdate(float);

}

// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// Declaration
		struct SplicerFactory {
			// CgsSplicerFactory.h:60
			extern const Name SK_NAME;

		}

	}

}


// CgsAemsFactory.h:293
extern const Name SK_NAME;

// CgsAemsFactory.h:373
extern const uint32_t KU_MAX_PATCH_MONITORS = 16;

// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// CgsAemsFactory.h:59
		enum ECsisCommandType {
			E_CSIS_COMMAND_SET_CLASS_HANDLE = 0,
			E_CSIS_COMMAND_CREATE = 1,
			E_CSIS_COMMAND_RELEASE = 2,
			E_CSIS_COMMAND_UPDATE = 3,
		}

	}

}

// CgsAemsFactory.h:68
struct CgsSound::Playback::PatchMonitor {
	// CgsAemsFactory.h:70
	const char * mpName;

	// CgsAemsFactory.h:71
	void * mpClientFunc;

	// CgsAemsFactory.h:72
	void * mpClientData;

	// CgsAemsFactory.h:73
	int miPerfmon;

}

// CgsAemsFactory.h:80
struct CgsSound::Playback::CsisCommand {
private:
	// CgsAemsFactory.h:96
	uintptr_t muCommandType;

public:
	// CgsAemsFactory.h:84
	void CsisCommand(CgsSound::Playback::ECsisCommandType);

	// CgsAemsFactory.h:87
	CgsSound::Playback::ECsisCommandType GetCommandType() const;

	// CgsAemsFactory.h:90
	const uintptr_t * AsCommand() const;

protected:
	// CgsAemsFactory.h:93
	void CsisCommand(uint32_t);

}

// CgsAemsFactory.h:115
struct CgsSound::Playback::CsisSetClassHandleCommand : public CsisCommand {
	// CgsAemsFactory.h:142
	ClassHandle * mpHandle;

	// CgsAemsFactory.h:143
	const char * mpName;

	// CgsAemsFactory.h:144
	uintptr_t muSystemCrc;

	// CgsAemsFactory.h:145
	uintptr_t muInterfaceCrc;

public:
	// CgsAemsFactory.h:121
	void CsisSetClassHandleCommand(ClassHandle *, const char *, uintptr_t, uintptr_t);

	// CgsAemsFactory.h:130
	void CsisSetClassHandleCommand(uintptr_t, uintptr_t *);

}

// CgsAemsFactory.h:150
struct CgsSound::Playback::CsisCreateCommand : public CsisCommand {
	// CgsAemsFactory.h:174
	ClassHandle * mpHandle;

	// CgsAemsFactory.h:175
	uint32_t * mpData;

	// CgsAemsFactory.h:176
	Csis::Class ** mppClass;

public:
	// CgsAemsFactory.h:155
	void CsisCreateCommand(ClassHandle *, uint32_t *, Csis::Class **);

	// CgsAemsFactory.h:163
	void CsisCreateCommand(uintptr_t, uintptr_t *);

}

// CgsAemsFactory.h:182
struct CgsSound::Playback::CsisReleaseCommand : public CsisCommand {
	// CgsAemsFactory.h:199
	Csis::Class * mpClass;

public:
	// CgsAemsFactory.h:185
	void CsisReleaseCommand(Csis::Class *);

	// CgsAemsFactory.h:191
	void CsisReleaseCommand(uintptr_t, uintptr_t *);

}

// CgsAemsFactory.h:204
struct CgsSound::Playback::CsisUpdateCommand : public CsisCommand {
	// CgsAemsFactory.h:224
	Csis::Class * mpClass;

	// CgsAemsFactory.h:225
	uint32_t * mpData;

public:
	// CgsAemsFactory.h:208
	void CsisUpdateCommand(Csis::Class *, uint32_t *);

	// CgsAemsFactory.h:215
	void CsisUpdateCommand(uintptr_t, uintptr_t *);

}

// CgsAemsFactory.h:230
struct CgsSound::Playback::CsisCommandQueue {
private:
	// CgsAemsFactory.h:265
	CommandQueue<255u,std::uintptr_t> mQueue;

public:
	// CgsAemsFactory.h:256
	bool GetCommand(uint32_t &, uintptr_t *);

}

// CgsAemsFactory.h:277
struct CgsSound::Playback::AemsFactorySpec {
	// CgsAemsFactory.h:278
	Handle<CgsSound::Playback::GenericRwacFactory> mhRwacFactory;

	// CgsAemsFactory.h:279
	RegistrySpec mRegistrySpec;

}

// CgsAemsFactory.h:291
struct CgsSound::Playback::AemsFactory : public AemsRWSampleFactory {
	// CgsAemsFactory.cpp:48
	extern const Name SK_NAME;

private:
	// CgsAemsFactory.h:362
	extern const uintptr_t SKU_COMMAND_SIZE = 16;

	// CgsAemsFactory.h:364
	uint32_t muPatchMonitorCount;

	// CgsAemsFactory.h:366
	Registry * mpRegistry;

	// CgsAemsFactory.h:367
	SplicerFactory::GenericRwacFactoryHandle mhRwacFactory;

	// CgsAemsFactory.h:368
	CsisCommandQueue mCommandQueue;

	// CgsAemsFactory.h:373
	extern const uint32_t KU_MAX_PATCH_MONITORS = 16;

	// CgsAemsFactory.h:375
	PatchMonitor[16] maPatchMonitors;

public:
	void AemsFactory(const CgsSound::Playback::AemsFactory &);

	// CgsAemsFactory.h:412
	size_t GetAllocationSize(const AemsFactorySpec &);

	// CgsAemsFactory.cpp:87
	Handle<CgsSound::Playback::AemsFactory> Create(CgsSound::Playback::Environment &, const AemsFactorySpec &);

	// CgsAemsFactory.cpp:96
	virtual void ~AemsFactory();

	// CgsAemsFactory.h:429
	void AddRegistry(Registry &);

	// CgsAemsFactory.h:313
	SplicerFactory::GenericRwacFactoryHandle GetRwacFactory();

	// CgsAemsFactory.h:420
	Registry & GetRegistry();

protected:
	// CgsAemsFactory.cpp:67
	void AemsFactory(CgsSound::Playback::Environment &, const AemsFactorySpec &);

	// CgsAemsFactory.cpp:110
	virtual bool DoCreateVoice(const VoiceSpec &, Handle<CgsSound::Playback::Voice> &, uint32_t);

	// CgsAemsFactory.cpp:127
	virtual bool DoCreateContent(const ContentSpec &, Handle<CgsSound::Playback::Content> &, uint32_t);

	// CgsAemsFactory.cpp:152
	virtual void DoUpdate(float);

	// CgsAemsFactory.cpp:397
	// Declaration
	void CsisPrint(const char *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAemsFactory.cpp:400
		using namespace CgsDev::Message;

	}

	// CgsAemsFactory.h:356
	CsisCommandQueue & GetCommandQueue();

private:
	// CgsAemsFactory.cpp:358
	void AddPatchMonitor(ClassData *);

	// CgsAemsFactory.cpp:308
	PatchMonitor * FindPatchMonitor(Module::TIMERCLIENTFN *);

	// CgsAemsFactory.cpp:333
	PatchMonitor * FindPatchMonitor(const char *);

	// CgsAemsFactory.cpp:260
	void UpdateAEMSPatches(float32_t);

}

// CgsAemsFactory.h:240
extern CsisCommandQueue & operator<< <CgsSound::Playback::CsisReleaseCommand>(const const CsisReleaseCommand &  lCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAemsFactory.h:244
		bool lbResult;

		{
			// CgsAemsFactory.h:248
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsAemsFactory.h:240
extern CsisCommandQueue & operator<< <CgsSound::Playback::CsisCreateCommand>(const const CsisCreateCommand &  lCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAemsFactory.h:244
		bool lbResult;

		{
			// CgsAemsFactory.h:248
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsAemsFactory.h:240
extern CsisCommandQueue & operator<< <CgsSound::Playback::CsisUpdateCommand>(const const CsisUpdateCommand &  lCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAemsFactory.h:244
		bool lbResult;

		{
			// CgsAemsFactory.h:248
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsAemsFactory.h:240
extern CsisCommandQueue & operator<< <CgsSound::Playback::CsisSetClassHandleCommand>(const const CsisSetClassHandleCommand &  lCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAemsFactory.h:244
		bool lbResult;

		{
			// CgsAemsFactory.h:248
			CgsDev::StrStream lStrStream;

		}
	}
}

// CgsAemsFactory.h:362
extern const uintptr_t SKU_COMMAND_SIZE = 16;

// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// Declaration
		struct AemsFactory {
			// CgsAemsFactory.h:293
			extern const Name SK_NAME;

		private:
			// CgsAemsFactory.h:373
			extern const uint32_t KU_MAX_PATCH_MONITORS = 16;

		}

	}

}


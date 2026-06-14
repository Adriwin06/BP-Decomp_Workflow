// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnSoundCommonSharedIO.h:27
	namespace Module {
		// BrnRootSoundModule.cpp:1035
		extern RegistryBootInfo[33] maRegistryBootInfo;

		// BrnRootSoundModule.cpp:1087
		extern RegistryBootInfo[6] maRegistrySpeech;

	}

}

// BrnRootSoundModule.cpp:81
extern void DebugAudioMemoryDump() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnRootSoundModule.cpp:100
	using namespace CgsDev::Message;

	CgsSound::TestBed::Allocator::SafeDump(/* parameters */);
	CgsSound::TestBed::Allocator::Header::Dump(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsSound::TestBed::Allocator::SafeDump(/* parameters */);
	CgsSound::TestBed::Allocator::SafeDump(/* parameters */);
	CgsSound::TestBed::Allocator::SafeDump(/* parameters */);
	CgsSound::TestBed::Allocator::SanityCheck(/* parameters */);
	CgsSound::TestBed::Allocator::SanityCheck(/* parameters */);
	CgsSound::TestBed::Allocator::SanityCheck(/* parameters */);
	CgsSound::TestBed::Allocator::SanityCheck(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnRootSoundModule.cpp:1029
struct BrnSound::Module::RegistryBootInfo {
	// BrnRootSoundModule.cpp:1030
	CgsSound::Playback::Module::ERegistryDestination mDest;

	// BrnRootSoundModule.cpp:1031
	const char * mpFilePath;

	// BrnRootSoundModule.cpp:1032
	const char * mpResourceName;

}

// _built-in_
namespace :: {
	// BrnRootSoundModule.cpp:57
	extern Allocator gRwacTestBedAlloc;

	// BrnRootSoundModule.cpp:60
	extern Allocator gCsisTestBedAlloc;

	// BrnRootSoundModule.cpp:58
	extern Allocator gLogicTestBedAlloc;

	// BrnRootSoundModule.cpp:59
	extern Allocator gPlaybackTestBedAlloc;

	// BrnRootSoundModule.cpp:50
	extern bool KB_TESTBED_ALLOCATORS_VERBOSE;

	// BrnRootSoundModule.cpp:51
	extern bool KB_TESTBED_ALLOCATORS_SANITY;

	// BrnRootSoundModule.cpp:64
	extern int32_t KI_DEBUG_PRINT_AUDIO_ALLOCATIONS;

}


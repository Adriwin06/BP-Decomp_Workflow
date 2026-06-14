// SpliceManager.cpp:356
void SpliceManager::VoicePool::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// SpliceManager.cpp:315
void SpliceManager::SpliceContainer::Init(SPLICE_Data *  pHeadData, int  numsplices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// SpliceManager.cpp:331
void SpliceManager::SpliceContainer::GetSplice(int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// SpliceManager.cpp:110
void SpliceManager::LoadSpliceData(char *  pdata, SPLICE_TYPE  type, int  sizedata, int  numsplices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// SpliceManager.cpp:113
		char * pSampleData;

		// SpliceManager.cpp:115
		SPLICE_Data * psplice;

	}
	{
		// SpliceManager.cpp:122
		int n;

	}
	{
		// SpliceManager.cpp:128
		int j;

	}
}

// SpliceManager.cpp:323
void SpliceManager::SpliceContainer::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// SpliceManager.cpp:144
void SpliceManager::UnloadSpliceData(SPLICE_TYPE  type) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// SpliceManager.cpp:96
void SpliceManager::UnloadAllSplices() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// SpliceManager.cpp:98
		int n;

	}
}

// SpliceManager.cpp:339
void SpliceManager::GetPluginHandle(SpliceManager::PlugInIndex  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// SpliceManager.cpp:452
void SpliceManager::VoicePool::IsVoiceInPool(rw::audio::core::Voice *  lpVoice) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// SpliceManager.cpp:454
		unsigned int luVoicePluginPairIndex;

	}
}

// SpliceManager.cpp:389
void SpliceManager::VoicePool::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// SpliceManager.cpp:395
void SpliceManager::VoicePool::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// SpliceManager.cpp:397
		unsigned int luPooledVoiceIndex;

	}
}

// SpliceManager.cpp:413
void SpliceManager::VoicePool::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// SpliceManager.cpp:264
void SpliceManager::DestroyVoice(SpliceManager::VoicePluginPair *  lpVoicePluginPair) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetAssertCallbackFunction(/* parameters */);
	GetAssertCallbackFunction(/* parameters */);
	GetAssertCallbackFunction(/* parameters */);
	GetAssertCallbackFunction(/* parameters */);
}

// SpliceManager.cpp:365
void SpliceManager::VoicePool::Prepare(SpliceManager::VoicePluginPair *  lpaVoicePairs, unsigned int  luVoiceCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// SpliceManager.cpp:371
		unsigned int luPooledVoiceIndex;

	}
	GetAssertCallbackFunction(/* parameters */);
	GetAssertCallbackFunction(/* parameters */);
	GetAssertCallbackFunction(/* parameters */);
	GetAssertCallbackFunction(/* parameters */);
}

// SpliceManager.cpp:421
void SpliceManager::VoicePool::AllocateVoicePluginPairToSpliceSample(SpliceSample *  lpSpliceSample) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// SpliceManager.cpp:427
		SpliceManager::VoicePluginPair * lpVoicePluginPair;

	}
	GetAssertCallbackFunction(/* parameters */);
}

// SpliceManager.cpp:298
void SpliceManager::AllocateStereoVoicePlugInPairToSpliceSample(SpliceSample *  lpSpliceSample) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// SpliceManager.cpp:282
void SpliceManager::AllocateMonoVoicePlugInPairToSpliceSample(SpliceSample *  lpSpliceSample) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// SpliceManager.cpp:440
void SpliceManager::VoicePool::FreeVoicePluginPair(SpliceManager::VoicePluginPair *  lpVoicePluginPair) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetAssertCallbackFunction(/* parameters */);
}

// SpliceManager.cpp:305
void SpliceManager::FreeStereoVoicePlugInPair(SpliceManager::VoicePluginPair *  lpVoicePlugInPair) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// SpliceManager.cpp:289
void SpliceManager::FreeMonoVoicePlugInPair(SpliceManager::VoicePluginPair *  lpVoicePlugInPair) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// SpliceManager.cpp:64
void SpliceManager::LoadSplice(void *  tmpdata, SPLICE_TYPE  splicetype) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// SpliceManager.cpp:66
		char * pdata;

		// SpliceManager.cpp:69
		int versionOfData;

		// SpliceManager.cpp:84
		int sizeofdata;

		// SpliceManager.cpp:87
		int numsplices;

		rw::audio::core::System::Assert(/* parameters */);
	}
}

// SpliceManager.cpp:169
void SpliceManager::CreateMonoVoice(SpliceManager::VoicePluginPair *  lpVoicePluginPair) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// SpliceManager.cpp:174
		PlugInConfig[4] plugInChain;

		// SpliceManager.cpp:178
		rw::audio::core::SndPlayer1::ConstructorParams constructorParams;

		Get(/* parameters */);
	}
	GetAssertCallbackFunction(/* parameters */);
}

// SpliceManager.cpp:220
void SpliceManager::CreateStereoVoice(SpliceManager::VoicePluginPair *  lpVoicePluginPair) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// SpliceManager.cpp:225
		PlugInConfig[4] plugInChain;

		// SpliceManager.cpp:229
		rw::audio::core::SndPlayer1::ConstructorParams constructorParams;

		Get(/* parameters */);
	}
	GetAssertCallbackFunction(/* parameters */);
}

// SpliceManager.cpp:14
void SpliceManager::SpliceManager(const CgsSound::Playback::Environment &  lEnvironment, unsigned int  luMonoVoiceCount, unsigned int  luStereoVoiceCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// SpliceManager.cpp:27
		rw::audio::core::PlugInRegistry * pPlugInRegistry;

		// SpliceManager.cpp:35
		unsigned int luVoicePluginPairIndex;

		// SpliceManager.cpp:38
		SpliceManager::VoicePluginPair[64] laMonoVoicePluginPairs;

		// SpliceManager.cpp:46
		SpliceManager::VoicePluginPair[64] laStereoVoicePluginPairs;

	}
}

// SpliceManager.cpp:150
void SpliceManager::FindSplice(SPLICE_TYPE  type, int  index) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SpliceContainer::Size(/* parameters */);
	GetAssertCallbackFunction(/* parameters */);
}

// _built-in_
namespace :: {
	// SpliceManager.cpp:7
	const int KI_SPLICE_DATA_VERSION = 1;

}

// SpliceManager.cpp:5

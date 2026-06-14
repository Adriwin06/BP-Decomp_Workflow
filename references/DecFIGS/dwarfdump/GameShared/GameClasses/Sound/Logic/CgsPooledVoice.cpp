// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundLogicModuleIO.h:39
	namespace Logic {
		// CgsPooledVoice.cpp:35
		const int32_t KI_FRAMES_LAG = 5;

	}

}

// CgsPooledVoice.cpp:73
void CgsSound::Logic::PooledVoice::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	VoiceWrapper::Prepare(/* parameters */);
	VoiceWrapper::CreateParams::Construct(/* parameters */);
}

// CgsPooledVoice.cpp:56
void CgsSound::Logic::PooledVoice::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPooledVoice.cpp:133
void CgsSound::Logic::PooledVoice::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPooledVoice.cpp:114
void CgsSound::Logic::PooledVoice::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetInUse(/* parameters */);
}

// CgsPooledVoice.cpp:153
void CgsSound::Logic::PooledVoice::Create(const const CgsSound::Logic::VoiceWrapper::CreateParams &  lCreateParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetInUse(/* parameters */);
}

// CgsPooledVoice.cpp:172
void CgsSound::Logic::PooledVoice::Play(uint32_t  lu32OptionalParam) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPooledVoice.cpp:92
void CgsSound::Logic::PooledVoice::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	IncrementAge(/* parameters */);
	SetInUse(/* parameters */);
}


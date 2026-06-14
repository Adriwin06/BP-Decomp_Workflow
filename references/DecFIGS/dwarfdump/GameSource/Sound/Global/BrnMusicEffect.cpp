// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// BrnMusicEffect.cpp:37
		extern const char * KPC_START_SCREEN_MUSIC;

		// BrnMusicEffect.cpp:44
		extern bool KB_MUSIC_MUTE;

		// BrnMusicEffect.cpp:46
		const float32_t KF_MUSIC_FADE_TIME;

		// BrnMusicEffect.cpp:47
		const float32_t KF_MUSIC_PREVIEW_FADE_TIME;

		// BrnMusicEffect.cpp:48
		const float32_t KF_JUNKYARD_AMBIENCE_FADE_TIME;

		// BrnMusicEffect.cpp:50
		float32_t KF_MUSIC_HIGH_PASS_ORDER;

		// BrnMusicEffect.cpp:51
		float32_t KF_MUSIC_LOW_PASS_ORDER;

		// BrnMusicEffect.cpp:52
		float32_t KF_MUSIC_HIGH_PASS_Q;

		// BrnMusicEffect.cpp:53
		float32_t KF_MUSIC_LOW_PASS_Q;

		// BrnMusicEffect.cpp:55
		float32_t KF_JUMP_HPF_OPEN_FREQUENCY;

		// BrnMusicEffect.cpp:56
		float32_t KF_JUMP_HPF_OPEN_TIME;

		// BrnMusicEffect.cpp:57
		float32_t KF_JUMP_HPF_CLOSE_TIME;

		// BrnMusicEffect.cpp:60
		const Name K_INTRO_MOVIE_NAME;

		// BrnMusicEffect.cpp:62
		const float32_t KF_MIN_LPF_FREQ;

		// BrnMusicEffect.cpp:65
		const float32_t KF_JUMPHPF_OPENING_FREQ;

		// BrnMusicEffect.cpp:79
		const char *[6] KAPC_RACE_END_NAMES;

		// BrnMusicEffect.cpp:89
		const int32_t KI_NUM_RACE_END_NAMES = 6;

		// BrnMusicEffect.cpp:91
		const BrnSound::Logic::MusicEffect::ClassicalMusicData[22] KA_CLASSICAL_MUSIC_DATA;

		// BrnMusicEffect.cpp:121
		const int32_t KI_NUM_PICTURE_PARADISE_NAMES = 22;

	}

}

// BrnMusicEffect.cpp:1901
void BrnSound::Logic::MusicEffect::JumpHpf::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMusicEffect.cpp:2110
void BrnSound::Logic::MusicEffect::JumpHpf::GetFrequency() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMusicEffect.cpp:1923
void BrnSound::Logic::MusicEffect::JumpHpf::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnMusicEffect.cpp:1882
void BrnSound::Logic::MusicEffect::EaTraxData::SetCurrentSong(int32_t  liSong) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FastBitArray<128>::IsBitSet(/* parameters */);
	CgsContainers::FastBitArray<128>::UnSetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnMusicEffect.cpp:1942
void BrnSound::Logic::MusicEffect::JumpHpf::Prepare(float32_t  lfTargetFrequency, float32_t  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMusicEffect.cpp:1978
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::fpu::IsZero(/* parameters */);
}

// BrnMusicEffect.cpp:1999
void BrnSound::Logic::MusicEffect::JumpHpf::Release(float32_t  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMusicEffect.cpp:2029
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::fpu::IsZero(/* parameters */);
}

// BrnMusicEffect.cpp:2050
void BrnSound::Logic::MusicEffect::JumpHpf::Update(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMusicEffect.cpp:2092
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnMusicEffect.cpp:2061
		float32_t lfNormalisedTime;

		rw::math::fpu::Pow(/* parameters */);
		vec_cmpgt(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_madd(/* parameters */);
		vec_andc(/* parameters */);
		vec_ctu(/* parameters */);
		vec_madd(/* parameters */);
		vec_cmpgt(/* parameters */);
		vec_and(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_add(/* parameters */);
		vec_madd(/* parameters */);
		vec_cmpgt(/* parameters */);
		vec_add(/* parameters */);
		vec_cts(/* parameters */);
		vec_ctf(/* parameters */);
		vec_sub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
	}
}

// BrnMusicEffect.cpp:1789
void BrnSound::Logic::MusicEffect::EaTraxData::SelectSong(int32_t  liTotalSongs, BrnSound::EMusicType  leCurrentMusicType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnMusicEffect.cpp:1794
		const BrnSound::Logic::MusicEffect::EaTraxData::EATraxArrayType * lpAvailableSongs;

		// BrnMusicEffect.cpp:1805
		uint8_t[128] lau8AvailableSongs;

		// BrnMusicEffect.cpp:1806
		uint32_t luNumAvailableSongs;

		// BrnMusicEffect.cpp:1809
		int32_t liBitIndex;

	}
	CgsContainers::FastBitArray<128>::IsBitSet(/* parameters */);
	CgsContainers::FastBitArray<128>::IsBitSet(/* parameters */);
	{
		// BrnMusicEffect.cpp:1852
		int32_t liCandidate;

		// BrnMusicEffect.cpp:1853
		bool lbFound;

		CgsContainers::FastBitArray<128>::IsBitSet(/* parameters */);
		CgsContainers::FastBitArray<128>::IsBitSet(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
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
	{
		// BrnMusicEffect.cpp:1844
		int32_t liChosenSong;

		CgsContainers::FastBitArray<128>::IsBitSet(/* parameters */);
		CgsContainers::FastBitArray<128>::IsBitSet(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
		Module::SoundLogicModule::GetRandomGenerator(/* parameters */);
		CgsNumeric::Random::RandomInt(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
}


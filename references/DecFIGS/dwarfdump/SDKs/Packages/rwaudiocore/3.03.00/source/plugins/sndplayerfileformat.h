// importnamespaces.h:8
namespace rw {
	// pdebug.h:13
	namespace audio {
		// pdebug.h:15
		namespace core {
			// sndplayerfileformat.h:28
			const int SNDPLAYER_VERSION_BITS = 4;

			// sndplayerfileformat.h:32
			const int SNDPLAYER_CODEC_BITS = 4;

			// sndplayerfileformat.h:39
			const int SNDPLAYER_NUMCHANNELS_BITS = 6;

			// sndplayerfileformat.h:46
			const int SNDPLAYER_SAMPLERATE_BITS = 18;

			// sndplayerfileformat.h:50
			const int SNDPLAYER_PLAYTYPE_BITS = 2;

			// sndplayerfileformat.h:54
			const int SNDPLAYER_LOOPFLAG_BITS = 1;

			// sndplayerfileformat.h:62
			const int SNDPLAYER_NUMSAMPLES_BITS = 29;

			// sndplayerfileformat.h:66
			const int SNDPLAYER_LOOPSTART_BITS = 32;

			// sndplayerfileformat.h:72
			const int SNDPLAYER_GIGA_RESIDENT_NUMSAMPLES_BITS = 32;

			// sndplayerfileformat.h:81
			const int SNDPLAYER_STREAM_OFFSET_LOOPSTART_BITS = 32;

			// sndplayerfileformat.h:84
			const int SNDPLAYER_VERSION;

		}

	}

}

// sndplayerfileformat.h:108
struct rw::audio::core::SndPlayerChunkHeader {
	// sndplayerfileformat.h:109
	unsigned int bytes;

	// sndplayerfileformat.h:110
	unsigned int samples;

}


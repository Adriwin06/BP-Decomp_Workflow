// importnamespaces.h:8
namespace rw {
	// pdebug.h:13
	namespace audio {
		// pdebug.h:15
		namespace core {
			// Declaration
			struct SndPlayer1 {
				// sndplayer1.h:213
				struct DecoderIndexToGuidDesc {
					// sndplayer1.h:214
					DecoderDesc::Guid guid;

				}

			}

		}

	}

}

// sndplayer1.h:169
extern const unsigned char MAX_DECODERFEEDS = 20;

// sndplayer1.h:220
extern rw::audio::core::SndPlayer1::DecoderIndexToGuidDesc[] sDecoderGuidLut;

// importnamespaces.h:8
namespace rw {
	// pdebug.h:13
	namespace audio {
		// pdebug.h:15
		namespace core {
			// Declaration
			struct SndPlayer1 {
				// sndplayer1.h:51
				struct ConstructorParams {
					// sndplayer1.h:52
					float maxRequests;

				}

				// sndplayer1.h:82
				struct PlayParams {
					// sndplayer1.h:83
					double startTime;

					// sndplayer1.h:84
					double streamFileOffset;

					// sndplayer1.h:85
					const char * pStreamFilePath;

					// sndplayer1.h:86
					void * pRamData;

					// sndplayer1.h:87
					DecoderDesc::Guid streamPoolGuid;

					// sndplayer1.h:88
					float expelMode;

					// sndplayer1.h:89
					float requestHandle;

				}

				// sndplayer1.h:113
				struct IsRequestDoneParams {
					// sndplayer1.h:114
					float requestHandle;

					// sndplayer1.h:115
					float isRequestDone;

				}

				// sndplayer1.h:137
				struct FileInfo {
					// sndplayer1.h:138
					unsigned char numChannels;

					// sndplayer1.h:139
					int sampleRate;

					// sndplayer1.h:140
					int numSamples;

				}

				// sndplayer1.h:213
				struct DecoderIndexToGuidDesc {
					// sndplayer1.h:214
					DecoderDesc::Guid guid;

				}

			}

		}

	}

}

// sndplayer1.h:46
extern const DecoderDesc::Guid GUID = 1399738417;


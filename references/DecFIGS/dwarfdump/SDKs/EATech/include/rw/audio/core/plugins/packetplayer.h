// importnamespaces.h:8
namespace rw {
	// pdebug.h:13
	namespace audio {
		// pdebug.h:15
		namespace core {
			// Declaration
			struct PacketPlayer {
				// packetplayer.h:254
				struct DecoderIndexToGuidDesc {
					// packetplayer.h:255
					DecoderDesc::Guid guid;

				}

			}

		}

	}

}

// packetplayer.h:223
extern const unsigned char MAX_DECODERFEEDS = 20;

// packetplayer.h:261
extern rw::audio::core::PacketPlayer::DecoderIndexToGuidDesc[] sDecoderGuidLut;


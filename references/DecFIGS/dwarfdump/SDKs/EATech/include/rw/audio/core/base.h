// importnamespaces.h:8
namespace rw {
	// pdebug.h:13
	namespace audio {
		// pdebug.h:15
		namespace core {
			// base.h:206
			enum Error {
				ERROR_OK = 0,
				ERROR_INSUFFICIENTMEMORY = -1,
			}

			// base.h:242
			const float PRIORITY_PERMANENT;

			// base.h:308
			const short unsigned int MIXER_FRAME_SIZE = 256;

			// base.h:315
			const unsigned char GAIN_DECLICK_FRAME_SIZE = 64;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// pdebug.h:13
	namespace audio {
		// pdebug.h:15
		namespace core {
			// base.h:206
			enum Error {
				ERROR_OK = 0,
				ERROR_INSUFFICIENTMEMORY = -1,
			}

			// base.h:319
			enum BufferStatus {
				BUFFERSTATUS_UNAVAILABLE = 0,
				BUFFERSTATUS_AVAILABLE = 1,
			}

			// base.h:242
			const float PRIORITY_PERMANENT;

			// base.h:308
			const short unsigned int MIXER_FRAME_SIZE = 256;

			// base.h:315
			const unsigned char GAIN_DECLICK_FRAME_SIZE = 64;

		}

	}

}


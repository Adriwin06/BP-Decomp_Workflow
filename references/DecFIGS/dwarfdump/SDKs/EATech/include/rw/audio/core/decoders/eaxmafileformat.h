// importnamespaces.h:8
namespace rw {
	// pdebug.h:13
	namespace audio {
		// pdebug.h:15
		namespace core {
			// eaxmafileformat.h:22
			const int EAXMA_HEADER_SIZE_BYTES = 4;

			// eaxmafileformat.h:23
			const int EAXMA_HEADER_DECODER_TABLE_BITS = 2;

			// eaxmafileformat.h:24
			const int EAXMA_HEADER_DECODER_TABLE_BITMASK = 3;

			// eaxmafileformat.h:25
			const int EAXMA_HEADER_BLOCKSIZE_BITMASK = [255, 255, 255, 255, 255, 255, 255, 252];

			// eaxmafileformat.h:27
			const int EAXMA_TARGET_NUM_FRAMES_IN_A_CHUNK = 10;

			// eaxmafileformat.h:45
			const int XMA_PACKET_HEADER_FRAMESIZE_BITS = 15;

			// eaxmafileformat.h:46
			const int XMA_PACKET_HEADER_BITS_AFTER_FRAMESEEK = 11;

			// eaxmafileformat.h:47
			const int XMA_PACKET_HEADER_SIZE_BITS = 32;

			// eaxmafileformat.h:48
			const int XMA_PACKET_SIZE_BYTES = 2048;

			// eaxmafileformat.h:49
			const int XMA_PACKET_PAYLOAD_BITS = 16352;

			// eaxmafileformat.h:55
			const int XMA_FRAME_HEADER_SIZE_BITS = 15;

			// eaxmafileformat.h:57
			const int XMA_NUM_SAMPLES_PER_FRAME = 512;

			// eaxmafileformat.h:58
			const int XMA_NUM_SAMPLES_PER_SUBFRAME = 128;

			// eaxmafileformat.h:69
			const int XMA_INVALID_SAMPLES = 384;

		}

	}

}


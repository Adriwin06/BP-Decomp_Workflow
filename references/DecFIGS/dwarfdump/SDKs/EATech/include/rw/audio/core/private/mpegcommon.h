// importnamespaces.h:8
namespace rw {
	// pdebug.h:13
	namespace audio {
		// pdebug.h:15
		namespace core {
			// mpegcommon.h:37
			const int CODA_OK;

			// mpegcommon.h:38
			const int CODAERR_NOT_READY = 4294967295;

			// mpegcommon.h:39
			const int CODAERR_UNSUPPORTED = 4294967294;

			// mpegcommon.h:49
			const int[4] MPEG_AUDIO_LAYER_LATENCY;

		}

	}

}

// mpegcommon.h:115
struct rw::audio::core::SBI {
	// mpegcommon.h:116
	short int[23] l;

	// mpegcommon.h:117
	unsigned char[14] s;

}

// mpegcommon.h:172
struct rw::audio::core::AntiAliasCoefficients {
	// mpegcommon.h:173
	float[8] cs;

	// mpegcommon.h:174
	float[8] ca;

}

// mpegcommon.h:265
extern short unsigned int[] sSampleRateTable;

// mpegcommon.h:283
extern const unsigned char[6][3][4] sNumSfbBlock;

// mpegcommon.h:350
extern unsigned char[] sHuffTableLinearBits;

// mpegcommon.h:352
extern const char[2][16] slen;

// mpegcommon.h:353
extern const SBI[6] sfBandIndex;

// mpegcommon.h:175
typedef AntiAliasCoefficients AntiAliasCoefficients;

// mpegcommon.h:354
extern const AntiAliasCoefficients sAntiAliasCoefficients;

// mpegcommon.h:360
extern const float[32] sToPowerOf4over3Coefficients0To31;


// CgsStrStream.h:39
namespace CgsDev {
	// CgsMessage.h:38
	namespace Message {
		// CgsMessage.h:41
		const int32_t KI_MAX_FILTER = 64;

		// CgsMessage.h:44
		const FilterFlag NONE;

		// CgsMessage.h:45
		const FilterFlag ALL = [0, 0, 0, 0, 255, 255, 255, 255];

		// CgsMessage.h:48
		const FilterFlag GLOBAL = 1;

		// CgsMessage.h:51
		const FilterFlag GAMESHARED = 2;

		// CgsMessage.h:54
		const FilterFlag GSCONTAINERS = 2;

		// CgsMessage.h:55
		const FilterFlag GSDEVELOPMENT = 4;

		// CgsMessage.h:56
		const FilterFlag GSGEOMETRIC = 8;

		// CgsMessage.h:57
		const FilterFlag GSGRAPHICS = 16;

		// CgsMessage.h:58
		const FilterFlag GSLANGUAGE = 32;

		// CgsMessage.h:59
		const FilterFlag GSMEMORY = 64;

		// CgsMessage.h:60
		const FilterFlag GSMODULE = 128;

		// CgsMessage.h:61
		const FilterFlag GSNETWORK = 256;

		// CgsMessage.h:62
		const FilterFlag GSPHYSICS = 512;

		// CgsMessage.h:63
		const FilterFlag GSSCENEMANAGER = 1024;

		// CgsMessage.h:64
		const FilterFlag GSSOUND = 2048;

		// CgsMessage.h:65
		const FilterFlag GSSYSTEM = 4096;

		// CgsMessage.h:66
		const FilterFlag GSFILESYSTEM = 8192;

		// CgsMessage.h:67
		const FilterFlag GSRESOURCE = 16384;

		// CgsMessage.h:70
		const FilterFlag GAME = 32768;

	}

}

// CgsMessage.h:40
typedef uint64_t FilterFlag;

// CgsStrStream.h:39
namespace CgsDev {
	// CgsMessage.h:38
	namespace Message {
		// CgsMessage.h:41
		const int32_t KI_MAX_FILTER = 64;

		// CgsMessage.h:44
		const FilterFlag NONE;

		// CgsMessage.h:45
		const FilterFlag ALL = [0, 0, 0, 0, 255, 255, 255, 255];

		// CgsMessage.h:48
		const FilterFlag GLOBAL = 1;

		// CgsMessage.h:51
		const FilterFlag GAMESHARED = 2;

		// CgsMessage.h:54
		const FilterFlag GSCONTAINERS = 2;

		// CgsMessage.h:55
		const FilterFlag GSDEVELOPMENT = 4;

		// CgsMessage.h:56
		const FilterFlag GSGEOMETRIC = 8;

		// CgsMessage.h:57
		const FilterFlag GSGRAPHICS = 16;

		// CgsMessage.h:58
		const FilterFlag GSLANGUAGE = 32;

		// CgsMessage.h:59
		const FilterFlag GSMEMORY = 64;

		// CgsMessage.h:60
		const FilterFlag GSMODULE = 128;

		// CgsMessage.h:61
		const FilterFlag GSNETWORK = 256;

		// CgsMessage.h:62
		const FilterFlag GSPHYSICS = 512;

		// CgsMessage.h:63
		const FilterFlag GSSCENEMANAGER = 1024;

		// CgsMessage.h:64
		const FilterFlag GSSOUND = 2048;

		// CgsMessage.h:65
		const FilterFlag GSSYSTEM = 4096;

		// CgsMessage.h:66
		const FilterFlag GSFILESYSTEM = 8192;

		// CgsMessage.h:67
		const FilterFlag GSRESOURCE = 16384;

		// CgsMessage.h:70
		const FilterFlag GAME = 32768;

		// CgsMessage.h:147
		extern FilterFlag gxMessageFilterFlags;

	}

}

// CgsMessage.h:147
extern FilterFlag gxMessageFilterFlags;


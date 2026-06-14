// importnamespaces.h:8
namespace rw {
	// pdebug.h:13
	namespace audio {
		// pdebug.h:15
		namespace core {
			// pluginregistryentry.h:20
			const unsigned char MAX_PLUGINREGISTRY_ENTRIES = 48;

		}

	}

}

// pluginregistryentry.h:24
struct rw::audio::core::PlugInRegistryEntry {
	// pluginregistryentry.h:31
	void * pSpuElfInPpuMem;

	// pluginregistryentry.h:33
	uintptr_t pPreProcess;

	// pluginregistryentry.h:35
	uintptr_t pProcess;

	// pluginregistryentry.h:40
	unsigned int spuElfInSpuMemAddr;

	// pluginregistryentry.h:42
	unsigned int spuElfSize;

}


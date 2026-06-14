// CgsAptDataHandler.h:94
extern const int32_t KI_MAX_LOADED_APT_HEADERS = 128;

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct AptDataHandler {
		// CgsAptDataHandler.h:102
		struct sAptDataHeaderInfo {
			// CgsAptDataHandler.h:103
			uint32_t mHashKey;

			// CgsAptDataHandler.h:104
			AptDataHeader * mpAptDataHeader;

		}

	}

}

// CgsAptDataHandler.h:45
struct CgsGui::AptDataHandler {
private:
	// CgsAptDataHandler.h:94
	extern const int32_t KI_MAX_LOADED_APT_HEADERS = 128;

	// CgsAptDataHandler.h:97
	int32_t miNumLoadedAptData;

	// CgsAptDataHandler.h:105
	CgsGui::AptDataHandler::sAptDataHeaderInfo[128] maAptDataHeaderInfo;

	// CgsAptDataHandler.h:108
	HeapMalloc * mpAllocator;

public:
	// CgsAptDataHandler.h:49
	void Construct();

	// CgsAptDataHandler.h:54
	bool Prepare(HeapMalloc *);

	// CgsAptDataHandler.h:58
	bool Release();

	// CgsAptDataHandler.h:62
	void Destruct();

	// CgsAptDataHandler.h:67
	AptDataHeader * FindAptData(const char *);

	// CgsAptDataHandler.h:72
	AptDataHeader * FindAptData(uint32_t);

	// CgsAptDataHandler.h:77
	void AddAptData(AptDataHeader *);

	// CgsAptDataHandler.h:82
	void RemoveAptData(uint32_t);

	// CgsAptDataHandler.h:86
	void * AptAlloc(size_t);

	// CgsAptDataHandler.h:90
	void AptFree(void *);

}

// CgsAptDataHandler.h:45
struct CgsGui::AptDataHandler {
private:
	// CgsAptDataHandler.h:94
	extern const int32_t KI_MAX_LOADED_APT_HEADERS = 128;

	// CgsAptDataHandler.h:97
	int32_t miNumLoadedAptData;

	// CgsAptDataHandler.h:105
	CgsGui::AptDataHandler::sAptDataHeaderInfo[128] maAptDataHeaderInfo;

	// CgsAptDataHandler.h:108
	CgsMemory::HeapMalloc * mpAllocator;

public:
	// CgsAptDataHandler.h:49
	void Construct();

	// CgsAptDataHandler.h:54
	bool Prepare(CgsMemory::HeapMalloc *);

	// CgsAptDataHandler.h:58
	bool Release();

	// CgsAptDataHandler.h:62
	void Destruct();

	// CgsAptDataHandler.h:67
	AptDataHeader * FindAptData(const char *);

	// CgsAptDataHandler.h:72
	AptDataHeader * FindAptData(uint32_t);

	// CgsAptDataHandler.h:77
	void AddAptData(AptDataHeader *);

	// CgsAptDataHandler.h:82
	void RemoveAptData(uint32_t);

	// CgsAptDataHandler.h:86
	void * AptAlloc(size_t);

	// CgsAptDataHandler.h:90
	void AptFree(void *);

}

// CgsGuiShared.h:40
namespace CgsGui {
	// Declaration
	struct AptDataHandler {
		// CgsAptDataHandler.h:102
		struct sAptDataHeaderInfo {
			// CgsAptDataHandler.h:103
			uint32_t mHashKey;

			// CgsAptDataHandler.h:104
			AptDataHeader * mpAptDataHeader;

		}

	}

}

// CgsAptDataHandler.h:45
struct CgsGui::AptDataHandler {
private:
	// CgsAptDataHandler.h:94
	extern const int32_t KI_MAX_LOADED_APT_HEADERS = 128;

	// CgsAptDataHandler.h:97
	int32_t miNumLoadedAptData;

	// CgsAptDataHandler.h:105
	CgsGui::AptDataHandler::sAptDataHeaderInfo[128] maAptDataHeaderInfo;

	// CgsAptDataHandler.h:108
	HeapMalloc * mpAllocator;

public:
	// CgsAptDataHandler.h:49
	void Construct();

	// CgsAptDataHandler.h:54
	bool Prepare(HeapMalloc *);

	// CgsAptDataHandler.h:58
	bool Release();

	// CgsAptDataHandler.h:62
	void Destruct();

	// CgsAptDataHandler.h:67
	AptDataHeader * FindAptData(const char *);

	// CgsAptDataHandler.h:72
	AptDataHeader * FindAptData(uint32_t);

	// CgsAptDataHandler.h:77
	void AddAptData(AptDataHeader *);

	// CgsAptDataHandler.h:82
	// Declaration
	void RemoveAptData(uint32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsAptDataHandler.cpp:188
		using namespace CgsDev::Message;

	}

	// CgsAptDataHandler.h:86
	void * AptAlloc(size_t);

	// CgsAptDataHandler.h:90
	void AptFree(void *);

}

// CgsOpaqueBuffer.h:30
namespace CgsGui {
	// Declaration
	struct AptDataHandler {
		// CgsAptDataHandler.h:102
		struct sAptDataHeaderInfo {
			// CgsAptDataHandler.h:103
			uint32_t mHashKey;

			// CgsAptDataHandler.h:104
			AptDataHeader * mpAptDataHeader;

		}

	}

}


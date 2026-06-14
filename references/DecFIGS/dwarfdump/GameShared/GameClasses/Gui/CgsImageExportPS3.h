// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct ImageExportPS3 {
		// CgsImageExportPS3.h:81
		enum EExportState {
			E_EXPORT_STATE_INITIALISE_START = 0,
			E_EXPORT_STATE_INITIALISE_END = 1,
			E_EXPORT_STATE_EXPORT_START = 2,
			E_EXPORT_STATE_EXPORT_END = 3,
			E_EXPORT_STATE_FINALISE_START = 4,
			E_EXPORT_STATE_FINALISE_END = 5,
			E_EXPORT_STATE_COUNT = 6,
		}

	}

}

// CgsImageExportPS3.h:52
struct CgsGui::ImageExportPS3 {
private:
	// CgsImageExportPS3.h:93
	sys_memory_container_t mMemoryContainer;

	// CgsImageExportPS3.h:94
	CgsGui::ImageExportPS3::EExportState meExportState;

public:
	// CgsImageExportPS3.h:58
	void Construct(sys_memory_container_t);

	// CgsImageExportPS3.h:62
	bool Prepare();

	// CgsImageExportPS3.h:66
	bool Release();

	// CgsImageExportPS3.h:70
	void Destruct();

	// CgsImageExportPS3.h:77
	// Declaration
	CgsGui::SaveDataSystem::ETaskResult ExportImage(const char *, void *, const char *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsImageExportPS3.cpp:286
		using namespace CgsDev::Message;

		// CgsImageExportPS3.cpp:308
		using namespace CgsDev::Message;

	}

private:
	// CgsImageExportPS3.h:101
	void SaveJpegToGameData(const char *, char *, int32_t);

	// CgsImageExportPS3.h:106
	// Declaration
	void HandlePhotoUtilError(int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsImageExportPS3.cpp:435
		using namespace CgsDev::Message;

		// CgsImageExportPS3.cpp:441
		using namespace CgsDev::Message;

		// CgsImageExportPS3.cpp:447
		using namespace CgsDev::Message;

		// CgsImageExportPS3.cpp:453
		using namespace CgsDev::Message;

		// CgsImageExportPS3.cpp:459
		using namespace CgsDev::Message;

		// CgsImageExportPS3.cpp:465
		using namespace CgsDev::Message;

		// CgsImageExportPS3.cpp:471
		using namespace CgsDev::Message;

		// CgsImageExportPS3.cpp:477
		using namespace CgsDev::Message;

		// CgsImageExportPS3.cpp:483
		using namespace CgsDev::Message;

		// CgsImageExportPS3.cpp:489
		using namespace CgsDev::Message;

		// CgsImageExportPS3.cpp:495
		using namespace CgsDev::Message;

		// CgsImageExportPS3.cpp:501
		using namespace CgsDev::Message;

	}

	// CgsImageExportPS3.h:112
	void PhotoUtilCallback(int32_t, void *);

	// CgsImageExportPS3.h:118
	// Declaration
	void DumpJpegToDisk(const char *, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsImageExportPS3.cpp:520
		using namespace rw::core::filesys;

	}

}


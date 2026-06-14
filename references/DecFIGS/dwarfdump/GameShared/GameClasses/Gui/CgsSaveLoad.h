// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsSaveLoad.h:44
	const uint32_t KI_KB_SIZE_BYTES = 1024;

	// CgsSaveLoad.h:45
	const uint32_t KI_FILE_BLOCK_SIZE_BYTES = 65536;

	// CgsSaveLoad.h:50
	const int32_t KI_MAX_IMAGE_FILES_PER_OPERATION = 7;

}

// CgsSaveLoad.h:154
extern const size_t TITLELENGTH_MAX = 32;

// CgsSaveLoad.h:155
extern const size_t DESCRIPTIONLENGTH_MAX = 256;

// CgsSaveLoad.h:171
extern const int32_t TYPENAMELENGTH_MAX = 32;

// CgsSaveLoad.h:172
extern const int32_t FILENAMELENGTH_MAX = 16;

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsSaveLoad.h:305
	extern void ConvertWideCharToAsciiSafe(char *, const wchar_t *, size_t);

	// CgsSaveLoad.h:284
	extern bool WideCharIsAscii(const wchar_t *);

	// CgsSaveLoad.h:272
	extern bool WideCharIsAscii(wchar_t);

	// CgsSaveLoad.h:44
	const uint32_t KI_KB_SIZE_BYTES = 1024;

	// CgsSaveLoad.h:45
	const uint32_t KI_FILE_BLOCK_SIZE_BYTES = 65536;

	// CgsSaveLoad.h:50
	const int32_t KI_MAX_IMAGE_FILES_PER_OPERATION = 7;

}

// CgsGuiShared.h:40
namespace CgsGui {
	// CgsSaveLoad.h:55
	enum ESaveLoadTaskResult {
		E_SAVELOADTASKRESULT_SUCCESS = 0,
		E_SAVELOADTASKRESULT_FAILURE = 1,
		E_SAVELOADTASKRESULT_CANCELLED = 2,
		E_SAVELOADTASKRESULT_MAX = 3,
	}

	// CgsSaveLoad.h:305
	extern void ConvertWideCharToAsciiSafe(char *, const wchar_t *, size_t);

	// CgsSaveLoad.h:284
	extern bool WideCharIsAscii(const wchar_t *);

	// CgsSaveLoad.h:272
	extern bool WideCharIsAscii(wchar_t);

	// CgsSaveLoad.h:44
	const uint32_t KI_KB_SIZE_BYTES = 1024;

	// CgsSaveLoad.h:45
	const uint32_t KI_FILE_BLOCK_SIZE_BYTES = 65536;

	// CgsSaveLoad.h:50
	const int32_t KI_MAX_IMAGE_FILES_PER_OPERATION = 7;

}

// CgsSaveLoad.h:153
struct CgsGui::SaveInfo {
	// CgsSaveLoad.h:154
	extern const size_t TITLELENGTH_MAX = 32;

	// CgsSaveLoad.h:155
	extern const size_t DESCRIPTIONLENGTH_MAX = 256;

	// CgsSaveLoad.h:157
	char[32] macTitle;

	// CgsSaveLoad.h:158
	char[256] macDescription;

}

// CgsSaveLoad.h:170
struct CgsGui::SaveLoadMetadata {
	// CgsSaveLoad.h:171
	extern const int32_t TYPENAMELENGTH_MAX = 32;

	// CgsSaveLoad.h:172
	extern const int32_t FILENAMELENGTH_MAX = 16;

	// CgsSaveLoad.h:174
	char[32] macTypename;

	// CgsSaveLoad.h:175
	char[16] macFilename;

	// CgsSaveLoad.h:177
	OpaqueBuffer mStoredData;

}

// CgsSaveLoad.h:139
struct CgsGui::SaveLoadTaskResultHandler {
	int (*)(...) * _vptr.SaveLoadTaskResultHandler;

public:
	// CgsSaveLoad.h:141
	virtual void HandleSaveLoadTaskResult(CgsGui::ESaveLoadTaskResult);

}

// CgsSaveLoad.h:107
struct CgsGui::MessageDisplay {
	int (*)(...) * _vptr.MessageDisplay;

public:
	// CgsSaveLoad.h:121
	virtual void ShowMessage(CgsGui::MessageDisplay::OptionHandler *, const char *, const char **, uint32_t);

	// CgsSaveLoad.h:122
	virtual void ShowNoSpaceMessage(CgsGui::MessageDisplay::OptionHandler *, const char *, uint32_t, uint32_t);

	// CgsSaveLoad.h:123
	virtual void HideMessage();

	// CgsSaveLoad.h:127
	virtual void ShowAutosaveIcon(bool);

}

// CgsSaveLoad.h:117
struct CgsGui::MessageDisplay::OptionHandler {
	int (*)(...) * _vptr.OptionHandler;

public:
	// CgsSaveLoad.h:119
	virtual void HandleOption(uint32_t);

}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsSaveLoad.h:55
	enum ESaveLoadTaskResult {
		E_SAVELOADTASKRESULT_SUCCESS = 0,
		E_SAVELOADTASKRESULT_FAILURE = 1,
		E_SAVELOADTASKRESULT_CANCELLED = 2,
		E_SAVELOADTASKRESULT_MAX = 3,
	}

	// CgsSaveLoad.h:63
	enum ESaveLoadCif {
		E_SAVELOADCIF_SAVEDATA_START = 0,
		E_SAVELOADCIF_SAVEDATA_ICON0 = 0,
		E_SAVELOADCIF_SAVEDATA_ICON1 = 1,
		E_SAVELOADCIF_SAVEDATA_PIC1 = 2,
		E_SAVELOADCIF_SAVEDATA_SND0 = 3,
		E_SAVELOADCIF_SAVEDATA_COUNT = 4,
		E_SAVELOADCIF_GAMEDATA_START = 4,
		E_SAVELOADCIF_GAMEDATA_ICON0 = 4,
		E_SAVELOADCIF_GAMEDATA_ICON1 = 5,
		E_SAVELOADCIF_GAMEDATA_PIC1 = 6,
		E_SAVELOADCIF_GAMEDATA_SND0 = 7,
		E_SAVELOADCIF_GAMEDATA_COUNT = 4,
		E_SAVELOADCIF_COUNT = 8,
	}

	// CgsSaveLoad.h:44
	const uint32_t KI_KB_SIZE_BYTES = 1024;

	// CgsSaveLoad.h:45
	const uint32_t KI_FILE_BLOCK_SIZE_BYTES = 65536;

	// CgsSaveLoad.h:50
	const int32_t KI_MAX_IMAGE_FILES_PER_OPERATION = 7;

}

// CgsSaveLoad.h:224
struct CgsGui::ContentInformation {
	// CgsSaveLoad.h:225
	const char * mpTitle;

	// CgsSaveLoad.h:226
	const char * mpSubtitle;

	// CgsSaveLoad.h:227
	const char * mpDescription;

	// CgsSaveLoad.h:228
	uint32_t muParentalLevel;

	// CgsSaveLoad.h:229
	CgsGui::ContentInformationFileInterface * mpCifInterface;

}

// CgsSaveLoad.h:189
struct CgsGui::ContentInformationFileInterface {
	int (*)(...) * _vptr.ContentInformationFileInterface;

public:
	void ContentInformationFileInterface(const ContentInformationFileInterface &);

	void ContentInformationFileInterface();

	// CgsSaveLoad.h:195
	virtual bool IsSavingCif(CgsGui::ESaveLoadCif);

	// CgsSaveLoad.h:200
	virtual int GetCifFileType(CgsGui::ESaveLoadCif);

	// CgsSaveLoad.h:205
	virtual const char * GetCifFileName(CgsGui::ESaveLoadCif);

	// CgsSaveLoad.h:212
	virtual bool LoadCifFile(CgsGui::ESaveLoadCif, void **, int32_t *);

}

// CgsSaveLoad.h:139
struct CgsGui::SaveLoadTaskResultHandler {
	int (*)(...) * _vptr.SaveLoadTaskResultHandler;

public:
	void SaveLoadTaskResultHandler(const SaveLoadTaskResultHandler &);

	void SaveLoadTaskResultHandler();

	// CgsSaveLoad.h:141
	virtual void HandleSaveLoadTaskResult(CgsGui::ESaveLoadTaskResult);

}

// CgsSaveLoad.h:107
struct CgsGui::MessageDisplay {
	int (*)(...) * _vptr.MessageDisplay;

	struct OptionHandler;

public:
	void MessageDisplay(const MessageDisplay &);

	void MessageDisplay();

	// CgsSaveLoad.h:121
	virtual void ShowMessage(MessageDisplay::OptionHandler *, const char *, const char **, uint32_t);

	// CgsSaveLoad.h:122
	virtual void ShowNoSpaceMessage(MessageDisplay::OptionHandler *, const char *, uint32_t, uint32_t);

	// CgsSaveLoad.h:123
	virtual void HideMessage();

	// CgsSaveLoad.h:127
	virtual void ShowAutosaveIcon(bool);

}

// CgsSaveLoad.h:117
struct CgsGui::MessageDisplay::OptionHandler {
	int (*)(...) * _vptr.OptionHandler;

public:
	void OptionHandler(const OptionHandler &);

	void OptionHandler();

	// CgsSaveLoad.h:119
	virtual void HandleOption(uint32_t);

}

// CgsSaveLoad.h:139
void CgsGui::SaveLoadTaskResultHandler::SaveLoadTaskResultHandler() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSaveLoad.h:107
void CgsGui::MessageDisplay::MessageDisplay() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSaveLoad.h:117
void CgsGui::MessageDisplay::OptionHandler::OptionHandler() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsSaveLoad.h:189
void CgsGui::ContentInformationFileInterface::ContentInformationFileInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// CgsSaveLoad.h:55
	enum ESaveLoadTaskResult {
		E_SAVELOADTASKRESULT_SUCCESS = 0,
		E_SAVELOADTASKRESULT_FAILURE = 1,
		E_SAVELOADTASKRESULT_CANCELLED = 2,
		E_SAVELOADTASKRESULT_MAX = 3,
	}

	// CgsSaveLoad.h:63
	enum ESaveLoadCif {
		E_SAVELOADCIF_SAVEDATA_START = 0,
		E_SAVELOADCIF_SAVEDATA_ICON0 = 0,
		E_SAVELOADCIF_SAVEDATA_ICON1 = 1,
		E_SAVELOADCIF_SAVEDATA_PIC1 = 2,
		E_SAVELOADCIF_SAVEDATA_SND0 = 3,
		E_SAVELOADCIF_SAVEDATA_COUNT = 4,
		E_SAVELOADCIF_GAMEDATA_START = 4,
		E_SAVELOADCIF_GAMEDATA_ICON0 = 4,
		E_SAVELOADCIF_GAMEDATA_ICON1 = 5,
		E_SAVELOADCIF_GAMEDATA_PIC1 = 6,
		E_SAVELOADCIF_GAMEDATA_SND0 = 7,
		E_SAVELOADCIF_GAMEDATA_COUNT = 4,
		E_SAVELOADCIF_COUNT = 8,
	}

	// Declaration
	struct MessageDisplay {
		// CgsSaveLoad.h:117
		struct OptionHandler {
			int (*)(...) * _vptr.OptionHandler;

		public:
			// CgsSaveLoad.h:119
			virtual void HandleOption(uint32_t);

		}

	}

	// CgsSaveLoad.h:260
	extern int32_t GetSizeIn64Kb(int32_t);

	// CgsSaveLoad.h:248
	extern int32_t GetSizeInKb(int32_t);

	// CgsSaveLoad.h:44
	const uint32_t KI_KB_SIZE_BYTES = 1024;

	// CgsSaveLoad.h:45
	const uint32_t KI_FILE_BLOCK_SIZE_BYTES = 65536;

	// CgsSaveLoad.h:50
	const int32_t KI_MAX_IMAGE_FILES_PER_OPERATION = 7;

}

// CgsSaveLoad.h:189
struct CgsGui::ContentInformationFileInterface {
	int (*)(...) * _vptr.ContentInformationFileInterface;

public:
	// CgsSaveLoad.h:195
	virtual bool IsSavingCif(CgsGui::ESaveLoadCif);

	// CgsSaveLoad.h:200
	virtual int GetCifFileType(CgsGui::ESaveLoadCif);

	// CgsSaveLoad.h:205
	virtual const char * GetCifFileName(CgsGui::ESaveLoadCif);

	// CgsSaveLoad.h:212
	virtual bool LoadCifFile(CgsGui::ESaveLoadCif, void **, int32_t *);

}

// CgsOpaqueBuffer.h:30
namespace CgsGui {
	// CgsSaveLoad.h:44
	const uint32_t KI_KB_SIZE_BYTES = 1024;

	// CgsSaveLoad.h:45
	const uint32_t KI_FILE_BLOCK_SIZE_BYTES = 65536;

	// CgsSaveLoad.h:50
	const int32_t KI_MAX_IMAGE_FILES_PER_OPERATION = 7;

}


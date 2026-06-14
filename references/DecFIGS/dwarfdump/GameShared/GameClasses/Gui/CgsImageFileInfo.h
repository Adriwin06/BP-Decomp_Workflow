// CgsImageFileInfo.h:39
struct CgsGui::ImageFileInfo {
	// CgsImageFileInfo.h:48
	int32_t miId;

	// CgsImageFileInfo.h:49
	int32_t miSize;

	// CgsImageFileInfo.h:50
	char * mpBuffer;

	// CgsImageFileInfo.h:51
	bool mbIsCorrupt;

public:
	// CgsImageFileInfo.h:43
	void Construct();

	// CgsImageFileInfo.h:46
	bool IsValid() const;

}


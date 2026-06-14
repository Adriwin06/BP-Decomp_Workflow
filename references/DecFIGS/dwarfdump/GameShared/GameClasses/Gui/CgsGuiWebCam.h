// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct GuiWebCam {
		// CgsGuiWebCam.h:62
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_DONE = 1,
		}

		// CgsGuiWebCam.h:68
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_DONE = 1,
		}

		// CgsGuiWebCam.h:113
		enum FrameStatus {
			E_INVALID = 0,
			E_READ_REQUESTED = 1,
			E_READY = 2,
		}

		// CgsGuiWebCam.h:122
		struct TextureInfoType {
			// CgsGuiWebCam.h:124
			Resource mTextureResource;

			// CgsGuiWebCam.h:125
			Texture2D * mpTexture;

			// CgsGuiWebCam.h:126
			Resource mTextureStateResource;

			// CgsGuiWebCam.h:127
			TextureState * mpTextureState;

			// CgsGuiWebCam.h:128
			renderengine::Texture::Locked mLockedTexture;

			// CgsGuiWebCam.h:130
			CgsGui::GuiWebCam::FrameStatus meStatus;

		public:
			// CgsGuiWebCam.h:123
			TextureInfoType();

		}

	}

}

// CgsGuiWebCam.h:53
struct CgsGui::GuiWebCam {
	// CgsGuiWebCam.h:55
	extern const int32_t KI_PICTURE_WIDTH = 160;

	// CgsGuiWebCam.h:56
	extern const int32_t KI_PICTURE_HEIGHT = 120;

private:
	// CgsGuiWebCam.h:106
	extern const int32_t KI_NUM_TEXTURES = 3;

	// CgsGuiWebCam.h:108
	CgsGui::GuiWebCam::EPrepareStage mePrepareStage;

	// CgsGuiWebCam.h:109
	CgsGui::GuiWebCam::EReleaseStage meReleaseStage;

	// CgsGuiWebCam.h:110
	rw::IResourceAllocator * mpAllocator;

	// CgsGuiWebCam.h:111
	bool mbEnabled;

	// CgsGuiWebCam.h:134
	CgsGui::GuiWebCam::TextureInfoType[3] mOutputTextureInfo;

	// CgsGuiWebCam.h:136
	int32_t miCurrentOutputTexture;

public:
	// CgsGuiWebCam.h:75
	void Construct();

	// CgsGuiWebCam.h:76
	bool Prepare(rw::IResourceAllocator *);

	// CgsGuiWebCam.h:77
	bool Release();

	// CgsGuiWebCam.h:78
	void Destruct();

	// CgsGuiWebCam.h:82
	void SetEnabled(bool);

	// CgsGuiWebCam.h:86
	bool IsEnabled() const;

	// CgsGuiWebCam.h:90
	bool IsCameraReady() const;

	// CgsGuiWebCam.h:94
	TextureState * GetFrame();

	// CgsGuiWebCam.h:99
	bool GetFrameRGB(Texture2D *);

	// CgsGuiWebCam.h:103
	TextureState * TakeSnapshot();

private:
	// CgsGuiWebCam.h:155
	void CreateOutputTexture(int32_t, uint32_t, uint32_t);

}

// CgsGuiWebCam.h:106
extern const int32_t KI_NUM_TEXTURES = 3;


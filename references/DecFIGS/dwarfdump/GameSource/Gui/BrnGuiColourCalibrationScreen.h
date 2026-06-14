// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct ColourCalibrationScreen {
		// BrnGuiColourCalibrationScreen.h:88
		enum EColourCalibrationScreenState {
			E_COLOURCALIBRATIONSCREENSTATE_CONSTRUCTED = 0,
			E_COLOURCALIBRATIONSCREENSTATE_PREPARE_TO_SHOW = 1,
			E_COLOURCALIBRATIONSCREENSTATE_ACQUIRINGTEXTURERESOURCE = 2,
			E_COLOURCALIBRATIONSCREENSTATE_PREPARED = 3,
			E_COLOURCALIBRATIONSCREENSTATE_PREPARE_TO_HIDE = 4,
			E_COLOURCALIBRATIONSCREENSTATE_RELEASED = 5,
			E_COLOURCALIBRATIONSCREENSTATE_DESTRUCTED = 6,
		}

	}

}

// BrnGuiColourCalibrationScreen.h:51
struct BrnGui::ColourCalibrationScreen {
private:
	// BrnGuiColourCalibrationScreen.h:101
	BrnGui::ColourCalibrationScreen::EColourCalibrationScreenState meState;

	// BrnGuiColourCalibrationScreen.h:103
	EventReceiverQueue<1024,16> mReceiverQueue;

	// BrnGuiColourCalibrationScreen.h:105
	ResourceHandle mColourCalibrationTextureHandle;

	// BrnGuiColourCalibrationScreen.h:107
	Resource mTextureStateResource;

	// BrnGuiColourCalibrationScreen.h:108
	TextureState * mpTextureState;

public:
	// BrnGuiColourCalibrationScreen.h:56
	void Construct();

	// BrnGuiColourCalibrationScreen.h:60
	bool Prepare();

	// BrnGuiColourCalibrationScreen.h:64
	bool Release();

	// BrnGuiColourCalibrationScreen.h:68
	void Destruct();

	// BrnGuiColourCalibrationScreen.h:76
	void Update(InputBuffer *, const OutputBuffer *, CgsGui::CgsGuiModuleIO::OutputBuffer *, rw::IResourceAllocator *);

	// BrnGuiColourCalibrationScreen.h:82
	void RecvEvent(const CgsModule::Event *, int32_t);

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct ColourCalibrationScreen {
		// BrnGuiColourCalibrationScreen.h:88
		enum EColourCalibrationScreenState {
			E_COLOURCALIBRATIONSCREENSTATE_CONSTRUCTED = 0,
			E_COLOURCALIBRATIONSCREENSTATE_PREPARE_TO_SHOW = 1,
			E_COLOURCALIBRATIONSCREENSTATE_ACQUIRINGTEXTURERESOURCE = 2,
			E_COLOURCALIBRATIONSCREENSTATE_PREPARED = 3,
			E_COLOURCALIBRATIONSCREENSTATE_PREPARE_TO_HIDE = 4,
			E_COLOURCALIBRATIONSCREENSTATE_RELEASED = 5,
			E_COLOURCALIBRATIONSCREENSTATE_DESTRUCTED = 6,
		}

	}

}


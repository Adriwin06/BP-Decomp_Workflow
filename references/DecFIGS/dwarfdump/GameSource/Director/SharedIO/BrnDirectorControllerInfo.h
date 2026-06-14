// BrnDirectorControllerInfo.h:42
struct BrnDirector::DirectorIO::ControllerInfo {
	// BrnDirectorControllerInfo.h:48
	bool mbAnyInput;

	// BrnDirectorControllerInfo.h:49
	bool mbGameTalkRefreshRequest;

	// BrnDirectorControllerInfo.h:50
	bool mbCameraButtonHeldDown;

	// BrnDirectorControllerInfo.h:51
	bool mbCycleCameras;

	// BrnDirectorControllerInfo.h:52
	bool mbLookback;

	// BrnDirectorControllerInfo.h:53
	bool mbRequestSloMo;

	// BrnDirectorControllerInfo.h:54
	bool mbTakeScreenshot;

	// BrnDirectorControllerInfo.h:55
	bool mbTempBoredOfCamera;

	// BrnDirectorControllerInfo.h:56
	bool mbTempBoosting;

	// BrnDirectorControllerInfo.h:57
	bool mbHandbrake;

	// BrnDirectorControllerInfo.h:58
	Vector2 mCarModifier;

	// BrnDirectorControllerInfo.h:59
	Vector2 mCameraModifier;

	// BrnDirectorControllerInfo.h:61
	DebugController mDebugController;

public:
	// BrnDirectorControllerInfo.h:46
	void Clear();

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnDirectorControllerInfo.h:33
	namespace DirectorIO {
	}

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnDirectorControllerInfo.h:33
	namespace DirectorIO {
		struct ControllerInfo;

		struct InputBuffer;

		struct OutputBuffer;

		struct SceneQueryOutputBuffer;

		struct SceneQueryInputBuffer;

	}

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnDirectorControllerInfo.h:33
	namespace DirectorIO {
		struct ControllerInfo;

		struct InputBuffer;

	}

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// BrnDirectorControllerInfo.h:33
	namespace DirectorIO {
		struct ControllerInfo;

		struct InputBuffer;

		struct OutputBuffer;

	}

}


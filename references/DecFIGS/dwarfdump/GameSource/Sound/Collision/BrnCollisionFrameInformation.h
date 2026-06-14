// BrnSoundRootSharedIO.h:25
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// BrnCollisionFrameInformation.h:24
		const uint32_t KU32_FATAL_START_FRAME_COUNT = 5;

	}

}

// BrnPreUpdateSharedIo.h:31
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// BrnCollisionFrameInformation.h:24
		const uint32_t KU32_FATAL_START_FRAME_COUNT = 5;

	}

}

// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnResourceRegistrar.h:37
	namespace Logic {
		// BrnCollisionFrameInformation.h:24
		const uint32_t KU32_FATAL_START_FRAME_COUNT = 5;

	}

}

// BrnSoundLoopModelData.h:40
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// BrnCollisionFrameInformation.h:24
		const uint32_t KU32_FATAL_START_FRAME_COUNT = 5;

	}

}

// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// BrnCollisionFrameInformation.h:26
		enum EFatalityFlag {
			E_FATAL_OFF = 0,
			E_FATAL_ON = 1,
			E_FATAL_START = 2,
		}

		// BrnCollisionFrameInformation.h:24
		const uint32_t KU32_FATAL_START_FRAME_COUNT = 5;

	}

}

// BrnCollisionFrameInformation.h:44
struct BrnSound::Logic::FrameInformation {
	// BrnCollisionFrameInformation.h:73
	Matrix44Affine mPlayerTransform;

	// BrnCollisionFrameInformation.h:74
	DataPoint<BrnSound::Logic::EFatalityFlag> meFatality;

	// BrnCollisionFrameInformation.h:75
	DataPoint<AttribSys::Enums::eImpactTime::eImpactTime> meImpactTime;

	// BrnCollisionFrameInformation.h:76
	BitArray<3u> maPaused;

	// BrnCollisionFrameInformation.h:77
	bool mbInReplay;

	// BrnCollisionFrameInformation.h:78
	uint32_t mu32FatalStartCount;

	// BrnCollisionFrameInformation.h:79
	DataPoint<bool> mIsHardStop;

public:
	// BrnCollisionFrameInformation.h:46
	void FrameInformation();

	// BrnCollisionFrameInformation.h:55
	void UpdateFatalityFlag(bool);

	// BrnCollisionFrameInformation.h:58
	bool IsCrashing() const;

	// BrnCollisionFrameInformation.h:61
	bool IsImpactTime() const;

	// BrnCollisionFrameInformation.h:64
	bool IsSuperSloMo() const;

	// BrnCollisionFrameInformation.h:67
	bool IsPaused() const;

	// BrnCollisionFrameInformation.h:70
	void StopFatality();

}

// BrnSoundRootSharedIO.h:25
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// BrnCollisionFrameInformation.h:26
		enum EFatalityFlag {
			E_FATAL_OFF = 0,
			E_FATAL_ON = 1,
			E_FATAL_START = 2,
		}

		// BrnCollisionFrameInformation.h:24
		const uint32_t KU32_FATAL_START_FRAME_COUNT = 5;

	}

}


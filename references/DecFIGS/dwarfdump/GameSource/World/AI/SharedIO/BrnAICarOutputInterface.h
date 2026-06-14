// BrnRoute.h:26
namespace BrnAI {
	// BrnAICarOutputInterface.h:30
	namespace AIModuleIO {
		struct RaceCarAIInterface;

		struct ResetOnTrackRequest;

		struct AIModuleRequestInterface;

		struct InputBuffer;

	}

}

// BrnRoute.h:26
namespace BrnAI {
	// BrnAICarOutputInterface.h:30
	namespace AIModuleIO {
		struct AICarOutputInterface;

		struct RaceCarAIInterface;

		struct AIRaceCarInterface;

		struct AttachAIControlEvent;

		struct ActivateRaceCarEvent;

		struct DeactivateRaceCarEvent;

		struct DetachAIControlEvent;

		struct SetUpOutOfRangeRaceCarEvent;

		struct PlayerControlChangedEvent;

		struct AddCarToCurrentModeEvent;

		struct RemoveCarFromCurrentModeEvent;

		struct ResetOnTrackRequest;

		struct AIModuleRequestInterface;

		struct PlaceOnTrackRequest;

		struct AIModuleResultInterface;

		struct InputBuffer;

	}

}

// BrnAICarOutputInterface.h:47
struct BrnAI::AIModuleIO::AICarOutputInterface {
private:
	// BrnAICarOutputInterface.h:92
	Route mPlayerRoute;

	// BrnAICarOutputInterface.h:93
	float32_t[35] mafDistanceToCheckpoint;

	// BrnAICarOutputInterface.h:94
	uint16_t[35] mauAISections;

	// BrnAICarOutputInterface.h:95
	int32_t miPlayerRouteNodeIndex;

	// BrnAICarOutputInterface.h:96
	bool mbPlayerIsInShortcut;

public:
	// BrnAICarOutputInterface.h:53
	void Construct();

	// BrnAICarOutputInterface.h:57
	const float32_t GetAICarDistanceToCheckpoint(int32_t) const;

	// BrnAICarOutputInterface.h:62
	void SetAICarDistanceToCheckpoint(int32_t, float32_t);

	// BrnAICarOutputInterface.h:66
	uint16_t GetAISectionIndex(int32_t) const;

	// BrnAICarOutputInterface.h:71
	void SetAISectionIndex(int32_t, uint16_t);

	// BrnAICarOutputInterface.h:74
	const Route * GetPlayerRoute() const;

	// BrnAICarOutputInterface.h:77
	const int32_t GetPlayerRouteNodeIndex() const;

	// BrnAICarOutputInterface.h:82
	void SetPlayerRoute(const Route *, int32_t);

	// BrnAICarOutputInterface.h:86
	void SetPlayerInShortcut(bool);

	// BrnAICarOutputInterface.h:89
	bool IsPlayerInShortcut() const;

}

// BrnRoute.h:26
namespace BrnAI {
	// BrnAICarOutputInterface.h:30
	namespace AIModuleIO {
		struct AICarOutputInterface;

		struct RaceCarAIInterface;

		struct ResetOnTrackRequest;

		struct AIModuleRequestInterface;

		struct InputBuffer;

	}

}

// BrnRoute.h:26
namespace BrnAI {
	// BrnAICarOutputInterface.h:30
	namespace AIModuleIO {
	}

}

// BrnRoute.h:26
namespace BrnAI {
	// BrnAICarOutputInterface.h:30
	namespace AIModuleIO {
		struct AICarOutputInterface;

	}

}

// BrnRoute.h:26
namespace BrnAI {
	// BrnAICarOutputInterface.h:30
	namespace AIModuleIO {
		struct AICarOutputInterface;

		struct RaceCarAIInterface;

	}

}

// BrnRoute.h:26
namespace BrnAI {
	// BrnAICarOutputInterface.h:30
	namespace AIModuleIO {
		struct RaceCarAIInterface;

	}

}

// AISectionsData.h:47
namespace BrnAI {
	// BrnAICarOutputInterface.h:30
	namespace AIModuleIO {
	}

}

// BrnRoute.h:26
namespace BrnAI {
	// BrnAICarOutputInterface.h:30
	namespace AIModuleIO {
		struct AICarOutputInterface;

		struct RaceCarAIInterface;

		struct AIRaceCarInterface;

		struct AttachAIControlEvent;

		struct ActivateRaceCarEvent;

		struct DeactivateRaceCarEvent;

		struct DetachAIControlEvent;

		struct SetUpOutOfRangeRaceCarEvent;

		struct PlayerControlChangedEvent;

		struct AddCarToCurrentModeEvent;

		struct RemoveCarFromCurrentModeEvent;

		struct ResetOnTrackRequest;

		struct AIModuleRequestInterface;

		struct PlaceOnTrackRequest;

		struct AIModuleResultInterface;

		struct InputBuffer;

		struct OutputBuffer;

		struct InputBuffer_PostPhysics;

		struct OutputBuffer_PostScene;

	}

}

// BrnRoute.h:26
namespace BrnAI {
	// BrnAICarOutputInterface.h:30
	namespace AIModuleIO {
		struct AICarOutputInterface;

		struct RaceCarAIInterface;

		struct AIRaceCarInterface;

		struct ResetOnTrackRequest;

		struct AIModuleRequestInterface;

		struct PlaceOnTrackRequest;

		struct AIModuleResultInterface;

		struct InputBuffer;

		struct OutputBuffer;

		struct InputBuffer_PostPhysics;

		struct OutputBuffer_PostScene;

	}

}

// BrnRoute.h:26
namespace BrnAI {
	// BrnAICarOutputInterface.h:30
	namespace AIModuleIO {
		struct AICarOutputInterface;

		struct RaceCarAIInterface;

		struct ResetOnTrackRequest;

		struct AIModuleRequestInterface;

		struct PlaceOnTrackRequest;

		struct AIModuleResultInterface;

		struct InputBuffer;

	}

}


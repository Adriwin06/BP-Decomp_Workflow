// BrnRoute.h:26
namespace BrnAI {
	// BrnAICarOutputInterface.h:30
	namespace AIModuleIO {
		// BrnAIModuleResultInterface.h:31
		const int32_t KI_RESET_POS_RESULT_QUEUE_SIZE = 128;

	}

}

// BrnRoute.h:26
namespace BrnAI {
	// BrnAICarOutputInterface.h:30
	namespace AIModuleIO {
		// Declaration
		struct ResetOnTrackResult {
			// BrnAIModuleResultInterface.h:41
			enum State {
				E_STATE_SUCCESS = 0,
				E_STATE_FAILURE = 1,
			}

		}

		// BrnAIModuleResultInterface.h:31
		const int32_t KI_RESET_POS_RESULT_QUEUE_SIZE = 128;

	}

}

// BrnAIModuleResultInterface.h:38
struct BrnAI::AIModuleIO::ResetOnTrackResult : public Event {
private:
	// BrnAIModuleResultInterface.h:71
	Vector3 mResetPosition;

	// BrnAIModuleResultInterface.h:72
	Vector3 mResetDirection;

	// BrnAIModuleResultInterface.h:73
	BrnAI::AIModuleIO::ResetOnTrackResult::State meState;

	// BrnAIModuleResultInterface.h:74
	EGlobalRaceCarIndex meGlobalRaceCarIndex;

	// BrnAIModuleResultInterface.h:75
	float32_t mfResetSpeed;

public:
	// BrnAIModuleResultInterface.h:53
	void Construct(BrnAI::AIModuleIO::ResetOnTrackResult::State, EGlobalRaceCarIndex, float32_t, Vector3, Vector3);

	// BrnAIModuleResultInterface.h:56
	BrnAI::AIModuleIO::ResetOnTrackResult::State GetState() const;

	// BrnAIModuleResultInterface.h:59
	EGlobalRaceCarIndex GetGlobalRaceCarIndex() const;

	// BrnAIModuleResultInterface.h:62
	float32_t GetResetSpeed() const;

	// BrnAIModuleResultInterface.h:65
	Vector3 GetResetPosition() const;

	// BrnAIModuleResultInterface.h:68
	Vector3 GetResetDirection() const;

}

// BrnAIModuleResultInterface.h:81
struct BrnAI::AIModuleIO::PlaceOnTrackRequest : public Event {
private:
	// BrnAIModuleResultInterface.h:104
	Vector3 mResetPosition;

	// BrnAIModuleResultInterface.h:105
	Vector3 mResetDirection;

	// BrnAIModuleResultInterface.h:106
	EGlobalRaceCarIndex meGlobalRaceCarIndex;

	// BrnAIModuleResultInterface.h:107
	float32_t mfResetSpeed;

public:
	// BrnAIModuleResultInterface.h:89
	void Construct(EGlobalRaceCarIndex, float32_t, Vector3, Vector3);

	// BrnAIModuleResultInterface.h:92
	EGlobalRaceCarIndex GetGlobalRaceCarIndex() const;

	// BrnAIModuleResultInterface.h:95
	float32_t GetResetSpeed() const;

	// BrnAIModuleResultInterface.h:98
	Vector3 GetResetPosition() const;

	// BrnAIModuleResultInterface.h:101
	Vector3 GetResetDirection() const;

}

// BrnAIModuleResultInterface.h:121
struct BrnAI::AIModuleIO::AIModuleResultInterface {
	// BrnAIModuleResultInterface.h:78
	typedef EventQueue<BrnAI::AIModuleIO::ResetOnTrackResult,128> ResetOnTrackResultQueue;

private:
	// BrnAIModuleResultInterface.h:148
	AIModuleResultInterface::ResetOnTrackResultQueue mResetPosResultEventQueue;

	// Unknown accessibility
	// BrnAIModuleResultInterface.h:110
	typedef EventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest,128> PlaceOnTrackRequestQueue;

	// BrnAIModuleResultInterface.h:149
	AIModuleResultInterface::PlaceOnTrackRequestQueue mPlaceOnTrackRequestQueue;

public:
	// BrnAIModuleResultInterface.h:124
	void Construct();

	// BrnAIModuleResultInterface.h:132
	void AddResetOnTrackResult(BrnAI::AIModuleIO::ResetOnTrackResult::State, EGlobalRaceCarIndex, float32_t, Vector3, Vector3);

	// BrnAIModuleResultInterface.h:135
	const AIModuleResultInterface::ResetOnTrackResultQueue * GetResetOnTrackResultQueue() const;

	// BrnAIModuleResultInterface.h:142
	void AddPlaceOnTrackRequest(EGlobalRaceCarIndex, float32_t, Vector3, Vector3);

	// BrnAIModuleResultInterface.h:145
	const AIModuleResultInterface::PlaceOnTrackRequestQueue * GetPlaceOnTrackRequestQueue() const;

}

// AISectionsData.h:47
namespace BrnAI {
	// BrnAICarOutputInterface.h:30
	namespace AIModuleIO {
		// BrnAIModuleResultInterface.h:31
		const int32_t KI_RESET_POS_RESULT_QUEUE_SIZE = 128;

	}

}


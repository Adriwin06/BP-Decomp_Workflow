// BrnRoute.h:26
namespace BrnAI {
	// BrnAICarOutputInterface.h:30
	namespace AIModuleIO {
		// BrnAIModuleRequestInterface.h:31
		const int32_t KI_AI_DETERMINE_RESET_POS_QUEUE_SIZE = 128;

	}

}

// BrnAIModuleRequestInterface.h:49
struct BrnAI::AIModuleIO::ResetOnTrackRequest : public Event {
private:
	// BrnAIModuleRequestInterface.h:72
	EGlobalRaceCarIndex meGlobalRaceCarIndex;

	// BrnAIModuleRequestInterface.h:73
	float32_t mfResetSpeed;

	// BrnAIModuleRequestInterface.h:74
	float32_t mfResetDistance;

	// BrnAIModuleRequestInterface.h:75
	BrnAI::EResetType meResetType;

public:
	// BrnAIModuleRequestInterface.h:57
	void Construct(EGlobalRaceCarIndex, float32_t, float32_t, BrnAI::EResetType);

	// BrnAIModuleRequestInterface.h:60
	float32_t GetResetSpeed() const;

	// BrnAIModuleRequestInterface.h:63
	float32_t GetResetDistance() const;

	// BrnAIModuleRequestInterface.h:66
	EGlobalRaceCarIndex GetGlobalRaceCarIndex() const;

	// BrnAIModuleRequestInterface.h:69
	BrnAI::EResetType GetResetType() const;

}

// BrnAIModuleRequestInterface.h:89
struct BrnAI::AIModuleIO::AIModuleRequestInterface {
	// BrnAIModuleRequestInterface.h:78
	typedef EventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest,128> ResetOnTrackRequestQueue;

private:
	// BrnAIModuleRequestInterface.h:109
	AIModuleRequestInterface::ResetOnTrackRequestQueue mResetOnTrackRequestQueue;

public:
	// BrnAIModuleRequestInterface.h:93
	void Append(const AIModuleRequestInterface *);

	// BrnAIModuleRequestInterface.h:96
	void Clear();

	// BrnAIModuleRequestInterface.h:103
	void RequestResetOnTrack(EGlobalRaceCarIndex, float32_t, float32_t, BrnAI::EResetType);

	// BrnAIModuleRequestInterface.h:106
	const AIModuleRequestInterface::ResetOnTrackRequestQueue * GetResetOnTrackRequestQueue() const;

}

// AISectionsData.h:47
namespace BrnAI {
	// BrnAICarOutputInterface.h:30
	namespace AIModuleIO {
		// BrnAIModuleRequestInterface.h:31
		const int32_t KI_AI_DETERMINE_RESET_POS_QUEUE_SIZE = 128;

	}

}


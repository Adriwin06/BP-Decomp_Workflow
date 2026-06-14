// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct AnimChannelData {
		// CgsAptAnimData.h:48
		enum InterpolateType {
			E_INTERPOLATE_LINEAR = 0,
			E_INTERPOLATE_MAX = 1,
		}

		// CgsAptAnimData.h:55
		enum AnimationType {
			E_ANIMATION_SCREEN_TO_SCREEN_SPACE = 0,
			E_ANIMATION_SCREEN_TO_OBJECT_SPACE = 1,
			E_ANIMATION_OBJECT_TO_SCREEN_SPACE = 2,
			E_ANIMATION_OBJECT_TO_OBJECT_SPACE = 3,
			E_ANIMATION_MAX = 4,
		}

	}

	// Declaration
	struct AnimData {
		// CgsAptAnimData.h:104
		enum AnimatorChannel {
			ANIMATOR_CHANNEL_X = 0,
			ANIMATOR_CHANNEL_Y = 1,
			ANIMATOR_CHANNEL_WIDTH = 2,
			ANIMATOR_CHANNEL_HEIGHT = 3,
			ANIMATOR_CHANNEL_ROTATION = 4,
			ANIMATOR_CHANNEL_ALPHA = 5,
			ANIMATOR_CHANNEL_MAX = 6,
		}

	}

}

// CgsAptAnimData.h:45
struct CgsGui::AnimChannelData {
	// CgsAptAnimData.h:28
	typedef float32_t Time;

	// CgsAptAnimData.h:82
	AnimChannelData::Time mStartTime;

	// CgsAptAnimData.h:83
	AnimChannelData::Time mEndTime;

	// CgsAptAnimData.h:85
	float32_t mfStartValue;

	// CgsAptAnimData.h:86
	float32_t mfEndValue;

	// CgsAptAnimData.h:88
	CgsGui::AnimChannelData::InterpolateType meInterpolator;

	// CgsAptAnimData.h:89
	CgsGui::AnimChannelData::AnimationType meAnimType;

public:
	// CgsAptAnimData.h:67
	void Construct();

	// CgsAptAnimData.h:77
	void SetData(AnimChannelData::Time, AnimChannelData::Time, float32_t, float32_t, CgsGui::AnimChannelData::InterpolateType, CgsGui::AnimChannelData::AnimationType);

}

// CgsAptAnimData.h:101
struct CgsGui::AnimData {
private:
	// CgsAptAnimData.h:137
	Array<CgsGui::AnimChannelData,6u> mChannelData;

	// CgsAptAnimData.h:138
	Array<CgsGui::AnimData::AnimatorChannel,6u> meChannels;

public:
	// CgsAptAnimData.h:118
	void Construct();

	// CgsAptAnimData.h:124
	void AddAnimationChannel(CgsGui::AnimData::AnimatorChannel, AnimChannelData);

	// CgsAptAnimData.h:129
	const AnimChannelData * GetChannelData(CgsGui::AnimData::AnimatorChannel) const;

	// CgsAptAnimData.h:133
	void Clear();

}

// CgsGuiShared.h:40
namespace CgsGui {
	// Declaration
	struct AnimChannelData {
		// CgsAptAnimData.h:48
		enum InterpolateType {
			E_INTERPOLATE_LINEAR = 0,
			E_INTERPOLATE_MAX = 1,
		}

		// CgsAptAnimData.h:55
		enum AnimationType {
			E_ANIMATION_SCREEN_TO_SCREEN_SPACE = 0,
			E_ANIMATION_SCREEN_TO_OBJECT_SPACE = 1,
			E_ANIMATION_OBJECT_TO_SCREEN_SPACE = 2,
			E_ANIMATION_OBJECT_TO_OBJECT_SPACE = 3,
			E_ANIMATION_MAX = 4,
		}

	}

	// Declaration
	struct AnimData {
		// CgsAptAnimData.h:104
		enum AnimatorChannel {
			ANIMATOR_CHANNEL_X = 0,
			ANIMATOR_CHANNEL_Y = 1,
			ANIMATOR_CHANNEL_WIDTH = 2,
			ANIMATOR_CHANNEL_HEIGHT = 3,
			ANIMATOR_CHANNEL_ROTATION = 4,
			ANIMATOR_CHANNEL_ALPHA = 5,
			ANIMATOR_CHANNEL_MAX = 6,
		}

	}

}


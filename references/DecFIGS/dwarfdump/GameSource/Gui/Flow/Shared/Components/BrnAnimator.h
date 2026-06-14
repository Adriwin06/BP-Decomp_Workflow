// BrnAnimator.h:105
extern const int32_t ANIMATOR_LIBRARY_SIZE = 2;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct Animator {
		// BrnAnimator.h:46
		enum BrnGuiAnimation {
			ANIM_IN = 0,
			ANIM_OUT = 1,
			ANIM_MAX = 2,
		}

		// BrnAnimator.h:54
		enum BrnGuiAnimationChannel {
			ANIM_CHANNEL_IN = 0,
			ANIM_CHANNEL_OUT = 1,
			ANIM_CHANNEL_MAX = 2,
		}

	}

}

// BrnAnimator.h:43
struct BrnGui::Animator : public CgsGui::Animator {
private:
	// BrnAnimator.h:105
	extern const int32_t ANIMATOR_LIBRARY_SIZE = 2;

	// BrnAnimator.h:107
	Array<CgsGui::AnimData,2u> mAnimationLibrary;

	// BrnAnimator.h:108
	Array<CgsGui::AnimChannelData,2u> mChannelAnimationLibrary;

public:
	BrnGui::Animator & operator=(const BrnGui::Animator &);

	void Animator(const BrnGui::Animator &);

	void Animator();

	// BrnAnimator.cpp:38
	void Construct(CgsGui::GuiComponent *);

	// BrnAnimator.cpp:91
	void PlayAnimationChannel(CgsGui::AnimData::AnimatorChannel, BrnGui::Animator::BrnGuiAnimationChannel, AnimChannelData::Time);

	// BrnAnimator.cpp:109
	void PlayAnimation(BrnGui::Animator::BrnGuiAnimation, AnimChannelData::Time);

	// BrnAnimator.cpp:130
	void PlayAnimationChannel(CgsGui::AnimData::AnimatorChannel, float32_t, float32_t, AnimChannelData::Time, AnimChannelData::Time, CgsGui::AnimChannelData::InterpolateType, CgsGui::AnimChannelData::AnimationType);

protected:
	// BrnAnimator.cpp:165
	uint32_t AddAnimationToLibrary(const AnimData *);

	// BrnAnimator.cpp:147
	uint32_t AddAnimationChannelToLibrary(const AnimChannelData *);

}

// BrnAnimator.h:43
void BrnGui::Animator::Animator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAnimator.h:43
void BrnGui::Animator::operator=(const const BrnGui::Animator &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnAnimator.h:43
struct BrnGui::Animator : public CgsGui::Animator {
private:
	// BrnAnimator.h:105
	extern const int32_t ANIMATOR_LIBRARY_SIZE = 2;

	// BrnAnimator.h:107
	Array<CgsGui::AnimData,2u> mAnimationLibrary;

	// BrnAnimator.h:108
	Array<CgsGui::AnimChannelData,2u> mChannelAnimationLibrary;

public:
	void Animator(const BrnGui::Animator &);

	void Animator();

	// BrnAnimator.h:65
	void Construct(CgsGui::GuiComponent *);

	// BrnAnimator.h:72
	void PlayAnimationChannel(CgsGui::AnimData::AnimatorChannel, BrnGui::Animator::BrnGuiAnimationChannel, AnimChannelData::Time);

	// BrnAnimator.h:78
	void PlayAnimation(BrnGui::Animator::BrnGuiAnimation, AnimChannelData::Time);

	// BrnAnimator.h:89
	void PlayAnimationChannel(CgsGui::AnimData::AnimatorChannel, float32_t, float32_t, AnimChannelData::Time, AnimChannelData::Time, CgsGui::AnimChannelData::InterpolateType, CgsGui::AnimChannelData::AnimationType);

protected:
	// BrnAnimator.h:96
	uint32_t AddAnimationToLibrary(const AnimData *);

	// BrnAnimator.h:101
	uint32_t AddAnimationChannelToLibrary(const AnimChannelData *);

}


// CgsAptAnimator.h:53
extern const int32_t KI_MAX_CHANNEL_NAME_LEN = 10;

// CgsAptAnimator.h:127
extern const char[6][10] maDefaultChannelTypeNames;

// CgsGuiEventTypes.h:25
namespace CgsGui {
	// Declaration
	struct Animator {
	public:
		// CgsAptAnimator.h:159
		CgsGui::ObjectController * GetObjectController();

		Animator();

		CgsGui::Animator & operator=(const CgsGui::Animator &);

		// Unknown accessibility
		// CgsAptAnimator.h:53
		extern const int32_t KI_MAX_CHANNEL_NAME_LEN = 10;

	private:
		// CgsAptAnimator.h:127
		extern const char[6][10] maDefaultChannelTypeNames;

	}

}

// CgsAptAnimator.h:50
void CgsGui::Animator::Animator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAptAnimator.h:50
void CgsGui::Animator::operator=(const const CgsGui::Animator &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsGuiShared.h:40
namespace CgsGui {
	// Declaration
	struct Animator {
	public:
		Animator();

		// Unknown accessibility
		// CgsAptAnimator.h:53
		extern const int32_t KI_MAX_CHANNEL_NAME_LEN = 10;

	private:
		// CgsAptAnimator.h:127
		extern const char[6][10] maDefaultChannelTypeNames;

	}

}

// CgsAptAnimator.h:50
struct CgsGui::Animator {
	int (*)(...) * _vptr.Animator;

	// CgsAptAnimator.h:53
	extern const int32_t KI_MAX_CHANNEL_NAME_LEN = 10;

private:
	// CgsAptAnimator.h:125
	CgsGui::GuiComponent * mpTarget;

	// CgsAptAnimator.cpp:30
	extern const char[6][10] maDefaultChannelTypeNames;

	// CgsAptAnimator.h:128
	char *[10] mpaChannelTypeNames;

	// CgsAptAnimator.h:129
	int32_t miNumChannels;

	// CgsAptAnimator.h:131
	ObjectController * mpObjectController;

	// CgsAptAnimator.h:133
	Array<CgsGui::AnimChannel,6u> maAnimChannels;

public:
	// CgsAptAnimator.cpp:57
	void Construct(CgsGui::GuiComponent *, char *[10], int32_t);

	// CgsAptAnimator.cpp:96
	void Destruct();

	// CgsAptAnimator.h:146
	const CgsGui::GuiComponent * GetGuiComponent() const;

	// CgsAptAnimator.h:159
	ObjectController * GetObjectController();

	// CgsAptAnimator.h:172
	const ObjectController * GetObjectController() const;

	// CgsAptAnimator.cpp:183
	virtual void SetAnimationChannel(CgsGui::AnimData::AnimatorChannel, const AnimChannelData *, AnimChannelData::Time);

	// CgsAptAnimator.cpp:242
	virtual void SetAnimation(AnimData *, AnimChannelData::Time);

	// CgsAptAnimator.cpp:156
	void Update(AnimChannelData::Time);

	// CgsAptAnimator.cpp:111
	void Stop();

	// CgsAptAnimator.cpp:132
	bool IsAnimating() const;

protected:
	// CgsAptAnimator.h:186
	AnimChannel * GetAnimChannel(CgsGui::AnimData::AnimatorChannel);

	// CgsAptAnimator.cpp:272
	virtual void SetAptValues();

	// CgsAptAnimator.cpp:301
	virtual void SetAptValue(const char *, float32_t);

}


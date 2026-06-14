// BrnAchievementPopupComponent.h:114
extern char[] KAC_ACHIEVEMENTICON_NAME;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct AchievementPopupComponent {
		// BrnAchievementPopupComponent.h:98
		enum ComponentState {
			E_CS_INVISIBLE = 0,
			E_CS_VISIBLE = 1,
			E_CS_INTERVAL = 2,
		}

	}

}

// BrnAchievementPopupComponent.h:58
struct BrnGui::AchievementPopupComponent : public BrnFlaptComponent {
private:
	// BrnAchievementPopupComponent.h:94
	extern const char * KAPC_ANIM_IN_FRAME;

	// BrnAchievementPopupComponent.h:95
	extern const char * KAPC_ANIM_OUT_FRAME;

	// BrnAchievementPopupComponent.h:96
	extern const char * KAPC_BLANK_FRAME;

	// Unknown accessibility
	// BrnAchievementPopupComponent.h:47
	typedef BitArray<60u> AchievementsBitArray;

	// BrnAchievementPopupComponent.h:105
	AchievementPopupComponent::AchievementsBitArray mAchievementsToShow;

	// BrnAchievementPopupComponent.h:106
	int32_t miCurrentAchievementShowing;

	// BrnAchievementPopupComponent.h:108
	BrnGui::AchievementPopupComponent::ComponentState meComponentState;

	// BrnAchievementPopupComponent.h:109
	float32_t mfCurrentGameTime_Seconds;

	// BrnAchievementPopupComponent.h:110
	float32_t mfAnimOutTime_Seconds;

	// BrnAchievementPopupComponent.h:111
	float32_t mfIntervalTime_Seconds;

	// BrnAchievementPopupComponent.h:113
	BrnGui::FlaptIconComponent mAchievementIcon;

	// BrnAchievementPopupComponent.h:114
	extern char[] KAC_ACHIEVEMENTICON_NAME;

	// BrnAchievementPopupComponent.h:116
	TextFieldRef mAchievementAwardedRef;

	// BrnAchievementPopupComponent.h:117
	TextFieldRef mAchievementNameRef;

public:
	// BrnAchievementPopupComponent.h:66
	void Construct(const void *, StateInterface *, const void *);

	// BrnAchievementPopupComponent.h:72
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnAchievementPopupComponent.h:75
	void Initialize();

	// BrnAchievementPopupComponent.h:78
	void Update();

	// BrnAchievementPopupComponent.h:82
	void SetTime(float32_t);

	// BrnAchievementPopupComponent.h:87
	void DisplayNewAchievementNotification(const AchievementPopupComponent::AchievementsBitArray *);

	// BrnAchievementPopupComponent.h:90
	void BecomeInvisible();

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct AchievementPopupComponent {
		// BrnAchievementPopupComponent.h:98
		enum ComponentState {
			E_CS_INVISIBLE = 0,
			E_CS_VISIBLE = 1,
			E_CS_INTERVAL = 2,
		}

	}

}


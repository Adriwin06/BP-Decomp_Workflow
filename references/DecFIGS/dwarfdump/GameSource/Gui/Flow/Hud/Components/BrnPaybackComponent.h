// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct PaybackComponent {
		// BrnPaybackComponent.h:88
		enum EAwardTypes {
			E_AT_START = 0,
			E_AT_SLASHDOWN = 0,
			E_AT_LOCKDOWN = 1,
			E_AT_TAKEOVERDOWN = 2,
			E_AT_EVIL_AXIS = 3,
			E_AT_COUNT = 4,
		}

	}

}

// BrnPaybackComponent.h:129
extern BrnGui::PaybackComponent::EAwardTypes[] KAE_PAYBACKS_TO_AWARD_TYPE;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct PaybackComponent {
		// BrnPaybackComponent.h:88
		enum EAwardTypes {
			E_AT_START = 0,
			E_AT_SLASHDOWN = 0,
			E_AT_LOCKDOWN = 1,
			E_AT_TAKEOVERDOWN = 2,
			E_AT_EVIL_AXIS = 3,
			E_AT_COUNT = 4,
		}

		// BrnPaybackComponent.h:103
		enum EPaybackComponentAnimations {
			E_PCA_INVISIBLE = 0,
			E_PCA_ROTATE_IN = 1,
			E_PCA_ROTATE_OUT = 2,
			E_PCA_BOUNCE = 3,
			E_PCA_WITHBIGTEXT = 4,
			E_PCA_GO_TO_SIDE = 5,
			E_PCA_ATSIDE = 6,
		}

		// BrnPaybackComponent.h:115
		enum EPaybackComponentStates {
			E_PCS_INVISIBLE = 0,
			E_PCS_RANDOMICONS = 1,
			E_PCS_PROPERICON = 2,
			E_PCS_ANIMATINGLEFT = 3,
			E_PCS_AVAILABLE = 4,
			E_PCS_COUNT = 5,
		}

	}

}

// BrnPaybackComponent.h:47
struct BrnGui::PaybackComponent : public CgsGui::GuiComponent {
private:
	// BrnPaybackComponent.h:126
	BrnGui::GuiCache * mpGuiCache;

	// BrnPaybackComponent.cpp:29
	extern const char *[4] KAPC_AWARD_STRINGS;

	// BrnPaybackComponent.cpp:41
	extern const BrnGui::PaybackComponent::EAwardTypes[4] KAE_PAYBACKS_TO_AWARD_TYPE;

	// BrnPaybackComponent.h:130
	Random mRandom;

	// BrnPaybackComponent.h:132
	bool mbFirstHalfOfRotationAnim;

	// BrnPaybackComponent.h:133
	bool mbDelayingIcon;

	// BrnPaybackComponent.h:134
	float32_t mfCurrentSysTime_Seconds;

	// BrnPaybackComponent.h:135
	float32_t mfTimeStampOfMessageEnd;

	// BrnPaybackComponent.h:137
	uint32_t muNumRandomLeftToShow;

	// BrnPaybackComponent.h:138
	BrnGui::PaybackComponent::EPaybackComponentStates mePaybackComponentState;

	// BrnPaybackComponent.h:139
	BrnGui::PaybackComponent::EPaybackComponentAnimations mePaybackAnimationState;

	// BrnPaybackComponent.h:141
	BrnGui::PaybackComponent::EAwardTypes mePreviouslyShownPayback;

	// BrnPaybackComponent.h:142
	BrnGui::PaybackComponent::EAwardTypes meActualPayback;

	// BrnPaybackComponent.h:144
	EActiveRaceCarIndex meVictimRaceCarIndex;

	// BrnPaybackComponent.h:146
	BrnGui::HelpItem mHelpItem;

	// BrnPaybackComponent.cpp:54
	extern const char * msacHelpItemInstanceName;

public:
	// BrnPaybackComponent.cpp:70
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnPaybackComponent.cpp:101
	void Initialize(BrnGui::GuiCache *);

	// BrnPaybackComponent.cpp:207
	void Update(float32_t);

	// BrnPaybackComponent.cpp:313
	void BeginAwardAnimation(BrnNetwork::EPaybackType, EActiveRaceCarIndex);

	// BrnPaybackComponent.cpp:437
	void ShowAvailableInstantly(BrnNetwork::EPaybackType, EActiveRaceCarIndex);

	// BrnPaybackComponent.cpp:455
	void BecomeInvisible();

	// BrnPaybackComponent.cpp:221
	void RespondToTransitionComplete();

private:
	// BrnPaybackComponent.cpp:117
	void EnterState(BrnGui::PaybackComponent::EPaybackComponentStates);

	// BrnPaybackComponent.cpp:176
	void UpdateState();

	// BrnPaybackComponent.cpp:491
	void SendAwardTriggerableEvent();

	// BrnPaybackComponent.cpp:332
	void SetDisplayedIcon(BrnGui::PaybackComponent::EAwardTypes);

	// BrnPaybackComponent.cpp:349
	void TriggerAptAnimation(BrnGui::PaybackComponent::EPaybackComponentAnimations);

	// BrnPaybackComponent.cpp:467
	int32_t ChooseRandomAward();

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct PaybackComponent {
		// BrnPaybackComponent.h:88
		enum EAwardTypes {
			E_AT_START = 0,
			E_AT_SLASHDOWN = 0,
			E_AT_LOCKDOWN = 1,
			E_AT_TAKEOVERDOWN = 2,
			E_AT_EVIL_AXIS = 3,
			E_AT_COUNT = 4,
		}

	private:
		// BrnPaybackComponent.h:129
		extern BrnGui::PaybackComponent::EAwardTypes[] KAE_PAYBACKS_TO_AWARD_TYPE;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct PaybackComponent {
		// BrnPaybackComponent.h:88
		enum EAwardTypes {
			E_AT_START = 0,
			E_AT_SLASHDOWN = 0,
			E_AT_LOCKDOWN = 1,
			E_AT_TAKEOVERDOWN = 2,
			E_AT_EVIL_AXIS = 3,
			E_AT_COUNT = 4,
		}

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct PaybackComponent {
		// BrnPaybackComponent.h:88
		enum EAwardTypes {
			E_AT_START = 0,
			E_AT_SLASHDOWN = 0,
			E_AT_LOCKDOWN = 1,
			E_AT_TAKEOVERDOWN = 2,
			E_AT_EVIL_AXIS = 3,
			E_AT_COUNT = 4,
		}

	public:
		PaybackComponent();

	private:
		// BrnPaybackComponent.h:129
		extern BrnGui::PaybackComponent::EAwardTypes[] KAE_PAYBACKS_TO_AWARD_TYPE;

	}

}

// BrnPaybackComponent.h:47
void BrnGui::PaybackComponent::PaybackComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


// BrnOdometerComponent.h:115
extern char[] KAC_MILEAGE_ANIMATOR_NAME;

// BrnOdometerComponent.h:118
extern char[] KAC_MILEAGE_TEXTFIELD_COMPONENT_NAME;

// BrnOdometerComponent.h:119
extern char[] KAC_MILEAGE_TEXTFIELD_NAME;

// BrnOdometerComponent.h:122
extern char[] KAC_EVENTSFOUND_ANIMATOR_NAME;

// BrnOdometerComponent.h:125
extern char[] KAC_EVENTSFOUND_TEXTFIELD_COMPONENT_NAME;

// BrnOdometerComponent.h:126
extern char[] KAC_EVENTSFOUND_TEXTFIELD_NAME;

// BrnOdometerComponent.h:129
extern char[] KAC_DRIVETHRUSFOUND_ANIMATOR_NAME;

// BrnOdometerComponent.h:132
extern char[] KAC_DRIVETHRUSFOUND_TEXTFIELD_COMPONENT_NAME;

// BrnOdometerComponent.h:133
extern char[] KAC_DRIVETHRUSFOUND_TEXTFIELD_NAME;

// BrnOdometerComponent.h:141
extern const float32_t KF_SHOW_NEWEVENTFOUND_TIME;

// BrnOdometerComponent.h:142
extern const float32_t KF_SHOW_NEWDRIVETHRUFOUND_TIME;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OdometerComponent {
		// BrnOdometerComponent.h:104
		enum EOdometerState {
			E_ODOMETERSTATE_NONE = 0,
			E_ODOMETERSTATE_MILEAGE = 1,
			E_ODOMETERSTATE_EVENTSFOUND = 2,
			E_ODOMETERSTATE_DRIVETHRUFOUND = 3,
			E_ODOMETERSTATE_NUM = 4,
		}

	}

}

// BrnOdometerComponent.h:63
struct BrnGui::OdometerComponent : public BrnFlaptComponent {
private:
	// BrnOdometerComponent.h:114
	BrnGui::FlaptAnimatorComponent mMileageAnimator;

	// BrnOdometerComponent.h:115
	extern char[] KAC_MILEAGE_ANIMATOR_NAME;

	// BrnOdometerComponent.h:117
	TextFieldRef mMileageTextField;

	// BrnOdometerComponent.h:118
	extern char[] KAC_MILEAGE_TEXTFIELD_COMPONENT_NAME;

	// BrnOdometerComponent.h:119
	extern char[] KAC_MILEAGE_TEXTFIELD_NAME;

	// BrnOdometerComponent.h:121
	BrnGui::FlaptAnimatorComponent mEventsFoundAnimator;

	// BrnOdometerComponent.h:122
	extern char[] KAC_EVENTSFOUND_ANIMATOR_NAME;

	// BrnOdometerComponent.h:124
	TextFieldRef mEventsFoundTextField;

	// BrnOdometerComponent.h:125
	extern char[] KAC_EVENTSFOUND_TEXTFIELD_COMPONENT_NAME;

	// BrnOdometerComponent.h:126
	extern char[] KAC_EVENTSFOUND_TEXTFIELD_NAME;

	// BrnOdometerComponent.h:128
	BrnGui::FlaptAnimatorComponent mDriveThrusFoundAnimator;

	// BrnOdometerComponent.h:129
	extern char[] KAC_DRIVETHRUSFOUND_ANIMATOR_NAME;

	// BrnOdometerComponent.h:131
	TextFieldRef mDriveThrusFoundTextField;

	// BrnOdometerComponent.h:132
	extern char[] KAC_DRIVETHRUSFOUND_TEXTFIELD_COMPONENT_NAME;

	// BrnOdometerComponent.h:133
	extern char[] KAC_DRIVETHRUSFOUND_TEXTFIELD_NAME;

	// BrnOdometerComponent.h:135
	BrnGui::OdometerComponent::EOdometerState meOdometerState;

	// BrnOdometerComponent.h:136
	float32_t mfEnteredStateTime;

	// BrnOdometerComponent.h:138
	BrnGui::GuiCache * mpGuiCache;

	// BrnOdometerComponent.h:139
	const BrnProgression::Profile * mpProfile;

	// BrnOdometerComponent.h:141
	extern const float32_t KF_SHOW_NEWEVENTFOUND_TIME;

	// BrnOdometerComponent.h:142
	extern const float32_t KF_SHOW_NEWDRIVETHRUFOUND_TIME;

public:
	// BrnOdometerComponent.h:72
	void Construct(const char *, StateInterface *, const char *, int32_t);

	// BrnOdometerComponent.h:78
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnOdometerComponent.h:83
	void HandleJunctionChange(const GuiEventJunctionInfo *);

	// BrnOdometerComponent.h:88
	void HandleDriveThruDiscovered(const GuiEventDriveThruDiscovered *);

	// BrnOdometerComponent.h:92
	void Update();

	// BrnOdometerComponent.h:96
	void TransIn();

	// BrnOdometerComponent.h:100
	void TransOutActiveText();

private:
	// BrnOdometerComponent.h:146
	void SetupAptVariables();

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct OdometerComponent {
		// BrnOdometerComponent.h:104
		enum EOdometerState {
			E_ODOMETERSTATE_NONE = 0,
			E_ODOMETERSTATE_MILEAGE = 1,
			E_ODOMETERSTATE_EVENTSFOUND = 2,
			E_ODOMETERSTATE_DRIVETHRUFOUND = 3,
			E_ODOMETERSTATE_NUM = 4,
		}

	}

}


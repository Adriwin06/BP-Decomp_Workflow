// BrnOnlineTimeoutTimerComponent.h:95
extern const uint8_t KU_SAFERED;

// BrnOnlineTimeoutTimerComponent.h:96
extern const uint8_t KU_SAFEGREEN;

// BrnOnlineTimeoutTimerComponent.h:97
extern const uint8_t KU_SAFEBLUE;

// BrnOnlineTimeoutTimerComponent.h:98
extern const uint8_t KU_DANGERRED;

// BrnOnlineTimeoutTimerComponent.h:99
extern const uint8_t KU_DANGERGREEN;

// BrnOnlineTimeoutTimerComponent.h:100
extern const uint8_t KU_DANGERBLUE;

// BrnOnlineTimeoutTimerComponent.h:102
extern const float32_t KF_SAFE_BOUNDARY_TIME;

// BrnOnlineTimeoutTimerComponent.h:103
extern const float32_t KF_DANGER_BOUNDARY_TIME;

// BrnOnlineTimeoutTimerComponent.h:105
extern char[] KAC_TIMER_NAME;

// BrnOnlineTimeoutTimerComponent.h:58
struct BrnGui::OnlineTimeoutComponent : public FlaptIconComponent {
private:
	// BrnOnlineTimeoutTimerComponent.cpp:24
	extern const uint8_t KU_SAFERED = 255;

	// BrnOnlineTimeoutTimerComponent.cpp:25
	extern const uint8_t KU_SAFEGREEN = 204;

	// BrnOnlineTimeoutTimerComponent.cpp:26
	extern const uint8_t KU_SAFEBLUE;

	// BrnOnlineTimeoutTimerComponent.cpp:27
	extern const uint8_t KU_DANGERRED = 153;

	// BrnOnlineTimeoutTimerComponent.cpp:28
	extern const uint8_t KU_DANGERGREEN = 16;

	// BrnOnlineTimeoutTimerComponent.cpp:29
	extern const uint8_t KU_DANGERBLUE = 16;

	// BrnOnlineTimeoutTimerComponent.cpp:30
	extern const float32_t KF_SAFE_BOUNDARY_TIME;

	// BrnOnlineTimeoutTimerComponent.cpp:31
	extern const float32_t KF_DANGER_BOUNDARY_TIME;

	// BrnOnlineTimeoutTimerComponent.cpp:23
	extern const char[9] KAC_TIMER_NAME;

	// Unknown accessibility
	// BrnOnlineTimeoutTimerComponent.h:40
	typedef FlaptTimerFieldComponent OnlineTimeOutTimerField;

	// BrnOnlineTimeoutTimerComponent.h:106
	OnlineTimeoutComponent::OnlineTimeOutTimerField mTimerField;

	// BrnOnlineTimeoutTimerComponent.h:108
	float32_t mfNewTime;

	// BrnOnlineTimeoutTimerComponent.h:109
	bool mbNewTimeSet;

	// BrnOnlineTimeoutTimerComponent.h:111
	bool mbActive;

public:
	// BrnOnlineTimeoutTimerComponent.cpp:52
	void Construct(const char *, StateInterface *, const char *);

	// BrnOnlineTimeoutTimerComponent.cpp:88
	virtual void Prepare(const char *, const BrnFlapt::FileRef &, const char *);

	// BrnOnlineTimeoutTimerComponent.cpp:111
	void SetTime(float32_t);

	// BrnOnlineTimeoutTimerComponent.cpp:131
	void Update();

	// BrnOnlineTimeoutTimerComponent.h:135
	void Show();

	// BrnOnlineTimeoutTimerComponent.h:195
	bool IsActive() const;

private:
	// BrnOnlineTimeoutTimerComponent.h:155
	void Transin();

	// BrnOnlineTimeoutTimerComponent.h:175
	void Transout();

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct OnlineTimeoutComponent {
	public:
		// BrnOnlineTimeoutTimerComponent.h:135
		void Show();

	private:
		// BrnOnlineTimeoutTimerComponent.h:95
		extern const uint8_t KU_SAFERED;

		// BrnOnlineTimeoutTimerComponent.h:96
		extern const uint8_t KU_SAFEGREEN;

		// BrnOnlineTimeoutTimerComponent.h:97
		extern const uint8_t KU_SAFEBLUE;

		// BrnOnlineTimeoutTimerComponent.h:98
		extern const uint8_t KU_DANGERRED;

		// BrnOnlineTimeoutTimerComponent.h:99
		extern const uint8_t KU_DANGERGREEN;

		// BrnOnlineTimeoutTimerComponent.h:100
		extern const uint8_t KU_DANGERBLUE;

		// BrnOnlineTimeoutTimerComponent.h:102
		extern const float32_t KF_SAFE_BOUNDARY_TIME;

		// BrnOnlineTimeoutTimerComponent.h:103
		extern const float32_t KF_DANGER_BOUNDARY_TIME;

		// BrnOnlineTimeoutTimerComponent.h:105
		extern char[] KAC_TIMER_NAME;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineTimeoutComponent {
	public:
		OnlineTimeoutComponent();

	private:
		// BrnOnlineTimeoutTimerComponent.h:95
		extern const uint8_t KU_SAFERED;

		// BrnOnlineTimeoutTimerComponent.h:96
		extern const uint8_t KU_SAFEGREEN;

		// BrnOnlineTimeoutTimerComponent.h:97
		extern const uint8_t KU_SAFEBLUE;

		// BrnOnlineTimeoutTimerComponent.h:98
		extern const uint8_t KU_DANGERRED;

		// BrnOnlineTimeoutTimerComponent.h:99
		extern const uint8_t KU_DANGERGREEN;

		// BrnOnlineTimeoutTimerComponent.h:100
		extern const uint8_t KU_DANGERBLUE;

		// BrnOnlineTimeoutTimerComponent.h:102
		extern const float32_t KF_SAFE_BOUNDARY_TIME;

		// BrnOnlineTimeoutTimerComponent.h:103
		extern const float32_t KF_DANGER_BOUNDARY_TIME;

		// BrnOnlineTimeoutTimerComponent.h:105
		extern char[] KAC_TIMER_NAME;

	}

}

// BrnOnlineTimeoutTimerComponent.h:58
void BrnGui::OnlineTimeoutComponent::OnlineTimeoutComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


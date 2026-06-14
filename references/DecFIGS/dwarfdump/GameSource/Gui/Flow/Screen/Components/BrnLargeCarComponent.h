// BrnLargeCarComponent.h:127
extern const int32_t KI_MAX_CAR_NAME_LENGTH = 32;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct LargeCarComponent {
		// BrnLargeCarComponent.h:129
		enum EInternalStates {
			E_INTERNAL_STATE_CONSTRUCTED = 0,
			E_INTERNAL_STATE_DATA_SUPPLIED = 1,
			E_INTERNAL_STATE_RESOURCES_REQUESTED = 2,
			E_INTERNAL_STATE_READY = 3,
			E_INTERNAL_STATE_SHOWING = 4,
			E_INTERNAL_STATE_HIDING = 5,
			E_INTERNAL_STATE_HIDDEN = 6,
			E_INTERNAL_STATE_UNLOAD_REQUESTED = 7,
			E_INTERNAL_STATE_COUNT = 8,
		}

	}

}

// BrnLargeCarComponent.h:45
struct BrnGui::LargeCarComponent : public BrnGui::IconComponent {
private:
	// BrnLargeCarComponent.h:127
	extern const int32_t KI_MAX_CAR_NAME_LENGTH = 32;

	// BrnLargeCarComponent.h:145
	BrnGui::LargeCarComponent::EInternalStates meCurrentState;

	// BrnLargeCarComponent.h:147
	char[32] macCarNameText;

	// BrnLargeCarComponent.h:149
	BrnGui::GuiCache * mpGuiCache;

	// BrnLargeCarComponent.h:151
	uint32_t muResourceIdType;

	// BrnLargeCarComponent.h:152
	CgsID mCurrentCarId;

public:
	// BrnLargeCarComponent.cpp:48
	virtual void Construct(const char *, StateInterface *, const char *);

	// BrnLargeCarComponent.cpp:76
	void SetCarInfo(CgsID, BrnGui::BrnGuiResourceId);

	// BrnLargeCarComponent.cpp:105
	void OnLoad();

	// BrnLargeCarComponent.cpp:125
	void AppendExpectedAptComponent(BrnGui::GuiFlow);

	// BrnLargeCarComponent.cpp:144
	void ReleaseResources();

	// BrnLargeCarComponent.cpp:178
	void ShowCar();

	// BrnLargeCarComponent.cpp:197
	void HideCar();

	// BrnLargeCarComponent.cpp:220
	void HandleLoadNotification(const GuiEventLoadNotification *);

	// BrnLargeCarComponent.cpp:245
	void HandleUnloadNotification(const GuiEventUnloadNotification *);

	// BrnLargeCarComponent.cpp:271
	bool HandleAptLoadTriggers(const GuiEventAptTrigger *);

	// BrnLargeCarComponent.cpp:303
	bool HandleAptTransitionTriggers(const GuiEventAptTrigger *);

	// BrnLargeCarComponent.cpp:345
	void SetVisible(bool);

	// BrnLargeCarComponent.h:169
	bool IsVisible() const;

	// BrnLargeCarComponent.h:185
	void SetCachePointer(BrnGui::GuiCache *);

	// BrnLargeCarComponent.h:202
	bool EnsureResourcesAreLoaded();

	// BrnLargeCarComponent.h:242
	bool EnsureResourcesAreUnloaded();

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct LargeCarComponent {
	public:
		// BrnLargeCarComponent.h:242
		bool EnsureResourcesAreUnloaded();

		// BrnLargeCarComponent.h:202
		bool EnsureResourcesAreLoaded();

		// BrnLargeCarComponent.h:185
		void SetCachePointer(BrnGui::GuiCache *);

	private:
		// BrnLargeCarComponent.h:127
		extern const int32_t KI_MAX_CAR_NAME_LENGTH = 32;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct LargeCarComponent {
	public:
		LargeCarComponent();

	private:
		// BrnLargeCarComponent.h:127
		extern const int32_t KI_MAX_CAR_NAME_LENGTH = 32;

	}

}

// BrnLargeCarComponent.h:45
void BrnGui::LargeCarComponent::LargeCarComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


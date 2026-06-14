// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct GuiDebugComponent {
	private:
		// BrnGuiDebugComponent.h:338
		extern const int32_t KI_NUM_SCHEDULED_EVENTS;

		// BrnGuiDebugComponent.h:341
		extern BrnGui::GuiDebugComponent * mspSingletonThis;

	}

}

// BrnGuiDebugComponent.h:338
extern const int32_t KI_NUM_SCHEDULED_EVENTS;

// BrnGuiDebugComponent.h:341
extern BrnGui::GuiDebugComponent * mspSingletonThis;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct GuiDebugComponent {
	private:
		// BrnGuiDebugComponent.h:338
		extern const int32_t KI_NUM_SCHEDULED_EVENTS;

		// BrnGuiDebugComponent.h:341
		extern BrnGui::GuiDebugComponent * mspSingletonThis;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct GuiDebugComponent {
		// BrnGuiDebugComponent.h:332
		struct ScheduledEvent {
			// BrnGuiDebugComponent.h:333
			int32_t miEventId;

			// BrnGuiDebugComponent.h:334
			float32_t mfNextTriggerTime;

		}

	}

}

// BrnGuiDebugComponent.h:36
namespace BrnJuice {
}

// BrnGuiDebugComponent.h:78
struct BrnGui::GuiDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnGuiDebugComponent.cpp:61
	extern BrnGui::GuiDebugComponent::ScheduledEvent[4] smaScheduledEvents;

	// BrnGuiDebugComponent.cpp:68
	extern const int32_t KI_NUM_SCHEDULED_EVENTS = 4;

	// BrnGuiDebugComponent.cpp:33
	extern GuiDebugComponent * mspSingletonThis;

	// BrnGuiDebugComponent.h:343
	BrnGui::GuiModule * mpGuiModule;

	// BrnGuiDebugComponent.h:344
	bool mbRenderGui;

	// BrnGuiDebugComponent.h:345
	bool mbSpeedoVisible;

	// BrnGuiDebugComponent.h:346
	GuiEventUpdateHud mSpeedoInfo;

	// BrnGuiDebugComponent.h:347
	bool mbMiniMapVisible;

	// BrnGuiDebugComponent.h:348
	bool mbShow43Area;

	// BrnGuiDebugComponent.h:349
	bool mbShowSafeArea;

	// BrnGuiDebugComponent.h:350
	float32_t mfSafePercent;

	// BrnGuiDebugComponent.h:351
	bool mbPriEventOverride;

	// BrnGuiDebugComponent.h:352
	float32_t mfFontSpacing;

	// BrnGuiDebugComponent.h:353
	int32_t miScreenFlowStreamingMode;

	// BrnGuiDebugComponent.h:354
	StringList[3] maStreamingOptions;

	// BrnGuiDebugComponent.h:355
	GuiPFXHookEnumeration mPFXHookEnumeration;

	// BrnGuiDebugComponent.h:356
	int32_t miCurrentPFXHookIndex;

	// BrnGuiDebugComponent.h:357
	char[128] macCurrentPFXHookName;

	// BrnGuiDebugComponent.h:359
	int32_t miDebugPlayerRank;

	// BrnGuiDebugComponent.h:360
	int32_t miDebugFinishPos;

	// BrnGuiDebugComponent.h:361
	bool mbDebugFinishRankup;

	// BrnGuiDebugComponent.h:362
	bool mbDebugFinishUnlockFreeCar;

	// BrnGuiDebugComponent.h:363
	bool mbDebugFinishUnlockNormalCar;

	// BrnGuiDebugComponent.h:364
	bool mbDebugFinishUnlockRival;

	// BrnGuiDebugComponent.h:365
	bool mbDebugOfflineInstantResults;

	// BrnGuiDebugComponent.h:366
	bool mbDebugOnlineInstantResults;

	// BrnGuiDebugComponent.h:369
	bool mbWorstCaseHudActive;

	// BrnGuiDebugComponent.h:370
	bool mbWorstCaseHudAlreadyActive;

	// BrnGuiDebugComponent.h:372
	float32_t mfWorstCaseUpdateTime;

	// BrnGuiDebugComponent.h:375
	bool mbToggleableRaceHUDEnabled;

	// BrnGuiDebugComponent.h:376
	bool[22] mabTogglableRaceHUDElementsState;

	// BrnGuiDebugComponent.h:383
	InputBuffer::GuiEventQueue mInputQueue;

public:
	// BrnGuiDebugComponent.cpp:90
	void Construct(BrnGui::GuiModule *);

	// BrnGuiDebugComponent.cpp:167
	void Destruct();

	// BrnGuiDebugComponent.cpp:570
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnGuiDebugComponent.cpp:308
	void Update(InputBuffer *);

	// BrnGuiDebugComponent.cpp:401
	void UpdateWorstCaseHUD(InputBuffer *);

	// BrnGuiDebugComponent.h:389
	bool IsGuiRenderingEnabled() const;

	// BrnGuiDebugComponent.h:395
	void SetScreenFlowStreamingMode(BrnGui::BrnBaseFlow::EStreamingMode);

	// BrnGuiDebugComponent.h:401
	BrnGui::BrnBaseFlow::EStreamingMode GetScreenFlowStreamingMode() const;

	// BrnGuiDebugComponent.h:117
	GuiDebugComponent * GetSingletonPtr();

protected:
	// BrnGuiDebugComponent.cpp:637
	void TriggerIntro();

	// BrnGuiDebugComponent.cpp:650
	void TriggerPostEvent();

	// BrnGuiDebugComponent.cpp:811
	void RotateThroughFontEffects();

	// BrnGuiDebugComponent.cpp:797
	void RotateThroughFonts();

	// BrnGuiDebugComponent.cpp:825
	void ChangeFontSpacing();

	// BrnGuiDebugComponent.cpp:840
	void ToggleGenericHUDPriorityOverride();

	// BrnGuiDebugComponent.cpp:911
	void MiniMapSwitch();

	// BrnGuiDebugComponent.cpp:928
	void PlayMovie();

	// BrnGuiDebugComponent.cpp:937
	void ToggleShow43Area();

	// BrnGuiDebugComponent.cpp:943
	void ToggleShowSafeArea();

	// BrnGuiDebugComponent.h:180
	void SelectPreviousMessage();

	// BrnGuiDebugComponent.cpp:185
	virtual const char * GetName() const;

	// BrnGuiDebugComponent.cpp:197
	virtual const char * GetPath() const;

	// BrnGuiDebugComponent.cpp:209
	virtual void OnActivate();

	// BrnGuiDebugComponent.cpp:778
	void DrawDebugFrame1280(CgsDev::Debug2DImmediateRender *, Vector4, RGBA, float32_t);

	// BrnGuiDebugComponent.cpp:1059
	void OpenCrashNav();

	// BrnGuiDebugComponent.cpp:1085
	void OpenCarSelect();

	// BrnGuiDebugComponent.cpp:950
	void BootupProfile();

	// BrnGuiDebugComponent.cpp:955
	void AutosaveProfile();

	// BrnGuiDebugComponent.cpp:960
	void SaveProfile();

	// BrnGuiDebugComponent.cpp:965
	void LoadProfile();

	// BrnGuiDebugComponent.cpp:971
	void ShowKeyboard();

	// BrnGuiDebugComponent.cpp:977
	void TriggerPFX();

	// BrnGuiDebugComponent.cpp:991
	void TriggerClosePFX();

	// BrnGuiDebugComponent.cpp:1215
	void TriggerEATraxComponent();

	// BrnGuiDebugComponent.cpp:1243
	void TriggerOnlineInviteComponent();

private:
	// BrnGuiDebugComponent.cpp:751
	void TriggerIntroCallback(void *);

	// BrnGuiDebugComponent.cpp:764
	void TriggerPostEventCallback(void *);

	// BrnGuiDebugComponent.h:243
	void MainMapResolutionToggleCallback(void *);

	// BrnGuiDebugComponent.cpp:857
	void RotateThroughFontEffectsCallback(void *);

	// BrnGuiDebugComponent.cpp:871
	void RotateThroughFontsCallback(void *);

	// BrnGuiDebugComponent.cpp:885
	void ChangeFontSpacingCallback(void *);

	// BrnGuiDebugComponent.cpp:898
	void ToggleGenericHUDPriorityOverrideCallback(void *);

	// BrnGuiDebugComponent.cpp:1006
	void MiniMapSwitchCallback(void *);

	// BrnGuiDebugComponent.cpp:1282
	void ToggleRaceHudComponentsCallback(void *, void *);

	// BrnGuiDebugComponent.cpp:1020
	void PlayMovieCallback(void *);

	// BrnGuiDebugComponent.cpp:1034
	void ToggleShow43AreaCallback(void *);

	// BrnGuiDebugComponent.cpp:1047
	void ToggleShowSafeAreaCallback(void *);

	// BrnGuiDebugComponent.cpp:1073
	void OpenCrashNavCallback(void *);

	// BrnGuiDebugComponent.cpp:1099
	void EnterCarSelectCallback(void *);

	// BrnGuiDebugComponent.cpp:1112
	void BootupProfileCallback(void *);

	// BrnGuiDebugComponent.cpp:1125
	void AutosaveProfileCallback(void *);

	// BrnGuiDebugComponent.cpp:1138
	void SaveProfileCallback(void *);

	// BrnGuiDebugComponent.cpp:1151
	void LoadProfileCallback(void *);

	// BrnGuiDebugComponent.cpp:1164
	void ShowKeyboardCallback(void *);

	// BrnGuiDebugComponent.cpp:1177
	void TriggerPFXCallback(void *);

	// BrnGuiDebugComponent.cpp:1190
	void TriggerClosePFXCallback(void *);

	// BrnGuiDebugComponent.cpp:1204
	void TriggerEATraxComponentCallback(void *);

	// BrnGuiDebugComponent.cpp:1232
	void TriggerOnlineInviteCallback(void *);

	// BrnGuiDebugComponent.cpp:1263
	void TriggerPaybackComponent(void *);

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct GuiDebugComponent {
	public:
		GuiDebugComponent();

	private:
		// BrnGuiDebugComponent.h:338
		extern const int32_t KI_NUM_SCHEDULED_EVENTS;

		// BrnGuiDebugComponent.h:341
		extern BrnGui::GuiDebugComponent * mspSingletonThis;

	}

}

// BrnGuiDebugComponent.h:78
void BrnGui::GuiDebugComponent::GuiDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


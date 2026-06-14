// BrnBaseOverlayState.h:143
extern int32_t[] maiEventToObserve;

// BrnBaseOverlayState.h:144
extern const int32_t miNumEventsObserved;

// BrnBaseOverlayState.h:146
extern int32_t[] maiEventTypeOverridden;

// BrnBaseOverlayState.h:147
extern const int32_t miNumOverriddenEvents;

// BrnBaseOverlayState.h:149
extern char[] macOverlayComponentName;

// BrnBaseOverlayState.h:150
extern char[] macTitleTextFieldName;

// BrnBaseOverlayState.h:151
extern char[] macMessageTextFieldName;

// BrnBaseOverlayState.h:152
extern char[] macIconComponentName;

// BrnBaseOverlayState.h:153
extern const char *[] mapcIconStateNames;

// BrnBaseOverlayState.h:154
extern char[] macHelpItem1ComponentName;

// BrnBaseOverlayState.h:155
extern char[] macHelpItem2ComponentName;

// BrnBaseOverlayState.h:157
extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 8;

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct BaseOverlayState {
		// BrnBaseOverlayState.h:63
		enum OverlayInternalState {
			E_OVERLAYINTERNALSTATE_START = 0,
			E_OVERLAYINTERNALSTATE_WFINIT = 1,
			E_OVERLAYINTERNALSTATE_SETUPOVERLAY = 2,
			E_OVERLAYINTERNALSTATE_WFTRANSIN = 3,
			E_OVERLAYINTERNALSTATE_RUNNING = 4,
			E_OVERLAYINTERNALSTATE_WFTRANSOUT = 5,
			E_OVERLAYINTERNALSTATE_DONE = 6,
			E_OVERLAYINTERNALSTATE_COUNT = 7,
		}

	}

}

// BrnBaseOverlayState.h:58
struct BrnGui::BaseOverlayState : public CgsGui::State {
protected:
	// BrnBaseOverlayState.h:118
	OverlayComponent mOverlayComponent;

	// Unknown accessibility
	// BrnBaseOverlayState.h:38
	typedef BrnGui::FlaptIconComponent OverlayIconComponent;

	// BrnBaseOverlayState.h:119
	BaseOverlayState::OverlayIconComponent mIconComponent;

	// Unknown accessibility
	// BrnBaseOverlayState.h:39
	typedef FlaptHelpItem OverlayHelpItem;

	// BrnBaseOverlayState.h:120
	BaseOverlayState::OverlayHelpItem mHelpItem1Component;

	// BrnBaseOverlayState.h:121
	BaseOverlayState::OverlayHelpItem mHelpItem2Component;

	// BrnBaseOverlayState.h:126
	TextFieldRef mTitleTextField;

	// BrnBaseOverlayState.h:127
	TextFieldRef mMessageTextField;

	// BrnBaseOverlayState.h:130
	const char * mpcFlashFileId;

	// BrnBaseOverlayState.h:132
	CgsID mCurrentOverlayId;

	// BrnBaseOverlayState.h:133
	BrnGui::GuiOverlayCompleteEvent::LeaveMethod meLeaveMethod;

private:
	// BrnBaseOverlayState.h:140
	BrnGui::BaseOverlayState::OverlayInternalState meInternalState;

	// BrnBaseOverlayState.h:141
	BrnGui::GuiCache * mpGuiCache;

	// BrnBaseOverlayState.cpp:26
	extern const int32_t[5] maiEventToObserve;

	// BrnBaseOverlayState.cpp:35
	extern const int32_t miNumEventsObserved = 5;

	// BrnBaseOverlayState.cpp:37
	extern const int32_t[1] maiEventTypeOverridden;

	// BrnBaseOverlayState.cpp:42
	extern const int32_t miNumOverriddenEvents = 1;

	// BrnBaseOverlayState.cpp:44
	extern const char[12] macOverlayComponentName;

	// BrnBaseOverlayState.cpp:45
	extern const char[25] macTitleTextFieldName;

	// BrnBaseOverlayState.cpp:46
	extern const char[24] macMessageTextFieldName;

	// BrnBaseOverlayState.cpp:47
	extern const char[21] macIconComponentName;

	// BrnBaseOverlayState.cpp:51
	extern const const char *[2] mapcIconStateNames;

	// BrnBaseOverlayState.cpp:48
	extern const char[22] macHelpItem1ComponentName;

	// BrnBaseOverlayState.cpp:49
	extern const char[22] macHelpItem2ComponentName;

	// BrnBaseOverlayState.h:157
	extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 8;

	// BrnBaseOverlayState.h:158
	uint32_t[8] mauExpectedComponentIds;

	// BrnBaseOverlayState.h:159
	uint32_t muNumExpectedComponents;

public:
	// BrnBaseOverlayState.cpp:80
	virtual void OnEnter();

	// BrnBaseOverlayState.cpp:119
	virtual void Prepare();

	// BrnBaseOverlayState.cpp:326
	virtual void OnLeave();

	// BrnBaseOverlayState.cpp:192
	virtual void Update();

	// BrnBaseOverlayState.h:98
	virtual bool UpdateRunning();

	// BrnBaseOverlayState.cpp:510
	void UpdatePermanent();

	// BrnBaseOverlayState.cpp:458
	virtual void SetupOverlay(const GuiOverlayFullInfoResponse *);

	// BrnBaseOverlayState.h:110
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

protected:
	// BrnBaseOverlayState.h:136
	virtual void FillInPopupType();

private:
	// BrnBaseOverlayState.cpp:351
	void GetCache();

	// BrnBaseOverlayState.cpp:595
	void SetupOverlayComponents(const char *);

	// BrnBaseOverlayState.cpp:659
	void ResetOverlayComponents();

	// BrnBaseOverlayState.cpp:423
	bool UpdateWFInfo();

	// BrnBaseOverlayState.cpp:140
	bool UpdateWFTransComplete();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct BaseOverlayState {
	public:
		BaseOverlayState();

	private:
		// BrnBaseOverlayState.h:143
		extern int32_t[] maiEventToObserve;

		// BrnBaseOverlayState.h:144
		extern const int32_t miNumEventsObserved;

		// BrnBaseOverlayState.h:146
		extern int32_t[] maiEventTypeOverridden;

		// BrnBaseOverlayState.h:147
		extern const int32_t miNumOverriddenEvents;

		// BrnBaseOverlayState.h:149
		extern char[] macOverlayComponentName;

		// BrnBaseOverlayState.h:150
		extern char[] macTitleTextFieldName;

		// BrnBaseOverlayState.h:151
		extern char[] macMessageTextFieldName;

		// BrnBaseOverlayState.h:152
		extern char[] macIconComponentName;

		// BrnBaseOverlayState.h:153
		extern const char *[] mapcIconStateNames;

		// BrnBaseOverlayState.h:154
		extern char[] macHelpItem1ComponentName;

		// BrnBaseOverlayState.h:155
		extern char[] macHelpItem2ComponentName;

		// BrnBaseOverlayState.h:157
		extern const uint32_t KU_MAX_INIT_COMPONENTS_NUM = 8;

	}

}

// BrnBaseOverlayState.h:58
void BrnGui::BaseOverlayState::BaseOverlayState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


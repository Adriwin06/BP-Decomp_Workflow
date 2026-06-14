// BrnSatNav.h:240
extern const int32_t KI_MAX_PARENT_NAME_LENGTH = 112;

// BrnSatNav.h:241
extern const int32_t KI_SATNAV_NUMBEROFICONS = 16;

// BrnSatNav.h:243
extern char[] macSatNavIconBaseName;

// BrnSatNav.h:254
extern char[] macNorthIndicatorName;

// BrnSatNav.h:257
extern char[] macStatic;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct SatNavComponent {
		// BrnSatNav.h:99
		enum ESatNavMode {
			E_SAT_NAV_MODE_TRACK_PLAYER = 0,
			E_SAT_NAV_MODE_FREE_ROAMING = 1,
			E_SAT_NAV_MODE_COUNT = 2,
		}

	public:
		// BrnSatNav.cpp:161
		// Declaration
		void Destruct() {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnSatNav.cpp:165
			using namespace CgsDev::Message;

		}

		// BrnSatNav.cpp:217
		// Declaration
		void Update() {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnSatNav.cpp:235
			using namespace CgsDev::Message;

		}

		// BrnSatNav.cpp:668
		// Declaration
		float32_t GetViewDistance(float32_t) {
			// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
			// BrnSatNav.cpp:670
			using namespace rw::math;

		}

	private:
		// BrnSatNav.cpp:329
		void UpdateTrackPlayer();

	public:
		// BrnSatNav.cpp:620
		void StartRoaming(float32_t);

		// BrnSatNav.cpp:644
		void AppendExpectedComponentList(uint32_t *, uint32_t *, uint32_t);

		// BrnSatNav.cpp:782
		void SetIconVisibility(bool);

		// BrnSatNav.cpp:801
		void SetEventType(BrnGameState::GameStateModuleIO::EGameModeType);

		// BrnSatNav.cpp:696
		void GetZoomedCarWorldRect(Vector3 *, Vector3, float32_t, float32_t, bool, bool);

		// BrnSatNav.h:303
		void ClearIconInfo();

		// BrnSatNav.cpp:62
		void Construct(StateInterface *, const char *, BrnGui::SatNavComponent::ESatNavMode);

	private:
		// BrnSatNav.cpp:180
		void SetViewParamsFromPlayerCar(const GuiPlayerInfo *);

		// BrnSatNav.cpp:350
		void UpdateFreeRoaming();

	public:
		// BrnSatNav.cpp:456
		void RecvEvent(const CgsModule::Event *, int32_t);

		// BrnSatNav.cpp:540
		void LoadResources();

		// BrnSatNav.cpp:574
		void SetRoamingRouteInfo(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *, const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

		// Unknown accessibility
		// BrnSatNav.cpp:36
		extern float32_t KF_CAR_MAX_MPH;

		// Unknown accessibility
		// BrnSatNav.cpp:37
		extern float32_t KF_MIN_VIEW_DIST;

		// Unknown accessibility
		// BrnSatNav.cpp:38
		extern float32_t KF_MAX_VIEW_DIST;

		// Unknown accessibility
		// BrnSatNav.cpp:39
		extern float32_t KF_MIN_VIEW_LERP;

		// Unknown accessibility
		// BrnSatNav.cpp:40
		extern float32_t KF_MAX_VIEW_LERP;

	private:
		// BrnSatNav.h:240
		extern const int32_t KI_MAX_PARENT_NAME_LENGTH = 112;

		// BrnSatNav.h:241
		extern const int32_t KI_SATNAV_NUMBEROFICONS = 16;

		// BrnSatNav.cpp:31
		extern uint32_t[16] mauHashedSatNavIconNames;

		// BrnSatNav.cpp:32
		extern const char[11] macSatNavIconBaseName;

		// BrnSatNav.cpp:33
		extern const char[10] macNorthIndicatorName;

		// BrnSatNav.cpp:34
		extern const char[10] macStatic;

	}

}

// BrnSatNav.h:72
struct BrnGui::GuiEventRenderSatNav : public GuiEvent<210> {
	// BrnSatNav.h:76
	Vector3 mv3CarPosition;

	// BrnSatNav.h:77
	float32_t mfCarOrientation;

	// BrnSatNav.h:78
	float32_t mfCarSpeedMph;

	// BrnSatNav.h:79
	Texture2D * mpMapTexture;

	// BrnSatNav.h:80
	Texture2D * mpMaskTexture;

	// BrnSatNav.h:81
	Texture2D * mpRouteSegmentTexture;

	// BrnSatNav.h:82
	bool mbRotateMap;

	// BrnSatNav.h:83
	bool mbUseTrajectory;

public:
	// BrnSatNav.h:74
	void Construct();

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct SatNavComponent {
	public:
		// BrnSatNav.h:323
		void TriggerStatic();

		// BrnSatNav.h:335
		void SetCachePointer(BrnGui::GuiCache *);

		// BrnSatNav.h:303
		void ClearIconInfo();

	private:
		// BrnSatNav.h:240
		extern const int32_t KI_MAX_PARENT_NAME_LENGTH = 112;

		// BrnSatNav.h:241
		extern const int32_t KI_SATNAV_NUMBEROFICONS = 16;

		// BrnSatNav.h:243
		extern char[] macSatNavIconBaseName;

		// BrnSatNav.h:254
		extern char[] macNorthIndicatorName;

		// BrnSatNav.h:257
		extern char[] macStatic;

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct SatNavComponent {
		// BrnSatNav.h:99
		enum ESatNavMode {
			E_SAT_NAV_MODE_TRACK_PLAYER = 0,
			E_SAT_NAV_MODE_FREE_ROAMING = 1,
			E_SAT_NAV_MODE_COUNT = 2,
		}

		// BrnSatNav.h:207
		enum ERoamingModeState {
			E_ROAMING_STATE_INVALID = 0,
			E_ROAMING_STATE_PENDING_DATA = 1,
			E_ROAMING_STATE_READY = 2,
			E_ROAMING_STATE_IN_PROGRESS = 3,
			E_ROAMING_STATE_DONE = 4,
			E_ROAMING_STATE_COUNT = 5,
		}

	}

}

// BrnSatNav.h:95
struct BrnGui::SatNavComponent : public CgsGui::GuiComponent {
	// BrnSatNav.h:199
	extern float32_t KF_CAR_MAX_MPH;

	// BrnSatNav.h:200
	extern float32_t KF_MIN_VIEW_DIST;

	// BrnSatNav.h:201
	extern float32_t KF_MAX_VIEW_DIST;

	// BrnSatNav.h:202
	extern float32_t KF_MIN_VIEW_LERP;

	// BrnSatNav.h:203
	extern float32_t KF_MAX_VIEW_LERP;

private:
	// BrnSatNav.h:240
	extern const int32_t KI_MAX_PARENT_NAME_LENGTH = 112;

	// BrnSatNav.h:241
	extern const int32_t KI_SATNAV_NUMBEROFICONS = 16;

	// BrnSatNav.h:242
	extern uint32_t[16] mauHashedSatNavIconNames;

	// BrnSatNav.h:243
	extern char[] macSatNavIconBaseName;

	// BrnSatNav.h:245
	char[112] macSatNavIconParentNameBase;

	// BrnSatNav.h:247
	GuiEventRenderSatNav mpRenderSatNavEvent;

	// BrnSatNav.h:249
	const GuiPlayerInfo * mpPlayerInfo;

	// BrnSatNav.h:252
	bool mbUseNorthIndicator;

	// BrnSatNav.h:253
	BrnGui::NorthIndicatorComponent mNorthIndicatorComponent;

	// BrnSatNav.h:254
	extern char[] macNorthIndicatorName;

	// BrnSatNav.h:256
	BrnGui::SatNavStatic mStatic;

	// BrnSatNav.h:257
	extern char[] macStatic;

	// BrnSatNav.h:259
	StateInterface * mpStateInterface;

	// BrnSatNav.h:260
	MapIconManager * mpIconManager;

	// BrnSatNav.h:261
	BrnGui::MapIconManager::OwnerId mIconManagerId;

	// BrnSatNav.h:263
	BrnGui::GuiCache * mpGuiCache;

	// BrnSatNav.h:264
	bool mbRotateMap;

	// BrnSatNav.h:265
	bool mbUseTrajectory;

	// BrnSatNav.h:267
	BrnGui::SatNavComponent::ESatNavMode meMode;

	// BrnSatNav.h:268
	BrnGui::SatNavComponent::ERoamingModeState meRoamingState;

	// BrnSatNav.h:269
	float32_t mfRoamTime;

	// BrnSatNav.h:270
	float32_t mfRoamTimeElapsed;

public:
	void SatNavComponent(const SatNavComponent &);

	void SatNavComponent();

	// BrnSatNav.h:112
	void Construct(StateInterface *, const char *, BrnGui::SatNavComponent::ESatNavMode);

	// BrnSatNav.h:123
	void Destruct();

	// BrnSatNav.h:127
	void Update();

	// BrnSatNav.h:133
	void RecvEvent(const CgsModule::Event *, int32_t);

	// BrnSatNav.h:303
	void ClearIconInfo();

	// BrnSatNav.h:145
	void AppendExpectedComponentList(uint32_t *, uint32_t *, uint32_t);

	// BrnSatNav.h:150
	void LoadResources();

	// BrnSatNav.h:156
	void SetRoamingRouteInfo(const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *, const BrnGui::GuiEventUpdateSatNav::SatNavIconInfo *);

	// BrnSatNav.h:160
	void StartRoaming(float32_t);

	// BrnSatNav.h:323
	void TriggerStatic();

	// BrnSatNav.h:169
	float32_t GetViewDistance(float32_t);

	// BrnSatNav.h:179
	void GetZoomedCarWorldRect(Vector3 *, Vector3, float32_t, float32_t, bool, bool);

	// BrnSatNav.h:184
	void SetIconVisibility(bool);

	// BrnSatNav.h:335
	void SetCachePointer(BrnGui::GuiCache *);

	// BrnSatNav.h:351
	bool IsRoamingFinished();

	// BrnSatNav.h:197
	void SetEventType(BrnGameState::GameStateModuleIO::EGameModeType);

private:
	// BrnSatNav.h:223
	void SetViewParamsFromPlayerCar(const GuiPlayerInfo *);

	// BrnSatNav.h:227
	void UpdateTrackPlayer();

	// BrnSatNav.h:231
	void UpdateFreeRoaming();

	// BrnSatNav.h:237
	void HandleLoadNotification(const CgsModule::Event *, int32_t);

}

// BrnSatNav.h:95
void BrnGui::SatNavComponent::SatNavComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnSatNav.h:199
extern float32_t KF_CAR_MAX_MPH;

// BrnSatNav.h:200
extern float32_t KF_MIN_VIEW_DIST;

// BrnSatNav.h:201
extern float32_t KF_MAX_VIEW_DIST;

// BrnSatNav.h:202
extern float32_t KF_MIN_VIEW_LERP;

// BrnSatNav.h:203
extern float32_t KF_MAX_VIEW_LERP;


// BrnCompassComponent.h:105
extern const char *[] KAPC_PLAYER_ROUTE_STATES;

// BrnCompassComponent.h:107
extern char[] KAC_BEARING_VARNAME;

// BrnCompassComponent.h:108
extern char[] KAC_MARKERPOS_VARNAME;

// BrnCompassComponent.h:109
extern char[] KAC_MARKERICON_VARNAME;

// BrnCompassComponent.h:111
extern char[] KAC_PLAYER_MARKER_ANIMATOR_VARNAME;

// BrnCompassComponent.h:113
extern const float32_t KF_CORRECT_BEARING_LEEWAY;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct CompassComponent {
		// BrnCompassComponent.h:96
		enum EPlayerRouteState {
			E_PLAYER_ROUTE_ON_COURSE = 0,
			E_PLAYER_ROUTE_OFF_COURSE = 1,
			E_PLAYER_ROUTE_WITHIN_NORMAL_BOUNDS = 2,
			E_PLAYER_ROUTE_COUNT = 3,
		}

	}

}

// BrnCompassComponent.h:59
struct BrnGui::CompassComponent : public BrnFlaptComponent {
private:
	// BrnCompassComponent.h:105
	extern const char *[] KAPC_PLAYER_ROUTE_STATES;

	// BrnCompassComponent.h:107
	extern char[] KAC_BEARING_VARNAME;

	// BrnCompassComponent.h:108
	extern char[] KAC_MARKERPOS_VARNAME;

	// BrnCompassComponent.h:109
	extern char[] KAC_MARKERICON_VARNAME;

	// BrnCompassComponent.h:111
	extern char[] KAC_PLAYER_MARKER_ANIMATOR_VARNAME;

	// BrnCompassComponent.h:113
	extern const float32_t KF_CORRECT_BEARING_LEEWAY;

	// Unknown accessibility
	// BrnCompassComponent.h:44
	typedef BrnGui::FlaptAnimatorComponent MarkerAnimatorType;

	// BrnCompassComponent.h:115
	CompassComponent::MarkerAnimatorType mPlayerMarkerAnimator;

	// BrnCompassComponent.h:117
	BrnGui::GuiCache * mpGuiCache;

	// BrnCompassComponent.h:119
	BrnGui::CompassComponent::EPlayerRouteState mePlayerOnTrack;

	// BrnCompassComponent.h:122
	MovieClipRef mCompassViewMovie;

	// BrnCompassComponent.h:123
	MovieClipRef mDestMarkerMovie;

	// BrnCompassComponent.h:126
	Vector2 mv2InitialViewPos;

	// BrnCompassComponent.h:127
	Vector2 mv2InitialDestMarkerPos;

	// BrnCompassComponent.h:128
	float32_t mfSingleViewLength;

	// BrnCompassComponent.h:130
	extern const char *[] KAPC_FRAMES_EAST;

	// BrnCompassComponent.h:131
	extern const char *[] KAPC_FRAMES_WEST;

public:
	// BrnCompassComponent.h:68
	void Construct(const char *, StateInterface *, const char *, int32_t);

	// BrnCompassComponent.h:75
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnCompassComponent.h:80
	void Update();

	// BrnCompassComponent.h:85
	void SetGuiCachePointer(BrnGui::GuiCache *);

	// BrnCompassComponent.h:91
	void SetVisibility(bool, bool);

private:
	// BrnCompassComponent.h:139
	float32_t FindAngleInRange(float32_t, float32_t, float32_t);

	// BrnCompassComponent.h:144
	void ShowLandmarkOnCompass(LandmarkIndex, float32_t);

	// BrnCompassComponent.h:149
	bool ShowChallengeOnCompass(float32_t);

	// BrnCompassComponent.h:155
	void ShowPositionOnCompass(Vector3, float32_t);

	// BrnCompassComponent.h:160
	void UpdatePlayerMarkerState(BrnGui::CompassComponent::EPlayerRouteState);

	// BrnCompassComponent.h:165
	void SetViewState(const char *);

	// BrnCompassComponent.h:170
	void SetBearing(float32_t);

	// BrnCompassComponent.h:176
	void SetMarkerPos(float32_t, bool);

	// BrnCompassComponent.h:181
	void SetMarkerIcon(const char *);

	// BrnCompassComponent.h:189
	void FormatDirectionLetters(CgsLanguage::ELanguage, BrnFlapt::MovieClipRef *);

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct CompassComponent {
		// BrnCompassComponent.h:96
		enum EPlayerRouteState {
			E_PLAYER_ROUTE_ON_COURSE = 0,
			E_PLAYER_ROUTE_OFF_COURSE = 1,
			E_PLAYER_ROUTE_WITHIN_NORMAL_BOUNDS = 2,
			E_PLAYER_ROUTE_COUNT = 3,
		}

	}

}


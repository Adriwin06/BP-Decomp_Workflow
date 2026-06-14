// BrnDistrictMarker.h:168
extern char[] KAC_COUNTY_MOVIE_NAME;

// BrnDistrictMarker.h:169
extern char[] KAC_DISTRICT_MOVIE_NAME;

// BrnDistrictMarker.h:171
extern char[] KAC_COUNTY_ICON;

// BrnDistrictMarker.h:172
extern char[] KAC_DISTRICT_ICON;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct DistrictMarkerComponent {
		// BrnDistrictMarker.h:148
		enum EMarkerState {
			E_MARKERSTATE_LOADING = 0,
			E_MARKERSTATE_LOADED = 1,
			E_MARKERSTATE_SHOWING = 2,
			E_MARKERSTATE_TRANSITIONING = 3,
			E_MARKERSTATE_INVISIBLE = 4,
			E_MARKERSTATE_HIDING = 5,
			E_MARKERSTATE_COUNT = 6,
		}

	}

}

// BrnDistrictMarker.h:61
struct BrnGui::DistrictMarkerComponent : public BrnFlaptComponent {
	// BrnDistrictMarker.h:42
	typedef BrnGui::FlaptIconComponent BaseIconComponent;

private:
	// BrnDistrictMarker.h:161
	DistrictMarkerComponent::BaseIconComponent mCountyContainerMovie;

	// BrnDistrictMarker.h:162
	DistrictMarkerComponent::BaseIconComponent mDistrictContainerMovie;

	// BrnDistrictMarker.h:164
	DistrictMarkerComponent::BaseIconComponent mCountyIcon;

	// BrnDistrictMarker.h:165
	DistrictMarkerComponent::BaseIconComponent mDistrictIcon;

	// BrnDistrictMarker.h:168
	extern char[] KAC_COUNTY_MOVIE_NAME;

	// BrnDistrictMarker.h:169
	extern char[] KAC_DISTRICT_MOVIE_NAME;

	// BrnDistrictMarker.h:171
	extern char[] KAC_COUNTY_ICON;

	// BrnDistrictMarker.h:172
	extern char[] KAC_DISTRICT_ICON;

	// BrnDistrictMarker.h:175
	BrnGui::DistrictMarkerComponent::EMarkerState meCurrentCountyState;

	// BrnDistrictMarker.h:176
	BrnGui::DistrictMarkerComponent::EMarkerState meCurrentDistrictState;

	// BrnDistrictMarker.h:177
	bool mbCountyChangePending;

	// BrnDistrictMarker.h:178
	bool mbDistrictChangePending;

	// BrnDistrictMarker.h:179
	bool mbOnline;

	// BrnDistrictMarker.h:182
	BrnWorld::ECounty meCurrentCounty;

	// BrnDistrictMarker.h:183
	BrnWorld::ECounty mePendingCounty;

	// BrnDistrictMarker.h:186
	BrnWorld::EDistrict meCurrentDistrict;

	// BrnDistrictMarker.h:187
	BrnWorld::EDistrict mePendingDistrict;

public:
	// BrnDistrictMarker.h:69
	void Construct(const char *, StateInterface *, const char *);

	// BrnDistrictMarker.h:76
	void Prepare(const char *, const BrnFlapt::FileRef &);

	// BrnDistrictMarker.h:82
	void Update();

	// BrnDistrictMarker.h:87
	void SetCounty(BrnWorld::ECounty);

	// BrnDistrictMarker.h:92
	void SetDistrict(BrnWorld::EDistrict);

	// BrnDistrictMarker.h:97
	void ProcessCountyTransitionComplete(const char *);

	// BrnDistrictMarker.h:102
	void ProcessDistrictTransitionComplete(const char *);

	// BrnDistrictMarker.h:107
	void OnLoad(const char *);

	// BrnDistrictMarker.h:111
	void Hide();

	// BrnDistrictMarker.h:116
	void SetOnline(bool);

	// BrnDistrictMarker.h:120
	void TransIn();

	// BrnDistrictMarker.h:124
	void TransOut();

	// BrnDistrictMarker.h:129
	void SetHideCountyIcon(bool);

private:
	// BrnDistrictMarker.h:138
	void CountyTransitionCompleteCallback(void *, uint16_t);

	// BrnDistrictMarker.h:144
	void DistrictTransitionCompleteCallback(void *, uint16_t);

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct DistrictMarkerComponent {
		// BrnDistrictMarker.h:148
		enum EMarkerState {
			E_MARKERSTATE_LOADING = 0,
			E_MARKERSTATE_LOADED = 1,
			E_MARKERSTATE_SHOWING = 2,
			E_MARKERSTATE_TRANSITIONING = 3,
			E_MARKERSTATE_INVISIBLE = 4,
			E_MARKERSTATE_HIDING = 5,
			E_MARKERSTATE_COUNT = 6,
		}

	}

}


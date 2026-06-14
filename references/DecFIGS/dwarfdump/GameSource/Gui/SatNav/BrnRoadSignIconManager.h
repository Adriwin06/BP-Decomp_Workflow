// BrnRoadSignIconManager.h:183
struct BrnGui::RoadSignIconManager {
private:
	// BrnRoadSignIconManager.h:254
	extern const float32_t KF_ZOOM_RANGE;

	// BrnRoadSignIconManager.h:255
	extern const float32_t KF_ZOOM_ADJUST;

	// BrnRoadSignIconManager.h:256
	extern const float32_t KF_MIN_SCALE_FACTOR;

	// BrnRoadSignIconManager.h:257
	extern const float32_t KF_MAX_SCALE_FACTOR;

	// BrnRoadSignIconManager.h:258
	extern const float32_t KF_MIN_VIEW_LERP;

	// BrnRoadSignIconManager.h:259
	extern const float32_t KF_MAX_VIEW_LERP;

	// BrnRoadSignIconManager.h:261
	extern float32_t KF_SD_MIN_SCALE_FACTOR;

	// BrnRoadSignIconManager.h:262
	extern float32_t KF_SD_MAX_SCALE_FACTOR;

	// BrnRoadSignIconManager.h:263
	extern float32_t KF_SD_MIN_VIEW_LERP;

	// BrnRoadSignIconManager.h:264
	extern float32_t KF_SD_MAX_VIEW_LERP;

	// BrnRoadSignIconManager.h:266
	extern const char * mpacStreetPrefix;

	// BrnRoadSignIconManager.h:268
	BrnGui::RoadSignIcon[64] mIcons;

	// BrnRoadSignIconManager.h:269
	CgsGui::ObjectController *[64] mapObjectController;

	// BrnRoadSignIconManager.h:270
	BrnGui::GuiCache * mpGuiCache;

	// BrnRoadSignIconManager.h:271
	bool mbIconsTransformed;

	// BrnRoadSignIconManager.h:272
	bool mbComponentVisible;

	// BrnRoadSignIconManager.h:273
	float32_t mfZoomFactor;

	// BrnRoadSignIconManager.h:274
	BrnStreetData::ScoreType meRoadRuleType;

	// BrnRoadSignIconManager.h:275
	StateInterface * mpStateInterface;

public:
	// BrnRoadSignIconManager.h:187
	void Construct();

	// BrnRoadSignIconManager.h:193
	void Prepare(StateInterface *, BrnGui::GuiCache *);

	// BrnRoadSignIconManager.h:197
	void ReleaseResources();

	// BrnRoadSignIconManager.h:201
	void Update();

	// BrnRoadSignIconManager.h:207
	BrnGui::RoadSignIcon * GetIcon(int32_t);

	// BrnRoadSignIconManager.h:211
	void AppendExpectedComponents();

	// BrnRoadSignIconManager.h:217
	void GetRoadSignIconPositions(Vector2 *, int32_t *);

	// BrnRoadSignIconManager.h:222
	const char * GetIconNameAtIndex(int32_t) const;

	// BrnRoadSignIconManager.h:226
	void SetupComponent();

	// BrnRoadSignIconManager.h:231
	void SetRoadRuleBatchData(const GuiEventRoadRuleBatchDataResponse *);

	// BrnRoadSignIconManager.h:236
	void SetRoadIconFilter(BrnStreetData::ScoreType);

	// BrnRoadSignIconManager.h:240
	int32_t GetNumIcons() const;

	// BrnRoadSignIconManager.h:245
	void SetSignsVisible(bool);

	// BrnRoadSignIconManager.h:250
	void SetZoomFactor(float32_t);

}

// BrnRoadSignIconManager.h:254
extern const float32_t KF_ZOOM_RANGE;

// BrnRoadSignIconManager.h:255
extern const float32_t KF_ZOOM_ADJUST;

// BrnRoadSignIconManager.h:256
extern const float32_t KF_MIN_SCALE_FACTOR;

// BrnRoadSignIconManager.h:257
extern const float32_t KF_MAX_SCALE_FACTOR;

// BrnRoadSignIconManager.h:258
extern const float32_t KF_MIN_VIEW_LERP;

// BrnRoadSignIconManager.h:259
extern const float32_t KF_MAX_VIEW_LERP;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct RoadSignIcon {
		// BrnRoadSignIconManager.h:66
		enum ESignColour {
			E_SIGN_COLOUR_GREEN = 0,
			E_SIGN_COLOUR_RED = 1,
			E_SIGN_COLOUR_SILVER = 2,
			E_SIGN_COLOUR_GOLD = 3,
			E_SIGN_COLOUR_COUNT = 4,
		}

	}

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct RoadSignIcon {
		// BrnRoadSignIconManager.h:53
		enum EIconType {
			E_ICON_TYPE_A = 0,
			E_ICON_TYPE_B = 1,
			E_ICON_TYPE_C = 2,
			E_ICON_TYPE_D = 3,
			E_ICON_TYPE_E = 4,
			E_ICON_TYPE_F = 5,
			E_ICON_TYPE_G = 6,
			E_ICON_TYPE_COUNT = 7,
		}

		// BrnRoadSignIconManager.h:66
		enum ESignColour {
			E_SIGN_COLOUR_GREEN = 0,
			E_SIGN_COLOUR_RED = 1,
			E_SIGN_COLOUR_SILVER = 2,
			E_SIGN_COLOUR_GOLD = 3,
			E_SIGN_COLOUR_COUNT = 4,
		}

	}

}

// BrnRoadSignIconManager.h:51
struct BrnGui::RoadSignIcon : public CgsGui::GuiComponent {
	// BrnRoadSignIconManager.h:148
	Vector2 mv2WorldPos;

	// BrnRoadSignIconManager.h:149
	BrnGui::RoadSignIcon::EIconType meIconType;

	// BrnRoadSignIconManager.h:150
	CgsID mRoadId;

	// BrnRoadSignIconManager.h:151
	bool mbShowPost;

	// BrnRoadSignIconManager.h:152
	BrnGui::RoadSignIcon::ESignColour meSignColour;

	// BrnRoadSignIconManager.h:153
	bool mbOfflineTimeRuled;

	// BrnRoadSignIconManager.h:154
	bool mbOfflineCrashRuled;

	// BrnRoadSignIconManager.h:155
	bool mbOnlineTimeRuled;

	// BrnRoadSignIconManager.h:156
	bool mbOnlineCrashRuled;

private:
	// BrnRoadSignIconManager.h:160
	extern const char *[4] KAPC_SIGN_COLOURS;

	// BrnRoadSignIconManager.h:162
	extern const char * mpRoadPrefix;

	// BrnRoadSignIconManager.h:163
	extern const char * mpShowSign;

	// BrnRoadSignIconManager.h:164
	extern const char * mpTrue;

	// BrnRoadSignIconManager.h:165
	extern const char * mpFalse;

	// BrnRoadSignIconManager.h:166
	extern const char * mpacRoadFrameName;

	// BrnRoadSignIconManager.h:167
	extern const char * mpacRoadColour;

	// BrnRoadSignIconManager.h:169
	bool mbSignVisible;

	// BrnRoadSignIconManager.h:171
	bool mbCommunicateWithApt;

public:
	void RoadSignIcon(const RoadSignIcon &);

	void RoadSignIcon();

	// BrnRoadSignIconManager.h:82
	void Construct(const char *, StateInterface *, const char *, bool);

	// BrnRoadSignIconManager.h:90
	void SetIcon(BrnGui::ERoadIcon, const rw::math::vpu::Vector2 *, BrnGui::RoadSignIcon::EIconType, CgsID);

	// BrnRoadSignIconManager.h:95
	void SetVisible(bool);

	// BrnRoadSignIconManager.h:101
	void DisplayRoad(BrnGui::ERoadIcon, bool);

	// BrnRoadSignIconManager.h:107
	void DisplayRoad(const char *, bool);

	// BrnRoadSignIconManager.h:113
	void DisplayRoadFromCgsID(CgsID, bool);

	// BrnRoadSignIconManager.h:120
	void DisplayColouredRoadFromCgsID(CgsID, bool, BrnGui::RoadSignIcon::ESignColour);

	// BrnRoadSignIconManager.h:125
	void DisplayPost(bool);

	// BrnRoadSignIconManager.h:130
	BrnGui::ERoadIcon FindRoadFromName(const char *);

	// BrnRoadSignIconManager.h:135
	void SetScreenPosition(Vector2);

	// BrnRoadSignIconManager.h:140
	void SetColour(BrnGui::RoadSignIcon::ESignColour);

	// BrnRoadSignIconManager.h:145
	void SetScale(Vector2);

}

// BrnRoadSignIconManager.h:51
void BrnGui::RoadSignIcon::RoadSignIcon() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRoadSignIconManager.h:183
struct BrnGui::RoadSignIconManager {
private:
	// BrnRoadSignIconManager.h:254
	extern const float32_t KF_ZOOM_RANGE;

	// BrnRoadSignIconManager.h:255
	extern const float32_t KF_ZOOM_ADJUST;

	// BrnRoadSignIconManager.h:256
	extern const float32_t KF_MIN_SCALE_FACTOR;

	// BrnRoadSignIconManager.h:257
	extern const float32_t KF_MAX_SCALE_FACTOR;

	// BrnRoadSignIconManager.h:258
	extern const float32_t KF_MIN_VIEW_LERP;

	// BrnRoadSignIconManager.h:259
	extern const float32_t KF_MAX_VIEW_LERP;

	// BrnRoadSignIconManager.h:261
	extern float32_t KF_SD_MIN_SCALE_FACTOR;

	// BrnRoadSignIconManager.h:262
	extern float32_t KF_SD_MAX_SCALE_FACTOR;

	// BrnRoadSignIconManager.h:263
	extern float32_t KF_SD_MIN_VIEW_LERP;

	// BrnRoadSignIconManager.h:264
	extern float32_t KF_SD_MAX_VIEW_LERP;

	// BrnRoadSignIconManager.h:266
	extern const char * mpacStreetPrefix;

	// BrnRoadSignIconManager.h:268
	BrnGui::RoadSignIcon[64] mIcons;

	// BrnRoadSignIconManager.h:269
	CgsGui::ObjectController *[64] mapObjectController;

	// BrnRoadSignIconManager.h:270
	BrnGui::GuiCache * mpGuiCache;

	// BrnRoadSignIconManager.h:271
	bool mbIconsTransformed;

	// BrnRoadSignIconManager.h:272
	bool mbComponentVisible;

	// BrnRoadSignIconManager.h:273
	float32_t mfZoomFactor;

	// BrnRoadSignIconManager.h:274
	BrnStreetData::ScoreType meRoadRuleType;

	// BrnRoadSignIconManager.h:275
	StateInterface * mpStateInterface;

public:
	// BrnRoadSignIconManager.h:187
	void Construct();

	// BrnRoadSignIconManager.h:193
	void Prepare(StateInterface *, BrnGui::GuiCache *);

	// BrnRoadSignIconManager.h:197
	void ReleaseResources();

	// BrnRoadSignIconManager.h:201
	// Declaration
	void Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRoadSignIconManager.cpp:435
		using namespace rw::math;

	}

	// BrnRoadSignIconManager.h:207
	BrnGui::RoadSignIcon * GetIcon(int32_t);

	// BrnRoadSignIconManager.h:211
	void AppendExpectedComponents();

	// BrnRoadSignIconManager.h:217
	void GetRoadSignIconPositions(Vector2 *, int32_t *);

	// BrnRoadSignIconManager.h:222
	const char * GetIconNameAtIndex(int32_t) const;

	// BrnRoadSignIconManager.h:226
	void SetupComponent();

	// BrnRoadSignIconManager.h:231
	void SetRoadRuleBatchData(const GuiEventRoadRuleBatchDataResponse *);

	// BrnRoadSignIconManager.h:236
	void SetRoadIconFilter(BrnStreetData::ScoreType);

	// BrnRoadSignIconManager.h:240
	int32_t GetNumIcons() const;

	// BrnRoadSignIconManager.h:245
	void SetSignsVisible(bool);

	// BrnRoadSignIconManager.h:250
	void SetZoomFactor(float32_t);

}

// BrnRoadSignIconManager.h:51
struct BrnGui::RoadSignIcon : public CgsGui::GuiComponent {
	// BrnRoadSignIconManager.h:148
	Vector2 mv2WorldPos;

	// BrnRoadSignIconManager.h:149
	BrnGui::RoadSignIcon::EIconType meIconType;

	// BrnRoadSignIconManager.h:150
	CgsID mRoadId;

	// BrnRoadSignIconManager.h:151
	bool mbShowPost;

	// BrnRoadSignIconManager.h:152
	BrnGui::RoadSignIcon::ESignColour meSignColour;

	// BrnRoadSignIconManager.h:153
	bool mbOfflineTimeRuled;

	// BrnRoadSignIconManager.h:154
	bool mbOfflineCrashRuled;

	// BrnRoadSignIconManager.h:155
	bool mbOnlineTimeRuled;

	// BrnRoadSignIconManager.h:156
	bool mbOnlineCrashRuled;

private:
	// BrnRoadSignIconManager.cpp:27
	extern const char *[4] KAPC_SIGN_COLOURS;

	// BrnRoadSignIconManager.cpp:35
	extern const char * mpRoadPrefix;

	// BrnRoadSignIconManager.cpp:36
	extern const char * mpShowSign;

	// BrnRoadSignIconManager.cpp:37
	extern const char * mpTrue;

	// BrnRoadSignIconManager.cpp:38
	extern const char * mpFalse;

	// BrnRoadSignIconManager.cpp:34
	extern const char * mpacRoadFrameName;

	// BrnRoadSignIconManager.cpp:39
	extern const char * mpacRoadColour;

	// BrnRoadSignIconManager.h:169
	bool mbSignVisible;

	// BrnRoadSignIconManager.h:171
	bool mbCommunicateWithApt;

public:
	void RoadSignIcon(const RoadSignIcon &);

	void RoadSignIcon();

	// BrnRoadSignIconManager.cpp:71
	void Construct(const char *, StateInterface *, const char *, bool);

	// BrnRoadSignIconManager.cpp:180
	void SetIcon(BrnGui::ERoadIcon, const rw::math::vpu::Vector2 *, BrnGui::RoadSignIcon::EIconType, CgsID);

	// BrnRoadSignIconManager.cpp:106
	void SetVisible(bool);

	// BrnRoadSignIconManager.cpp:201
	void DisplayRoad(BrnGui::ERoadIcon, bool);

	// BrnRoadSignIconManager.cpp:222
	void DisplayRoad(const char *, bool);

	// BrnRoadSignIconManager.cpp:246
	void DisplayRoadFromCgsID(CgsID, bool);

	// BrnRoadSignIconManager.cpp:278
	void DisplayColouredRoadFromCgsID(CgsID, bool, BrnGui::RoadSignIcon::ESignColour);

	// BrnRoadSignIconManager.cpp:294
	void DisplayPost(bool);

	// BrnRoadSignIconManager.cpp:332
	BrnGui::ERoadIcon FindRoadFromName(const char *);

	// BrnRoadSignIconManager.cpp:135
	void SetScreenPosition(Vector2);

	// BrnRoadSignIconManager.cpp:311
	void SetColour(BrnGui::RoadSignIcon::ESignColour);

	// BrnRoadSignIconManager.cpp:156
	void SetScale(Vector2);

}

// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct RoadSignIcon {
		// BrnRoadSignIconManager.h:53
		enum EIconType {
			E_ICON_TYPE_A = 0,
			E_ICON_TYPE_B = 1,
			E_ICON_TYPE_C = 2,
			E_ICON_TYPE_D = 3,
			E_ICON_TYPE_E = 4,
			E_ICON_TYPE_F = 5,
			E_ICON_TYPE_G = 6,
			E_ICON_TYPE_COUNT = 7,
		}

		// BrnRoadSignIconManager.h:66
		enum ESignColour {
			E_SIGN_COLOUR_GREEN = 0,
			E_SIGN_COLOUR_RED = 1,
			E_SIGN_COLOUR_SILVER = 2,
			E_SIGN_COLOUR_GOLD = 3,
			E_SIGN_COLOUR_COUNT = 4,
		}

	}

}


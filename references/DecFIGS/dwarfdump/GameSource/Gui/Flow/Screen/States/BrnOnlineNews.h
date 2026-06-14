// BrnOnlineNews.h:103
extern int32_t[] maiEventToObserve;

// BrnOnlineNews.h:104
extern const int32_t miNumEventsObserved;

// BrnOnlineNews.h:105
extern sResourceTuple[] maResourceTuplesToLoad;

// BrnOnlineNews.h:106
extern const int32_t miNumResourcesToLoad;

// BrnOnlineNews.h:108
extern const float32_t KF_TIME_TO_SCROLL_ONE_LINE;

// BrnOnlineNews.h:109
extern const float32_t KF_AXIS_DEAD_ZONE;

// BrnOnlineNews.h:112
extern char[] KAC_TOGGLE_TEXT_COMPONENT;

// BrnOnlineNews.h:113
extern char[] KAC_NEWS_TEXT_COMPONENT;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineNews {
		// BrnOnlineNews.h:51
		enum EToggleItems {
			E_TOGGLE_ITEM_NEWS = 0,
			E_TOGGLE_ITEM_TOS = 1,
			E_TOGGLE_ITEM_COUNT = 2,
		}

		// BrnOnlineNews.h:59
		enum EDownloadState {
			E_DOWNLOAD_STATE_DOWNLOADING = 0,
			E_DOWNLOAD_STATE_DONE = 1,
			E_DOWNLOAD_STATE_FAILED = 2,
			E_DOWNLOAD_STATE_COUNT = 3,
		}

		// BrnOnlineNews.h:91
		enum ESubState {
			E_SUBSTATE_LOADING_SCREEN = 0,
			E_SUBSTATE_LOADING_COMPONENTS = 1,
			E_SUBSTATE_SELECTING_PARAMS = 2,
			E_SUBSTATE_COUNT = 3,
		}

	}

}

// BrnOnlineNews.h:47
struct BrnGui::OnlineNews : public CgsGui::State {
private:
	// BrnOnlineNews.h:101
	extern const int32_t KI_MAX_CREATE_GAME_OPTIONS = 6;

	// BrnOnlineNews.cpp:30
	extern const int32_t[8] maiEventToObserve;

	// BrnOnlineNews.cpp:42
	extern const int32_t miNumEventsObserved = 8;

	// BrnOnlineNews.cpp:44
	extern const sResourceTuple[1] maResourceTuplesToLoad;

	// BrnOnlineNews.cpp:49
	extern const int32_t miNumResourcesToLoad = 1;

	// BrnOnlineNews.cpp:79
	extern const float32_t KF_TIME_TO_SCROLL_ONE_LINE;

	// BrnOnlineNews.cpp:80
	extern const float32_t KF_AXIS_DEAD_ZONE;

	// BrnOnlineNews.cpp:52
	extern const char[11] KAC_TOGGLE_TEXT_COMPONENT;

	// BrnOnlineNews.cpp:53
	extern const char[9] KAC_NEWS_TEXT_COMPONENT;

	// BrnOnlineNews.cpp:56
	extern const char *[2] KPAC_TOGGLE_TEXT_STRING_ID;

	// BrnOnlineNews.cpp:62
	extern const char *[2][3] KPAC_NEWS_TEXT_STRING_ID;

	// BrnOnlineNews.h:119
	BrnGui::OnlineNews::ESubState meSubState;

	// BrnOnlineNews.h:122
	BrnGui::TextField mToggleText;

	// BrnOnlineNews.h:123
	BrnGui::TextField mNewsText;

	// BrnOnlineNews.h:125
	BrnGui::GuiCache * mpGuiCache;

	// BrnOnlineNews.h:127
	BrnGui::OnlineNews::EToggleItems meCurrentToggleItem;

	// BrnOnlineNews.h:129
	BrnGui::OnlineNews::EDownloadState[2] maeDownloadState;

	// BrnOnlineNews.h:131
	float32_t mfScrollAmount;

	// BrnOnlineNews.h:132
	float32_t mfLastAxisValue;

public:
	// BrnOnlineNews.cpp:99
	virtual void OnEnter();

	// BrnOnlineNews.cpp:264
	virtual void OnLeave();

	// BrnOnlineNews.cpp:140
	// Declaration
	virtual void Update() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnOnlineNews.cpp:239
		using namespace CgsDev::Message;

	}

	// BrnOnlineNews.h:82
	virtual void GetResourcesToLoad(const sResourceTuple **, uint32_t *) const;

private:
	// BrnOnlineNews.cpp:326
	void HandleControllerInput(const GuiEventControllerInputPressed *);

	// BrnOnlineNews.cpp:356
	void HandleControllerInputSelectParams(const GuiEventControllerInputPressed *);

	// BrnOnlineNews.cpp:441
	void HandleGuiCacheEvent(const GuiEventCache *);

	// BrnOnlineNews.cpp:463
	void HandleNewsAndTOSEvent(const GuiEventNetworkNewsAndTOS *);

	// BrnOnlineNews.cpp:407
	void HandleControllerAxis(const GuiEventControllerAxis *);

	// BrnOnlineNews.cpp:283
	void CheckForCompletedLoads();

	// BrnOnlineNews.cpp:511
	void ShowText();

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct OnlineNews {
	public:
		OnlineNews();

	private:
		// BrnOnlineNews.h:103
		extern int32_t[] maiEventToObserve;

		// BrnOnlineNews.h:104
		extern const int32_t miNumEventsObserved;

		// BrnOnlineNews.h:105
		extern sResourceTuple[] maResourceTuplesToLoad;

		// BrnOnlineNews.h:106
		extern const int32_t miNumResourcesToLoad;

		// BrnOnlineNews.h:108
		extern const float32_t KF_TIME_TO_SCROLL_ONE_LINE;

		// BrnOnlineNews.h:109
		extern const float32_t KF_AXIS_DEAD_ZONE;

		// BrnOnlineNews.h:112
		extern char[] KAC_TOGGLE_TEXT_COMPONENT;

		// BrnOnlineNews.h:113
		extern char[] KAC_NEWS_TEXT_COMPONENT;

	}

}

// BrnOnlineNews.h:47
void BrnGui::OnlineNews::OnlineNews() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


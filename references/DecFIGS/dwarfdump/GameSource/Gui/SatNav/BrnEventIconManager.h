// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct EventIconManager {
		// BrnEventIconManager.h:48
		struct EventIcon2D {
			// BrnEventIconManager.h:50
			float32_t mfEventIconPosX;

			// BrnEventIconManager.h:51
			float32_t mfEventIconPosY;

			// BrnEventIconManager.h:52
			uint32_t muEventID;

		}

	}

}

// BrnEventIconManager.h:44
struct BrnGui::EventIconManager {
	// BrnEventIconManager.h:55
	extern const int32_t KI_MAX_2DEVENTICONS = 175;

private:
	// BrnEventIconManager.h:104
	BrnGui::EventIconManager::EventIcon2D[175] ma2DEventIcons;

	// BrnEventIconManager.h:105
	int32_t miNumEventIcons;

	// BrnEventIconManager.h:107
	BrnGui::GuiCache * mpGuiCache;

public:
	// BrnEventIconManager.h:59
	void Construct();

	// BrnEventIconManager.h:69
	void Prepare(StateInterface *, BrnGui::GuiCache *, float32_t, BrnGui::GuiEventDrawEventIcons::EIconDisplayType, uint32_t *, int32_t);

	// BrnEventIconManager.h:73
	void Update();

	// BrnEventIconManager.h:79
	void Update2DIcons(const BrnGui::EventIconManager::EventIcon2D *, int32_t);

	// BrnEventIconManager.h:85
	void GetEventIconPositions(Vector2 *, int32_t *);

	// BrnEventIconManager.h:90
	uint32_t GetEventIDForIconIndex(int32_t) const;

	// BrnEventIconManager.h:96
	void ReleaseResources(StateInterface *, float32_t);

	// BrnEventIconManager.h:100
	void Destruct();

}

// BrnEventIconManager.h:55
extern const int32_t KI_MAX_2DEVENTICONS = 175;

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct EventIconManager {
		// BrnEventIconManager.h:48
		struct EventIcon2D {
			// BrnEventIconManager.h:50
			float32_t mfEventIconPosX;

			// BrnEventIconManager.h:51
			float32_t mfEventIconPosY;

			// BrnEventIconManager.h:52
			uint32_t muEventID;

		}

	}

}


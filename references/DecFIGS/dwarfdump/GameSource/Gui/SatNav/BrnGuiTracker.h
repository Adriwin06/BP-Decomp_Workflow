// BrnGuiEventTypes.h:28
namespace BrnGui {
	// Declaration
	struct GuiTracker {
		// BrnGuiTracker.h:58
		struct TrackerInfo {
			// BrnGuiTracker.h:59
			BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType meIconType;

			// BrnGuiTracker.h:60
			Vector3 mv3TargetPosition;

			// BrnGuiTracker.h:61
			uint16_t muTargetSectionId;

			// BrnGuiTracker.h:62
			uint32_t mTargetJunctionId;

			// BrnGuiTracker.h:63
			LandmarkIndex mTargetLandmarkIndex;

		}

	}

}

// BrnGuiTracker.h:48
struct BrnGui::GuiTracker {
	// BrnGuiTracker.h:52
	extern const int32_t KI_MAX_SATNAV_ROUTESEGMENTS = 5120;

	// BrnGuiTracker.h:53
	extern const int32_t KI_TRACKER_STACK_SIZE = 64;

private:
	// BrnGuiTracker.h:149
	bool mbIsTrackerActive;

	// BrnGuiTracker.h:150
	bool mbShouldRequestNewRoute;

	// BrnGuiTracker.h:151
	bool mbIsEntireRoute;

	// BrnGuiTracker.h:152
	bool mbIsRouteInfoAvailable;

	// BrnGuiTracker.h:154
	int32_t miNumTrackedItems;

	// BrnGuiTracker.h:155
	BrnGui::GuiTracker::TrackerInfo[64] mTrackedItems;

	// BrnGuiTracker.h:156
	BrnGui::GuiTracker::TrackerInfo mPlayersTrackerInfo;

	// BrnGuiTracker.h:158
	GuiEventRouteInformation[64] mRouteInformation;

	// BrnGuiTracker.h:159
	int32_t miNumReceivedTrackedRoutes;

	// BrnGuiTracker.h:161
	Array<rw::math::vpu::Vector3,5120u> mNodeList;

	// BrnGuiTracker.h:163
	int32_t miCurrentlyTrackedIndex;

	// BrnGuiTracker.h:165
	uint16_t muPlayersNewSection;

	// BrnGuiTracker.h:166
	float32_t mfRouteDistance;

	// BrnGuiTracker.h:168
	LandmarkIndex[64] maActivelyTrackedIcons;

	// BrnGuiTracker.h:170
	BrnGui::GuiCache * mpGuiCache;

public:
	// BrnGuiTracker.h:68
	void Construct();

	// BrnGuiTracker.h:75
	void RecEvent(const CgsModule::Event *, int32_t, int32_t);

	// BrnGuiTracker.h:79
	void GenerateRouteData();

	// BrnGuiTracker.h:83
	void RegenerateRouteData();

	// BrnGuiTracker.h:87
	bool IsTrackerActive() const;

	// BrnGuiTracker.h:91
	bool IsNewRouteNeeded() const;

	// BrnGuiTracker.h:95
	bool IsEntireRoute() const;

	// BrnGuiTracker.h:99
	bool IsRouteInfoAvailable() const;

	// BrnGuiTracker.h:104
	const BrnGui::GuiTracker::TrackerInfo * GetTrackerInformation(int32_t) const;

	// BrnGuiTracker.h:108
	void ForceRouteRefresh();

	// BrnGuiTracker.h:112
	int32_t GetCurrentlyTrackedIndex() const;

	// BrnGuiTracker.h:116
	int32_t GetNumTracked() const;

	// BrnGuiTracker.h:120
	const Array<rw::math::vpu::Vector3,5120u> * GetRouteData() const;

	// BrnGuiTracker.h:124
	int32_t GetNumActivelyTrackedLandmarks();

	// BrnGuiTracker.h:128
	const LandmarkIndex * GetActivelyTrackedLandmarks();

	// BrnGuiTracker.h:134
	void SetNodes(const rw::math::vpu::Vector3 *, int32_t);

	// BrnGuiTracker.h:138
	void ClearTracker();

	// BrnGuiTracker.h:142
	void Update(CgsGui::CgsGuiModuleIO::OutputBuffer *);

	// BrnGuiTracker.h:145
	float32_t GetRouteDistance() const;

private:
	// BrnGuiTracker.h:177
	void ContructRouteNodeFromTrackedItem(const BrnGui::GuiTracker::TrackerInfo *, CalculateRoute *, int32_t);

}

// BrnGuiTracker.h:52
extern const int32_t KI_MAX_SATNAV_ROUTESEGMENTS = 5120;

// BrnGuiTracker.h:53
extern const int32_t KI_TRACKER_STACK_SIZE = 64;

// BrnGuiTracker.h:191
struct BrnGui::GuiEventSetTracker : public GuiEvent<229> {
	// BrnGuiTracker.h:194
	BrnGui::GuiTracker::TrackerInfo[64] mTrackedDataInfo;

	// BrnGuiTracker.h:195
	int32_t miNumTrackedItems;

	// BrnGuiTracker.h:196
	int32_t miCurrentlyTrackedIndex;

	// BrnGuiTracker.h:197
	bool mbIsEntireRoute;

}

// CgsGuiShared.h:45
namespace BrnGui {
	// Declaration
	struct GuiTracker {
		// BrnGuiTracker.h:58
		struct TrackerInfo {
			// BrnGuiTracker.h:59
			BrnGui::GuiEventUpdateSatNav::SatNavIconInfo::SatNavIconType meIconType;

			// BrnGuiTracker.h:60
			Vector3 mv3TargetPosition;

			// BrnGuiTracker.h:61
			uint16_t muTargetSectionId;

			// BrnGuiTracker.h:62
			uint32_t mTargetJunctionId;

			// BrnGuiTracker.h:63
			LandmarkIndex mTargetLandmarkIndex;

		}

	}

}

// BrnGuiTracker.h:209
struct BrnGui::GuiEventForceUpdateTracker : public GuiEvent<230> {
	// BrnGuiTracker.h:211
	uint16_t muPlayersNewSection;

}


// BrnTrafficSharedConstants.h:26
namespace BrnTraffic {
	// BrnTrafficDebugComponent.cpp:128
	RGBA Lerp(const RGBA &, const RGBA &, float32_t);

	// BrnTrafficDebugComponent.cpp:3877
	extern Vector3 GetIntersection(Frustum &, CgsGeometric::Frustum::PlaneId, CgsGeometric::Frustum::PlaneId, CgsGeometric::Frustum::PlaneId);

	// BrnTrafficDebugComponent.cpp:3817
	extern void DrawFrustum(Frustum &);

	// BrnTrafficDebugComponent.cpp:53
	const float32_t KF_PARAM_DEBUG_SIZE;

	// BrnTrafficDebugComponent.cpp:54
	const float32_t KF_PARAM_LINK_OFFSET;

	// BrnTrafficDebugComponent.cpp:56
	const float32_t KF_SECTION_CURVE_PARAM_TESS;

	// BrnTrafficDebugComponent.cpp:58
	const float32_t KF_DBG_RENDER_CULL_DISTANCE;

	// BrnTrafficDebugComponent.cpp:60
	const float32_t KF_KILLZONE_RENDER_HEIGHT;

	// BrnTrafficDebugComponent.cpp:62
	const RGBA KU_SEGMENT_COLOUR;

	// BrnTrafficDebugComponent.cpp:63
	const RGBA KU_SECTION_COLOUR;

	// BrnTrafficDebugComponent.cpp:64
	const RGBA KU_SECTION_CURVE_COLOUR;

	// BrnTrafficDebugComponent.cpp:65
	const RGBA KU_SPLITTER_COLOUR;

	// BrnTrafficDebugComponent.cpp:66
	const RGBA KU_PARAM_COLOUR;

	// BrnTrafficDebugComponent.cpp:67
	const RGBA KU_PARAM_VEHICLE_LINK_COLOUR;

	// BrnTrafficDebugComponent.cpp:68
	const RGBA KU_PARAM_PARAM_LINK_FWD_COLOUR;

	// BrnTrafficDebugComponent.cpp:69
	const RGBA KU_PARAM_PARAM_LINK_BACK_COLOUR;

	// BrnTrafficDebugComponent.cpp:70
	const RGBA K_STOPLINE_STOP_COLOUR;

	// BrnTrafficDebugComponent.cpp:71
	const RGBA K_STOPLINE_GO_COLOUR;

	// BrnTrafficDebugComponent.cpp:78
	const RGBA KU_VEHICLE_COLOUR_CAR;

	// BrnTrafficDebugComponent.cpp:79
	const RGBA KU_VEHICLE_COLOUR_VAN;

	// BrnTrafficDebugComponent.cpp:80
	const RGBA KU_VEHICLE_COLOUR_BUS;

	// BrnTrafficDebugComponent.cpp:81
	const RGBA KU_VEHICLE_COLOUR_TRAIN;

	// BrnTrafficDebugComponent.cpp:83
	const float32_t KF_ARROWHEAD_PROPORTION;

	// BrnTrafficDebugComponent.cpp:84
	const float32_t KF_MAX_ARROWHEAD_SIZE;

	// BrnTrafficDebugComponent.cpp:86
	const float32_t KF_HULLMAP_TOP;

	// BrnTrafficDebugComponent.cpp:87
	const float32_t KF_HULLMAP_BOTTOM;

	// BrnTrafficDebugComponent.cpp:88
	const float32_t KF_HULLMAP_LEFT;

	// BrnTrafficDebugComponent.cpp:89
	const float32_t KF_HULLMAP_RIGHT;

	// BrnTrafficDebugComponent.cpp:90
	const RGBA KU_HULLMAP_LINE_COLOUR;

	// BrnTrafficDebugComponent.cpp:91
	const RGBA KU_HULLMAP_ACTIVE_COLOUR;

	// BrnTrafficDebugComponent.cpp:93
	const float32_t KF_DEBUG_TEXT_SIZE;

	// BrnTrafficDebugComponent.cpp:95
	const StringList[8] KA_AIRRAMTYPE_NAMES;

}


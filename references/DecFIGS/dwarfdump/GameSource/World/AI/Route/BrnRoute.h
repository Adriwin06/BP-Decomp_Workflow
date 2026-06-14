// BrnRoute.h:26
namespace BrnAI {
	struct BoundaryLine;

	struct Portal;

	struct AISection;

	struct SectionResetPair;

	struct AISectionPointMap;

	struct AISectionsData;

}

// BrnRoute.h:153
extern const int32_t KI_MAX_NODES = 320;

// BrnRoute.h:26
namespace BrnAI {
	struct BoundaryLine;

	struct Portal;

	struct AISection;

}

// BrnRoute.h:26
namespace BrnAI {
	struct RouteNode;

	// Declaration
	struct Route {
		// BrnRoute.h:104
		enum Status {
			E_STATUS_UNINITIALISED = 0,
			E_STATUS_COMPLETE = 1,
			E_STATUS_PARTIAL = 2,
			E_STATUS_BLOCKED = 3,
		}

	}

	struct BoundaryLine;

	struct Portal;

	struct AISection;

	struct SectionResetPair;

	struct AISectionPointMap;

	struct AISectionsData;

	struct Aggressiveness;

	struct HardNoGoMap;

	struct AICar;

	struct AIDriver;

	struct RaceBalancingManager;

	struct SectionData;

	struct RacingLine;

	struct RacingLineGenerator;

	struct SteeringFan;

	struct NearbyVehicles;

	struct NearbyVehicle;

	struct AIAggression;

	struct RaceBalancingGraph;

	struct RaceBalancingRoute;

	struct RaceBalancingDebugComponent;

	struct AIModule;

}

// BrnRoute.h:50
struct BrnAI::RouteNode {
private:
	// BrnRoute.h:85
	float32_t mfPositionX;

	// BrnRoute.h:86
	float32_t mfPositionZ;

	// BrnRoute.h:87
	float32_t mfDistanceLeft;

	// BrnRoute.h:88
	uint16_t muSectionIndex;

	// BrnRoute.h:89
	uint8_t muPortalIndex;

public:
	// BrnRoute.h:57
	void Construct(float32_t, float32_t, uint16_t, uint8_t);

	// BrnRoute.h:60
	float32_t GetPositionX() const;

	// BrnRoute.h:63
	float32_t GetPositionZ() const;

	// BrnRoute.h:66
	Vector2 GetPosition() const;

	// BrnRoute.h:69
	Vector3 GetPositionWithZeroY() const;

	// BrnRoute.h:72
	uint16_t GetSectionIndex() const;

	// BrnRoute.h:75
	uint8_t GetPortalIndex() const;

	// BrnRoute.h:78
	float32_t GetDistanceLeft() const;

	// BrnRoute.h:82
	void SetDistanceLeft(float32_t);

}

// BrnRoute.h:101
struct BrnAI::Route {
	// BrnRoute.h:153
	extern const int32_t KI_MAX_NODES = 320;

	// BrnRoute.h:154
	extern const int32_t KI_MAX_WAYPOINTS = 16;

private:
	// BrnRoute.h:157
	RouteNode[320] maNodes;

	// BrnRoute.h:158
	int32_t miNodeCount;

	// BrnRoute.h:160
	int32_t miDefaultStartNode;

	// BrnRoute.h:161
	BrnAI::Route::Status meStatus;

public:
	// BrnRoute.h:113
	void Construct();

	// BrnRoute.h:117
	bool Prepare(int32_t);

	// BrnRoute.h:120
	void Destruct();

	// BrnRoute.h:124
	void Construct(const Route *);

	// BrnRoute.h:128
	bool AddNode(const RouteNode &);

	// BrnRoute.h:131
	int32_t GetNodeCount() const;

	// BrnRoute.h:134
	int32_t GetDefaultStartNode() const;

	// BrnRoute.h:138
	const RouteNode * GetNode(int32_t) const;

	// BrnRoute.h:141
	BrnAI::Route::Status GetStatus() const;

	// BrnRoute.h:144
	bool IsInitialised() const;

	// BrnRoute.h:148
	void SetStatus(BrnAI::Route::Status);

	// BrnRoute.h:151
	float32_t GetDistance() const;

}

// BrnRoute.h:26
namespace BrnAI {
	struct RouteNode;

	// Declaration
	struct Route {
		// BrnRoute.h:104
		enum Status {
			E_STATUS_UNINITIALISED = 0,
			E_STATUS_COMPLETE = 1,
			E_STATUS_PARTIAL = 2,
			E_STATUS_BLOCKED = 3,
		}

	}

	struct BoundaryLine;

	struct Portal;

	struct AISection;

	struct SectionResetPair;

	struct AISectionPointMap;

	struct AISectionsData;

}

// BrnRoute.h:26
namespace BrnAI {
}

// BrnRoute.h:26
namespace BrnAI {
	// Declaration
	struct AISectionsResourceType {
	public:
		AISectionsResourceType();

	}

}

// BrnRoute.h:26
namespace BrnAI {
	struct RouteNode;

	// Declaration
	struct Route {
		// BrnRoute.h:104
		enum Status {
			E_STATUS_UNINITIALISED = 0,
			E_STATUS_COMPLETE = 1,
			E_STATUS_PARTIAL = 2,
			E_STATUS_BLOCKED = 3,
		}

	}

	struct BoundaryLine;

	struct Portal;

	struct AISection;

}

// BrnRoute.h:26
namespace BrnAI {
	struct RouteNode;

	// Declaration
	struct Route {
		// BrnRoute.h:104
		enum Status {
			E_STATUS_UNINITIALISED = 0,
			E_STATUS_COMPLETE = 1,
			E_STATUS_PARTIAL = 2,
			E_STATUS_BLOCKED = 3,
		}

	}

	struct BoundaryLine;

	struct Portal;

	struct AISection;

	struct SectionResetPair;

	struct AISectionPointMap;

	struct AISectionsData;

	struct Aggressiveness;

	struct HardNoGoMap;

	struct AICar;

	struct AIDriver;

	struct RaceBalancingManager;

	struct RacingLineNode;

	struct SectionData;

	struct RacingLine;

	struct AStarNode;

	struct AStarNodePool;

	struct AStar;

	struct RouteMapDebugComponent;

	struct SectionAndPortalIndices;

	struct RacingLineGenerator;

	struct SteeringFan;

	struct NearbyVehicles;

	struct NearbyVehicle;

	struct AutoTunedPIDDebugData;

	struct AutoTunedPID;

	struct AIAggression;

	struct ResetData;

	struct RaceBalancingGraph;

	struct RaceBalancingRoute;

	struct RaceBalancingDebugComponent;

	struct RouteRequestManager;

	struct BuzzBy;

	struct RouteMapModule;

	struct AIDebugComponent;

	void GetHNGInterpFast(Vector2, Vector2, Vector2, Vector2, Vector2);

}

// BrnRoute.h:26
namespace BrnAI {
	struct RouteNode;

	// Declaration
	struct Route {
		// BrnRoute.h:104
		enum Status {
			E_STATUS_UNINITIALISED = 0,
			E_STATUS_COMPLETE = 1,
			E_STATUS_PARTIAL = 2,
			E_STATUS_BLOCKED = 3,
		}

	}

	struct BoundaryLine;

	struct Portal;

	struct AISection;

	struct SectionResetPair;

	struct AISectionPointMap;

	struct AISectionsData;

	struct Aggressiveness;

	struct HardNoGoMap;

	struct AICar;

	struct AIDriver;

	struct RaceBalancingManager;

	struct SectionData;

	struct RacingLine;

	struct RacingLineGenerator;

	struct SteeringFan;

	struct NearbyVehicles;

	struct NearbyVehicle;

	struct AIAggression;

	struct RaceBalancingGraph;

	struct RaceBalancingRoute;

	struct RaceBalancingDebugComponent;

}

// BrnRoute.h:26
namespace BrnAI {
	struct RouteNode;

	// Declaration
	struct Route {
		// BrnRoute.h:104
		enum Status {
			E_STATUS_UNINITIALISED = 0,
			E_STATUS_COMPLETE = 1,
			E_STATUS_PARTIAL = 2,
			E_STATUS_BLOCKED = 3,
		}

	}

	struct BoundaryLine;

	struct Portal;

	struct AISection;

	struct SectionResetPair;

	struct AISectionPointMap;

	struct AISectionsData;

	struct Aggressiveness;

	struct HardNoGoMap;

	struct AICar;

	struct AIDriver;

	struct RaceBalancingManager;

	struct SectionData;

	struct RacingLine;

	struct AStarNode;

	struct AStarNodePool;

	struct AStar;

	struct RacingLineGenerator;

	struct SteeringFan;

	struct NearbyVehicles;

	struct NearbyVehicle;

	struct AIAggression;

	struct ResetData;

	struct RaceBalancingGraph;

	struct RaceBalancingRoute;

	// Declaration
	struct RaceBalancingDebugComponent {
	public:
		RaceBalancingDebugComponent();

	}

	// Declaration
	struct AIModule {
	public:
		~AIModule();

		AIModule();

	}

	struct RouteRequestManager;

	struct BuzzBy;

	// Declaration
	struct RouteMapModule {
	public:
		~RouteMapModule();

		RouteMapModule();

	}

}


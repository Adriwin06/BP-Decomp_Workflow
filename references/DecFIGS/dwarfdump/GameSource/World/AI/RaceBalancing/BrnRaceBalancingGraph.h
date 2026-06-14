// BrnRaceBalancingGraph.h:43
struct BrnAI::RaceBalancingGraph {
	// BrnRaceBalancingGraph.h:45
	extern const int32_t KI_GRAPH_POINT_COUNT = 8;

private:
	// BrnRaceBalancingGraph.h:62
	float32_t[2][8] mafSpeedRatios;

public:
	// BrnRaceBalancingGraph.h:48
	void Construct();

	// BrnRaceBalancingGraph.h:54
	void SetPoint(BrnAI::GraphType, int32_t, float32_t);

	// BrnRaceBalancingGraph.h:59
	float32_t ComputeSpeedRatio(BrnAI::GraphType, float32_t) const;

}

// BrnRaceBalancingGraph.h:45
extern const int32_t KI_GRAPH_POINT_COUNT = 8;


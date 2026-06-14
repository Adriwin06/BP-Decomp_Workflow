// simulationworkspace.h:58
struct rw::physics::SimulationWorkspace {
public:
	// simulationworkspace.h:68
	void SimulationWorkspace();

	// simulationworkspace.h:72
	void ~SimulationWorkspace();

	// simulationworkspace.h:78
	ResourceDescriptor GetResourceDescriptor(uint32_t, uint32_t, uint32_t);

	// simulationworkspace.h:84
	SimulationWorkspace * Initialize(const Resource &, uint32_t, uint32_t, uint32_t);

	// simulationworkspace.h:88
	RwBool Release();

}


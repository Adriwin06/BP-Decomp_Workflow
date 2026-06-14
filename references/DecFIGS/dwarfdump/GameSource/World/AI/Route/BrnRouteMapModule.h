// BrnRouteMapModule.h:48
struct BrnAI::SectionAndPortalIndices {
	// BrnRouteMapModule.h:50
	uint32_t muSection;

	// BrnRouteMapModule.h:51
	uint32_t muPortal;

}

// BrnRouteMapModule.h:68
struct BrnAI::RouteMapModule : public CgsModule::ModuleSingleBuffered {
private:
	// BrnRouteMapModule.h:109
	AStar mAStar;

	// BrnRouteMapModule.h:110
	ResourcePtr<BrnAI::AISectionsData> mAISectionsData;

	// BrnRouteMapModule.h:111
	uint16_t muEventId;

	// BrnRouteMapModule.h:112
	uint16_t muOwnerId;

	// BrnRouteMapModule.h:115
	RouteMapDebugComponent mRoupeMapDebugComponent;

public:
	// BrnRouteMapModule.cpp:46
	void Construct(BrnAI::AIModule *);

	// BrnRouteMapModule.cpp:67
	virtual bool Prepare(ResourceHandle);

	// BrnRouteMapModule.cpp:140
	virtual bool Release();

	// BrnRouteMapModule.cpp:152
	virtual void Destruct();

	// BrnRouteMapModule.cpp:90
	virtual void Update(IOBufferStack *, IOBufferStack *, const InputBuffer *, OutputBuffer *);

private:
	// BrnRouteMapModule.cpp:171
	void ProcessRaceRoute(const RaceRouteRequest *, OutputBuffer::RouteResponseQueue *);

	// BrnRouteMapModule.cpp:231
	void ProcessExtrapolatedRoute(const ExtrapolatedRouteRequest *, OutputBuffer::RouteResponseQueue *);

}

// BrnRouteMapModule.h:68
void BrnAI::RouteMapModule::~RouteMapModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRouteMapModule.h:68
void BrnAI::RouteMapModule::RouteMapModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


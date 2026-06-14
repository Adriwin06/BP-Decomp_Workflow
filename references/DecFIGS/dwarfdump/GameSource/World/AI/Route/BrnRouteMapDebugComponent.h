// BrnRouteMapDebugComponent.h:204
extern const float32_t KF_NODE_SIZE;

// BrnRouteMapDebugComponent.h:205
extern const float32_t KF_ROUTE_NODE_SIZE;

// BrnRouteMapDebugComponent.h:206
extern const float32_t KF_ASTAR_NODE_SIZE;

// BrnRouteMapDebugComponent.h:207
extern const float32_t KF_PORTAL_CULL_DIST;

// BrnRouteMapDebugComponent.h:208
extern const float32_t KF_HNG_CULL_DIST;

// BrnRouteMapDebugComponent.h:210
extern const float32_t KF_PORTAL_CULL_DIST_SQ;

// BrnRouteMapDebugComponent.h:211
extern const float32_t KF_HNG_CULL_DIST_SQ;

// BrnRouteMapDebugComponent.h:213
extern const RGBA K_NORMAL_COLOUR;

// BrnRouteMapDebugComponent.h:214
extern const RGBA K_FREEWAY_COLOUR;

// BrnRouteMapDebugComponent.h:215
extern const RGBA K_DANGEROUS_COLOUR;

// BrnRouteMapDebugComponent.h:217
extern const RGBA K_NODE_COLOUR;

// BrnRouteMapDebugComponent.h:219
extern const RGBA K_OPEN_NODE_COLOUR;

// BrnRouteMapDebugComponent.h:220
extern const RGBA K_CLOSED_NODE_COLOUR;

// BrnRouteMapDebugComponent.h:221
extern const RGBA K_ROUTE_LINE_COLOUR;

// BrnRouteMapDebugComponent.h:222
extern const RGBA K_ROUTE_COLOUR;

// BrnRouteMapDebugComponent.h:223
extern const RGBA K_ROUTE_START_COLOUR;

// BrnRouteMapDebugComponent.h:224
extern const RGBA K_ROUTE_END_COLOUR;

// BrnRouteMapDebugComponent.h:226
extern const RGBA K_AI_ROUTE_COLOUR;

// BrnRouteMapDebugComponent.h:53
struct BrnAI::RouteMapDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnRouteMapDebugComponent.cpp:34
	extern const float KF_NODE_SIZE;

	// BrnRouteMapDebugComponent.cpp:35
	extern const float KF_ROUTE_NODE_SIZE;

	// BrnRouteMapDebugComponent.cpp:36
	extern const float KF_ASTAR_NODE_SIZE;

	// BrnRouteMapDebugComponent.cpp:38
	extern const float32_t KF_PORTAL_CULL_DIST;

	// BrnRouteMapDebugComponent.cpp:41
	extern const float32_t KF_HNG_CULL_DIST;

	// BrnRouteMapDebugComponent.cpp:39
	extern const float32_t KF_PORTAL_CULL_DIST_SQ;

	// BrnRouteMapDebugComponent.cpp:42
	extern const float32_t KF_HNG_CULL_DIST_SQ;

	// BrnRouteMapDebugComponent.cpp:44
	extern const RGBA K_NORMAL_COLOUR;

	// BrnRouteMapDebugComponent.h:214
	extern const RGBA K_FREEWAY_COLOUR;

	// BrnRouteMapDebugComponent.h:215
	extern const RGBA K_DANGEROUS_COLOUR;

	// BrnRouteMapDebugComponent.cpp:46
	extern const RGBA K_NODE_COLOUR;

	// BrnRouteMapDebugComponent.cpp:48
	extern const RGBA K_OPEN_NODE_COLOUR;

	// BrnRouteMapDebugComponent.cpp:49
	extern const RGBA K_CLOSED_NODE_COLOUR;

	// BrnRouteMapDebugComponent.cpp:50
	extern const RGBA K_ROUTE_LINE_COLOUR;

	// BrnRouteMapDebugComponent.cpp:51
	extern const RGBA K_ROUTE_COLOUR;

	// BrnRouteMapDebugComponent.cpp:52
	extern const RGBA K_ROUTE_START_COLOUR;

	// BrnRouteMapDebugComponent.cpp:53
	extern const RGBA K_ROUTE_END_COLOUR;

	// BrnRouteMapDebugComponent.cpp:55
	extern const RGBA K_AI_ROUTE_COLOUR;

	// BrnRouteMapDebugComponent.h:228
	BrnAI::RouteMapModule * mpRouteMapModule;

	// BrnRouteMapDebugComponent.h:229
	AISectionsData * mpAISectionsData;

	// BrnRouteMapDebugComponent.h:230
	BrnAI::AIModule * mpAIModule;

	// BrnRouteMapDebugComponent.h:232
	float32_t mfMapScale;

	// BrnRouteMapDebugComponent.h:233
	float32_t mfMapOffsetX;

	// BrnRouteMapDebugComponent.h:234
	float32_t mfMapOffsetY;

	// BrnRouteMapDebugComponent.h:237
	int32_t miCarIndex;

	// BrnRouteMapDebugComponent.h:238
	int32_t miMapColourMode;

	// BrnRouteMapDebugComponent.h:240
	bool mbDrawAISectionMap;

	// BrnRouteMapDebugComponent.h:241
	bool mbHighDetailMap;

	// BrnRouteMapDebugComponent.h:242
	bool mbDrawCarsInMap;

	// BrnRouteMapDebugComponent.h:243
	bool mbDrawCarRoutesInMap;

	// BrnRouteMapDebugComponent.h:244
	bool mbDrawMasterRouteInMap;

	// BrnRouteMapDebugComponent.h:245
	bool mbDrawAStarInMap;

	// BrnRouteMapDebugComponent.h:246
	bool mbCarInfoInMap;

	// BrnRouteMapDebugComponent.h:247
	bool mbDrawDeadEndsInMap;

	// BrnRouteMapDebugComponent.h:248
	bool mbDrawEventBlockSectionsInMap;

	// BrnRouteMapDebugComponent.h:249
	bool mbOnlyDrawOneCar;

	// BrnRouteMapDebugComponent.h:251
	bool mbOnlyDrawDataForPlayerSection;

	// BrnRouteMapDebugComponent.h:252
	bool mbDrawPortals;

	// BrnRouteMapDebugComponent.h:253
	bool mbDrawPortalIds;

	// BrnRouteMapDebugComponent.h:254
	bool mbDrawPortalLines;

	// BrnRouteMapDebugComponent.h:255
	bool mbDrawHNGAsPlanes;

	// BrnRouteMapDebugComponent.h:257
	bool mbShowSectionInfo;

	// BrnRouteMapDebugComponent.h:258
	int32_t miAISectionIndex;

	// BrnRouteMapDebugComponent.h:260
	StringList[3] maColourModeList;

public:
	// BrnRouteMapDebugComponent.cpp:83
	void Construct(BrnAI::RouteMapModule *, BrnAI::AIModule *);

	// BrnRouteMapDebugComponent.cpp:140
	void Destruct();

	// BrnRouteMapDebugComponent.cpp:158
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// BrnRouteMapDebugComponent.cpp:192
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

protected:
	// BrnRouteMapDebugComponent.cpp:249
	virtual const char * GetName() const;

	// BrnRouteMapDebugComponent.cpp:262
	virtual const char * GetPath() const;

	// BrnRouteMapDebugComponent.cpp:275
	virtual void OnActivate();

private:
	// BrnRouteMapDebugComponent.cpp:336
	void DrawAISectionMap(CgsDev::Debug2DImmediateRender *) const;

	// BrnRouteMapDebugComponent.cpp:486
	void DrawDeadEndsInMap(CgsDev::Debug2DImmediateRender *) const;

	// BrnRouteMapDebugComponent.cpp:582
	void DrawCarsInMap(CgsDev::Debug2DImmediateRender *) const;

	// BrnRouteMapDebugComponent.cpp:689
	void DrawRouteInMap(CgsDev::Debug2DImmediateRender *, const Route *, RGBA) const;

	// BrnRouteMapDebugComponent.cpp:713
	void DrawEventBlockSectionsInMap(CgsDev::Debug2DImmediateRender *) const;

	// BrnRouteMapDebugComponent.h:124
	void DrawEventCheckpointsInMap(CgsDev::Debug2DImmediateRender *) const;

	// BrnRouteMapDebugComponent.cpp:765
	void DrawAStarInMap(CgsDev::Debug2DImmediateRender *) const;

	// BrnRouteMapDebugComponent.cpp:869
	void DrawPortals(CgsDev::Debug3DImmediateRender *) const;

	// BrnRouteMapDebugComponent.cpp:931
	void DrawPortalIds(CgsDev::Debug3DImmediateRender *) const;

	// BrnRouteMapDebugComponent.cpp:978
	void DrawHNGAsPlanes(CgsDev::Debug3DImmediateRender *) const;

	// BrnRouteMapDebugComponent.cpp:1022
	void DrawAllPortalGeometry(CgsDev::Debug3DImmediateRender *) const;

	// BrnRouteMapDebugComponent.cpp:1078
	RGBA GetSectionColour(int32_t, const AISection *) const;

	// BrnRouteMapDebugComponent.cpp:1111
	RGBA GetSectionTypeColour(const AISection *) const;

	// BrnRouteMapDebugComponent.cpp:1153
	RGBA GetSectionSpeedColour(const AISection *) const;

	// BrnRouteMapDebugComponent.cpp:1204
	void DrawPoint(CgsDev::Debug2DImmediateRender *, Vector2, float32_t, RGBA) const;

	// BrnRouteMapDebugComponent.cpp:1224
	void DrawX(CgsDev::Debug2DImmediateRender *, Vector2, float32_t, RGBA) const;

	// BrnRouteMapDebugComponent.cpp:1241
	Vector2 ToMapCoords(Vector2) const;

	// BrnRouteMapDebugComponent.cpp:1248
	Vector2 ToMapCoords(Vector3) const;

	// BrnRouteMapDebugComponent.cpp:1265
	void DrawHNGSectionAsPlanes(CgsDev::Debug3DImmediateRender *, uint16_t) const;

	// BrnRouteMapDebugComponent.cpp:1296
	void DrawAISectionInfo(CgsDev::Debug2DImmediateRender *, uint16_t);

	// BrnRouteMapDebugComponent.cpp:1328
	void Advance100SectionsCallback(void *);

	// BrnRouteMapDebugComponent.cpp:1344
	void Back100SectionsCallback(void *);

}

// BrnRoute.h:26
namespace BrnAI {
	// Declaration
	struct RouteMapDebugComponent {
	public:
		RouteMapDebugComponent();

	private:
		// BrnRouteMapDebugComponent.h:204
		extern const float32_t KF_NODE_SIZE;

		// BrnRouteMapDebugComponent.h:205
		extern const float32_t KF_ROUTE_NODE_SIZE;

		// BrnRouteMapDebugComponent.h:206
		extern const float32_t KF_ASTAR_NODE_SIZE;

		// BrnRouteMapDebugComponent.h:207
		extern const float32_t KF_PORTAL_CULL_DIST;

		// BrnRouteMapDebugComponent.h:208
		extern const float32_t KF_HNG_CULL_DIST;

		// BrnRouteMapDebugComponent.h:210
		extern const float32_t KF_PORTAL_CULL_DIST_SQ;

		// BrnRouteMapDebugComponent.h:211
		extern const float32_t KF_HNG_CULL_DIST_SQ;

		// BrnRouteMapDebugComponent.h:213
		extern const RGBA K_NORMAL_COLOUR;

		// BrnRouteMapDebugComponent.h:214
		extern const RGBA K_FREEWAY_COLOUR;

		// BrnRouteMapDebugComponent.h:215
		extern const RGBA K_DANGEROUS_COLOUR;

		// BrnRouteMapDebugComponent.h:217
		extern const RGBA K_NODE_COLOUR;

		// BrnRouteMapDebugComponent.h:219
		extern const RGBA K_OPEN_NODE_COLOUR;

		// BrnRouteMapDebugComponent.h:220
		extern const RGBA K_CLOSED_NODE_COLOUR;

		// BrnRouteMapDebugComponent.h:221
		extern const RGBA K_ROUTE_LINE_COLOUR;

		// BrnRouteMapDebugComponent.h:222
		extern const RGBA K_ROUTE_COLOUR;

		// BrnRouteMapDebugComponent.h:223
		extern const RGBA K_ROUTE_START_COLOUR;

		// BrnRouteMapDebugComponent.h:224
		extern const RGBA K_ROUTE_END_COLOUR;

		// BrnRouteMapDebugComponent.h:226
		extern const RGBA K_AI_ROUTE_COLOUR;

	}

}

// BrnRouteMapDebugComponent.h:53
void BrnAI::RouteMapDebugComponent::RouteMapDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


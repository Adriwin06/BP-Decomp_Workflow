// BrnWorldRegion.h:27
namespace BrnWorld {
	// Declaration
	struct CollisionDebugComponent {
		// BrnCollisionDebugComponent.h:52
		enum EDrawMode {
			E_DRAWMODE_SURFACES = 0,
			E_DRAWMODE_FLAGS = 1,
			E_DRAWMODE_ZONES = 2,
			E_DRAWMODE_TRAFFIC = 3,
			E_DRAWMODE_AISECTION = 4,
			E_DRAWMODE_DRIVABLE = 5,
			E_DRAWMODE_COUNT = 6,
		}

	}

}

// BrnCollisionDebugComponent.h:48
struct BrnWorld::CollisionDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnCollisionDebugComponent.h:118
	StringList[6] maDrawModeList;

	// BrnCollisionDebugComponent.cpp:37
	extern int32_t siDrawMode;

	// BrnCollisionDebugComponent.cpp:39
	extern bool sbDrawNormals;

	// BrnCollisionDebugComponent.cpp:38
	extern bool sbDrawTags;

	// BrnCollisionDebugComponent.cpp:40
	extern int32_t siSurfaceAlpha;

	// BrnCollisionDebugComponent.cpp:31
	extern const BrnWorld::WorldEntityModule * spWorldEntityModule;

public:
	// BrnCollisionDebugComponent.cpp:83
	void Construct(const BrnWorld::WorldEntityModule *);

	// BrnCollisionDebugComponent.cpp:133
	void Destruct();

	// BrnCollisionDebugComponent.cpp:187
	void DrawCollisionPolyCallback(CgsDev::Debug3DImmediateRender *, void *, const rw::math::vpu::Vector3 *, int32_t, Vector3, uint32_t, int32_t);

protected:
	// BrnCollisionDebugComponent.cpp:151
	virtual void OnActivate();

	// BrnCollisionDebugComponent.h:88
	virtual const char * GetName() const;

	// BrnCollisionDebugComponent.h:91
	virtual const char * GetPath() const;

private:
	// BrnCollisionDebugComponent.cpp:311
	RGBA GetPolyColour(CollisionTag, int32_t);

	// BrnCollisionDebugComponent.cpp:459
	RGBA GetTrafficColour(float32_t);

	// BrnCollisionDebugComponent.cpp:518
	RGBA GetSurfaceRenderColour(uint8_t);

	// BrnCollisionDebugComponent.cpp:555
	RGBA GetFlagsRenderColour(CollisionTag);

}

// BrnCollisionDebugComponent.h:48
void BrnWorld::CollisionDebugComponent::CollisionDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


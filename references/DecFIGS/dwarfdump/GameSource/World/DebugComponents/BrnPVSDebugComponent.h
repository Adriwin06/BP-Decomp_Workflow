// BrnWorldRegion.h:27
namespace BrnWorld {
	// Declaration
	struct PVSDebugComponent {
	public:
		// BrnPVSDebugComponent.h:251
		void SetRendering(bool);

		// BrnPVSDebugComponent.h:245
		void SetPvsCentre(Vector3);

	protected:
		// BrnPVSDebugComponent.h:157
		extern const RGBA KU_SPHERE_COLOUR_PLAYER_ZONE;

		// BrnPVSDebugComponent.h:158
		extern const RGBA KU_SPHERE_COLOUR_NON_PLAYER_ZONE;

		// BrnPVSDebugComponent.h:159
		extern const RGBA KU_PLAYER_POSITION_COLOUR;

		// BrnPVSDebugComponent.h:161
		extern const float32_t KR_BOUNDING_SPHERE_TEXT_SIZE;

		// BrnPVSDebugComponent.h:162
		extern const int32_t KI_BOUNDING_SPHERE_SEGMENTS;

	}

	// BrnPVSDebugComponent.h:36
	const int32_t KI_MAX_NUM_COLLISION_ZONES = 256;

}

// BrnPVSDebugComponent.h:157
extern const RGBA KU_SPHERE_COLOUR_PLAYER_ZONE;

// BrnPVSDebugComponent.h:158
extern const RGBA KU_SPHERE_COLOUR_NON_PLAYER_ZONE;

// BrnPVSDebugComponent.h:159
extern const RGBA KU_PLAYER_POSITION_COLOUR;

// BrnPVSDebugComponent.h:161
extern const float32_t KR_BOUNDING_SPHERE_TEXT_SIZE;

// BrnPVSDebugComponent.h:162
extern const int32_t KI_BOUNDING_SPHERE_SEGMENTS;

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnPVSDebugComponent.h:36
	const int32_t KI_MAX_NUM_COLLISION_ZONES = 256;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnPVSDebugComponent.h:36
	const int32_t KI_MAX_NUM_COLLISION_ZONES = 256;

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnPVSDebugComponent.h:36
	const int32_t KI_MAX_NUM_COLLISION_ZONES = 256;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnPVSDebugComponent.h:36
	const int32_t KI_MAX_NUM_COLLISION_ZONES = 256;

}

// BrnPVSDebugComponent.h:53
struct BrnWorld::CollisionZone {
private:
	// BrnPVSDebugComponent.h:89
	Vector3Plus mBoundingSphere;

	// BrnPVSDebugComponent.h:90
	int32_t miZoneNumber;

public:
	// BrnPVSDebugComponent.h:58
	void Construct();

	// BrnPVSDebugComponent.h:62
	Vector3 GetSpherePosition() const;

	// BrnPVSDebugComponent.h:66
	float32_t GetSphereRadius() const;

	// BrnPVSDebugComponent.h:70
	int32_t GetZoneNumber();

	// BrnPVSDebugComponent.h:75
	void SetSpherePosition(Vector3);

	// BrnPVSDebugComponent.h:80
	void SetSphereRadius(float32_t);

	// BrnPVSDebugComponent.h:85
	void SetZoneNumber(int32_t);

}

// BrnPVSDebugComponent.h:102
struct BrnWorld::PVSDebugComponent : public CgsDev::DebugComponent {
protected:
	// BrnPVSDebugComponent.h:148
	BrnWorld::WorldEntityModule * mpWorldEntityModule;

	// BrnPVSDebugComponent.h:149
	CollisionZone[256] maCollisionZones;

	// BrnPVSDebugComponent.h:150
	int32_t miNumCollisionZones;

	// BrnPVSDebugComponent.h:151
	Vector3 mPvsCentrePosition;

	// BrnPVSDebugComponent.h:152
	bool mbCanRender;

	// BrnPVSDebugComponent.h:153
	StringList[2] maStringList;

	// BrnPVSDebugComponent.h:154
	bool mbDrawPVSWireFrame;

	// BrnPVSDebugComponent.cpp:50
	extern const RGBA KU_SPHERE_COLOUR_PLAYER_ZONE;

	// BrnPVSDebugComponent.cpp:51
	extern const RGBA KU_SPHERE_COLOUR_NON_PLAYER_ZONE;

	// BrnPVSDebugComponent.cpp:52
	extern const RGBA KU_PLAYER_POSITION_COLOUR;

	// BrnPVSDebugComponent.cpp:47
	extern const float32_t KR_BOUNDING_SPHERE_TEXT_SIZE;

	// BrnPVSDebugComponent.cpp:48
	extern const int32_t KI_BOUNDING_SPHERE_SEGMENTS = 32;

	// BrnPVSDebugComponent.cpp:29
	extern int32_t _miColourMode;

	// BrnPVSDebugComponent.cpp:28
	extern bool _mbShowPVS;

	// BrnPVSDebugComponent.cpp:30
	extern bool _mbShowCollisionZones;

	// BrnPVSDebugComponent.cpp:31
	extern float32_t _mrDrawCollisionRadius;

public:
	// BrnPVSDebugComponent.cpp:76
	void Construct(BrnWorld::WorldEntityModule *);

	// BrnPVSDebugComponent.cpp:103
	void Destruct();

	// BrnPVSDebugComponent.cpp:109
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnPVSDebugComponent.cpp:288
	virtual void Update();

	// BrnPVSDebugComponent.cpp:121
	void RenderPVS(CgsDev::Debug2DImmediateRender *);

	// BrnPVSDebugComponent.cpp:467
	void RenderPvsCentrePosition(CgsDev::Debug2DImmediateRender *);

	// BrnPVSDebugComponent.cpp:351
	void RenderCollisionZones(CgsDev::Debug2DImmediateRender *);

	// BrnPVSDebugComponent.h:245
	void SetPvsCentre(Vector3);

	// BrnPVSDebugComponent.h:251
	void SetRendering(bool);

	// BrnPVSDebugComponent.h:261
	void AddCollisionZone(Vector3, float32_t, int32_t);

protected:
	// BrnPVSDebugComponent.cpp:294
	virtual void OnActivate();

	// BrnPVSDebugComponent.h:174
	virtual const char * GetName() const;

	// BrnPVSDebugComponent.h:177
	virtual const char * GetPath() const;

	// BrnPVSDebugComponent.h:180
	virtual bool IsSimple() const;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// Declaration
	struct PVSDebugComponent {
	public:
		PVSDebugComponent();

	protected:
		// BrnPVSDebugComponent.h:157
		extern const RGBA KU_SPHERE_COLOUR_PLAYER_ZONE;

		// BrnPVSDebugComponent.h:158
		extern const RGBA KU_SPHERE_COLOUR_NON_PLAYER_ZONE;

		// BrnPVSDebugComponent.h:159
		extern const RGBA KU_PLAYER_POSITION_COLOUR;

		// BrnPVSDebugComponent.h:161
		extern const float32_t KR_BOUNDING_SPHERE_TEXT_SIZE;

		// BrnPVSDebugComponent.h:162
		extern const int32_t KI_BOUNDING_SPHERE_SEGMENTS;

	}

	// BrnPVSDebugComponent.h:36
	const int32_t KI_MAX_NUM_COLLISION_ZONES = 256;

}

// BrnPVSDebugComponent.h:102
void BrnWorld::PVSDebugComponent::PVSDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnPVSModuleEvents.h:27
	namespace PVSIO {
		struct GetZoneRequest;

		struct GetZoneResponse;

		struct InputInterface;

		struct OutputInterface;

		struct InputBuffer;

		struct OutputBuffer;

	}

}

// BrnPVSModuleEvents.h:44
struct BrnWorld::PVSIO::GetZoneRequest : public Event {
private:
	// BrnPVSModuleEvents.h:75
	int32_t miUserId;

	// BrnPVSModuleEvents.h:76
	Vector3 mLocation;

	// BrnPVSModuleEvents.h:77
	int32_t miLookupIndex;

	// BrnPVSModuleEvents.h:78
	bool mbUseVelocity;

	// BrnPVSModuleEvents.h:79
	Vector3 mVelocity;

public:
	// BrnPVSModuleEvents.h:48
	void Construct(int32_t, Vector3, int32_t);

	// BrnPVSModuleEvents.h:51
	void SetUserId(int32_t);

	// BrnPVSModuleEvents.h:54
	void SetLocation(Vector3);

	// BrnPVSModuleEvents.h:57
	void SetLookupIndex(int32_t);

	// BrnPVSModuleEvents.h:60
	void SetVelocity(Vector3);

	// BrnPVSModuleEvents.h:63
	int32_t GetUserId() const;

	// BrnPVSModuleEvents.h:66
	Vector3 GetLocation() const;

	// BrnPVSModuleEvents.h:69
	int32_t GetLookupIndex() const;

	// BrnPVSModuleEvents.h:72
	void GetVelocity(Vector3 &, bool *) const;

}

// BrnPVSModuleEvents.h:91
struct BrnWorld::PVSIO::GetZoneResponse : public Event {
	// BrnPVSModuleEvents.h:94
	extern const int32_t KI_MAX_ZONES = 48;

private:
	// BrnPVSModuleEvents.h:139
	int32_t miUserId;

	// BrnPVSModuleEvents.h:140
	int32_t miZoneCount;

	// BrnPVSModuleEvents.h:141
	uint64_t[48] muZone;

	// BrnPVSModuleEvents.h:142
	bool[48] mbZoneSafeFlags;

	// BrnPVSModuleEvents.h:143
	bool[48] mbZoneRenderFlags;

	// BrnPVSModuleEvents.h:144
	bool[48] mbZoneImmediateNeighbourFlags;

	// BrnPVSModuleEvents.h:145
	float32_t[48] mfZoneBias;

	// BrnPVSModuleEvents.h:146
	int32_t miLookupIndex;

public:
	// BrnPVSModuleEvents.h:97
	void Construct(int32_t, int32_t, int32_t);

	// BrnPVSModuleEvents.h:100
	void SetUserId(int32_t);

	// BrnPVSModuleEvents.h:103
	void SetZone(int32_t, uint64_t, bool, bool, bool);

	// BrnPVSModuleEvents.h:106
	void SetZoneBias(int32_t, float32_t);

	// BrnPVSModuleEvents.h:109
	void SetZoneCount(int32_t);

	// BrnPVSModuleEvents.h:112
	void SetLookupIndex(int32_t);

	// BrnPVSModuleEvents.h:115
	int32_t GetUserId() const;

	// BrnPVSModuleEvents.h:118
	uint64_t GetZoneId(int32_t) const;

	// BrnPVSModuleEvents.h:121
	float32_t GetZoneBias(int32_t) const;

	// BrnPVSModuleEvents.h:124
	int32_t GetZoneCount() const;

	// BrnPVSModuleEvents.h:127
	int32_t GetLookupIndex() const;

	// BrnPVSModuleEvents.h:130
	bool IsZoneSafe(int32_t) const;

	// BrnPVSModuleEvents.h:133
	bool IsZoneRenderable(int32_t) const;

	// BrnPVSModuleEvents.h:136
	bool IsZoneImmediateNeighbour(int32_t) const;

}

// BrnPVSModuleEvents.h:94
extern const int32_t KI_MAX_ZONES = 48;

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnPVSModuleEvents.h:27
	namespace PVSIO {
	}

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnPVSModuleEvents.h:27
	namespace PVSIO {
	}

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnPVSModuleEvents.h:27
	namespace PVSIO {
	}

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnPVSModuleEvents.h:27
	namespace PVSIO {
	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnPVSModuleEvents.h:27
	namespace PVSIO {
		struct GetZoneResponse;

	}

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnPVSModuleEvents.h:27
	namespace PVSIO {
		struct GetZoneRequest;

		struct GetZoneResponse;

		struct InputInterface;

		struct OutputInterface;

		struct InputBuffer;

		struct OutputBuffer;

	}

}


// BrnRegion.h:28
namespace BrnTrigger {
	struct BoxRegion;

	struct StartingGrid;

	struct Landmark;

	struct SignatureStunt;

	struct Killzone;

	struct VFXBoxRegion;

	struct RoamingLocation;

	struct TriggerData;

}

// BrnRegion.h:82
struct BrnTrigger::BoxRegion {
private:
	// BrnRegion.h:128
	float32_t mPositionX;

	// BrnRegion.h:129
	float32_t mPositionY;

	// BrnRegion.h:130
	float32_t mPositionZ;

	// BrnRegion.h:131
	float32_t mRotationX;

	// BrnRegion.h:132
	float32_t mRotationY;

	// BrnRegion.h:133
	float32_t mRotationZ;

	// BrnRegion.h:134
	float32_t mDimensionX;

	// BrnRegion.h:135
	float32_t mDimensionY;

	// BrnRegion.h:136
	float32_t mDimensionZ;

public:
	// BrnRegion.h:86
	void Construct();

	// BrnRegion.h:92
	void Construct(Vector3, Quaternion, Vector3);

	// BrnRegion.h:95
	void FixDown();

	// BrnRegion.h:98
	void FixUp();

	// BrnRegion.h:101
	Vector3 GetPosition() const;

	// BrnRegion.h:104
	Vector2 GetPosition2D() const;

	// BrnRegion.h:107
	Vector3 GetRotation() const;

	// BrnRegion.h:110
	Vector3 GetDimensions() const;

	// BrnRegion.h:113
	float32_t GetDimensionX() const;

	// BrnRegion.h:116
	float32_t GetDimensionY() const;

	// BrnRegion.h:119
	float32_t GetDimensionZ() const;

	// BrnRegion.h:122
	Vector3 ComputeDirection() const;

	// BrnRegion.h:125
	Matrix44Affine ComputeTransform() const;

}

// BrnRegion.h:200
extern const float32_t KF_HEIGHT;

// BrnRegion.h:28
namespace BrnTrigger {
}

// BrnRegion.h:28
namespace BrnTrigger {
	struct BoxRegion;

}

// BrnRegion.h:28
namespace BrnTrigger {
	// Declaration
	struct TriggerResourceType {
	public:
		TriggerResourceType();

	}

}

// BrnRegion.h:28
namespace BrnTrigger {
	struct SphereRegion;

	struct BoxRegion;

	struct LineRegion;

	struct StartingGrid;

	struct Landmark;

	struct SignatureStunt;

	struct Killzone;

	struct VFXBoxRegion;

	struct RoamingLocation;

	struct TriggerData;

	struct TriggerResourceType;

}

// BrnRegion.h:45
struct BrnTrigger::SphereRegion {
private:
	// BrnRegion.h:70
	Vector4 mData;

public:
	// BrnRegion.h:50
	void Construct(Vector3, float32_t);

	// BrnRegion.h:54
	bool IsInside(Vector3);

	// BrnRegion.h:58
	void GetPosition(Vector3 &) const;

	// BrnRegion.h:61
	float32_t GetRadius() const;

	// BrnRegion.h:64
	void FixDown();

	// BrnRegion.h:67
	void FixUp();

}

// BrnRegion.h:149
struct BrnTrigger::LineRegion {
private:
	// BrnRegion.h:200
	extern const float32_t KF_HEIGHT;

	// BrnRegion.h:202
	SphereRegion mBoundingSphere;

	// BrnRegion.h:203
	Vector3 * mpaPoints;

	// BrnRegion.h:204
	int32_t miPointCount;

public:
	// BrnRegion.h:154
	void Construct(const LineRegion *, LinearMalloc *);

	// BrnRegion.h:160
	void Construct(Vector3 *, int32_t, LinearMalloc *);

	// BrnRegion.h:165
	void Construct(Vector3 *, int32_t);

	// BrnRegion.h:169
	bool IsInside(Vector3);

	// BrnRegion.h:173
	void GetPosition(Vector3 &) const;

	// BrnRegion.h:176
	float32_t GetRadius() const;

	// BrnRegion.h:180
	Vector3 GetPoint(int32_t) const;

	// BrnRegion.h:183
	int32_t GetPointCount() const;

	// BrnRegion.h:187
	void FixDown(MemoryResource);

	// BrnRegion.h:191
	void FixUp(MemoryResource);

private:
	// BrnRegion.h:198
	void Build(Vector3 *, int32_t);

}


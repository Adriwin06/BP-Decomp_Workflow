// CgsCollisionMeshData.h:47
struct CgsPhysics::CollisionMeshData {
private:
	// CgsCollisionMeshData.h:105
	VolRef::Volume * mpCollisionVolume;

	// CgsCollisionMeshData.h:106
	Vector3Plus mBoundingSphere;

public:
	// CgsCollisionMeshData.h:51
	void Construct();

	// CgsCollisionMeshData.h:54
	void Destruct();

	// CgsCollisionMeshData.h:59
	void FixDown(void *);

	// CgsCollisionMeshData.h:64
	void FixUp(void *);

	// CgsCollisionMeshData.h:68
	Vector3 GetSpherePosition() const;

	// CgsCollisionMeshData.h:72
	float32_t GetSphereRadius() const;

	// CgsCollisionMeshData.h:76
	const VolRef::Volume * GetVolume() const;

	// CgsCollisionMeshData.h:80
	bool HasCollision();

}

// CgsCollisionMeshData.h:28
namespace CgsPhysics {
	struct CollisionMeshData;

}


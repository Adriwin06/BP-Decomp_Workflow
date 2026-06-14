// CgsPrimitivePairListBuilder.h:55
struct CgsSceneManager::CgsCollision::PrimitivePairListBuilder : public PrimitivePairList {
public:
	// CgsPrimitivePairListBuilder.h:59
	void Construct();

	// CgsPrimitivePairListBuilder.h:62
	void Destruct();

	// CgsPrimitivePairListBuilder.h:67
	bool Prepare(LinearMalloc *, uint16_t);

	// CgsPrimitivePairListBuilder.h:70
	void Release();

	// CgsPrimitivePairListBuilder.h:77
	void AddPrimitive(const VolRef::Volume *, Matrix44Affine, float32_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:83
	void AddPrimitive(Sphere *, float32_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:89
	void AddPrimitive(CgsGeometric::Box *, float32_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:95
	void AddPrimitive(Triangle4 *, float32_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:101
	void AddPrimitive(CgsGeometric::Capsule *, float32_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:107
	void AddPrimitive(CgsGeometric::Cylinder *, float32_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:115
	void AddPrimitivePair(Sphere *, Sphere *, float32_t, uint16_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:123
	void AddPrimitivePair(CgsGeometric::Box *, CgsGeometric::Box *, float32_t, uint16_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:131
	void AddPrimitivePair(Sphere *, CgsGeometric::Box *, float32_t, uint16_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:139
	void AddPrimitivePair(CgsGeometric::Box *, Sphere *, float32_t, uint16_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:147
	void AddPrimitivePair(CgsGeometric::Cylinder *, CgsGeometric::Box *, float32_t, uint16_t, uint16_t);

private:
	// CgsPrimitivePairListBuilder.h:155
	void AddCollisionHeader(CgsSceneManager::CgsCollision::PrimitivePairList::EVolumeType, float32_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:163
	void AddCollisionHeader(CgsSceneManager::CgsCollision::PrimitivePairList::EVolumeType, CgsSceneManager::CgsCollision::PrimitivePairList::EVolumeType, float32_t, uint16_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:167
	void AddPrimitiveToList(Sphere *);

	// CgsPrimitivePairListBuilder.h:171
	void AddPrimitiveToList(CgsGeometric::Box *);

	// CgsPrimitivePairListBuilder.h:175
	void AddPrimitiveToList(Triangle4 *);

	// CgsPrimitivePairListBuilder.h:179
	void AddPrimitiveToList(CgsGeometric::Capsule *);

	// CgsPrimitivePairListBuilder.h:183
	void AddPrimitiveToList(CgsGeometric::Cylinder *);

	// CgsPrimitivePairListBuilder.h:187
	void * AllocateMemory(int32_t);

	// CgsPrimitivePairListBuilder.h:193
	void DebugRenderPrimitive(const VolRef::Volume *, Matrix44Affine);

}

// CgsPrimitivePairListBuilder.h:55
struct CgsSceneManager::CgsCollision::PrimitivePairListBuilder : public PrimitivePairList {
public:
	// CgsPrimitivePairListBuilder.h:59
	void Construct();

	// CgsPrimitivePairListBuilder.h:62
	void Destruct();

	// CgsPrimitivePairListBuilder.h:67
	bool Prepare(LinearMalloc *, uint16_t);

	// CgsPrimitivePairListBuilder.h:70
	void Release();

	// CgsPrimitivePairListBuilder.h:77
	void AddPrimitive(const VolRef::Volume *, Matrix44Affine, float32_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:83
	void AddPrimitive(Sphere *, float32_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:89
	void AddPrimitive(Box *, float32_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:95
	void AddPrimitive(Triangle4 *, float32_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:101
	void AddPrimitive(CgsGeometric::Capsule *, float32_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:107
	void AddPrimitive(CgsGeometric::Cylinder *, float32_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:115
	void AddPrimitivePair(Sphere *, Sphere *, float32_t, uint16_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:123
	void AddPrimitivePair(Box *, Box *, float32_t, uint16_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:131
	void AddPrimitivePair(Sphere *, Box *, float32_t, uint16_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:139
	void AddPrimitivePair(Box *, Sphere *, float32_t, uint16_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:147
	void AddPrimitivePair(CgsGeometric::Cylinder *, Box *, float32_t, uint16_t, uint16_t);

private:
	// CgsPrimitivePairListBuilder.h:155
	void AddCollisionHeader(CgsSceneManager::CgsCollision::PrimitivePairList::EVolumeType, float32_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:163
	void AddCollisionHeader(CgsSceneManager::CgsCollision::PrimitivePairList::EVolumeType, CgsSceneManager::CgsCollision::PrimitivePairList::EVolumeType, float32_t, uint16_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:167
	void AddPrimitiveToList(Sphere *);

	// CgsPrimitivePairListBuilder.h:171
	void AddPrimitiveToList(Box *);

	// CgsPrimitivePairListBuilder.h:175
	void AddPrimitiveToList(Triangle4 *);

	// CgsPrimitivePairListBuilder.h:179
	void AddPrimitiveToList(CgsGeometric::Capsule *);

	// CgsPrimitivePairListBuilder.h:183
	void AddPrimitiveToList(CgsGeometric::Cylinder *);

	// CgsPrimitivePairListBuilder.h:187
	void * AllocateMemory(int32_t);

	// CgsPrimitivePairListBuilder.h:193
	void DebugRenderPrimitive(const VolRef::Volume *, Matrix44Affine);

}

// CgsPrimitivePairListBuilder.h:55
struct CgsSceneManager::CgsCollision::PrimitivePairListBuilder : public PrimitivePairList {
public:
	// CgsPrimitivePairListBuilder.h:59
	void Construct();

	// CgsPrimitivePairListBuilder.h:62
	void Destruct();

	// CgsPrimitivePairListBuilder.h:67
	bool Prepare(LinearMalloc *, uint16_t);

	// CgsPrimitivePairListBuilder.h:70
	void Release();

	// CgsPrimitivePairListBuilder.h:77
	// Declaration
	void AddPrimitive(const VolRef::Volume *, Matrix44Affine, float32_t, uint16_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsPrimitivePairListBuilder.cpp:239
		using namespace rw::collision;

	}

	// CgsPrimitivePairListBuilder.h:83
	void AddPrimitive(Sphere *, float32_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:89
	void AddPrimitive(Box *, float32_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:95
	void AddPrimitive(CgsGeometric::Triangle4 *, float32_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:101
	void AddPrimitive(CgsGeometric::Capsule *, float32_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:107
	void AddPrimitive(CgsGeometric::Cylinder *, float32_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:115
	void AddPrimitivePair(Sphere *, Sphere *, float32_t, uint16_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:123
	void AddPrimitivePair(Box *, Box *, float32_t, uint16_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:131
	void AddPrimitivePair(Sphere *, Box *, float32_t, uint16_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:139
	void AddPrimitivePair(Box *, Sphere *, float32_t, uint16_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:147
	void AddPrimitivePair(CgsGeometric::Cylinder *, Box *, float32_t, uint16_t, uint16_t);

private:
	// CgsPrimitivePairListBuilder.h:155
	void AddCollisionHeader(CgsSceneManager::CgsCollision::PrimitivePairList::EVolumeType, float32_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:163
	void AddCollisionHeader(CgsSceneManager::CgsCollision::PrimitivePairList::EVolumeType, CgsSceneManager::CgsCollision::PrimitivePairList::EVolumeType, float32_t, uint16_t, uint16_t);

	// CgsPrimitivePairListBuilder.h:167
	void AddPrimitiveToList(Sphere *);

	// CgsPrimitivePairListBuilder.h:171
	void AddPrimitiveToList(Box *);

	// CgsPrimitivePairListBuilder.h:175
	void AddPrimitiveToList(CgsGeometric::Triangle4 *);

	// CgsPrimitivePairListBuilder.h:179
	void AddPrimitiveToList(CgsGeometric::Capsule *);

	// CgsPrimitivePairListBuilder.h:183
	void AddPrimitiveToList(CgsGeometric::Cylinder *);

	// CgsPrimitivePairListBuilder.h:187
	void * AllocateMemory(int32_t);

	// CgsPrimitivePairListBuilder.h:193
	void DebugRenderPrimitive(const VolRef::Volume *, Matrix44Affine);

}


// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:18
	namespace collision {
		// Declaration
		struct GPInstance {
			// volume.h:430
			enum VolumeType {
				UNUSED = 0,
				SPHERE = 1,
				CAPSULE = 2,
				TRIANGLE = 3,
				BOX = 4,
				CYLINDER = 5,
				NUMINTERNALTYPES = 6,
				FORCEENUMSIZEINT = 2147483647,
			}

			// volume.h:484
			struct VolumeMethods {
				// volume.h:485
				// volume.h:472
				struct {
				}

 mGetMaximumFeature;

				// volume.h:486
				// volume.h:473
				struct {
				}

 mGetInterval;

				// volume.h:487
				// volume.h:474
				struct {
				}

 mGetIntervals;

				// volume.h:488
				// volume.h:475
				struct {
				}

 mGetBBox;

			}

		}

		// Declaration
		struct Volume {
			// volume.h:1507
			struct VTable {
				// volume.h:1508
				rw::collision::VolumeType typeID;

				// volume.h:1509
				// volume.h:1314
				struct {
				}

 getBBox;

				// volume.h:1510
				// volume.h:1316
				struct {
				}

 getBBoxDiag;

				// volume.h:1511
				// volume.h:1325
				struct {
				}

 getInterval;

				// volume.h:1512
				// volume.h:1335
				struct {
				}

 getMaximumFeature;

				// volume.h:1513
				// volume.h:1343
				struct {
				}

 createGPInstance;

				// volume.h:1514
				// volume.h:1355
				struct {
				}

 lineSegIntersect;

				// volume.h:1515
				// volume.h:1363
				struct {
				}

 release;

				// volume.h:1516
				const RwChar * name;

				// volume.h:1518
				uint32_t flags;

			}

		}

		// volume.h:1238
		enum VolumeType {
			VOLUMETYPENULL = 0,
			VOLUMETYPESPHERE = 1,
			VOLUMETYPECAPSULE = 2,
			VOLUMETYPETRIANGLE = 3,
			VOLUMETYPEBOX = 4,
			VOLUMETYPECYLINDER = 5,
			VOLUMETYPEAGGREGATE = 6,
			VOLUMETYPENUMINTERNALTYPES = 7,
			VOLUMETYPEFORCEENUMSIZEINT = 2147483647,
		}

		// volume.h:37
		const VecFloat VEC_EPSILON;

		// volume.h:1160
		const float32_t krGPFeatureSimplificationThreshold;

		// volume.h:1168
		const float32_t krGPMinimumAllowedClippingAngle;

	}

}

// volume.h:53
struct rw::collision::FeatureEdge {
	// volume.h:54
	Vector3 base;

	// volume.h:55
	Vector3 dir;

	// volume.h:56
	Vector3 pn;

	// volume.h:59
	VecFloat length;

public:
	// volume.h:65
	void FeatureEdge();

	// volume.h:75
	void FeatureEdge(const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &);

	// volume.h:96
	void FeatureEdge(const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &, const VecFloat &);

	// volume.h:111
	void FeatureEdge(const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &, const VecFloat &);

	// volume.h:126
	void build_plane(const rw::math::vpu::Vector3 &);

	// volume.h:139
	Vector3 endpoint() const;

	// volume.h:150
	Vector3 midpoint() const;

	// volume.h:170
	uint32_t constrain_point(Vector3 &) const;

}

// volume.h:202
struct rw::collision::Feature {
	// volume.h:215
	uint32_t region;

	// volume.h:217
	FeatureEdge[8] edges;

	// volume.h:218
	Vector3 ownNormal;

	// volume.h:220
	Vector3 pt;

	// volume.h:222
	int32_t numedges;

public:
	// volume.h:234
	Vector3 Center();

	// volume.h:266
	int32_t MappedType();

	// volume.h:283
	void BuildEdgePlanes(RwBool, const rw::math::vpu::Vector3 &);

	// volume.h:313
	void BuildEdgePlanes(const rw::math::vpu::Vector3 &);

}

// volume.h:339
struct rw::collision::Interval {
	// volume.h:340
	VecFloat min;

	// volume.h:341
	VecFloat max;

	// volume.h:342
	float32_t[2] padding;

public:
	// volume.h:347
	void Interval();

	// volume.h:354
	void Interval(const VecFloat &, const VecFloat &);

}

// volume.h:422
struct rw::collision::GPInstance {
	// volume.h:492
	extern rw::collision::GPInstance::VolumeMethods[6] sVolumeMethods;

	// volume.h:551
	Vector3 mPos;

	// volume.h:552
	Vector3[3] mFaceNormals;

	// volume.h:553
	Vector3[3] mEdgeDirections;

	// volume.h:554
	Vector3 mDimensions;

	// volume.h:555
	float32_t mFatness;

	// volume.h:556
	uint32_t mVolumeTag;

	// volume.h:557
	uint32_t mUserTag;

	// volume.h:558
	uint8_t mNumFaceNormals;

	// volume.h:559
	uint8_t mNumEdgeDirections;

	// volume.h:560
	rw::collision::GPInstance::VolumeType mVolumeType;

	// volume.h:561
	uint32_t mFlags;

	// volume.h:563
	float32_t[3] mEdgeData;

public:
	// volume.h:576
	rw::collision::GPInstance::VolumeMethods * GetVolumeMethods(rw::collision::GPInstance::VolumeType);

	// volume.h:592
	rw::collision::GPInstance::VolumeType Type() const;

	// volume.h:593
	uint32_t Flags() const;

	// volume.h:594
	Vector3 Pos() const;

	// volume.h:595
	Vector3 FaceNormal(uint32_t) const;

	// volume.h:596
	Vector3 EdgeDirection(uint32_t) const;

	// volume.h:597
	const float32_t & Fatness() const;

	// volume.h:598
	VecFloat FatnessVec() const;

	// volume.h:603
	void GetMaximumFeature(RwBool, Vector3, Feature &) const;

	// volume.h:604
	void GetInterval(Vector3, Interval &) const;

	// volume.h:605
	void GetIntervals(const rw::math::vpu::Vector3 *, uint32_t, Interval *) const;

	// volume.h:606
	void GetBBox(AABBox &) const;

protected:
	// volume.h:618
	void SetPos(Vector3);

	// volume.h:619
	void SetFaceNormal(uint32_t, Vector3);

	// volume.h:620
	void SetEdgeDirection(uint32_t, Vector3);

	// volume.h:621
	void SetEdgeData(uint32_t, float32_t);

	// volume.h:622
	const float32_t & EdgeData(uint32_t) const;

}

// volume.h:777
struct rw::collision::GPTriangle : public GPInstance {
public:
	// volume.h:780
	void Initialize(Vector3, Vector3, Vector3, const float32_t &, uint32_t, Vector3, uint32_t, uint32_t);

	// volume.h:781
	void Initialize(Vector3, Vector3, Vector3, const float32_t &, uint32_t, Vector3, uint32_t, uint32_t, Vector3);

	// volume.h:782
	void Initialize(Vector3, Vector3, Vector3, const float32_t &, uint32_t, float32_t, float32_t, float32_t, uint32_t, uint32_t, Vector3);

	// volume.h:785
	Vector3 Normal() const;

	// volume.h:786
	Vector3 Vertex0() const;

	// volume.h:787
	Vector3 Vertex1() const;

	// volume.h:788
	Vector3 Vertex2() const;

	// volume.h:790
	VecFloat EdgeLength(uint32_t) const;

	// volume.h:799
	void GetEdgeLengths(VecFloat &, VecFloat &, VecFloat &) const;

	// volume.h:806
	Vector3 EdgeCosines() const;

	// volume.h:809
	void GetBBox(AABBox &) const;

	// volume.h:810
	void GetMaximumFeature(RwBool, Vector3, Feature &) const;

	// volume.h:811
	void GetInterval(Vector3, Interval &) const;

	// volume.h:812
	void GetIntervals(const rw::math::vpu::Vector3 *, uint32_t, Interval *) const;

private:
	// volume.h:815
	void SetEdgeCosines(Vector3);

	// volume.h:818
	void SetEdgeCosines(float32_t, float32_t, float32_t);

}

// volume.h:1092
struct rw::collision::VolRef {
	// volume.h:39
	typedef rw::collision::Volume Volume;

	// volume.h:1093
	const VolRef::Volume * volume;

	// volume.h:1094
	Matrix44Affine * tm;

	// volume.h:1095
	Matrix44Affine tmContents;

	// volume.h:1096
	AABBox bBox;

	// volume.h:1097
	uint32_t tag;

	// volume.h:1098
	uint8_t numTagBits;

}

// volume.h:1181
struct rw::collision::VolumeLineSegIntersectResult {
	// volume.h:1182
	const VolRef::Volume * v;

	// volume.h:1183
	Vector3 position;

	// volume.h:1184
	Vector3 normal;

	// volume.h:1185
	Vector3 volParam;

	// volume.h:1186
	float32_t lineParam;

	// volume.h:1187
	VolRef vRef;

}

// volume.h:1304
struct rw::collision::Volume {
	// volume.h:1521
	extern rw::collision::Volume::VTable *[7] vTableArray;

protected:
	// volume.h:1525
	Matrix44Affine transform;

	// volume.h:1530
	rw::collision::Volume::VTable * vTable;

	// volume.h:1534
	union {
		// volume.h:1535
		AggregateSpecificData aggregateData;

		// volume.h:1536
		SphereSpecificData sphereData;

		// volume.h:1537
		CapsuleSpecificData capsuleData;

		// volume.h:1538
		TriangleSpecificData triangleData;

		// volume.h:1539
		BoxSpecificData boxData;

		// volume.h:1540
		CylinderSpecificData cylinderData;

		// volume.h:1541
		TargetPtr[2] sizeOfTargetPointer;

	}

	// volume.h:1545
	float32_t radius;

	// volume.h:1548
	uint32_t groupID;

	// volume.h:1551
	uint32_t surfaceID;

	// volume.h:1554
	uint32_t m_flags;

public:
	// volume.h:1375
	void Volume();

protected:
	// volume.h:1388
	void Volume(rw::collision::VolumeType);

public:
	// volume.h:1405
	void Release();

	// volume.h:1411
	rw::collision::VolumeType GetType() const;

	// volume.h:1414
	const RwChar * GetTypeName();

	// volume.h:1417
	const float32_t & GetRadius() const;

	// volume.h:1420
	void SetRadius(float32_t);

	// volume.h:1423
	uint32_t GetGroup() const;

	// volume.h:1426
	void SetGroup(uint32_t);

	// volume.h:1429
	uint32_t GetSurface() const;

	// volume.h:1432
	void SetSurface(uint32_t);

	// volume.h:1435
	RwBool IsEnabled() const;

	// volume.h:1438
	void SetEnabled(RwBool);

	// volume.h:1441
	uint32_t GetFlags() const;

	// volume.h:1444
	void SetFlags(uint32_t);

	// volume.h:1447
	const rw::math::vpu::Matrix44Affine * GetRelativeTransform() const;

	// volume.h:1450
	Matrix44Affine * GetRelativeTransform();

	// volume.h:1454
	RwBool GetBBox(const rw::math::vpu::Matrix44Affine *, RwBool, AABBox &) const;

	// volume.h:1457
	Vector3 GetBBoxDiag() const;

	// volume.h:1460
	RwBool CreateGPInstance(GPInstance &, const rw::math::vpu::Matrix44Affine *) const;

	// volume.h:1467
	RwBool LineSegIntersect(const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &, const rw::math::vpu::Matrix44Affine *, VolumeLineSegIntersectResult &, float32_t) const;

	// volume.h:1473
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// volume.h:1476
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// volume.h:1479
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// volume.h:1482
	void RegisterArenaReadCallbacks();

	// volume.h:1485
	void RegisterArenaWriteCallbacks();

	// volume.h:1491
	RwBool InitializeVTable();

	// volume.h:1494
	RwBool ReleaseVTable();

}

// volume.h:492
extern rw::collision::GPInstance::VolumeMethods[6] sVolumeMethods;

// volume.h:1521
extern rw::collision::Volume::VTable *[7] vTableArray;

// volume.h:422
struct rw::collision::GPInstance {
	// volume.h:492
	extern rw::collision::GPInstance::VolumeMethods[6] sVolumeMethods;

	// volume.h:551
	Vector3 mPos;

	// volume.h:552
	Vector3[3] mFaceNormals;

	// volume.h:553
	Vector3[3] mEdgeDirections;

	// volume.h:554
	Vector3 mDimensions;

	// volume.h:555
	float32_t mFatness;

	// volume.h:556
	uint32_t mVolumeTag;

	// volume.h:557
	uint32_t mUserTag;

	// volume.h:558
	uint8_t mNumFaceNormals;

	// volume.h:559
	uint8_t mNumEdgeDirections;

	// volume.h:560
	rw::collision::GPInstance::VolumeType mVolumeType;

	// volume.h:561
	uint32_t mFlags;

	// volume.h:563
	float32_t[3] mEdgeData;

public:
	// volume.h:576
	rw::collision::GPInstance::VolumeMethods * GetVolumeMethods(rw::collision::GPInstance::VolumeType);

	// volume.h:592
	rw::collision::GPInstance::VolumeType Type() const;

	// volume.h:593
	uint32_t Flags() const;

	// volume.h:594
	Vector3 Pos() const;

	// volume.h:595
	Vector3 FaceNormal(uint32_t) const;

	// volume.h:596
	Vector3 EdgeDirection(uint32_t) const;

	// volume.h:597
	const float32_t & Fatness() const;

	// volume.h:598
	VecFloat FatnessVec() const;

	// volume.h:603
	void GetMaximumFeature(RwBool, Vector3, Feature &) const;

	// volume.h:604
	void GetInterval(Vector3, Interval &) const;

	// volume.h:605
	void GetIntervals(const rw::math::vpu::Vector3 *, uint32_t, Interval *) const;

	// volume.h:606
	void GetBBox(AABBox &) const;

	// volume.h:618
	void SetPos(Vector3);

	// volume.h:619
	void SetFaceNormal(uint32_t, Vector3);

	// volume.h:620
	void SetEdgeDirection(uint32_t, Vector3);

	// volume.h:621
	void SetEdgeData(uint32_t, float32_t);

	// volume.h:622
	const float32_t & EdgeData(uint32_t) const;

}

// volume.h:777
struct rw::collision::GPTriangle : public GPInstance {
public:
	// volume.h:780
	void Initialize(Vector3, Vector3, Vector3, const float32_t &, uint32_t, Vector3, uint32_t, uint32_t);

	// volume.h:781
	void Initialize(Vector3, Vector3, Vector3, const float32_t &, uint32_t, Vector3, uint32_t, uint32_t, Vector3);

	// volume.h:782
	void Initialize(Vector3, Vector3, Vector3, const float32_t &, uint32_t, float32_t, float32_t, float32_t, uint32_t, uint32_t, Vector3);

	// volume.h:785
	Vector3 Normal() const;

	// volume.h:786
	Vector3 Vertex0() const;

	// volume.h:787
	Vector3 Vertex1() const;

	// volume.h:788
	Vector3 Vertex2() const;

	// volume.h:790
	VecFloat EdgeLength(uint32_t) const;

	// volume.h:799
	void GetEdgeLengths(VecFloat &, VecFloat &, VecFloat &) const;

	// volume.h:806
	Vector3 EdgeCosines() const;

	// volume.h:809
	void GetBBox(AABBox &) const;

	// volume.h:810
	void GetMaximumFeature(RwBool, Vector3, Feature &) const;

	// volume.h:811
	void GetInterval(Vector3, Interval &) const;

	// volume.h:812
	void GetIntervals(const rw::math::vpu::Vector3 *, uint32_t, Interval *) const;

	// volume.h:815
	void SetEdgeCosines(Vector3);

	// volume.h:818
	void SetEdgeCosines(float32_t, float32_t, float32_t);

}

// volume.h:1304
struct rw::collision::Volume {
	// volume.h:1521
	extern rw::collision::Volume::VTable *[7] vTableArray;

	// volume.h:1525
	Matrix44Affine transform;

	// volume.h:1530
	rw::collision::Volume::VTable * vTable;

	// volume.h:1534
	union {
		// volume.h:1535
		AggregateSpecificData aggregateData;

		// volume.h:1536
		SphereSpecificData sphereData;

		// volume.h:1537
		CapsuleSpecificData capsuleData;

		// volume.h:1538
		TriangleSpecificData triangleData;

		// volume.h:1539
		BoxSpecificData boxData;

		// volume.h:1540
		CylinderSpecificData cylinderData;

		// volume.h:1541
		TargetPtr[2] sizeOfTargetPointer;

	}

	// volume.h:1545
	float32_t radius;

	// volume.h:1548
	uint32_t groupID;

	// volume.h:1551
	uint32_t surfaceID;

	// volume.h:1554
	uint32_t m_flags;

public:
	// volume.h:1375
	void Volume();

	// volume.h:1388
	void Volume(rw::collision::VolumeType);

	// volume.h:1405
	void Release();

	// volume.h:1411
	rw::collision::VolumeType GetType() const;

	// volume.h:1414
	const RwChar * GetTypeName();

	// volume.h:1417
	const float32_t & GetRadius() const;

	// volume.h:1420
	void SetRadius(float32_t);

	// volume.h:1423
	uint32_t GetGroup() const;

	// volume.h:1426
	void SetGroup(uint32_t);

	// volume.h:1429
	uint32_t GetSurface() const;

	// volume.h:1432
	void SetSurface(uint32_t);

	// volume.h:1435
	RwBool IsEnabled() const;

	// volume.h:1438
	void SetEnabled(RwBool);

	// volume.h:1441
	uint32_t GetFlags() const;

	// volume.h:1444
	void SetFlags(uint32_t);

	// volume.h:1447
	const rw::math::vpu::Matrix44Affine * GetRelativeTransform() const;

	// volume.h:1450
	Matrix44Affine * GetRelativeTransform();

	// volume.h:1454
	RwBool GetBBox(const rw::math::vpu::Matrix44Affine *, RwBool, AABBox &) const;

	// volume.h:1457
	Vector3 GetBBoxDiag() const;

	// volume.h:1460
	RwBool CreateGPInstance(GPInstance &, const rw::math::vpu::Matrix44Affine *) const;

	// volume.h:1467
	RwBool LineSegIntersect(const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &, const rw::math::vpu::Matrix44Affine *, VolumeLineSegIntersectResult &, float32_t) const;

	// volume.h:1473
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// volume.h:1476
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// volume.h:1479
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// volume.h:1482
	void RegisterArenaReadCallbacks();

	// volume.h:1485
	void RegisterArenaWriteCallbacks();

	// volume.h:1491
	RwBool InitializeVTable();

	// volume.h:1494
	RwBool ReleaseVTable();

}

// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:18
	namespace collision {
		// Declaration
		struct GPInstance {
			// volume.h:430
			enum VolumeType {
				UNUSED = 0,
				SPHERE = 1,
				CAPSULE = 2,
				TRIANGLE = 3,
				BOX = 4,
				CYLINDER = 5,
				NUMINTERNALTYPES = 6,
				FORCEENUMSIZEINT = 2147483647,
			}

			// volume.h:484
			struct VolumeMethods {
				// volume.h:485
				// volume.h:472
				struct {
				}

 mGetMaximumFeature;

				// volume.h:486
				// volume.h:473
				struct {
				}

 mGetInterval;

				// volume.h:487
				// volume.h:474
				struct {
				}

 mGetIntervals;

				// volume.h:488
				// volume.h:475
				struct {
				}

 mGetBBox;

			}

			// volume.h:501
			struct ContactPoints {
				// volume.h:503
				struct PointPair {
					// volume.h:504
					Vector3 p1;

					// volume.h:505
					Vector3 p2;

				}

				// volume.h:508
				uint32_t volumeTag1;

				// volume.h:509
				uint32_t volumeTag2;

				// volume.h:510
				uint32_t userTag1;

				// volume.h:511
				uint32_t userTag2;

				// volume.h:512
				uint32_t numPoints;

				// volume.h:513
				Vector3 normal;

				// volume.h:514
				rw::collision::GPInstance::ContactPoints::PointPair[16] pointPairs;

			}

		}

		// Declaration
		struct Volume {
			// volume.h:1507
			struct VTable {
				// volume.h:1508
				rw::collision::VolumeType typeID;

				// volume.h:1509
				// volume.h:1314
				struct {
				}

 getBBox;

				// volume.h:1510
				// volume.h:1316
				struct {
				}

 getBBoxDiag;

				// volume.h:1511
				// volume.h:1325
				struct {
				}

 getInterval;

				// volume.h:1512
				// volume.h:1335
				struct {
				}

 getMaximumFeature;

				// volume.h:1513
				// volume.h:1343
				struct {
				}

 createGPInstance;

				// volume.h:1514
				// volume.h:1355
				struct {
				}

 lineSegIntersect;

				// volume.h:1515
				// volume.h:1363
				struct {
				}

 release;

				// volume.h:1516
				const RwChar * name;

				// volume.h:1518
				uint32_t flags;

			}

		}

		// volume.h:1238
		enum VolumeType {
			VOLUMETYPENULL = 0,
			VOLUMETYPESPHERE = 1,
			VOLUMETYPECAPSULE = 2,
			VOLUMETYPETRIANGLE = 3,
			VOLUMETYPEBOX = 4,
			VOLUMETYPECYLINDER = 5,
			VOLUMETYPEAGGREGATE = 6,
			VOLUMETYPENUMINTERNALTYPES = 7,
			VOLUMETYPEFORCEENUMSIZEINT = 2147483647,
		}

		// volume.h:37
		const VecFloat VEC_EPSILON;

		// volume.h:1160
		const float32_t krGPFeatureSimplificationThreshold;

		// volume.h:1168
		const float32_t krGPMinimumAllowedClippingAngle;

	}

}

// volume.h:1114
struct rw::collision::VolRefPair {
	// volume.h:1115
	VolRef * vRef1;

	// volume.h:1116
	VolRef * vRef2;

}

// volume.h:1131
struct rw::collision::VolRef1xN {
	// volume.h:1132
	VolRef * vRef1;

	// volume.h:1133
	uint32_t vRefsNCount;

	// volume.h:1134
	RwBool volumesSwapped;

	// volume.h:1135
	VolRef *[1] vRefsN;

}


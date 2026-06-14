// BrnPhysicalTrafficManagerIO.h:60
struct BrnPhysics::Vehicle::ArticulatedJointCreateBuffer : public IOBuffer {
	// BrnPhysicalTrafficManagerIO.h:46
	typedef InAddJoint[10] CreatedJointArray;

private:
	// BrnPhysicalTrafficManagerIO.h:108
	ArticulatedJointCreateBuffer::CreatedJointArray maCreatedJointEvents;

	// Unknown accessibility
	// BrnPhysicalTrafficManagerIO.h:47
	typedef InRemoveJoint[10] RemovedJointArray;

	// BrnPhysicalTrafficManagerIO.h:109
	ArticulatedJointCreateBuffer::RemovedJointArray maRemovedJointEvents;

	// Unknown accessibility
	// BrnPhysicalTrafficManagerIO.h:42
	typedef BitArray<10u> CreatedJointBitArray;

	// BrnPhysicalTrafficManagerIO.h:110
	ArticulatedJointCreateBuffer::CreatedJointBitArray mCreatedJointBitArray;

	// Unknown accessibility
	// BrnPhysicalTrafficManagerIO.h:43
	typedef BitArray<10u> RemovedJointBitArray;

	// BrnPhysicalTrafficManagerIO.h:111
	ArticulatedJointCreateBuffer::RemovedJointBitArray mRemovedJointBitArray;

public:
	// BrnPhysicalTrafficManagerIO.h:64
	void Construct();

	// BrnPhysicalTrafficManagerIO.h:67
	void Destruct();

	// BrnPhysicalTrafficManagerIO.h:76
	void FlagJointToBeCreated(int32_t, const InAddJoint &);

	// BrnPhysicalTrafficManagerIO.h:82
	void FlagJointToBeRemoved(int32_t, const InRemoveJoint &);

	// BrnPhysicalTrafficManagerIO.h:90
	const InAddJoint & GetCreateJointEvent(int32_t) const;

	// BrnPhysicalTrafficManagerIO.h:95
	const InRemoveJoint & GetRemoveJointEvent(int32_t) const;

	// BrnPhysicalTrafficManagerIO.h:99
	const ArticulatedJointCreateBuffer::CreatedJointBitArray * GetCreatedJointBitArray() const;

	// BrnPhysicalTrafficManagerIO.h:103
	const ArticulatedJointCreateBuffer::RemovedJointBitArray * GetRemovedJointBitArray() const;

}

// BrnPhysicalTrafficManagerIO.h:126
struct BrnPhysics::Vehicle::TractionLineBuffer<32> : public IOBuffer {
	// BrnPhysicalTrafficManagerIO.h:158
	Vector3[32] maLinesStart;

	// BrnPhysicalTrafficManagerIO.h:159
	Vector3[32] maLinesEnd;

	// BrnPhysicalTrafficManagerIO.h:160
	VecFloat[32] mavfMinLineParams;

	// BrnPhysicalTrafficManagerIO.h:161
	Vector4[32] maNormals;

	// BrnPhysicalTrafficManagerIO.h:162
	VecFloat[32] mavfSurfaceTags;

	// BrnPhysicalTrafficManagerIO.h:163
	bool[32] mabIntersections;

public:
	// BrnPhysicalTrafficManagerIO.h:130
	void Construct();

	// BrnPhysicalTrafficManagerIO.h:133
	void Destruct();

	// BrnPhysicalTrafficManagerIO.h:252
	Vector3 GetLineSegment(int);

	// BrnPhysicalTrafficManagerIO.h:263
	Vector3 GetIntersectPoint(int);

	// BrnPhysicalTrafficManagerIO.h:275
	uint32_t GetSurfaceTag(int);

	// BrnPhysicalTrafficManagerIO.h:291
	Vector3 GetIntersectNormal(int);

}

// BrnPhysicalTrafficManagerIO.h:126
struct BrnPhysics::Vehicle::TractionLineBuffer<100> : public IOBuffer {
	// BrnPhysicalTrafficManagerIO.h:158
	Vector3[100] maLinesStart;

	// BrnPhysicalTrafficManagerIO.h:159
	Vector3[100] maLinesEnd;

	// BrnPhysicalTrafficManagerIO.h:160
	VecFloat[100] mavfMinLineParams;

	// BrnPhysicalTrafficManagerIO.h:161
	Vector4[100] maNormals;

	// BrnPhysicalTrafficManagerIO.h:162
	VecFloat[100] mavfSurfaceTags;

	// BrnPhysicalTrafficManagerIO.h:163
	bool[100] mabIntersections;

public:
	// BrnPhysicalTrafficManagerIO.cpp:93
	void Construct();

	// BrnPhysicalTrafficManagerIO.cpp:123
	void Destruct();

	// BrnPhysicalTrafficManagerIO.h:252
	Vector3 GetLineSegment(int);

	// BrnPhysicalTrafficManagerIO.h:263
	Vector3 GetIntersectPoint(int);

	// BrnPhysicalTrafficManagerIO.h:275
	uint32_t GetSurfaceTag(int);

	// BrnPhysicalTrafficManagerIO.h:291
	Vector3 GetIntersectNormal(int);

}


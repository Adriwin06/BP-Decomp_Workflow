// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsLooseOctreeNode.h:37
	const uint16_t KU_INVALID_NODE = 65535;

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsLooseOctreeNode.h:37
	const uint16_t KU_INVALID_NODE = 65535;

}

// CgsLooseOctreeNode.h:40
struct CgsSceneManager::LooseOctreeNode {
private:
	// CgsLooseOctreeNode.h:121
	Vector3 mPosition;

	// CgsLooseOctreeNode.h:122
	Vector3 mHalfDimensions;

	// CgsLooseOctreeNode.h:127
	Vector4 mParams0;

	// CgsLooseOctreeNode.h:133
	Vector4 mParams1;

	// CgsLooseOctreeNode.h:136
	uint16_t muParentIndex;

	// CgsLooseOctreeNode.h:137
	uint16_t muFirstChildIndex;

	// Unknown accessibility
	// CgsSpatialPartition.h:106
	typedef IndexedLinkedList<CgsSceneManager::SpatialPartitionEntity,std::uint16_t> SpatialPartitionEntityList;

	// Unknown accessibility
	// CgsLooseOctreeNode.h:141
	LooseOctreeNode::SpatialPartitionEntityList mEntityList;

	// Unknown accessibility
	// CgsLooseOctreeNode.h:142
	uint32_t muFlags;

	// Unknown accessibility
	// CgsLooseOctreeNode.h:143
	uint32_t mxNodeEntityFlags;

	// Unknown accessibility
	// CgsLooseOctreeNode.h:144
	uint32_t muSubTreeEntityCount;

public:
	// CgsLooseOctreeNode.h:44
	void SetPosition(Vector3);

	// CgsLooseOctreeNode.h:47
	void SetHalfDimensions(Vector3);

	// CgsLooseOctreeNode.h:50
	Vector3 GetPosition() const;

	// CgsLooseOctreeNode.h:53
	Vector3 GetHalfDimensions() const;

	// CgsLooseOctreeNode.h:56
	void SetMaxEntityRadius(VecFloat);

	// CgsLooseOctreeNode.h:59
	VecFloat GetMaxEntityRadius() const;

	// CgsLooseOctreeNode.h:62
	void SetHalfBaseSize(VecFloat);

	// CgsLooseOctreeNode.h:65
	VecFloat GetHalfBaseSize() const;

	// CgsLooseOctreeNode.h:68
	void SetMaxRadiusThreshold(VecFloat);

	// CgsLooseOctreeNode.h:71
	VecFloat GetMaxRadiusThreshold() const;

	// CgsLooseOctreeNode.h:74
	void SetHalfSize(VecFloat);

	// CgsLooseOctreeNode.h:77
	VecFloat GetHalfSize() const;

	// CgsLooseOctreeNode.h:81
	void SetMinY(VecFloat);

	// CgsLooseOctreeNode.h:84
	VecFloat GetMinY() const;

	// CgsLooseOctreeNode.h:87
	void SetMaxY(VecFloat);

	// CgsLooseOctreeNode.h:90
	VecFloat GetMaxY() const;

	// CgsLooseOctreeNode.h:93
	void SetHalfHeight(VecFloat);

	// CgsLooseOctreeNode.h:96
	VecFloat GetHalfHeight() const;

	// CgsLooseOctreeNode.h:100
	uint16_t GetParentIndex() const;

	// CgsLooseOctreeNode.h:103
	void SetParentIndex(uint16_t);

	// CgsLooseOctreeNode.h:106
	uint16_t GetFirstChildIndex() const;

	// CgsLooseOctreeNode.h:109
	void SetFirstChildIndex(uint16_t);

	// CgsLooseOctreeNode.h:112
	bool HasChildren() const;

	// CgsLooseOctreeNode.h:115
	bool HasParent() const;

	// CgsLooseOctreeNode.h:118
	void CalculateBoundingBox(AxisAlignedBox &) const;

}

// CgsLooseOctreeNode.h:158
struct CgsSceneManager::LooseOctreeNodeEntityInfo {
	// CgsLooseOctreeNode.h:160
	uint32_t mxSubTreeEntityFlags;

}


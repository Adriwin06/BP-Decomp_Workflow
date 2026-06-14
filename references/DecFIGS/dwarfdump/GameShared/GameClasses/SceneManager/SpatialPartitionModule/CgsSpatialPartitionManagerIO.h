// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsSpatialPartitionManagerIO.h:35
	namespace SpatialPartitionIO {
	}

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsSpatialPartitionManagerIO.h:35
	namespace SpatialPartitionIO {
	}

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsSpatialPartitionManagerIO.h:35
	namespace SpatialPartitionIO {
		// CgsSpatialPartitionManagerIO.h:43
		enum EQueryOrigin {
			E_QUERY_ORIGIN_EXTERNAL = 0,
			E_QUERY_ORIGIN_INTERNAL = 1,
			E_QUERY_ORIGIN_COUNT = 2,
		}

		struct InEventAddEntity;

		struct InEventRemoveEntity;

		struct InEventSetEntityPosition;

		struct InEventSetEntityRadius;

		struct OutEventCoarseTestResult;

		struct InputBuffer_Update;

		struct OutputBuffer;

	}

}

// CgsSpatialPartitionManagerIO.h:81
struct CgsSceneManager::SpatialPartitionIO::InEventAddEntity : public Event {
	// CgsSpatialPartitionManagerIO.h:83
	Vector3 mPosition;

	// CgsSpatialPartitionManagerIO.h:85
	uint16_t mu16EntityIndex;

	// CgsSpatialPartitionManagerIO.h:86
	uint32_t mx32EntityTypeFlags;

	// CgsSpatialPartitionManagerIO.h:87
	float32_t mfRadius;

}

// CgsSpatialPartitionManagerIO.h:93
struct CgsSceneManager::SpatialPartitionIO::InEventRemoveEntity : public Event {
	// CgsSpatialPartitionManagerIO.h:95
	uint16_t mu16EntityIndex;

}

// CgsSpatialPartitionManagerIO.h:100
struct CgsSceneManager::SpatialPartitionIO::InEventSetEntityPosition : public Event {
	// CgsSpatialPartitionManagerIO.h:102
	Vector3 mPosition;

	// CgsSpatialPartitionManagerIO.h:104
	uint16_t mu16EntityIndex;

}

// CgsSpatialPartitionManagerIO.h:108
struct CgsSceneManager::SpatialPartitionIO::InEventSetEntityRadius : public Event {
	// CgsSpatialPartitionManagerIO.h:110
	uint16_t mu16EntityIndex;

	// CgsSpatialPartitionManagerIO.h:111
	float32_t mfRadius;

}

// CgsSpatialPartitionManagerIO.h:128
struct CgsSceneManager::SpatialPartitionIO::OutEventCoarseTestResult : public Event {
	// CgsSpatialPartitionManagerIO.h:130
	SceneQueryId mQueryId;

	// CgsSpatialPartitionManagerIO.h:131
	CgsSceneManager::SpatialPartitionIO::EQueryOrigin meQueryOrigin;

	// CgsSpatialPartitionManagerIO.h:134
	int32_t miActualNumResults;

	// CgsSpatialPartitionManagerIO.h:135
	int32_t miNumResultsStored;

	// CgsSpatialPartitionManagerIO.h:137
	const uint16_t * mpau16Results;

}

// CgsSpatialPartitionManagerIO.h:149
struct CgsSceneManager::SpatialPartitionIO::InputBuffer_Update : public IOBuffer {
	// CgsSpatialPartitionManagerIO.h:115
	typedef VariableEventQueue<135168,16> InSpatialPartitionUpdateQueue;

private:
	// CgsSpatialPartitionManagerIO.h:194
	InputBuffer_Update::InSpatialPartitionUpdateQueue mSpatialPartitionUpdateQueue;

public:
	// CgsSpatialPartitionManagerIO.h:154
	void Construct();

	// CgsSpatialPartitionManagerIO.h:158
	void Destruct();

	// CgsSpatialPartitionManagerIO.h:169
	void AddEntity(uint16_t, uint32_t, Vector3, float32_t);

	// CgsSpatialPartitionManagerIO.h:174
	void RemoveEntity(uint16_t);

	// CgsSpatialPartitionManagerIO.h:180
	void SetEntityPosition(uint16_t, Vector3);

	// CgsSpatialPartitionManagerIO.h:186
	void SetEntityRadius(uint16_t, float32_t);

	// CgsSpatialPartitionManagerIO.h:189
	const InputBuffer_Update::InSpatialPartitionUpdateQueue * GetSpatialPartitionUpdateQueue() const;

	// CgsSpatialPartitionManagerIO.h:190
	InputBuffer_Update::InSpatialPartitionUpdateQueue * GetSpatialPartitionUpdateQueue();

}

// CgsSpatialPartitionManagerIO.h:206
struct CgsSceneManager::SpatialPartitionIO::OutputBuffer : public IOBuffer {
	// CgsSpatialPartitionManagerIO.h:118
	typedef VariableEventQueue<20480,16> OutQueryResultsQueue;

private:
	// CgsSpatialPartitionManagerIO.h:226
	OutputBuffer::OutQueryResultsQueue mQueryResultQueue;

	// CgsSpatialPartitionManagerIO.h:227
	CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault mCoarseResultBuffer;

public:
	// CgsSpatialPartitionManagerIO.h:211
	void Construct();

	// CgsSpatialPartitionManagerIO.h:215
	void Destruct();

	// CgsSpatialPartitionManagerIO.h:218
	const OutputBuffer::OutQueryResultsQueue * GetQueryResultQueue() const;

	// CgsSpatialPartitionManagerIO.h:219
	OutputBuffer::OutQueryResultsQueue * GetQueryResultQueue();

	// CgsSpatialPartitionManagerIO.h:221
	const CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault * GetCoarseResultBuffer() const;

	// CgsSpatialPartitionManagerIO.h:222
	CgsSceneManager::SpatialPartition::LineTestRecursiveFuncParams::CoarseQueryResultBufferDefault * GetCoarseResultBuffer();

}


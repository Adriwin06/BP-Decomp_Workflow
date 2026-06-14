// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsOverlapCullingModuleIO.h:32
	namespace OverlapCullingIO {
		// CgsOverlapCullingModuleIO.h:37
		const uint32_t guMAX_NUM_BODIES = 16384;

		// CgsOverlapCullingModuleIO.h:38
		const uint32_t guMAX_NUM_INTERNAL_VOLUME_REQUESTS = 256;

	}

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsOverlapCullingModuleIO.h:32
	namespace OverlapCullingIO {
		// CgsOverlapCullingModuleIO.h:37
		const uint32_t guMAX_NUM_BODIES = 16384;

		// CgsOverlapCullingModuleIO.h:38
		const uint32_t guMAX_NUM_INTERNAL_VOLUME_REQUESTS = 256;

	}

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsOverlapCullingModuleIO.h:32
	namespace OverlapCullingIO {
		struct AddInternalCollisionVolume;

		struct RemoveInternalCollisionVolume;

		struct InputBuffer;

		struct OutputBuffer;

		// CgsOverlapCullingModuleIO.h:37
		const uint32_t guMAX_NUM_BODIES = 16384;

		// CgsOverlapCullingModuleIO.h:38
		const uint32_t guMAX_NUM_INTERNAL_VOLUME_REQUESTS = 256;

	}

}

// CgsOverlapCullingModuleIO.h:46
struct CgsSceneManager::OverlapCullingIO::AddInternalCollisionVolume : public Event {
	// CgsOverlapCullingModuleIO.h:48
	uint32_t muVolumeInstanceIndex;

	// CgsOverlapCullingModuleIO.h:49
	uint32_t muInternalVolumeInstanceIndex;

	// CgsOverlapCullingModuleIO.h:50
	uint32_t muEscapeVolumeInstanceIndex;

}

// CgsOverlapCullingModuleIO.h:55
struct CgsSceneManager::OverlapCullingIO::RemoveInternalCollisionVolume : public Event {
	// CgsOverlapCullingModuleIO.h:57
	uint32_t muVolumeInstanceIndex;

}

// CgsOverlapCullingModuleIO.h:75
struct CgsSceneManager::OverlapCullingIO::InputBuffer : public IOBuffer {
	// CgsOverlapCullingModuleIO.h:61
	typedef EventQueue<CgsSceneManager::OverlappingPair,16384> InOverlappingPairQueue;

private:
	// CgsOverlapCullingModuleIO.h:98
	InputBuffer::InOverlappingPairQueue mOverlappingPairQueue;

	// Unknown accessibility
	// CgsOverlapCullingModuleIO.h:63
	typedef EventQueue<CgsSceneManager::OverlapCullingIO::AddInternalCollisionVolume,256> InAddInternalVolumeQueue;

	// CgsOverlapCullingModuleIO.h:99
	InputBuffer::InAddInternalVolumeQueue mAddInternalVolumeQueue;

	// Unknown accessibility
	// CgsOverlapCullingModuleIO.h:64
	typedef EventQueue<CgsSceneManager::OverlapCullingIO::RemoveInternalCollisionVolume,256> InRemoveInternalVolumeQueue;

	// CgsOverlapCullingModuleIO.h:100
	InputBuffer::InRemoveInternalVolumeQueue mRemoveInternalVolumeQueue;

public:
	// CgsOverlapCullingModuleIO.h:80
	void Construct();

	// CgsOverlapCullingModuleIO.h:84
	void Destruct();

	// CgsOverlapCullingModuleIO.h:87
	const InputBuffer::InOverlappingPairQueue * GetOverlappingPairQueue() const;

	// CgsOverlapCullingModuleIO.h:88
	const InputBuffer::InAddInternalVolumeQueue * GetAddInternalVolumeQueue() const;

	// CgsOverlapCullingModuleIO.h:89
	const InputBuffer::InRemoveInternalVolumeQueue * GetRemoveInternalVolumeQueue() const;

	// CgsOverlapCullingModuleIO.h:91
	InputBuffer::InOverlappingPairQueue * GetOverlappingPairQueue();

	// CgsOverlapCullingModuleIO.h:92
	InputBuffer::InAddInternalVolumeQueue * GetAddInternalVolumeQueue();

	// CgsOverlapCullingModuleIO.h:93
	InputBuffer::InRemoveInternalVolumeQueue * GetRemoveInternalVolumeQueue();

}

// CgsOverlapCullingModuleIO.h:116
struct CgsSceneManager::OverlapCullingIO::OutputBuffer : public IOBuffer {
	// CgsOverlapCullingModuleIO.h:104
	typedef EventQueue<CgsSceneManager::Contact,16384> OutContactQueue;

private:
	// CgsOverlapCullingModuleIO.h:133
	OutputBuffer::OutContactQueue mContactQueue;

public:
	// CgsOverlapCullingModuleIO.h:121
	void Construct();

	// CgsOverlapCullingModuleIO.h:125
	void Destruct();

	// CgsOverlapCullingModuleIO.h:128
	const OutputBuffer::OutContactQueue * GetContactQueue() const;

	// CgsOverlapCullingModuleIO.h:129
	OutputBuffer::OutContactQueue * GetContactQueue();

}


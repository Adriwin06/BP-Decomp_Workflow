// CgsEntityId.h:27
namespace CgsSceneManager {
	// CgsOverlapGenerationModuleIO.h:34
	namespace OverlapGenerationIO {
		// CgsOverlapGenerationModuleIO.h:38
		const uint32_t guMAX_NUM_BODIES = 16384;

	}

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsOverlapGenerationModuleIO.h:34
	namespace OverlapGenerationIO {
		// CgsOverlapGenerationModuleIO.h:38
		const uint32_t guMAX_NUM_BODIES = 16384;

	}

}

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// CgsOverlapGenerationModuleIO.h:34
	namespace OverlapGenerationIO {
		struct InAddBody;

		struct InForceNoPadding;

		struct InUpdateBody;

		struct InRemoveBody;

		struct InputBuffer;

		struct OutputBuffer;

		// CgsOverlapGenerationModuleIO.h:38
		const uint32_t guMAX_NUM_BODIES = 16384;

	}

}

// CgsOverlapGenerationModuleIO.h:54
struct CgsSceneManager::OverlapGenerationIO::InAddBody : public Event {
	// CgsOverlapGenerationModuleIO.h:56
	AABBox mAabb;

	// CgsOverlapGenerationModuleIO.h:57
	InEventAddForCollision::CullingGroup mCullGroup;

	// CgsOverlapGenerationModuleIO.h:58
	uint32_t muIndex;

	// CgsOverlapGenerationModuleIO.h:59
	rw::physics::BodyState meBodyState;

	// CgsOverlapGenerationModuleIO.h:62
	VolumeInstanceId mVolumeInstanceID;

}

// CgsOverlapGenerationModuleIO.h:111
struct CgsSceneManager::OverlapGenerationIO::InForceNoPadding : public Event {
	// CgsOverlapGenerationModuleIO.h:113
	uint32_t muVolInstIndex;

}

// CgsOverlapGenerationModuleIO.h:144
struct CgsSceneManager::OverlapGenerationIO::InUpdateBody : public Event {
	// CgsOverlapGenerationModuleIO.h:146
	AABBox mAabb;

	// CgsOverlapGenerationModuleIO.h:147
	Vector3 mPadding;

	// CgsOverlapGenerationModuleIO.h:148
	uint32_t muIndex;

	// CgsOverlapGenerationModuleIO.h:149
	VolumeInstanceId mVolumeInstanceID;

}

// CgsOverlapGenerationModuleIO.h:163
struct CgsSceneManager::OverlapGenerationIO::InRemoveBody : public Event {
	// CgsOverlapGenerationModuleIO.h:165
	VolumeInstanceId mVolumeInstanceID;

	// CgsOverlapGenerationModuleIO.h:166
	uint32_t muIndex;

}

// CgsOverlapGenerationModuleIO.h:180
struct CgsSceneManager::OverlapGenerationIO::InputBuffer : public IOBuffer {
	// CgsOverlapGenerationModuleIO.h:64
	typedef EventQueue<CgsSceneManager::OverlapGenerationIO::InAddBody,16384> InAddBodyQueue;

private:
	// CgsOverlapGenerationModuleIO.h:234
	InputBuffer::InAddBodyQueue mAddBodyQueue;

	// Unknown accessibility
	// CgsOverlapGenerationModuleIO.h:151
	typedef EventQueue<CgsSceneManager::OverlapGenerationIO::InUpdateBody,16384> InUpdateBodyQueue;

	// CgsOverlapGenerationModuleIO.h:235
	InputBuffer::InUpdateBodyQueue mUpdateBodyQueue;

	// Unknown accessibility
	// CgsOverlapGenerationModuleIO.h:168
	typedef EventQueue<CgsSceneManager::OverlapGenerationIO::InRemoveBody,16384> InRemoveBodyQueue;

	// CgsOverlapGenerationModuleIO.h:236
	InputBuffer::InRemoveBodyQueue mRemoveBodyQueue;

	// Unknown accessibility
	// CgsOverlapGenerationModuleIO.h:115
	typedef EventQueue<CgsSceneManager::OverlapGenerationIO::InForceNoPadding,128> InForceNoPaddingQueue;

	// CgsOverlapGenerationModuleIO.h:237
	InputBuffer::InForceNoPaddingQueue mForceNoPaddingQueue;

public:
	// CgsOverlapGenerationModuleIO.h:185
	void Construct();

	// CgsOverlapGenerationModuleIO.h:189
	void Destruct();

	// CgsOverlapGenerationModuleIO.h:200
	void AddBody(uint32_t, AABBox *, InEventAddForCollision::CullingGroup, rw::physics::BodyState, VolumeInstanceId);

	// CgsOverlapGenerationModuleIO.h:205
	void RemoveBody(uint32_t, VolumeInstanceId);

	// CgsOverlapGenerationModuleIO.h:212
	void UpdateBody(uint32_t, AABBox *, Vector3, VolumeInstanceId);

	// CgsOverlapGenerationModuleIO.h:216
	void ForceNoPadding(uint32_t);

	// CgsOverlapGenerationModuleIO.h:222
	const InputBuffer::InAddBodyQueue * GetAddBodyQueue() const;

	// CgsOverlapGenerationModuleIO.h:223
	const InputBuffer::InUpdateBodyQueue * GetUpdateBodyQueue() const;

	// CgsOverlapGenerationModuleIO.h:224
	const InputBuffer::InRemoveBodyQueue * GetRemoveBodyQueue() const;

	// CgsOverlapGenerationModuleIO.h:225
	const InputBuffer::InForceNoPaddingQueue * GetForceNoPaddingQueue() const;

	// CgsOverlapGenerationModuleIO.h:227
	InputBuffer::InAddBodyQueue * GetAddBodyQueue();

	// CgsOverlapGenerationModuleIO.h:228
	InputBuffer::InUpdateBodyQueue * GetUpdateBodyQueue();

	// CgsOverlapGenerationModuleIO.h:229
	InputBuffer::InRemoveBodyQueue * GetRemoveBodyQueue();

	// CgsOverlapGenerationModuleIO.h:230
	InputBuffer::InForceNoPaddingQueue * GetForceNoPaddingQueue();

}

// CgsOverlapGenerationModuleIO.h:253
struct CgsSceneManager::OverlapGenerationIO::OutputBuffer : public IOBuffer {
	// CgsOverlapGenerationModuleIO.h:242
	typedef EventQueue<CgsSceneManager::OverlappingPair,16384> OutOverlappingPairQueue;

private:
	// CgsOverlapGenerationModuleIO.h:271
	OutputBuffer::OutOverlappingPairQueue mOverlappingPairQueue;

public:
	// CgsOverlapGenerationModuleIO.h:258
	void Construct();

	// CgsOverlapGenerationModuleIO.h:262
	void Destruct();

	// CgsOverlapGenerationModuleIO.h:266
	const OutputBuffer::OutOverlappingPairQueue * GetOverlappingPairQueue() const;

	// CgsOverlapGenerationModuleIO.h:267
	OutputBuffer::OutOverlappingPairQueue * GetOverlappingPairQueue();

}


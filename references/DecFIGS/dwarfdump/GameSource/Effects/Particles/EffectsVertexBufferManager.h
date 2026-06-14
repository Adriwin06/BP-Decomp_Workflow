// EffectsVertexBufferManager.h:42
struct EffectsVertexBufferManager {
private:
	// EffectsVertexBufferManager.h:78
	extern const uint32_t KU_NUM_BUFFERS = 2;

	// EffectsVertexBufferManager.h:80
	renderengine::VertexBuffer *[2] mapVertexBuffer;

	// EffectsVertexBufferManager.h:81
	void *[2] mapVertexBufferAddress;

	// EffectsVertexBufferManager.h:82
	uint32_t muVertexBufferSize;

	// EffectsVertexBufferManager.h:83
	uint8_t muCurrentBuffer;

	// EffectsVertexBufferManager.h:84
	bool8_t mbLocked;

	// EffectsVertexBufferManager.h:85
	EffectsVertexBuffer mCurrentBuffer;

public:
	// EffectsVertexBufferManager.h:51
	void Construct(rw::IResourceAllocator *, uint32_t, bool8_t);

	// EffectsVertexBufferManager.h:57
	void Destruct(rw::IResourceAllocator *);

	// EffectsVertexBufferManager.h:61
	EffectsVertexBufferLocked & Lock();

	// EffectsVertexBufferManager.h:65
	void UnLock();

	// EffectsVertexBufferManager.h:70
	renderengine::VertexBuffer * GetVertexBuffer() const;

	// EffectsVertexBufferManager.h:74
	void FlipBuffers();

}

// EffectsVertexBufferManager.h:78
extern const uint32_t KU_NUM_BUFFERS = 2;


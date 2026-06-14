// EffectsVertexBufferManager.cpp:129
void EffectsVertexBufferManager::Lock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsVertexBufferManager.cpp:135
		const EffectsVertexBufferLocked & lLockedBuffer;

	}
}

// EffectsVertexBufferManager.cpp:151
void EffectsVertexBufferManager::UnLock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// EffectsVertexBufferManager.cpp:105
void EffectsVertexBufferManager::Destruct(rw::IResourceAllocator *const  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsVertexBufferManager.cpp:109
		uint32_t luCount;

		rw::IResourceAllocator::Free(/* parameters */);
		rw::Resource::Resource(/* parameters */);
	}
}

// EffectsVertexBufferManager.cpp:49
void EffectsVertexBufferManager::Construct(rw::IResourceAllocator *const  lpAllocator, const uint32_t  luVertexBufferSize, const bool8_t  lbPs3CreateInMainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsVertexBufferManager.cpp:56
		const uint32_t luVbType;

		// EffectsVertexBufferManager.cpp:63
		renderengine::VertexBuffer::Parameters lVbParams;

		// EffectsVertexBufferManager.cpp:67
		ResourceDescriptor lVbResDesc;

	}
	renderengine::VertexBuffer::Parameters::SetBufferSize(/* parameters */);
	renderengine::VertexBuffer::Parameters::Parameters(/* parameters */);
	renderengine::VertexBuffer::Parameters::SetType(/* parameters */);
	{
		// EffectsVertexBufferManager.cpp:69
		uint32_t luCount;

		{
			// EffectsVertexBufferManager.cpp:71
			Resource lResource;

			// EffectsVertexBufferManager.cpp:77
			renderengine::VertexBuffer::BatchIterator lBatchIterator;

			rw::IResourceAllocator::Allocate(/* parameters */);
			renderengine::VertexBuffer::BatchIterator::GetLockedBuffer(/* parameters */);
		}
	}
	~ResourceDescriptor(/* parameters */);
}


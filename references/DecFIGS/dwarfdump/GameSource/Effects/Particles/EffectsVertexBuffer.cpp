// EffectsVertexBuffer.cpp:57
void EffectsVertexBuffer::Construct(void *const  lpBuffer, const uint32_t  luBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// EffectsVertexBuffer.cpp:76
void EffectsVertexBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// EffectsVertexBuffer.cpp:96
void EffectsVertexBuffer::Lock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsVertexBuffer.cpp:104
		const EffectsVertexBufferLocked & lLockedBuffer;

	}
}

// EffectsVertexBuffer.cpp:120
void EffectsVertexBuffer::UnLock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// EffectsVertexBuffer.cpp:147
void EffectsVertexBufferLocked::BeginBatch(const EffectsVertexBufferIterator &  lOutVertexIterator, const EffectsVertexBufferBatch &  lOutBatch, const uint32_t  luVertexStride) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsVertexBuffer.cpp:152
		const uint32_t luCurrentOffset;

		// EffectsVertexBuffer.cpp:154
		const uint32_t luVertexOffset;

		// EffectsVertexBuffer.cpp:155
		const uint32_t luAlignedOffset;

		// EffectsVertexBuffer.cpp:172
		uint8_t *const lpAlignedAddress;

		EffectsVertexBufferIterator::SetStride(/* parameters */);
		EffectsVertexBufferIterator::SetBaseAddress(/* parameters */);
		EffectsVertexBufferIterator::SetTopAddress(/* parameters */);
		EffectsVertexBufferIterator::SetCurrentAddress(/* parameters */);
	}
}

// EffectsVertexBuffer.cpp:203
void EffectsVertexBufferLocked::EndBatch(const EffectsVertexBufferIterator &  lInOutVertexIterator, const EffectsVertexBufferBatch &  lInOutBatch, const uint32_t  luVertexStride) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// EffectsVertexBuffer.cpp:210
		const uint8_t *const lpIteratorCurrentAddress;

		// EffectsVertexBuffer.cpp:211
		const uint8_t *const lpIteratorBaseAddress;

		// EffectsVertexBuffer.cpp:212
		uint32_t luBytesWritten;

		// EffectsVertexBuffer.cpp:213
		const uint32_t luVerticesWritten;

		renderengine::VertexIteratorBaseClass::SetBuffer(/* parameters */);
	}
}


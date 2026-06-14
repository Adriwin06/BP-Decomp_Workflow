// EffectsVertexBuffer.h:42
struct EffectsVertexBufferBatch {
private:
	// EffectsVertexBuffer.h:59
	uint32_t muStartVertex;

	// EffectsVertexBuffer.h:60
	uint32_t muVertexCount;

public:
	// EffectsVertexBuffer.h:46
	uint32_t GetStartVertex() const;

	// EffectsVertexBuffer.h:52
	uint32_t GetVertexCount() const;

}

// EffectsVertexBuffer.h:66
struct EffectsVertexBufferIterator : public VertexIteratorBaseClass {
private:
	// EffectsVertexBuffer.h:153
	const uint8_t * mpStartAddress;

	// EffectsVertexBuffer.h:154
	const uint8_t * mpTopAddress;

	// EffectsVertexBuffer.h:155
	uint32_t muStride;

public:
	// EffectsVertexBuffer.h:70
	uint32_t GetVerticesFree();

protected:
	// EffectsVertexBuffer.h:80
	uint32_t GetStride() const;

private:
	// EffectsVertexBuffer.h:90
	void SetBaseAddress(const uint8_t *);

	// EffectsVertexBuffer.h:96
	const uint8_t * GetBaseAddress() const;

	// EffectsVertexBuffer.h:104
	void SetTopAddress(const uint8_t *);

	// EffectsVertexBuffer.h:110
	const uint8_t * GetTopAddress() const;

	// EffectsVertexBuffer.h:118
	void SetCurrentAddress(uint8_t *);

	// EffectsVertexBuffer.h:124
	const uint8_t * GetCurrentAddress() const;

	// EffectsVertexBuffer.h:139
	uint32_t GetBytesFree() const;

	// EffectsVertexBuffer.h:148
	void SetStride(uint32_t);

}

// EffectsVertexBuffer.h:161
struct EffectsVertexBuffer {
protected:
	// EffectsVertexBuffer.h:181
	extern const uint8_t KX_FLAG_LOCKED = 1;

	// EffectsVertexBuffer.h:182
	extern const uint8_t KX_FLAG_IN_BATCH = 2;

	// EffectsVertexBuffer.h:184
	uint8_t * mpLockedBufferBaseAddress;

	// EffectsVertexBuffer.h:185
	uint8_t * mpLockedBufferCurrentAddress;

	// EffectsVertexBuffer.h:186
	uint8_t * mpLockedBufferTopAddress;

	// EffectsVertexBuffer.h:187
	uint8_t mxFlags;

public:
	// EffectsVertexBuffer.h:168
	void Construct(void *, uint32_t);

	// EffectsVertexBuffer.h:171
	void Destruct();

	// EffectsVertexBuffer.h:174
	EffectsVertexBufferLocked & Lock();

	// EffectsVertexBuffer.h:177
	void UnLock();

}

// EffectsVertexBuffer.h:191
struct EffectsVertexBufferLocked : protected EffectsVertexBuffer {
public:
	// EffectsVertexBuffer.h:202
	void BeginBatch(EffectsVertexBufferIterator &, EffectsVertexBufferBatch &, uint32_t);

	// EffectsVertexBuffer.h:212
	void EndBatch(EffectsVertexBufferIterator &, EffectsVertexBufferBatch &, uint32_t);

	// EffectsVertexBuffer.h:234
	uint32_t GetBytesUsed() const;

	// EffectsVertexBuffer.h:243
	uint32_t GetBytesFree() const;

}

// EffectsVertexBuffer.h:181
extern const uint8_t KX_FLAG_LOCKED = 1;

// EffectsVertexBuffer.h:182
extern const uint8_t KX_FLAG_IN_BATCH = 2;


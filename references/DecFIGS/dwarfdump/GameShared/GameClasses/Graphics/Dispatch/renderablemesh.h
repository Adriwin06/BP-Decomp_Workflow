// renderablemesh.h:78
struct RenderableMesh {
	// renderablemesh.h:140
	PackedOobb mPackedBoundingBox;

	// renderablemesh.h:141
	DrawIndexedParameters mDrawIndexedParameters;

	// renderablemesh.h:142
	CgsGraphics::MaterialAssembly * mpMaterialAssembly;

	// renderablemesh.h:143
	uint8_t mu8NumVertexDescriptors;

	// renderablemesh.h:144
	uint8_t mu8InstanceCount;

	// renderablemesh.h:145
	uint8_t mu8NumVertexBuffers;

	// renderablemesh.h:146
	uint8_t mu8Flags;

	// renderablemesh.h:151
	void *[1] maBuffers;

public:
	// renderablemesh.h:83
	ResourceDescriptor GetResourceDescriptor(uint32_t, uint32_t);

	// renderablemesh.h:84
	RenderableMesh * Initialize(const Resource &);

	// renderablemesh.h:85
	void Release();

	// renderablemesh.h:103
	uint32_t GetNumVertexBuffers() const;

	// renderablemesh.h:106
	renderengine::VertexBuffer * GetVertexBuffer(uint32_t) const;

	// renderablemesh.h:109
	IndexBuffer * GetIndexBuffer() const;

	// renderablemesh.h:112
	renderengine::VertexBuffer * GetVertexBuffer(uint32_t);

	// renderablemesh.h:115
	IndexBuffer * GetIndexBuffer();

	// renderablemesh.h:118
	uint32_t GetVertexDescriptorBufferIndex(uint32_t) const;

	// renderablemesh.h:121
	uint32_t GetBufferArraySize() const;

	// renderablemesh.h:126
	void SetVertexDescriptor(uint32_t, VertexDescriptor *);

	// renderablemesh.h:130
	VertexDescriptor * GetVertexDescriptor(uint32_t) const;

	// renderablemesh.h:134
	uint32_t GetNumVertexDescriptors() const;

	// renderablemesh.h:137
	uint8_t GetFlags() const;

}

// renderablemesh.h:78
struct RenderableMesh {
	// renderablemesh.h:140
	PackedOobb mPackedBoundingBox;

	// renderablemesh.h:141
	DrawIndexedParameters mDrawIndexedParameters;

	// renderablemesh.h:142
	MaterialAssembly * mpMaterialAssembly;

	// renderablemesh.h:143
	uint8_t mu8NumVertexDescriptors;

	// renderablemesh.h:144
	uint8_t mu8InstanceCount;

	// renderablemesh.h:145
	uint8_t mu8NumVertexBuffers;

	// renderablemesh.h:146
	uint8_t mu8Flags;

	// renderablemesh.h:151
	void *[1] maBuffers;

public:
	// renderablemesh.h:83
	ResourceDescriptor GetResourceDescriptor(uint32_t, uint32_t);

	// renderablemesh.h:84
	RenderableMesh * Initialize(const Resource &);

	// renderablemesh.h:85
	void Release();

	// renderablemesh.h:103
	uint32_t GetNumVertexBuffers() const;

	// renderablemesh.h:106
	renderengine::VertexBuffer * GetVertexBuffer(uint32_t) const;

	// renderablemesh.h:109
	IndexBuffer * GetIndexBuffer() const;

	// renderablemesh.h:112
	renderengine::VertexBuffer * GetVertexBuffer(uint32_t);

	// renderablemesh.h:115
	IndexBuffer * GetIndexBuffer();

	// renderablemesh.h:118
	uint32_t GetVertexDescriptorBufferIndex(uint32_t) const;

	// renderablemesh.h:121
	uint32_t GetBufferArraySize() const;

	// renderablemesh.h:126
	void SetVertexDescriptor(uint32_t, VertexDescriptor *);

	// renderablemesh.h:130
	VertexDescriptor * GetVertexDescriptor(uint32_t) const;

	// renderablemesh.h:134
	uint32_t GetNumVertexDescriptors() const;

	// renderablemesh.h:137
	uint8_t GetFlags() const;

}


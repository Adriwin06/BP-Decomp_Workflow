// CgsRwRenderableResourceType.h:70
void CgsResource::RwRenderableResourceType::RwRenderableResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsRwRenderableResourceType.h:70
struct CgsResource::RwRenderableResourceType : public CgsResource::Type {
public:
	// CgsRwRenderableResourceType.cpp:77
	virtual uint32_t GetTypeID() const;

	// CgsRwRenderableResourceType.cpp:685
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsRwRenderableResourceType.cpp:96
	virtual bool DeSerialise(void *) const;

	// CgsRwRenderableResourceType.cpp:463
	virtual void FixUp(void *, const Resource &) const;

	// CgsRwRenderableResourceType.cpp:376
	virtual void FixDown(void *, const Resource &) const;

	// CgsRwRenderableResourceType.cpp:893
	virtual RwUInt32 GetImportCount(const void *) const;

	// CgsRwRenderableResourceType.cpp:926
	virtual void GetImportPointer(const void *, RwUInt32, RwUInt32 *, const void **) const;

private:
	// CgsRwRenderableResourceType.cpp:776
	ResourceDescriptor GetDrawIndexParamResourceDescriptor(const DrawIndexedParameters *) const;

	// CgsRwRenderableResourceType.cpp:819
	ResourceDescriptor GetMeshStateResourceDescriptor(const MeshHelper *) const;

	// CgsRwRenderableResourceType.cpp:796
	ResourceDescriptor GetIndexBufferResourceDescriptor(const IndexBuffer *) const;

	// CgsRwRenderableResourceType.cpp:842
	ResourceDescriptor GetVertexBufferResourceDescriptor(const VertexBuffer *) const;

	// CgsRwRenderableResourceType.cpp:869
	ResourceDescriptor GetRenderableMeshResourceDescriptor(const RenderableMesh *) const;

	// CgsRwRenderableResourceType.cpp:736
	ResourceDescriptor GetRenderableBasicResourceDescriptor(const Renderable *) const;

	// CgsRwRenderableResourceType.h:172
	RenderableMesh * SerialiseRenderableMesh(const RenderableMesh *, uint8_t **, uint8_t **, const ResourceDescriptor &, const Renderable *) const;

	// CgsRwRenderableResourceTypePS3.cpp:182
	void FixUpRenderableMesh(RenderableMesh *, const Resource &) const;

	// CgsRwRenderableResourceType.cpp:602
	uint32_t CalculateRenderableMeshOffset(const Renderable *, uint32_t) const;

	// CgsRwRenderableResourceType.cpp:1255
	virtual bool DebugValidate(const void *) const;

	// CgsRwRenderableResourceType.cpp:1178
	uint32_t CountNumSubMaterialVertexDescriptorImports(const Renderable *) const;

	// CgsRwRenderableResourceType.cpp:1210
	RenderableMesh * FindSubMaterialVertDescImportMesh(const Renderable *, uint32_t, uint32_t &, uint32_t &) const;

	// CgsRwRenderableResourceType.h:224
	virtual CgsResource::EDebugResourceCategory GetDebugResourceCategory() const;

}


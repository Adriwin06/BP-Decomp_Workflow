// Renderable.h:88
struct Renderable {
	// Renderable.h:119
	struct ObjectScopeTextureInfo {
		// Renderable.h:120
		uint16_t mu16NumTextures;

		// Renderable.h:121
		uint16_t mu16MaxNumTextures;

		// Renderable.h:122
		int16_t * mpi16PurposeToIndexMapping;

		// Renderable.h:123
		renderengine::Texture ** mppTextures;

		// Renderable.h:124
		char ** mppcTextureNames;

	}

	// Renderable.h:131
	struct Parameters {
		// Renderable.h:132
		uint32_t numMeshes;

	}

	// Renderable.h:179
	Vector3Plus mBoundingSphere;

	// Renderable.h:187
	uint16_t mu16VersionNumber;

	// Renderable.h:188
	uint16_t mu16NumMeshes;

	// Renderable.h:189
	RenderableMesh ** mppMeshes;

	// Renderable.h:190
	Renderable::ObjectScopeTextureInfo * mpObjectScopeTextureInfo;

	// Renderable.h:191
	uint16_t mu16Flags;

public:
	// Renderable.h:137
	ResourceDescriptor GetResourceDescriptor(const Renderable::Parameters &);

	// Renderable.h:138
	Renderable * Initialize(const Resource &, const Renderable::Parameters &);

	// Renderable.h:139
	void Release();

	// Renderable.h:160
	renderengine::Texture * GetObjectScopeTexture(CgsGraphics::TexturePurpose) const;

	// Renderable.h:164
	bool UsesTexture(const Texture *) const;

	// Renderable.h:173
	bool HasObjectScopeTextures() const;

}

// renderable.h:88
struct Renderable {
	// renderable.h:119
	struct ObjectScopeTextureInfo {
		// renderable.h:120
		uint16_t mu16NumTextures;

		// renderable.h:121
		uint16_t mu16MaxNumTextures;

		// renderable.h:122
		int16_t * mpi16PurposeToIndexMapping;

		// renderable.h:123
		renderengine::Texture ** mppTextures;

		// renderable.h:124
		char ** mppcTextureNames;

	}

	// renderable.h:131
	struct Parameters {
		// renderable.h:132
		uint32_t numMeshes;

	}

	// renderable.h:179
	Vector3Plus mBoundingSphere;

	// renderable.h:187
	uint16_t mu16VersionNumber;

	// renderable.h:188
	uint16_t mu16NumMeshes;

	// renderable.h:189
	RenderableMesh ** mppMeshes;

	// renderable.h:190
	Renderable::ObjectScopeTextureInfo * mpObjectScopeTextureInfo;

	// renderable.h:191
	uint16_t mu16Flags;

public:
	// renderable.h:137
	ResourceDescriptor GetResourceDescriptor(const Renderable::Parameters &);

	// renderable.h:138
	Renderable * Initialize(const Resource &, const Renderable::Parameters &);

	// renderable.h:139
	void Release();

	// renderable.h:160
	renderengine::Texture * GetObjectScopeTexture(CgsGraphics::TexturePurpose) const;

	// renderable.h:164
	bool UsesTexture(const Texture *) const;

	// renderable.h:173
	bool HasObjectScopeTextures() const;

}


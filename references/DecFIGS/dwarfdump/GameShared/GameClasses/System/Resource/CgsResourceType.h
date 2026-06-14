// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceType.h:69
	enum EDebugResourceCategory {
		E_DEBUGRESOURCECATEGORY_OVERHEAD = 0,
		E_DEBUGRESOURCECATEGORY_MATERIAL = 1,
		E_DEBUGRESOURCECATEGORY_MESH = 2,
		E_DEBUGRESOURCECATEGORY_TEXTURE = 3,
		E_DEBUGRESOURCECATEGORY_MISC = 4,
		E_DEBUGRESOURCECATEGORY_DEBUG = 5,
		E_DEBUGRESOURCECATEGORY_COUNT = 6,
	}

	// Declaration
	struct Type {
	public:
		// CgsResourceType.h:314
		void * operator new(size_t, rw::IResourceAllocator *);

		Type();

	}

}

// CgsResourceType.h:108
void CgsResource::Type::Type() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsResourceTypeIds.h:28
namespace CgsResource {
	// Declaration
	struct Type {
	public:
		// CgsResourceType.h:346
		StaticSoundEntity * FixUpPointer<BrnSound::World::StaticSoundEntity>(const StaticSoundEntity *, const void *) const;

		// CgsResourceType.h:346
		SubRegionDescriptor * FixUpPointer<BrnSound::World::SubRegionDescriptor>(const SubRegionDescriptor *, const void *) const;

	}

}

// programbuffer.h:24
namespace CgsResource {
	// Declaration
	struct Type {
	public:
		// CgsResourceType.h:346
		VoiceHierarchyNode * FixUpPointer<CgsSound::Logic::VoiceHierarchyNode>(const VoiceHierarchyNode *, const void *) const;

		// CgsResourceType.h:346
		ExternalConnectionDescriptor * FixUpPointer<CgsSound::Logic::ExternalConnectionDescriptor>(const CgsSound::Logic::ExternalConnectionDescriptor *, const void *) const;

		// CgsResourceType.h:346
		VoiceHierarchy ** FixUpPointer<CgsSound::Logic::VoiceHierarchy*>(VoiceHierarchy *const*, const void *) const;

		// CgsResourceType.h:346
		ID * FixUpPointer<CgsResource::ID>(const ID *, const void *) const;

		// CgsResourceType.h:346
		MessageResponse * FixUpPointer<CgsSound::Logic::MessageResponse>(const CgsSound::Logic::MessageResponse *, const void *) const;

	}

}

// CgsResourceTypeIds.h:28
namespace CgsResource {
	// CgsResourceType.h:69
	enum EDebugResourceCategory {
		E_DEBUGRESOURCECATEGORY_OVERHEAD = 0,
		E_DEBUGRESOURCECATEGORY_MATERIAL = 1,
		E_DEBUGRESOURCECATEGORY_MESH = 2,
		E_DEBUGRESOURCECATEGORY_TEXTURE = 3,
		E_DEBUGRESOURCECATEGORY_MISC = 4,
		E_DEBUGRESOURCECATEGORY_DEBUG = 5,
		E_DEBUGRESOURCECATEGORY_COUNT = 6,
	}

	// Declaration
	struct Type {
	public:
		// CgsResourceType.h:362
		Renderable ** FixDownPointer<Renderable*>(Renderable *const*, const void *) const;

		// CgsResourceType.h:362
		uint8_t * FixDownPointer<std::uint8_t>(const uint8_t *, const void *) const;

		// CgsResourceType.h:362
		float32_t * FixDownPointer<float32_t>(const float32_t *, const void *) const;

	protected:
		// CgsResourceType.h:387
		void ReBaseTechniqueFixDownAndCopy(void *, Resource &, Resource &, ResourceDescriptor &, int32_t) const;

	public:
		// CgsResourceType.h:346
		void * FixUpPointer<void>(const void *, const void *) const;

		// CgsResourceType.h:346
		Renderable ** FixUpPointer<Renderable*>(Renderable *const*, const void *) const;

		// CgsResourceType.h:346
		uint8_t * FixUpPointer<std::uint8_t>(const uint8_t *, const void *) const;

		// CgsResourceType.h:346
		float32_t * FixUpPointer<float32_t>(const float32_t *, const void *) const;

		// CgsResourceType.h:346
		Renderable::ObjectScopeTextureInfo * FixUpPointer<Renderable::ObjectScopeTextureInfo>(const Renderable::ObjectScopeTextureInfo *, const void *) const;

		// CgsResourceType.h:346
		int16_t * FixUpPointer<std::int16_t>(const int16_t *, const void *) const;

		// CgsResourceType.h:346
		renderengine::Texture ** FixUpPointer<renderengine::Texture*>(renderengine::Texture *const*, const void *) const;

		// CgsResourceType.h:346
		char ** FixUpPointer<char*>(char *const*, const void *) const;

		// CgsResourceType.h:346
		char * FixUpPointer<char>(const char *, const void *) const;

		// CgsResourceType.h:346
		RenderableMesh * FixUpPointer<RenderableMesh>(const RenderableMesh *, const void *) const;

	}

}

// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourceType.h:69
	enum EDebugResourceCategory {
		E_DEBUGRESOURCECATEGORY_OVERHEAD = 0,
		E_DEBUGRESOURCECATEGORY_MATERIAL = 1,
		E_DEBUGRESOURCECATEGORY_MESH = 2,
		E_DEBUGRESOURCECATEGORY_TEXTURE = 3,
		E_DEBUGRESOURCECATEGORY_MISC = 4,
		E_DEBUGRESOURCECATEGORY_DEBUG = 5,
		E_DEBUGRESOURCECATEGORY_COUNT = 6,
	}

}

// CgsResourceType.h:108
struct CgsResource::Type {
	int (*)(...) * _vptr.Type;

private:
	// CgsResourceType.h:258
	bool mbCachedCanDefrag;

	// CgsResourceType.h:259
	uint32_t muCachedId;

public:
	void Type(const CgsResource::Type &);

	void Type();

	// CgsResourceType.cpp:53
	// Declaration
	void InitCachedValues() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsResourceType.cpp:59
		using namespace CgsDev::Message;

	}

	// CgsResourceType.h:151
	virtual uint32_t GetTypeID() const;

	// CgsResourceType.h:156
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// CgsResourceType.cpp:197
	virtual bool DeSerialise(void *) const;

	// CgsResourceType.cpp:214
	virtual void FixDown(void *, const Resource &) const;

	// CgsResourceType.cpp:231
	virtual void FixUp(void *, const Resource &) const;

	// CgsResourceType.cpp:249
	virtual void PostFixUp(void *, const Resource &) const;

	// CgsResourceType.cpp:271
	virtual void ReBase(void *, Resource &, Resource &, ResourceDescriptor &, int32_t) const;

	// CgsResourceType.cpp:292
	virtual uint32_t GetImportCount(const void *) const;

	// CgsResourceType.cpp:311
	virtual void GetImportPointer(const void *, uint32_t, uint32_t *, const void **) const;

	// CgsResourceType.cpp:325
	virtual bool CanDefrag() const;

	// CgsResourceType.cpp:376
	virtual bool DebugValidate(const void *) const;

	// CgsResourceType.h:280
	void * operator new(size_t);

	// CgsResourceType.h:299
	void operator delete(void *);

	// CgsResourceType.h:314
	void * operator new(size_t, rw::IResourceAllocator *);

	// CgsResourceType.h:329
	void operator delete(void *, rw::IResourceAllocator *);

	// CgsResourceType.h:411
	bool GetCachedCanDefrag() const;

	// CgsResourceType.h:427
	uint32_t GetCachedId() const;

	// CgsResourceType.cpp:391
	virtual CgsResource::EDebugResourceCategory GetDebugResourceCategory() const;

protected:
	// CgsResourceType.cpp:353
	void ReBaseTechniqueFixupWithOffset(void *, Resource &, Resource &, ResourceDescriptor &, int32_t) const;

	// CgsResourceType.h:387
	void ReBaseTechniqueFixDownAndCopy(void *, Resource &, Resource &, ResourceDescriptor &, int32_t) const;

}

// CgsResourceType.h:362
extern void * FixDownPointer<void>(const void *  lpPointer, const void *  lpBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


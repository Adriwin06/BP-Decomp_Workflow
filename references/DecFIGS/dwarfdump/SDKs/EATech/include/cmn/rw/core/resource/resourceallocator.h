// resourceallocator.h:73
struct rw::IResourceAllocator : public EA::Allocator::ICoreAllocator {
public:
	rw::IResourceAllocator & operator=(const IResourceAllocator &);

	// resourceallocator.h:78
	virtual void ~IResourceAllocator();

	// resourceallocator.h:91
	Resource Allocate(const ResourceDescriptor &, const char8_t *);

	// resourceallocator.h:116
	virtual void * Alloc(size_t, const char *, unsigned int);

	// resourceallocator.h:122
	virtual void * Alloc(size_t, const char *, unsigned int, unsigned int, unsigned int);

	// resourceallocator.h:129
	virtual void Free(void *, size_t);

	// resourceallocator.h:139
	void Free(const Resource &);

	// resourceallocator.h:151
	void Free(void *);

	// resourceallocator.h:166
	void FreeDisposable(Resource &);

	// resourceallocator.h:178
	MemoryResource AllocateMemoryResource(uint32_t, uint32_t, const char8_t *);

	// resourceallocator.h:188
	void FreeMemoryResource(MemoryResource);

	// resourceallocator.h:201
	Resource::DisposableResource AllocateDisposable(uint32_t, uint32_t, const char8_t *);

	// resourceallocator.h:213
	void FreeDisposableResource(Resource::DisposableResource);

	// resourceallocator.h:277
	virtual void PS3GraphicsSystemMemoryInitialize(void *, uint32_t);

	// resourceallocator.h:278
	virtual void PS3GraphicsLocalMemoryInitialize(void *, uint32_t);

protected:
	// resourceallocator.h:293
	virtual Resource DoAllocate(const ResourceDescriptor &, const char8_t *);

	// resourceallocator.h:301
	virtual void DoFree(const Resource &);

	// resourceallocator.h:310
	virtual void DoFreeDisposable(Resource &);

}

// resourceallocator.h:73
struct rw::IResourceAllocator : public EA::Allocator::ICoreAllocator {
public:
	void IResourceAllocator(const IResourceAllocator &);

	void IResourceAllocator();

	rw::IResourceAllocator & operator=(const IResourceAllocator &);

	// resourceallocator.h:78
	virtual void ~IResourceAllocator();

	// resourceallocator.h:91
	Resource Allocate(const ResourceDescriptor &, const char8_t *);

	// resourceallocator.h:116
	virtual void * Alloc(size_t, const char *, unsigned int);

	// resourceallocator.h:122
	virtual void * Alloc(size_t, const char *, unsigned int, unsigned int, unsigned int);

	// resourceallocator.h:129
	virtual void Free(void *, size_t);

	// resourceallocator.h:139
	void Free(const Resource &);

	// resourceallocator.h:151
	void Free(void *);

	// resourceallocator.h:166
	void FreeDisposable(Resource &);

	// resourceallocator.h:178
	MemoryResource AllocateMemoryResource(uint32_t, uint32_t, const char8_t *);

	// resourceallocator.h:188
	void FreeMemoryResource(MemoryResource);

	// resourceallocator.h:201
	Resource::DisposableResource AllocateDisposable(uint32_t, uint32_t, const char8_t *);

	// resourceallocator.h:213
	void FreeDisposableResource(Resource::DisposableResource);

	// resourceallocator.h:277
	virtual void PS3GraphicsSystemMemoryInitialize(void *, uint32_t);

	// resourceallocator.h:278
	virtual void PS3GraphicsLocalMemoryInitialize(void *, uint32_t);

protected:
	// resourceallocator.h:293
	virtual Resource DoAllocate(const ResourceDescriptor &, const char8_t *);

	// resourceallocator.h:301
	virtual void DoFree(const Resource &);

	// resourceallocator.h:310
	virtual void DoFreeDisposable(Resource &);

}

// resourceallocator.h:73
void rw::IResourceAllocator::IResourceAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


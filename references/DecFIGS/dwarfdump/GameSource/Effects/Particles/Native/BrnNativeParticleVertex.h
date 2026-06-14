// BrnNativeParticleVertex.h:45
struct BrnParticle::NativeParticleVertex {
private:
	// BrnNativeParticleVertex.h:100
	extern VertexDescriptor * mpVertexDescriptor;

public:
	// BrnNativeParticleVertex.h:62
	void Construct(rw::IResourceAllocator *);

	// BrnNativeParticleVertex.h:65
	VertexDescriptor * GetVertexDescriptor();

	// BrnNativeParticleVertex.h:69
	uint32_t GetStride();

}

// BrnNativeParticleVertex.h:100
extern VertexDescriptor * mpVertexDescriptor;


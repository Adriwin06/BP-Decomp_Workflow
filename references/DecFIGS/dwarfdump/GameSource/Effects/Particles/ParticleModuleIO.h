// vertexbuffer.h:27
namespace BrnParticle {
	// ParticleModuleIO.h:37
	namespace ParticleIO {
		struct DispatchInputBuffer;

		struct PrepareOutputBuffer;

	}

}

// ParticleModuleIO.h:49
struct BrnParticle::ParticleIO::DispatchInputBuffer : public IOBuffer {
private:
	// ParticleModuleIO.h:95
	CgsGraphics::DispatchFrame * mpDispatchFrame;

	// ParticleModuleIO.h:96
	Vector3 mKeyLightDirection;

	// ParticleModuleIO.h:97
	Vector3 mKeyLightColour;

	// ParticleModuleIO.h:98
	Vector3 mAverageIrradianceColour;

	// ParticleModuleIO.h:99
	const Texture * mpEnvironmentMap;

	// ParticleModuleIO.h:100
	float32_t mfWhiteLevel;

public:
	// ParticleModuleIO.h:54
	void Construct();

	// ParticleModuleIO.h:58
	void Destruct();

	// ParticleModuleIO.h:63
	void SetDispatchFrame(CgsGraphics::DispatchFrame *);

	// ParticleModuleIO.h:66
	CgsGraphics::DispatchFrame * GetDispatchFrame() const;

	// ParticleModuleIO.h:69
	void SetKeyLightDirection(Vector3);

	// ParticleModuleIO.h:71
	Vector3 GetKeyLightDirection() const;

	// ParticleModuleIO.h:74
	void SetKeyLightColour(Vector3);

	// ParticleModuleIO.h:76
	Vector3 GetKeyLightColour() const;

	// ParticleModuleIO.h:79
	void SetAverageIrradianceColour(Vector3);

	// ParticleModuleIO.h:81
	Vector3 GetAverageIrradianceColour() const;

	// ParticleModuleIO.h:84
	void SetEnvironmentMap(const Texture *);

	// ParticleModuleIO.h:86
	const Texture * GetEnvironmentMap() const;

	// ParticleModuleIO.h:89
	void SetWhiteLevel(float32_t);

	// ParticleModuleIO.h:91
	float32_t GetWhiteLevel() const;

}

// ParticleModuleIO.h:112
struct BrnParticle::ParticleIO::PrepareOutputBuffer : public IOBuffer {
	// ParticleModuleIO.h:38
	typedef PrepareOutputBuffer::EffectsModuleResourceQueue ResourceRequestInterface;

	// ParticleModuleIO.h:32
	typedef RequestInterface<4096> EffectsModuleResourceQueue;

private:
	// ParticleModuleIO.h:133
	PrepareOutputBuffer::ResourceRequestInterface mResourceRequestInterface;

public:
	// ParticleModuleIO.h:117
	void Construct();

	// ParticleModuleIO.h:121
	void Destruct();

	// ParticleModuleIO.h:126
	PrepareOutputBuffer::ResourceRequestInterface * GetResourceRequestInterface();

	// ParticleModuleIO.h:129
	const PrepareOutputBuffer::ResourceRequestInterface * GetResourceRequestInterface() const;

}

// vertexbuffer.h:27
namespace BrnParticle {
	// ParticleModuleIO.h:37
	namespace ParticleIO {
	}

}

// vertexbuffer.h:27
namespace BrnParticle {
	// ParticleModuleIO.h:37
	namespace ParticleIO {
		struct PrepareOutputBuffer;

	}

}


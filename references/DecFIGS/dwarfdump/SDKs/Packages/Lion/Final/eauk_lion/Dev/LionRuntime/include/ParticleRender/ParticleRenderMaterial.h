// ParticleRenderMaterial.h:26
struct cParticleRenderMaterial {
private:
	// ParticleRenderMaterial.h:36
	extern cParticleRenderMaterial mSingleton;

	// ParticleRenderMaterial.h:37
	iParticleRender * mpRenderer;

public:
	// ParticleRenderMaterial.h:28
	void AppInit(iParticleRender *);

	// ParticleRenderMaterial.h:30
	void Register(cParticleMaterial *);

	// ParticleRenderMaterial.h:31
	void UnRegister(cParticleMaterial *);

	// ParticleRenderMaterial.h:33
	cParticleRenderMaterial * GetMe();

}


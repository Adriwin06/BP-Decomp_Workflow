// BrnSkyDomeManager.h:43
struct BrnSkyDomeManager {
private:
	// BrnSkyDomeManager.h:92
	renderengine::VertexBuffer * mpMainVertexBuffer;

	// BrnSkyDomeManager.h:93
	IndexBuffer * mpMainIndexBuffer;

	// BrnSkyDomeManager.h:94
	DrawIndexedParameters mMainDrawParameters;

	// BrnSkyDomeManager.h:97
	renderengine::VertexBuffer * mpCubeVertexBuffer;

	// BrnSkyDomeManager.h:98
	IndexBuffer * mpCubeIndexBuffer;

	// BrnSkyDomeManager.h:99
	DrawIndexedParameters mCubeDrawParameters;

	// BrnSkyDomeManager.h:102
	float32_t mrHorizonDistance;

	// BrnSkyDomeManager.h:103
	float32_t mrZenithDistance;

public:
	// BrnSkyDomeManager.h:47
	void Construct();

	// BrnSkyDomeManager.h:52
	bool Prepare(BrnGraphics::Im3dSkyDome *, rw::IResourceAllocator *);

	// BrnSkyDomeManager.h:56
	bool Release(rw::IResourceAllocator *);

	// BrnSkyDomeManager.h:63
	void Render(BrnGraphics::Im3dSkyDome *, const Texture *, const Texture *, const BrnShaderConstantsFrame *);

	// BrnSkyDomeManager.h:71
	void RenderToEnvironmentMap(BrnGraphics::EEnvironmentMapFace, BrnGraphics::Im3dSkyDome *, const Texture *, const Texture *, const BrnShaderConstantsFrame *);

private:
	// BrnSkyDomeManager.h:78
	float RaySphereDistance(const Vector3Template<float> &, const Vector3Template<float> &, float) const;

	// BrnSkyDomeManager.h:88
	void CreateGeometry(BrnGraphics::Im3dSkyDome *, rw::IResourceAllocator *, renderengine::VertexBuffer **, IndexBuffer **, DrawIndexedParameters *, int32_t, int32_t);

}


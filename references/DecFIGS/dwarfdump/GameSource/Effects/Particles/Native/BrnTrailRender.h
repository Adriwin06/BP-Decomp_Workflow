// BrnTrailRender.h:44
struct BrnParticle::Native::TrailRenderer {
private:
	// BrnTrailRender.h:78
	BrnGraphics::Im3dSkidsRenderer * mpRenderer;

	// BrnTrailRender.h:79
	float32_t mfCurrentTime;

	// BrnTrailRender.h:80
	Matrix44 mViewProjectionMatrix;

public:
	// BrnTrailRender.h:50
	void Construct(HeapMalloc *, BrnGraphics::Im3dSkidsRenderer *);

	// BrnTrailRender.h:54
	void BeginRender(renderengine::Texture *);

	// BrnTrailRender.h:57
	void EndRender();

	// BrnTrailRender.h:65
	void Render(BrnParticle::Native::TrailEmitter **, int32_t, BrnParticle::Native::TrailParams *, int8_t, float32_t);

	// BrnTrailRender.h:70
	void Update(float32_t, Matrix44);

}


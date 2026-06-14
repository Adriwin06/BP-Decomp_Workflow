// BrnSunCorona.h:38
struct BrnSunCorona {
private:
	// BrnSunCorona.h:74
	rw::IResourceAllocator * mpAllocator;

	// BrnSunCorona.h:77
	Resource mVertexDescriptorResource;

	// BrnSunCorona.h:78
	VertexDescriptor * mpVertexDescriptor;

	// BrnSunCorona.h:81
	ProgramBuffer * mpOcclusionVertexProgram;

	// BrnSunCorona.h:82
	ProgramBuffer * mpOcclusionPixelProgram;

	// BrnSunCorona.h:85
	ProgramVariableHandle mOcclusionPixelVariableHandleUvStartOffset;

	// BrnSunCorona.h:88
	ProgramBuffer * mpFlareVertexProgram;

	// BrnSunCorona.h:89
	ProgramBuffer * mpFlarePixelProgram;

	// BrnSunCorona.h:92
	ProgramVariableHandle mFlarePixelVariableHandleColourAndPower;

	// BrnSunCorona.h:95
	float32_t mfSunVectorYMultiplier;

	// BrnSunCorona.h:96
	float32_t mfOcclusionSize;

	// BrnSunCorona.h:97
	float32_t mfSunFlarePow;

	// BrnSunCorona.h:98
	float32_t mfSunBrightness;

	// BrnSunCorona.h:99
	float32_t mfSunSize;

	// BrnSunCorona.h:102
	float32_t mfXPos;

	// BrnSunCorona.h:103
	float32_t mfYPos;

	// BrnSunCorona.h:104
	bool mbVisible;

	// BrnSunCorona.h:105
	bool mbRenderSunCorona;

public:
	// BrnSunCorona.h:43
	void Construct(rw::IResourceAllocator *);

	// BrnSunCorona.h:47
	void Destruct();

	// BrnSunCorona.h:54
	void ComputeSunPositionOnScreen(Matrix44, Vector3, Vector3);

	// BrnSunCorona.h:60
	void GenerateOcclusionBuffer(CgsRenderTarget *, CgsRenderTarget *);

	// BrnSunCorona.h:69
	void RenderOccludedFlare(CgsRenderTarget *, Vector3, float32_t, float32_t, bool);

}


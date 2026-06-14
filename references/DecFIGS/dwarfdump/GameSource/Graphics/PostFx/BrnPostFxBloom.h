// BrnPostFxBloom.h:32
using rw::graphics::postfx;

// BrnPostFxBloom.h:37
struct BrnPostFxBloom {
private:
	// BrnPostFxBloom.h:61
	rw::IResourceAllocator * mpAllocator;

	// BrnPostFxBloom.h:64
	Resource mBloomVertexDescriptorResource;

	// BrnPostFxBloom.h:65
	VertexDescriptor * mpBloomVertexDescriptor;

	// BrnPostFxBloom.h:66
	bool mbUseNewBloom;

	// BrnPostFxBloom.h:67
	bool mbUseHardwareGaussianInBloom;

	// BrnPostFxBloom.h:70
	ProgramBuffer * mpBloomDSVertexProgram;

	// BrnPostFxBloom.h:71
	ProgramBuffer * mpBloomDSPixelProgram;

	// BrnPostFxBloom.h:72
	ProgramVariableHandle mBloomDSVertexVariableHandleUvOffset_00_01;

	// BrnPostFxBloom.h:73
	ProgramVariableHandle mBloomDSVertexVariableHandleUvOffset_02_03;

	// BrnPostFxBloom.h:82
	ProgramVariableHandle mBloomDSPixelVariableHandleDot;

	// BrnPostFxBloom.h:83
	ProgramVariableHandle mBloomDSPixelVariableHandleThresholdScale;

	// BrnPostFxBloom.h:84
	uint8_t muBloomDSPixelShaderRegisterCountOriginal;

	// BrnPostFxBloom.h:85
	uint8_t muBloomDSPixelShaderRegisterCountModified;

	// BrnPostFxBloom.h:88
	ProgramBuffer * mpBloomBlurVertexProgram;

	// BrnPostFxBloom.h:89
	ProgramBuffer * mpBloomBlurPixelProgram;

	// BrnPostFxBloom.h:90
	ProgramVariableHandle mBloomBlurVertexVariableHandleUvOffset_00_01;

	// BrnPostFxBloom.h:91
	ProgramVariableHandle mBloomBlurVertexVariableHandleUvOffset_02_03;

	// BrnPostFxBloom.h:92
	uint8_t muBloomBlurPixelShaderRegisterCountOriginal;

	// BrnPostFxBloom.h:93
	uint8_t muBloomBlurPixelShaderRegisterCountModified;

	// BrnPostFxBloom.h:96
	ProgramBuffer * mpBloomBlurOldVertexProgram;

	// BrnPostFxBloom.h:97
	ProgramBuffer * mpBloomBlurOldPixelProgram;

	// BrnPostFxBloom.h:98
	ProgramVariableHandle mBloomBlurOldVertexVariableHandleUvOffset_00_01;

	// BrnPostFxBloom.h:99
	ProgramVariableHandle mBloomBlurOldVertexVariableHandleUvOffset_02_03;

	// BrnPostFxBloom.h:100
	ProgramVariableHandle mBloomBlurOldVertexVariableHandleUvOffset_04_05;

	// BrnPostFxBloom.h:101
	ProgramVariableHandle mBloomBlurOldPixelVariableHandleTapWeights_0_to_3;

	// BrnPostFxBloom.h:102
	ProgramVariableHandle mBloomBlurOldPixelVariableHandleTapWeights_4;

	// BrnPostFxBloom.h:103
	uint8_t muBloomBlurOldPixelShaderRegisterCountOriginal;

	// BrnPostFxBloom.h:104
	uint8_t muBloomBlurOldPixelShaderRegisterCountModified;

	// BrnPostFxBloom.h:107
	float32_t mfThreshold;

	// BrnPostFxBloom.h:108
	float32_t mfWhiteLevel;

public:
	// BrnPostFxBloom.h:43
	void Construct(rw::IResourceAllocator *);

	// BrnPostFxBloom.h:47
	void Destruct();

	// BrnPostFxBloom.h:56
	void Render(RenderTarget *, RenderTarget *, RenderTarget *, float32_t, float32_t);

private:
	// BrnPostFxBloom.h:116
	void PrepareDownSampleBuffer(RenderTarget *, RenderTarget *);

	// BrnPostFxBloom.h:122
	void Generate1PassBlurredBloomBuffer(RenderTarget *, RenderTarget *);

	// BrnPostFxBloom.h:128
	void Generate2PassBlurredBloomBuffer(RenderTarget *, RenderTarget *);

}


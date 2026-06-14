// BrnPostFxShader.h:41
struct MotionBlurState {
	// BrnPostFxShader.h:44
	enum EQuality {
		E_QUALITY_CHEAP = 0,
		E_QUALITY_EXPENSIVE = 1,
		E_QUALITY_COUNT = 2,
	}

private:
	// BrnPostFxShader.h:66
	Matrix44 mCurrentWVP;

	// BrnPostFxShader.h:67
	Matrix44 mPreviousWVP;

	// BrnPostFxShader.h:68
	MotionBlurState::EQuality meQuality;

	// BrnPostFxShader.h:72
	Matrix44Affine[3] maViewCache;

public:
	// BrnPostFxShader.h:53
	void Construct();

	// BrnPostFxShader.h:61
	void Update(Matrix44Affine, Matrix44, float32_t, MotionBlurState::EQuality);

}

// BrnPostFxShader.h:77
struct BrnPostFxShader {
	// BrnPostFxShader.h:125
	struct Shader {
	private:
		// BrnPostFxShader.h:175
		ProgramBuffer * mpVertexProgram;

		// BrnPostFxShader.h:176
		ProgramBuffer * mpPixelProgram;

		// BrnPostFxShader.h:177
		ProgramVariableHandle[2] maVertexVariableHandle;

		// BrnPostFxShader.h:178
		ProgramVariableHandle[10] maPixelVariableHandle;

		// BrnPostFxShader.h:179
		uint8_t muPixelShaderRegisterCountOriginal;

		// BrnPostFxShader.h:180
		uint8_t muPixelShaderRegisterCountModified;

		// BrnPostFxShader.h:182
		extern const const char *[2] gaacVertexVariableNames;

		// BrnPostFxShader.h:183
		extern const const char *[10] gaacPixelVariableNames;

	public:
		// BrnPostFxShader.h:160
		void Construct(rw::IResourceAllocator *, void *, uint32_t, void *, uint32_t, uint8_t);

		// BrnPostFxShader.h:165
		void Destruct(rw::IResourceAllocator *);

		// BrnPostFxShader.h:171
		void SetProgram(const rw::math::vpu::Vector4 *, const rw::math::vpu::Vector4 *);

	}

private:
	// BrnPostFxShader.h:206
	BrnPostFxShader::Shader[12] maShaders;

	// BrnPostFxShader.h:208
	Resource mVertexDescriptorResource;

	// BrnPostFxShader.h:209
	VertexDescriptor * mpVertexDescriptor;

	// BrnPostFxShader.h:211
	Resource mBlendStateResource;

	// BrnPostFxShader.h:212
	BlendState * mpBlendState;

	// BrnPostFxShader.h:214
	Resource mDepthStencilStateResource;

	// BrnPostFxShader.h:215
	DepthStencilState * mpDepthStencilState;

	// BrnPostFxShader.h:217
	Resource mSamplerStateResource_Point;

	// BrnPostFxShader.h:218
	SamplerState * mpSamplerState_Point;

	// BrnPostFxShader.h:220
	Resource mSamplerStateResource_Linear;

	// BrnPostFxShader.h:221
	SamplerState * mpSamplerState_Linear;

	// BrnPostFxShader.h:223
	Resource[2] maSamplerStateResource_MotionBlur;

	// BrnPostFxShader.h:224
	SamplerState *[2] mapSamplerState_MotionBlur;

public:
	// BrnPostFxShader.h:83
	void Construct(rw::IResourceAllocator *);

	// BrnPostFxShader.h:88
	void Destruct(rw::IResourceAllocator *);

	// BrnPostFxShader.h:113
	void Render(float32_t, const BrnPostFxBloomData &, const rw::graphics::postfx::Vignette::State &, const rw::graphics::postfx::DepthOfField::State &, const MotionBlurState &, Vector4, float32_t, float32_t, bool8_t, bool8_t, bool8_t, bool8_t, bool8_t, renderengine::Texture *, renderengine::Texture *, renderengine::Texture *, const TextureState *, const TextureState *, Vector2, float32_t, bool8_t);

}

// BrnPostFxShader.h:182
extern const const char *[2] gaacVertexVariableNames;

// BrnPostFxShader.h:183
extern const const char *[10] gaacPixelVariableNames;


// CgsCore.h:144
namespace renderengine {
	// CgsCore.h:179
	namespace ps3 {
		// Declaration
		struct RenderTargetState {
			// statesinternal.h:92
			enum PS3MRT {
				PS3MRT_COLOR_0 = 1,
				PS3MRT_COLOR_0_1 = 19,
				PS3MRT_COLOR_0_1_2 = 23,
				PS3MRT_COLOR_0_1_2_3 = 31,
				PS3MRT_COLOR_1 = 2,
			}

		}

	}

}

// statesinternal.h:90
struct renderengine::ps3::RenderTargetState : public RenderTargetState {
	// statesinternal.h:101
	extern renderengine::ps3::RenderTargetState::PS3MRT[] m_colorTargets;

	// statesinternal.h:104
	uint8_t m_type;

	// statesinternal.h:105
	uint8_t m_antialias;

	// statesinternal.h:106
	uint8_t m_colorFormat;

	// statesinternal.h:107
	uint8_t m_colorTarget;

	// statesinternal.h:108
	uint8_t[4] m_colorLocation;

	// statesinternal.h:109
	uint32_t[4] m_colorOffset;

	// statesinternal.h:110
	uint32_t[4] m_colorPitch;

	// statesinternal.h:112
	uint8_t m_depthFormat;

	// statesinternal.h:113
	uint8_t m_depthLocation;

	// statesinternal.h:114
	uint8_t[2] _padding;

	// statesinternal.h:115
	uint32_t m_depthOffset;

	// statesinternal.h:116
	uint32_t m_depthPitch;

	// statesinternal.h:118
	uint16_t m_width;

	// statesinternal.h:119
	uint16_t m_height;

	// statesinternal.h:120
	uint16_t m_x;

	// statesinternal.h:121
	uint16_t m_y;

	// statesinternal.h:126
	PixelBuffer *[5] m_targets;

public:
	// statesinternal.h:127
	void UpdateColorProperties();

}

// statesinternal.h:101
extern renderengine::ps3::RenderTargetState::PS3MRT[] m_colorTargets;

// statesinternal.h:43
struct renderengine::ps3::SamplerState : public SamplerState {
	// statesinternal.h:45
	uint32_t m_color;

	// statesinternal.h:48
	uint32_t m_enable;

	// statesinternal.h:49
	uint16_t m_minLod;

	// statesinternal.h:50
	uint16_t m_maxLod;

	// statesinternal.h:51
	uint8_t m_maxAniso;

	// statesinternal.h:54
	uint8_t m_wrapS;

	// statesinternal.h:55
	uint8_t m_wrapT;

	// statesinternal.h:56
	uint8_t m_wrapR;

	// statesinternal.h:57
	uint8_t m_uRemap;

	// statesinternal.h:58
	uint8_t m_zFunc;

	// statesinternal.h:59
	uint8_t m_gamma;

	// statesinternal.h:62
	uint16_t m_bias;

	// statesinternal.h:63
	uint8_t m_min;

	// statesinternal.h:64
	uint8_t m_mag;

	// statesinternal.h:65
	uint8_t m_convolution;

}

// statesinternal.h:79
struct renderengine::ps3::TextureState : public SamplerState {
	// statesinternal.h:80
	renderengine::Texture * texture;

}

// statesinternal.h:332
void renderengine::TextureState::NativeGetTexture() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// statesinternal.h:334
		const TextureState * nativeThis;

	}
}

// statesinternal.h:90
struct renderengine::ps3::RenderTargetState : public RenderTargetState {
	// statesinternal.h:101
	extern renderengine::ps3::RenderTargetState::PS3MRT[] m_colorTargets;

	// statesinternal.h:104
	uint8_t m_type;

	// statesinternal.h:105
	uint8_t m_antialias;

	// statesinternal.h:106
	uint8_t m_colorFormat;

	// statesinternal.h:107
	uint8_t m_colorTarget;

	// statesinternal.h:108
	uint8_t[4] m_colorLocation;

	// statesinternal.h:109
	uint32_t[4] m_colorOffset;

	// statesinternal.h:110
	uint32_t[4] m_colorPitch;

	// statesinternal.h:112
	uint8_t m_depthFormat;

	// statesinternal.h:113
	uint8_t m_depthLocation;

	// statesinternal.h:114
	uint8_t[2] _padding;

	// statesinternal.h:115
	uint32_t m_depthOffset;

	// statesinternal.h:116
	uint32_t m_depthPitch;

	// statesinternal.h:118
	uint16_t m_width;

	// statesinternal.h:119
	uint16_t m_height;

	// statesinternal.h:120
	uint16_t m_x;

	// statesinternal.h:121
	uint16_t m_y;

	// statesinternal.h:126
	renderengine::PixelBuffer *[5] m_targets;

public:
	// statesinternal.h:127
	void UpdateColorProperties();

}

// statesinternal.h:149
struct renderengine::ps3::BlendState : public BlendState {
	// statesinternal.h:150
	uint8_t[4] m_blendEnable;

	// statesinternal.h:153
	uint16_t m_sourceColor;

	// statesinternal.h:154
	uint16_t m_destinationColor;

	// statesinternal.h:155
	uint16_t m_sourceAlpha;

	// statesinternal.h:156
	uint16_t m_destinationAlpha;

	// statesinternal.h:159
	uint16_t m_colorOperation;

	// statesinternal.h:160
	uint16_t m_alphaOperation;

	// statesinternal.h:163
	uint32_t m_constantColor;

	// statesinternal.h:164
	uint32_t m_constantColor2;

	// statesinternal.h:167
	uint32_t m_colorMask;

	// statesinternal.h:168
	uint32_t m_colorMaskMrt;

	// statesinternal.h:171
	uint8_t m_multiSampleEnable;

	// statesinternal.h:172
	uint8_t m_alphaToCoverage;

	// statesinternal.h:173
	uint8_t m_alphaToOne;

	// statesinternal.h:174
	uint8_t m_alphaTestEnable;

	// statesinternal.h:175
	uint16_t m_multisampleMask;

	// statesinternal.h:176
	uint16_t m_alphaTestFunc;

	// statesinternal.h:177
	uint32_t m_alphaTestRef;

}

// statesinternal.h:188
struct renderengine::ps3::DepthStencilState : public DepthStencilState {
	// statesinternal.h:189
	renderengine::DepthStencilState::Function m_depthFunction;

	// statesinternal.h:190
	uint8_t m_depthTestEnable;

	// statesinternal.h:191
	uint8_t m_depthWriteEnable;

	// statesinternal.h:192
	uint8_t m_stencilTestEnable;

	// statesinternal.h:193
	uint8_t m_twoSidedStencilTestEnable;

	// statesinternal.h:196
	renderengine::DepthStencilState::Function m_stencilFunc;

	// statesinternal.h:197
	uint32_t m_stencilRef;

	// statesinternal.h:198
	uint32_t m_stencilMask;

	// statesinternal.h:201
	uint32_t m_stencilWriteMask;

	// statesinternal.h:204
	renderengine::DepthStencilState::StencilOperation m_stencilFailOp;

	// statesinternal.h:205
	renderengine::DepthStencilState::StencilOperation m_stencilDepthFailOp;

	// statesinternal.h:206
	renderengine::DepthStencilState::StencilOperation m_stencilDepthPassOp;

	// statesinternal.h:209
	renderengine::DepthStencilState::Function m_backStencilFunc;

	// statesinternal.h:210
	uint32_t m_backStencilRef;

	// statesinternal.h:211
	uint32_t m_backStencilMask;

	// statesinternal.h:214
	uint32_t m_backStencilWriteMask;

	// statesinternal.h:217
	renderengine::DepthStencilState::StencilOperation m_backStencilFailOp;

	// statesinternal.h:218
	renderengine::DepthStencilState::StencilOperation m_backStencilDepthFailOp;

	// statesinternal.h:219
	renderengine::DepthStencilState::StencilOperation m_backStencilDepthPassOp;

}

// statesinternal.h:230
struct renderengine::ps3::RasterizerState : public RasterizerState {
	// statesinternal.h:233
	uint32_t m_primitiveResetIndex;

	// statesinternal.h:234
	uint32_t m_primitiveResetEnable;

	// statesinternal.h:237
	uint16_t m_cullFace;

	// statesinternal.h:240
	uint32_t m_cullFaceEnable;

	// statesinternal.h:243
	float32_t m_offsetFactor;

	// statesinternal.h:244
	float32_t m_offsetUnits;

	// statesinternal.h:247
	uint32_t m_offsetEnable;

	// statesinternal.h:250
	uint32_t m_scissorTestEnable;

	// statesinternal.h:253
	renderengine::RasterizerState::FrontFace m_frontFace;

	// statesinternal.h:256
	renderengine::RasterizerState::PS3ShadeMode m_shadeMode;

	// statesinternal.h:259
	renderengine::RasterizerState::FillMode m_fillModeFront;

	// statesinternal.h:260
	renderengine::RasterizerState::FillMode m_fillModeBack;

}


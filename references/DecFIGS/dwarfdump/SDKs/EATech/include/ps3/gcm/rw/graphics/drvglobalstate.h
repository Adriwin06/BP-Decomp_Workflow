// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// Declaration
		struct GlobalState {
			// drvglobalstate.h:142
			struct TextureData {
				// drvglobalstate.h:143
				rw::graphics::Raster * m_raster;

				// drvglobalstate.h:144
				rw::graphics::Raster::Filter m_minFilter;

				// drvglobalstate.h:145
				rw::graphics::Raster::Filter m_magFilter;

				// drvglobalstate.h:146
				rw::graphics::Raster::Addressing m_addressU;

				// drvglobalstate.h:147
				rw::graphics::Raster::Addressing m_addressV;

			}

		}

	}

}

// drvglobalstate.h:69
struct rw::graphics::GlobalState {
private:
	// drvglobalstate.h:150
	extern rw::math::vpu::MatrixType m_transformType;

	// drvglobalstate.h:151
	extern Matrix44 m_transform;

	// drvglobalstate.h:153
	extern uint32_t m_coreState;

	// drvglobalstate.h:155
	extern RwRGBAReal m_materialColor;

	// drvglobalstate.h:157
	extern uint32_t m_deviceDirtyStates;

	// drvglobalstate.h:158
	extern uint32_t m_deviceBooleanValues;

	// drvglobalstate.h:160
	extern rw::graphics::AlphaTestFunction m_alphaFunction;

	// drvglobalstate.h:161
	extern float32_t m_alphaReference;

	// drvglobalstate.h:162
	extern rw::graphics::PSGLBlendFactor m_sFactor;

	// drvglobalstate.h:163
	extern rw::graphics::PSGLBlendFactor m_dFactor;

	// drvglobalstate.h:164
	extern rw::graphics::CullMode m_cullFace;

	// drvglobalstate.h:165
	extern uint32_t m_depthMask;

	// drvglobalstate.h:166
	extern uint32_t m_colorMask;

	// drvglobalstate.h:168
	extern rw::graphics::PSGLDepthTestFunction m_depthFunction;

	// drvglobalstate.h:169
	extern rw::graphics::PSGLStencilFunc m_stencilFunc;

	// drvglobalstate.h:170
	extern int32_t m_stencilRef;

	// drvglobalstate.h:171
	extern uint32_t m_stencilFuncMask;

	// drvglobalstate.h:172
	extern uint32_t m_stencilWriteMask;

	// drvglobalstate.h:173
	extern rw::graphics::PSGLStencilOp m_stencilOpFail;

	// drvglobalstate.h:174
	extern rw::graphics::PSGLStencilOp m_stencilOpZFail;

	// drvglobalstate.h:175
	extern rw::graphics::PSGLStencilOp m_stencilOpZPass;

	// drvglobalstate.h:176
	extern float32_t m_lineWidth;

	// drvglobalstate.h:177
	extern float32_t m_pointSize;

	// drvglobalstate.h:178
	extern rw::graphics::PSGLColorLogicOp m_colorLogicOp;

	// drvglobalstate.h:179
	extern rw::graphics::PSGLPolygonMode m_polyMode;

	// drvglobalstate.h:180
	extern float32_t m_sampleCoverage;

	// drvglobalstate.h:181
	extern uint32_t m_sampleCoverageInverted;

	// drvglobalstate.h:183
	extern rw::graphics::GlobalState::TextureData[16] m_textureData;

	// drvglobalstate.h:184
	extern uint32_t m_textureUnits;

	// drvglobalstate.h:186
	extern SamplerStateBitField m_textureDataChanged;

	// drvglobalstate.h:187
	extern uint32_t m_textureUnitsChanged;

	// drvglobalstate.h:189
	extern RwRGBReal m_ambient;

	// drvglobalstate.h:190
	extern const Light *[8] m_lights;

public:
	// drvglobalstate.h:72
	void SetAmbient(const RwRGBReal &);

	// drvglobalstate.h:72
	void SetBlendMode(rw::graphics::BlendMode);

	// drvglobalstate.h:72
	void SetMaterialColor(const RwRGBAReal &);

	// drvglobalstate.h:72
	void SetCullMode(rw::graphics::CullMode);

	// drvglobalstate.h:72
	void SetFogColor(const RwRGBReal &);

	// drvglobalstate.h:72
	void SetFogDensity(float32_t);

	// drvglobalstate.h:72
	void SetFogType(rw::graphics::FogType);

	// drvglobalstate.h:72
	void SetFogFarDistance(float32_t);

	// drvglobalstate.h:72
	void SetFogNearDistance(float32_t);

	// drvglobalstate.h:72
	void SetLight(uint32_t, const Light *);

	// drvglobalstate.h:72
	void SetTransform(const rw::math::vpu::Matrix44Affine &, rw::math::vpu::MatrixType);

	// drvglobalstate.h:72
	void SetZTestEnable(RwBool);

	// drvglobalstate.h:72
	void SetZWriteEnable(RwBool);

	// drvglobalstate.h:72
	void SetRaster(const Raster *);

	// drvglobalstate.h:72
	void SetRasterAddressU(rw::graphics::Raster::Addressing);

	// drvglobalstate.h:72
	void SetRasterAddressV(rw::graphics::Raster::Addressing);

	// drvglobalstate.h:72
	void SetRasterFilter(rw::graphics::Raster::Filter);

	// drvglobalstate.h:72
	void SetAlphaTestFunction(rw::graphics::AlphaTestFunction);

	// drvglobalstate.h:72
	void SetAlphaTestReference(rw::graphics::AlphaTestReference);

	// drvglobalstate.h:72
	void SetColorWriteEnable(RwBool);

	// drvglobalstate.h:72
	RwRGBReal GetAmbient();

	// drvglobalstate.h:72
	rw::graphics::BlendMode GetBlendMode();

	// drvglobalstate.h:72
	RwRGBAReal GetMaterialColor();

	// drvglobalstate.h:72
	rw::graphics::CullMode GetCullMode();

	// drvglobalstate.h:72
	RwRGBReal GetFogColor();

	// drvglobalstate.h:72
	float32_t GetFogDensity();

	// drvglobalstate.h:72
	rw::graphics::FogType GetFogType();

	// drvglobalstate.h:72
	float32_t GetFogFarDistance();

	// drvglobalstate.h:72
	float32_t GetFogNearDistance();

	// drvglobalstate.h:72
	const Light * GetLight(uint32_t);

	// drvglobalstate.h:72
	Matrix44Affine GetTransform();

	// drvglobalstate.h:72
	RwBool GetZTestEnable();

	// drvglobalstate.h:72
	RwBool GetZWriteEnable();

	// drvglobalstate.h:72
	const Raster * GetRaster();

	// drvglobalstate.h:72
	rw::graphics::Raster::Addressing GetRasterAddressU();

	// drvglobalstate.h:72
	rw::graphics::Raster::Addressing GetRasterAddressV();

	// drvglobalstate.h:72
	rw::graphics::Raster::Filter GetRasterFilter();

	// drvglobalstate.h:72
	rw::graphics::AlphaTestFunction GetAlphaTestFunction();

	// drvglobalstate.h:72
	rw::graphics::AlphaTestReference GetAlphaTestReference();

	// drvglobalstate.h:72
	RwBool GetColorWriteEnable();

	// drvglobalstate.h:72
	void SetDeviceState(rw::graphics::PSGLDeviceState, uint32_t);

	// drvglobalstate.h:72
	uint32_t GetDeviceState(rw::graphics::PSGLDeviceState);

	// drvglobalstate.h:72
	void SetRaster(uint32_t, const Raster *);

	// drvglobalstate.h:72
	const Raster * GetRaster(uint32_t);

	// drvglobalstate.h:72
	void SetRasterState(uint32_t, rw::graphics::Raster::StateID, uint32_t);

	// drvglobalstate.h:72
	uint32_t GetRasterState(uint32_t, rw::graphics::Raster::StateID);

	// drvglobalstate.h:72
	void DirtyAll();

	// drvglobalstate.h:72
	void Dispatch();

	// drvglobalstate.h:75
	RwBool PSGLInitialize();

	// drvglobalstate.h:76
	void PSGLRelease();

	// drvglobalstate.h:77
	void PSGLSync();

	// drvglobalstate.h:79
	void PSGLAddCoreState(uint32_t);

	// drvglobalstate.h:80
	void PSGLDirtyDeviceState(uint32_t);

	// drvglobalstate.h:81
	void PSGLAddTextureStates(SamplerStateBitField);

	// drvglobalstate.h:83
	void PSGLSetRaster(uint32_t, const Raster *);

	// drvglobalstate.h:84
	void PSGLSetRasterFilter(uint32_t, rw::graphics::Raster::Filter);

	// drvglobalstate.h:85
	void PSGLSetRasterMinFilter(uint32_t, rw::graphics::Raster::Filter);

	// drvglobalstate.h:86
	void PSGLSetRasterMagFilter(uint32_t, rw::graphics::Raster::Filter);

	// drvglobalstate.h:87
	void PSGLSetRasterAddressU(uint32_t, rw::graphics::Raster::Addressing);

	// drvglobalstate.h:88
	void PSGLSetRasterAddressV(uint32_t, rw::graphics::Raster::Addressing);

	// drvglobalstate.h:90
	rw::graphics::Raster * PSGLGetRaster(uint32_t);

	// drvglobalstate.h:91
	rw::graphics::Raster::Filter PSGLGetRasterFilter(uint32_t);

	// drvglobalstate.h:92
	rw::graphics::Raster::Filter PSGLGetRasterMinFilter(uint32_t);

	// drvglobalstate.h:93
	rw::graphics::Raster::Filter PSGLGetRasterMagFilter(uint32_t);

	// drvglobalstate.h:94
	rw::graphics::Raster::Addressing PSGLGetRasterAddressU(uint32_t);

	// drvglobalstate.h:95
	rw::graphics::Raster::Addressing PSGLGetRasterAddressV(uint32_t);

	// drvglobalstate.h:98
	void PSGLDispatchCoreState(uint32_t);

	// drvglobalstate.h:99
	void PSGLDispatchTextureStates(SamplerStateBitField, uint32_t);

	// drvglobalstate.h:100
	void PSGLDispatchDeviceStates(uint32_t);

	// drvglobalstate.h:103
	void PSGLEnableState(rw::graphics::PSGLDeviceState);

	// drvglobalstate.h:104
	void PSGLDisableState(rw::graphics::PSGLDeviceState);

	// drvglobalstate.h:105
	void PSGLSetAlphaFunction(rw::graphics::AlphaTestFunction);

	// drvglobalstate.h:106
	void PSGLSetAlphaReference(float32_t);

	// drvglobalstate.h:107
	void PSGLSetSourceBlendFactor(rw::graphics::PSGLBlendFactor);

	// drvglobalstate.h:108
	void PSGLSetDestinationBlendFactor(rw::graphics::PSGLBlendFactor);

	// drvglobalstate.h:109
	void PSGLSetCullFace(rw::graphics::CullMode);

	// drvglobalstate.h:110
	void PSGLSetDepthMask(RwBool);

	// drvglobalstate.h:111
	void PSGLSetColorMask(RwBool);

	// drvglobalstate.h:113
	void PSGLSetDepthTestFunction(rw::graphics::PSGLDepthTestFunction);

	// drvglobalstate.h:114
	void PSGLSetStencilFunction(rw::graphics::PSGLStencilFunc, int32_t, uint32_t);

	// drvglobalstate.h:115
	void PSGLSetStencilWriteMask(uint32_t);

	// drvglobalstate.h:116
	void PSGLSetStencilOps(rw::graphics::PSGLStencilOp, rw::graphics::PSGLStencilOp, rw::graphics::PSGLStencilOp);

	// drvglobalstate.h:117
	void PSGLSetLineWidth(float32_t);

	// drvglobalstate.h:118
	void PSGLSetPointSize(float32_t);

	// drvglobalstate.h:119
	void PSGLSetColorLogicOp(rw::graphics::PSGLColorLogicOp);

	// drvglobalstate.h:120
	void PSGLSetPolygonMode(rw::graphics::PSGLPolygonMode);

	// drvglobalstate.h:121
	void PSGLSetSampleCoverage(float32_t, RwBool);

	// drvglobalstate.h:123
	rw::graphics::PSGLDepthTestFunction PSGLGetDepthTestFunction();

	// drvglobalstate.h:124
	void PSGLGetStencilFunction(rw::graphics::PSGLStencilFunc &, int32_t &, uint32_t &);

	// drvglobalstate.h:125
	uint32_t PSGLGetStencilWriteMask();

	// drvglobalstate.h:126
	void PSGLGetStencilOps(rw::graphics::PSGLStencilOp &, rw::graphics::PSGLStencilOp &, rw::graphics::PSGLStencilOp &);

	// drvglobalstate.h:127
	float32_t PSGLGetLineWidth();

	// drvglobalstate.h:128
	float32_t PSGLGetPointSize();

	// drvglobalstate.h:129
	rw::graphics::PSGLColorLogicOp PSGLGetColorLogicOp();

	// drvglobalstate.h:130
	rw::graphics::PSGLPolygonMode PSGLGetPolygonMode();

	// drvglobalstate.h:131
	void PSGLGetSampleCoverage(float32_t &, RwBool &);

	// drvglobalstate.h:133
	RwBool PSGLGetBooleanState(rw::graphics::PSGLDeviceState);

private:
	// drvglobalstate.h:193
	void GlobalState();

	// drvglobalstate.h:194
	void GlobalState(const GlobalState &);

	// drvglobalstate.h:195
	void ~GlobalState();

}

// drvglobalstate.h:150
extern rw::math::vpu::MatrixType m_transformType;

// drvglobalstate.h:151
extern Matrix44 m_transform;

// drvglobalstate.h:153
extern uint32_t m_coreState;

// drvglobalstate.h:155
extern RwRGBAReal m_materialColor;

// drvglobalstate.h:157
extern uint32_t m_deviceDirtyStates;

// drvglobalstate.h:158
extern uint32_t m_deviceBooleanValues;

// drvglobalstate.h:160
extern rw::graphics::AlphaTestFunction m_alphaFunction;

// drvglobalstate.h:161
extern float32_t m_alphaReference;

// drvglobalstate.h:162
extern rw::graphics::PSGLBlendFactor m_sFactor;

// drvglobalstate.h:163
extern rw::graphics::PSGLBlendFactor m_dFactor;

// drvglobalstate.h:164
extern rw::graphics::CullMode m_cullFace;

// drvglobalstate.h:165
extern uint32_t m_depthMask;

// drvglobalstate.h:166
extern uint32_t m_colorMask;

// drvglobalstate.h:168
extern rw::graphics::PSGLDepthTestFunction m_depthFunction;

// drvglobalstate.h:169
extern rw::graphics::PSGLStencilFunc m_stencilFunc;

// drvglobalstate.h:170
extern int32_t m_stencilRef;

// drvglobalstate.h:171
extern uint32_t m_stencilFuncMask;

// drvglobalstate.h:172
extern uint32_t m_stencilWriteMask;

// drvglobalstate.h:173
extern rw::graphics::PSGLStencilOp m_stencilOpFail;

// drvglobalstate.h:174
extern rw::graphics::PSGLStencilOp m_stencilOpZFail;

// drvglobalstate.h:175
extern rw::graphics::PSGLStencilOp m_stencilOpZPass;

// drvglobalstate.h:176
extern float32_t m_lineWidth;

// drvglobalstate.h:177
extern float32_t m_pointSize;

// drvglobalstate.h:178
extern rw::graphics::PSGLColorLogicOp m_colorLogicOp;

// drvglobalstate.h:179
extern rw::graphics::PSGLPolygonMode m_polyMode;

// drvglobalstate.h:180
extern float32_t m_sampleCoverage;

// drvglobalstate.h:181
extern uint32_t m_sampleCoverageInverted;

// drvglobalstate.h:183
extern rw::graphics::GlobalState::TextureData[16] m_textureData;

// drvglobalstate.h:186
extern SamplerStateBitField m_textureDataChanged;

// drvglobalstate.h:189
extern RwRGBReal m_ambient;

// drvglobalstate.h:190
extern const Light *[8] m_lights;


// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// Declaration
		struct ActiveState {
			// drvactivestate.h:83
			struct TextureUnitData {
				// drvactivestate.h:85
				rw::graphics::Raster * m_currentRaster;

				// drvactivestate.h:88
				rw::graphics::Raster::Filter m_minFilter;

				// drvactivestate.h:89
				rw::graphics::Raster::Filter m_magFilter;

				// drvactivestate.h:90
				rw::graphics::Raster::Addressing m_addressU;

				// drvactivestate.h:91
				rw::graphics::Raster::Addressing m_addressV;

			}

			// drvactivestate.h:95
			enum Attachment {
				ATTACHMENT_NA = 0,
				ATTACHMENT_COLOR0 = 36064,
				ATTACHMENT_COLOR1 = 36065,
				ATTACHMENT_COLOR2 = 36066,
				ATTACHMENT_COLOR3 = 36067,
				ATTACHMENT_DEPTH = 36096,
				ATTACHMENT_STENCIL = 36128,
				ATTACHMENT_FORCEENUMSIZEINT = 2147483647,
			}

		}

	}

}

// drvactivestate.h:71
struct rw::graphics::ActiveState {
	// drvactivestate.h:186
	extern uint32_t m_deviceStateChanged;

	// drvactivestate.h:187
	extern uint32_t m_deviceStateDispatched;

	// drvactivestate.h:188
	extern uint32_t m_deviceBooleanValues;

	// drvactivestate.h:190
	extern rw::graphics::AlphaTestFunction m_alphaFunction;

	// drvactivestate.h:191
	extern float32_t m_alphaReference;

	// drvactivestate.h:192
	extern rw::graphics::PSGLBlendFactor m_sFactor;

	// drvactivestate.h:193
	extern rw::graphics::PSGLBlendFactor m_dFactor;

	// drvactivestate.h:194
	extern rw::graphics::CullMode m_cullFace;

	// drvactivestate.h:195
	extern uint32_t m_depthMask;

	// drvactivestate.h:196
	extern uint32_t m_colorMask;

	// drvactivestate.h:198
	extern rw::graphics::PSGLDepthTestFunction m_depthFunction;

	// drvactivestate.h:199
	extern rw::graphics::PSGLStencilFunc m_stencilFunc;

	// drvactivestate.h:200
	extern int32_t m_stencilRef;

	// drvactivestate.h:201
	extern uint32_t m_stencilFuncMask;

	// drvactivestate.h:202
	extern uint32_t m_stencilWriteMask;

	// drvactivestate.h:203
	extern rw::graphics::PSGLStencilOp m_stencilOpFail;

	// drvactivestate.h:204
	extern rw::graphics::PSGLStencilOp m_stencilOpZFail;

	// drvactivestate.h:205
	extern rw::graphics::PSGLStencilOp m_stencilOpZPass;

	// drvactivestate.h:206
	extern float32_t m_lineWidth;

	// drvactivestate.h:207
	extern float32_t m_pointSize;

	// drvactivestate.h:208
	extern rw::graphics::PSGLColorLogicOp m_colorLogicOp;

	// drvactivestate.h:209
	extern rw::graphics::PSGLPolygonMode m_polyMode;

	// drvactivestate.h:210
	extern float32_t m_sampleCoverage;

	// drvactivestate.h:211
	extern uint32_t m_sampleCoverageInverted;

	// drvactivestate.h:213
	extern uint32_t m_clientStateFlags;

	// drvactivestate.h:214
	extern uint32_t m_previousClientStateFlags;

	// drvactivestate.h:216
	extern uint32_t m_vertexBufferObject;

	// drvactivestate.h:217
	extern uint32_t m_indexBufferObject;

	// drvactivestate.h:218
	extern uint32_t m_pixelBufferObject;

	// drvactivestate.h:219
	extern uint32_t m_frameBufferObject;

	// drvactivestate.h:221
	extern uint32_t m_coreStateChanged;

	// drvactivestate.h:222
	extern uint32_t m_coreStateDispatched;

	// drvactivestate.h:224
	extern const Shader * m_shader;

	// drvactivestate.h:225
	extern void (*)() m_shaderDispatchCB;

	// drvactivestate.h:226
	extern const void * m_cgVertexProgram;

	// drvactivestate.h:227
	extern const void * m_cgFragmentProgram;

	// drvactivestate.h:229
	extern const void * m_vertexVaryingParam;

	// drvactivestate.h:230
	extern const void * m_previousVertexVaryingParam;

	// drvactivestate.h:232
	extern void * m_camera;

	// drvactivestate.h:233
	extern rw::graphics::Camera::PSGLViewport m_viewport;

	// drvactivestate.h:234
	extern Vector4 m_2DScreenSpaceToClipSpace;

	// drvactivestate.h:235
	extern const rw::math::vpu::Matrix44 * m_transform;

	// drvactivestate.h:236
	extern rw::math::vpu::MatrixType m_transformType;

	// drvactivestate.h:237
	extern const rw::math::vpu::Matrix44Affine * m_inverseTransform;

	// drvactivestate.h:238
	extern const void *[2048] m_shaderData;

	// drvactivestate.h:239
	extern uint64_t[32] m_shaderDataChanged;

	// drvactivestate.h:241
	extern uint32_t m_textureUnitDataChanged;

	// drvactivestate.h:242
	extern uint32_t m_textureUnitRasterChanged;

	// drvactivestate.h:243
	extern uint32_t m_textureUnitStatusChanged;

	// drvactivestate.h:245
	extern uint32_t m_textureUnitStatusDispatched;

	// drvactivestate.h:246
	extern SamplerStateBitField m_textureUnitDataDispatched;

	// drvactivestate.h:248
	extern uint32_t m_currentActiveTextureUnit;

	// drvactivestate.h:249
	extern uint32_t m_currentClientActiveTextureUnit;

	// drvactivestate.h:251
	extern const Light *[8] m_lights;

	// drvactivestate.h:252
	extern RwRGBReal m_ambient;

	// drvactivestate.h:254
	extern RwRGBAReal m_materialColor;

	// drvactivestate.h:255
	extern rw::graphics::PrimitiveType m_primitiveType;

	// drvactivestate.h:256
	extern const VertexDescriptor * m_vertexDescriptor;

	// drvactivestate.h:258
	extern uint32_t m_framesRendered;

	// drvactivestate.h:260
	extern Matrix44 * m_currentViewMatrix;

	// drvactivestate.h:261
	extern Matrix44 * m_currentProjectionMatrix;

	// drvactivestate.h:263
	extern uint64_t m_timeAtAppStart;

private:
	// drvactivestate.h:272
	extern uint32_t m_textureUnitStatus;

	// drvactivestate.h:273
	extern rw::graphics::ActiveState::TextureUnitData[16] m_textureUnitData;

public:
	// drvactivestate.h:74
	RwBool Initialize();

	// drvactivestate.h:74
	void Release();

	// drvactivestate.h:74
	void Reset();

	// drvactivestate.h:74
	const uint32_t GetRenderFrame();

	// drvactivestate.h:74
	void SetTransform(const rw::math::vpu::Matrix44Affine *, rw::math::vpu::MatrixType);

	// drvactivestate.h:74
	const rw::math::vpu::Matrix44Affine * GetTransform();

	// drvactivestate.h:74
	const rw::math::vpu::MatrixType GetTransformType();

	// drvactivestate.h:74
	void SetTransposeTransform(const rw::math::vpu::Matrix44Affine *);

	// drvactivestate.h:74
	const rw::math::vpu::Matrix44Affine * GetTransposeTransform();

	// drvactivestate.h:74
	void SetInverseTransform(const rw::math::vpu::Matrix44Affine *);

	// drvactivestate.h:74
	const rw::math::vpu::Matrix44Affine * GetInverseTransform();

	// drvactivestate.h:74
	void SetInverseNormalizedTransform(const rw::math::vpu::Matrix44Affine *);

	// drvactivestate.h:74
	const rw::math::vpu::Matrix44Affine * GetInverseNormalizedTransform();

	// drvactivestate.h:74
	void SetViewMatrix(const rw::math::vpu::Matrix44Affine *);

	// drvactivestate.h:74
	const rw::math::vpu::Matrix44Affine * GetViewMatrix();

	// drvactivestate.h:74
	void SetProjectionMatrix(const rw::math::vpu::Matrix44Affine *);

	// drvactivestate.h:74
	const rw::math::vpu::Matrix44Affine * GetProjectionMatrix();

	// drvactivestate.h:74
	void SetViewProjectionMatrix(const rw::math::vpu::Matrix44Affine *);

	// drvactivestate.h:74
	const rw::math::vpu::Matrix44Affine * GetViewProjectionMatrix();

	// drvactivestate.h:74
	void SetViewProjectionTransposeMatrix(const rw::math::vpu::Matrix44Affine *);

	// drvactivestate.h:74
	const rw::math::vpu::Matrix44Affine * GetViewProjectionTransposeMatrix();

	// drvactivestate.h:74
	void SetCamera(const Camera *);

	// drvactivestate.h:74
	const Camera * GetCamera();

	// drvactivestate.h:74
	void SetVertexDescriptor(const VertexDescriptor *);

	// drvactivestate.h:74
	const VertexDescriptor * GetVertexDescriptor();

	// drvactivestate.h:74
	void SetLight(const Light *, uint32_t);

	// drvactivestate.h:74
	const Light * GetLight(uint32_t);

	// drvactivestate.h:74
	const uint32_t GetNumLights();

	// drvactivestate.h:74
	const Light * GetFirstLight();

	// Unknown accessibility
	// drvactivestate.h:40
	typedef int32_t LightsArrayType;

	// drvactivestate.h:74
	const ActiveState::LightsArrayType & GetSortedLightArray();

	// drvactivestate.h:74
	void SetMaterialColor(const RwRGBAReal &);

	// drvactivestate.h:74
	const RwRGBAReal & GetMaterialColor();

	// drvactivestate.h:74
	RwBool IsMaterialWhite();

	// drvactivestate.h:74
	void SetAmbientColor(const RwRGBReal &);

	// drvactivestate.h:74
	const RwRGBReal & GetAmbientColor();

	// drvactivestate.h:74
	RwBool IsAmbientBlack();

	// drvactivestate.h:74
	void SetShader(const Shader *);

	// drvactivestate.h:74
	const Shader * GetShader();

	// drvactivestate.h:74
	void SetVertexShader(const void *);

	// drvactivestate.h:74
	const void * GetVertexShader();

	// drvactivestate.h:74
	void SetPixelShader(const void *);

	// drvactivestate.h:74
	const void * GetPixelShader();

	// drvactivestate.h:74
	void SetShaderState(uint16_t, const void *);

	// drvactivestate.h:74
	const void * GetShaderState(uint16_t);

	// drvactivestate.h:74
	RwBool HasShaderStateChanged(uint16_t);

	// drvactivestate.h:74
	void SetShaderStateChanged(uint16_t);

	// drvactivestate.h:74
	void SetAllShaderStatesChanged();

	// drvactivestate.h:74
	void DispatchShader();

	// drvactivestate.h:110
	void SetBooleanStates(uint32_t, uint32_t);

	// drvactivestate.h:111
	void EnableState(rw::graphics::PSGLDeviceState);

	// drvactivestate.h:112
	void DisableState(rw::graphics::PSGLDeviceState);

	// drvactivestate.h:113
	void SetAlphaFunction(rw::graphics::AlphaTestFunction);

	// drvactivestate.h:114
	void SetAlphaReference(float32_t);

	// drvactivestate.h:115
	void SetSourceBlendFactor(rw::graphics::PSGLBlendFactor);

	// drvactivestate.h:116
	void SetDestinationBlendFactor(rw::graphics::PSGLBlendFactor);

	// drvactivestate.h:117
	void SetCullFace(rw::graphics::CullMode);

	// drvactivestate.h:118
	void SetDepthMask(RwBool);

	// drvactivestate.h:119
	void SetColorMask(RwBool);

	// drvactivestate.h:121
	void PSGLSetDepthTestFunction(rw::graphics::PSGLDepthTestFunction);

	// drvactivestate.h:122
	void PSGLSetStencilFunction(rw::graphics::PSGLStencilFunc, int32_t, uint32_t);

	// drvactivestate.h:123
	void PSGLSetStencilWriteMask(uint32_t);

	// drvactivestate.h:124
	void PSGLSetStencilOps(rw::graphics::PSGLStencilOp, rw::graphics::PSGLStencilOp, rw::graphics::PSGLStencilOp);

	// drvactivestate.h:125
	void PSGLSetLineWidth(float32_t);

	// drvactivestate.h:126
	void PSGLSetPointSize(float32_t);

	// drvactivestate.h:127
	void PSGLSetColorLogicOp(rw::graphics::PSGLColorLogicOp);

	// drvactivestate.h:128
	void PSGLSetPolygonMode(rw::graphics::PSGLPolygonMode);

	// drvactivestate.h:129
	void PSGLSetSampleCoverage(float32_t, RwBool);

	// drvactivestate.h:132
	void SetVertexBufferObject(uint32_t);

	// drvactivestate.h:133
	void SetIndexBufferObject(uint32_t);

	// drvactivestate.h:134
	void SetPixelBufferObject(uint32_t);

	// drvactivestate.h:137
	void DrawArrays(uint32_t, uint32_t);

	// drvactivestate.h:138
	void DrawElements(uint32_t, uint32_t, const void *);

	// drvactivestate.h:140
	void DrawRangeElements(uint32_t, uint32_t, uint32_t, uint32_t, const void *);

	// drvactivestate.h:143
	void SetCgVertexProgram(const void *);

	// drvactivestate.h:144
	void SetCgFragmentProgram(const void *);

	// drvactivestate.h:147
	void SetTextureUnitStatus(uint32_t, uint32_t);

	// drvactivestate.h:148
	void EnableTextureUnit(uint32_t);

	// drvactivestate.h:149
	void DisableTextureUnit(uint32_t);

	// drvactivestate.h:150
	rw::graphics::ActiveState::TextureUnitData & GetTextureUnitData(uint32_t);

	// drvactivestate.h:151
	uint32_t GetTextureUnitStatus();

	// drvactivestate.h:152
	void SetRaster(rw::graphics::ActiveState::TextureUnitData &, uint32_t, rw::graphics::Raster *);

	// drvactivestate.h:153
	void SetRasterMagFilter(rw::graphics::ActiveState::TextureUnitData &, rw::graphics::Raster::Filter);

	// drvactivestate.h:154
	void SetRasterMinFilter(rw::graphics::ActiveState::TextureUnitData &, rw::graphics::Raster::Filter);

	// drvactivestate.h:155
	void SetRasterAddressingU(rw::graphics::ActiveState::TextureUnitData &, rw::graphics::Raster::Addressing);

	// drvactivestate.h:156
	void SetRasterAddressingV(rw::graphics::ActiveState::TextureUnitData &, rw::graphics::Raster::Addressing);

	// drvactivestate.h:157
	void SyncTextureStates();

	// drvactivestate.h:158
	void BindTexture(rw::graphics::Raster *);

	// drvactivestate.h:159
	void UnbindTexture(uint32_t, rw::graphics::Raster *);

	// drvactivestate.h:162
	void SetClientActiveTextureUnit(uint32_t);

	// drvactivestate.h:164
	void BindRenderBuffer(uint32_t);

	// drvactivestate.h:165
	void BindFrameBufferObject(uint32_t);

	// drvactivestate.h:166
	void FrameBufferSetTarget(rw::graphics::ActiveState::Attachment, const Raster *);

	// drvactivestate.h:167
	void FrameBufferSetRaster(uint32_t, const Raster *);

	// drvactivestate.h:168
	void FrameBufferSetZBuffer(const Raster *);

	// drvactivestate.h:169
	void FrameBufferSetStencilBuffer(const Raster *);

	// drvactivestate.h:170
	void SetReadAttachment(rw::graphics::ActiveState::Attachment);

	// drvactivestate.h:173
	void ClearChangedFlags();

	// drvactivestate.h:176
	void DirtyShaderDataFlags();

	// drvactivestate.h:177
	void SetShaderData(uint16_t, const void *);

	// drvactivestate.h:178
	RwBool HasShaderDataChanged(uint16_t);

	// drvactivestate.h:179
	void ShaderDispatch();

	// drvactivestate.h:181
	void SetMatrixBuffer(Matrix44 *, uint32_t);

	// drvactivestate.h:182
	void SetNumWeights(uint32_t);

private:
	// drvactivestate.h:269
	void DoSetActiveTextureUnit(uint32_t);

	// drvactivestate.h:270
	void DoSetRaster(rw::graphics::Raster *);

	// drvactivestate.h:275
	void SyncDeviceStates();

	// drvactivestate.h:278
	void ActiveState();

	// drvactivestate.h:279
	void ActiveState(const ActiveState &);

	// drvactivestate.h:280
	void ~ActiveState();

}

// drvactivestate.h:186
extern uint32_t m_deviceStateChanged;

// drvactivestate.h:188
extern uint32_t m_deviceBooleanValues;

// drvactivestate.h:190
extern rw::graphics::AlphaTestFunction m_alphaFunction;

// drvactivestate.h:191
extern float32_t m_alphaReference;

// drvactivestate.h:192
extern rw::graphics::PSGLBlendFactor m_sFactor;

// drvactivestate.h:193
extern rw::graphics::PSGLBlendFactor m_dFactor;

// drvactivestate.h:194
extern rw::graphics::CullMode m_cullFace;

// drvactivestate.h:195
extern uint32_t m_depthMask;

// drvactivestate.h:196
extern uint32_t m_colorMask;

// drvactivestate.h:198
extern rw::graphics::PSGLDepthTestFunction m_depthFunction;

// drvactivestate.h:199
extern rw::graphics::PSGLStencilFunc m_stencilFunc;

// drvactivestate.h:200
extern int32_t m_stencilRef;

// drvactivestate.h:201
extern uint32_t m_stencilFuncMask;

// drvactivestate.h:202
extern uint32_t m_stencilWriteMask;

// drvactivestate.h:203
extern rw::graphics::PSGLStencilOp m_stencilOpFail;

// drvactivestate.h:204
extern rw::graphics::PSGLStencilOp m_stencilOpZFail;

// drvactivestate.h:205
extern rw::graphics::PSGLStencilOp m_stencilOpZPass;

// drvactivestate.h:206
extern float32_t m_lineWidth;

// drvactivestate.h:207
extern float32_t m_pointSize;

// drvactivestate.h:208
extern rw::graphics::PSGLColorLogicOp m_colorLogicOp;

// drvactivestate.h:209
extern rw::graphics::PSGLPolygonMode m_polyMode;

// drvactivestate.h:210
extern float32_t m_sampleCoverage;

// drvactivestate.h:211
extern uint32_t m_sampleCoverageInverted;

// drvactivestate.h:213
extern uint32_t m_clientStateFlags;

// drvactivestate.h:214
extern uint32_t m_previousClientStateFlags;

// drvactivestate.h:216
extern uint32_t m_vertexBufferObject;

// drvactivestate.h:217
extern uint32_t m_indexBufferObject;

// drvactivestate.h:218
extern uint32_t m_pixelBufferObject;

// drvactivestate.h:219
extern uint32_t m_frameBufferObject;

// drvactivestate.h:221
extern uint32_t m_coreStateChanged;

// drvactivestate.h:224
extern const Shader * m_shader;

// drvactivestate.h:225
extern void (*)() m_shaderDispatchCB;

// drvactivestate.h:226
extern const void * m_cgVertexProgram;

// drvactivestate.h:227
extern const void * m_cgFragmentProgram;

// drvactivestate.h:229
extern const void * m_vertexVaryingParam;

// drvactivestate.h:230
extern const void * m_previousVertexVaryingParam;

// drvactivestate.h:235
extern const rw::math::vpu::Matrix44 * m_transform;

// drvactivestate.h:236
extern rw::math::vpu::MatrixType m_transformType;

// drvactivestate.h:237
extern const rw::math::vpu::Matrix44Affine * m_inverseTransform;

// drvactivestate.h:238
extern const void *[2048] m_shaderData;

// drvactivestate.h:239
extern uint64_t[32] m_shaderDataChanged;

// drvactivestate.h:241
extern uint32_t m_textureUnitDataChanged;

// drvactivestate.h:242
extern uint32_t m_textureUnitRasterChanged;

// drvactivestate.h:243
extern uint32_t m_textureUnitStatusChanged;

// drvactivestate.h:248
extern uint32_t m_currentActiveTextureUnit;

// drvactivestate.h:249
extern uint32_t m_currentClientActiveTextureUnit;

// drvactivestate.h:251
extern const Light *[8] m_lights;

// drvactivestate.h:252
extern RwRGBReal m_ambient;

// drvactivestate.h:254
extern RwRGBAReal m_materialColor;

// drvactivestate.h:255
extern rw::graphics::PrimitiveType m_primitiveType;

// drvactivestate.h:256
extern const VertexDescriptor * m_vertexDescriptor;

// drvactivestate.h:258
extern uint32_t m_framesRendered;

// drvactivestate.h:260
extern Matrix44 * m_currentViewMatrix;

// drvactivestate.h:261
extern Matrix44 * m_currentProjectionMatrix;

// drvactivestate.h:272
extern uint32_t m_textureUnitStatus;

// drvactivestate.h:273
extern rw::graphics::ActiveState::TextureUnitData[16] m_textureUnitData;


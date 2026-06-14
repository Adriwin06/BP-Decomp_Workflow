// stateparams.h:44
struct renderengine::SamplerState::Parameters {
protected:
	// stateparams.h:100
	renderengine::SamplerState::AddressingMode addressU;

	// stateparams.h:101
	renderengine::SamplerState::AddressingMode addressV;

	// stateparams.h:102
	renderengine::SamplerState::AddressingMode addressW;

	// stateparams.h:103
	float32_t bias;

	// stateparams.h:104
	uint32_t maxLevel;

	// stateparams.h:105
	uint32_t minLevel;

	// stateparams.h:106
	uint32_t maxAnisotropy;

	// stateparams.h:107
	renderengine::SamplerState::FilterMode magFilter;

	// stateparams.h:108
	renderengine::SamplerState::FilterMode minFilter;

	// stateparams.h:109
	renderengine::SamplerState::FilterMode mipFilter;

	// stateparams.h:110
	renderengine::SamplerState::PS3Convolution convolution;

	// stateparams.h:111
	RGBA8 color;

	// stateparams.h:112
	renderengine::SamplerState::PS3UnsignedRemap remap;

	// stateparams.h:113
	renderengine::SamplerState::PS3DepthTextureFunction depthTextureFunction;

	// stateparams.h:114
	renderengine::SamplerState::PS3TextureGamma gamma;

public:
	// stateparams.h:45
	void Parameters();

	// stateparams.h:64
	void SetAddressU(renderengine::SamplerState::AddressingMode);

	// stateparams.h:65
	void SetAddressV(renderengine::SamplerState::AddressingMode);

	// stateparams.h:66
	void SetAddressW(renderengine::SamplerState::AddressingMode);

	// stateparams.h:67
	void SetMipMapLODBias(float32_t);

	// stateparams.h:68
	void SetMaxMipLevel(uint32_t);

	// stateparams.h:69
	void SetMinMipLevel(uint32_t);

	// stateparams.h:70
	void SetMaxAnisotropy(uint32_t);

	// stateparams.h:71
	void SetMagFilter(renderengine::SamplerState::FilterMode);

	// stateparams.h:72
	void SetMinFilter(renderengine::SamplerState::FilterMode);

	// stateparams.h:73
	void SetMipFilter(renderengine::SamplerState::FilterMode);

	// stateparams.h:74
	void SetBorderColor(RGBA8);

	// stateparams.h:76
	void PS3SetURemap(renderengine::SamplerState::PS3UnsignedRemap);

	// stateparams.h:77
	void PS3SetDepthTextureFunction(renderengine::SamplerState::PS3DepthTextureFunction);

	// stateparams.h:78
	void PS3SetGamma(renderengine::SamplerState::PS3TextureGamma);

	// stateparams.h:79
	void PS3SetConvolution(renderengine::SamplerState::PS3Convolution);

	// stateparams.h:81
	renderengine::SamplerState::AddressingMode GetAddressU() const;

	// stateparams.h:82
	renderengine::SamplerState::AddressingMode GetAddressV() const;

	// stateparams.h:83
	renderengine::SamplerState::AddressingMode GetAddressW() const;

	// stateparams.h:84
	float32_t GetMipMapLODBias() const;

	// stateparams.h:85
	uint32_t GetMaxMipLevel() const;

	// stateparams.h:86
	uint32_t GetMinMipLevel() const;

	// stateparams.h:87
	uint32_t GetMaxAnisotropy() const;

	// stateparams.h:88
	renderengine::SamplerState::FilterMode GetMagFilter() const;

	// stateparams.h:89
	renderengine::SamplerState::FilterMode GetMinFilter() const;

	// stateparams.h:90
	renderengine::SamplerState::FilterMode GetMipFilter() const;

	// stateparams.h:91
	RGBA8 GetBorderColor() const;

	// stateparams.h:93
	renderengine::SamplerState::PS3UnsignedRemap PS3GetURemap() const;

	// stateparams.h:94
	renderengine::SamplerState::PS3DepthTextureFunction PS3GetDepthTextureFunction() const;

	// stateparams.h:95
	renderengine::SamplerState::PS3TextureGamma PS3GetGamma() const;

	// stateparams.h:96
	renderengine::SamplerState::PS3Convolution PS3GetConvolution() const;

}

// stateparams.h:122
struct renderengine::TextureState::Parameters : public Parameters {
	// stateparams.h:132
	renderengine::Texture * texture;

public:
	// stateparams.h:123
	void Parameters();

	// stateparams.h:129
	void SetTexture(renderengine::Texture *);

	// stateparams.h:130
	renderengine::Texture * GetTexture() const;

}

// stateparams.h:368
struct renderengine::RenderTargetState::Parameters {
	// stateparams.h:384
	PixelBuffer *[5] targets;

public:
	// stateparams.h:369
	void Parameters();

	// stateparams.h:380
	void SetTarget(renderengine::RenderTargetState::TargetID, PixelBuffer *);

	// stateparams.h:381
	PixelBuffer * GetTarget(renderengine::RenderTargetState::TargetID) const;

}

// stateparams.h:450
struct renderengine::BlendState::Parameters {
protected:
	// stateparams.h:552
	bool[4] blendEnable;

	// stateparams.h:554
	renderengine::BlendState::Input colorSource;

	// stateparams.h:555
	renderengine::BlendState::Input colorDestination;

	// stateparams.h:556
	renderengine::BlendState::Operation colorOperation;

	// stateparams.h:558
	RGBA8 factor;

	// stateparams.h:560
	renderengine::BlendState::Input alphaSource;

	// stateparams.h:561
	renderengine::BlendState::Input alphaDestination;

	// stateparams.h:562
	renderengine::BlendState::Operation alphaOperation;

	// stateparams.h:564
	bool[4] colorRedMask;

	// stateparams.h:565
	bool[4] colorGreenMask;

	// stateparams.h:566
	bool[4] colorBlueMask;

	// stateparams.h:567
	bool[4] colorAlphaMask;

	// stateparams.h:569
	bool alphaTestEnable;

	// stateparams.h:570
	renderengine::BlendState::Function alphaTestFunction;

	// stateparams.h:571
	float32_t alphaTestReference;

	// stateparams.h:572
	bool multiSampleEnable;

	// stateparams.h:573
	bool alphaToCoverage;

	// stateparams.h:574
	bool alphaToOne;

	// stateparams.h:575
	uint16_t multisampleMask;

	// stateparams.h:577
	bool f16BlendColor;

public:
	// stateparams.h:451
	void Parameters();

	// stateparams.h:500
	void SetBlendEnable(bool);

	// stateparams.h:501
	void SetSource(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Input);

	// stateparams.h:502
	void SetDestination(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Input);

	// stateparams.h:503
	void SetOperation(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Operation);

	// stateparams.h:504
	void SetBlendFactor(RGBA8);

	// stateparams.h:505
	void SetSourceAlpha(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Input);

	// stateparams.h:506
	void SetDestinationAlpha(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Input);

	// stateparams.h:507
	void SetOperationAlpha(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Operation);

	// stateparams.h:508
	void SetColorWriteEnable(renderengine::RenderTargetState::TargetID, bool, bool, bool, bool);

	// stateparams.h:509
	void SetAlphaTestEnable(bool);

	// stateparams.h:510
	void SetAlphaTestFunction(renderengine::BlendState::Function);

	// stateparams.h:511
	void SetAlphaTestReference(uint32_t);

	// stateparams.h:513
	bool GetBlendEnable() const;

	// stateparams.h:514
	renderengine::BlendState::Input GetSource(renderengine::RenderTargetState::TargetID) const;

	// stateparams.h:515
	renderengine::BlendState::Input GetDestination(renderengine::RenderTargetState::TargetID) const;

	// stateparams.h:516
	renderengine::BlendState::Operation GetOperation(renderengine::RenderTargetState::TargetID) const;

	// stateparams.h:517
	RGBA8 GetBlendFactor() const;

	// stateparams.h:518
	renderengine::BlendState::Input GetSourceAlpha(renderengine::RenderTargetState::TargetID) const;

	// stateparams.h:519
	renderengine::BlendState::Input GetDestinationAlpha(renderengine::RenderTargetState::TargetID) const;

	// stateparams.h:520
	renderengine::BlendState::Operation GetOperationAlpha(renderengine::RenderTargetState::TargetID) const;

	// stateparams.h:521
	void GetColorWriteEnable(renderengine::RenderTargetState::TargetID, bool &, bool &, bool &, bool &);

	// stateparams.h:522
	bool GetAlphaTestEnable() const;

	// stateparams.h:523
	renderengine::BlendState::Function GetAlphaTestFunction() const;

	// stateparams.h:524
	float32_t GetAlphaTestReference() const;

	// stateparams.h:526
	void SetAlphaToMaskEnable(bool);

	// stateparams.h:527
	bool GetAlphaToMaskEnable() const;

	// stateparams.h:532
	void PS3SetBlendEnable(renderengine::RenderTargetState::TargetID, bool);

	// stateparams.h:533
	bool PS3GetBlendEnable(renderengine::RenderTargetState::TargetID) const;

	// stateparams.h:536
	void PS3SetEnableBlendFactorF16(bool);

	// stateparams.h:537
	bool PS3GetEnableBlendFactorF16() const;

	// stateparams.h:539
	void PS3SetMultiSampleEnable(bool);

	// stateparams.h:540
	void PS3SetAlphaToCoverage(bool);

	// stateparams.h:541
	void PS3SetAlphaToOne(bool);

	// stateparams.h:542
	void PS3SetMultisampleMask(uint16_t);

	// stateparams.h:544
	bool PS3GetMultiSampleEnable() const;

	// stateparams.h:545
	bool PS3GetAlphaToCoverage() const;

	// stateparams.h:546
	bool PS3GetAlphaToOne() const;

	// stateparams.h:547
	uint16_t PS3GetMultisampleMask() const;

}

// stateparams.h:819
struct renderengine::DepthStencilState::Parameters {
	// stateparams.h:889
	bool depthEnable;

	// stateparams.h:890
	renderengine::DepthStencilState::Function depthFunction;

	// stateparams.h:891
	bool depthWriteEnable;

	// stateparams.h:894
	bool stencilEnable;

	// stateparams.h:895
	renderengine::DepthStencilState::Function stencilFunction;

	// stateparams.h:896
	uint32_t stencilReference;

	// stateparams.h:897
	uint32_t stencilMask;

	// stateparams.h:898
	uint32_t stencilWriteMask;

	// stateparams.h:900
	renderengine::DepthStencilState::StencilOperation stencilFailOperation;

	// stateparams.h:901
	renderengine::DepthStencilState::StencilOperation stencilZFailOperation;

	// stateparams.h:902
	renderengine::DepthStencilState::StencilOperation stencilPassOperation;

	// stateparams.h:905
	renderengine::DepthStencilState::Function backStencilFunction;

	// stateparams.h:906
	uint32_t backStencilReference;

	// stateparams.h:907
	uint32_t backStencilMask;

	// stateparams.h:908
	uint32_t backStencilWriteMask;

	// stateparams.h:910
	renderengine::DepthStencilState::StencilOperation backStencilFailOperation;

	// stateparams.h:911
	renderengine::DepthStencilState::StencilOperation backStencilZFailOperation;

	// stateparams.h:912
	renderengine::DepthStencilState::StencilOperation backStencilPassOperation;

	// stateparams.h:914
	bool twoSideStencilEnable;

public:
	// stateparams.h:820
	void Parameters();

	// stateparams.h:843
	void SetDepthEnable(bool);

	// stateparams.h:844
	void SetDepthFunction(renderengine::DepthStencilState::Function);

	// stateparams.h:845
	void SetDepthWriteEnable(bool);

	// stateparams.h:847
	void SetStencilEnable(bool);

	// stateparams.h:848
	void SetStencilFunction(renderengine::DepthStencilState::Function);

	// stateparams.h:849
	void SetStencilReference(uint32_t);

	// stateparams.h:850
	void SetStencilMask(uint32_t);

	// stateparams.h:851
	void SetStencilWriteMask(uint32_t);

	// stateparams.h:852
	void SetStencilFailOperation(renderengine::DepthStencilState::StencilOperation);

	// stateparams.h:853
	void SetStencilZFailOperation(renderengine::DepthStencilState::StencilOperation);

	// stateparams.h:854
	void SetStencilPassOperation(renderengine::DepthStencilState::StencilOperation);

	// stateparams.h:856
	void SetBackStencilFunction(renderengine::DepthStencilState::Function);

	// stateparams.h:857
	void SetBackStencilReference(uint32_t);

	// stateparams.h:858
	void SetBackStencilMask(uint32_t);

	// stateparams.h:859
	void SetBackStencilWriteMask(uint32_t);

	// stateparams.h:860
	void SetBackStencilFailOperation(renderengine::DepthStencilState::StencilOperation);

	// stateparams.h:861
	void SetBackStencilZFailOperation(renderengine::DepthStencilState::StencilOperation);

	// stateparams.h:862
	void SetBackStencilPassOperation(renderengine::DepthStencilState::StencilOperation);

	// stateparams.h:864
	void SetTwoSidedStencilEnable(bool);

	// stateparams.h:866
	bool GetDepthEnable() const;

	// stateparams.h:867
	renderengine::DepthStencilState::Function GetDepthFunction() const;

	// stateparams.h:868
	bool GetDepthWriteEnable() const;

	// stateparams.h:870
	bool GetStencilEnable() const;

	// stateparams.h:871
	renderengine::DepthStencilState::Function GetStencilFunction() const;

	// stateparams.h:872
	uint32_t GetStencilReference() const;

	// stateparams.h:873
	uint32_t GetStencilMask() const;

	// stateparams.h:874
	uint32_t GetStencilWriteMask() const;

	// stateparams.h:875
	renderengine::DepthStencilState::StencilOperation GetStencilFailOperation() const;

	// stateparams.h:876
	renderengine::DepthStencilState::StencilOperation GetStencilZFailOperation() const;

	// stateparams.h:877
	renderengine::DepthStencilState::StencilOperation GetStencilPassOperation() const;

	// stateparams.h:878
	renderengine::DepthStencilState::Function GetBackStencilFunction() const;

	// stateparams.h:879
	uint32_t GetBackStencilReference() const;

	// stateparams.h:880
	uint32_t GetBackStencilMask() const;

	// stateparams.h:881
	uint32_t GetBackStencilWriteMask() const;

	// stateparams.h:882
	renderengine::DepthStencilState::StencilOperation GetBackStencilFailOperation() const;

	// stateparams.h:883
	renderengine::DepthStencilState::StencilOperation GetBackStencilZFailOperation() const;

	// stateparams.h:884
	renderengine::DepthStencilState::StencilOperation GetBackStencilPassOperation() const;

	// stateparams.h:885
	bool GetTwoSidedStencilEnable() const;

}

// stateparams.h:1216
struct renderengine::RasterizerState::Parameters {
protected:
	// stateparams.h:1261
	renderengine::RasterizerState::FillMode fillModeFront;

	// stateparams.h:1262
	renderengine::RasterizerState::FillMode fillModeBack;

	// stateparams.h:1263
	renderengine::RasterizerState::CullMode cullMode;

	// stateparams.h:1264
	renderengine::RasterizerState::FrontFace frontFace;

	// stateparams.h:1265
	float32_t offsetFactor;

	// stateparams.h:1266
	float32_t offsetUnits;

	// stateparams.h:1267
	uint32_t primitiveResetIndex;

	// stateparams.h:1268
	renderengine::RasterizerState::PS3ShadeMode shadeMode;

	// stateparams.h:1269
	bool scissorTestEnable;

	// stateparams.h:1270
	bool primitiveResetEnable;

public:
	// stateparams.h:1217
	void Parameters();

	// stateparams.h:1231
	void SetFillMode(renderengine::RasterizerState::FillMode);

	// stateparams.h:1232
	void SetCullMode(renderengine::RasterizerState::CullMode);

	// stateparams.h:1233
	void SetFrontFace(renderengine::RasterizerState::FrontFace);

	// stateparams.h:1234
	void SetDepthBias(float32_t);

	// stateparams.h:1235
	void SetSlopeScaleDepthBias(float32_t);

	// stateparams.h:1236
	void SetScissorTestEnable(bool);

	// stateparams.h:1237
	void SetPrimitiveResetEnable(bool);

	// stateparams.h:1238
	void SetPrimitiveResetIndex(uint32_t);

	// stateparams.h:1240
	void PS3SetFillModeBack(renderengine::RasterizerState::FillMode);

	// stateparams.h:1241
	void PS3SetShadeMode(renderengine::RasterizerState::PS3ShadeMode);

	// stateparams.h:1242
	void PS3SetFrontFace(renderengine::RasterizerState::FrontFace);

	// stateparams.h:1244
	renderengine::RasterizerState::FillMode GetFillMode() const;

	// stateparams.h:1245
	renderengine::RasterizerState::CullMode GetCullMode() const;

	// stateparams.h:1246
	renderengine::RasterizerState::FrontFace GetFrontFace() const;

	// stateparams.h:1247
	float32_t GetDepthBias() const;

	// stateparams.h:1248
	float32_t GetSlopeScaleDepthBias() const;

	// stateparams.h:1249
	bool GetScissorTestEnable() const;

	// stateparams.h:1250
	bool GetPrimitiveResetEnable() const;

	// stateparams.h:1251
	uint32_t GetPrimitiveResetIndex() const;

	// stateparams.h:1253
	renderengine::RasterizerState::FrontFace PS3GetFrontFace() const;

	// stateparams.h:1254
	renderengine::RasterizerState::PS3ShadeMode PS3GetShadeMode() const;

}

// stateparams.h:1432
struct renderengine::VertexProgramState::Parameters {
	// stateparams.h:1442
	const ProgramBuffer * vertexProgram;

	// stateparams.h:1443
	const VertexDescriptor * vertexDescriptor;

public:
	// stateparams.h:1435
	void SetVertexProgram(const ProgramBuffer *);

	// stateparams.h:1436
	void SetVertexDescriptor(const VertexDescriptor *);

	// stateparams.h:1439
	const ProgramBuffer * GetVertexProgram() const;

	// stateparams.h:1440
	const VertexDescriptor * GetVertexDescriptor() const;

}

// stateparams.h:368
struct renderengine::RenderTargetState::Parameters {
	// stateparams.h:384
	renderengine::PixelBuffer *[5] targets;

public:
	// stateparams.h:369
	void Parameters();

	// stateparams.h:380
	void SetTarget(renderengine::RenderTargetState::TargetID, renderengine::PixelBuffer *);

	// stateparams.h:381
	renderengine::PixelBuffer * GetTarget(renderengine::RenderTargetState::TargetID) const;

}

// stateparams.h:1432
struct renderengine::VertexProgramState::Parameters {
	// stateparams.h:1442
	const renderengine::ProgramBuffer * vertexProgram;

	// stateparams.h:1443
	const renderengine::VertexDescriptor * vertexDescriptor;

public:
	// stateparams.h:1435
	void SetVertexProgram(const renderengine::ProgramBuffer *);

	// stateparams.h:1436
	void SetVertexDescriptor(const renderengine::VertexDescriptor *);

	// stateparams.h:1439
	const renderengine::ProgramBuffer * GetVertexProgram() const;

	// stateparams.h:1440
	const renderengine::VertexDescriptor * GetVertexDescriptor() const;

}


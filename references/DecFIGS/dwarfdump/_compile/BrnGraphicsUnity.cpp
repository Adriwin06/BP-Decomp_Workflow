struct _CGprogram;

struct _CGparameter;

struct AptSharedPtr<AptFile>;

struct AptFloatArrayCXForm;

struct AptUint32CXForm;

struct AptSavedInputRecord;

// Declaration
struct AptValue {
	// AptValue.h:596
	enum CIH_ONLY {
		CO_CIH = 0,
	}

protected:
	// AptValue.h:554
	extern const uint32_t MAX_REFCOUNT = 4095;

}

struct ICPUShader;

// Declaration
struct CgsRenderTarget {
	// CgsRenderTarget.h:34
	struct CgsRenderTargetSurface {
	private:
		// CgsRenderTarget.h:35
		renderengine::SamplerState::FilterMode m_FilterMode;

		// CgsRenderTarget.h:37
		bool mbInUse;

		// CgsRenderTarget.h:38
		bool mbUseSystemMemory;

		// CgsRenderTarget.h:39
		bool mbUseDevice;

		// CgsRenderTarget.h:40
		uint32_t mu32BufferFormat;

		// CgsRenderTarget.h:41
		uint32_t mu32TextureFormat;

		// CgsRenderTarget.h:42
		uint32_t mu32BaseEDRAM;

		// CgsRenderTarget.h:43
		int32_t miPS3CompressionBase;

		// CgsRenderTarget.h:44
		int8_t mu8TileIndex;

		// CgsRenderTarget.h:45
		int8_t mu8zCullIndex;

		// CgsRenderTarget.h:46
		int32_t m32zCullAddress;

		// CgsRenderTarget.h:47
		Target * mpTarget;

		// CgsRenderTarget.h:48
		renderengine::Texture::Type mTextureType;

		// CgsRenderTarget.h:51
		const rw::graphics::postfx::Target * mpSharedTarget;

		// CgsRenderTarget.h:52
		void * mSharedAddress;

	public:
		// CgsRenderTarget.h:57
		CgsRenderTargetSurface();

		// CgsRenderTarget.h:75
		void SetInUse(bool);

		// CgsRenderTarget.h:82
		void SetUseSystemMemory(bool);

		// CgsRenderTarget.h:89
		void SetUseDevice(bool);

		// CgsRenderTarget.h:96
		void SetTarget(Target *);

		// CgsRenderTarget.h:103
		void SetBufferFormat(uint32_t);

		// CgsRenderTarget.h:110
		void SetTextureFormat(uint32_t);

		// CgsRenderTarget.h:117
		void SetTextureType(renderengine::Texture::Type);

		// CgsRenderTarget.h:124
		void SetBaseEDRAM(uint32_t);

		// CgsRenderTarget.h:134
		void SetPS3CompressionBase(int32_t);

		// CgsRenderTarget.h:141
		void SetTileIndex(int8_t);

		// CgsRenderTarget.h:148
		void SetZCullIndex(int8_t);

		// CgsRenderTarget.h:155
		void SetZCullAddress(int32_t);

		// CgsRenderTarget.h:163
		void SetSharedTarget(const rw::graphics::postfx::Target *, void *);

		// CgsRenderTarget.h:171
		void SetFilterMode(renderengine::SamplerState::FilterMode);

		// CgsRenderTarget.h:177
		bool GetInUse() const;

		// CgsRenderTarget.h:183
		bool GetUseSystemMemory() const;

		// CgsRenderTarget.h:189
		bool GetUseDevice() const;

		// CgsRenderTarget.h:195
		Target * GetTarget() const;

		// CgsRenderTarget.h:201
		uint32_t GetTextureFormat() const;

		// CgsRenderTarget.h:207
		renderengine::Texture::Type GetTextureType() const;

		// CgsRenderTarget.h:213
		uint32_t GetBufferFormat() const;

		// CgsRenderTarget.h:219
		uint32_t GetBaseEDRAM() const;

		// CgsRenderTarget.h:225
		int32_t GetPS3CompressionBase() const;

		// CgsRenderTarget.h:231
		int8_t GetTileIndex() const;

		// CgsRenderTarget.h:237
		int8_t GetZCullIndex() const;

		// CgsRenderTarget.h:243
		int32_t GetZCullAddress() const;

		// CgsRenderTarget.h:249
		const rw::graphics::postfx::Target * GetSharedTarget();

		// CgsRenderTarget.h:255
		void * GetSharedAddress();

		// CgsRenderTarget.h:261
		renderengine::SamplerState::FilterMode GetFilterMode() const;

	}

public:
	// CgsRenderTarget.h:356
	RenderTarget * GetRenderTarget();

	// CgsRenderTarget.h:285
	CgsRenderTarget();

	// CgsRenderTarget.h:534
	void SetDepthTargetBufferFormat(uint32_t);

	// CgsRenderTarget.h:541
	void SetDepthTargetTextureFormat(uint32_t);

	// CgsRenderTarget.h:404
	void ClearColourTargetInUse();

	// CgsRenderTarget.h:370
	void SetDimensions(uint32_t, uint32_t);

	// CgsRenderTarget.h:378
	void SetNumMipMaps(uint32_t);

	// CgsRenderTarget.h:385
	void SetUseDepthStencilAsTexture(bool);

	// CgsRenderTarget.h:418
	void SetColourTargetInUse(uint32_t, bool);

	// CgsRenderTarget.h:520
	void SetDepthTargetInUse(bool);

	// CgsRenderTarget.h:392
	void SetMultisampleFormat(int32_t);

	// CgsRenderTarget.h:454
	void SetColourTargetBufferFormat(uint32_t, uint32_t);

	// CgsRenderTarget.h:463
	void SetColourTargetTextureFormat(uint32_t, uint32_t);

	// CgsRenderTarget.h:436
	void SetColourTargetUseSystemMemory(uint32_t, bool);

	// CgsRenderTarget.h:604
	void SetNumSections(uint32_t);

	// CgsRenderTarget.h:555
	void SetDepthTargetTileIndex(int8_t);

	// CgsRenderTarget.h:563
	void SetDepthTargetCompressionBase(int32_t);

	// CgsRenderTarget.h:571
	void SetDepthTargetZCullIndex(int8_t);

	// CgsRenderTarget.h:578
	void SetDepthTargetZCullAddress(int32_t);

	// CgsRenderTarget.h:481
	void SetColourTargetTileIndex(uint32_t, int8_t);

	// CgsRenderTarget.h:491
	void SetColourTargetCompressionBase(uint32_t, int32_t);

	// CgsRenderTarget.h:586
	void SetTextureType(uint32_t, renderengine::Texture::Type);

	// CgsRenderTarget.h:501
	void SetColourFilterMode(uint32_t, renderengine::SamplerState::FilterMode);

	// CgsRenderTarget.h:427
	void SetColourTargetUseDevice(uint32_t, bool);

	// CgsRenderTarget.h:339
	void SetRenderTargetState();

	// CgsRenderTarget.h:609
	uint32_t GetNumSections();

	// CgsRenderTarget.h:593
	uint32_t GetWidth() const;

	// CgsRenderTarget.h:599
	uint32_t GetHeight() const;

	// CgsRenderTarget.h:398
	int32_t GetMultisampleFormat();

}

// Declaration
struct CgsBlendStateFactory {
public:
	// CgsBlendStateFactory.h:82
	BlendState * GetState(uint32_t);

private:
	// CgsBlendStateFactory.h:57
	extern BlendState *[9] saBlendStates;

}

// Declaration
struct CgsRasterizerStateFactory {
public:
	// CgsRasterizerStateFactory.h:77
	RasterizerState * GetState(uint32_t);

private:
	// CgsRasterizerStateFactory.h:52
	extern RasterizerState *[3] saRasterizerStates;

}

// Declaration
struct CgsDepthStencilStateFactory {
public:
	// CgsDepthStencilStateFactory.h:78
	DepthStencilState * GetState(uint32_t);

private:
	// CgsDepthStencilStateFactory.h:53
	extern DepthStencilState *[5] saDepthStencilStates;

}

struct cLionEffectDefinition;

struct cParticleEmitter;

void CgsDev::StrStreamBase::StrStreamBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStream::StrStream(char *  lpcCharBuffer, int32_t  liBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStream::StrStream(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::StrStreamBase::StrStreamBase(/* parameters */);
}

void CgsDev::StrStreamBase::operator<<(const char *  lpcString) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::IsBitSet(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::UnSetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::UnSetBit(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::SPrintf(char *  lpcDest, unsigned int  luBytes, const char *  lpcFormat, ...) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:106
		va_list lArgument;

		// CgsStringUtils.h:107
		int32_t lNumBytesCopied;

	}
}

void BrnDirector::HookNameStringWrapper::Set(const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::StrCpy(char *  lpcDest, unsigned int  luBytes, const char *  lpcSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::HookNameStringWrapper::operator=(const const HookNameStringWrapper &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Set(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
}

void BrnGraphics::DebugComponent::GetPath() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererPS3GcmCommandBufferHelper::CustomGcmCallback(CellGcmContextData *  lpContext, uint32_t  luWordsToReserve) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.cpp:382
		const CellGcmContextData lContextStateOld;

		// BrnRendererModule.cpp:386
		int32_t luResult;

		// BrnRendererModule.cpp:389
		const CellGcmContextData lContextStateNew;

		// BrnRendererModule.cpp:391
		const int KI_CACHE_LINE_SIZE_IN_BYTES;

		// BrnRendererModule.cpp:392
		const int KI_CACHE_LINE_SIZE_IN_WORDS;

		// BrnRendererModule.cpp:394
		const int KI_SAFETY_MARGIN;

		// BrnRendererModule.cpp:395
		const int KI_CACHE_LINES_PER_LOOP;

	}
	{
		// BrnRendererModule.cpp:399
		uint32_t * lpWritePointer;

		// BrnRendererModule.cpp:400
		uint32_t * lpWritePointerEnd;

	}
	{
		// BrnRendererModule.cpp:421
		uint32_t * lpWritePointer;

		// BrnRendererModule.cpp:422
		uint32_t * lpWritePointerEnd;

		{
			// BrnRendererModule.cpp:435
			uint64_t __dcbz128_offset;

			// BrnRendererModule.cpp:435
			const void * __dcbz128_ptr;

		}
		{
			// BrnRendererModule.cpp:436
			uint64_t __dcbz128_offset;

			// BrnRendererModule.cpp:436
			const void * __dcbz128_ptr;

		}
		{
			// BrnRendererModule.cpp:437
			uint64_t __dcbz128_offset;

			// BrnRendererModule.cpp:437
			const void * __dcbz128_ptr;

		}
		{
			// BrnRendererModule.cpp:438
			uint64_t __dcbz128_offset;

			// BrnRendererModule.cpp:438
			const void * __dcbz128_ptr;

		}
	}
}

void BrnRendererPS3GcmCommandBufferHelper::InstallGcmCallback() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::GetVSynchRate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.cpp:636
		CellVideoOutState lVideoState;

		// BrnRendererModule.cpp:637
		int32_t lError;

	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::BeginRenderAntiAliasedTransparent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::ResolveMSAA(const float32_t  lfWhiteLevel, const uint8_t  luStencilValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::EndQuarterResBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::BeginRenderMenusAfterPostFx() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::ClearGraphicsContext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnCoronaManager::GetSubmissionInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::CoronaBuffer::Unlock() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::TakeScreenshot() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.cpp:4653
		renderengine::Device::LockedFrontBuffer lLockedFrontBuffer;

		// BrnRendererModule.cpp:4654
		bool lbLocked;

	}
	{
		// BrnRendererModule.cpp:4658
		std::FILE * lpFile;

		// BrnRendererModule.cpp:4659
		char[256] lacFileName;

		// BrnRendererModule.cpp:4669
		int32_t liStringPos;

		{
			// BrnRendererModule.cpp:4683
			struct TGAHeader {
				// BrnRendererModule.cpp:4685
				char idlength;

				// BrnRendererModule.cpp:4686
				char colourmaptype;

				// BrnRendererModule.cpp:4687
				char datatypecode;

				// BrnRendererModule.cpp:4688
				char colourmaporiginLSB;

				// BrnRendererModule.cpp:4689
				char colourmaporiginMSB;

				// BrnRendererModule.cpp:4690
				char colourmaplengthLSB;

				// BrnRendererModule.cpp:4691
				char colourmaplengthMSB;

				// BrnRendererModule.cpp:4692
				char colourmapdepth;

				// BrnRendererModule.cpp:4693
				char x_originLSB;

				// BrnRendererModule.cpp:4694
				char x_originMSB;

				// BrnRendererModule.cpp:4695
				char y_originLSB;

				// BrnRendererModule.cpp:4696
				char y_originMSB;

				// BrnRendererModule.cpp:4697
				char widthLSB;

				// BrnRendererModule.cpp:4698
				char widthMSB;

				// BrnRendererModule.cpp:4699
				char heightLSB;

				// BrnRendererModule.cpp:4700
				char heightMSB;

				// BrnRendererModule.cpp:4701
				char bitsperpixel;

				// BrnRendererModule.cpp:4702
				char imagedescriptor;

			}

			// BrnRendererModule.cpp:4706
			TGAHeader lHeader;

			// BrnRendererModule.cpp:4728
			int32_t liDepthInBytes;

			// BrnRendererModule.cpp:4731
			char * lpu8PixelsStart;

			// BrnRendererModule.cpp:4732
			int32_t i;

			// BrnRendererModule.cpp:4732
			int32_t j;

			{
				// BrnRendererModule.cpp:4738
				char * lpu8PixelRow;

			}
			{
				// BrnRendererModule.cpp:4770
				char[4] lacPixels;

				// BrnRendererModule.cpp:4771
				char * lpSourcePixel;

			}
		}
	}
}

void BrnRendererModule::DebugMemoryInit(BrnRendererModule *  lpData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::DebugComponent::Construct(BrnRendererModule *  lpRendererModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::DebugComponent::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::DebugComponent::RenderHUD(CgsDev::Debug2DImmediateRender *  lpDisplay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::DebugComponent::GetName() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::DebugComponent::OnActivate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Tint::EndBlendJob() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Target(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::GetFirstCommand() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::GetNextCommand(const ImCommand *  lpCurrentCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1298
		uint32_t luCurrentCommandPos;

		// CgsImRenderBuffer.h:1299
		uint32_t luNextCommandPos;

	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::GetFirstCommand() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::GetNextCommand(const ImCommand *  lpCurrentCommand) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:1298
		uint32_t luCurrentCommandPos;

		// CgsImRenderBuffer.h:1299
		uint32_t luNextCommandPos;

	}
}

void rw::math::fpu::Determinant<double>(const const rw::math::fpu::Matrix44Template<double> &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Clamp(const const float &  value, const const float &  min, const const float &  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Max<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:29
		float test;

		// scalar_operation_platform_inline.h:30
		float r;

	}
}

void rw::math::vpu::Min<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:20
		float test;

		// scalar_operation_platform_inline.h:21
		float r;

	}
}

void rw::math::vpu::operator>(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:356
		bool result;

	}
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:393
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::Inverse(const rw::math::vpu::Matrix44Affine &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_inline.h:497
		VecFloat determinant;

	}
}

void rw::math::vpu::Inverse(const rw::math::vpu::Matrix44Affine &  m, const VecFloat &  determinant) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic det;

		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic xAxisResult;

		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic yAxisResult;

		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic zAxisResult;

		// matrix44affine_operation_inline.h:487
		VectorIntrinsicUnion::VectorIntrinsic wAxisResult;

		{
			// matrix44affine_operation_inline.h:488
			VectorIntrinsicUnion::VectorIntrinsic negatePos;

			// matrix44affine_operation_inline.h:488
			VectorIntrinsicUnion::VectorIntrinsic transX;

			// matrix44affine_operation_inline.h:488
			VectorIntrinsicUnion::VectorIntrinsic transY;

			// matrix44affine_operation_inline.h:488
			VectorIntrinsicUnion::VectorIntrinsic transZ;

			{
				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic signMask;

			}
			{
				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_crossYZ;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_crossZX;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_crossXY;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_x;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_y;

				// matrix44affine_operation_inline.h:488
				VectorIntrinsicUnion::VectorIntrinsic temp_inverse_z;

				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV2;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV1;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV3;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV2;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV1;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV3;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV2;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV1;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic crossV3;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic yy;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic zz;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic temp0;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic temp1;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic temp2;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic temp3;

				}
				{
					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic reciprocal;

					// matrix44affine_operation_inline.h:488
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					{
						// matrix44affine_operation_inline.h:488
						VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

						// matrix44affine_operation_inline.h:488
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						{
							// matrix44affine_operation_inline.h:488
							VectorIntrinsicUnion::VectorIntrinsic estimate;

							// matrix44affine_operation_inline.h:488
							VectorIntrinsicUnion::VectorIntrinsic vOne;

						}
					}
				}
			}
		}
	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Matrix44Affine &  a, const rw::math::vpu::Matrix44Affine &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Matrix44Affine &  m, const rw::math::vpu::Matrix44Affine &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:84
		VectorIntrinsicUnion::VectorIntrinsic sp0;

		// matrix44affine_operation_platform_inline.h:84
		VectorIntrinsicUnion::VectorIntrinsic sp1;

		// matrix44affine_operation_platform_inline.h:84
		VectorIntrinsicUnion::VectorIntrinsic sp2;

		// matrix44affine_operation_platform_inline.h:84
		VectorIntrinsicUnion::VectorIntrinsic sp3;

		// matrix44affine_operation_platform_inline.h:85
		VectorIntrinsicUnion::VectorIntrinsic ma0;

		// matrix44affine_operation_platform_inline.h:85
		VectorIntrinsicUnion::VectorIntrinsic ma1;

		// matrix44affine_operation_platform_inline.h:85
		VectorIntrinsicUnion::VectorIntrinsic ma2;

		// matrix44affine_operation_platform_inline.h:85
		VectorIntrinsicUnion::VectorIntrinsic ma3;

		// matrix44affine_operation_platform_inline.h:86
		VectorIntrinsicUnion::VectorIntrinsic bx;

		// matrix44affine_operation_platform_inline.h:87
		VectorIntrinsicUnion::VectorIntrinsic by;

		// matrix44affine_operation_platform_inline.h:88
		VectorIntrinsicUnion::VectorIntrinsic bz;

		// matrix44affine_operation_platform_inline.h:90
		VectorIntrinsicUnion::VectorIntrinsic zero;

	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Matrix44Affine &  m, const rw::math::vpu::Matrix44 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44_operation_platform_inline.h:92
		VectorIntrinsicUnion::VectorIntrinsic[4] vs;

		// matrix44_operation_platform_inline.h:92
		VectorIntrinsicUnion::VectorIntrinsic[4] temp;

		// matrix44_operation_platform_inline.h:92
		VectorIntrinsicUnion::VectorIntrinsic[4] result;

	}
}

void rw::math::fpu::Vector3Template<float>::Vector3Template(float  _x, float  _y, float  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Mult<float>(const const Vector3Template<float> &  v, const const Matrix33Template<float> &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Vector3Template<float>::Vector3Template(/* parameters */);
}

void rw::math::fpu::operator*<float>(const const Vector3Template<float> &  v, const const Matrix33Template<float> &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Vector4Template(double  _x, double  _y, double  _z, double  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Subtract<double>(const const rw::math::fpu::Vector4Template<double> &  a, const const rw::math::fpu::Vector4Template<double> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector4_operation.h:281
	Vector4Template<double> & r;

	{
		// vector4_operation.h:281
		Vector4Template<double> r;

		Vector4Template<double>::Vector4Template(/* parameters */);
	}
}

void rw::math::fpu::operator*<double>(const const double &  scalar, const const rw::math::fpu::Vector4Template<double> &  vec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// vector4_operation.h:107
	Vector4Template<double> & r;

	{
		// vector4_operation.h:107
		Vector4Template<double> r;

		Vector4Template<double>::Vector4Template(/* parameters */);
	}
}

void rw::math::fpu::Mult<double>(const const rw::math::fpu::Vector4Template<double> &  v, const const rw::math::fpu::Matrix44Template<double> &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// matrix44_operation.h:250
	Vector4Template<double> & rv;

	{
		// matrix44_operation.h:250
		Vector4Template<double> rv;

		Vector4Template<double>::Vector4Template(/* parameters */);
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1607
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1608
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:1610
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1610
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator+(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1274
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		// vec_float_operation_inline.h:1276
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1275
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisY>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void rw::math::vpu::operator*<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1607
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1608
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:1610
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1610
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::Normalize(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:195
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:196
			VectorIntrinsicUnion::VectorIntrinsic temp_one_over_rqrt_dot;

			{
				// vector3_operation_inline.h:196
				VectorIntrinsicUnion::VectorIntrinsic dotproduct;

				{
					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic yy;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic zz;

				}
				{
					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vZero;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vOne;

					// vector3_operation_inline.h:196
					VectorIntrinsicUnion::VectorIntrinsic vHalf;

					{
						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic estimate;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vZero;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vOne;

						// vector3_operation_inline.h:196
						VectorIntrinsicUnion::VectorIntrinsic vHalf;

					}
				}
			}
		}
	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector3  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:453
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(float  f0) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_macros.h:237
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_macros.h:238
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVecFloat_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector4  v, const rw::math::vpu::Matrix44 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Vector4  v, const rw::math::vpu::Matrix44 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44_operation_platform_inline.h:64
		VectorIntrinsicUnion::VectorIntrinsic x;

		// matrix44_operation_platform_inline.h:64
		VectorIntrinsicUnion::VectorIntrinsic y;

		// matrix44_operation_platform_inline.h:64
		VectorIntrinsicUnion::VectorIntrinsic z;

		// matrix44_operation_platform_inline.h:64
		VectorIntrinsicUnion::VectorIntrinsic w;

		// matrix44_operation_platform_inline.h:64
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::VecFloatRef(const VectorIntrinsicUnion::VectorIntrinsic &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/<VectorAxisX, VectorAxisW>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1732
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1733
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1735
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		{
			// vec_float_operation_inline.h:1737
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vec_float_operation_inline.h:1737
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vec_float_operation_inline.h:1737
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vec_float_operation_inline.h:1737
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vec_float_operation_inline.h:1737
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void rw::math::vpu::operator/<VectorAxisY, VectorAxisW>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1732
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1733
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1735
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		{
			// vec_float_operation_inline.h:1737
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vec_float_operation_inline.h:1737
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vec_float_operation_inline.h:1737
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vec_float_operation_inline.h:1737
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vec_float_operation_inline.h:1737
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisZ>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisX>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::operator float() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::GetFloat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:231
		float ret;

		{
			// vec_float_type_inline.h:232
			VectorIntrinsicUnion vecUnion;

		}
	}
}

void rw::math::fpu::Vector4Template<double>::Vector4Template(const const rw::math::vpu::Vector4 &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Vector4Template(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
}

void rw::math::fpu::Matrix44Template<double>::Matrix44Template(const const rw::math::fpu::Vector4Template<double> &  row0, const const rw::math::fpu::Vector4Template<double> &  row1, const const rw::math::fpu::Vector4Template<double> &  row2, const const rw::math::fpu::Vector4Template<double> &  row3) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Vector4Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::operator=(const const rw::math::fpu::Vector4Template<double> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Mult<double>(const const rw::math::fpu::Matrix44Template<double> &  m, const const rw::math::fpu::Matrix44Template<double> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// matrix44_operation.h:262
	Matrix44Template<double> & rm;

	{
		// matrix44_operation.h:262
		Matrix44Template<double> rm;

	}
	Matrix44Template<double>::Matrix44Template(/* parameters */);
	Vector4Template<double>::operator=(/* parameters */);
	Vector4Template<double>::operator=(/* parameters */);
}

void rw::math::fpu::operator*<double>(const const rw::math::fpu::Matrix44Template<double> &  a, const const rw::math::fpu::Matrix44Template<double> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Subtract<double>(const const rw::math::fpu::Matrix44Template<double> &  a, const const rw::math::fpu::Matrix44Template<double> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// matrix44_operation.h:298
	Matrix44Template<double> & m;

	{
		// matrix44_operation.h:298
		Matrix44Template<double> m;

	}
	Matrix44Template<double>::Matrix44Template(/* parameters */);
	Vector4Template<double>::operator=(/* parameters */);
	Vector4Template<double>::operator=(/* parameters */);
}

void rw::math::fpu::operator-<double>(const const rw::math::fpu::Matrix44Template<double> &  a, const const rw::math::fpu::Matrix44Template<double> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Mult<double>(const const rw::math::fpu::Matrix44Template<double> &  m, double  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// matrix44_operation.h:238
	Matrix44Template<double> & rm;

	{
		// matrix44_operation.h:238
		Matrix44Template<double> rm;

	}
	Matrix44Template<double>::Matrix44Template(/* parameters */);
	Vector4Template<double>::operator=(/* parameters */);
	Vector4Template<double>::operator=(/* parameters */);
}

void rw::math::fpu::operator*<double>(const const rw::math::fpu::Matrix44Template<double> &  m, double  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererMemory::GetEnvMapBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::GetRenderTarget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::EndRenderEnvironmentMapFace(uint32_t  luFace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44Template<double>::Matrix44Template(double  m0, double  m1, double  m2, double  m3, double  m4, double  m5, double  m6, double  m7, double  m8, double  m9, double  m10, double  m11, double  m12, double  m13, double  m14, double  m15) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44Template<double>::Set(double  m0, double  m1, double  m2, double  m3, double  m4, double  m5, double  m6, double  m7, double  m8, double  m9, double  m10, double  m11, double  m12, double  m13, double  m14, double  m15) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Set(double  _x, double  _y, double  _z, double  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::GetMatrix44_ZeroTemplate<double>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Matrix44Template<double>::Matrix44Template(/* parameters */);
}

void rw::math::fpu::Matrix44Template<double>::Matrix44Template(const const rw::math::fpu::Matrix44Template<double> &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Inverse<double>(const const rw::math::fpu::Matrix44Template<double> &  m, const double &  determinant) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44_operation.h:333
		Matrix44Template<double> rm;

		Matrix44Template<double>::Matrix44Template(/* parameters */);
	}
}

void rw::math::fpu::Inverse<double>(const const rw::math::fpu::Matrix44Template<double> &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44_operation.h:318
		double determinant;

	}
}

void rw::math::fpu::GetMatrix44_IdentityTemplate<double>() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Matrix44Template<double>::Matrix44Template(/* parameters */);
}

void BrnRendererMemory::GetBackBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererMemory.h:342
		CgsRenderTarget * lpBuffer;

	}
}

void rw::graphics::postfx::RenderTarget::GetColorTarget(uint32_t  idx) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::SetTextureState(TextureState *  lpTextureState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::SetRenderTargetState(RenderTargetState *  lState, uint32_t  luDestSliceOrFace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::CoronaBuffer::Lock(const renderengine::CoronaBuffer::Iterator &  iterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextureScopeTable::BeginFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTextureScopeTable.h:221
		uint32_t luPurpose;

	}
}

void CgsGraphics::TextureScopeTableElement::SetDispatchBinPointer(const TextureState *  lpNewDispatchBinCopy, bool  lbUseDispatchThreadVersion) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::StartOfFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsGraphics::TextureScopeTable::BeginFrame(/* parameters */);
}

void rw::graphics::postfx::ColourCube::EndianSwapFixup() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap<uint8_t>(const uint8_t *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::EndianSwap(const uint32_t &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::MemAddBasePtr<uint8_t, rw::graphics::postfx::ColourCube>(uint8_t *  ptr, rw::graphics::postfx::ColourCube *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::Matrix33Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Vector3Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::GetRow(int  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::SetElem(int  row, int  column, float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix33.h:254
		const Vector3Template<float> & vector;

	}
}

void rw::math::fpu::Mult<float>(const const Matrix33Template<float> &  m, const const Matrix33Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// matrix33_operation.h:74
	Matrix33Template<float> & result;

	{
		// matrix33_operation.h:74
		Matrix33Template<float> result;

		{
			// matrix33_operation.h:75
			int i;

			Matrix33Template<float>::GetRow(/* parameters */);
			Matrix33Template<float>::SetElem(/* parameters */);
			Matrix33Template<float>::SetElem(/* parameters */);
			Matrix33Template<float>::SetElem(/* parameters */);
		}
	}
}

void rw::math::fpu::operator*<float>(const const Matrix33Template<float> &  a, const const Matrix33Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Cos(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::cosf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// cosf4.h:14
		float[4] xl;

		// cosf4.h:14
		float[4] xl2;

		// cosf4.h:14
		float[4] xl3;

		// cosf4.h:14
		float[4] res;

		// cosf4.h:15
		int[4] q;

		// cosf4.h:30
		int[4] offset;

		// cosf4.h:34
		float[4] qf;

		// cosf4.h:35
		float[4] p1;

		// cosf4.h:49
		float[4] ct1;

		// cosf4.h:50
		float[4] st1;

		// cosf4.h:52
		float[4] ct2;

		// cosf4.h:53
		float[4] st2;

		// cosf4.h:55
		float[4] cx;

		// cosf4.h:56
		float[4] sx;

		// cosf4.h:61
		unsigned int[4] mask1;

		// cosf4.h:68
		unsigned int[4] mask2;

	}
}

void rw::math::vpu::Sin(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sinf4(float[4]  x) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// sinf4.h:14
		float[4] xl;

		// sinf4.h:14
		float[4] xl2;

		// sinf4.h:14
		float[4] xl3;

		// sinf4.h:14
		float[4] res;

		// sinf4.h:15
		int[4] q;

		// sinf4.h:30
		int[4] offset;

		// sinf4.h:34
		float[4] qf;

		// sinf4.h:35
		float[4] p1;

		// sinf4.h:49
		float[4] ct1;

		// sinf4.h:50
		float[4] st1;

		// sinf4.h:52
		float[4] ct2;

		// sinf4.h:53
		float[4] st2;

		// sinf4.h:55
		float[4] cx;

		// sinf4.h:56
		float[4] sx;

		// sinf4.h:61
		unsigned int[4] mask1;

		// sinf4.h:68
		unsigned int[4] mask2;

	}
}

void rw::math::vpu::Abs<float>(const const float &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_platform_inline.h:58
		float r;

	}
}

void rw::ResourceDescriptor::ResourceDescriptor(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<6u>::BaseResourceDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::BaseResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::~BaseResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::BaseResourceDescriptorType(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::BaseResourceDescriptor(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::~BaseResourceDescriptorType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~BaseResourceDescriptors() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<6u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::MemAlign<rw::graphics::postfx::ColourCube>(rw::graphics::postfx::ColourCube *  ptr, uint32_t  align) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ostypes.h:433
		const SPU::HostPtr alignMask;

	}
}

void rw::graphics::postfx::Tint::BeginBlendJob() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::GetWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::ColourCube::GetPixels() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::JobManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::GetUseTint() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::GetTintData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::GetTintWeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::ColourCube::EndianSwapUnfix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::MemSubtractBasePtr<uint8_t, rw::graphics::postfx::ColourCube>(uint8_t *  ptr, rw::graphics::postfx::ColourCube *  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::GetProgramType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::GetConstantIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::GetNumConstants() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::PS3GetProgramBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::PS3GetCgProgramBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RwPtrToHostPtr<_CGprogram>(_CGprogram *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::PS3GetPixelProgramOffset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EndShaderStates<renderengine::FloatShaderStateIterator>(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	renderengine::ProgramVariableHandle::GetProgramType(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	{
	}
}

void rw::math::fpu::Magnitude<float>(const const Vector3Template<float> &  vec) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Sqrt<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::IsSimilar(float  a, float  b, float  epsilon) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Abs<float>(const const float &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:108
		float r;

	}
}

void rw::math::fpu::Dot<float>(const const Vector3Template<float> &  a, const const Vector3Template<float> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTarget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::CgsRenderTargetSurface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::SetDepthTargetBufferFormat(uint32_t  lu32BufferFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::SetBufferFormat(uint32_t  lu32BufferFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::SetDepthTargetTextureFormat(uint32_t  lu32TextureFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::SetTextureFormat(uint32_t  lu32TextureFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::ClearColourTargetInUse() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRenderTarget.h:406
		uint32_t i;

	}
}

void CgsRenderTarget::CgsRenderTargetSurface::SetInUse(bool  lbInUse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::SetUseDevice(bool  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::SetDimensions(uint32_t  lu32ScreenWidth, uint32_t  lu32ScreenHeight) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::SetNumMipMaps(uint32_t  lu32NumMipMaps) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::SetUseDepthStencilAsTexture(bool  lbUseDepthStencilAsTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::SetColourTargetInUse(uint32_t  lu32ColourTargetId, bool  lbColourTargetInUse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::SetDepthTargetInUse(bool  lbDepthTargetInUse) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::SetMultisampleFormat(int32_t  ln32MultiSampleFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::SetColourTargetBufferFormat(uint32_t  lu32ColourTargetId, uint32_t  lu32BufferFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::SetColourTargetTextureFormat(uint32_t  lu32ColourTargetId, uint32_t  lu32TextureFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::SetColourTargetUseSystemMemory(uint32_t  lu32ColourTargetId, bool  lbUseSystemMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::SetUseSystemMemory(bool  lbUseSystemMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::Free(void *  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::Resource(const const MemoryResource &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<6u>::BaseResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:307
		uint32_t i;

	}
}

void EA::Jobs::Job::SetCode(EA::Jobs::JobEnvironment  env, const void *  ptrToCode, int  codeSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void EA::Jobs::Job::SetName(const char *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::OcclusionCullManager::GetQueryList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern OcclusionJobOptions & operator=(const const OcclusionJobOptions &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::GetUseDepthOfField() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::GetDepthOfFieldData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::GetDepthOfFieldWeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::DepthOfFieldData::SetToBlend(const const DepthOfFieldData &  lValue0, float32_t  lfWeight0, const const DepthOfFieldData &  lValue1, float32_t  lfWeight1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::DepthOfFieldData::SetToBlend(const const DepthOfFieldData &  lValueA0, float32_t  lfWeightA0, const const DepthOfFieldData &  lValueA1, float32_t  lfWeightA1, const const DepthOfFieldData &  lValueB0, float32_t  lfWeightB0, const const DepthOfFieldData &  lValueB1, float32_t  lfWeightB1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::DepthOfFieldData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::RGBA(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Dot(const rw::math::vpu::Vector3  a, const rw::math::vpu::Vector3  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:146
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:147
			VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

			// vector3_operation_inline.h:147
			VectorIntrinsicUnion::VectorIntrinsic yy;

			// vector3_operation_inline.h:147
			VectorIntrinsicUnion::VectorIntrinsic zz;

		}
	}
}

void rw::math::vpu::GetVecFloat_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator<(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:514
		bool result;

	}
}

void rw::math::vpu::MagnitudeSquared(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:167
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic xx_yy_zz;

			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic yy;

			// vector3_operation_inline.h:168
			VectorIntrinsicUnion::VectorIntrinsic zz;

		}
	}
}

void BrnEffects::Curves::SmoothStep::Evaluate(float32_t  lfDistSquared) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::Curves::SmoothStep::Evaluate(const const Vector3Template<float> &  lvCurveParams, const const Vector2Template<float> &  lvScaleFactors, float32_t  lfCurrentValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// Curves.h:79
		float32_t lfInverseLerpValue;

		// Curves.h:80
		float32_t lfReturnValue;

	}
}

void rw::math::fpu::Vector3Template<float>::GetComponent(int  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::GetComponent(int  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Lerp<float>(float  a, float  b, float  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Max<float>(const const float &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar.h:222
		float test;

		// scalar.h:223
		float r;

	}
}

void BrnCoronaManager::BrnSubmissionInterface::DerivedCoronaIterator::GetNumCoronasWritten() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::SetAlpha(uint8_t  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector2  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:374
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void renderengine::CoronaBuffer::Iterator::Write(Vector3  position, Vector3  direction, Vector2  size, float  distance, RGBA  colour, int  textureID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::RGBA8(const const RGBA &  rgba) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetRed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetGreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetBlue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::GetAlpha() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnCoronaTypeParams::GetCoronaTypeParams(BrnCoronaType  lCoronaType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::SinCos<float>(float  a, const float &  sin_out, const float &  cos_out) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Sin(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sinf(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Cos(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::cosf(float  _Left) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::Matrix33Template(float  m0, float  m1, float  m2, float  m3, float  m4, float  m5, float  m6, float  m7, float  m8) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::Set(float  m0, float  m1, float  m2, float  m3, float  m4, float  m5, float  m6, float  m7, float  m8) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Set(float  _x, float  _y, float  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33FromYRotationAngle<float>(float  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix33_operation.h:805
		float s;

		// matrix33_operation.h:805
		float c;

		// matrix33_operation.h:807
		const float zero;

		// matrix33_operation.h:808
		const float one;

		SinCos<float>(/* parameters */);
	}
	Cos(/* parameters */);
	Matrix33Template<float>::Matrix33Template(/* parameters */);
	Vector3Template<float>::Set(/* parameters */);
	Vector3Template<float>::Set(/* parameters */);
}

void BrnEffects::Curves::SmoothStep::SmoothStep(const const Vector3Template<float> &  lvCurveParams, const const Vector2Template<float> &  lvScaleParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::operator=(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::operator=(const const Vector2Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::AllocateMemoryResource(uint32_t  size, uint32_t  alignment, const char8_t *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~ResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::SizeAlign(uint32_t  size, uint32_t  align) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// ostypes.h:401
		const uint32_t alignMask;

	}
}

void renderengine::TextureState::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::Free(const const Resource &  resource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::GetDefaultRenderTargetState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const RenderTargetState *  renderTargetState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.h:990
		const CellGcmSurface * internalState;

	}
}

void renderengine::ViewportParameters::ViewportParameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ViewportParameters::SetRectangle(uint32_t  x, uint32_t  y, uint32_t  w, uint32_t  h) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ScissorRectParameters::ScissorRectParameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ScissorRectParameters::SetRectangle(uint32_t  x, uint32_t  y, uint32_t  w, uint32_t  h) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::GetUseTint2d() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::GetTintData2d() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::Get2dTintWeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::TintData2d::SetToBlend(const const TintData2d &  lValue0, float32_t  lfWeight0, const const TintData2d &  lValue1, float32_t  lfWeight1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector4  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:499
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector4_operation_inline.h:500
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vector4_operation_inline.h:500
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector4  a, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::TintData2d::SetToBlend(const const TintData2d &  lValueA0, float32_t  lfWeightA0, const const TintData2d &  lValueA1, float32_t  lfWeightA1, const const TintData2d &  lValueB0, float32_t  lfWeightB0, const const TintData2d &  lValueB1, float32_t  lfWeightB1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void TintData2d() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::TintData2d::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BrnPostFxShader() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Shader() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramVariableHandle::ProgramVariableHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Vignette::State::State() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::DepthOfField::State::State() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::B4Blur::State::State() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void MotionBlurState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BrnPostFxBloomData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BrnPostFxBloom() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPostFx::BrnPostFx(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnPostFxShader(/* parameters */);
	Shader(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::graphics::postfx::Vignette::State::State(/* parameters */);
	rw::graphics::postfx::DepthOfField::State::State(/* parameters */);
	rw::graphics::postfx::B4Blur::State::State(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	MotionBlurState(/* parameters */);
	BrnPostFxBloom(/* parameters */);
	{
	}
}

void CgsResource::ResourceHandle::ResourceHandle(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::Construct(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA32::RGBA32(float32_t  red, float32_t  green, float32_t  blue, float32_t  alpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Vector4Template(float  _x, float  _y, float  _z, float  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<double>::Vector2Template(double  _x, double  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<double>::Vector3Template(double  _x, double  _y, double  _z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResource::SmallResource(const const SmallMemoryResource &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResources<3u>::BaseResources() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// resource.h:307
		uint32_t i;

	}
}

void rw::BaseResources<3u>::GetBaseResource(uint32_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::Reset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::EntityId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::VolumeInstanceId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeId::VolumeId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneQueryId::SceneQueryId(uint32_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::RigidBodyId::RigidBodyId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator/(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::JointId::JointId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsPhysics::DriveId::DriveId(uint64_t  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::LandmarkIndex::LandmarkIndex(int32_t  lTriggerRegionIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::DegToRad<float>(float  angle_degrees) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1394
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator*(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1539
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

extern void SmoothStep(const const SmoothStep &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Vector3Template(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(const const Vector2Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void ~BrnPostFx() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::~BaseResourcePtr() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::BaseResourcePtr::RemoveFromCurrentList() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void __static_initialization_and_destruction_0(int  __initialize_p, int  __priority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	~BrnPostFx(/* parameters */);
	CgsResource::BaseResourcePtr::~BaseResourcePtr(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsResource::ResourceHandle::ResourceHandle(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<float>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector2Template<double>::Vector2Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<double>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector4Template<double>::Vector4Template(/* parameters */);
	CgsResource::BaseResourcePtr::BaseResourcePtr(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::VolumeInstanceId::VolumeInstanceId(/* parameters */);
	CgsSceneManager::EntityId::EntityId(/* parameters */);
	CgsResource::ResourceHandle::Construct(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsSceneManager::VolumeId::VolumeId(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::GetFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	CgsPhysics::DriveId::DriveId(/* parameters */);
	CgsPhysics::JointId::JointId(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	BrnGameState::LandmarkIndex::LandmarkIndex(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnEffects::Curves::SmoothStep::SmoothStep(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	BrnEffects::Curves::SmoothStep::SmoothStep(/* parameters */);
	BrnEffects::Curves::SmoothStep::SmoothStep(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	BrnEffects::Curves::SmoothStep::SmoothStep(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnEffects::Curves::SmoothStep::SmoothStep(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	BrnEffects::Curves::SmoothStep::SmoothStep(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnEffects::Curves::SmoothStep::SmoothStep(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	SmoothStep(/* parameters */);
	SmoothStep(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnEffects::Curves::SmoothStep::SmoothStep(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	SmoothStep(/* parameters */);
	SmoothStep(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnEffects::Curves::SmoothStep::SmoothStep(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	SmoothStep(/* parameters */);
	SmoothStep(/* parameters */);
	BrnEffects::Curves::SmoothStep::SmoothStep(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	SmoothStep(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	BrnEffects::Curves::SmoothStep::SmoothStep(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	BrnEffects::Curves::SmoothStep::SmoothStep(/* parameters */);
	SmoothStep(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	BrnEffects::Curves::SmoothStep::SmoothStep(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::fpu::Vector3Template<float>::operator=(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	SmoothStep(/* parameters */);
	SmoothStep(/* parameters */);
	SmoothStep(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	rw::math::fpu::Vector3Template<float>::Vector3Template(/* parameters */);
	BrnEffects::Curves::SmoothStep::SmoothStep(/* parameters */);
	BrnEffects::Curves::SmoothStep::SmoothStep(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	BrnEffects::Curves::SmoothStep::SmoothStep(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	rw::math::fpu::Vector2Template<float>::operator=(/* parameters */);
	BrnEffects::Curves::SmoothStep::SmoothStep(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::Resource::Resource(/* parameters */);
}

void BrnEffectsFrame::GetUseBloom() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::GetBloomData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::GetBloomWeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::BloomData::SetToBlend(const const BloomData &  lValue0, float32_t  lfWeight0, const const BloomData &  lValue1, float32_t  lfWeight1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::BloomData::SetToBlend(const const BloomData &  lValueA0, float32_t  lfWeightA0, const const BloomData &  lValueA1, float32_t  lfWeightA1, const const BloomData &  lValueB0, float32_t  lfWeightB0, const const BloomData &  lValueB1, float32_t  lfWeightB1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BloomData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::BloomData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::PfxHelper::GetInstance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPostFx::GetInstance() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::Free(/* parameters */);
	rw::IResourceAllocator::Free(/* parameters */);
}

void BrnResource::GetGraphicsAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnBlobbyShadowManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator++(/* parameters */);
	operator++(/* parameters */);
	operator++(/* parameters */);
	operator++(/* parameters */);
}

void ShaderConstantTableElement::SetSize(const uint8_t  lu8Size) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:146
		uint32_t luNumQwInArray;

	}
}

void ShaderConstantTableElement::SetNumEntries(uint8_t  lu8NumEntries) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:176
		uint32_t luNumQwInArray;

	}
}

void ShaderConstantTable::AddShaderConstant(uint32_t  luIndex, const char *  lpName, const uint8_t  luSizeInBytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:287
		char * lpHeapName;

	}
	CgsCore::StrCpy(/* parameters */);
	ShaderConstantTableElement::SetSize(/* parameters */);
	ShaderConstantTableElement::SetNumEntries(/* parameters */);
}

void CgsRenderTarget::SetNumSections(uint32_t  luNumSections) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::SetDepthTargetTileIndex(int8_t  lTileIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::SetTileIndex(int8_t  lTileIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::SetDepthTargetCompressionBase(int32_t  liPS3CompressionBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::SetPS3CompressionBase(int32_t  liPS3CompressionBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::SetDepthTargetZCullIndex(int8_t  lzCullIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::SetZCullIndex(int8_t  lzCullIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::SetDepthTargetZCullAddress(int32_t  lzCullAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::SetZCullAddress(int32_t  lzCullAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void FloatShaderStateIterator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::FloatShaderStateIterator::Write(const const rw::math::vpu::Vector4 &  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisZ>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:164
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::Dot(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:107
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector2_operation_inline.h:108
			VectorIntrinsicUnion::VectorIntrinsic product;

			// vector2_operation_inline.h:108
			VectorIntrinsicUnion::VectorIntrinsic x_product;

			// vector2_operation_inline.h:108
			VectorIntrinsicUnion::VectorIntrinsic y_product;

		}
	}
}

void rw::math::vpu::operator-(const rw::math::vpu::Vector3  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:686
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:687
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
}

void shadow::Device::SetState(const SamplerState *const  lpSamplerState, const uint32_t  luSamplerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetResource(renderengine::Texture *const  lpTexture, const uint32_t  luSamplerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::Im3dSkyDome::SetConstants(const rw::math::vpu::Vector3Plus  lCameraPositionAndSkyScale, const rw::math::vpu::Vector3  lKeyLightDirection, const rw::math::vpu::Vector4  lSky_TopColourDrk, const rw::math::vpu::Vector4  lSky_HorColourPow, const rw::math::vpu::Vector4  lSky_SunColourPow, const rw::math::vpu::Vector3  lSky_HorBleedSclPow, const Texture *  lpLayer0Density, const Texture *  lpLayer0Lighting, const rw::math::vpu::Vector4  lFogScattering, const rw::math::vpu::Vector4  lCloudDarkColour0, const rw::math::vpu::Vector4  lCloudLiteColour0, const rw::math::vpu::Vector4  lCloudDomeRanges, const rw::math::vpu::Vector4  lCloudTextureScaleAndOffsets0, const rw::math::vpu::Vector4  lCloudLayerDensity, const rw::math::vpu::Vector4  lCloudLayerInvFeather, const rw::math::vpu::Vector4  lCloudLayerAlpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnIm3d.cpp:153
		FloatShaderStateIterator lShaderStateIterator;

		// BrnIm3d.cpp:161
		Vector2 lXZSunDir;

		// BrnIm3d.cpp:162
		float32_t lfXZLength;

		BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	}
	FloatShaderStateIterator(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	Vector2<VectorAxisX, VectorAxisZ>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	{
		// BrnIm3d.cpp:196
		const uint32_t luCloudLayerDensitySampler;

		// BrnIm3d.cpp:200
		const uint32_t luCloudLayerLightingSampler;

		renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		shadow::Device::SetResource(/* parameters */);
		renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		shadow::Device::SetResource(/* parameters */);
	}
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
}

void CgsRenderTarget::SetColourTargetTileIndex(uint32_t  lu32ColourTargetId, int8_t  lTileIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::SetColourTargetCompressionBase(uint32_t  lu32ColourTargetId, int32_t  liPS3CompressionBase) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::SetTextureType(uint32_t  lu32ColourTargetId, renderengine::Texture::Type  lTextureType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::SetTextureType(renderengine::Texture::Type  lTextureType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::SetColourFilterMode(uint32_t  lu32ColourTargetId, renderengine::SamplerState::FilterMode  filterMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::CgsRenderTargetSurface::SetFilterMode(renderengine::SamplerState::FilterMode  lFilterMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::SetColourTargetUseDevice(uint32_t  lu32ColourTargetId, bool  lbValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererMemory::GetDownSampleBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::GetTextureState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const DepthStencilState *  depthStencilState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const RasterizerState *  rasterizerState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetVertexProgram(const ProgramBuffer *  lpVertexProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetPixelProgram(const ProgramBuffer *  lpPixelProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::DirectDraw::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetVertexDescriptor(const VertexDescriptor *  vdesc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.h:960
		uint32_t attributesToDisable;

		// shadowingdevice.h:961
		uint8_t attributeIndex;

	}
}

void renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(renderengine::PrimitiveType  primType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::FlushBeforeRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::FlushVertexProgramState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawParameters::SetStartVertex(uint32_t  start) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawParameters::SetPrimitiveType(renderengine::PrimitiveType  primType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexIterator5<renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat4>::GetStride() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::PS3GPUSetLabelBackEnd(uint8_t  label, uint32_t  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::Flush() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::PS3CPUGetLabelValue(uint8_t  label) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// device.h:2293
		uint32_t value;

		// device.h:2295
		uint32_t volatile* labelAddress;

	}
}

void renderengine::DrawParameters::SetVertexCount(uint32_t  count) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::PS3GetBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexIteratorBaseClass::SetBuffer(void *const  m_buf) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::SetResource(renderengine::VertexBuffer *  vertexBuffer, uint32_t  id, uint32_t  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1440
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1441
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1443
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator*<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1573
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1574
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void rw::math::vpu::operator-<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1430
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1431
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void rw::math::vpu::operator-<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1440
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1441
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1443
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator*<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1573
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1574
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void rw::math::vpu::operator-<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1430
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1431
		VectorIntrinsicUnion::VectorIntrinsic aVF;

	}
}

void rw::graphics::postfx::B4Blur::Max(const float32_t  a, const float32_t  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::B4Blur::Min(const float32_t  a, const float32_t  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::X() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Y() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Z() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::X() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Y() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Z() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::W() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::GetUseVignette() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::GetVignetteData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::GetVignetteWeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::VignetteData::SetToBlend(const const VignetteData &  lValue0, float32_t  lfWeight0, const const VignetteData &  lValue1, float32_t  lfWeight1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector2  v, float  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector2_operation_inline.h:434
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator+(const rw::math::vpu::Vector2  a, const rw::math::vpu::Vector2  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::VignetteData::SetToBlend(const const VignetteData &  lValueA0, float32_t  lfWeightA0, const const VignetteData &  lValueA1, float32_t  lfWeightA1, const const VignetteData &  lValueB0, float32_t  lfWeightB0, const const VignetteData &  lValueB1, float32_t  lfWeightB1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VignetteData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::VignetteData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::GetUseBlur() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::GetBlurData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::GetBlurWeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::BlurData::SetToBlend(const const BlurData &  lValue0, float32_t  lfWeight0, const const BlurData &  lValue1, float32_t  lfWeight1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::BlurData::SetToBlend(const const BlurData &  lValueA0, float32_t  lfWeightA0, const const BlurData &  lValueA1, float32_t  lfWeightA1, const const BlurData &  lValueB0, float32_t  lfWeightB0, const const BlurData &  lValueB1, float32_t  lfWeightB1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BlurData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffects::BlurData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::Construct(rw::IResourceAllocator *const  lpAllocator, const void *const*  lapVertexProgramBinary, const uint32_t *  lauVertexProgramSize, const void *const*  lapPixelProgramBinary, const uint32_t *  lauPixelProgramSize, const int8_t  li8NumberPrograms) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:418
		int32_t li8ProgramIndex;

		// CgsImRenderer.h:428
		renderengine::VertexDescriptor::Parameters lVertexDescriptorParameters;

		// CgsImRenderer.h:431
		ResourceDescriptor lVertexDescriptorResourceDescriptor;

		// CgsImRenderer.h:432
		Resource lVertexDescriptorResource;

	}
}

void renderengine::VertexDescriptor::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vertexdescriptor.h:181
		uint32_t n;

	}
}

void BrnGraphics::Im3dSkyDomeVertex::FillVertexDescriptorParameters(const renderengine::VertexDescriptor::Parameters &  lVertexDescriptorParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexDescriptor::Parameters::SetElementStream(uint32_t  elementIndex, uint32_t  stream) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexDescriptor::Parameters::SetElementOffset(uint32_t  elementIndex, uint32_t  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexDescriptor::Parameters::SetElementFormat(uint32_t  elementIndex, renderengine::VertexFormat  format) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexDescriptor::Parameters::SetElementType(uint32_t  elementIndex, renderengine::VertexDescriptor::ElementType  type) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::IResourceAllocator::Allocate(const const ResourceDescriptor &  resourceDescriptor, const char8_t *  name) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::AddProgram(rw::IResourceAllocator *const  lpAllocator, const void *const  lpVertexProgramBinary, const uint32_t  luVertexProgramSize, const void *const  lpPixelProgramBinary, const uint32_t  luPixelProgramSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:481
		int8_t li8ProgramIndex;

		// CgsImRenderer.h:494
		renderengine::ProgramBuffer::Parameters lVertexProgramBufferParams;

		// CgsImRenderer.h:498
		ResourceDescriptor lVertexProgramResDesc;

		// CgsImRenderer.h:499
		Resource lVertexProgramResource;

		// CgsImRenderer.h:503
		renderengine::ProgramBuffer::Parameters lPixelProgramBufferParams;

		// CgsImRenderer.h:507
		ResourceDescriptor lPixelProgramResDesc;

		// CgsImRenderer.h:508
		Resource lPixelProgramResource;

	}
}

void renderengine::ProgramBuffer::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::Parameters::SetType(renderengine::ProgramBuffer::Type  type) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::Parameters::SetBuffer(void *  buffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::Parameters::SetSize(uint32_t  size) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::GetVertexProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::GetPixelProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::RGBA8(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetMagFilter(renderengine::SamplerState::FilterMode  filter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetMinFilter(renderengine::SamplerState::FilterMode  filter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetMipFilter(renderengine::SamplerState::FilterMode  filter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetAddressU(renderengine::SamplerState::AddressingMode  addressMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetAddressV(renderengine::SamplerState::AddressingMode  addressMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::Im3dSkyDome::Construct(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnIm3d.cpp:71
		const void *[8] lapVertexProgramBinary;

		// BrnIm3d.cpp:72
		uint32_t[8] lauVertexProgramSize;

		// BrnIm3d.cpp:73
		const void *[8] lapPixelProgramBinary;

		// BrnIm3d.cpp:74
		uint32_t[8] lauPixelProgramSize;

		// BrnIm3d.cpp:112
		Parameters lSamplerStateParams;

		// BrnIm3d.cpp:118
		ResourceDescriptor lSamplerStateResDesc;

		// BrnIm3d.cpp:119
		Resource lSamplerStateResource;

		CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::Construct(/* parameters */);
	}
	renderengine::VertexDescriptor::Parameters::Parameters(/* parameters */);
	Im3dSkyDomeVertex::FillVertexDescriptorParameters(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementOffset(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementOffset(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::AddProgram(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::ProgramBuffer::Parameters::Parameters(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetBuffer(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetSize(/* parameters */);
	renderengine::ProgramBuffer::Parameters::SetType(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::GetVertexProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::GetPixelProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::GetPixelProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::GetPixelProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::GetPixelProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::GetPixelProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::GetPixelProgram(/* parameters */);
	CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::GetPixelProgram(/* parameters */);
	renderengine::SamplerState::Parameters::Parameters(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	renderengine::SamplerState::Parameters::SetMipFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

void renderengine::ProgramBuffer::PS3GetRegisterCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// programbuffer.h:329
		uint32_t registerCount;

	}
}

void renderengine::TextureState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::TextureState::Parameters::SetTexture(renderengine::Texture *  newTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetAddressW(renderengine::SamplerState::AddressingMode  addressMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::CoronaRenderer::SetTextureAtlas(const TextureState *  textureState, uint32_t  numSubImages, Vector2 *  atlasUVs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextureScopeTable::SetTexturePurposeData(const CgsGraphics::TexturePurpose  lePurpose, const Texture *  lpTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextureScopeTableElement::SetTexture(const Texture *  lpTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextureScopeTable::SetTexturePurposeTextureState(const CgsGraphics::TexturePurpose  lePurpose, const TextureState *  lpTextureState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextureScopeTableElement::SetTextureState(const TextureState *  lpTextureState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::PrepareAgain(const Texture *  lpBlobbyShadowTexture, const Texture *  lpLayer0Density, const Texture *  lpLayer0Lighting, const Texture *  lpCoronaTexture, const Texture *  lpGlassFractureTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	CgsGraphics::TextureScopeTable::SetTexturePurposeData(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetTexture(/* parameters */);
	CgsGraphics::TextureScopeTable::SetTexturePurposeData(/* parameters */);
	CgsGraphics::TextureScopeTableElement::SetTexture(/* parameters */);
	CgsGraphics::TextureScopeTable::SetTexturePurposeTextureState(/* parameters */);
}

void rw::math::fpu::Matrix33Template<float>::SetIdentity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern Matrix33Template<float> & operator=(const const Matrix33Template<float> &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::Parameters::SetType(uint32_t  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::Parameters::SetBufferSize(uint32_t  bytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawIndexedParameters::SetBaseVertexIndex(uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawIndexedParameters::SetMinVertexIndex(uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawIndexedParameters::SetMaxVertexIndex(uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::BatchIterator::BatchIterator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBuffer::BatchIterator::GetLockedBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::X() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::IndexBuffer::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::IndexBuffer::Parameters::SetType(uint32_t  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::IndexBuffer::Parameters::SetNumIndices(uint32_t  num) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::IndexBuffer::Parameters::SetDepth(uint32_t  de) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawIndexedParameters::SetPrimitiveType(renderengine::PrimitiveType  primType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawIndexedParameters::SetStartIndex(uint32_t  start) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DrawIndexedParameters::SetIndexCount(uint32_t  count) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<0u>::BaseResourceDescriptorType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::ResourceDescriptor(const const MemoryResourceDescriptor &  mainMemory) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::PS3SetRegisterCount(uint32_t  regCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetBlendEnable(bool  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DepthStencilState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DepthStencilState::Parameters::SetDepthEnable(bool  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DepthStencilState::Parameters::SetDepthWriteEnable(bool  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::DepthStencilState::Parameters::SetStencilEnable(bool  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetMaxMipLevel(uint32_t  level) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetMinMipLevel(uint32_t  level) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetMaxAnisotropy(uint32_t  maxAniso) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::DepthOfField::Parameters::GetState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::DepthOfField::DepthOfField(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::graphics::postfx::DepthOfField::State::State(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
}

void rw::graphics::postfx::Target::Parameters::GetBufferAddress() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::GetAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::GetUseSystemMemory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::AllocateAndInitializeTexture(const const rw::graphics::postfx::Target::Parameters &  params, const const renderengine::Texture::Parameters &  texParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxrendertarget.cpp:72
		ResourceDescriptor resDesc;

		// rwgpfxrendertarget.cpp:73
		Resource resource;

	}
	Resource::Resource(/* parameters */);
	{
		// rwgpfxrendertarget.cpp:81
		uint32_t baseType;

		IResourceAllocator::Allocate(/* parameters */);
		Target::Parameters::GetAllocator(/* parameters */);
		BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(/* parameters */);
	}
	~ResourceDescriptor(/* parameters */);
	Target::Parameters::GetAllocator(/* parameters */);
	IResourceAllocator::Allocate(/* parameters */);
}

void rw::graphics::postfx::Target::Parameters::GetNumSections() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::GetTextureType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::SetType(renderengine::Texture::Type  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::SetFlags(uint32_t  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::GetWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::SetWidth(uint32_t  w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::GetHeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::SetHeight(uint32_t  h) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::GetTextureFormat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::SetFormat(renderengine::PixelFormat  fmt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::SetDepth(uint32_t  d) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::SetMipLevels(uint32_t  ml) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::GetPitch() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::SetPitch(uint32_t  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::GetTileIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::PS3SetTileIndex(int8_t  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::GetMultisampleFormat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::PS3SetMultiSampleType(uint32_t  mst) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::Parameters::GetFlags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::GetTexture() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::GetFilterMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::Parameters::SetWidth(uint32_t  w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::Parameters::SetHeight(uint32_t  h) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::GetBufferFormat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::Parameters::SetFormat(renderengine::PixelFormat  fmt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::Parameters::SetMultiSampleType(uint32_t  mst) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::Parameters::SetType(renderengine::PixelBuffer::Type  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::Parameters::SetFlags(uint32_t  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::Parameters::PS3SetTileIndex(uint8_t  t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::Parameters::SetPitch(uint32_t  p) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::GetPS3CompressionBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::Parameters::PS3SetCompressionEnable(bool  compEnable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::Parameters::PS3SetCompressionBase(uint16_t  base) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::Parameters::PS3SetCompressionBank(uint8_t  bank) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::Parameters::GetFlags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::GetGraphicsSystemResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::Resource::GetGraphicsLocalResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PS3PixelFormatIsSwizzled(renderengine::PixelFormat  format) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PS3PixelFormatGetTextureFormat(renderengine::PixelFormat  format) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PS3TextureFormatIsSwizzled(uint32_t  textureFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Texture::GetHeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelFormatGetDepth(renderengine::PixelFormat  format) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::MemAddOffset<void>(void *  ptr, SPU::HostPtr  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::GetZCullIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::Parameters::PS3SetZCullIndex(uint8_t  i) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::GetZCullAddress() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::Parameters::PS3SetZCullAddress(uint32_t  addr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::Parameters::PS3SetZCullDirection(uint32_t  zdir) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::Parameters::PS3SetZCullFormat(uint32_t  zFormat) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::Parameters::GetPitch() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::PixelBuffer::PS3GetOffset() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::Parameters::GetNumSections() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RenderTargetState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// stateparams.h:372
		uint32_t target;

	}
}

void rw::graphics::postfx::Target::GetPixelBuffer(uint32_t  luDestSliceOrFace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RenderTargetState::Parameters::SetTarget(renderengine::RenderTargetState::TargetID  id, PixelBuffer *  pixelBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::GetDepthStencilBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::Parameters::GetColorTargetParameters(uint32_t  lu32ColorTargetId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::Parameters::GetUseDepthStencilAsTexture() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::SamplerState::Parameters::SetBorderColor(RGBA8  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::Parameters::GetWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::Parameters::GetHeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::Parameters::GetColorMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::Parameters::GetDepthStencilMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::Parameters::GetAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::GetDefaultAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::SetWidth(uint32_t  lu32Width) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::SetHeight(uint32_t  lu32Height) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::SetAllocator(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::SetNumSections(uint32_t  luNumSections) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::GetBackBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::SetPixelBuffer(PixelBuffer *  lpPixelBuffer, uint32_t  luDestSliceOrFace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::Parameters::GetDepthStencilParameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::Parameters::SetUseStencil(bool  lbUseStencil) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::Parameters::GetProvidedDepthStencilTarget() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Target::SetIsShared(bool  lbIsShared) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::RenderTarget(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::graphics::postfx::RenderTarget::Parameters::GetAllocator(/* parameters */);
		{
			rw::graphics::postfx::Target::Parameters::SetNumSections(/* parameters */);
			rw::graphics::postfx::Target::Parameters::SetWidth(/* parameters */);
			rw::graphics::postfx::Target::Parameters::SetHeight(/* parameters */);
			rw::graphics::postfx::Target::Parameters::SetAllocator(/* parameters */);
		}
		rw::graphics::postfx::Target::SetIsShared(/* parameters */);
		{
		}
		~ResourceDescriptor(/* parameters */);
	}
	rw::graphics::postfx::Target::SetPixelBuffer(/* parameters */);
	{
		rw::graphics::postfx::Target::Parameters::SetNumSections(/* parameters */);
		rw::graphics::postfx::Target::Parameters::SetWidth(/* parameters */);
		rw::graphics::postfx::Target::Parameters::SetHeight(/* parameters */);
		rw::graphics::postfx::Target::Parameters::SetAllocator(/* parameters */);
		rw::graphics::postfx::Target::Parameters::SetUseStencil(/* parameters */);
	}
	rw::GetDefaultAllocator(/* parameters */);
}

void rw::graphics::postfx::RenderTargetDebugger::RenderTargetDebugger(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		renderengine::VertexDescriptor::Parameters::Parameters(/* parameters */);
		renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
		renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
		renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
		renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
		renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
		renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
		rw::GetDefaultAllocator(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
}

void renderengine::VertexBufferHelper::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vertexbufferhelper.h:119
		uint32_t n;

	}
}

void renderengine::VertexBufferHelper::Parameters::SetNumVertices(uint32_t  verts) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBufferHelper::Parameters::SetElementFormat(uint32_t  elementIndex, renderengine::VertexFormat  format) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBufferHelper::GetResourceDescriptor(const renderengine::VertexBufferHelper::Parameters &  params) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBufferHelper::Parameters::CalculateBufferSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexBufferHelper::Initialize(const const Resource &  resource, const renderengine::VertexBufferHelper::Parameters &  params) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vertexbufferhelper.h:185
		renderengine::VertexBuffer * vertexBuffer;

	}
}

void renderengine::MeshHelper::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// meshhelper.h:123
		uint32_t i;

	}
}

void renderengine::MeshHelper::Parameters::SetVertexBuffer(renderengine::VertexBuffer *  vertexBuffer, uint32_t  id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::GetDebugger() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::PfxHelper::PfxHelper(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	{
	}
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::VertexDescriptor::Parameters::Parameters(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexBufferHelper::Parameters::Parameters(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::VertexBuffer::Parameters::Parameters(/* parameters */);
	{
	}
	renderengine::VertexBufferHelper::Parameters::SetNumVertices(/* parameters */);
	renderengine::VertexBuffer::Parameters::SetType(/* parameters */);
	renderengine::VertexBufferHelper::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexBufferHelper::GetResourceDescriptor(/* parameters */);
	renderengine::VertexBufferHelper::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexBuffer::Parameters::SetBufferSize(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::VertexBufferHelper::Initialize(/* parameters */);
	renderengine::VertexBuffer::Parameters::SetBufferSize(/* parameters */);
	renderengine::MeshHelper::Parameters::Parameters(/* parameters */);
	renderengine::MeshHelper::Parameters::SetVertexBuffer(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::DepthStencilState::Parameters::Parameters(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthWriteEnable(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthEnable(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	{
		Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
		BeginBatch<rw::graphics::postfx::PfxHelper::PfxHelper(const rw::graphics::postfx::PfxHelper::Parameters&)::QuadVertexIterator>(/* parameters */);
		Write<rw::math::vpu::Vector3>(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		vec_lvsr(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		Write<rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_lvsr(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		Write<rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		vec_lvsr(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		Write<rw::math::vpu::Vector3, rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		Write<rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_lvsr(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
		Write<rw::math::vpu::Vector2>(/* parameters */);
		vec_stvewx(/* parameters */);
		vec_perm(/* parameters */);
		vec_stvewx(/* parameters */);
	}
	{
		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
}

void renderengine::BlendState::Parameters::SetSource(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Input  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetOperation(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Operation  op) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::BlendState::Parameters::SetDestination(renderengine::RenderTargetState::TargetID, renderengine::BlendState::Input  dest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RasterizerState::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RasterizerState::Parameters::SetCullMode(renderengine::RasterizerState::CullMode  cm) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Vignette::Parameters::GetState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Vignette::Vignette(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	{
		renderengine::BlendState::Parameters::Parameters(/* parameters */);
	}
	renderengine::RGBA8::RGBA8(/* parameters */);
	renderengine::BlendState::Parameters::SetDestination(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::BlendState::Parameters::SetOperation(/* parameters */);
	renderengine::BlendState::Parameters::SetBlendEnable(/* parameters */);
	renderengine::BlendState::Parameters::SetSource(/* parameters */);
	renderengine::VertexDescriptor::Parameters::Parameters(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::DepthStencilState::Parameters::Parameters(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthWriteEnable(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthEnable(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::RasterizerState::Parameters::Parameters(/* parameters */);
	renderengine::RasterizerState::Parameters::SetCullMode(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

void rw::graphics::postfx::B4Blur::Parameters::GetState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::B4Blur::B4Blur(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::graphics::postfx::B4Blur::State::State(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	rw::Resource::Resource(/* parameters */);
	rw::BaseResources<6u>::BaseResources(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	renderengine::ProgramVariableHandle::ProgramVariableHandle(/* parameters */);
	{
	}
	renderengine::VertexDescriptor::Parameters::Parameters(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::DepthStencilState::Parameters::Parameters(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthWriteEnable(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthEnable(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::VertexDescriptor::Parameters::Parameters(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementStream(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementType(/* parameters */);
	renderengine::VertexDescriptor::Parameters::SetElementFormat(/* parameters */);
	renderengine::DepthStencilState::Parameters::Parameters(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthWriteEnable(/* parameters */);
	renderengine::DepthStencilState::Parameters::SetDepthEnable(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	renderengine::RasterizerState::Parameters::Parameters(/* parameters */);
	renderengine::RasterizerState::Parameters::SetCullMode(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
}

void rw::graphics::postfx::PfxHelper::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::DepthOfField::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Vignette::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Vignette::Parameters::SetAllocator(rw::IResourceAllocator *  allocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::PfxHelper::GetOpaqueBlendState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Tint::SetBlendState(const BlendState *  blendState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::B4Blur::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::B4Blur::Parameters::SetAllocator(rw::IResourceAllocator *  allocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsBlendStateFactory::GetState(uint32_t  lu32StateId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::B4Blur::Parameters::SetBlendState(BlendState *  blendState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::SetBit(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLocked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLockedForReading() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::IsBufferLockedForWriting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::UnlockForRead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
}

void CgsModule::IOBuffer::UnlockForRead(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FlagSet<std::int8_t>::UnSetBit(/* parameters */);
}

void CgsModule::IOBuffer::LockForRead() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
}

void CgsModule::IOBuffer::LockForRead(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
}

void CgsModule::IOBuffer::IsBufferLockedForWriting(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRasterizerStateFactory::GetState(uint32_t  lu32StateId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::LockRasteriserState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::UnlockRasteriserState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererMemory::GetAntiAliasBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::SetRenderTargetState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ClearDepthStencilParameters::ClearDepthStencilParameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ClearColorParameters::ClearColorParameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ClearColorParameters::SetColor(const const RGBA32 &  rgba) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA32::Red() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA32::Green() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA32::Blue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisZ>(VecFloatRef<VectorAxisZ> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1607
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1608
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:1610
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1610
				VectorIntrinsicUnion u;

			}
		}
	}
}

void renderengine::RGBA32::Alpha() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisW>(VecFloatRef<VectorAxisW> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1607
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1608
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		{
			// vec_float_operation_inline.h:1610
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1610
				VectorIntrinsicUnion u;

			}
		}
	}
}

void renderengine::ClearDepthStencilParameters::SetStencil(uint32_t  stencil) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDepthStencilStateFactory::GetState(uint32_t  lu32StateId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::BeginRenderAntiAliased(const float32_t  lfWhiteLevel, const bool8_t  lbClearStencil, const uint8_t  luStencilClearValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Vector4::Set(/* parameters */);
	CgsRenderTarget::SetRenderTargetState(/* parameters */);
	{
		// BrnRendererModule.cpp:3843
		ClearDepthStencilParameters lClearZbuffer;

		// BrnRendererModule.cpp:3844
		ClearColorParameters lClearColor;

		renderengine::ClearDepthStencilParameters::ClearDepthStencilParameters(/* parameters */);
		renderengine::ClearColorParameters::ClearColorParameters(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
		renderengine::ClearColorParameters::SetColor(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
		renderengine::RGBA32::RGBA32(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		renderengine::ClearDepthStencilParameters::SetStencil(/* parameters */);
	}
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
}

void shadow::Device::SetState(const BlendState *  blendState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::BeginRenderEnvironmentMapFace(uint32_t  luFace, const float32_t  lfWhiteLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.cpp:4155
		ClearDepthStencilParameters lClearZbuffer;

	}
	renderengine::ClearDepthStencilParameters::ClearDepthStencilParameters(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
}

void BrnRendererModule::EndRenderPostFx(RenderTarget *  lpSrcBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
}

void renderengine::CoronaRenderer::SetBlendState(const BlendState *  blendState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::CoronaRenderer::SetDepthStencilStates(const DepthStencilState *  enabledZTestState, const DepthStencilState *  disabledZTestState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::CoronaBuffer::Parameters::SetNumCoronas(int  numCoronas) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Corona() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA8::RGBA8() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::CoronaBuffer::Iterator::Write(const const Corona &  corona) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererMemory::GetShadowMapBuffer(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::GetNumSections() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::GetWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::GetHeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const TextureState *  textureState, uint32_t  id) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.h:924
		const SamplerState *const lpSamplerState;

		// shadowingdevice.h:925
		renderengine::Texture *const lpTexture;

	}
}

void renderengine::VertexIterator2<renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat2>::GetStride() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::GetTextureState(uint32_t  idx) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::Parameters::Parameters(renderengine::Device::Parameters::DisplayType  displayType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GetMappedMemoryParameters(void **  lppMemory, uint32_t *  lpSize, uint32_t *  lpAlignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::Parameters::PS3SetGraphicsSystemMemoryBuffer(void *  buffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::Parameters::PS3SetGraphicsSystemMemorySize(uint32_t  size) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::Parameters::PS3SetCommandBufferSize(uint32_t  size) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::Parameters::PS3SetDirectDrawBufferSize(uint32_t  bufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::Parameters::PS3SetDirectDrawNumSubBuffers(uint32_t  numSubBuffers) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::Parameters::SetNumVSyncToWait(uint32_t  vsyncs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::Parameters::SetAutoDepthStencilEnable(bool  enable) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::DeviceInitialise() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.cpp:507
		renderengine::Device::Parameters::DisplayType lMode;

		// BrnRendererModule.cpp:510
		renderengine::Device::Parameters lDeviceParameters;

		// BrnRendererModule.cpp:523
		void * lpSystemGraphicsMemory;

		// BrnRendererModule.cpp:524
		uint32_t luSystemGraphicsSize;

		// BrnRendererModule.cpp:525
		uint32_t luSystemGraphicsAlignment;

		// BrnRendererModule.cpp:597
		ClearColorParameters lClearColor;

		// BrnRendererModule.cpp:598
		int32_t liClearCounter;

		renderengine::Device::Parameters::Parameters(/* parameters */);
		BrnResource::GetMappedMemoryParameters(/* parameters */);
		renderengine::Device::Parameters::PS3SetGraphicsSystemMemoryBuffer(/* parameters */);
		renderengine::Device::Parameters::PS3SetCommandBufferSize(/* parameters */);
		renderengine::Device::Parameters::PS3SetGraphicsSystemMemorySize(/* parameters */);
		renderengine::Device::Parameters::PS3SetDirectDrawBufferSize(/* parameters */);
		renderengine::Device::Parameters::PS3SetDirectDrawNumSubBuffers(/* parameters */);
		renderengine::Device::Parameters::SetAutoDepthStencilEnable(/* parameters */);
		renderengine::Device::Parameters::SetNumVSyncToWait(/* parameters */);
		renderengine::ClearColorParameters::SetColor(/* parameters */);
		renderengine::RGBA32::RGBA32(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		renderengine::Device::GetDefaultRenderTargetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
	}
}

void BrnResource::LinearResourceAllocator::GetLinearHeapBase() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.h:506
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::LinearResourceAllocator::GetCurrentUsage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.h:457
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::LinearResourceAllocator::GetCapacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnResourceAllocator.h:450
		CgsDev::StrStream lStrStream;

	}
}

void rw::ResourceDescriptor::GetMemoryResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptor::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::GetGraphicsSystemResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::ResourceDescriptor::GetGraphicsLocalResourceDescriptor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::MemoryUsage() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.cpp:1627
		Resource lBase;

		// BrnRendererModule.cpp:1628
		ResourceDescriptor lUsage;

		// BrnRendererModule.cpp:1629
		ResourceDescriptor lCapacity;

		// BrnRendererModule.cpp:1631
		uint32_t lu32MemoryAddressStart;

		// BrnRendererModule.cpp:1632
		uint32_t lu32MemoryAddressEnd;

		// BrnRendererModule.cpp:1633
		uint32_t lu32MemorySize;

		// BrnRendererModule.cpp:1634
		uint32_t lu32MemoryUsage;

		// BrnRendererModule.cpp:1642
		uint32_t lu32SystemGraphicsStart;

		// BrnRendererModule.cpp:1643
		uint32_t lu32SystemGraphicsEnd;

		// BrnRendererModule.cpp:1644
		uint32_t lu32SystemGraphicsSize;

		// BrnRendererModule.cpp:1645
		uint32_t lu32SystemGraphicsUsage;

		// BrnRendererModule.cpp:1647
		uint32_t lu32LocalGraphicsStart;

		// BrnRendererModule.cpp:1648
		uint32_t lu32LocalGraphicsEnd;

		// BrnRendererModule.cpp:1649
		uint32_t lu32LocalGraphicsSize;

		// BrnRendererModule.cpp:1650
		uint32_t lu32LocalGraphicsUsage;

		BrnResource::LinearResourceAllocator::GetLinearHeapBase(/* parameters */);
	}
	BrnResource::LinearResourceAllocator::GetCurrentUsage(/* parameters */);
	BrnResource::LinearResourceAllocator::GetCapacity(/* parameters */);
	rw::BaseResourceDescriptor::GetSize(/* parameters */);
	rw::BaseResourceDescriptor::GetSize(/* parameters */);
	rw::BaseResourceDescriptor::GetSize(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void rw::math::fpu::Matrix33Template<float>::SetX(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::SetY(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix33Template<float>::SetZ(const const Vector3Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::BufferedDispatchFrame::SetNumDispatchFrames(uint32_t  luNumDispatchFrames) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void ShaderConstantTable::AddShaderConstantArray(uint32_t  luIndex, const char *  lpName, const uint8_t  luSizeOfEachEntryInBytes, const uint8_t  luNumEntries) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsShaderConstants.h:309
		char * lpHeapName;

	}
}

void RendererIO::RenderSwitches::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderPatch::Parameters::Parameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderPatch::Parameters::SetRSXBufferSize(uint32_t  rsxBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderPatch::Parameters::SetPatchBufferSize(uint32_t  patchBufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderPatch::Parameters::SetNumFramesToBuffer(uint8_t  numFrames) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderPatch::GetResourceDescriptor(const const CgsGraphics::ShaderPatch::Parameters &  parameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// shadowingdevice.h:278
	ResourceDescriptor & descriptor;

	{
		// shadowingdevice.h:278
		ResourceDescriptor descriptor;

	}
}

void CgsGraphics::ShaderPatch::Parameters::GetNumFramesToBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderPatch::Parameters::GetPatchBufferSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderPatch::Parameters::GetRSXBufferSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<5u>::BaseResourceDescriptorType(uint32_t  size, uint32_t  alignment) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::BaseResourceDescriptorType<5u>::~BaseResourceDescriptorType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderPatch::Construct(const const Resource &  lResource, const const CgsGraphics::ShaderPatch::Parameters &  lParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::PS3AddressToOffset(void *  address) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// device.h:2268
		uint32_t offset;

		// device.h:2270
		int32_t result;

	}
}

void BrnRendererModule::Construct(const const BrnCpuMonitors &  lCpuMonitors, const float32_t &  lfOutAspectRatio, const bool &  lbOutHighDef) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.cpp:801
		float32_t lfFixedAspect;

		// BrnRendererModule.cpp:805
		renderengine::Device::Parameters lDeviceParameters;

		// BrnRendererModule.cpp:841
		Im2dTransform::Matrix33 lTransformX;

		// BrnRendererModule.cpp:1302
		CgsGraphics::ShaderPatch::Parameters patchingDeviceParameters;

		// BrnRendererModule.cpp:1307
		ResourceDescriptor lShaderPatchDescriptor;

	}
	renderengine::Device::Parameters::Parameters(/* parameters */);
	IsInWidescreen(/* parameters */);
	rw::math::fpu::Matrix33Template<float>::SetX(/* parameters */);
	rw::math::fpu::Matrix33Template<float>::SetY(/* parameters */);
	rw::math::fpu::Matrix33Template<float>::SetZ(/* parameters */);
	{
		// BrnRendererModule.cpp:855
		ResourceDescriptor lDescription;

		rw::IResourceAllocator::Allocate(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
	CgsGraphics::BufferedDispatchFrame::SetNumDispatchFrames(/* parameters */);
	{
		// BrnRendererModule.cpp:952
		RGBA lGpuColour;

	}
	rw::RGBA::RGBA(/* parameters */);
	ShaderConstantTable::AddShaderConstantArray(/* parameters */);
	ShaderConstantTable::AddShaderConstantArray(/* parameters */);
	RendererIO::RenderSwitches::Construct(/* parameters */);
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	{
		// BrnRendererModule.cpp:1208
		TextureState * lpPs3TextureState;

	}
	renderengine::SamplerState::Parameters::SetMagFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressU(/* parameters */);
	renderengine::SamplerState::Parameters::SetMipFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetMinFilter(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressW(/* parameters */);
	renderengine::SamplerState::Parameters::SetAddressV(/* parameters */);
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	rw::IResourceAllocator::Allocate(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	CgsGraphics::TextureScopeTable::SetTexturePurposeData(/* parameters */);
	CgsGraphics::TextureScopeTable::SetTexturePurposeTextureState(/* parameters */);
	CgsGraphics::TextureScopeTable::SetTexturePurposeData(/* parameters */);
	CgsGraphics::TextureScopeTable::SetTexturePurposeTextureState(/* parameters */);
	CgsGraphics::TextureScopeTable::SetTexturePurposeData(/* parameters */);
	CgsGraphics::TextureScopeTable::SetTexturePurposeTextureState(/* parameters */);
	{
		// BrnRendererModule.cpp:1308
		Resource lShaderPatchResource;

		rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
		rw::Resource::Resource(/* parameters */);
		CgsGraphics::ShaderPatch::GetResourceDescriptor(/* parameters */);
		~ResourceDescriptor(/* parameters */);
		~BaseResourceDescriptors(/* parameters */);
		rw::IResourceAllocator::Allocate(/* parameters */);
		CgsGraphics::ShaderPatch::Construct(/* parameters */);
		renderengine::Device::PS3AddressToOffset(/* parameters */);
		~ResourceDescriptor(/* parameters */);
	}
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::Swap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:572
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredVertex>::Prepare(uint32_t  luCommandBufferSizeBytes, uint32_t  luVertexBufferSizeBytes, rw::IResourceAllocator *  lpAllocator, bool  lbFailGracefully) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
}

void RendererIO::InputBuffer::GetBrnCamera() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModuleIO.h:382
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsDev::StrStreamBase::operator<<(CgsDev::PrintMode  lePrintMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::FlagSet<std::int8_t>::Flags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::LockForWrite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIOBuffer.h:219
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
	{
		// CgsIOBuffer.h:218
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void RendererIO::OutputBuffer::SetBrnCamera(const const Camera &  lCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModuleIO.h:404
		CgsDev::StrStream lStrStream;

	}
}

extern Camera & operator=(const const Camera &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern CameraEffects & operator=(const const CameraEffects &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern BackgroundEffectRequest & operator=(const const BackgroundEffectRequest &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGame::LoadingScreenRenderer::GetReusableDataAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void RendererIO::OutputBuffer::SetReusableLoadingScreenAllocator(LinearMalloc *  lpMalloc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModuleIO.h:676
		CgsDev::StrStream lStrStream;

	}
}

extern void Camera() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44Template<double>::Matrix44Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::Camera::GetFOV() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::GetOneOverTanHalfFovHorizontal() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::GetOneOverTanHalfFovVertical() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::GetViewProjectionMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::Camera::GetTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnCoronaManager::BrnSubmissionInterface::SetCameraInfo(const rw::math::vpu::Matrix44 &  lViewProj, const rw::math::vpu::Vector3  lCameraPosition, const rw::math::vpu::Vector4  lViewXyScale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::Camera::GetEffects() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::CameraEffects::IsRequestingScreenshot() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void RendererIO::OutputBuffer::SetDispatchFrame(CgsGraphics::DispatchFrame *  lpDispatchFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModuleIO.h:390
		CgsDev::StrStream lStrStream;

	}
}

void RendererIO::OutputBuffer::SetIm2dRenderBuffer(CgsGraphics::Im2dRenderBuffer *  lpBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModuleIO.h:419
		CgsDev::StrStream lStrStream;

	}
}

void RendererIO::OutputBuffer::SetIm3dRenderBuffer(CgsGraphics::Im3dRenderBuffer *  lpBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModuleIO.h:435
		CgsDev::StrStream lStrStream;

	}
}

void RendererIO::OutputBuffer::SetIm3dRenderBufferUntex(CgsGraphics::Im3dRenderBufferUntex *  lpBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModuleIO.h:442
		CgsDev::StrStream lStrStream;

	}
}

void RendererIO::OutputBuffer::SetIm3dDebugRenderBuffer(CgsGraphics::Im3dRenderBuffer *  lpBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModuleIO.h:463
		CgsDev::StrStream lStrStream;

	}
}

void RendererIO::OutputBuffer::SetIm2dDebugRenderBuffer(CgsGraphics::Im2dRenderBuffer *  lpBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModuleIO.h:470
		CgsDev::StrStream lStrStream;

	}
}

void BrnGraphics::EffectsArbitrator::GetExternalEffectsFrame(uint8_t  luLayer, uint8_t  luSlot) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void RendererIO::OutputBuffer::SetBaseEffectsFrame(BrnEffectsFrame *  lpEffectsFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModuleIO.h:539
		CgsDev::StrStream lStrStream;

	}
}

void RendererIO::OutputBuffer::SetWorldEffectsFrame(uint8_t  lu8Slot, BrnEffectsFrame *  lpEffectsFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModuleIO.h:555
		CgsDev::StrStream lStrStream;

	}
}

void RendererIO::OutputBuffer::SetFXEventsEffectsFrame(uint8_t  lu8Slot, BrnEffectsFrame *  lpEffectsFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModuleIO.h:573
		CgsDev::StrStream lStrStream;

	}
}

void RendererIO::OutputBuffer::SetShaderConstantsFrame(BrnShaderConstantsFrame *  lpShaderConstantsFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModuleIO.h:589
		CgsDev::StrStream lStrStream;

	}
}

void BrnBlobbyShadowManager::GetExternalBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void RendererIO::OutputBuffer::SetBlobbyShadowBuffer(BrnBlobbyShadowManager::BrnBlobbyShadowBuffer *  lpBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModuleIO.h:605
		CgsDev::StrStream lStrStream;

	}
}

void RendererIO::OutputBuffer::SetCoronaSubmissionInterface(BrnCoronaManager::BrnSubmissionInterface *  lpBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModuleIO.h:621
		CgsDev::StrStream lStrStream;

	}
}

void RendererIO::OutputBuffer::SetIm3dRenderBufferRacePosition(CgsGraphics::Im3dRenderBuffer *  lpBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModuleIO.h:449
		CgsDev::StrStream lStrStream;

	}
}

void RendererIO::OutputBuffer::SetIm3dRenderBufferMenusAndHud(CgsGraphics::Im3dRenderBuffer *  lpBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModuleIO.h:456
		CgsDev::StrStream lStrStream;

	}
}

void RendererIO::OutputBuffer::SetRenderSwitches(const const RenderSwitches &  lRenderSwitches) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModuleIO.h:637
		CgsDev::StrStream lStrStream;

	}
}

void BrnRendererMemory::GetSnapShotBufferPixels() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void RendererIO::OutputBuffer::SetSnapShotBuffer(void *  lpSnapshotBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::IOBuffer::UnlockForWrite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::Update(IOBufferStack *  lpInputBufferStack, IOBufferStack *  lpOutputBufferStack, const InputBuffer *  lpInput, OutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.cpp:4523
		Camera lCGSCamera;

		// BrnRendererModule.cpp:4552
		CgsGraphics::DispatchFrame * lpDispatchFrame;

		// BrnRendererModule.cpp:4569
		uint8_t lu8Slot;

	}
	RendererIO::OutputBuffer::SetBrnCamera(/* parameters */);
	BrnGame::LoadingScreenRenderer::GetReusableDataAllocator(/* parameters */);
	operator=(/* parameters */);
	RendererIO::OutputBuffer::SetReusableLoadingScreenAllocator(/* parameters */);
	RendererIO::OutputBuffer::SetDispatchFrame(/* parameters */);
	RendererIO::OutputBuffer::SetIm2dRenderBuffer(/* parameters */);
	RendererIO::OutputBuffer::SetIm3dRenderBuffer(/* parameters */);
	RendererIO::OutputBuffer::SetIm3dRenderBufferUntex(/* parameters */);
	RendererIO::OutputBuffer::SetIm3dDebugRenderBuffer(/* parameters */);
	RendererIO::OutputBuffer::SetIm2dDebugRenderBuffer(/* parameters */);
	RendererIO::OutputBuffer::SetBaseEffectsFrame(/* parameters */);
	BrnGraphics::EffectsArbitrator::GetExternalEffectsFrame(/* parameters */);
	BrnGraphics::EffectsArbitrator::GetExternalEffectsFrame(/* parameters */);
	RendererIO::OutputBuffer::SetWorldEffectsFrame(/* parameters */);
	BrnGraphics::EffectsArbitrator::GetExternalEffectsFrame(/* parameters */);
	RendererIO::OutputBuffer::SetFXEventsEffectsFrame(/* parameters */);
	RendererIO::OutputBuffer::SetShaderConstantsFrame(/* parameters */);
	RendererIO::OutputBuffer::SetBlobbyShadowBuffer(/* parameters */);
	BrnBlobbyShadowManager::GetExternalBuffer(/* parameters */);
	RendererIO::OutputBuffer::SetCoronaSubmissionInterface(/* parameters */);
	BrnCoronaManager::GetSubmissionInterface(/* parameters */);
	RendererIO::OutputBuffer::SetIm3dRenderBufferRacePosition(/* parameters */);
	RendererIO::OutputBuffer::SetIm3dRenderBufferMenusAndHud(/* parameters */);
	RendererIO::OutputBuffer::SetRenderSwitches(/* parameters */);
	{
		// BrnRendererModule.cpp:4611
		ExternallyVisiblePerformanceMonitors lPerfmons;

	}
	RendererIO::OutputBuffer::SetSnapShotBuffer(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
	}
	{
		// BrnRendererModule.cpp:4529
		const float32_t lfRecipTanHalfFovH;

		// BrnRendererModule.cpp:4530
		const float32_t lfRecipTanHalfFovV;

		// BrnRendererModule.cpp:4531
		const float32_t lfRecipTanHalfFovHClamped;

		// BrnRendererModule.cpp:4532
		const float32_t lfRecipTanHalfFovVClamped;

		// BrnRendererModule.cpp:4533
		Vector4 lViewXyScale;

		CgsGraphics::Camera::GetOneOverTanHalfFovHorizontal(/* parameters */);
		rw::math::fpu::Max<float>(/* parameters */);
		rw::math::vpu::Vector4::Vector4(/* parameters */);
		BrnCoronaManager::GetSubmissionInterface(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		BrnCoronaManager::BrnSubmissionInterface::SetCameraInfo(/* parameters */);
	}
	{
	}
	{
	}
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::Swap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:572
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::Basic2dColouredTexturedVertex>::Prepare(uint32_t  luCommandBufferSizeBytes, uint32_t  luVertexBufferSizeBytes, rw::IResourceAllocator *  lpAllocator, bool  lbFailGracefully) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::Swap() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderBuffer.h:572
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsDev::DebugInterface::DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeAquire() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugInterface::GetDebugManager() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugInterface::~DebugInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::DebugManager::ThreadSafeRelease(DebugManager *  lpDebugManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::RenderAssert(const AssertData *  lpAssert) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.cpp:5087
		Matrix44 lVP;

		// BrnRendererModule.cpp:5089
		DebugInterface lInterface;

		CgsDev::DebugInterface::~DebugInterface(/* parameters */);
		CgsDev::DebugInterface::DebugInterface(/* parameters */);
		rw::math::vpu::Matrix44::SetIdentity(/* parameters */);
		CgsDev::DebugInterface::GetDebugManager(/* parameters */);
		CgsDev::DebugInterface::GetDebugManager(/* parameters */);
		rw::math::vpu::Vector3::Vector3(/* parameters */);
		{
			// BrnRendererModule.cpp:5101
			ViewportParameters lViewportParams;

			// BrnRendererModule.cpp:5104
			ScissorRectParameters lScissorParams;

			renderengine::ViewportParameters::ViewportParameters(/* parameters */);
			renderengine::ViewportParameters::SetRectangle(/* parameters */);
			renderengine::ScissorRectParameters::SetRectangle(/* parameters */);
		}
	}
}

void BrnRendererModule::SwapBuffers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::EndOfFrame(bool  lbStalled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderBuffer<CgsGraphics::BasicColouredTexturedVertex>::Prepare(uint32_t  luCommandBufferSizeBytes, uint32_t  luVertexBufferSizeBytes, rw::IResourceAllocator *  lpAllocator, bool  lbFailGracefully) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
}

void BrnBlobbyShadowManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnResource::GameDataIO::AllocatorList::GetRWGeneralResourceAllocator(int32_t  liBankId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameDataAllocatorList.h:159
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameDataAllocatorList.h:160
		CgsDev::StrStream lStrStream;

	}
	{
		// BrnGameDataAllocatorList.h:161
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::GetDebugAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::Prepare(const AllocatorList *  lpAllocatorList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.cpp:1388
		bool lbPrepareDone;

		// BrnRendererModule.cpp:1449
		rw::core::GeneralResourceAllocator * lpAllocator;

	}
	operator++(/* parameters */);
	operator++(/* parameters */);
	operator++(/* parameters */);
	operator++(/* parameters */);
	BrnResource::GameDataIO::AllocatorList::GetRWGeneralResourceAllocator(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnResource::GetDebugAllocator(/* parameters */);
	BrnResource::GetDebugAllocator(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsCore::StrnCpy(char *  lpcDest, const char *  lpcSource, unsigned int  luBytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStringUtils.h:55
		CgsDev::StrStream lStrStream;

	}
}

void BrnRendererModule::DEBUGTriggerScreenShot(const char *  lpcText) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsCore::StrnCpy(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGraphics::DispatchFrame::GetList(uint32_t  uID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.h:413
		CgsDev::StrStream lStrStream;

		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
			}
		}
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsGraphics::DispatchFrame::GetList(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

extern void OcclusionJobOptions() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::OcclusionCullManager::GetViewProjectionMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::SortDispatchLists(const DispatchFrame &  lDisplayBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.cpp:3696
		OcclusionJobOptions lOcclusionJobOptions;

		rw::math::vpu::VecFloat::operator=(/* parameters */);
	}
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::vpu::VecFloat::SetFloat(/* parameters */);
	{
		// BrnRendererModule.cpp:3716
		uint32_t luI;

	}
	{
		// BrnRendererModule.cpp:3739
		uint32_t luI;

	}
}

void CgsModule::ModuleSingleBuffered::DestroyInputDataStructure(DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:133
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::DestroyOutputDataStructure(DataStructure *  lpDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:137
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::PrepareDataStructures(DataStructure *  lpInputDataStructure, DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:141
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::ReleaseDataStructures(DataStructure *  lpInputDataStructure, DataStructure *  lpOutputDataStructure) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:145
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::CreateInputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:125
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::ModuleSingleBuffered::CreateOutputDataStructure() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsModuleSingleBuffered.h:129
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGraphics::Im2dTransform::operator=(const const Im2dTransform &  lOther) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dBase<CgsGraphics::Basic2dColouredVertex>::SetTransform(const const Im2dTransform &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2d.h:289
		FloatShaderStateIterator lShaderStateIterator;

	}
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	{
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	{
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
}

void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredVertex>::BeginRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::ResetShadowing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.h:817
		uint32_t uID;

	}
}

void CgsGraphics::ImRendererBase::SetState(const ProgramBuffer *const  lpVertexProgramBuffer, const ProgramBuffer *const  lpPixelProgramBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::GetStateLibrary() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const BlendState *const  lpBlendState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const RasterizerState *const  lpRasterizerState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Basic2dColouredVertex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Set(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im2dTransform::GetDefault() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredVertex>::SetProgram(int8_t  li8Program) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredVertex>::Render(const renderengine::PrimitiveType  lePrimitiveType, const Im2dUntexVertex *const  lpVertices, const uint32_t  lnNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:669
		renderengine::Device::DirectDraw::BatchIterator lDirectDrawBatchIterator;

		// CgsImRenderer.h:670
		CgsGraphics::Basic2dColouredVertex::VertexIterator lVertexIterator;

		{
			// CgsImRenderer.h:678
			uint32_t i;

		}
	}
}

void CgsGraphics::Basic2dColouredVertex::VertexIterator::GetStride() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Basic2dColouredVertex::VertexIterator::Write(const const CgsGraphics::Basic2dColouredVertex &  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Y() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredVertex>::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::RenderThreeThreadMonitors(const bool  lbUpdateOver, const bool  lbDispatchOver, const bool  lbGpuOver) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.cpp:2073
		float[3] lRed;

		// BrnRendererModule.cpp:2074
		float[3] lGreen;

		// BrnRendererModule.cpp:2075
		const float kfRectLeft;

		// BrnRendererModule.cpp:2076
		const float kfRectTop;

		// BrnRendererModule.cpp:2077
		const float kfRectBottom;

		// BrnRendererModule.cpp:2078
		const float kfRectRight;

		// BrnRendererModule.cpp:2079
		const float kfXOffset;

		// BrnRendererModule.cpp:2081
		Im2dUntexVertex[3][4] lVertexList;

		// BrnRendererModule.cpp:2109
		RGBA lVertexColour0;

		// BrnRendererModule.cpp:2128
		RGBA lVertexColour1;

		// BrnRendererModule.cpp:2147
		RGBA lVertexColour2;

	}
	CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredVertex>::BeginRendering(/* parameters */);
	shadow::Device::ResetShadowing(/* parameters */);
	{
	}
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	shadow::Device::SetVertexDescriptor(/* parameters */);
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	rw::RGBA::RGBA(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredVertex>::SetProgram(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredVertex>::Render(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredVertex>::Render(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredVertex>::Render(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredVertex>::EndRendering(/* parameters */);
	cellGcmSetVertexDataArrayInline(/* parameters */);
}

void CgsGraphics::Im2dBase<CgsGraphics::Basic2dColouredTexturedVertex>::SetTransform(const const Im2dTransform &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm2d.h:289
		FloatShaderStateIterator lShaderStateIterator;

	}
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	{
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	{
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	renderengine::ProgramVariableHandle::GetConstantIndex(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
	{
	}
	{
	}
	{
	}
	{
	}
}

extern void Im2dTransform() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::BeginRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::GetDepthStencilTexture() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const TextureState *const  lpTextureState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void Basic2dColouredTexturedVertex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(const renderengine::PrimitiveType  lePrimitiveType, const ImCommandBatchTransformTextureBlendRender::Im2dVertex *const  lpVertices, const uint32_t  lnNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:669
		renderengine::Device::DirectDraw::BatchIterator lDirectDrawBatchIterator;

		// CgsImRenderer.h:670
		CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator lVertexIterator;

		{
			// CgsImRenderer.h:678
			uint32_t i;

		}
	}
}

void CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator::GetStride() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator::Write(const const CgsGraphics::Basic2dColouredTexturedVertex &  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererMemory::GetParticleBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::BeginQuarterResBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.cpp:4304
		ClearColorParameters clearParameters;

		// BrnRendererModule.cpp:4313
		CgsRenderTarget * lpSourceDepth;

	}
	CgsRenderTarget::SetRenderTargetState(/* parameters */);
	renderengine::RGBA32::RGBA32(/* parameters */);
	renderengine::ClearColorParameters::SetColor(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisW>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	CgsRenderTarget::SetRenderTargetState(/* parameters */);
}

void CgsGraphics::ImRendererBase::SetState(const TextureState *const  lpTextureState, const uint32_t  luSamplerId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector4_Zero() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVector4_One() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*=(const Vector4 &  v, const rw::math::vpu::Vector4  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::EndRenderAntiAliased() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsRenderTarget::SetRenderTargetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
}

void BrnRendererModule::EndRenderMenus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.cpp:4264
		ViewportParameters lViewportParams;

		// BrnRendererModule.cpp:4268
		ScissorRectParameters scissorParams;

		// BrnRendererModule.cpp:4273
		bool lbCheapDeFlickerFilter;

		renderengine::Device::GetDefaultRenderTargetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		renderengine::ViewportParameters::ViewportParameters(/* parameters */);
		renderengine::ViewportParameters::SetRectangle(/* parameters */);
		renderengine::ScissorRectParameters::SetRectangle(/* parameters */);
	}
}

void BrnRendererModule::RenderLetterBoxBars(const CgsGraphics::Im2d &  lIm2d, float32_t  lDestAspectRatio) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.cpp:5131
		const float32_t lLetterboxY;

		// BrnRendererModule.cpp:5132
		const RGBA lBlack;

		// BrnRendererModule.cpp:5134
		Im2dTransform lTransform;

	}
	CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::BeginRendering(/* parameters */);
	shadow::Device::ResetShadowing(/* parameters */);
	{
	}
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	shadow::Device::SetVertexDescriptor(/* parameters */);
	cellGcmSetVertexDataArrayInline(/* parameters */);
	{
		// BrnRendererModule.cpp:5141
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lVertexList;

		CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		BeginBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
		renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(/* parameters */);
		BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
		renderengine::DrawParameters::SetPrimitiveType(/* parameters */);
		{
			renderengine::Device::PS3GPUSetLabelBackEnd(/* parameters */);
			cellGcmSetWriteBackEndLabelInline(/* parameters */);
			renderengine::Device::Flush(/* parameters */);
			{
				sys_timer_usleep(/* parameters */);
				renderengine::Device::PS3CPUGetLabelValue(/* parameters */);
			}
		}
		renderengine::VertexIteratorBaseClass::SetBuffer(/* parameters */);
		renderengine::Device::SetResource(/* parameters */);
		renderengine::DrawParameters::SetVertexCount(/* parameters */);
		{
			CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator::Write(/* parameters */);
		}
		EndBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
		CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
		BeginBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
		renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(/* parameters */);
		BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
		renderengine::DrawParameters::SetPrimitiveType(/* parameters */);
		{
			renderengine::Device::PS3GPUSetLabelBackEnd(/* parameters */);
			cellGcmSetWriteBackEndLabelInline(/* parameters */);
			renderengine::Device::Flush(/* parameters */);
			{
				sys_timer_usleep(/* parameters */);
				renderengine::Device::PS3CPUGetLabelValue(/* parameters */);
			}
		}
		renderengine::VertexIteratorBaseClass::SetBuffer(/* parameters */);
		renderengine::Device::SetResource(/* parameters */);
		renderengine::DrawParameters::SetVertexCount(/* parameters */);
		{
			CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator::Write(/* parameters */);
		}
		EndBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
	}
	CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::EndRendering(/* parameters */);
}

void BrnRendererMemory::GetSnapShotBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetTexture(renderengine::Texture *const  lpTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::TakeSnapShot(const const SnapShotRequest &  lSnapShotRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.cpp:5003
		renderengine::Texture * lpBackBuffer;

		// BrnRendererModule.cpp:5028
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lVertexList;

		// BrnRendererModule.cpp:5041
		const RGBA lWhite;

	}
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::BeginRendering(/* parameters */);
	CgsGraphics::ImRendererBase::SetTexture(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	BeginBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
	renderengine::Device::DirectDraw::Parameters::SetPrimitiveType(/* parameters */);
	BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(/* parameters */);
	renderengine::DrawParameters::SetPrimitiveType(/* parameters */);
	{
		renderengine::Device::PS3GPUSetLabelBackEnd(/* parameters */);
		cellGcmSetWriteBackEndLabelInline(/* parameters */);
		renderengine::Device::Flush(/* parameters */);
		{
			sys_timer_usleep(/* parameters */);
			renderengine::Device::PS3CPUGetLabelValue(/* parameters */);
		}
	}
	renderengine::VertexIteratorBaseClass::SetBuffer(/* parameters */);
	renderengine::Device::SetResource(/* parameters */);
	renderengine::DrawParameters::SetVertexCount(/* parameters */);
	{
		CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator::Write(/* parameters */);
	}
	EndBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::EndRendering(/* parameters */);
	cellGcmSetVertexDataArrayInline(/* parameters */);
}

void rw::math::vpu::operator+<VectorAxisY, VectorAxisY>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1294
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1295
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1297
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator+<VectorAxisX, VectorAxisX>(VecFloatRef<VectorAxisX> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1294
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1295
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1297
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void BrnRendererModule::DebugDisplayRenderTarget(renderengine::Texture *  lpTexture, const rw::math::vpu::Vector2  lPosition, const rw::math::vpu::Vector2  lSize, RGBA  lColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.cpp:4965
		ImCommandBatchTransformTextureBlendRender::Im2dVertex[4] lVertexList;

	}
	CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::BeginRendering(/* parameters */);
	shadow::Device::ResetShadowing(/* parameters */);
	{
	}
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetPixelProgram(/* parameters */);
	shadow::Device::SetVertexDescriptor(/* parameters */);
	renderengine::TextureState::Parameters::SetTexture(/* parameters */);
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY, VectorAxisY>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::operator+<VectorAxisX, VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	rw::math::fpu::Vector2Template<float>::Set(/* parameters */);
	renderengine::RGBA8::RGBA8(/* parameters */);
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	CgsGraphics::ImRendererBase::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::Render(/* parameters */);
	CgsGraphics::ImRenderer<CgsGraphics::Basic2dColouredTexturedVertex>::EndRendering(/* parameters */);
	cellGcmSetVertexDataArrayInline(/* parameters */);
}

void rw::math::vpu::operator/(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1688
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1689
			VectorIntrinsicUnion::VectorIntrinsic reciprocal;

			{
				// vec_float_operation_inline.h:1689
				VectorIntrinsicUnion::VectorIntrinsic secondEstimate;

				// vec_float_operation_inline.h:1689
				VectorIntrinsicUnion::VectorIntrinsic vOne;

				{
					// vec_float_operation_inline.h:1689
					VectorIntrinsicUnion::VectorIntrinsic estimate;

					// vec_float_operation_inline.h:1689
					VectorIntrinsicUnion::VectorIntrinsic vOne;

				}
			}
		}
	}
}

extern void BasicColouredTexturedVertex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::FastFloatToInt32(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::BeginRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im3dBase<CgsGraphics::BasicColouredTexturedVertex>::SetTransform(const rw::math::vpu::Matrix44 &  lViewProjectionMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3d.h:295
		FloatShaderStateIterator lShaderStateIterator;

	}
}

void renderengine::FloatShaderStateIterator::Write(const const rw::math::vpu::Matrix44 &  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRendererBase::SetState(const DepthStencilState *const  lpDepthStencilState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Clamp(const VecFloat  value, const VecFloat  min, const VecFloat  max) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Max<rw::math::vpu::VecFloat>(const const VecFloat &  a, const const VecFloat &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:149
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::Min<rw::math::vpu::VecFloat>(const const VecFloat &  a, const const VecFloat &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:132
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::operator+(const VecFloat  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1248
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void renderengine::RGBA8::SetAlpha(uint8_t  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisX>(const rw::math::vpu::Vector3  v, VecFloatRef<VectorAxisX> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:531
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void rw::math::vpu::operator*<VectorAxisW>(const rw::math::vpu::Vector3  v, VecFloatRef<VectorAxisW> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:531
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void rw::math::vpu::operator*<VectorAxisZ>(const rw::math::vpu::Vector3  v, VecFloatRef<VectorAxisZ> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:531
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void rw::math::vpu::operator*<VectorAxisY>(const rw::math::vpu::Vector3  v, VecFloatRef<VectorAxisY> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector3_operation_inline.h:531
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector3_operation_inline.h:532
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void rw::math::vpu::operator*=(const Vector3 &  v, const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::Render(const renderengine::PrimitiveType  lePrimitiveType, const Im3dVertex *const  lpVertices, const uint32_t  lnNumVertices) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsImRenderer.h:669
		renderengine::Device::DirectDraw::BatchIterator lDirectDrawBatchIterator;

		// CgsImRenderer.h:670
		CgsGraphics::BasicColouredTexturedVertex::VertexIterator lVertexIterator;

		{
			// CgsImRenderer.h:678
			uint32_t i;

		}
	}
}

void CgsGraphics::BasicColouredTexturedVertex::VertexIterator::GetStride() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::BasicColouredTexturedVertex::VertexIterator::Write(const const CgsGraphics::BasicColouredTexturedVertex &  lValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<CgsGraphics::BasicColouredTexturedVertex>::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void RenderParameters() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::CoronaRenderer::RenderParameters::SetViewProjectionMatrix(const Matrix44 &  viewProjectionMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::CoronaRenderer::RenderParameters::SetCameraPositionPlusWhiteLevel(const Vector4 &  cameraPositionPlusWhiteLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::CoronaRenderer::RenderParameters::SetViewXyScale(const rw::math::vpu::Vector4  viewXyScale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::CoronaRenderer::BatchParameters::SetFlags(uint32_t  flags) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::CoronaRenderer::BatchParameters::SetNumCoronas(uint32_t  numCoronas) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexIterator4<renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat4,renderengine::VertexTypePS3Color>::GetStride() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::CoronaBuffer::GetCoronas() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::operator=(float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::VecFloatRef<VectorAxisW>::SetFloat(float  f) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_type_inline.h:240
		VectorIntrinsicUnion::VectorIntrinsic vec;

		{
			// vec_float_type_inline.h:241
			VectorIntrinsicUnion u;

		}
		{
			// vec_float_type_inline.h:242
			VectorIntrinsicUnion::VectorIntrinsic permuteControl;

		}
	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Matrix44 &  a, const rw::math::vpu::Matrix44 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Mult(const rw::math::vpu::Matrix44 &  m, const rw::math::vpu::Matrix44 &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im3dBase<BrnGraphics::Im3dSkyDomeVertex>::SetTransform(const rw::math::vpu::Matrix44 &  lViewProjectionMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3d.h:295
		FloatShaderStateIterator lShaderStateIterator;

	}
}

void CgsGraphics::Im3dBase<BrnGraphics::Im3dSkyDomeVertex>::SetTransform(const rw::math::vpu::Matrix44 &  lModelToWorldMatrix, const rw::math::vpu::Matrix44 &  lViewProjectionMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3d.h:320
		Matrix44 lWVPMatrix;

		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
	}
	CgsGraphics::Im3dBase<BrnGraphics::Im3dSkyDomeVertex>::SetTransform(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Mult(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	BeginShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	EndShaderStates<renderengine::FloatShaderStateIterator>(/* parameters */);
	renderengine::FloatShaderStateIterator::Write(/* parameters */);
	cellGcmSetVertexProgramParameterBlockInline(/* parameters */);
	{
		renderengine::ProgramBuffer::PS3GetPixelProgramOffset(/* parameters */);
		cellGcmSetUpdateFragmentProgramParameterInline(/* parameters */);
	}
	{
	}
}

void BrnShaderConstantsFrame::GetEnvMapViewProjectionMatrix(BrnGraphics::EEnvironmentMapFace  leEnvMapFace) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::GetEnvMapViewPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::GetKeyLightDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::GetTopColourDrk() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::GetHorColourPow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::GetSunColourPow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::GetHorBleedSclPow() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::GetCloudDarkColour0() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::GetCloudLiteColour0() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::GetCloudTextureScaleAndOffsets0() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::GetCloudLayerDensity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::GetCloudLayerInvFeather() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::GetCloudLayerOpacity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::GetFogScattering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::GetCloudDistanceCurve() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY, VectorAxisZ, VectorAxisW>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z, VectorIntrinsicInParam  w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:192
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:193
			VectorIntrinsicUnion::VectorIntrinsic temp0;

			// vector_intrinsic_operation_inline.h:193
			VectorIntrinsicUnion::VectorIntrinsic temp1;

		}
	}
}

void CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::BeginRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetResource(renderengine::VertexBuffer *const  lpVertexBuffer, const uint32_t  luId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetResource(IndexBuffer *const  lpIndexBuffer, const uint32_t  luId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::SetResource(IndexBuffer *  indexBuffer, uint32_t) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::GetVecFloat_Two() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector4  v, const VecFloat  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:445
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void shadow::Device::Draw(const const DrawIndexedParameters &  drawIndexedParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ImRenderer<BrnGraphics::Im3dSkyDomeVertex>::EndRendering() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::GetViewProjectionMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::GetViewPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Vector4Template() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsRenderTarget::GetMultisampleFormat() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::Set(float  _x, float  _y, float  _z, float  _w) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::FloatShaderStateIterator::Write(const Vector4 *  values, uint32_t  numValues) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<float>::operator=(const const Vector4Template<float> &  v) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::GetDepthStencilTextureState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::GetUnbiasedKeyLightDirection() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererMemory::GetSunCoronaBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::ComputeSunCoronaVisibility() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.cpp:4118
		const const BrnShaderConstantsFrame & lShaderConstantsFrame;

		// BrnRendererModule.cpp:4119
		Matrix44 lViewProjectionMatrix;

		// BrnRendererModule.cpp:4120
		Vector3 lViewPosition;

		// BrnRendererModule.cpp:4121
		Vector3 lSunDir;

	}
	BrnShaderConstantsFrame::GetViewProjectionMatrix(/* parameters */);
	BrnShaderConstantsFrame::GetViewPosition(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
}

void rw::math::vpu::operator*(const VecFloat  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1565
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1566
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1566
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::graphics::postfx::RenderTarget::GetWidth() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::GetHeight() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:164
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator-<VectorAxisY, VectorAxisX>(VecFloatRef<VectorAxisY> &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1440
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1441
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1443
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator-<VectorAxisW, VectorAxisZ>(VecFloatRef<VectorAxisW> &  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1440
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1441
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1443
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator*(const rw::math::vpu::Vector4  v, const rw::math::vpu::Vector4  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:131
		VectorIntrinsicUnion::VectorIntrinsic ret;

	}
}

void rw::math::vpu::operator*<VectorAxisW>(const rw::math::vpu::Vector4  v, VecFloatRef<VectorAxisW> &  s) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector4_operation_inline.h:582
		VectorIntrinsicUnion::VectorIntrinsic result;

		{
			// vector4_operation_inline.h:583
			VectorIntrinsicUnion::VectorIntrinsic splattedAxis;

			// vector4_operation_inline.h:583
			VectorIntrinsicUnion::VectorIntrinsic vZero;

		}
	}
}

void rw::math::vpu::operator+=(const Vector4 &  v, const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44Template<double>::Matrix44Template(const const rw::math::vpu::Matrix44 &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::GetMatrix44_64_Identity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44Template<double>::GetW() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::W() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44Template<double>::GetXColumn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::X() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Y() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector4Template<double>::Z() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44Template<double>::GetYColumn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Matrix44Template<double>::GetWColumn() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::SetState(const MeshHelper *  meshState) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::FloatShaderStateIterator::Write(const rw::math::vpu::Vector4 *  values, uint32_t  numValues) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::Draw(const const DrawParameters &  drawParameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererMemory::GetBloomBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererMemory::GetWorkBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererMemory::GetDepthOfFieldBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::RenderTarget::GetTexture(const uint32_t  idx) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Tint::GetTextureState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator-<VectorAxisX>(VecFloatRef<VectorAxisX> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1464
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1465
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1467
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1468
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::operator-<VectorAxisY>(VecFloatRef<VectorAxisY> &  a, const const float &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1464
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1465
		VectorIntrinsicUnion::VectorIntrinsic aVF;

		// vec_float_operation_inline.h:1467
		VectorIntrinsicUnion::VectorIntrinsic bVec;

		{
			// vec_float_operation_inline.h:1468
			VectorIntrinsicUnion u;

		}
	}
}

void rw::math::vpu::Matrix44AffineFromZRotationAngle(const VecFloat  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:263
		VecFloat s;

		// matrix44affine_operation_platform_inline.h:263
		VecFloat c;

		// matrix44affine_operation_platform_inline.h:265
		const VecFloat zero;

		// matrix44affine_operation_platform_inline.h:266
		const VecFloat one;

		// matrix44affine_operation_platform_inline.h:268
		Vector3 lRow0;

		// matrix44affine_operation_platform_inline.h:269
		Vector3 lRow1;

		// matrix44affine_operation_platform_inline.h:270
		Vector3 lRow2;

		// matrix44affine_operation_platform_inline.h:271
		Vector3 lRow3;

	}
}

void rw::math::vpu::SinCos(const VecFloat  a, const VecFloat &  s_out, const VecFloat &  c_out) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::sincosf4(float[4]  x, float *[4]  s, float *[4]  c) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// sincosf4.h:14
		float[4] xl;

		// sincosf4.h:14
		float[4] xl2;

		// sincosf4.h:14
		float[4] xl3;

		// sincosf4.h:15
		int[4] q;

		// sincosf4.h:16
		int[4] offsetSin;

		// sincosf4.h:16
		int[4] offsetCos;

		// sincosf4.h:37
		float[4] qf;

		// sincosf4.h:38
		float[4] p1;

		// sincosf4.h:52
		float[4] ct1;

		// sincosf4.h:53
		float[4] st1;

		// sincosf4.h:55
		float[4] ct2;

		// sincosf4.h:56
		float[4] st2;

		// sincosf4.h:58
		float[4] cx;

		// sincosf4.h:59
		float[4] sx;

		// sincosf4.h:64
		unsigned int[4] sinMask;

		// sincosf4.h:65
		unsigned int[4] cosMask;

	}
}

void rw::math::vpu::_asmCreateVectorAxis<VectorAxisX, VectorAxisY, VectorAxisZ>(VectorIntrinsicInParam  x, VectorIntrinsicInParam  y, VectorIntrinsicInParam  z) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:177
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:178
			VectorIntrinsicUnion::VectorIntrinsic result;

			{
				// vector_intrinsic_operation_inline.h:178
				VectorIntrinsicUnion::VectorIntrinsic permuteControl;

			}
		}
	}
}

void rw::math::vpu::operator-(const VecFloat  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:967
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:968
			VectorIntrinsicUnion::VectorIntrinsic signMask;

		}
	}
}

void rw::math::vpu::Mult(const rw::math::vpu::Vector4  v, const rw::math::vpu::Matrix44Affine &  m) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// matrix44affine_operation_platform_inline.h:67
		VectorIntrinsicUnion::VectorIntrinsic tmp;

		// matrix44affine_operation_platform_inline.h:68
		VectorIntrinsicUnion::VectorIntrinsic splatX;

		// matrix44affine_operation_platform_inline.h:69
		VectorIntrinsicUnion::VectorIntrinsic splatY;

		// matrix44affine_operation_platform_inline.h:70
		VectorIntrinsicUnion::VectorIntrinsic splatZ;

		// matrix44affine_operation_platform_inline.h:71
		VectorIntrinsicUnion::VectorIntrinsic splatW;

		// matrix44affine_operation_platform_inline.h:73
		VectorIntrinsicUnion::VectorIntrinsic result;

	}
}

void rw::math::vpu::_asmSwizzleStore<VectorAxisW, VectorAxisW>(VectorIntrinsicInParam  dest, VectorIntrinsicInParam  src) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector_intrinsic_operation_inline.h:457
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vector_intrinsic_operation_inline.h:458
			VectorIntrinsicUnion::VectorIntrinsic permuteControl;

		}
	}
}

void rw::math::vpu::operator+<VectorAxisX>(const const float &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisZ>(const VecFloat  a, VecFloatRef<VectorAxisZ> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1547
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1548
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator+<VectorAxisY>(const const float &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisW>(const VecFloat  a, VecFloatRef<VectorAxisW> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1547
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1548
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void renderengine::FloatShaderStateIterator::Write(const const Vector4Template<float> &  value) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::VertexIterator3<renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat2,renderengine::VertexTypeFloat4>::GetStride() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator*<VectorAxisX>(const const float &  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1665
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:1667
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1668
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1668
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator*<VectorAxisY>(const const float &  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1665
		VectorIntrinsicUnion::VectorIntrinsic bVF;

		// vec_float_operation_inline.h:1667
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// vec_float_operation_inline.h:1668
			VectorIntrinsicUnion::VectorIntrinsic floatVec;

			{
				// vec_float_operation_inline.h:1668
				VectorIntrinsicUnion u;

			}
		}
	}
}

void rw::math::vpu::operator*<VectorAxisX>(const VecFloat  a, VecFloatRef<VectorAxisX> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1547
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1548
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void rw::math::vpu::operator*<VectorAxisY>(const VecFloat  a, VecFloatRef<VectorAxisY> &  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vec_float_operation_inline.h:1547
		VectorIntrinsicUnion::VectorIntrinsic ret;

		// vec_float_operation_inline.h:1548
		VectorIntrinsicUnion::VectorIntrinsic bVF;

	}
}

void CgsGraphics::DispatchPacketInterpreter::GetMeshOnlyDispatchFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchFrame::GetBin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchBin::GetBinStart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchList::ExposeKeyCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnRendererModule::CreateObjectToMeshJob(BrnRendererModule::ERendererModelOnlyDispatchJob  luJob, const const DispatchObjectContext &  lDispatchObjectContextDefaults, DispatchPacketInterpreter *  lpDispatchInterpreter, BrnRendererModule::ERendererDoubleBufferedDispatchListID  leInputJobList, int32_t  luGroupIndex, int32_t  luGroupSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.cpp:1769
		ObjectToMeshJobInfo lObjectToMeshJobInfo;

		// BrnRendererModule.cpp:1771
		DispatchList * lpDispatchListInput;

		// BrnRendererModule.cpp:1785
		void * lpOutputBinStart;

		// BrnRendererModule.cpp:1797
		uint32_t luObjectCount;

		// BrnRendererModule.cpp:1799
		const uint32_t luBlocksRequired;

	}
	CgsGraphics::DispatchFrame::GetList(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsGraphics::DispatchBin::AllocateMemoryFast(uint32_t  luNumQuadWords) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDispatcher.h:446
		void * lpResult;

	}
}

void CgsGraphics::DispatchBin::Reserve(uint32_t  luNumQuadWords) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchBin::GetBinCurrent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchBin::GetBinEnd() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::TextureScopeTable::ClearDispatchThreadPointers() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsTextureScopeTable.h:230
		uint32_t luPurpose;

	}
}

void BrnRendererModule::ConvertObjectsToMeshes(const CgsGraphics::BufferedDispatchFrame &  lDoubleBufferedDisplayBuffer, const DispatchFrame &  lSingleBufferedDispatchFrame, DispatchPacketInterpreter *  lpDispatchInterpreter, const const DispatchObjectContext &  lDispatchObjectContextShared) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.cpp:1835
		CgsGraphics::DispatchFrame * lpDispatchFrame;

		// BrnRendererModule.cpp:1836
		CgsGraphics::DispatchBin * lpDispatchBin;

		// BrnRendererModule.cpp:1838
		bool lbObjectToMeshViaJobs;

	}
	CgsGraphics::DispatchFrame::GetBin(/* parameters */);
	{
		// BrnRendererModule.cpp:1844
		const uint32_t KU_CACHE_LINE_SIZE;

		// BrnRendererModule.cpp:1846
		uint32_t luJob;

		// BrnRendererModule.cpp:1860
		void * lpDispatchBinCurrent;

		// BrnRendererModule.cpp:1861
		void * lpDispatchBinEnd;

		// BrnRendererModule.cpp:1863
		ptrdiff_t lDispatchBinAvailableBytes;

		// BrnRendererModule.cpp:1866
		uint32_t luQuadWordsAvailable;

		// BrnRendererModule.cpp:1872
		uint32_t luBlocksShared;

		// BrnRendererModule.cpp:1991
		uint32_t luNextFreeBlockInSharedMemory;

		// BrnRendererModule.cpp:2004
		uintptr_t luNextFreeByteInSharedMemory;

	}
	{
		// BrnRendererModule.cpp:1849
		uint32_t lBytesForDispatchLists;

		// BrnRendererModule.cpp:1854
		uint32_t lQuadWordsForDispatchLists;

		CgsGraphics::DispatchBin::AllocateMemoryFast(/* parameters */);
	}
	CgsGraphics::DispatchBin::Reserve(/* parameters */);
	CgsGraphics::DispatchBin::AllocateMemoryFast(/* parameters */);
	CgsGraphics::DispatchBin::Reserve(/* parameters */);
	{
		// BrnRendererModule.cpp:1964
		uint32_t luJob;

	}
	{
		// BrnRendererModule.cpp:1972
		uint32_t luJob;

	}
	{
		// BrnRendererModule.cpp:1982
		uint32_t luJob;

	}
	{
		// BrnRendererModule.cpp:2013
		uint32_t luJob;

		{
			// BrnRendererModule.cpp:2015
			uint32_t luList;

			{
				// BrnRendererModule.cpp:2017
				DispatchList * lpListFromJob;

			}
		}
	}
	{
		// BrnRendererModule.cpp:2043
		uint32_t luListIndex;

		{
			// BrnRendererModule.cpp:2049
			DispatchObjectContext lDispatchObjectContextForThisList;

		}
	}
	CgsGraphics::TextureScopeTable::ClearDispatchThreadPointers(/* parameters */);
}

extern void DispatchObjectContext() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DrawRenderable::SetPreZMode(bool  lbPreZEnabled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DrawRenderable::SetPreZAlpha(bool  lbPreZAlpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DrawRenderable::SetPreZNearThreshold(float32_t  lfNearThreshold) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DrawRenderableMesh::SetOcclusionManager(CgsGraphics::OcclusionCullManager *  lpOcclusionCullManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DrawRenderableMesh::SetOcclusionCullIndexCountThreshold(uint32_t  luThreshold) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::OcclusionCullManager::SetOccludeeNearClipOffset(float32_t  lfOffset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGame::DispatchThreadInputBuffer::GetLoadingScreenCommand() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGame::DispatchThreadInputBuffer::IsReadBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGame::DispatchThreadInputBuffer::GetOcclusionViewProjectionMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::OcclusionCullManager::SetViewProjectionMatrix(const rw::math::vpu::Matrix44 &  lViewProjection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchPacketInterpreter::SetTime(float32_t  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::DispatchPacketInterpreter::SetMeshOnlyDispatchFrame(CgsGraphics::DispatchFrame *  lpSingleBufferedFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::EffectsArbitrator::GetMotionBlurData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::GetMotionBlurData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::MotionBlurData::IsActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::MotionBlurData::GetWorldBlendAmount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::FastFloatToInt32<float>(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::MotionBlurData::GetCarsBlendAmount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGame::DispatchThreadInputBuffer::GetIsRenderingAtFullFrameRate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGame::LoadingScreenRenderer::IsRenderingLoadingScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::Device::SetNumVSyncToWait(uint32_t  vNumSyncsToWait) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGame::DispatchThreadInputBuffer::GetCalibrationUnfriendlyEnablePostFx() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDispatchThreadInputBuffer.h:116
		CgsDev::StrStream lStrStream;

	}
}

void BrnGame::DispatchThreadInputBuffer::GetIsStalled() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDispatchThreadInputBuffer.h:122
		CgsDev::StrStream lStrStream;

	}
}

void BrnGame::DispatchThreadInputBuffer::GetParticleRenderData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDispatchThreadInputBuffer.h:100
		CgsDev::StrStream lStrStream;

	}
}

void CgsGraphics::ShaderPatch::FrameBegin() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::ShaderPatch::BeginPatchTask() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// shadowingdevice.h:429
		const void * microcode;

		// shadowingdevice.h:430
		uint32_t microcodeSize;

		// shadowingdevice.h:431
		ParameterOffsetTable * table;

	}
}

void renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::Begin(void *  buffer, uint32_t  bufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::GetFlags() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::PS3GetMicrocode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::PS3GetMicrocodeSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::ProgramBuffer::PS3GetParameterOffsetTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::SetMicrocode(const void *  microcode, uint32_t  microcodeSize, const ParameterOffsetTable *  table) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::ResetEntry(const void *  microcode, uint32_t  microcodeSize, const ParameterOffsetTable *  table) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::shaderpatch::ParameterStream::Builder::End() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::shaderpatch::ParameterOffsetTable::GetSize() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::shaderpatch::ParameterStream::Builder::Begin(void *  buffer, uint32_t  bufferSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::BeginEntry(const void *  microcode, uint32_t  microcodeSize, const ParameterOffsetTable *  table) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::GetGameTime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::GetWhiteLevel() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPostFx::SetTint(const const bool &  lbTint) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPostFx::SetTintBlendFactor(int  lnIndex, float  factor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPostFx::SetColourCube(int  lnIndex, rw::graphics::postfx::ColourCube *  cube) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGame::DispatchThreadInputBuffer::GetEnvMapFaceRender(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::LockDepthStencilState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::UnlockDepthStencilState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void BrnShaderConstantsFrame(const const BrnShaderConstantsFrame &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::BeginForceStencilWrite(const uint32_t  luStencilValueToWrite) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::OcclusionCullManager::IsOcclusionEnabled() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void shadow::Device::EndForceStencilWrite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Im3dRenderBufferBase<CgsGraphics::BasicColouredVertex>::Dispatch(CgsGraphics::Im3dBase<CgsGraphics::BasicColouredVertex> *  lpImRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3dRenderBuffer.h:201
		const ImCommand * lpCurrentCommand;

	}
}

void CgsGraphics::Im3dRenderBufferBase<CgsGraphics::BasicColouredTexturedVertex>::Dispatch(CgsGraphics::Im3dBase<CgsGraphics::BasicColouredTexturedVertex> *  lpImRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsIm3dRenderBuffer.h:201
		const ImCommand * lpCurrentCommand;

	}
}

void BrnGraphics::DebugComponent::GetOverrideSunBrightness() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::DebugComponent::GetOverriddenSunBrightness() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnShaderConstantsFrame::GetKeyLightColour() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPostFx::SetBloom(const const bool &  lbBloom) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPostFx::GetBloom() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPostFx::SetVignette(const const bool &  lbVignette) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPostFx::GetVignetteState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Vignette::State::SetSharpness(float32_t  gradientSharpness) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Vignette::State::SetInnerColour(const rw::math::vpu::Vector4  innerColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Vignette::State::SetOuterColour(const rw::math::vpu::Vector4  outerColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Vignette::State::SetCenter(const rw::math::vpu::Vector2  center) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Vignette::State::SetAmount(const rw::math::vpu::Vector2  scale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::Vignette::State::SetAngle(float32_t  gradientAngle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPostFx::GetVignette() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPostFx::SetDepthOfField(const const bool &  lbDepthOfField) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPostFx::GetDofState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::DepthOfField::State::SetFocalNearPlane(float32_t  focalNear) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::DepthOfField::State::SetFocalPlane1(float32_t  focalPlane1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::DepthOfField::State::SetFocalPlane2(float32_t  focalPlane2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::DepthOfField::State::SetFocalFarPlane(float32_t  focalFar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::DepthOfField::State::SetDofAmount(float32_t  dofAmount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::DepthOfField::State::SetProjectionNearPlane(float32_t  projectionNear) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::DepthOfField::State::SetProjectionFarPlane(float32_t  projectionFar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPostFx::GetDepthOfField() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPostFx::SetB4Blur(const const bool &  lbBlur) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::EffectsArbitrator::GetAngularVelocity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::GetAngularVelocity() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGraphics::EffectsArbitrator::GetSpeedMPH() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnEffectsFrame::GetSpeedMPH() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::operator+(const const float &  a, const VecFloat  b) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::vpu::Abs<rw::math::vpu::VecFloat>(const const VecFloat &  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// scalar_operation_inline.h:114
		VectorIntrinsicUnion::VectorIntrinsic ret;

		{
			// scalar_operation_inline.h:115
			const VectorIntrinsicUnion::VectorIntrinsic mask;

			// scalar_operation_inline.h:115
			const VectorIntrinsicUnion::VectorIntrinsic signBitMask;

		}
	}
}

void BrnPostFx::GetB4BlurState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::B4Blur::State::SetBlendAmount(const rw::math::vpu::Vector2  amount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::B4Blur::State::SetBlurAmount(const rw::math::vpu::Vector2  amount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::B4Blur::State::SetBlendCenter(const rw::math::vpu::Vector2  center) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::B4Blur::State::SetBlurCenter(const rw::math::vpu::Vector2  center) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::B4Blur::State::SetBlurOpacity(float32_t  opacity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::B4Blur::State::SetBlurVelocity(float32_t  velocity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::B4Blur::State::SetBlendSharpness(float32_t  sharpness) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxb4blur.h:98
		float32_t sharpParam;

		// rwgpfxb4blur.h:99
		float32_t gradientSharpness;

	}
}

void rw::graphics::postfx::B4Blur::State::SetBlendNoise(float32_t  noise) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::graphics::postfx::B4Blur::State::SetBlendAngle(float32_t  angle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPostFx::GetB4Blur() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGame::DispatchThreadInputBuffer::GetBrightness() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDispatchThreadInputBuffer.h:110
		CgsDev::StrStream lStrStream;

	}
}

void BrnGame::DispatchThreadInputBuffer::GetContrast() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDispatchThreadInputBuffer.h:113
		CgsDev::StrStream lStrStream;

	}
}

void BrnPostFx::GetMotionBlurState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::Camera::MotionBlurData::IsExpensiveMotionBlur() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::GetViewMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGraphics::Camera::GetProjectionMatrix() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGame::DispatchThreadInputBuffer::GetCalibrationTextureHandle() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDispatchThreadInputBuffer.h:119
		CgsDev::StrStream lStrStream;

	}
}

void CgsResource::ResourceHandle::operator!=(const const ResourceHandle &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::IsEqual(const const ResourceHandle &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::GetResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::SmallResource::GetMemoryResource() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGame::DispatchThreadInputBuffer::GetIsDiskError() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDispatchThreadInputBuffer.h:130
		CgsDev::StrStream lStrStream;

	}
}

void BrnGame::DispatchThreadInputBuffer::GetThreadsOverBudget(const bool &  lbOutputUpdateThreadOverBudget, const bool &  lbOutputDispatchThreadOverBudget, const bool &  lbOutputGpuOverBudget) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGame::DispatchThreadInputBuffer::GetSnapShotRequest() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDispatchThreadInputBuffer.h:133
		CgsDev::StrStream lStrStream;

	}
}

void BrnRendererModule::Render(BrnEffects::EffectsModule *  lpEffectsModule, const DispatchThreadInputBuffer *  lpDispatchThreadInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.cpp:2188
		const CgsGraphics::BufferedDispatchFrame & lDoubleBufferedDisplayBuffer;

		// BrnRendererModule.cpp:2189
		const DispatchFrame & lSingleBufferedDispatchFrame;

		// BrnRendererModule.cpp:2190
		DispatchPacketInterpreter * lpDispatchInterpreter;

		// BrnRendererModule.cpp:2193
		DispatchObjectContext lDispatchObjectContextShared;

		// BrnRendererModule.cpp:2194
		DispatchMeshContext lDispatchMeshContext;

		// BrnRendererModule.cpp:2223
		Matrix44 lMainCameraViewProjectionMatrix;

		// BrnRendererModule.cpp:2258
		const bool8_t lbMotionBlurEnabled;

		// BrnRendererModule.cpp:2259
		const uint8_t luStencilValueWorld;

		// BrnRendererModule.cpp:2260
		const uint8_t luStencilValueVehicles;

		// BrnRendererModule.cpp:2268
		bool lbDoRender;

		// BrnRendererModule.cpp:2270
		PixelBuffer * lpBackBuffer;

		CgsGraphics::DrawRenderable::SetPreZMode(/* parameters */);
		CgsGraphics::DrawRenderable::SetPreZAlpha(/* parameters */);
		CgsGraphics::DrawRenderable::SetPreZNearThreshold(/* parameters */);
		CgsGraphics::DrawRenderable::SetPreZNearThreshold(/* parameters */);
		rw::math::vpu::VecFloat::operator=(/* parameters */);
		CgsGraphics::DrawRenderableMesh::SetOcclusionManager(/* parameters */);
		CgsGraphics::DrawRenderableMesh::SetOcclusionCullIndexCountThreshold(/* parameters */);
		CgsGraphics::OcclusionCullManager::SetOccludeeNearClipOffset(/* parameters */);
		rw::math::vpu::Vector4::SetZ(/* parameters */);
		CgsModule::IOBuffer::LockForRead(/* parameters */);
		BrnGame::DispatchThreadInputBuffer::GetOcclusionViewProjectionMatrix(/* parameters */);
		CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
		rw::math::vpu::Matrix44::operator=(/* parameters */);
		CgsGraphics::OcclusionCullManager::SetViewProjectionMatrix(/* parameters */);
		CgsModule::IOBuffer::UnlockForRead(/* parameters */);
		CgsGraphics::DispatchPacketInterpreter::SetTime(/* parameters */);
		CgsGraphics::DispatchPacketInterpreter::SetMeshOnlyDispatchFrame(/* parameters */);
		renderengine::Device::GetBackBuffer(/* parameters */);
		CgsModule::IOBuffer::LockForRead(/* parameters */);
		CgsContainers::FlagSet<std::int8_t>::SetBit(/* parameters */);
		CgsModule::IOBuffer::UnlockForRead(/* parameters */);
	}
	{
		// BrnRendererModule.cpp:2280
		bool lbRenderAtFullFrameRate;

		// BrnRendererModule.cpp:2321
		const bool lbEnableCalibrationUnfriendlyPostFx;

		// BrnRendererModule.cpp:2323
		const bool lbIsStalled;

		// BrnRendererModule.cpp:2324
		const bool lbRenderParticles;

		// BrnRendererModule.cpp:2336
		const const BrnParticle::ParticleModule::ParticleRenderData & lParticleRenderData;

		// BrnRendererModule.cpp:2337
		BrnParticle::ParticleModule * lpParticleModule;

		// BrnRendererModule.cpp:2354
		PatchTask<renderengine::shaderpatch::ParameterStream> * lPatchTask;

		// BrnRendererModule.cpp:2358
		const const BrnShaderConstantsFrame & lShaderConstantsFrame;

		// BrnRendererModule.cpp:2360
		const float32_t lTime;

		// BrnRendererModule.cpp:2361
		const float32_t lfWhiteLevel;

		// BrnRendererModule.cpp:2807
		BrnShaderConstantsFrame * lpShaderConstantsFrame;

		// BrnRendererModule.cpp:3041
		const BrnPostFx & lPostFX;

		// BrnRendererModule.cpp:3195
		CgsRenderTarget * lpDestination;

		// BrnRendererModule.cpp:3196
		CgsRenderTarget * lpWorkBuffer;

		renderengine::Device::SetNumVSyncToWait(/* parameters */);
		BrnGame::DispatchThreadInputBuffer::GetCalibrationUnfriendlyEnablePostFx(/* parameters */);
		BrnGame::DispatchThreadInputBuffer::GetIsStalled(/* parameters */);
		BrnGame::DispatchThreadInputBuffer::GetParticleRenderData(/* parameters */);
		CgsGraphics::ShaderPatch::FrameBegin(/* parameters */);
		CgsGraphics::ShaderPatch::BeginPatchTask(/* parameters */);
		renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::Begin(/* parameters */);
		CgsGraphics::DispatchPacketInterpreter::SetTime(/* parameters */);
		BrnShaderConstantsFrame::GetWhiteLevel(/* parameters */);
		CgsGraphics::DispatchFrame::GetList(/* parameters */);
		CgsGraphics::DispatchFrame::GetList(/* parameters */);
		CgsGraphics::DispatchFrame::GetList(/* parameters */);
		CgsGraphics::DispatchFrame::GetList(/* parameters */);
		CgsGraphics::DispatchFrame::GetList(/* parameters */);
		CgsGraphics::DispatchFrame::GetList(/* parameters */);
		CgsGraphics::DispatchList::ExposeKeyCount(/* parameters */);
		CgsGraphics::DispatchFrame::GetList(/* parameters */);
		CgsGraphics::DispatchFrame::GetList(/* parameters */);
		CgsGraphics::DispatchFrame::GetList(/* parameters */);
		shadow::Device::ResetShadowing(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		renderengine::TextureState::NativeGetTexture(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		shadow::Device::SetState(/* parameters */);
		{
			// BrnRendererModule.cpp:2596
			uint32_t luFace;

			{
				// BrnRendererModule.cpp:2621
				BrnShaderConstantsFrame lShaderConstantsFrame;

			}
		}
		shadow::Device::LockRasteriserState(/* parameters */);
		shadow::Device::LockDepthStencilState(/* parameters */);
		CgsGraphics::DispatchFrame::GetList(/* parameters */);
		shadow::Device::UnlockRasteriserState(/* parameters */);
		shadow::Device::UnlockDepthStencilState(/* parameters */);
		BrnShaderConstantsFrame(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		CgsGraphics::DispatchFrame::GetList(/* parameters */);
		{
			// BrnRendererModule.cpp:2685
			DispatchList * lpCarOpaqueList;

			// BrnRendererModule.cpp:2686
			int32_t liCurrentIndex;

			shadow::Device::BeginForceStencilWrite(/* parameters */);
			CgsGraphics::DispatchFrame::GetList(/* parameters */);
			shadow::Device::EndForceStencilWrite(/* parameters */);
		}
		{
			// BrnRendererModule.cpp:2744
			DispatchList * lpWorldOpaqueList;

			CgsGraphics::DispatchFrame::GetList(/* parameters */);
			{
				// BrnRendererModule.cpp:2748
				bool sbBulkOcclusion;

				{
					// BrnRendererModule.cpp:2752
					int32_t liCurrentIndex;

				}
				{
					// BrnRendererModule.cpp:2773
					int32_t liCurrentIndex;

				}
			}
		}
		CgsGraphics::DispatchFrame::GetList(/* parameters */);
		shadow::Device::BeginForceStencilWrite(/* parameters */);
		CgsGraphics::DispatchFrame::GetList(/* parameters */);
		shadow::Device::EndForceStencilWrite(/* parameters */);
		EA::Jobs::Job::SetName(/* parameters */);
		EA::Jobs::Job::SetCode(/* parameters */);
		BrnRendererMemory::GetBackBuffer(/* parameters */);
		BrnRendererMemory::GetDownSampleBuffer(/* parameters */);
		{
			// BrnRendererModule.cpp:3286
			float lfStartX;

			// BrnRendererModule.cpp:3287
			float lfStartY;

			// BrnRendererModule.cpp:3288
			float lfWidth;

			// BrnRendererModule.cpp:3289
			float lfHeight;

			// BrnRendererModule.cpp:3290
			Vector2 lPosition;

			// BrnRendererModule.cpp:3291
			Vector2 lSize;

			// BrnRendererModule.cpp:3297
			renderengine::Texture * lpTexture;

			// BrnRendererModule.cpp:3300
			uint32_t luOldFormat;

			rw::math::vpu::Vector2::Vector2(/* parameters */);
			rw::math::vpu::Vector2::Vector2(/* parameters */);
			shadow::Device::SetState(/* parameters */);
			shadow::Device::SetState(/* parameters */);
			BrnRendererMemory::GetShadowMapBuffer(/* parameters */);
		}
		{
			// BrnRendererModule.cpp:3427
			bool lbUpdateOver;

			// BrnRendererModule.cpp:3428
			bool lbDispatchOver;

			// BrnRendererModule.cpp:3429
			bool lbGpuOver;

		}
		BrnGame::DispatchThreadInputBuffer::GetSnapShotRequest(/* parameters */);
		BrnGame::DispatchThreadInputBuffer::GetSnapShotRequest(/* parameters */);
		CgsGraphics::Im3dRenderBufferBase<CgsGraphics::BasicColouredTexturedVertex>::Dispatch(/* parameters */);
	}
	{
		renderengine::ProgramBuffer::PS3GetMicrocodeSize(/* parameters */);
		renderengine::shaderpatch::PatchTask<renderengine::shaderpatch::ParameterStream>::Builder::SetMicrocode(/* parameters */);
		renderengine::ProgramBuffer::PS3GetMicrocode(/* parameters */);
		renderengine::shaderpatch::ParameterStream::Builder::Begin(/* parameters */);
	}
	renderengine::Device::SetNumVSyncToWait(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnRendererModule.cpp:2423
		const BrnPostFx & lPostFX;

		// BrnRendererModule.cpp:2425
		bool lbUseTint;

		// BrnRendererModule.cpp:2426
		rw::graphics::postfx::ColourCube *[5] lapColourCubes;

		// BrnRendererModule.cpp:2427
		float32_t[5] lafWeights;

		BrnPostFx::SetTint(/* parameters */);
		{
			// BrnRendererModule.cpp:2436
			uint32_t luCubeIdx;

			BrnPostFx::SetTintBlendFactor(/* parameters */);
			BrnPostFx::SetColourCube(/* parameters */);
			BrnPostFx::SetTintBlendFactor(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsGraphics::DispatchFrame::GetList(/* parameters */);
	CgsGraphics::DispatchFrame::GetList(/* parameters */);
	CgsGraphics::DispatchFrame::GetList(/* parameters */);
	CgsGraphics::DispatchFrame::GetList(/* parameters */);
	CgsGraphics::DispatchFrame::GetList(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnRendererModule.cpp:3352
		bool lbDiskError;

		CgsGraphics::Im3dRenderBufferBase<CgsGraphics::BasicColouredTexturedVertex>::Dispatch(/* parameters */);
		BrnGame::DispatchThreadInputBuffer::GetIsDiskError(/* parameters */);
	}
	{
		// BrnRendererModule.cpp:3209
		TintData2d lTintData2d;

		// BrnRendererModule.cpp:3216
		const float32_t lfBrightness;

		// BrnRendererModule.cpp:3217
		const float32_t lfContrast;

		// BrnRendererModule.cpp:3220
		const MotionBlurState & lMotionBlurState;

		// BrnRendererModule.cpp:3221
		MotionBlurState::EQuality leBlurQuality;

		// BrnRendererModule.cpp:3235
		renderengine::Texture * lpCalibrationTexture;

		rw::math::vpu::Vector4::SetZero(/* parameters */);
		BrnGame::DispatchThreadInputBuffer::GetBrightness(/* parameters */);
		BrnGame::DispatchThreadInputBuffer::GetContrast(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		CgsGraphics::Camera::GetProjectionMatrix(/* parameters */);
		rw::math::vpu::Matrix44::Matrix44(/* parameters */);
		{
			// BrnRendererModule.cpp:3239
			const const ResourceHandle & lNewCalibrationTextureHandle;

			BrnGame::DispatchThreadInputBuffer::GetCalibrationTextureHandle(/* parameters */);
			CgsResource::ResourceHandle::operator!=(/* parameters */);
		}
	}
	{
		// BrnRendererModule.cpp:3124
		bool lbUseBlur;

		// BrnRendererModule.cpp:3125
		BlurData lBlurData;

		BrnPostFx::SetB4Blur(/* parameters */);
	}
	CgsResource::ResourceHandle::operator!=(/* parameters */);
	CgsRenderTarget::GetRenderTarget(/* parameters */);
	CgsRenderTarget::GetRenderTarget(/* parameters */);
	{
		// BrnRendererModule.cpp:3051
		bool lbUseBloom;

		// BrnRendererModule.cpp:3052
		BloomData lBloomData;

		BrnPostFx::SetBloom(/* parameters */);
	}
	{
		// BrnRendererModule.cpp:3074
		bool lbUseVignette;

		// BrnRendererModule.cpp:3075
		VignetteData lVignetteData;

		BrnPostFx::SetVignette(/* parameters */);
	}
	{
		// BrnRendererModule.cpp:3098
		bool lbUseDepthOfField;

		// BrnRendererModule.cpp:3099
		DepthOfFieldData lDepthOfFieldData;

		BrnPostFx::SetDepthOfField(/* parameters */);
	}
	{
		// BrnRendererModule.cpp:3133
		const float32_t B4BLUR_OO_MAX_CAR_SPEED;

		// BrnRendererModule.cpp:3136
		Vector3 lvPlayerAngularVelocity;

		// BrnRendererModule.cpp:3137
		Vector2 lvBlurCentre;

		// BrnRendererModule.cpp:3138
		Vector2 lvBlendCentre;

		// BrnRendererModule.cpp:3139
		Vector2 lvBlendAmount;

		// BrnRendererModule.cpp:3140
		float32_t lfPlayerSpeedMPH;

		// BrnRendererModule.cpp:3141
		float32_t lfBlurStrength;

		// BrnRendererModule.cpp:3143
		float32_t lfBlurHorizontal;

		// BrnRendererModule.cpp:3144
		float32_t lfBlurVertical;

		// BrnRendererModule.cpp:3145
		float32_t lfBlurSteeringOffset;

		// BrnRendererModule.cpp:3147
		float32_t lfBlendHorizontal;

		// BrnRendererModule.cpp:3148
		float32_t lfBlendVertical;

		// BrnRendererModule.cpp:3149
		float32_t lfBlendSteeringOffset;

		// BrnRendererModule.cpp:3150
		float32_t lfBlendWidth;

		// BrnRendererModule.cpp:3151
		float32_t lfBlendHeight;

		// BrnRendererModule.cpp:3177
		const rw::graphics::postfx::B4Blur::State & lBlurState;

	}
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::operator-<VectorAxisX>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Abs<rw::math::vpu::VecFloat>(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::graphics::postfx::B4Blur::State::SetBlendSharpness(/* parameters */);
	rw::math::vpu::Clamp(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::vpu::Min<float>(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	rw::graphics::postfx::B4Blur::State::SetBlurOpacity(/* parameters */);
	rw::graphics::postfx::B4Blur::State::SetBlurVelocity(/* parameters */);
	rw::graphics::postfx::B4Blur::State::SetBlendAngle(/* parameters */);
	rw::graphics::postfx::B4Blur::State::SetBlendNoise(/* parameters */);
	{
		// BrnRendererModule.cpp:2990
		CgsRenderTarget *const lpQuarterResBuffer;

		{
			// BrnRendererModule.cpp:2997
			bool lbOverrideSunIntensity;

			// BrnRendererModule.cpp:2998
			float32_t lfOverriddenSunIntensity;

			BrnRendererMemory::GetSunCoronaBuffer(/* parameters */);
			BrnGraphics::DebugComponent::GetOverriddenSunBrightness(/* parameters */);
			BrnShaderConstantsFrame::GetKeyLightColour(/* parameters */);
			BrnShaderConstantsFrame::GetWhiteLevel(/* parameters */);
		}
	}
	CgsGraphics::Im3dRenderBufferBase<CgsGraphics::BasicColouredVertex>::Dispatch(/* parameters */);
	CgsGraphics::Im3dRenderBufferBase<CgsGraphics::BasicColouredTexturedVertex>::Dispatch(/* parameters */);
	CgsGraphics::Im3dRenderBufferBase<CgsGraphics::BasicColouredTexturedVertex>::Dispatch(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	shadow::Device::SetState(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnRendererModule.cpp:3083
		const rw::graphics::postfx::Vignette::State & lVignetteState;

		rw::graphics::postfx::Vignette::State::SetAngle(/* parameters */);
		rw::graphics::postfx::Vignette::State::SetCenter(/* parameters */);
		rw::math::fpu::DegToRad<float>(/* parameters */);
		rw::graphics::postfx::Vignette::State::SetSharpness(/* parameters */);
	}
	SetY<VectorAxisY>(/* parameters */);
	rw::graphics::postfx::Vignette::State::SetAmount(/* parameters */);
	SetW<VectorAxisY>(/* parameters */);
	{
		// BrnRendererModule.cpp:3060
		BrnPostFxBloomData * lpBloomData;

	}
	{
		// BrnRendererModule.cpp:3107
		const rw::graphics::postfx::DepthOfField::State & lDofState;

		rw::graphics::postfx::DepthOfField::State::SetFocalNearPlane(/* parameters */);
		rw::graphics::postfx::DepthOfField::State::SetFocalPlane1(/* parameters */);
		rw::graphics::postfx::DepthOfField::State::SetFocalPlane2(/* parameters */);
	}
	rw::graphics::postfx::DepthOfField::State::SetProjectionNearPlane(/* parameters */);
	rw::graphics::postfx::DepthOfField::State::SetProjectionFarPlane(/* parameters */);
	rw::graphics::postfx::DepthOfField::State::SetFocalFarPlane(/* parameters */);
	rw::graphics::postfx::DepthOfField::State::SetDofAmount(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsGraphics::DispatchFrame::GetList(/* parameters */);
	CgsGraphics::DispatchFrame::GetList(/* parameters */);
	CgsGraphics::DispatchFrame::GetList(/* parameters */);
	CgsGraphics::DispatchFrame::GetList(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

::::KI_NETWORK_COMPRESSED_PICTURE_FORMAT = 1433534630;

::::KI_NETWORK_PHOTO_FORMAT = 1433536677;

::::K_GAMER_PICTURE_FORMAT = 1433536677;

::::K_NETWORK_PERF_CHANNEL = 8;

::::K_NETWORK2_PERF_CHANNEL = 9;

::::K_NETWORK3_PERF_CHANNEL = 18;

::::KF_BLOBBY_SHADOW_ALPHA = [63, 51, 51, 51];

::::KF_CORONA_OFFSET = [63, 0, 0, 0];

::::KF_ASPECTRATIO_WIDESCREEN = [63, 227, 142, 57];

::::KF_ASPECTRATIO_STANDARD = [63, 170, 170, 171];

::::KF_ASPECTRATIO_SQUARE = [63, 128, 0, 0];

::::KF_ASPECTRATIO_STAND_IN_PLEASE_REMOVE_ME = [63, 227, 142, 57];

::::KF_DEFAULT_FOVHORIZONTAL = [63, 201, 15, 219];

::::KF_DEFAULT_ASPECTRATIO = [63, 227, 142, 57];

::::KF_DEFAULT_NEARCLIPPLANE = [61, 204, 204, 205];

::::KF_DEFAULT_FARCLIPPLANE = [68, 122, 0, 0];

::::KF_DEFAULT_DEPTHOFFIELD = [63, 128, 0, 0];

::::KF_GRAVITY = [65, 28, 245, 195];

::::KE_PHYSICS_PERFMON_PAGE = 6;

::::KU_INVALID_LANDMARK_INDEX = -1;

::::msfTicksPerSecond = [69, 59, 128, 0];

::::msfOneOverTicksPerSecond = [57, 174, 195, 62];

::::KF_PREZ_NEAR_THRESHOLD = [67, 72, 0, 0];

::::KF_OCCLUDEE_NEAR_CLIP_OFFSET = [67, 22, 0, 0];

::::kfOneThird = [62, 170, 170, 171];

::::kfTwoThirds = [63, 42, 170, 171];

::::kfTwoThirdsPlusASixth = [63, 85, 85, 86];

::::kfCoronaFadeDistance = [65, 240, 0, 0];

::::kfNoFadeDistanceSqrd = [71, 61, 16, 0];

ICE::TWO_PI_ANGLE = [71, 128, 0, 0];

ICE::TWO_PI_DEG = [67, 180, 0, 0];

ICE::TWO_PI = [64, 201, 15, 219];

ICE::MILE = [63, 205, 254, 252];

ICE::ICE_PARAMETER_MAX = -1;

ICE::ICE_LENS_DEFAULT = [65, 192, 0, 0];

ICE::ICE_NEAR_CLIP_DEFAULT = [63, 0, 0, 0];

ICE::ICE_TANGENT_LENGTH_DEFAULT = [63, 128, 0, 0];

ICE::ICE_INVALID_KEY = -1;

ICE::ICE_INVALID_INTERVAL = -1;

ICE::ICE_EPSILON = [55, 39, 197, 172];

ICE::ICE_DATA_SMALL_FLOAT = [58, 131, 18, 111];

ICE::ICEMath::ASPECT_X = [63, 170, 61, 113];

ICE::ICEMath::LENS_BASE = [65, 64, 0, 0];

CgsWorld::KU_INVALID_WORLD_MAP_VALUE = -1;

BrnReplays::KF_REPLAY_START_TIME = [65, 112, 0, 0];

BrnReplays::KF_REPLAY_LENGTH = [65, 160, 0, 0];

BrnReplays::KAC_STREAM_MAGIC_NUMBER = "REPLAY ";

BrnAI::KF_MAX_TURN_ANGLE = [62, 178, 184, 194];

BrnAI::KF_AVERAGE_TURN_ANGLE = [62, 50, 184, 194];

BrnAI::KF_AI_MAX_SPEED_MULTIPLIER = [63, 153, 153, 154];

BrnAI::KF_AI_MAX_BOOST_SPEED_MULTIPLIER = [63, 140, 204, 205];

BrnAI::KF_IN_FRONT_OF_PLAYER_DISTANCE = [66, 160, 0, 0];

BrnAI::KX_SECTION_FLAG_AI_INTERSTATE_EXIT = -128;

BrnProgression::KF_PLAYER_BOOST_THRESHOLD = [65, 160, 0, 0];

BrnProgression::KF_PLAYERSTAT_OVERDRIVE_EARNER = [67, 250, 0, 0];

BrnProgression::KF_PLAYERSTAT_DRIVETHROUGH_TIMER_MAX = [66, 112, 0, 0];

BrnProgression::KF_PLAYER_STAT_TEMPORARY_ACCELERATOR = [65, 32, 0, 0];

BrnNetwork::KF_NETWORK_TIME_ACCURACY = [58, 218, 116, 14];

BrnNetwork::KF_NETWORK_DISTANCE_ACCURACY = [59, 163, 215, 10];

BrnStreetData::KI_INTERSTATE_EXIT_ROAD_INDEX = -2;

CgsNetwork::K_INVALID_PLAYER_ID = -1;

CgsNetwork::KU16_MAX_FRAMES = -2;

CgsNetwork::KU8_INVALID_GAME_ID = -1;

CgsNetwork::KI8_INVALID_TYPE = -1;

CgsNetwork::KU16_INVALID_FRAME = -1;

CgsNetwork::KU16_HALF_OF_FRAMES = -32768;

CgsNetwork::KU_INVALID_FRAME = -1;

CgsNetwork::KU_HALF_OF_FRAMES = -2147483648;

CgsNetwork::KI_MAX_UINT32 = -1;

CgsNetwork::KI_MIN_INT32 = -2147483648;

CgsNetwork::KI_MIN_PLAYER_ID = -1;

CgsNetwork::KF_DEFAULT_MIN_TIME = [0, 0, 0, 0];

CgsNetwork::KF_DEFAULT_MAX_TIME = [72, 125, 32, 0];

CgsNetwork::KF_DEFAULT_MAX_TIME_ERROR = [60, 163, 215, 10];

BrnDirector::KE_DIRECTOR_PERFMON_PAGE = 13;

BrnDirector::Camera::KF_SUPER_SLO_MO_FACTOR = [61, 8, 136, 137];

BrnDirector::Camera::KF_SLO_MO_FACTOR = [62, 146, 73, 37];

CgsSound::Playback::K_MIN_RESERVED_IDENT = -16;

CgsSound::Playback::K_INIT_SND9_SUBMIX_IDENT = -16;

BrnTraffic::KU_INVALID_SECTION = -1;

BrnTraffic::KU_INVALID_HULL = -1;

BrnTraffic::KU_INVALID_NEIGHBOUR = -1;

BrnTraffic::KU_INVALID_STOPLINE = -1;

BrnTraffic::KU_INVALID_FLOWTYPE = -1;

BrnTraffic::KU_INVALID_KILLZONEREGION = -1;

BrnTraffic::KU_INVALID_TRAFFIC_LIGHT_TRIGGER = -1;

BrnTraffic::KF_TRAFFIC_LIGHT_MAX_TIME_IN_STATE = [69, 204, 204, 0];

BrnTraffic::KU_INVALID_HULL_RUNTIME = -1;

BrnTraffic::KU_INVALID_UPDATE_FRAME = -1;

BrnTraffic::KF_UPDATE_TIME_DELTA_NO_SLOWMO = [61, 204, 204, 205];

BrnTraffic::KF_SECONDS_PER_MINUTE = [66, 112, 0, 0];

BrnTraffic::KF_HULL_CHANGE_PREDICTION_TIME = [64, 160, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_FEELERS_ANGLE = [62, 134, 10, 146];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_MAX = [64, 128, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_IMPACT_TIME_SCORE_FACTOR = [65, 32, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_PASSING_MAX_DISTANCE = [65, 32, 0, 0];

BrnTraffic::KF_TRAFFIC_AVOIDANCE_HEIGHT_SKIP = [64, 64, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_MAX_RADIUS = [66, 112, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_SCORE_NEEDS_ACTION = [66, 130, 0, 0];

BrnTraffic::KF_JUNCTION_FUP_ONLINE_SCORE_NEEDS_ACTION = [67, 72, 0, 0];

BrnTraffic::KF_DENSITY_BASE_SCALE = [63, 128, 0, 0];

BrnTraffic::KF_VEHICLE_BBOX_FATNESS = [62, 225, 71, 174];

BrnTraffic::KF_VEHICLE_COLLIDABILITY_RADIUS = [65, 160, 0, 0];

BrnTraffic::KF_VEHICLE_PARTIAL_UPDATE_DISTANCE = [67, 22, 0, 0];

BrnTraffic::KF_GENERATOR_PHASE_SHIFT = [63, 51, 51, 51];

BrnTraffic::KF_MIN_GENERATION_FACTOR = [63, 76, 204, 205];

BrnTraffic::KF_MAX_GENERATION_FACTOR = [63, 153, 153, 154];

BrnTraffic::KF_MAX_DIST_ACROSS_LANE_lhs = [63, 51, 51, 51];

BrnTraffic::KF_PARAM_END_OF_SECTION_APPROACH_DIST = [66, 160, 0, 0];

BrnTraffic::KF_PARAM_AVOIDANCE_BIAS = [64, 64, 0, 0];

BrnTraffic::KF_PARAM_SPACE_FACTOR = [64, 64, 0, 0];

BrnTraffic::KF_PARAM_NEXT_PARAM_TIME_THRESHOLD = [64, 0, 0, 0];

BrnTraffic::KF_PARAM_MIN_NEXT_PARAM_DIST_THRESHOLD = [65, 200, 0, 0];

BrnTraffic::KF_PARAM_MAX_ACCEL_FORCE = [62, 117, 194, 143];

BrnTraffic::KF_PARAM_MIN_MERGE_DISTANCE = [65, 96, 0, 0];

BrnTraffic::KF_PARAM_MIN_SPAWN_DISTANCE = [65, 160, 0, 0];

BrnTraffic::KF_PARAM_MIN_SPEED_FOR_STOPPED_AT_LIGHTS = [64, 160, 0, 0];

BrnTraffic::KF_PARAM_MIN_DIST_AHEAD_FOR_LANE_CHANGE = [65, 112, 0, 0];

BrnTraffic::KF_PARAM_MIN_DIST_BEHIND_FOR_LANE_CHANGE = [65, 160, 0, 0];

BrnTraffic::KF_PARAM_IMPATIENCE_PROB = [62, 153, 153, 154];

BrnTraffic::KF_PARAM_MIN_SWERVE_FOR_ANNOYANCE = [63, 0, 0, 0];

BrnTraffic::KF_PARAM_FLASH_LIGHTS_PROB = [63, 25, 153, 154];

BrnTraffic::KF_PARAM_BEEP_HORN_PROB = [63, 76, 204, 205];

BrnTraffic::KF_PARAM_BEEP_HORN_PROB_PANICKING = [63, 51, 51, 51];

BrnTraffic::KF_SPONTANEOUS_CONE_DEPTH_lhs = [65, 240, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_HALF_ANGLE_lhs = [65, 32, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_DEPTH_lhs = [66, 72, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_HALF_ANGLE_lhs = [65, 160, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_SHOWTIME_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_DEPTH_lhs = [66, 72, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_HALF_ANGLE_lhs = [64, 32, 0, 0];

BrnTraffic::KF_SPONTANEOUS_CONE_IDLEPLAYER_SQUISHING_SCALE_lhs = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_BRAKING_FACTOR = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_OPTIMAL_DISTANCE_FROM_TARGET_lhs = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_SPEED_BALANCE_FACTOR_lhs = [64, 0, 0, 0];

BrnTraffic::KF_VEHICLE_START_DISTANCE_FROM_TARGET = [64, 64, 0, 0];

BrnTraffic::KF_VEHICLE_SLOW_FOR_PARAM_SPEED_FACTOR_lhs = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_STEERING_DELTA_lhs = [60, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_STEERING_ANGLE_lhs = [65, 200, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_SWERVE_COS_ANGLE = [63, 0, 0, 0];

BrnTraffic::KF_VEHICLE_DIRECTION_DAMPING_FACTOR_lhs = [64, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SWERVE_DISTANCE = [66, 112, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_SPONTANEOUS_CRASH_SPEED = [65, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SIDEWAYS_SWERVE_DISTANCE = [64, 192, 0, 0];

BrnTraffic::KF_VEHICLE_SAME_WAY_SWERVE_FACTOR = [62, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_INDICATOR_FLASH_TIME = [62, 76, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_INDICATOR_FLASH_TIME = [62, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MIN_HEADLIGHT_FLASH_TIME = [62, 25, 153, 154];

BrnTraffic::KF_VEHICLE_MAX_HEADLIGHT_FLASH_TIME = [62, 204, 204, 205];

BrnTraffic::KI_VEHICLE_MIN_BRAKELIGHT_DEBOUNCE = -6;

BrnTraffic::KF_VEHICLE_REACT_TO_PLAYER_CONE_BACK_BIAS = [64, 192, 0, 0];

BrnTraffic::KF_VEHICLE_REACT_TO_PLAYER_CONE_LENGTH = [66, 152, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_REACT_TO_PLAYER_SPEED = [64, 128, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DISTANCE_TO_MOVE_lhs = [62, 204, 204, 205];

BrnTraffic::KF_VEHICLE_STOPLINE_SIDE_SPACE_lhs = [63, 102, 102, 102];

BrnTraffic::KF_VEHICLE_STOPLINE_SIDE_VARIATION_lhs = [62, 128, 0, 0];

BrnTraffic::KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT = [65, 112, 0, 0];

BrnTraffic::KF_VEHICLE_SYMP_MIN_DIST_FOR_FLIPOUT_SHOWTIME = [66, 32, 0, 0];

BrnTraffic::KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_SCALE = [61, 143, 92, 41];

BrnTraffic::KF_VEHICLE_NORMAL_FLIPOUT_AIRRAM_DECAY = [63, 51, 51, 51];

BrnTraffic::KF_VEHICLE_PHYSICAL_STEERING_SCALE = [63, 128, 0, 0];

BrnTraffic::KF_VEHICLE_PHYSICAL_STEERING_IF_RISK = [63, 166, 102, 102];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_SLAM_RECOVERY = [63, 192, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_COS_ANGLE_FOR_SLAM_RECOVERY = [63, 122, 225, 72];

BrnTraffic::KF_VEHICLE_MAX_DIST_TO_RECOVER_FROM_SLAM = [65, 240, 0, 0];

BrnTraffic::KF_VEHICLE_FLIPOUT_AND_SPINOUT_AIRRAMMAG_SCALE = [63, 25, 153, 154];

BrnTraffic::KF_VEHICLE_TIME_TO_STEER_FROM_SLAM = [64, 32, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_TIME_FOR_RECOVERY = [64, 160, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_CLEANUP = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_TIME_FOR_REINSERTION = [65, 112, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_DIST_FOR_REINSERTION = [65, 32, 0, 0];

BrnTraffic::KF_VEHICLE_ROLL_FACTOR_lhs = [189, 204, 204, 205];

BrnTraffic::KF_VEHICLE_ROLL_FILTER_lhs = [67, 180, 0, 0];

BrnTraffic::KF_VEHICLE_PITCH_RECIP_MAX_DECEL_lhs = [62, 76, 204, 205];

BrnTraffic::KF_VEHICLE_PITCH_SCALE_lhs = [61, 76, 204, 205];

BrnTraffic::KF_VEHICLE_PITCH_DAMPING_FACTOR_lhs = [63, 115, 51, 51];

BrnTraffic::KF_APPROX_LANE_WIDTH_lhs = [64, 144, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_DIST_FROM_LANE_CENTRE_lhs = [63, 166, 102, 102];

BrnTraffic::KF_RIVAL_MAX_DIST_TO_LANE = [65, 112, 0, 0];

BrnTraffic::KF_RIVAL_MIN_COS_ANGLE_TO_LANE_DIR = [63, 76, 204, 205];

BrnTraffic::KF_VEHICLE_TIME_FOR_NEW_SWERVE = [63, 0, 0, 0];

BrnTraffic::KF_VEHICLE_MIN_CHANGE_SWERVE_DIRECTION_TIME = [61, 204, 204, 205];

BrnTraffic::KF_VEHICLE_MAX_CHANGE_SWERVE_DIRECTION_TIME = [63, 128, 0, 0];

BrnTraffic::KF_BULB_WARMTH_DELTA_PER_SECOND = [69, 156, 64, 0];

BrnTraffic::KF_STOP_LINE_REACTION_DISTANCE = [66, 32, 0, 0];

BrnTraffic::KF_LANE_CHANGE_DICE_ROLL_SCALE = [64, 160, 0, 0];

BrnTraffic::KF_RENDER_CULL_DISTANCE = [67, 122, 0, 0];

BrnTraffic::KF_RENDER_CULL_CORONA_DISTANCE = [67, 250, 0, 0];

BrnTraffic::KF_CORONA_SCALE_DIST_AT_ONE = [65, 0, 0, 0];

BrnTraffic::KF_CORONA_SCALE_DIST_AT_TWO = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_MAX_SWERVE_DISTANCE_SQ = [69, 97, 0, 0];

BrnTraffic::KF_RENDER_CULL_DISTANCE_SQ = [71, 116, 36, 0];

BrnTraffic::KF_RENDER_CULL_CORONA_DISTANCE_SQ = [72, 116, 36, 0];

BrnTraffic::KF_VEHICLE_PARTIAL_UPDATE_DISTANCE_SQ = [70, 175, 200, 0];

BrnTraffic::KF_VEHICLE_AVOIDABILITY_RADIUS = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_DEFAULT = [63, 0, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_THRESHOLD = [63, 128, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_DEFAULT = [63, 76, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_EVENTS = [62, 76, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_EVENTS = [63, 192, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_TRAFFIC = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_RACECAR = [66, 72, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FOR_PLAYER = [66, 200, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_RANGE_MIN = [65, 32, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_RANGE_MAX = [66, 200, 0, 0];

BrnTraffic::KF_CRASHSLIDER_HOLLYWOOD_ACTION_THRESHOLD = [60, 35, 215, 10];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME = [61, 204, 204, 205];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME = [63, 192, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_DECAY_SHOWTIME_SPIKE = [0, 0, 0, 0];

BrnTraffic::KF_CRASHSLIDER_CRASH_SCORE_FACTOR_SHOWTIME_SPIKE = [65, 32, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MIN = [65, 240, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_NEXT_SPIKE_MAX = [66, 52, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_TIME_AFTER_SPIKE_RELEVEL = [64, 160, 0, 0];

BrnTraffic::KF_CRASHSLIDER_SHOWTIME_SPIKE_AFTER_MISBOUNCE_TIME = [64, 64, 0, 0];

BrnTraffic::KF_VEHICLE_NOT_DRIVING_SO_SHOULD_GET_CLEARED_TIME = [65, 32, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_MIN_THRESHOLD_TO_WHACK = [63, 128, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_WHACK_HIM_CHANCE = [64, 160, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_WHACK_HIM_TIMER = [64, 160, 0, 0];

BrnTraffic::KF_PLAYER_IDLE_CLEAR_TRAFFIC_TIME = [65, 240, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS = [67, 22, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_HEIGHT = [68, 122, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_RADIUS_IN_DRIVE_THRU = [67, 122, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP = [66, 180, 0, 0];

BrnTraffic::KF_VEHICLE_KILL_NEAR_PLAYER_EXIT_PP_MIN_DISTSQ = [70, 28, 64, 0];

BrnTraffic::KE_TRAFFIC_PERFMON_PAGE = 2;

BrnPhysics::RWPhysicsTypeData::K_DEFAULT_JOINT_SWING_DISPLACEMENT_LIMIT = [68, 122, 0, 0];

BrnPhysics::RWPhysicsTypeData::K_DEFAULT_JOINT_TWIST_DISPLACEMENT_LIMIT = [68, 122, 0, 0];

BrnPhysics::Props::KI_PROP_FLAG_MASK = -67108864;

BrnPhysics::Props::KI_PROP_ANIM_MINSPEED = [192, 201, 22, 135];

BrnPhysics::Props::KI_PROP_ANIM_MAXSPEED = [64, 201, 22, 135];

BrnPhysics::Props::KI_PROP_MAX_ANGULARCONSTRAINT = [64, 201, 22, 135];

BrnPhysics::Props::KI_PROP_MIN_ANGULARCONSTRAINT = [0, 0, 0, 0];

BrnPhysics::Props::knZAngularRotation = -128;

BrnPhysics::Props::knNoAngularRotation = -64;

BrnPhysics::Props::knAngularRotationBits = -64;

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MIN = [70, 28, 64, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_MAX = [71, 67, 80, 0];

BrnPhysics::Deformation::KF_JOINT_STRESS_LIMIT_RANGE = [71, 28, 64, 0];

BrnPhysics::Deformation::KE_PMP_DEFORMATION = 15;

BrnPhysics::Vehicle::krMPS2MPH = [64, 15, 41, 247];

BrnPhysics::Vehicle::krMPH2MPS = [62, 228, 226, 109];

BrnPhysics::Vehicle::kfVehicleDefaultAngularDrag = [55, 39, 197, 172];

BrnPhysics::Vehicle::kfVehicleDefaultLinearDrag = [55, 39, 197, 172];

BrnPhysics::Vehicle::kfVehicleDefaultMaxLinearDisplacement = [68, 250, 0, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxAngularDisplacement = [63, 0, 0, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxLinearVelocity = [71, 234, 96, 0];

BrnPhysics::Vehicle::kfVehicleDefaultMaxAngularVelocity = [65, 240, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultAngularDrag = [0, 0, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultLinearDrag = [0, 0, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultMaxLinearDisplacement = [68, 250, 0, 0];

BrnPhysics::Vehicle::kfTrafficVehicleDefaultMaxAngularDisplacement = [64, 160, 0, 0];

BrnPhysics::Vehicle::KF_STICK_AFTERTOUCH_MODIFIER = [62, 128, 0, 0];

BrnPhysics::Vehicle::KF_STUCK_IN_COLLISION_TEST_INTERVAL = [64, 160, 0, 0];

BrnPhysics::Vehicle::KF_AIR_RAM_SCALE_FACTOR = [66, 72, 0, 0];

BrnPhysics::Vehicle::KF_SLAM_MAGNITUDE = [65, 200, 0, 0];

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

Attrib::key_default = -2887443745685561006;

Attrib::h64_default = -2887443745685561006;

Attrib::Hash::junkyardlocators::LocatorData = -570084516953988955;

Attrib::Hash::sparkeffect::Bounciness = -3817220592226588377;

Attrib::Hash::sparkeffect::DragDuration = -5041530831918900097;

Attrib::Hash::sparkeffect::MotionBlurTime = -4706437283823970344;

Attrib::Hash::sparkeffect::NumParticlesPerImpactMin = -372394079317485815;

Attrib::Hash::sparkeffect::SparkRandomColour1 = -5500759238284303219;

Attrib::Hash::sparkeffect::SparkRandomColour2 = -377198750846029218;

Attrib::Hash::sparkeffect::SpawnLineLengthMax = -1484334559578632962;

Attrib::Hash::sparkeffect::T1_VelocityInheritanceMax = -1736401039282896638;

Attrib::Hash::debrisparams::Burst_CameraDirectedBurstProbability = -4911020043565991649;

Attrib::Hash::debrisparams::Burst_EmissionAngleVariance = -7672718436091033875;

Attrib::Hash::debrisparams::Burst_MaximumPercentage = -4045720663554568892;

Attrib::Hash::debrisparams::Burst_MidPointEmissionSpeed = -2388339733728337238;

Attrib::Hash::debrisparams::Burst_MidPointPercentage = -6093098408262815203;

Attrib::Hash::debrisparams::Burst_NumParticles_Coloured = -1120747857703290747;

Attrib::Hash::debrisparams::Burst_NumParticles_HighDetail = -8797829737603133935;

Attrib::Hash::debrisparams::Burst_NumParticles_Shiny = -2097299715269661146;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_Coloured = -3250550009145791469;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_Dark = -1303149371335787807;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_HighDetail = -2112811013008378960;

Attrib::Hash::debrisparams::Burst_ParticleSizeMax_Shiny = -7404559354884103995;

Attrib::Hash::debrisparams::Burst_ParticleSizeMin_Coloured = -6589561312631380998;

Attrib::Hash::debrisparams::Burst_ParticleSizeMin_HighDetail = -1036632279311570142;

Attrib::Hash::debrisparams::Burst_VelocityMin = -6514586815391291054;

Attrib::Hash::debrisparams::EmitterHalfExtents = -7728054833146959017;

Attrib::Hash::debrisparams::Trail_EmissionThreshold_Dark = -6557622440413492218;

Attrib::Hash::debrisparams::Trail_EmissionThreshold_GlassChunk = -7044734835905075578;

Attrib::Hash::debrisparams::Trail_EmissionThreshold_HighDetail = -4321421017727861513;

Attrib::Hash::debrisparams::Trail_MasterEmissionRate_HighDetail = -1066284894708561365;

Attrib::Hash::debrisparams::Trail_MasterEmissionRate_Shiny = -3177573945560636980;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_Dark = -3104049988774297466;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_GlassChunk = -1130302925735451789;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_HighDetail = -2181416400992529396;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_Shiny = -3160118430803200590;

Attrib::Hash::debrisparams::Trail_ParticleSizeMax_Smoke = -50646744464768722;

Attrib::Hash::debrisparams::Trail_ParticleSizeMin_GlassChunk = -1113091167386479757;

Attrib::Hash::debrisparams::Trail_ParticleSizeMin_HighDetail = -3637246564704219172;

Attrib::Hash::debrisparams::Trail_VelocityMin = -2399476863096052342;

Attrib::Hash::nativeparticleparams::DragDuration = -5041530831918900097;

Attrib::Hash::nativeparticleparams::EndColour = -8627483912619234383;

Attrib::Hash::nativeparticleparams::EndSize = -8619726482830642788;

Attrib::Hash::nativeparticleparams::FarClip = -5692632252225236236;

Attrib::Hash::nativeparticleparams::LifeTime = -1608884447590013666;

Attrib::Hash::nativeparticleparams::LightingMin = -3106857269163792920;

Attrib::Hash::nativeparticleparams::MidColour = -6822591414946377124;

Attrib::Hash::nativeparticleparams::MidSize = -926488105834939848;

Attrib::Hash::nativeparticleparams::StartColour = -4735521137697763443;

Attrib::Hash::cameradefaults::ImpactShakeDecayRate = -7687775437294225719;

Attrib::Hash::cameradefaults::ImpactShakeScale = -842583479824379615;

Attrib::Hash::cameradefaults::ImpactShakeType = -5456835001829100036;

Attrib::Hash::cameradefaults::SpeedShakeThreshold = -2676194790771603092;

Attrib::Hash::cameradefaults::SpeedShakeType = -7084916540873237413;

Attrib::Hash::iceanim::Guid = -7097409704044230467;

Attrib::Hash::aftertouchcam::MaxDistance = -8557505899279475338;

Attrib::Hash::aftertouchcam::MinHeight = -4927329763252819482;

Attrib::Hash::aftertouchcam::Pitch = -4570886707007131269;

Attrib::Hash::cameraexternalbehaviour::BoostFieldOfView = -3982979552416833250;

Attrib::Hash::cameraexternalbehaviour::PivotLength = -5488398596126602666;

Attrib::Hash::cameraexternalbehaviour::TiltCameraScale = -2098857104130072476;

Attrib::Hash::cameraexternalbehaviour::ZAndTiltCutoffSpeedMPH = -4276768861718081255;

Attrib::Hash::camerabumperbehaviour::AccelerationResponse = -4777123151109968498;

Attrib::Hash::camerabumperbehaviour::BodyPitchScale = -6812158392904343490;

Attrib::Hash::camerabumperbehaviour::BoostFieldOfView = -3982979552416833250;

Attrib::Hash::camerabumperbehaviour::RollSpring = -2603261772359457364;

Attrib::Hash::camerabumperbehaviour::ZOffset = -2031833194172202669;

Attrib::Hash::physicsvehicledriftattribs::DriftAngularDamping = -7987274848054600901;

Attrib::Hash::physicsvehicledriftattribs::DriftMaxAngle = -2994767941176318032;

Attrib::Hash::physicsvehicledriftattribs::DriftSidewaysDamping = -2483459419315854033;

Attrib::Hash::physicsvehicledriftattribs::ForcedDriftStartSlip = -6912247002206191947;

Attrib::Hash::physicsvehicledriftattribs::ForcedDriftTimeToReachBaseSlip = -6629571209366667655;

Attrib::Hash::physicsvehicledriftattribs::GasDriftScaleFactor = -4333709530778156113;

Attrib::Hash::physicsvehicledriftattribs::GripFromBrake = -2382352998964909567;

Attrib::Hash::physicsvehicledriftattribs::GripFromGasLetOff = -639186851837051004;

Attrib::Hash::physicsvehicledriftattribs::InitialDriftPushBaseInc = -1687458581941323946;

Attrib::Hash::physicsvehicledriftattribs::InitialDriftPushTime = -2635178875663518084;

Attrib::Hash::physicsvehicledriftattribs::NaturalDriftScaleDecay = -701798028399705032;

Attrib::Hash::physicsvehicledriftattribs::NaturalYawTorque = -30919134522791338;

Attrib::Hash::physicsvehicledriftattribs::NaturalYawTorqueCutOffAngle = -327284094809810262;

Attrib::Hash::physicsvehicledriftattribs::NeutralTimeToReduceDrift = -1265753866060659382;

Attrib::Hash::physicsvehicledriftattribs::SideForceDirftScaleCutOff = -3301564056552839641;

Attrib::Hash::physicsvehicledriftattribs::SideForceDriftAngleCutOff = -2437558699454416996;

Attrib::Hash::physicsvehicledriftattribs::SideForceDriftSpeedCutOff = -7527846554673069815;

Attrib::Hash::physicsvehicledriftattribs::SideForcePeakDriftAngle = -1859027027580878885;

Attrib::Hash::physicsvehicledriftattribs::TimeForNaturalDrift = -2192670478953321175;

Attrib::Hash::physicsvehiclebodyrollattribs::FactorOfWeightX = -8854577714803822838;

Attrib::Hash::physicsvehiclebodyrollattribs::FactorOfWeightZ = -2898700536974267796;

Attrib::Hash::physicsvehiclebodyrollattribs::PitchSpringDampening = -2769872210820837534;

Attrib::Hash::physicsvehiclebodyrollattribs::RollSpringDampening = -8279220931350705981;

Attrib::Hash::physicsvehiclebodyrollattribs::WeightTransferDecayZ = -8641409400008704383;

Attrib::Hash::physicsvehiclesuspensionattribs::InAirDamping = -4391887702944398535;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxPitchDampingOnLanding = -5239064295522386902;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxRollDampingOnLanding = -2189969058134543695;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxVertVelocityDampingOnLanding = -7578424394703509952;

Attrib::Hash::physicsvehiclesuspensionattribs::MaxYawDampingOnLanding = -9159666339184342346;

Attrib::Hash::physicsvehiclesteeringattribs::AiPidCoefficientDriftI = -2790084423631939863;

Attrib::Hash::physicsvehiclesteeringattribs::AiPidCoefficientP = -5300428111701324124;

Attrib::Hash::physicsvehiclesteeringattribs::SpeedForMaxAngle = -5882573263584155911;

Attrib::Hash::physicsvehiclesteeringattribs::SpeedForMinAngle = -703227396336610229;

Attrib::Hash::physicsvehiclesteeringattribs::StraightReactionBias = -153043821033732338;

Attrib::Hash::physicsvehicleengineattribs::Differential = -1187171424841002758;

Attrib::Hash::physicsvehicleengineattribs::EngineBraking = -7261967632121772986;

Attrib::Hash::physicsvehicleengineattribs::EngineLowEndTorqueFactor = -2588301351876699819;

Attrib::Hash::physicsvehicleengineattribs::FlyWheelInertia = -8061433635503997159;

Attrib::Hash::physicsvehicleengineattribs::GearRatios1 = -2125503289046983800;

Attrib::Hash::physicsvehicleengineattribs::GearRatios2 = -1019379010385919379;

Attrib::Hash::physicsvehicleengineattribs::GearUpRPMs1 = -8165513262891634271;

Attrib::Hash::physicsvehicleengineattribs::GearUpRPMs2 = -1326377965340261792;

Attrib::Hash::physicsvehicleengineattribs::MaxTorque = -4687445904566254869;

Attrib::Hash::physicsvehicleengineattribs::TorqueScales2 = -4818449724105158753;

Attrib::Hash::physicsvehicleengineattribs::TransmissionEfficiency = -2275951549147437131;

Attrib::Hash::physicsvehiclecollisionattribs::BodyBox = -7996561706975887698;

Attrib::Hash::physicsvehicleboostattribs::BlueBoostBase = -4153969524460304374;

Attrib::Hash::physicsvehicleboostattribs::BlueBoostKick = -6909139712711029827;

Attrib::Hash::physicsvehicleboostattribs::BlueMaxBoostSpeed = -2832201897230299495;

Attrib::Hash::physicsvehicleboostattribs::BoostBase = -1449587645724428634;

Attrib::Hash::physicsvehicleboostattribs::BoostKick = -7916157251067609346;

Attrib::Hash::physicsvehicleboostattribs::BoostKickHeightOffset = -7644159426826663967;

Attrib::Hash::physicsvehicleboostattribs::BoostKickMaxStartSpeed = -6769221666331370883;

Attrib::Hash::physicsvehicleboostattribs::BoostKickTime = -2762519771875884640;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleBaseAttribs = -3240169895484535073;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleBodyRollAttribs = -4714783353325512142;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleDriftAttribs = -1740125582048760770;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleEngineAttribs = -3611665628868408173;

Attrib::Hash::physicsvehiclehandling::PhysicsVehicleSteeringAttribs = -3941675927247818081;

Attrib::Hash::burnoutcarasset::CameraBumperBehaviourAsset = -2996460651824973746;

Attrib::Hash::burnoutcarasset::CarUnlockShot = -3361774045014665585;

Attrib::Hash::burnoutcarasset::DefaultWheel = -5763545711493309811;

Attrib::Hash::burnoutcarasset::EngineEntityKey = -8286362179805877589;

Attrib::Hash::burnoutcarasset::GameplayAsset = -4159014215320274250;

Attrib::Hash::burnoutcarasset::GraphicsAsset = -2452633230673053972;

Attrib::Hash::burnoutcarasset::MasterSceneMayaBinaryFile = -4033406791020503385;

Attrib::Hash::burnoutcarasset::SoundEngineAsset = -3616434373283268524;

Attrib::Hash::burnoutcarasset::SoundExhaustAsset = -6601183205448776399;

Attrib::Hash::physicsvehiclebaseattribs::AngularDrag = -2587998968637529485;

Attrib::Hash::physicsvehiclebaseattribs::BrakeScaleToFactor = -6724323949230824050;

Attrib::Hash::physicsvehiclebaseattribs::DownForceZOffset = -7435943572713341390;

Attrib::Hash::physicsvehiclebaseattribs::DriveTimeDeformLimitNegY = -3280670874417285740;

Attrib::Hash::physicsvehiclebaseattribs::DriveTimeDeformLimitPosZ = -1666416025769953155;

Attrib::Hash::physicsvehiclebaseattribs::DrivingMass = -3787790934024483857;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurveFloorSlipRatio = -1630393006643118008;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurvePeakCoefficient = -5067077354339468201;

Attrib::Hash::physicsvehiclebaseattribs::FrontLongGripCurvePeakSlipRatio = -4731126951183549001;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireAdhesiveLimit = -1286355289157071958;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireDynamicFrictionCoefficient = -6349451596478070934;

Attrib::Hash::physicsvehiclebaseattribs::FrontTireLongForceBias = -1377722699248955594;

Attrib::Hash::physicsvehiclebaseattribs::FrontWheelMass = -6833821662839661425;

Attrib::Hash::physicsvehiclebaseattribs::HighSpeedAngularDamping = -8330303592681147153;

Attrib::Hash::physicsvehiclebaseattribs::LinearDrag = -8487842249909718459;

Attrib::Hash::physicsvehiclebaseattribs::LockBrakeScale = -4714331935212091080;

Attrib::Hash::physicsvehiclebaseattribs::MagicBrakeFactorStraightLine = -2858441074664930156;

Attrib::Hash::physicsvehiclebaseattribs::MagicBrakeFactorTurning = -897565922227798600;

Attrib::Hash::physicsvehiclebaseattribs::PitchDampingOnTakeOff = -5137150473961999634;

Attrib::Hash::physicsvehiclebaseattribs::PowerToFront = -8388318914847005089;

Attrib::Hash::physicsvehiclebaseattribs::RearLatGripCurvePeakCoefficient = -753131893419114293;

Attrib::Hash::physicsvehiclebaseattribs::RearLatGripCurvePeakSlipRatio = -7653661541150633661;

Attrib::Hash::physicsvehiclebaseattribs::RearLongGripCurvePeakCoefficient = -412225798706036160;

Attrib::Hash::physicsvehiclebaseattribs::RearTireAdhesiveLimit = -9041112529150658;

Attrib::Hash::physicsvehiclebaseattribs::RearTireDynamicFrictionCoefficient = -5724009369781865567;

Attrib::Hash::physicsvehiclebaseattribs::RearTireLongForceBias = -8694020640479969529;

Attrib::Hash::physicsvehiclebaseattribs::RearWheelMass = -1977907534454313347;

Attrib::Hash::physicsvehiclebaseattribs::SurfaceFrontGripFactor = -179166364723212449;

Attrib::Hash::physicsvehiclebaseattribs::SurfaceRoughnessFactor = -2535698590537951711;

Attrib::Hash::physicsvehiclebaseattribs::TractionLineLength = -3299690291498919306;

Attrib::Hash::physicsvehiclebaseattribs::YawDampingOnTakeOff = -1675471727477182158;

Attrib::ClassName::physicsvehiclebaseattribs = -604515486933319770;

Attrib::ClassName::physicsvehiclehandling = -7610765364513722643;

Attrib::ClassName::physicsvehicleboostattribs = -1522656162225671394;

Attrib::ClassName::physicsvehiclecollisionattribs = -2335842357891624052;

Attrib::ClassName::physicsvehicleengineattribs = -553898650669114478;

Attrib::ClassName::camerabumperbehaviour = -872580195161256039;

Attrib::ClassName::cameraexternalbehaviour = -1590435079418921852;

Attrib::ClassName::sparkeffect = -3821321658093367652;

BrnWorld::KU_COLLISION_MASK_TOP_BIT = -32768;

BrnWorld::KI_INVALID_OPPONENT = -1;

BrnWorld::KI_INVALID_RIVAL = -1;

BrnWorld::KF_AI_INACTIVE_DISTANCE_BIAS = [65, 240, 0, 0];

BrnWorld::KF_INVALID_DISTANCE = [127, 127, 255, 255];

BrnWorld::KF_RACE_CAR_POST_RESET_INVULNERABLE_TIME = [64, 0, 0, 0];

BrnWorld::KI_INVALID_CAR_COLOUR = -1;

BrnWorld::KI_INVALID_CAR_COLOUR_PALETTE = -1;

BrnWorld::KE_RACEECAR_PERFMON_PAGE = 12;

BrnWorld::KF_MIN_SPEED_FOR_AIR_MPH = [64, 0, 0, 0];

BrnWorld::KF_POWER_PARK_NEARBY_RADIUS = [65, 112, 0, 0];

CgsSceneManager::KF_DEFAULT_MIN_PADDING = [61, 204, 204, 205];

CgsSceneManager::KF_DEFAULT_MAX_PADDING = [64, 0, 0, 0];

CgsSceneManager::KU16_INVALID_ENTITY_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INSTANCE_INDEX = -1;

CgsSceneManager::KI_INVALID_VOLUME_INDEX = -1;

CgsSceneManager::KU_SPATIAL_PARTITION_INVALID_ID = -1;

CgsInput::KF_BUTTONDOWNTHRESHOLD = [61, 204, 204, 205];

CgsUnicode::KU_TRAILING_BYTE_MASK = -64;

CgsUnicode::KU_TRAILING_BYTE = -128;

CgsUnicode::KU_SINGLE_BYTE_CHAR_MASK = -128;

CgsUnicode::KU_TWO_BYTE_CHAR_MASK = -32;

CgsUnicode::KU_TWO_BYTE_CHAR = -64;

CgsUnicode::KU_THREE_BYTE_CHAR_MASK = -16;

CgsUnicode::KU_THREE_BYTE_CHAR = -32;

CgsUnicode::KU_FOUR_BYTE_CHAR_MASK = -8;

CgsUnicode::KU_FOUR_BYTE_CHAR = -16;

CgsFileSystem::KU_INVALID_FILE_ID = -1;

BrnEffects::SKID_FACTOR_THRESHOLD = [62, 153, 153, 154];

CgsGraphics::DefaultValues::mkDefault_float_t = [0, 0, 0, 0];

CgsGraphics::DefaultValues::mkDefault_double_t = [0, 0, 0, 0, 0, 0, 0, 0];

CgsContainers::kxDictFlag_DuplicateDataReference = -2147483648;

CgsContainers::KI_DICTIONARY_INVALID_KEY = -1;

BrnParticle::kfNumberOfSecondsInTenYears = [77, 150, 96, 24];

renderengine::PS3PIXELFORMAT_REMAP_MASK = -32768;

renderengine::PS3PIXELFORMAT_REMAPORDER_MASK = -2147483648;

renderengine::PS3VERTEXTYPE_NA = -1;

CgsDev::PI = [64, 73, 15, 219];

CgsDev::KC_DEBUG_CHARACTER_SQUARE = -128;

CgsDev::KC_DEBUG_CHARACTER_CROSS = -127;

CgsDev::KC_DEBUG_CHARACTER_CIRCLE = -126;

CgsDev::KC_DEBUG_CHARACTER_UP = -125;

CgsDev::KC_DEBUG_CHARACTER_DOWN = -124;

CgsDev::KC_DEBUG_CHARACTER_LEFT = -123;

CgsDev::KC_DEBUG_CHARACTER_RIGHT = -122;

CgsDev::KC_DEBUG_CHARACTER_DEBUG = -121;

CgsDev::WarningSystem::Discipline::ALL = -1;

CgsDev::WarningSystem::Discipline::SOUND_DESIGN = -2147483648;

CgsDev::WarningSystem::Discipline::SOUND_ALL = -2147483648;

CgsDev::Message::ALL = -1;

EA::Thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

EA::Thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

EA::Thread::kThreadPriorityUnknown = -2147483648;

EA::Thread::kThreadPriorityMin = -128;

EA::Thread::kProcessorDefault = -1;

EA::Thread::kProcessorAny = -2;

rw::audio::core::PRIORITY_PERMANENT = [66, 200, 0, 0];

rw::audio::core::PI = [64, 73, 15, 219];

rw::audio::core::CPU_CLOCK_MULTIPLIER = [66, 32, 0, 0];

rw::audio::core::PROCESSINGSTAGE_MASTERINGVOICE = -1;

rw::audio::core::DECIBEL_MIN = [196, 122, 0, 0];

rw::audio::core::LINEARGAIN_MIN = [0, 0, 0, 0];

rw::audio::core::CENTS_MIN = [199, 195, 80, 0];

rw::audio::core::LINEARPITCH_MIN = [21, 141, 145, 46];

rw::audio::core::PITCHLINEARTOCENTSCONST = [69, 121, 37, 5];

rw::audio::core::CODAERR_NOT_READY = -1;

rw::audio::core::CODAERR_UNSUPPORTED = -2;

rw::audio::core::EAXMA_HEADER_BLOCKSIZE_BITMASK = -4;

rw::datacontainer::DEFAULTBATCHSIZE = -2147483648;

rw::math::fpu::TOP_BIT32 = -2147483648;

rw::math::fpu::NOT_TOP_BIT32 = 2147483647;

rw::math::fpu::TOP_BIT64 = -9223372036854775808;

rw::math::fpu::MIN_INT32 = -2147483648;

rw::math::fpu::MIN_FLOAT = [0, 128, 0, 0];

rw::math::fpu::MAX_FLOAT = [127, 127, 255, 255];

rw::math::fpu::SMALL_FLOAT = [55, 128, 0, 0];

rw::math::fpu::DEGREES_TO_RADIANS = [60, 142, 250, 53];

rw::math::fpu::RADIANS_TO_DEGREES = [66, 101, 46, 225];

rw::math::fpu::E = [64, 45, 248, 84];

rw::math::fpu::PI = [64, 73, 15, 219];

rw::math::fpu::TWO_PI = [64, 201, 15, 219];

rw::math::fpu::HALF_PI = [63, 201, 15, 219];

rw::math::fpu::QUARTER_PI = [63, 73, 15, 219];

rw::math::fpu::SQRT_PI = [63, 226, 223, 197];

rw::math::fpu::INV_PI = [62, 162, 249, 131];

rw::math::fpu::SQRT_2 = [63, 181, 4, 243];

rw::math::fpu::SQRT_HALF = [63, 53, 4, 243];

rw::math::fpu::SQRT_3 = [63, 221, 179, 215];

rw::math::fpu::ZERO_FLOAT = [0, 0, 0, 0];

rw::math::fpu::VECTOR_MIN_SLERP_ANGLE = [61, 178, 184, 195];

rw::math::fpu::MATRIX_MIN_SLERP_ANGLE = [61, 14, 250, 53];

rw::math::fpu::QUATERNION_SLERP_DOT_TOLERANCE = [63, 127, 190, 119];

rw::math::fpu::MINIMUM_RECIPROCAL = [0, 32, 0, 0];

rw::math::fpu::ONE_MINUS_EPSILON = [63, 127, 255, 254];

rw::math::fpu::TOLERANCE = [58, 131, 18, 111];

rw::collision::krGPFeatureSimplificationThreshold = [61, 76, 204, 205];

rw::collision::krGPMinimumAllowedClippingAngle = [58, 131, 18, 111];

rw::core::thread::kTimeoutImmediate = [0, 0, 0, 0, 0, 0, 0, 0];

rw::core::thread::kTimeoutNone = [65, 239, 255, 255, 255, 224, 0, 0];

rw::core::thread::kThreadPriorityUnknown = -2147483648;

rw::core::thread::kThreadPriorityMin = -128;

rw::core::thread::kProcessorDefault = -1;

rw::core::thread::kProcessorAny = -2;


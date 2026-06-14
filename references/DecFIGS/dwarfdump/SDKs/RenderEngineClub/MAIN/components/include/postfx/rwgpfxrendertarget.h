// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// BrnEffectsData.h:40
		namespace postfx {
			// Declaration
			struct Target {
				// rwgpfxrendertarget.h:38
				struct Parameters {
				private:
					// rwgpfxrendertarget.h:40
					rw::IResourceAllocator * m_pAllocator;

					// rwgpfxrendertarget.h:43
					uint32_t m_u32Width;

					// rwgpfxrendertarget.h:44
					uint32_t m_u32Height;

					// rwgpfxrendertarget.h:45
					uint32_t m_u32Pitch;

					// rwgpfxrendertarget.h:48
					renderengine::PixelFormat m_BufferFormat;

					// rwgpfxrendertarget.h:49
					renderengine::PixelFormat m_TextureFormat;

					// rwgpfxrendertarget.h:52
					renderengine::Texture::Type m_TextureType;

					// rwgpfxrendertarget.h:55
					uint32_t m_u32MultiSampleFormat;

					// rwgpfxrendertarget.h:57
					renderengine::SamplerState::FilterMode m_FilterMode;

					// rwgpfxrendertarget.h:59
					bool m_bUseStencil;

					// rwgpfxrendertarget.h:62
					int32_t m_n32BaseEDRAM;

					// rwgpfxrendertarget.h:64
					int32_t m_n32HierarchicalZAddress;

					// rwgpfxrendertarget.h:66
					int32_t m_n32CompressionBase;

					// rwgpfxrendertarget.h:69
					bool m_bSystemMemory;

					// rwgpfxrendertarget.h:72
					void * m_pBufferAddress;

					// rwgpfxrendertarget.h:74
					int8_t m_tileIndex;

					// rwgpfxrendertarget.h:75
					int8_t m_zCullIndex;

					// rwgpfxrendertarget.h:76
					int32_t m_zCullAddress;

					// rwgpfxrendertarget.h:79
					uint8_t m_numSections;

				public:
					// rwgpfxrendertarget.h:83
					Parameters();

					// rwgpfxrendertarget.h:114
					void ShareMemoryWithTarget(const rw::graphics::postfx::Target *, void *);

					// rwgpfxrendertarget.h:126
					void SetAllocator(rw::IResourceAllocator *);

					// rwgpfxrendertarget.h:133
					void SetWidth(uint32_t);

					// rwgpfxrendertarget.h:140
					void SetHeight(uint32_t);

					// rwgpfxrendertarget.h:147
					void SetPitch(uint32_t);

					// rwgpfxrendertarget.h:155
					void SetBufferFormat(renderengine::PixelFormat);

					// rwgpfxrendertarget.h:162
					void SetTextureFormat(renderengine::PixelFormat);

					// rwgpfxrendertarget.h:169
					void SetTextureType(renderengine::Texture::Type);

					// rwgpfxrendertarget.h:176
					void SetMultisampleFormat(uint32_t);

					// rwgpfxrendertarget.h:183
					void SetBaseEDRAM(int32_t);

					// rwgpfxrendertarget.h:190
					void SetHierarchicalZAddress(int32_t);

					// rwgpfxrendertarget.h:198
					void SetPS3CompressionBase(int32_t);

					// rwgpfxrendertarget.h:206
					void SetUseSystemMemory(bool);

					// rwgpfxrendertarget.h:213
					void SetBufferAddress(void *);

					// rwgpfxrendertarget.h:220
					void SetTileIndex(int8_t);

					// rwgpfxrendertarget.h:227
					void SetZCullIndex(int8_t);

					// rwgpfxrendertarget.h:234
					void SetZCullAddress(int32_t);

					// rwgpfxrendertarget.h:241
					void SetUseStencil(bool);

					// rwgpfxrendertarget.h:248
					void SetFilterMode(renderengine::SamplerState::FilterMode);

					// rwgpfxrendertarget.h:254
					rw::IResourceAllocator * GetAllocator() const;

					// rwgpfxrendertarget.h:260
					uint32_t GetWidth() const;

					// rwgpfxrendertarget.h:266
					uint32_t GetHeight() const;

					// rwgpfxrendertarget.h:272
					uint32_t GetPitch() const;

					// rwgpfxrendertarget.h:278
					renderengine::PixelFormat GetBufferFormat() const;

					// rwgpfxrendertarget.h:284
					renderengine::PixelFormat GetTextureFormat() const;

					// rwgpfxrendertarget.h:290
					renderengine::Texture::Type GetTextureType() const;

					// rwgpfxrendertarget.h:296
					uint32_t GetMultisampleFormat() const;

					// rwgpfxrendertarget.h:302
					bool GetUseStencil() const;

					// rwgpfxrendertarget.h:322
					int32_t GetPS3CompressionBase() const;

					// rwgpfxrendertarget.h:329
					bool GetUseSystemMemory() const;

					// rwgpfxrendertarget.h:335
					void * GetBufferAddress() const;

					// rwgpfxrendertarget.h:341
					int8_t GetTileIndex() const;

					// rwgpfxrendertarget.h:347
					int8_t GetZCullIndex() const;

					// rwgpfxrendertarget.h:353
					int32_t GetZCullAddress() const;

					// rwgpfxrendertarget.h:359
					renderengine::SamplerState::FilterMode GetFilterMode() const;

					// rwgpfxrendertarget.h:366
					void SetNumSections(uint32_t);

					// rwgpfxrendertarget.h:372
					uint32_t GetNumSections() const;

				}

			}

			// Declaration
			struct RenderTarget {
				// rwgpfxrendertarget.h:516
				struct Parameters {
				private:
					// rwgpfxrendertarget.h:517
					rw::IResourceAllocator * m_pAllocator;

					// rwgpfxrendertarget.h:519
					uint32_t m_u32Width;

					// rwgpfxrendertarget.h:520
					uint32_t m_u32Height;

					// rwgpfxrendertarget.h:521
					uint32_t m_u32NumMipMaps;

					// rwgpfxrendertarget.h:523
					rw::graphics::postfx::RenderTarget::RenderTargetMode m_ColorMode;

					// rwgpfxrendertarget.h:524
					rw::graphics::postfx::RenderTarget::RenderTargetMode m_DepthStencilMode;

					// rwgpfxrendertarget.h:525
					bool m_bUseDepthStencilAsTexture;

					// rwgpfxrendertarget.h:526
					uint8_t m_numSections;

					// rwgpfxrendertarget.h:527
					rw::graphics::postfx::Target::Parameters[5] m_aColorTargetParams;

					// rwgpfxrendertarget.h:528
					rw::graphics::postfx::Target::Parameters m_DepthStencilParams;

					// rwgpfxrendertarget.h:530
					Target *[5] m_apProvidedColorTarget;

					// rwgpfxrendertarget.h:531
					Target * m_pProvidedDepthStencilTarget;

				public:
					// rwgpfxrendertarget.h:535
					Parameters();

					// rwgpfxrendertarget.h:555
					void SetAllocator(rw::IResourceAllocator *);

					// rwgpfxrendertarget.h:562
					void SetWidth(uint32_t);

					// rwgpfxrendertarget.h:569
					void SetHeight(uint32_t);

					// rwgpfxrendertarget.h:576
					void SetNumMipMaps(uint32_t);

					// rwgpfxrendertarget.h:583
					void SetColorMode(rw::graphics::postfx::RenderTarget::RenderTargetMode);

					// rwgpfxrendertarget.h:590
					void SetDepthStencilMode(rw::graphics::postfx::RenderTarget::RenderTargetMode);

					// rwgpfxrendertarget.h:597
					void SetUseDepthStencilAsTexture(bool);

					// rwgpfxrendertarget.h:605
					void SetColorTargetParameters(uint32_t, rw::graphics::postfx::Target::Parameters &);

					// rwgpfxrendertarget.h:613
					void SetDepthStencilTargetParams(rw::graphics::postfx::Target::Parameters &);

					// rwgpfxrendertarget.h:621
					void SetProvidedColorTargetParams(uint32_t, Target *);

					// rwgpfxrendertarget.h:629
					void SetProvidedDepthStencilTarget(Target *);

					// rwgpfxrendertarget.h:635
					rw::IResourceAllocator * GetAllocator() const;

					// rwgpfxrendertarget.h:641
					uint32_t GetWidth() const;

					// rwgpfxrendertarget.h:647
					uint32_t GetHeight() const;

					// rwgpfxrendertarget.h:653
					uint32_t GetNumMipMaps() const;

					// rwgpfxrendertarget.h:659
					rw::graphics::postfx::RenderTarget::RenderTargetMode GetColorMode() const;

					// rwgpfxrendertarget.h:665
					rw::graphics::postfx::RenderTarget::RenderTargetMode GetDepthStencilMode() const;

					// rwgpfxrendertarget.h:671
					bool GetUseDepthStencilAsTexture() const;

					// rwgpfxrendertarget.h:678
					const rw::graphics::postfx::Target::Parameters & GetColorTargetParameters(uint32_t) const;

					// rwgpfxrendertarget.h:685
					const rw::graphics::postfx::Target::Parameters & GetDepthStencilParameters() const;

					// rwgpfxrendertarget.h:692
					rw::graphics::postfx::Target::Parameters & GetColorTargetParameters(uint32_t);

					// rwgpfxrendertarget.h:699
					rw::graphics::postfx::Target::Parameters & GetDepthStencilParameters();

					// rwgpfxrendertarget.h:706
					const rw::graphics::postfx::Target * GetProvidedColorTargetParams(uint32_t) const;

					// rwgpfxrendertarget.h:713
					const rw::graphics::postfx::Target * GetProvidedDepthStencilTarget() const;

					// rwgpfxrendertarget.h:719
					uint32_t GetNumSections() const;

					// rwgpfxrendertarget.h:725
					void SetNumSections(uint32_t);

				}

				// rwgpfxrendertarget.h:504
				enum RenderTargetMode {
					eRenderTarget_NONE = 0,
					eRenderTarget_CREATE = 1,
					eRenderTarget_USE_DEVICE_FOR_WRITE = 2,
					eRenderTarget_USE_PROVIDED = 4,
				}

			}

		}

	}

}

// rwgpfxrendertarget.h:35
struct rw::graphics::postfx::Target {
protected:
	// rwgpfxrendertarget.h:476
	rw::IResourceAllocator * m_pAllocator;

	// rwgpfxrendertarget.h:479
	PixelBuffer *[6] m_pPixelBuffer;

	// rwgpfxrendertarget.h:482
	renderengine::Texture * m_pTexture;

	// rwgpfxrendertarget.h:485
	TextureState * m_pTextureState;

	// rwgpfxrendertarget.h:488
	renderengine::Texture * m_pStencilTexture;

	// rwgpfxrendertarget.h:490
	uint8_t m_numSections;

	// rwgpfxrendertarget.h:493
	bool m_bIsShared;

public:
	// rwgpfxrendertarget.h:379
	void Release();

	// rwgpfxrendertarget.h:383
	void Resolve();

	// rwgpfxrendertarget.h:388
	void Resolve(uint32_t);

	// rwgpfxrendertarget.h:392
	void SetAllocator(rw::IResourceAllocator *);

	// rwgpfxrendertarget.h:400
	void SetPixelBuffer(PixelBuffer *, uint32_t);

	// rwgpfxrendertarget.h:412
	void SetTexture(renderengine::Texture *);

	// rwgpfxrendertarget.h:419
	void SetTextureState(TextureState *);

	// rwgpfxrendertarget.h:426
	void SetIsShared(bool);

	// rwgpfxrendertarget.h:433
	PixelBuffer * GetPixelBuffer(uint32_t) const;

	// rwgpfxrendertarget.h:444
	renderengine::Texture * GetTexture() const;

	// rwgpfxrendertarget.h:450
	TextureState * GetTextureState() const;

	// rwgpfxrendertarget.h:456
	bool GetIsShared() const;

protected:
	// rwgpfxrendertarget.h:462
	void Target();

	// rwgpfxrendertarget.h:466
	void CreateColor(const rw::graphics::postfx::Target::Parameters &);

	// rwgpfxrendertarget.h:470
	void CreateDepth(const rw::graphics::postfx::Target::Parameters &);

}

// rwgpfxrendertarget.h:502
struct rw::graphics::postfx::RenderTarget {
private:
	// rwgpfxrendertarget.h:924
	rw::IResourceAllocator * m_allocator;

	// rwgpfxrendertarget.h:925
	uint32_t m_width;

	// rwgpfxrendertarget.h:926
	uint32_t m_height;

	// rwgpfxrendertarget.h:927
	renderengine::PixelFormat m_format;

	// rwgpfxrendertarget.h:928
	rw::graphics::postfx::RenderTarget::RenderTargetMode m_colorMode;

	// rwgpfxrendertarget.h:929
	rw::graphics::postfx::RenderTarget::RenderTargetMode m_depthStencilMode;

	// rwgpfxrendertarget.h:930
	bool m_bUseDepthStencilAsTexture;

	// rwgpfxrendertarget.h:931
	uint8_t m_numSections;

	// rwgpfxrendertarget.h:932
	RenderTargetState *[6] m_rtState;

	// rwgpfxrendertarget.h:934
	Target[5] m_colorTargets;

	// rwgpfxrendertarget.h:935
	Target m_depthStencilTarget;

	// rwgpfxrendertarget.h:937
	extern rw::graphics::postfx::RenderTargetDebugger * m_debugger;

public:
	// rwgpfxrendertarget.h:735
	ResourceDescriptor GetResourceDescriptor(const rw::graphics::postfx::RenderTarget::Parameters &);

	// rwgpfxrendertarget.h:740
	RenderTarget * Initialize(const Resource &, const rw::graphics::postfx::RenderTarget::Parameters &);

	// rwgpfxrendertarget.h:744
	RenderTarget * Initialize(const rw::graphics::postfx::RenderTarget::Parameters &);

	// rwgpfxrendertarget.h:747
	void Release();

	// rwgpfxrendertarget.h:755
	void Begin(uint32_t);

	// rwgpfxrendertarget.h:766
	void End(bool);

	// rwgpfxrendertarget.h:769
	void Resolve(bool, bool);

	// rwgpfxrendertarget.h:775
	uint32_t GetWidth();

	// rwgpfxrendertarget.h:781
	uint32_t GetHeight();

	// rwgpfxrendertarget.h:787
	renderengine::PixelFormat GetFormat();

	// rwgpfxrendertarget.h:793
	rw::graphics::postfx::RenderTarget::RenderTargetMode GetColorMode();

	// rwgpfxrendertarget.h:799
	rw::graphics::postfx::RenderTarget::RenderTargetMode GetDepthStencilMode();

	// rwgpfxrendertarget.h:806
	RenderTargetState * GetRenderTargetState(uint32_t);

	// rwgpfxrendertarget.h:819
	void SetRenderTargetState(RenderTargetState *, uint32_t);

	// rwgpfxrendertarget.h:834
	Target * GetColorTarget(uint32_t);

	// rwgpfxrendertarget.h:840
	Target * GetDepthStencilTarget();

	// rwgpfxrendertarget.h:850
	TextureState * GetTextureState(uint32_t);

	// rwgpfxrendertarget.h:857
	renderengine::Texture * GetTexture(uint32_t);

	// rwgpfxrendertarget.h:866
	TextureState * GetDepthStencilTextureState();

	// rwgpfxrendertarget.h:875
	renderengine::Texture * GetDepthStencilTexture();

	// rwgpfxrendertarget.h:885
	Vector4 GetInvSize() const;

	// rwgpfxrendertarget.h:891
	Vector4 GetHalfPixelOffset() const;

	// rwgpfxrendertarget.h:897
	rw::graphics::postfx::RenderTargetDebugger * GetDebugger();

	// rwgpfxrendertarget.h:903
	void SetDebugger(rw::graphics::postfx::RenderTargetDebugger *);

	// rwgpfxrendertarget.h:907
	void RenderDebug(uint32_t);

protected:
	// rwgpfxrendertarget.h:913
	void RenderTarget(const rw::graphics::postfx::RenderTarget::Parameters &);

	// rwgpfxrendertarget.h:920
	void CreateStates(const rw::graphics::postfx::RenderTarget::Parameters &);

	// rwgpfxrendertarget.h:921
	void DestroyStates();

}

// rwgpfxrendertarget.h:937
extern rw::graphics::postfx::RenderTargetDebugger * m_debugger;

// rwgpfxrendertarget.h:948
extern void SafeRelease<renderengine::RenderTargetState>(const RenderTargetState *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rwgpfxrendertarget.h:948
extern void SafeRelease<rw::graphics::postfx::RenderTargetDebugger>(const rw::graphics::postfx::RenderTargetDebugger *&  ptr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// rwgpfxrendertarget.h:30
		namespace postfx {
			struct RenderTargetDebugger;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// rwgpfxrendertarget.h:30
		namespace postfx {
			struct RenderTargetDebugger;

			struct ColourCube;

		}

	}

}

// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// rwgpfxrendertarget.h:30
		namespace postfx {
			// Declaration
			struct Target {
				// rwgpfxrendertarget.h:38
				struct Parameters {
				private:
					// rwgpfxrendertarget.h:40
					rw::IResourceAllocator * m_pAllocator;

					// rwgpfxrendertarget.h:43
					uint32_t m_u32Width;

					// rwgpfxrendertarget.h:44
					uint32_t m_u32Height;

					// rwgpfxrendertarget.h:45
					uint32_t m_u32Pitch;

					// rwgpfxrendertarget.h:48
					renderengine::PixelFormat m_BufferFormat;

					// rwgpfxrendertarget.h:49
					renderengine::PixelFormat m_TextureFormat;

					// rwgpfxrendertarget.h:52
					renderengine::Texture::Type m_TextureType;

					// rwgpfxrendertarget.h:55
					uint32_t m_u32MultiSampleFormat;

					// rwgpfxrendertarget.h:57
					renderengine::SamplerState::FilterMode m_FilterMode;

					// rwgpfxrendertarget.h:59
					bool m_bUseStencil;

					// rwgpfxrendertarget.h:62
					int32_t m_n32BaseEDRAM;

					// rwgpfxrendertarget.h:64
					int32_t m_n32HierarchicalZAddress;

					// rwgpfxrendertarget.h:66
					int32_t m_n32CompressionBase;

					// rwgpfxrendertarget.h:69
					bool m_bSystemMemory;

					// rwgpfxrendertarget.h:72
					void * m_pBufferAddress;

					// rwgpfxrendertarget.h:74
					int8_t m_tileIndex;

					// rwgpfxrendertarget.h:75
					int8_t m_zCullIndex;

					// rwgpfxrendertarget.h:76
					int32_t m_zCullAddress;

					// rwgpfxrendertarget.h:79
					uint8_t m_numSections;

				public:
					// rwgpfxrendertarget.h:83
					Parameters();

					// rwgpfxrendertarget.h:114
					void ShareMemoryWithTarget(const rw::graphics::postfx::Target *, void *);

					// rwgpfxrendertarget.h:126
					void SetAllocator(rw::IResourceAllocator *);

					// rwgpfxrendertarget.h:133
					void SetWidth(uint32_t);

					// rwgpfxrendertarget.h:140
					void SetHeight(uint32_t);

					// rwgpfxrendertarget.h:147
					void SetPitch(uint32_t);

					// rwgpfxrendertarget.h:155
					void SetBufferFormat(renderengine::PixelFormat);

					// rwgpfxrendertarget.h:162
					void SetTextureFormat(renderengine::PixelFormat);

					// rwgpfxrendertarget.h:169
					void SetTextureType(renderengine::Texture::Type);

					// rwgpfxrendertarget.h:176
					void SetMultisampleFormat(uint32_t);

					// rwgpfxrendertarget.h:183
					void SetBaseEDRAM(int32_t);

					// rwgpfxrendertarget.h:190
					void SetHierarchicalZAddress(int32_t);

					// rwgpfxrendertarget.h:198
					void SetPS3CompressionBase(int32_t);

					// rwgpfxrendertarget.h:206
					void SetUseSystemMemory(bool);

					// rwgpfxrendertarget.h:213
					void SetBufferAddress(void *);

					// rwgpfxrendertarget.h:220
					void SetTileIndex(int8_t);

					// rwgpfxrendertarget.h:227
					void SetZCullIndex(int8_t);

					// rwgpfxrendertarget.h:234
					void SetZCullAddress(int32_t);

					// rwgpfxrendertarget.h:241
					void SetUseStencil(bool);

					// rwgpfxrendertarget.h:248
					void SetFilterMode(renderengine::SamplerState::FilterMode);

					// rwgpfxrendertarget.h:254
					rw::IResourceAllocator * GetAllocator() const;

					// rwgpfxrendertarget.h:260
					uint32_t GetWidth() const;

					// rwgpfxrendertarget.h:266
					uint32_t GetHeight() const;

					// rwgpfxrendertarget.h:272
					uint32_t GetPitch() const;

					// rwgpfxrendertarget.h:278
					renderengine::PixelFormat GetBufferFormat() const;

					// rwgpfxrendertarget.h:284
					renderengine::PixelFormat GetTextureFormat() const;

					// rwgpfxrendertarget.h:290
					renderengine::Texture::Type GetTextureType() const;

					// rwgpfxrendertarget.h:296
					uint32_t GetMultisampleFormat() const;

					// rwgpfxrendertarget.h:302
					bool GetUseStencil() const;

					// rwgpfxrendertarget.h:322
					int32_t GetPS3CompressionBase() const;

					// rwgpfxrendertarget.h:329
					bool GetUseSystemMemory() const;

					// rwgpfxrendertarget.h:335
					void * GetBufferAddress() const;

					// rwgpfxrendertarget.h:341
					int8_t GetTileIndex() const;

					// rwgpfxrendertarget.h:347
					int8_t GetZCullIndex() const;

					// rwgpfxrendertarget.h:353
					int32_t GetZCullAddress() const;

					// rwgpfxrendertarget.h:359
					renderengine::SamplerState::FilterMode GetFilterMode() const;

					// rwgpfxrendertarget.h:366
					void SetNumSections(uint32_t);

					// rwgpfxrendertarget.h:372
					uint32_t GetNumSections() const;

				}

			}

			// Declaration
			struct RenderTarget {
				// rwgpfxrendertarget.h:516
				struct Parameters {
				private:
					// rwgpfxrendertarget.h:517
					rw::IResourceAllocator * m_pAllocator;

					// rwgpfxrendertarget.h:519
					uint32_t m_u32Width;

					// rwgpfxrendertarget.h:520
					uint32_t m_u32Height;

					// rwgpfxrendertarget.h:521
					uint32_t m_u32NumMipMaps;

					// rwgpfxrendertarget.h:523
					rw::graphics::postfx::RenderTarget::RenderTargetMode m_ColorMode;

					// rwgpfxrendertarget.h:524
					rw::graphics::postfx::RenderTarget::RenderTargetMode m_DepthStencilMode;

					// rwgpfxrendertarget.h:525
					bool m_bUseDepthStencilAsTexture;

					// rwgpfxrendertarget.h:526
					uint8_t m_numSections;

					// rwgpfxrendertarget.h:527
					rw::graphics::postfx::Target::Parameters[5] m_aColorTargetParams;

					// rwgpfxrendertarget.h:528
					rw::graphics::postfx::Target::Parameters m_DepthStencilParams;

					// rwgpfxrendertarget.h:530
					Target *[5] m_apProvidedColorTarget;

					// rwgpfxrendertarget.h:531
					Target * m_pProvidedDepthStencilTarget;

				public:
					// rwgpfxrendertarget.h:535
					Parameters();

					// rwgpfxrendertarget.h:555
					void SetAllocator(rw::IResourceAllocator *);

					// rwgpfxrendertarget.h:562
					void SetWidth(uint32_t);

					// rwgpfxrendertarget.h:569
					void SetHeight(uint32_t);

					// rwgpfxrendertarget.h:576
					void SetNumMipMaps(uint32_t);

					// rwgpfxrendertarget.h:583
					void SetColorMode(rw::graphics::postfx::RenderTarget::RenderTargetMode);

					// rwgpfxrendertarget.h:590
					void SetDepthStencilMode(rw::graphics::postfx::RenderTarget::RenderTargetMode);

					// rwgpfxrendertarget.h:597
					void SetUseDepthStencilAsTexture(bool);

					// rwgpfxrendertarget.h:605
					void SetColorTargetParameters(uint32_t, rw::graphics::postfx::Target::Parameters &);

					// rwgpfxrendertarget.h:613
					void SetDepthStencilTargetParams(rw::graphics::postfx::Target::Parameters &);

					// rwgpfxrendertarget.h:621
					void SetProvidedColorTargetParams(uint32_t, Target *);

					// rwgpfxrendertarget.h:629
					void SetProvidedDepthStencilTarget(Target *);

					// rwgpfxrendertarget.h:635
					rw::IResourceAllocator * GetAllocator() const;

					// rwgpfxrendertarget.h:641
					uint32_t GetWidth() const;

					// rwgpfxrendertarget.h:647
					uint32_t GetHeight() const;

					// rwgpfxrendertarget.h:653
					uint32_t GetNumMipMaps() const;

					// rwgpfxrendertarget.h:659
					rw::graphics::postfx::RenderTarget::RenderTargetMode GetColorMode() const;

					// rwgpfxrendertarget.h:665
					rw::graphics::postfx::RenderTarget::RenderTargetMode GetDepthStencilMode() const;

					// rwgpfxrendertarget.h:671
					bool GetUseDepthStencilAsTexture() const;

					// rwgpfxrendertarget.h:678
					const rw::graphics::postfx::Target::Parameters & GetColorTargetParameters(uint32_t) const;

					// rwgpfxrendertarget.h:685
					const rw::graphics::postfx::Target::Parameters & GetDepthStencilParameters() const;

					// rwgpfxrendertarget.h:692
					rw::graphics::postfx::Target::Parameters & GetColorTargetParameters(uint32_t);

					// rwgpfxrendertarget.h:699
					rw::graphics::postfx::Target::Parameters & GetDepthStencilParameters();

					// rwgpfxrendertarget.h:706
					const rw::graphics::postfx::Target * GetProvidedColorTargetParams(uint32_t) const;

					// rwgpfxrendertarget.h:713
					const rw::graphics::postfx::Target * GetProvidedDepthStencilTarget() const;

					// rwgpfxrendertarget.h:719
					uint32_t GetNumSections() const;

					// rwgpfxrendertarget.h:725
					void SetNumSections(uint32_t);

				}

				// rwgpfxrendertarget.h:504
				enum RenderTargetMode {
					eRenderTarget_NONE = 0,
					eRenderTarget_CREATE = 1,
					eRenderTarget_USE_DEVICE_FOR_WRITE = 2,
					eRenderTarget_USE_PROVIDED = 4,
				}

			}

			struct RenderTargetDebugger;

		}

	}

}

// rwgpfxrendertarget.h:35
struct rw::graphics::postfx::Target {
protected:
	// rwgpfxrendertarget.h:476
	rw::IResourceAllocator * m_pAllocator;

	// rwgpfxrendertarget.h:479
	renderengine::PixelBuffer *[6] m_pPixelBuffer;

	// rwgpfxrendertarget.h:482
	renderengine::Texture * m_pTexture;

	// rwgpfxrendertarget.h:485
	TextureState * m_pTextureState;

	// rwgpfxrendertarget.h:488
	renderengine::Texture * m_pStencilTexture;

	// rwgpfxrendertarget.h:490
	uint8_t m_numSections;

	// rwgpfxrendertarget.h:493
	bool m_bIsShared;

public:
	// rwgpfxrendertarget.h:379
	void Release();

	// rwgpfxrendertarget.h:383
	void Resolve();

	// rwgpfxrendertarget.h:388
	void Resolve(uint32_t);

	// rwgpfxrendertarget.h:392
	void SetAllocator(rw::IResourceAllocator *);

	// rwgpfxrendertarget.h:400
	void SetPixelBuffer(renderengine::PixelBuffer *, uint32_t);

	// rwgpfxrendertarget.h:412
	void SetTexture(renderengine::Texture *);

	// rwgpfxrendertarget.h:419
	void SetTextureState(TextureState *);

	// rwgpfxrendertarget.h:426
	void SetIsShared(bool);

	// rwgpfxrendertarget.h:433
	renderengine::PixelBuffer * GetPixelBuffer(uint32_t) const;

	// rwgpfxrendertarget.h:444
	renderengine::Texture * GetTexture() const;

	// rwgpfxrendertarget.h:450
	TextureState * GetTextureState() const;

	// rwgpfxrendertarget.h:456
	bool GetIsShared() const;

protected:
	// rwgpfxrendertarget.h:462
	void Target();

	// rwgpfxrendertarget.h:466
	void CreateColor(const rw::graphics::postfx::Target::Parameters &);

	// rwgpfxrendertarget.h:470
	void CreateDepth(const rw::graphics::postfx::Target::Parameters &);

}


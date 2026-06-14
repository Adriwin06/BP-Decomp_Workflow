// CgsRenderTarget.h:32
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

	int (*)(...) * _vptr.CgsRenderTarget;

private:
	// CgsRenderTarget.h:267
	uint32_t mu32MaxWidth;

	// CgsRenderTarget.h:268
	uint32_t mu32MaxHeight;

	// CgsRenderTarget.h:269
	uint32_t mu32MaxNumMipMaps;

	// CgsRenderTarget.h:271
	uint32_t mn32MultiSampleFormat;

	// CgsRenderTarget.h:272
	uint8_t mu8NumSections;

	// CgsRenderTarget.h:274
	bool mbUseDepthStencilAsTexture;

	// CgsRenderTarget.h:276
	CgsRenderTarget::CgsRenderTargetSurface[5] maRenderTargets;

	// CgsRenderTarget.h:277
	CgsRenderTarget::CgsRenderTargetSurface mDepthTarget;

	// CgsRenderTarget.h:279
	RenderTarget * mpRenderTarget;

	// CgsRenderTarget.h:281
	rw::IResourceAllocator * mpAllocator;

public:
	// CgsRenderTarget.h:285
	CgsRenderTarget();

	// CgsRenderTarget.cpp:47
	virtual void Construct(rw::IResourceAllocator *);

	// CgsRenderTarget.cpp:205
	virtual void Destruct();

	// CgsRenderTarget.cpp:221
	virtual bool Prepare();

	// CgsRenderTarget.cpp:392
	void Begin();

	// CgsRenderTarget.cpp:408
	void End();

	// CgsRenderTarget.cpp:345
	void Begin(CgsGraphics::Im2dRenderBuffer *);

	// CgsRenderTarget.cpp:374
	void End(CgsGraphics::Im2dRenderBuffer *);

	// CgsRenderTarget.cpp:238
	renderengine::Texture * GetTexture(uint32_t);

	// CgsRenderTarget.cpp:255
	renderengine::Texture * GetDepthTexture();

	// CgsRenderTarget.cpp:263
	TextureState * GetDepthTextureState();

	// CgsRenderTarget.h:333
	RenderTargetState * GetRenderTargetState();

	// CgsRenderTarget.h:339
	void SetRenderTargetState();

	// CgsRenderTarget.cpp:281
	void SetRenderTargetState(uint32_t);

	// CgsRenderTarget.h:356
	RenderTarget * GetRenderTarget();

	// CgsRenderTarget.h:362
	void SetRenderTarget(RenderTarget *);

	// CgsRenderTarget.h:370
	void SetDimensions(uint32_t, uint32_t);

	// CgsRenderTarget.h:378
	void SetNumMipMaps(uint32_t);

	// CgsRenderTarget.h:385
	void SetUseDepthStencilAsTexture(bool);

	// CgsRenderTarget.h:392
	void SetMultisampleFormat(int32_t);

	// CgsRenderTarget.h:398
	int32_t GetMultisampleFormat();

	// CgsRenderTarget.h:404
	void ClearColourTargetInUse();

	// CgsRenderTarget.h:418
	void SetColourTargetInUse(uint32_t, bool);

	// CgsRenderTarget.h:427
	void SetColourTargetUseDevice(uint32_t, bool);

	// CgsRenderTarget.h:436
	void SetColourTargetUseSystemMemory(uint32_t, bool);

	// CgsRenderTarget.h:445
	void SetColourTargetUseTarget(uint32_t, Target *);

	// CgsRenderTarget.h:454
	void SetColourTargetBufferFormat(uint32_t, uint32_t);

	// CgsRenderTarget.h:463
	void SetColourTargetTextureFormat(uint32_t, uint32_t);

	// CgsRenderTarget.h:472
	void SetColourTargetBaseEDRAM(uint32_t, uint32_t);

	// CgsRenderTarget.h:481
	void SetColourTargetTileIndex(uint32_t, int8_t);

	// CgsRenderTarget.h:491
	void SetColourTargetCompressionBase(uint32_t, int32_t);

	// CgsRenderTarget.h:501
	void SetColourFilterMode(uint32_t, renderengine::SamplerState::FilterMode);

	// CgsRenderTarget.h:511
	void SetColourSharedTarget(uint32_t, const rw::graphics::postfx::Target *, void *);

	// CgsRenderTarget.h:520
	void SetDepthTargetInUse(bool);

	// CgsRenderTarget.h:527
	void SetDepthTargetUseTarget(Target *);

	// CgsRenderTarget.h:534
	void SetDepthTargetBufferFormat(uint32_t);

	// CgsRenderTarget.h:541
	void SetDepthTargetTextureFormat(uint32_t);

	// CgsRenderTarget.h:548
	void SetDepthTargetBaseEDRAM(uint32_t);

	// CgsRenderTarget.h:555
	void SetDepthTargetTileIndex(int8_t);

	// CgsRenderTarget.h:563
	void SetDepthTargetCompressionBase(int32_t);

	// CgsRenderTarget.h:571
	void SetDepthTargetZCullIndex(int8_t);

	// CgsRenderTarget.h:578
	void SetDepthTargetZCullAddress(int32_t);

	// CgsRenderTarget.h:586
	void SetTextureType(uint32_t, renderengine::Texture::Type);

	// CgsRenderTarget.h:593
	uint32_t GetWidth() const;

	// CgsRenderTarget.h:599
	uint32_t GetHeight() const;

	// CgsRenderTarget.h:604
	void SetNumSections(uint32_t);

	// CgsRenderTarget.h:609
	uint32_t GetNumSections();

}


// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:27
	namespace graphics {
		// Declaration
		struct Device {
			// drvgraph.h:73
			enum State {
				STATE_NA = -1,
				STATE_COLD = 0,
				STATE_INITIALIZE = 1,
				STATE_START = 2,
				STATE_FORCEENUMSIZEINT = 2147483647,
			}

			// drvgraph.h:86
			struct Parameters {
				// drvgraph.h:98
				enum DisplayType {
					DISPLAYTYPE_NA = 0,
					DISPLAYTYPE_VGA = 1,
					DISPLAYTYPE_720P = 2,
					DISPLAYTYPE_720P_AA = 3,
					DISPLAYTYPE_1080I = 4,
					DISPLAYTYPE_1080I_AA = 5,
					DISPLAYTYPE_1080P = 6,
					DISPLAYTYPE_1080P_AA = 7,
					DISPLAYTYPE_VESA_1280x768 = 8,
					DISPLAYTYPE_VESA_1280x768_AA = 9,
					DISPLAYTYPE_VESA_1280x1024 = 10,
					DISPLAYTYPE_VESA_1280x1024_AA = 11,
					DISPLAYTYPE_VESA_1920x1200 = 12,
					DISPLAYTYPE_VESA_1920x1200_AA = 13,
					DISPLAYTYPE_DEFAULT = 3,
				}

			private:
				// drvgraph.h:170
				int32_t m_width;

				// drvgraph.h:171
				int32_t m_height;

				// drvgraph.h:172
				int32_t m_colorBits;

				// drvgraph.h:173
				int32_t m_alphaBits;

				// drvgraph.h:174
				int32_t m_depthBits;

				// drvgraph.h:175
				int32_t m_stencilBits;

				// drvgraph.h:176
				uint32_t m_deviceType;

				// drvgraph.h:177
				uint32_t m_tvStandard;

				// drvgraph.h:178
				uint32_t m_tvFormat;

				// drvgraph.h:179
				uint32_t m_bufferingMode;

				// drvgraph.h:180
				uint8_t m_antiAliasing;

				// drvgraph.h:183
				uint32_t m_enableInitOptions;

				// drvgraph.h:184
				uint32_t m_maxSPUs;

				// drvgraph.h:185
				uint8_t m_initializeSPUs;

				// drvgraph.h:186
				uint32_t m_persistentMemorySize;

				// drvgraph.h:187
				uint32_t m_transientMemorySize;

				// drvgraph.h:188
				uint32_t m_errorConsole;

				// drvgraph.h:189
				uint32_t m_fifoSize;

				// drvgraph.h:190
				uint32_t m_hostMemorySize;

				// drvgraph.h:193
				rw::graphics::Raster::Format m_backBufferFormat;

				// drvgraph.h:194
				rw::graphics::Raster::Format m_zBufferFormat;

				// drvgraph.h:195
				uint32_t m_numFramesToBuffer;

				// drvgraph.h:196
				uint32_t m_vSyncWait;

			public:
				// drvgraph.h:118
				RwBool Validate() const;

				// drvgraph.h:120
				void SetBackBufferWidth(uint32_t);

				// drvgraph.h:120
				uint32_t GetBackBufferWidth() const;

				// drvgraph.h:120
				void SetBackBufferHeight(uint32_t);

				// drvgraph.h:120
				uint32_t GetBackBufferHeight() const;

				// drvgraph.h:120
				void SetBackBufferFormat(rw::graphics::Raster::Format);

				// drvgraph.h:120
				rw::graphics::Raster::Format GetBackBufferFormat() const;

				// drvgraph.h:120
				void SetFrontBufferWidth(uint32_t);

				// drvgraph.h:120
				uint32_t GetFrontBufferWidth() const;

				// drvgraph.h:120
				void SetFrontBufferHeight(uint32_t);

				// drvgraph.h:120
				uint32_t GetFrontBufferHeight() const;

				// drvgraph.h:120
				void SetFrontBufferFormat(rw::graphics::Raster::Format);

				// drvgraph.h:120
				rw::graphics::Raster::Format GetFrontBufferFormat() const;

				// drvgraph.h:120
				void SetZBufferFormat(rw::graphics::Raster::Format);

				// drvgraph.h:120
				rw::graphics::Raster::Format GetZBufferFormat() const;

				// drvgraph.h:120
				void SetNumFramesToBuffer(uint32_t);

				// drvgraph.h:120
				uint32_t GetNumFramesToBuffer() const;

				// drvgraph.h:120
				void SetNumVSyncToWait(uint32_t);

				// drvgraph.h:120
				uint32_t GetNumVSyncToWait() const;

				// drvgraph.h:123
				void PSGLSetColorBits(int32_t);

				// drvgraph.h:124
				int32_t PSGLGetColorBits() const;

				// drvgraph.h:125
				void PSGLSetAlphaBits(int32_t);

				// drvgraph.h:126
				int32_t PSGLGetAlpaBits() const;

				// drvgraph.h:127
				void PSGLSetDepthBits(int32_t);

				// drvgraph.h:128
				int32_t PSGLGetDepthBits() const;

				// drvgraph.h:129
				void PSGLSetStencilBits(int32_t);

				// drvgraph.h:130
				int32_t PSGLGetStencilBits() const;

				// drvgraph.h:139
				void PSGLSetBufferingMode(PSGLbufferingMode);

				// drvgraph.h:140
				PSGLbufferingMode PSGLGetBufferingMode() const;

				// drvgraph.h:141
				void PSGLSetAntiAliasing(uint8_t);

				// drvgraph.h:142
				uint8_t PSGLGetAntiAliasing() const;

				// drvgraph.h:143
				void PSGLSetEnableInitOptions(uint32_t);

				// drvgraph.h:144
				uint32_t PSGLGetEnableInitOptions() const;

				// drvgraph.h:145
				void PSGLSetMaxSPUs(uint32_t);

				// drvgraph.h:146
				uint32_t PSGLGetMaxSPUs() const;

				// drvgraph.h:147
				void PSGLSetInitializeSPUs(uint8_t);

				// drvgraph.h:148
				uint8_t PSGLGetInitializeSPUs() const;

				// drvgraph.h:149
				void PSGLSetPersistentMemory(uint32_t);

				// drvgraph.h:150
				uint32_t PSGLGetPersistentMemory() const;

				// drvgraph.h:151
				void PSGLSetTransientMemory(uint32_t);

				// drvgraph.h:152
				uint32_t PSGLGetTransientMemory() const;

				// drvgraph.h:153
				void PSGLSetErrorConsole(uint32_t);

				// drvgraph.h:154
				uint32_t PSGLGetErrorConsole() const;

				// drvgraph.h:155
				void PSGLSetFIFOSize(uint32_t);

				// drvgraph.h:156
				uint32_t PSGLGetFIFOSize() const;

				// drvgraph.h:157
				void PSGLSetHostMemorySize(uint32_t);

				// drvgraph.h:158
				uint32_t PSGLGetHostMemorySize() const;

			private:
				// drvgraph.h:163
				Parameters();

				// drvgraph.h:198
				void Initialize(rw::graphics::Device::Parameters::DisplayType);

			public:
				// drvgraph.h:201
				Parameters(rw::graphics::Device::Parameters::DisplayType);

			}

		}

	}

}

// drvgraph.h:67
struct rw::graphics::Device {
private:
	// drvgraph.h:232
	extern const uint32_t m_currentVersion;

	// drvgraph.h:232
	extern rw::graphics::Device::State m_state;

	// drvgraph.h:232
	extern rw::graphics::Raster * m_defaultCameraRaster;

	// drvgraph.h:232
	extern rw::graphics::Raster * m_defaultZBufferRaster;

	// drvgraph.h:235
	extern rw::graphics::Device::Parameters m_parameters;

public:
	// drvgraph.h:73
	RwBool Initialize();

	// drvgraph.h:73
	void Release();

	// drvgraph.h:73
	RwBool Start();

	// drvgraph.h:73
	void Stop();

	// drvgraph.h:73
	RwBool StartInternal(const rw::graphics::Device::Parameters &);

	// drvgraph.h:73
	RwBool Reset(const rw::graphics::Device::Parameters &);

	// drvgraph.h:73
	RwBool Start(const rw::graphics::Device::Parameters &);

	// drvgraph.h:73
	rw::graphics::Raster * GetBackBuffer();

	// drvgraph.h:73
	rw::graphics::Raster * GetZBuffer();

	// drvgraph.h:73
	rw::graphics::Raster * GetCameraRaster();

	// drvgraph.h:73
	rw::graphics::Raster * GetZBufferRaster();

	// drvgraph.h:73
	RwBool SceneBegin();

	// drvgraph.h:73
	void SceneEnd();

	// drvgraph.h:73
	void ShowRaster(rw::graphics::Raster *);

	// drvgraph.h:73
	RwBool ValidateVideoMode(const rw::graphics::Device::Parameters &);

	// drvgraph.h:73
	RwBool SetVideoMode(const rw::graphics::Device::Parameters &);

	// drvgraph.h:73
	const rw::graphics::Device::Parameters GetVideoMode();

	// drvgraph.h:73
	void BlockUntilIdle();

	// drvgraph.h:73
	uint32_t GetCurrentFrameIndex();

	// drvgraph.h:73
	RwBool IsFrameFinished(uint32_t);

	// drvgraph.h:73
	uint32_t GetVersion(uint32_t);

	// drvgraph.h:73
	uint32_t GetVersionFull(uint32_t, uint32_t);

	// drvgraph.h:209
	rw::graphics::Device::Parameters GetParameters();

	// drvgraph.h:217
	void * PSGLCreateCgVertexProgramFromByteCode(const RwChar *, const RwChar *);

	// drvgraph.h:218
	void * PSGLCreateCgFragmentProgramFromByteCode(const RwChar *, const RwChar *);

	// drvgraph.h:219
	void PSGLDestroyCgProgram(void *);

	// drvgraph.h:220
	void * PSGLGetCGcontext();

private:
	// drvgraph.h:225
	void PSGLSurfaceInitialize();

	// drvgraph.h:226
	void PSGLSurfaceRelease();

	// drvgraph.h:238
	void Device();

	// drvgraph.h:239
	void Device(const Device &);

	// drvgraph.h:240
	void ~Device();

}

// drvgraph.h:232
extern const uint32_t m_currentVersion;

// drvgraph.h:232
extern rw::graphics::Raster * m_defaultCameraRaster;

// drvgraph.h:232
extern rw::graphics::Raster * m_defaultZBufferRaster;

// drvgraph.h:235
extern rw::graphics::Device::Parameters m_parameters;


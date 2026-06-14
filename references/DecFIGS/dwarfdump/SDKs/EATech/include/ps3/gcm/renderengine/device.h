// CgsCore.h:144
namespace renderengine {
	// Declaration
	struct Device {
		// device.h:1122
		enum State {
			STATE_NA = -1,
			STATE_COLD = 0,
			STATE_INITIALIZE = 1,
			STATE_START = 2,
			STATE_FORCEENUMSIZEINT = 2147483647,
		}

		// device.h:1138
		struct Parameters {
			// device.h:1139
			enum DisplayType {
				DISPLAYTYPE_NTSC = 0,
				DISPLAYTYPE_PAL_50 = 1,
				DISPLAYTYPE_PAL_60 = 2,
				DISPLAYTYPE_HDTV_480I = 3,
				DISPLAYTYPE_HDTV_480P = 4,
				DISPLAYTYPE_HDTV_576I = 5,
				DISPLAYTYPE_HDTV_576P = 6,
				DISPLAYTYPE_HDTV_720P = 7,
				DISPLAYTYPE_HDTV_960x1080I = 8,
				DISPLAYTYPE_HDTV_960x1080P = 9,
				DISPLAYTYPE_HDTV_1280x1080I = 10,
				DISPLAYTYPE_HDTV_1280x1080P = 11,
				DISPLAYTYPE_HDTV_1440x1080I = 12,
				DISPLAYTYPE_HDTV_1440x1080P = 13,
				DISPLAYTYPE_HDTV_1600x1080I = 14,
				DISPLAYTYPE_HDTV_1600x1080P = 15,
				DISPLAYTYPE_HDTV_1080I = 16,
				DISPLAYTYPE_HDTV_1080P = 17,
				DISPLAYTYPE_DEFAULT = 7,
			}

			// device.h:1166
			enum PS3ScanFormat {
				PS3SCANFORMAT_X8R8G8B8 = 1,
				PS3SCANFORMAT_X8B8G8R8 = 2,
				PS3SCANFORMAT_R16G16B16X16_FLOAT = 3,
				PS3SCANFORMAT_FORCEENUMSIZEINT = 2147483647,
			}

			// device.h:1244
			struct PS3ModeInformation {
				// device.h:1245
				uint32_t xResolution;

				// device.h:1246
				uint32_t yResolution;

				// device.h:1247
				uint32_t resolutionId;

			}

		protected:
			// device.h:1250
			extern renderengine::Device::Parameters::PS3ModeInformation[] m_modeInformation;

			// device.h:1253
			uint32_t cmdSize;

			// device.h:1254
			uint32_t ioSize;

			// device.h:1255
			void * ioAddress;

			// device.h:1257
			uint8_t mode;

			// device.h:1258
			renderengine::Device::Parameters::PS3ScanFormat scanFormat;

			// device.h:1260
			renderengine::PixelFormat colorFormat;

			// device.h:1262
			renderengine::PixelFormat depthStencilFormat;

			// device.h:1263
			bool depthStencilAutoCreate;

			// device.h:1265
			uint32_t width;

			// device.h:1266
			uint32_t height;

			// device.h:1267
			uint32_t resolutionId;

			// device.h:1269
			uint32_t numFramesToBuffer;

			// device.h:1270
			uint32_t numVsyncs;

			// device.h:1271
			bool immediateFlipEnable;

			// device.h:1273
			uint32_t directDrawBufferSize;

			// device.h:1274
			uint32_t directDrawNumSubBuffers;

		public:
			// device.h:1175
			Parameters(renderengine::Device::Parameters::DisplayType);

			// device.h:1195
			bool Validate() const;

			// device.h:1197
			void SetBackBufferWidth(uint32_t);

			// device.h:1198
			void SetBackBufferHeight(uint32_t);

			// device.h:1199
			void SetBackBufferFormat(renderengine::PixelFormat);

			// device.h:1201
			void SetFrontBufferWidth(uint32_t);

			// device.h:1202
			void SetFrontBufferHeight(uint32_t);

			// device.h:1203
			void SetFrontBufferFormat(renderengine::PixelFormat);

			// device.h:1205
			void SetDepthStencilBufferFormat(renderengine::PixelFormat);

			// device.h:1206
			void SetAutoDepthStencilEnable(bool);

			// device.h:1208
			void SetNumFramesToBuffer(uint32_t);

			// device.h:1209
			void SetNumVSyncToWait(uint32_t);

			// device.h:1211
			uint32_t GetBackBufferWidth() const;

			// device.h:1212
			uint32_t GetBackBufferHeight() const;

			// device.h:1213
			renderengine::PixelFormat GetBackBufferFormat() const;

			// device.h:1215
			uint32_t GetFrontBufferWidth() const;

			// device.h:1216
			uint32_t GetFrontBufferHeight() const;

			// device.h:1217
			renderengine::PixelFormat GetFrontBufferFormat() const;

			// device.h:1219
			renderengine::PixelFormat GetDepthStencilBufferFormat() const;

			// device.h:1220
			bool GetAutoDepthStencilEnable() const;

			// device.h:1222
			uint32_t GetNumFramesToBuffer() const;

			// device.h:1223
			uint32_t GetNumVSyncToWait() const;

			// device.h:1226
			void PS3SetCommandBufferSize(uint32_t);

			// device.h:1227
			void PS3SetGraphicsSystemMemoryBuffer(void *);

			// device.h:1228
			void PS3SetGraphicsSystemMemorySize(uint32_t);

			// device.h:1229
			void PS3SetDirectDrawBufferSize(uint32_t);

			// device.h:1230
			void PS3SetDirectDrawNumSubBuffers(uint32_t);

			// device.h:1231
			void PS3SetImmediateFlipEnable(bool);

			// device.h:1233
			void PS3SetMultiSampleType(uint32_t);

			// device.h:1235
			uint32_t PS3GetCommandBufferSize() const;

			// device.h:1236
			uint32_t PS3GetMultiSampleType() const;

		protected:
			// device.h:1240
			void PS3SetDimensions();

		}

		// device.h:1383
		struct LockedFrontBuffer {
			// device.h:1384
			const void * pixelData;

			// device.h:1385
			renderengine::PixelFormat format;

			// device.h:1386
			uint32_t pitch;

			// device.h:1387
			uint16_t width;

			// device.h:1388
			uint16_t height;

		}

	}

}

// device.h:54
struct renderengine::DrawParameters {
	// device.h:71
	uint32_t m_startVertex;

	// device.h:72
	uint32_t m_vertexCount;

	// device.h:73
	uint8_t m_primitiveType;

public:
	// device.h:57
	void SetStartVertex(uint32_t);

	// device.h:58
	void SetVertexCount(uint32_t);

	// device.h:60
	uint32_t GetStartVertex() const;

	// device.h:61
	uint32_t GetVertexCount() const;

	// device.h:63
	void SetPrimitiveType(renderengine::PrimitiveType);

	// device.h:64
	renderengine::PrimitiveType GetPrimitiveType() const;

	// device.h:66
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// device.h:66
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// device.h:66
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// device.h:66
	void RegisterArenaReadCallbacks();

	// device.h:66
	void RegisterArenaWriteCallbacks();

	// device.h:66
	void EndianSwapUnfix();

	// device.h:66
	void EndianSwapFixup();

}

// device.h:129
struct renderengine::DrawIndexedParameters {
	// device.h:153
	uint32_t m_startIndex;

	// device.h:154
	uint32_t m_indexCount;

	// device.h:156
	uint8_t m_primitiveType;

public:
	// device.h:132
	void SetBaseVertexIndex(uint32_t);

	// device.h:133
	void SetMinVertexIndex(uint32_t);

	// device.h:134
	void SetMaxVertexIndex(uint32_t);

	// device.h:136
	void SetStartIndex(uint32_t);

	// device.h:137
	void SetIndexCount(uint32_t);

	// device.h:138
	void SetPrimitiveType(renderengine::PrimitiveType);

	// device.h:139
	void SetPrimitiveCount(uint32_t);

	// device.h:141
	uint32_t GetBaseVertexIndex() const;

	// device.h:142
	uint32_t GetMinVertexIndex() const;

	// device.h:143
	uint32_t GetMaxVertexIndex() const;

	// device.h:145
	uint32_t GetStartIndex() const;

	// device.h:146
	uint32_t GetIndexCount() const;

	// device.h:147
	renderengine::PrimitiveType GetPrimitiveType() const;

	// device.h:148
	uint32_t GetPrimitiveCount() const;

	// device.h:150
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// device.h:150
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// device.h:150
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// device.h:150
	void RegisterArenaReadCallbacks();

	// device.h:150
	void RegisterArenaWriteCallbacks();

	// device.h:150
	void EndianSwapUnfix();

	// device.h:150
	void EndianSwapFixup();

}

// device.h:256
struct renderengine::DrawInstancedParameters {
	// device.h:277
	uint32_t m_startVertex;

	// device.h:278
	uint32_t m_instanceVertexCount;

	// device.h:279
	uint32_t m_startInstance;

	// device.h:280
	uint32_t m_instanceCount;

	// device.h:281
	uint8_t m_primitiveType;

public:
	// device.h:259
	void SetInstanceCount(uint32_t);

	// device.h:260
	void SetInstanceVertexCount(uint32_t);

	// device.h:261
	void SetStartVertex(uint32_t);

	// device.h:262
	void SetStartInstance(uint32_t);

	// device.h:264
	uint32_t GetInstanceCount() const;

	// device.h:265
	uint32_t GetInstanceVertexCount() const;

	// device.h:266
	uint32_t GetStartVertex() const;

	// device.h:267
	uint32_t GetStartInstance() const;

	// device.h:269
	void SetPrimitiveType(renderengine::PrimitiveType);

	// device.h:270
	renderengine::PrimitiveType GetPrimitiveType() const;

	// device.h:272
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// device.h:272
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// device.h:272
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// device.h:272
	void RegisterArenaReadCallbacks();

	// device.h:272
	void RegisterArenaWriteCallbacks();

	// device.h:272
	void EndianSwapUnfix();

	// device.h:272
	void EndianSwapFixup();

}

// device.h:366
struct renderengine::DrawIndexedInstancedParameters {
	// device.h:393
	uint32_t m_startIndex;

	// device.h:394
	uint32_t m_instanceIndexCount;

	// device.h:395
	uint32_t m_instanceCount;

	// device.h:396
	uint32_t m_startInstance;

	// device.h:397
	uint32_t m_maxVertexIndex;

	// device.h:399
	uint8_t m_primitiveType;

public:
	// device.h:369
	void SetInstanceCount(uint32_t);

	// device.h:370
	void SetInstanceIndexCount(uint32_t);

	// device.h:371
	void SetStartIndex(uint32_t);

	// device.h:372
	void SetStartInstance(uint32_t);

	// device.h:373
	void SetPrimitiveType(renderengine::PrimitiveType);

	// device.h:374
	void SetPrimitiveCount(uint32_t);

	// device.h:375
	void SetBaseVertexIndex(uint32_t);

	// device.h:376
	void SetMinVertexIndex(uint32_t);

	// device.h:377
	void SetMaxVertexIndex(uint32_t);

	// device.h:379
	uint32_t GetInstanceCount() const;

	// device.h:380
	uint32_t GetInstanceIndexCount() const;

	// device.h:381
	uint32_t GetStartIndex() const;

	// device.h:382
	uint32_t GetStartInstance() const;

	// device.h:383
	uint32_t GetBaseVertexIndex() const;

	// device.h:384
	uint32_t GetMinVertexIndex() const;

	// device.h:385
	uint32_t GetMaxVertexIndex() const;

	// device.h:386
	renderengine::PrimitiveType GetPrimitiveType() const;

	// device.h:388
	uint32_t GetPrimitiveCount() const;

	// device.h:390
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// device.h:390
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// device.h:390
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// device.h:390
	void RegisterArenaReadCallbacks();

	// device.h:390
	void RegisterArenaWriteCallbacks();

	// device.h:390
	void EndianSwapUnfix();

	// device.h:390
	void EndianSwapFixup();

}

// device.h:528
struct renderengine::ClearColorParameters {
	// device.h:544
	uint32_t m_color;

public:
	// device.h:529
	void ClearColorParameters();

	// device.h:534
	void SetColor(const RGBA32 &);

	// device.h:535
	RGBA32 GetColor() const;

	// device.h:537
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// device.h:537
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// device.h:537
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// device.h:537
	void RegisterArenaReadCallbacks();

	// device.h:537
	void RegisterArenaWriteCallbacks();

	// device.h:537
	void EndianSwapUnfix();

	// device.h:537
	void EndianSwapFixup();

}

// device.h:585
struct renderengine::ViewportParameters {
	// device.h:614
	uint32_t m_x;

	// device.h:615
	uint32_t m_y;

	// device.h:616
	uint32_t m_w;

	// device.h:617
	uint32_t m_h;

	// device.h:618
	float32_t m_minDepth;

	// device.h:619
	float32_t m_maxDepth;

public:
	// device.h:587
	void ViewportParameters();

	// device.h:596
	void ViewportParameters(const PixelBuffer &, float32_t, float32_t);

	// device.h:605
	void SetRectangle(uint32_t, uint32_t, uint32_t, uint32_t);

	// device.h:606
	void SetZRange(float32_t, float32_t);

	// device.h:608
	void GetRectangle(uint32_t &, uint32_t &, uint32_t &, uint32_t &) const;

	// device.h:609
	void GetZRange(float32_t &, float32_t &) const;

	// device.h:611
	void EndianSwap();

}

// device.h:671
struct renderengine::ScissorRectParameters {
	// device.h:692
	uint32_t m_x;

	// device.h:693
	uint32_t m_y;

	// device.h:694
	uint32_t m_w;

	// device.h:695
	uint32_t m_h;

public:
	// device.h:673
	void ScissorRectParameters();

	// device.h:680
	void ScissorRectParameters(const PixelBuffer &);

	// device.h:687
	void SetRectangle(uint32_t, uint32_t, uint32_t, uint32_t);

	// device.h:688
	void GetRectangle(uint32_t &, uint32_t &, uint32_t &, uint32_t &) const;

	// device.h:689
	void EndianSwap();

}

// device.h:731
struct renderengine::ClearDepthStencilParameters {
	// device.h:757
	uint32_t m_clearFlags;

	// device.h:758
	uint32_t m_value;

public:
	// device.h:732
	void ClearDepthStencilParameters();

	// device.h:738
	void SetEnableClearDepth(bool);

	// device.h:739
	void SetEnableClearStencil(bool);

	// device.h:741
	void SetDepth(float32_t);

	// device.h:742
	void SetStencil(uint32_t);

	// device.h:744
	bool GetEnableClearDepth() const;

	// device.h:745
	bool GetEnableClearStencil() const;

	// device.h:747
	float32_t GetDepth() const;

	// device.h:748
	uint32_t GetStencil() const;

	// device.h:750
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// device.h:750
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// device.h:750
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// device.h:750
	void RegisterArenaReadCallbacks();

	// device.h:750
	void RegisterArenaWriteCallbacks();

	// device.h:750
	void EndianSwapUnfix();

	// device.h:750
	void EndianSwapFixup();

}

// device.h:825
struct renderengine::FloatShaderStateIterator {
	// device.h:828
	extern const uint32_t m_dataType = 1;

	// device.h:907
	Vector4 * m_dest;

	// device.h:908
	ProgramVariableHandle m_handle;

public:
	// device.h:832
	void Write(const rw::math::vpu::Vector4 &);

	// device.h:843
	void Write(const rw::math::vpu::Matrix44 &);

	// device.h:857
	void Write(const rw::math::vpu::Vector4 *, uint32_t);

	// device.h:873
	void Write(const rw::math::vpu::Matrix44Affine &);

	// device.h:881
	void Write(const rw::math::vpu::Matrix44AffinePacked &);

	// device.h:891
	void Increment(uint32_t);

	// device.h:902
	void Write(const Vector4Template<float> &);

	// device.h:903
	void Write(const Matrix44Template<float> &);

	// device.h:904
	// Declaration
	void Write(const Vector4 *, uint32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// vector4.h:152
		typedef Vector4Template<float> Vector4;

	}

}

// device.h:971
struct renderengine::BoolShaderStateIterator {
protected:
	// device.h:983
	uint32_t m_branchBits;

	// device.h:984
	uint32_t m_currentBit;

	// device.h:985
	ProgramVariableHandle m_handle;

public:
	// device.h:977
	void Write(bool);

	// device.h:978
	void Write(const uint8_t *, uint32_t);

	// device.h:979
	void Write(const uint32_t *, uint32_t);

}

// device.h:1119
struct renderengine::Device {
	// device.h:1345
	extern const uint32_t MaxNumSamplerStates = 16;

	// device.h:1346
	extern const uint32_t MaxNumIndexBuffers = 1;

	// device.h:1347
	extern const uint32_t MaxNumVertexBuffers = 16;

	// device.h:1348
	extern const uint32_t MaxNumPendingFences = 2147483647;

	// device.h:1350
	extern const uint32_t NumTiledRegions = 14;

	// device.h:1351
	extern const uint32_t NumDisplayBuffers = 8;

	// device.h:1352
	extern const uint32_t NumShaderConstants = 468;

	// device.h:1353
	extern const uint32_t NumConditionalRenderIDs = 256;

	// device.h:1612
	extern const uint32_t MAX_FRAMES_TO_BUFFER = 4;

protected:
	// device.h:1620
	extern const uint8_t m_deviceSyncLabel = 253;

	// device.h:1621
	extern const uint8_t m_directDrawLabel = 254;

	// device.h:1622
	extern const uint8_t m_fenceLabel = 255;

	// device.h:1625
	extern const uint32_t m_timerStartIndex = 2046;

	// device.h:1626
	extern const uint32_t m_timerStopIndex = 2047;

	// device.h:1628
	extern renderengine::Device::State m_currentState;

	// device.h:1629
	extern renderengine::Device::Parameters m_parameterCopy;

	// device.h:1631
	extern uint32_t m_cmdSize;

	// device.h:1636
	extern void * m_gcmLocalAddress;

	// device.h:1637
	extern void * m_gcmIOAddress;

	// device.h:1638
	extern uint64_t m_gcmLocalSize;

	// device.h:1639
	extern uint64_t m_gcmIOSize;

	// device.h:1640
	extern uint32_t m_gcmMemoryFrequency;

	// device.h:1641
	extern uint32_t m_gcmCoreFrequency;

	// device.h:1642
	extern bool m_memoryInitialized;

	// device.h:1647
	extern uint8_t m_mode;

	// device.h:1648
	extern uint8_t m_scanFormat;

	// device.h:1649
	extern uint8_t m_sync;

	// device.h:1650
	extern uint32_t m_colorFormat;

	// device.h:1651
	extern uint32_t m_framePitch;

	// device.h:1652
	extern uint32_t m_depthStencilFormat;

	// device.h:1653
	extern bool m_depthStencilAutoCreate;

	// device.h:1658
	extern PixelBuffer *[4] m_backBuffers;

	// device.h:1659
	extern PixelBuffer * m_depthStencilBuffer;

	// device.h:1660
	extern PixelBuffer * m_proxyBackBuffer;

	// device.h:1662
	extern RenderTargetState * m_renderTargetState;

	// device.h:1667
	extern uint32_t m_currentBackBufferIndex;

	// device.h:1668
	extern uint32_t[4] m_nextBackBufferIndex;

	// device.h:1669
	extern uint32_t m_numFramesRendered;

	// device.h:1670
	extern uint32_t m_numFramesToBuffer;

	// device.h:1672
	extern uint32_t m_numVSyncsToWait;

	// device.h:1673
	extern uint32_t volatile m_numVSyncs;

	// device.h:1674
	extern uint32_t m_lastNumVSyncs;

	// device.h:1675
	extern uint32_t m_immediateFlipEnable;

	// device.h:1676
	extern uint32_t m_lastFenceWritten;

	// device.h:1677
	extern uint32_t m_lastFenceCrossed;

	// device.h:1679
	extern Vector4[] m_temporaryConstantTable;

	// device.h:1680
	extern uint32_t m_currentVertexProgramBranchBits;

	// device.h:1682
	extern ScissorRectParameters m_currentScissorRect;

	// device.h:1685
	extern uint32_t m_vertexDescriptorChanged;

	// device.h:1686
	extern uint32_t m_currentVertexAttributeMask;

	// device.h:1687
	extern const VertexDescriptor * m_currentVertexDescriptor;

	// device.h:1690
	extern const VertexBuffer *[16] m_currentVertexBuffers;

	// device.h:1691
	extern uint32_t[16] m_currentStreamOffsets;

	// device.h:1692
	extern uint32_t m_streamsToSet;

	// device.h:1694
	extern const IndexBuffer * m_currentIndexBuffer;

	// device.h:1700
	extern uint32_t * m_userCommandBuffer;

	// device.h:1701
	extern uint32_t * m_defaultCommandBuffer;

	// Unknown accessibility
	// device.h:1705
	extern uint32_t m_reference;

	// device.h:1709
	extern bool m_conditionalReportEnabled;

	// device.h:1710
	extern uint32_t m_currentConditionalReportIndex;

public:
	// device.h:1361
	renderengine::Device::State GetState();

	// device.h:1363
	bool Initialize();

	// device.h:1364
	void Release();

	// device.h:1366
	bool Start(const renderengine::Device::Parameters &);

	// device.h:1367
	bool Reset(const renderengine::Device::Parameters &);

	// device.h:1368
	void Stop();

	// device.h:1370
	void GetParameters(renderengine::Device::Parameters &);

	// device.h:1371
	uint32_t GetNumAvailableSamplers();

	// device.h:1373
	PixelBuffer * GetBackBuffer();

	// device.h:1374
	PixelBuffer * GetDepthStencilBuffer();

	// device.h:1375
	const RenderTargetState * GetDefaultRenderTargetState();

	// device.h:1377
	bool FrameBegin();

	// device.h:1378
	void FrameEnd();

	// device.h:1380
	void ShowPixelBuffer(PixelBuffer *);

	// device.h:1391
	bool LockFrontBuffer(renderengine::Device::LockedFrontBuffer &);

	// device.h:1392
	void UnlockFrontBuffer(renderengine::Device::LockedFrontBuffer &);

	// device.h:1397
	void Flush();

	// device.h:1398
	void BlockUntilIdle();

	// device.h:1400
	uint32_t InsertFence();

	// device.h:1401
	bool IsFencePending(uint32_t);

	// device.h:1402
	void BlockUntilFence(uint32_t);

	// device.h:1403
	uint32_t GetMaxNumPendingFences();

	// device.h:1405
	uint32_t GetCurrentFrameIndex();

	// device.h:1406
	bool IsFrameFinished(uint32_t);

	// device.h:1413
	void SetState(const SamplerState *, const ProgramVariableHandle &);

	// device.h:1414
	void SetState(const SamplerState *, uint32_t);

	// device.h:1417
	void SetState(const RenderTargetState *);

	// device.h:1420
	void SetState(const BlendState *);

	// device.h:1423
	void SetState(const DepthStencilState *);

	// device.h:1424
	void SetState(const DepthStencilState *, uint32_t);

	// device.h:1427
	void SetState(const RasterizerState *);

	// device.h:1430
	void SetState(const VertexProgramState *);

	// device.h:1433
	void SetPixelProgram(const ProgramBuffer *);

	// device.h:1434
	void PS3SetPixelProgram(const ProgramBuffer *, uint32_t);

	// device.h:1437
	void SetState(const ProgramVariableState *);

	// device.h:1440
	void PS3SetVertexProgram(const ProgramBuffer *);

	// device.h:1443
	void SetResource(IndexBuffer *, uint32_t);

	// device.h:1446
	void SetResource(renderengine::VertexBuffer *, uint32_t, uint32_t);

	// device.h:1449
	void SetResource(renderengine::Texture *, uint32_t);

	// device.h:1450
	void SetResource(renderengine::Texture *, const ProgramVariableHandle &);

	// device.h:1457
	void DisableSamplerState(uint32_t);

	// device.h:1460
	void DisableSamplerState(const ProgramVariableHandle &);

	// device.h:1463
	void DisableRenderTargetState();

	// device.h:1466
	void DisableBlendState();

	// device.h:1469
	void DisableDepthStencilState();

	// device.h:1472
	void DisableRasterizerState();

	// device.h:1475
	void DisableVertexProgramState();

	// device.h:1483
	void SetViewport(const ViewportParameters &, renderengine::RenderTargetState::TargetID);

	// device.h:1487
	void SetScissorRect(const ScissorRectParameters &, renderengine::RenderTargetState::TargetID);

	// device.h:1494
	bool BeginConditionalRenderQuery(uint32_t);

	// device.h:1497
	void EndConditionalRenderQuery();

	// device.h:1504
	void Draw(const DrawParameters &);

	// device.h:1507
	void Draw(const DrawIndexedParameters &);

	// device.h:1510
	void Draw(const DrawInstancedParameters &);

	// device.h:1513
	void Draw(const DrawIndexedInstancedParameters &);

	// device.h:1516
	void BeginConditionalRendering(uint32_t);

	// device.h:1519
	void EndConditionalRendering();

	// device.h:1527
	void Clear(const ClearColorParameters &, renderengine::RenderTargetState::TargetID);

	// device.h:1530
	void Clear(const ClearDepthStencilParameters &);

	// device.h:1535
	void Clear(const ClearColorParameters &, const ClearDepthStencilParameters &, renderengine::RenderTargetState::TargetID);

	// device.h:1541
	void Dispatch(const renderengine::StateBuffer *);

	// device.h:1553
	void BeginShaderStates(const ProgramVariableHandle &, BoolShaderStateIterator &);

	// device.h:1554
	void EndShaderStates(BoolShaderStateIterator &);

	// device.h:1560
	bool PS3InitializeGCMAndAllocators(const renderengine::Device::Parameters &);

	// device.h:1563
	uint32_t PS3AddressToOffset(void *);

	// device.h:1566
	void PS3CPUSetLabelValue(uint8_t, uint32_t);

	// device.h:1567
	uint32_t PS3CPUGetLabelValue(uint8_t);

	// device.h:1568
	void PS3CPUWaitLabelSpin(uint8_t, uint32_t);

	// device.h:1569
	void PS3CPUWaitLabelSleep(uint8_t, uint32_t);

	// device.h:1570
	uint32_t * PS3CPUGetLabelAddress(uint8_t);

	// device.h:1573
	void PS3GPUSetWaitLabel(uint8_t, uint32_t);

	// device.h:1574
	void PS3GPUSetLabelBackEnd(uint8_t, uint32_t);

	// device.h:1575
	void PS3GPUSetLabelCommand(uint8_t, uint32_t);

	// device.h:1576
	void PS3GPUSetLabelTexture(uint8_t, uint32_t);

	// device.h:1579
	void PS3GPUSetTimeStamp(uint32_t);

	// device.h:1580
	uint64_t PS3GPUGetTimeStamp(uint32_t);

	// device.h:1582
	void SetNumVSyncToWait(uint32_t);

	// device.h:1589
	void PS3GPUTimerStart();

	// device.h:1590
	uint64_t PS3GPUTimerStop();

	// device.h:1593
	PixelBuffer * PS3GetFrontBuffer();

	// device.h:1596
	uint32_t * PS3CommandBufferOverflowCallback(uint32_t);

	// device.h:1597
	void PS3BeginUserCommandBuffer(uint32_t *, uint32_t);

	// device.h:1598
	uint32_t PS3EndUserCommandBuffer();

	// device.h:1599
	void PS3DispatchUserCommandBuffer(uint32_t *);

	// device.h:1600
	void PS3DispatchUserCommandBuffer(uint32_t);

	// device.h:1603
	void PS3DumpGPUStatus();

	// device.h:1606
	void PS3ValidateRenderState();

protected:
	// device.h:1616
	void PS3SetVertexPointers(uint16_t, uint16_t);

	// device.h:1617
	void VFreqHandler(uint32_t);

}

// device.h:1250
extern renderengine::Device::Parameters::PS3ModeInformation[] m_modeInformation;

// device.h:1287
extern const uint32_t VertexAlignment = 16;

// device.h:1323
extern uint32_t m_maxBatchSize;

// device.h:1324
extern uint32_t m_currentBufferPut;

// device.h:1326
extern const uint8_t m_label;

// device.h:1327
extern uint32_t m_currentLabelIndex;

// device.h:1331
extern renderengine::VertexBuffer * m_vertexBuffer;

// device.h:1333
extern uint32_t m_numSegments;

// device.h:1334
extern uint32_t m_activeSegment;

// device.h:1337
extern DrawParameters m_drawParameters;

// device.h:1345
extern const uint32_t MaxNumSamplerStates = 16;

// device.h:1346
extern const uint32_t MaxNumIndexBuffers = 1;

// device.h:1347
extern const uint32_t MaxNumVertexBuffers = 16;

// device.h:1612
extern const uint32_t MAX_FRAMES_TO_BUFFER = 4;

// device.h:1625
extern const uint32_t m_timerStartIndex = 2046;

// device.h:1626
extern const uint32_t m_timerStopIndex = 2047;

// device.h:1629
extern renderengine::Device::Parameters m_parameterCopy;

// device.h:1658
extern PixelBuffer *[4] m_backBuffers;

// device.h:1659
extern PixelBuffer * m_depthStencilBuffer;

// device.h:1660
extern PixelBuffer * m_proxyBackBuffer;

// device.h:1662
extern RenderTargetState * m_renderTargetState;

// device.h:1667
extern uint32_t m_currentBackBufferIndex;

// device.h:1670
extern uint32_t m_numFramesToBuffer;

// device.h:1672
extern uint32_t m_numVSyncsToWait;

// device.h:1679
extern Vector4[] m_temporaryConstantTable;

// device.h:1680
extern uint32_t m_currentVertexProgramBranchBits;

// device.h:1685
extern uint32_t m_vertexDescriptorChanged;

// device.h:1686
extern uint32_t m_currentVertexAttributeMask;

// device.h:1687
extern const VertexDescriptor * m_currentVertexDescriptor;

// device.h:1690
extern const VertexBuffer *[16] m_currentVertexBuffers;

// device.h:1691
extern uint32_t[16] m_currentStreamOffsets;

// device.h:1692
extern uint32_t m_streamsToSet;

// device.h:1694
extern const IndexBuffer * m_currentIndexBuffer;

// device.h:1700
extern uint32_t * m_userCommandBuffer;

// device.h:1701
extern uint32_t * m_defaultCommandBuffer;

// device.h:1705
extern uint32_t m_reference;

// device.h:1709
extern bool m_conditionalReportEnabled;

// device.h:1710
extern uint32_t m_currentConditionalReportIndex;

// CgsCore.h:144
namespace renderengine {
	// Declaration
	struct Device {
		// device.h:1122
		enum State {
			STATE_NA = -1,
			STATE_COLD = 0,
			STATE_INITIALIZE = 1,
			STATE_START = 2,
			STATE_FORCEENUMSIZEINT = 2147483647,
		}

		// device.h:1138
		struct Parameters {
			// device.h:1139
			enum DisplayType {
				DISPLAYTYPE_NTSC = 0,
				DISPLAYTYPE_PAL_50 = 1,
				DISPLAYTYPE_PAL_60 = 2,
				DISPLAYTYPE_HDTV_480I = 3,
				DISPLAYTYPE_HDTV_480P = 4,
				DISPLAYTYPE_HDTV_576I = 5,
				DISPLAYTYPE_HDTV_576P = 6,
				DISPLAYTYPE_HDTV_720P = 7,
				DISPLAYTYPE_HDTV_960x1080I = 8,
				DISPLAYTYPE_HDTV_960x1080P = 9,
				DISPLAYTYPE_HDTV_1280x1080I = 10,
				DISPLAYTYPE_HDTV_1280x1080P = 11,
				DISPLAYTYPE_HDTV_1440x1080I = 12,
				DISPLAYTYPE_HDTV_1440x1080P = 13,
				DISPLAYTYPE_HDTV_1600x1080I = 14,
				DISPLAYTYPE_HDTV_1600x1080P = 15,
				DISPLAYTYPE_HDTV_1080I = 16,
				DISPLAYTYPE_HDTV_1080P = 17,
				DISPLAYTYPE_DEFAULT = 7,
			}

			// device.h:1166
			enum PS3ScanFormat {
				PS3SCANFORMAT_X8R8G8B8 = 1,
				PS3SCANFORMAT_X8B8G8R8 = 2,
				PS3SCANFORMAT_R16G16B16X16_FLOAT = 3,
				PS3SCANFORMAT_FORCEENUMSIZEINT = 2147483647,
			}

			// device.h:1244
			struct PS3ModeInformation {
				// device.h:1245
				uint32_t xResolution;

				// device.h:1246
				uint32_t yResolution;

				// device.h:1247
				uint32_t resolutionId;

			}

		protected:
			// device.h:1250
			extern renderengine::Device::Parameters::PS3ModeInformation[] m_modeInformation;

			// device.h:1253
			uint32_t cmdSize;

			// device.h:1254
			uint32_t ioSize;

			// device.h:1255
			void * ioAddress;

			// device.h:1257
			uint8_t mode;

			// device.h:1258
			renderengine::Device::Parameters::PS3ScanFormat scanFormat;

			// device.h:1260
			renderengine::PixelFormat colorFormat;

			// device.h:1262
			renderengine::PixelFormat depthStencilFormat;

			// device.h:1263
			bool depthStencilAutoCreate;

			// device.h:1265
			uint32_t width;

			// device.h:1266
			uint32_t height;

			// device.h:1267
			uint32_t resolutionId;

			// device.h:1269
			uint32_t numFramesToBuffer;

			// device.h:1270
			uint32_t numVsyncs;

			// device.h:1271
			bool immediateFlipEnable;

			// device.h:1273
			uint32_t directDrawBufferSize;

			// device.h:1274
			uint32_t directDrawNumSubBuffers;

		public:
			// device.h:1175
			Parameters(renderengine::Device::Parameters::DisplayType);

			// device.h:1195
			bool Validate() const;

			// device.h:1197
			void SetBackBufferWidth(uint32_t);

			// device.h:1198
			void SetBackBufferHeight(uint32_t);

			// device.h:1199
			void SetBackBufferFormat(renderengine::PixelFormat);

			// device.h:1201
			void SetFrontBufferWidth(uint32_t);

			// device.h:1202
			void SetFrontBufferHeight(uint32_t);

			// device.h:1203
			void SetFrontBufferFormat(renderengine::PixelFormat);

			// device.h:1205
			void SetDepthStencilBufferFormat(renderengine::PixelFormat);

			// device.h:1206
			void SetAutoDepthStencilEnable(bool);

			// device.h:1208
			void SetNumFramesToBuffer(uint32_t);

			// device.h:1209
			void SetNumVSyncToWait(uint32_t);

			// device.h:1211
			uint32_t GetBackBufferWidth() const;

			// device.h:1212
			uint32_t GetBackBufferHeight() const;

			// device.h:1213
			renderengine::PixelFormat GetBackBufferFormat() const;

			// device.h:1215
			uint32_t GetFrontBufferWidth() const;

			// device.h:1216
			uint32_t GetFrontBufferHeight() const;

			// device.h:1217
			renderengine::PixelFormat GetFrontBufferFormat() const;

			// device.h:1219
			renderengine::PixelFormat GetDepthStencilBufferFormat() const;

			// device.h:1220
			bool GetAutoDepthStencilEnable() const;

			// device.h:1222
			uint32_t GetNumFramesToBuffer() const;

			// device.h:1223
			uint32_t GetNumVSyncToWait() const;

			// device.h:1226
			void PS3SetCommandBufferSize(uint32_t);

			// device.h:1227
			void PS3SetGraphicsSystemMemoryBuffer(void *);

			// device.h:1228
			void PS3SetGraphicsSystemMemorySize(uint32_t);

			// device.h:1229
			void PS3SetDirectDrawBufferSize(uint32_t);

			// device.h:1230
			void PS3SetDirectDrawNumSubBuffers(uint32_t);

			// device.h:1231
			void PS3SetImmediateFlipEnable(bool);

			// device.h:1233
			void PS3SetMultiSampleType(uint32_t);

			// device.h:1235
			uint32_t PS3GetCommandBufferSize() const;

			// device.h:1236
			uint32_t PS3GetMultiSampleType() const;

		protected:
			// device.h:1240
			void PS3SetDimensions();

		}

		// device.h:1284
		struct DirectDraw {
			// device.h:1293
			struct Parameters {
			protected:
				// device.h:1304
				renderengine::PrimitiveType m_primitiveType;

			public:
				// device.h:1295
				Parameters();

				// device.h:1299
				void SetPrimitiveType(renderengine::PrimitiveType);

				// device.h:1300
				renderengine::PrimitiveType GetPrimitiveType() const;

			}

			// device.h:1310
			struct BatchIterator {
			}

		}

		// device.h:1383
		struct LockedFrontBuffer {
			// device.h:1384
			const void * pixelData;

			// device.h:1385
			renderengine::PixelFormat format;

			// device.h:1386
			uint32_t pitch;

			// device.h:1387
			uint16_t width;

			// device.h:1388
			uint16_t height;

		}

	}

}

// device.h:825
struct renderengine::FloatShaderStateIterator {
	// device.h:828
	extern const uint32_t m_dataType = 1;

	// device.h:907
	Vector4 * m_dest;

	// device.h:908
	ProgramVariableHandle m_handle;

public:
	// device.h:832
	void Write(const rw::math::vpu::Vector4 &);

	// device.h:843
	void Write(const rw::math::vpu::Matrix44 &);

	// device.h:857
	void Write(const rw::math::vpu::Vector4 *, uint32_t);

	// device.h:873
	void Write(const rw::math::vpu::Matrix44Affine &);

	// device.h:881
	void Write(const rw::math::vpu::Matrix44AffinePacked &);

	// device.h:891
	void Increment(uint32_t);

	// device.h:902
	void Write(const Vector4Template<float> &);

	// device.h:903
	void Write(const Matrix44Template<float> &);

	// device.h:904
	// Declaration
	void Write() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// vector4.h:152
		typedef Vector4Template<float> Vector4;

	}

}

// device.h:2013
extern void BeginShaderStates<renderengine::FloatShaderStateIterator>(const const ProgramVariableHandle &  varHandle, const FloatShaderStateIterator &  shaderStateIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// device.h:2065
extern void EndShaderStates<renderengine::FloatShaderStateIterator>(const FloatShaderStateIterator &  shaderStateIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// device.h:2086
		CGprogram program;

		// device.h:2088
		CGparameter param;

		// device.h:2089
		uint32_t uCode;

		// device.h:2090
		Vector4 * source;

	}
}

// device.h:1992
extern bool BeginDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(const const renderengine::Device::DirectDraw::Parameters &  params, const renderengine::Device::DirectDraw::BatchIterator &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// device.h:1897
extern bool BeginBatch<BrnGraphics::SkidVertex::VertexIterator>(uint32_t  numVertices, const BrnGraphics::SkidVertex::VertexIterator &  vertexIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// device.h:1908
		uint32_t requiredSize;

		// device.h:1920
		uint32_t nextBufferPos;

		// device.h:1921
		uint32_t segmentBoundry;

		{
			// device.h:1933
			uint32_t nextSegment;

			{
				// device.h:1946
				uint32_t lastLabelCrossed;

			}
		}
	}
}

// device.h:1977
extern void EndBatch<BrnGraphics::SkidVertex::VertexIterator>(const BrnGraphics::SkidVertex::VertexIterator &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// device.h:2005
extern bool EndDirectDraw<renderengine::Device::DirectDraw::BatchIterator>(const renderengine::Device::DirectDraw::BatchIterator &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// device.h:1897
extern bool BeginBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(uint32_t  numVertices, const CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator &  vertexIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// device.h:1908
		uint32_t requiredSize;

		// device.h:1920
		uint32_t nextBufferPos;

		// device.h:1921
		uint32_t segmentBoundry;

		{
			// device.h:1933
			uint32_t nextSegment;

			{
				// device.h:1946
				uint32_t lastLabelCrossed;

			}
		}
	}
}

// device.h:1977
extern void EndBatch<CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator>(const CgsGraphics::Basic2dColouredTexturedVertex::VertexIterator &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// device.h:2065
extern void EndShaderStates<renderengine::FloatShaderStateIterator>(const FloatShaderStateIterator &  shaderStateIterator) {
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
		(None)unknown_arg
		(None)unknown_arg
		(None)unknown_arg
		{
			{
			}
		}
	}
	{
		(None)unknown_arg
	}
	{
		// device.h:2086
		CGprogram program;

		// device.h:2088
		CGparameter param;

		// device.h:2089
		uint32_t uCode;

		// device.h:2090
		Vector4 * source;

		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			{
				(None)unknown_arg
				{
					(None)unknown_arg
				}
			}
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
		{
			(None)unknown_arg
			(None)unknown_arg
			{
				(None)unknown_arg
				(None)unknown_arg
			}
		}
	}
}

// device.h:1897
extern bool BeginBatch<renderengine::VertexIterator5<renderengine::VertexTypeFloat3, renderengine::VertexTypeFloat4, renderengine::VertexTypeFloat4, renderengine::VertexTypeFloat4, renderengine::VertexTypeFloat4> >(uint32_t  numVertices, const VertexIterator5<renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat4> &  vertexIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// device.h:1908
		uint32_t requiredSize;

		// device.h:1920
		uint32_t nextBufferPos;

		// device.h:1921
		uint32_t segmentBoundry;

		{
			// device.h:1933
			uint32_t nextSegment;

			{
				// device.h:1946
				uint32_t lastLabelCrossed;

			}
		}
	}
}

// device.h:1977
extern void EndBatch<renderengine::VertexIterator5<renderengine::VertexTypeFloat3, renderengine::VertexTypeFloat4, renderengine::VertexTypeFloat4, renderengine::VertexTypeFloat4, renderengine::VertexTypeFloat4> >(const VertexIterator5<renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat4> &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// device.h:1897
extern bool BeginBatch<BrnSunCoronaVertexIterator>(uint32_t  numVertices, const BrnSunCoronaVertexIterator &  vertexIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// device.h:1908
		uint32_t requiredSize;

		// device.h:1920
		uint32_t nextBufferPos;

		// device.h:1921
		uint32_t segmentBoundry;

		{
			// device.h:1933
			uint32_t nextSegment;

			{
				// device.h:1946
				uint32_t lastLabelCrossed;

			}
		}
	}
}

// device.h:1977
extern void EndBatch<BrnSunCoronaVertexIterator>(const BrnSunCoronaVertexIterator &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// device.h:1897
extern bool BeginBatch<CgsGraphics::Basic2dColouredVertex::VertexIterator>(uint32_t  numVertices, const CgsGraphics::Basic2dColouredVertex::VertexIterator &  vertexIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// device.h:1908
		uint32_t requiredSize;

		// device.h:1920
		uint32_t nextBufferPos;

		// device.h:1921
		uint32_t segmentBoundry;

		{
			// device.h:1933
			uint32_t nextSegment;

			{
				// device.h:1946
				uint32_t lastLabelCrossed;

			}
		}
	}
}

// device.h:1977
extern void EndBatch<CgsGraphics::Basic2dColouredVertex::VertexIterator>(const CgsGraphics::Basic2dColouredVertex::VertexIterator &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// device.h:1897
extern bool BeginBatch<CgsGraphics::BasicColouredTexturedVertex::VertexIterator>(uint32_t  numVertices, const CgsGraphics::BasicColouredTexturedVertex::VertexIterator &  vertexIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// device.h:1908
		uint32_t requiredSize;

		// device.h:1920
		uint32_t nextBufferPos;

		// device.h:1921
		uint32_t segmentBoundry;

		{
			// device.h:1933
			uint32_t nextSegment;

			{
				// device.h:1946
				uint32_t lastLabelCrossed;

			}
		}
	}
}

// device.h:1977
extern void EndBatch<CgsGraphics::BasicColouredTexturedVertex::VertexIterator>(const CgsGraphics::BasicColouredTexturedVertex::VertexIterator &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// device.h:1889
extern uint32_t GetMaxVerticesBatch<renderengine::VertexIterator4<renderengine::VertexTypeFloat4, renderengine::VertexTypeFloat3, renderengine::VertexTypeFloat4, renderengine::VertexTypePS3Color> >(const const VertexIterator4<renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat4,renderengine::VertexTypePS3Color> &  iterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// device.h:1897
extern bool BeginBatch<renderengine::VertexIterator4<renderengine::VertexTypeFloat4, renderengine::VertexTypeFloat3, renderengine::VertexTypeFloat4, renderengine::VertexTypePS3Color> >(uint32_t  numVertices, const VertexIterator4<renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat4,renderengine::VertexTypePS3Color> &  vertexIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// device.h:1908
		uint32_t requiredSize;

		// device.h:1920
		uint32_t nextBufferPos;

		// device.h:1921
		uint32_t segmentBoundry;

		{
			// device.h:1933
			uint32_t nextSegment;

			{
				// device.h:1946
				uint32_t lastLabelCrossed;

			}
		}
	}
}

// device.h:1977
extern void EndBatch<renderengine::VertexIterator4<renderengine::VertexTypeFloat4, renderengine::VertexTypeFloat3, renderengine::VertexTypeFloat4, renderengine::VertexTypePS3Color> >(const VertexIterator4<renderengine::VertexTypeFloat4,renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat4,renderengine::VertexTypePS3Color> &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// device.h:1897
extern bool BeginBatch<renderengine::VertexIterator3<renderengine::VertexTypeFloat3, renderengine::VertexTypeFloat2, renderengine::VertexTypeFloat4> >(uint32_t  numVertices, const VertexIterator3<renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat2,renderengine::VertexTypeFloat4> &  vertexIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// device.h:1908
		uint32_t requiredSize;

		// device.h:1920
		uint32_t nextBufferPos;

		// device.h:1921
		uint32_t segmentBoundry;

		{
			// device.h:1933
			uint32_t nextSegment;

			{
				// device.h:1946
				uint32_t lastLabelCrossed;

			}
		}
	}
}

// device.h:1977
extern void EndBatch<renderengine::VertexIterator3<renderengine::VertexTypeFloat3, renderengine::VertexTypeFloat2, renderengine::VertexTypeFloat4> >(const VertexIterator3<renderengine::VertexTypeFloat3,renderengine::VertexTypeFloat2,renderengine::VertexTypeFloat4> &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// device.h:1897
extern bool BeginBatch<CgsGraphics::BasicColouredVertex::VertexIterator>(uint32_t  numVertices, const CgsGraphics::BasicColouredVertex::VertexIterator &  vertexIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// device.h:1908
		uint32_t requiredSize;

		// device.h:1920
		uint32_t nextBufferPos;

		// device.h:1921
		uint32_t segmentBoundry;

		{
			// device.h:1933
			uint32_t nextSegment;

			{
				// device.h:1946
				uint32_t lastLabelCrossed;

			}
		}
	}
}

// device.h:1977
extern void EndBatch<CgsGraphics::BasicColouredVertex::VertexIterator>(const CgsGraphics::BasicColouredVertex::VertexIterator &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// device.h:1119
struct renderengine::Device {
	// device.h:1345
	extern const uint32_t MaxNumSamplerStates = 16;

	// device.h:1346
	extern const uint32_t MaxNumIndexBuffers = 1;

	// device.h:1347
	extern const uint32_t MaxNumVertexBuffers = 16;

	// device.h:1348
	extern const uint32_t MaxNumPendingFences = 2147483647;

	// device.h:1350
	extern const uint32_t NumTiledRegions = 14;

	// device.h:1351
	extern const uint32_t NumDisplayBuffers = 8;

	// device.h:1352
	extern const uint32_t NumShaderConstants = 468;

	// device.h:1353
	extern const uint32_t NumConditionalRenderIDs = 256;

	// device.h:1612
	extern const uint32_t MAX_FRAMES_TO_BUFFER = 4;

protected:
	// device.h:1620
	extern const uint8_t m_deviceSyncLabel = 253;

	// device.h:1621
	extern const uint8_t m_directDrawLabel = 254;

	// device.h:1622
	extern const uint8_t m_fenceLabel = 255;

	// device.h:1625
	extern const uint32_t m_timerStartIndex = 2046;

	// device.h:1626
	extern const uint32_t m_timerStopIndex = 2047;

	// device.h:1628
	extern renderengine::Device::State m_currentState;

	// device.h:1629
	extern renderengine::Device::Parameters m_parameterCopy;

	// device.h:1631
	extern uint32_t m_cmdSize;

	// device.h:1636
	extern void * m_gcmLocalAddress;

	// device.h:1637
	extern void * m_gcmIOAddress;

	// device.h:1638
	extern uint64_t m_gcmLocalSize;

	// device.h:1639
	extern uint64_t m_gcmIOSize;

	// device.h:1640
	extern uint32_t m_gcmMemoryFrequency;

	// device.h:1641
	extern uint32_t m_gcmCoreFrequency;

	// device.h:1642
	extern bool m_memoryInitialized;

	// device.h:1647
	extern uint8_t m_mode;

	// device.h:1648
	extern uint8_t m_scanFormat;

	// device.h:1649
	extern uint8_t m_sync;

	// device.h:1650
	extern uint32_t m_colorFormat;

	// device.h:1651
	extern uint32_t m_framePitch;

	// device.h:1652
	extern uint32_t m_depthStencilFormat;

	// device.h:1653
	extern bool m_depthStencilAutoCreate;

	// device.h:1658
	extern renderengine::PixelBuffer *[4] m_backBuffers;

	// device.h:1659
	extern renderengine::PixelBuffer * m_depthStencilBuffer;

	// device.h:1660
	extern renderengine::PixelBuffer * m_proxyBackBuffer;

	// device.h:1662
	extern RenderTargetState * m_renderTargetState;

	// device.h:1667
	extern uint32_t m_currentBackBufferIndex;

	// device.h:1668
	extern uint32_t[4] m_nextBackBufferIndex;

	// device.h:1669
	extern uint32_t m_numFramesRendered;

	// device.h:1670
	extern uint32_t m_numFramesToBuffer;

	// device.h:1672
	extern uint32_t m_numVSyncsToWait;

	// device.h:1673
	extern uint32_t volatile m_numVSyncs;

	// device.h:1674
	extern uint32_t m_lastNumVSyncs;

	// device.h:1675
	extern uint32_t m_immediateFlipEnable;

	// device.h:1676
	extern uint32_t m_lastFenceWritten;

	// device.h:1677
	extern uint32_t m_lastFenceCrossed;

	// device.h:1679
	extern Vector4[] m_temporaryConstantTable;

	// device.h:1680
	extern uint32_t m_currentVertexProgramBranchBits;

	// device.h:1682
	extern ScissorRectParameters m_currentScissorRect;

	// device.h:1685
	extern uint32_t m_vertexDescriptorChanged;

	// device.h:1686
	extern uint32_t m_currentVertexAttributeMask;

	// device.h:1687
	extern const renderengine::VertexDescriptor * m_currentVertexDescriptor;

	// device.h:1690
	extern const VertexBuffer *[16] m_currentVertexBuffers;

	// device.h:1691
	extern uint32_t[16] m_currentStreamOffsets;

	// device.h:1692
	extern uint32_t m_streamsToSet;

	// device.h:1694
	extern const IndexBuffer * m_currentIndexBuffer;

	// device.h:1700
	extern uint32_t * m_userCommandBuffer;

	// device.h:1701
	extern uint32_t * m_defaultCommandBuffer;

	// Unknown accessibility
	// device.h:1705
	extern uint32_t m_reference;

	// device.h:1709
	extern bool m_conditionalReportEnabled;

	// device.h:1710
	extern uint32_t m_currentConditionalReportIndex;

public:
	// device.h:1361
	renderengine::Device::State GetState();

	// device.h:1363
	bool Initialize();

	// device.h:1364
	void Release();

	// device.h:1366
	bool Start(const renderengine::Device::Parameters &);

	// device.h:1367
	bool Reset(const renderengine::Device::Parameters &);

	// device.h:1368
	void Stop();

	// device.h:1370
	void GetParameters(renderengine::Device::Parameters &);

	// device.h:1371
	uint32_t GetNumAvailableSamplers();

	// device.h:1373
	renderengine::PixelBuffer * GetBackBuffer();

	// device.h:1374
	renderengine::PixelBuffer * GetDepthStencilBuffer();

	// device.h:1375
	const RenderTargetState * GetDefaultRenderTargetState();

	// device.h:1377
	bool FrameBegin();

	// device.h:1378
	void FrameEnd();

	// device.h:1380
	void ShowPixelBuffer(renderengine::PixelBuffer *);

	// device.h:1391
	bool LockFrontBuffer(renderengine::Device::LockedFrontBuffer &);

	// device.h:1392
	void UnlockFrontBuffer(renderengine::Device::LockedFrontBuffer &);

	// device.h:1397
	void Flush();

	// device.h:1398
	void BlockUntilIdle();

	// device.h:1400
	uint32_t InsertFence();

	// device.h:1401
	bool IsFencePending(uint32_t);

	// device.h:1402
	void BlockUntilFence(uint32_t);

	// device.h:1403
	uint32_t GetMaxNumPendingFences();

	// device.h:1405
	uint32_t GetCurrentFrameIndex();

	// device.h:1406
	bool IsFrameFinished(uint32_t);

	// device.h:1413
	void SetState(const SamplerState *, const ProgramVariableHandle &);

	// device.h:1414
	void SetState(const SamplerState *, uint32_t);

	// device.h:1417
	void SetState(const RenderTargetState *);

	// device.h:1420
	void SetState(const BlendState *);

	// device.h:1423
	void SetState(const DepthStencilState *);

	// device.h:1424
	void SetState(const DepthStencilState *, uint32_t);

	// device.h:1427
	void SetState(const RasterizerState *);

	// device.h:1430
	void SetState(const VertexProgramState *);

	// device.h:1433
	void SetPixelProgram(const renderengine::ProgramBuffer *);

	// device.h:1434
	void PS3SetPixelProgram(const renderengine::ProgramBuffer *, uint32_t);

	// device.h:1437
	void SetState(const ProgramVariableState *);

	// device.h:1440
	void PS3SetVertexProgram(const renderengine::ProgramBuffer *);

	// device.h:1443
	void SetResource(IndexBuffer *, uint32_t);

	// device.h:1446
	void SetResource(renderengine::VertexBuffer *, uint32_t, uint32_t);

	// device.h:1449
	void SetResource(renderengine::Texture *, uint32_t);

	// device.h:1450
	void SetResource(renderengine::Texture *, const ProgramVariableHandle &);

	// device.h:1457
	void DisableSamplerState(uint32_t);

	// device.h:1460
	void DisableSamplerState(const ProgramVariableHandle &);

	// device.h:1463
	void DisableRenderTargetState();

	// device.h:1466
	void DisableBlendState();

	// device.h:1469
	void DisableDepthStencilState();

	// device.h:1472
	void DisableRasterizerState();

	// device.h:1475
	void DisableVertexProgramState();

	// device.h:1483
	void SetViewport(const ViewportParameters &, renderengine::RenderTargetState::TargetID);

	// device.h:1487
	void SetScissorRect(const ScissorRectParameters &, renderengine::RenderTargetState::TargetID);

	// device.h:1494
	bool BeginConditionalRenderQuery(uint32_t);

	// device.h:1497
	void EndConditionalRenderQuery();

	// device.h:1504
	void Draw(const DrawParameters &);

	// device.h:1507
	void Draw(const DrawIndexedParameters &);

	// device.h:1510
	void Draw(const DrawInstancedParameters &);

	// device.h:1513
	void Draw(const DrawIndexedInstancedParameters &);

	// device.h:1516
	void BeginConditionalRendering(uint32_t);

	// device.h:1519
	void EndConditionalRendering();

	// device.h:1527
	void Clear(const ClearColorParameters &, renderengine::RenderTargetState::TargetID);

	// device.h:1530
	void Clear(const ClearDepthStencilParameters &);

	// device.h:1535
	void Clear(const ClearColorParameters &, const ClearDepthStencilParameters &, renderengine::RenderTargetState::TargetID);

	// device.h:1541
	void Dispatch(const renderengine::StateBuffer *);

	// device.h:1553
	void BeginShaderStates(const ProgramVariableHandle &, BoolShaderStateIterator &);

	// device.h:1554
	void EndShaderStates(BoolShaderStateIterator &);

	// device.h:1560
	bool PS3InitializeGCMAndAllocators(const renderengine::Device::Parameters &);

	// device.h:1563
	uint32_t PS3AddressToOffset(void *);

	// device.h:1566
	void PS3CPUSetLabelValue(uint8_t, uint32_t);

	// device.h:1567
	uint32_t PS3CPUGetLabelValue(uint8_t);

	// device.h:1568
	void PS3CPUWaitLabelSpin(uint8_t, uint32_t);

	// device.h:1569
	void PS3CPUWaitLabelSleep(uint8_t, uint32_t);

	// device.h:1570
	uint32_t * PS3CPUGetLabelAddress(uint8_t);

	// device.h:1573
	void PS3GPUSetWaitLabel(uint8_t, uint32_t);

	// device.h:1574
	void PS3GPUSetLabelBackEnd(uint8_t, uint32_t);

	// device.h:1575
	void PS3GPUSetLabelCommand(uint8_t, uint32_t);

	// device.h:1576
	void PS3GPUSetLabelTexture(uint8_t, uint32_t);

	// device.h:1579
	void PS3GPUSetTimeStamp(uint32_t);

	// device.h:1580
	uint64_t PS3GPUGetTimeStamp(uint32_t);

	// device.h:1582
	void SetNumVSyncToWait(uint32_t);

	// device.h:1589
	void PS3GPUTimerStart();

	// device.h:1590
	uint64_t PS3GPUTimerStop();

	// device.h:1593
	renderengine::PixelBuffer * PS3GetFrontBuffer();

	// device.h:1596
	uint32_t * PS3CommandBufferOverflowCallback(uint32_t);

	// device.h:1597
	void PS3BeginUserCommandBuffer(uint32_t *, uint32_t);

	// device.h:1598
	uint32_t PS3EndUserCommandBuffer();

	// device.h:1599
	void PS3DispatchUserCommandBuffer(uint32_t *);

	// device.h:1600
	void PS3DispatchUserCommandBuffer(uint32_t);

	// device.h:1603
	void PS3DumpGPUStatus();

	// device.h:1606
	void PS3ValidateRenderState();

protected:
	// device.h:1616
	void PS3SetVertexPointers(uint16_t, uint16_t);

	// device.h:1617
	void VFreqHandler(uint32_t);

}

// device.h:1897
extern bool BeginBatch<CgsGraphics::PositionOnlyVertex::VertexIterator>(uint32_t  numVertices, const CgsGraphics::PositionOnlyVertex::VertexIterator &  vertexIterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// device.h:1908
		uint32_t requiredSize;

		// device.h:1920
		uint32_t nextBufferPos;

		// device.h:1921
		uint32_t segmentBoundry;

		{
			// device.h:1933
			uint32_t nextSegment;

			{
				// device.h:1946
				uint32_t lastLabelCrossed;

			}
		}
	}
}

// device.h:1977
extern void EndBatch<CgsGraphics::PositionOnlyVertex::VertexIterator>(const CgsGraphics::PositionOnlyVertex::VertexIterator &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// device.h:1658
extern renderengine::PixelBuffer *[4] m_backBuffers;

// device.h:1659
extern renderengine::PixelBuffer * m_depthStencilBuffer;

// device.h:1660
extern renderengine::PixelBuffer * m_proxyBackBuffer;

// device.h:1682
extern ScissorRectParameters m_currentScissorRect;

// device.h:1687
extern const renderengine::VertexDescriptor * m_currentVertexDescriptor;


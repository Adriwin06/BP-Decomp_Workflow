// BrnDispatchThreadInputBuffer.h:49
struct BrnGame::SnapShotRequest {
	// BrnDispatchThreadInputBuffer.h:52
	float mfStartX;

	// BrnDispatchThreadInputBuffer.h:53
	float mfStartY;

	// BrnDispatchThreadInputBuffer.h:54
	float mfWidth;

	// BrnDispatchThreadInputBuffer.h:55
	float mfHeight;

	// BrnDispatchThreadInputBuffer.h:56
	bool mbTakeSnapShot;

}

// BrnDispatchThreadInputBuffer.h:68
struct BrnGame::DispatchThreadInputBuffer : public IOBuffer {
private:
	// BrnDispatchThreadInputBuffer.h:191
	uint32_t mxRendererFlags;

	// BrnDispatchThreadInputBuffer.h:192
	int32_t miBrightness;

	// BrnDispatchThreadInputBuffer.h:193
	int32_t miContrast;

	// BrnDispatchThreadInputBuffer.h:194
	BrnParticle::ParticleModule::DispatchThreadUpdateData mParticleData;

	// BrnDispatchThreadInputBuffer.h:195
	BrnParticle::ParticleModule::ParticleRenderData mParticleRenderData;

	// BrnDispatchThreadInputBuffer.h:196
	BrnCrashTriangleCache mBufferCrashTriangleCache;

	// Unknown accessibility
	// BrnParticleModuleIO_EventTypes.h:161
	typedef InterThreadEventQueue<16384> CappedInterThreadEventQueue;

	// BrnDispatchThreadInputBuffer.h:197
	DispatchThreadInputBuffer::CappedInterThreadEventQueue mParticleInterThreadEventQueue;

	// BrnDispatchThreadInputBuffer.h:198
	BrnGame::ELoadingScreenCommand meLoadingScreenCommand;

	// BrnDispatchThreadInputBuffer.h:204
	ResourceHandle mhCalibrationTextureHandle;

	// BrnDispatchThreadInputBuffer.h:205
	SnapShotRequest mSnapShotRequest;

	// BrnDispatchThreadInputBuffer.h:207
	bool mbIsRenderingAtFullFrameRate;

	// BrnDispatchThreadInputBuffer.h:208
	bool[3] mabThreeThreadsOverBudget;

	// BrnDispatchThreadInputBuffer.h:209
	bool[6] mabEnvMapFaceRender;

	// BrnDispatchThreadInputBuffer.h:210
	bool mbIsWriteBuffer;

	// BrnDispatchThreadInputBuffer.h:211
	bool mbCalibrationUnfriendlyEnablePostFx;

	// BrnDispatchThreadInputBuffer.h:212
	bool mbIsStalled;

	// BrnDispatchThreadInputBuffer.h:213
	bool mbIsDiskError;

	// BrnDispatchThreadInputBuffer.h:215
	Matrix44 mOcclusionViewProjectionMatrix;

public:
	// BrnDispatchThreadInputBuffer.h:80
	void Construct();

	// BrnDispatchThreadInputBuffer.h:84
	void Destruct();

	// BrnDispatchThreadInputBuffer.h:88
	bool IsWriteBuffer() const;

	// BrnDispatchThreadInputBuffer.h:92
	bool IsReadBuffer() const;

	// BrnDispatchThreadInputBuffer.h:94
	uint32_t GetRendererFlags() const;

	// BrnDispatchThreadInputBuffer.h:95
	void SetRendererFlags(uint32_t);

	// BrnDispatchThreadInputBuffer.h:97
	const BrnParticle::ParticleModule::DispatchThreadUpdateData * GetParticleData() const;

	// BrnDispatchThreadInputBuffer.h:98
	BrnParticle::ParticleModule::DispatchThreadUpdateData * GetParticleData();

	// BrnDispatchThreadInputBuffer.h:100
	const BrnParticle::ParticleModule::ParticleRenderData * GetParticleRenderData() const;

	// BrnDispatchThreadInputBuffer.h:101
	BrnParticle::ParticleModule::ParticleRenderData * GetParticleRenderData();

	// BrnDispatchThreadInputBuffer.h:103
	const BrnEffects::BrnCrashTriangleCache * GetBufferCrashTriangleCache() const;

	// BrnDispatchThreadInputBuffer.h:104
	BrnCrashTriangleCache * GetBufferCrashTriangleCache();

	// BrnDispatchThreadInputBuffer.h:106
	const DispatchThreadInputBuffer::CappedInterThreadEventQueue * GetParticleInterThreadEventQueue() const;

	// BrnDispatchThreadInputBuffer.h:107
	DispatchThreadInputBuffer::CappedInterThreadEventQueue * GetParticleInterThreadEventQueue();

	// BrnDispatchThreadInputBuffer.h:108
	void AppendParticleInterThreadEventQueue(const DispatchThreadInputBuffer::CappedInterThreadEventQueue *);

	// BrnDispatchThreadInputBuffer.h:110
	int32_t GetBrightness() const;

	// BrnDispatchThreadInputBuffer.h:111
	void SetBrightness(int32_t);

	// BrnDispatchThreadInputBuffer.h:113
	int32_t GetContrast() const;

	// BrnDispatchThreadInputBuffer.h:114
	void SetContrast(int32_t);

	// BrnDispatchThreadInputBuffer.h:116
	bool GetCalibrationUnfriendlyEnablePostFx() const;

	// BrnDispatchThreadInputBuffer.h:117
	void SetCalibrationUnfriendlyEnablePostFx(bool);

	// BrnDispatchThreadInputBuffer.h:119
	ResourceHandle GetCalibrationTextureHandle() const;

	// BrnDispatchThreadInputBuffer.h:120
	void SetCalibrationTextureHandle(ResourceHandle);

	// BrnDispatchThreadInputBuffer.h:122
	bool GetIsStalled() const;

	// BrnDispatchThreadInputBuffer.h:123
	void SetIsStalled(bool);

	// BrnDispatchThreadInputBuffer.h:130
	bool GetIsDiskError() const;

	// BrnDispatchThreadInputBuffer.h:131
	void SetIsDiskError(bool);

	// BrnDispatchThreadInputBuffer.h:133
	const SnapShotRequest * GetSnapShotRequest() const;

	// BrnDispatchThreadInputBuffer.h:134
	SnapShotRequest * GetSnapShotRequest();

	// BrnDispatchThreadInputBuffer.h:135
	void SetSnapShotRequest(const SnapShotRequest *);

	// BrnDispatchThreadInputBuffer.h:141
	void SetEnvMapFaceRender(uint32_t, bool);

	// BrnDispatchThreadInputBuffer.h:145
	bool GetEnvMapFaceRender(uint32_t) const;

	// BrnDispatchThreadInputBuffer.h:151
	void SetThreadsOverBudget(bool, bool, bool);

	// BrnDispatchThreadInputBuffer.h:157
	void GetThreadsOverBudget(bool &, bool &, bool &) const;

	// BrnDispatchThreadInputBuffer.h:160
	const rw::math::vpu::Matrix44 & GetOcclusionViewProjectionMatrix() const;

	// BrnDispatchThreadInputBuffer.h:163
	void SetOcclusionViewProjectionMatrix(Matrix44);

	// BrnDispatchThreadInputBuffer.h:166
	void ShowLoadingScreen();

	// BrnDispatchThreadInputBuffer.h:169
	void ShowLoadingScreenSaveLoadBG();

	// BrnDispatchThreadInputBuffer.h:172
	void HideLoadingScreen();

	// BrnDispatchThreadInputBuffer.h:175
	void BlackOverlayFadeIn();

	// BrnDispatchThreadInputBuffer.h:178
	void BlackOverlayFadeOut();

	// BrnDispatchThreadInputBuffer.h:181
	bool GetIsRenderingAtFullFrameRate() const;

	// BrnDispatchThreadInputBuffer.h:185
	void SetIsRenderingAtFullFrameRate(bool);

	// BrnDispatchThreadInputBuffer.h:188
	BrnGame::ELoadingScreenCommand GetLoadingScreenCommand() const;

}

// BrnDispatchThreadInputBuffer.h:341
struct BrnGame::DispatchThreadInputBufferManager {
private:
	// BrnDispatchThreadInputBuffer.h:363
	DispatchThreadInputBuffer *[2] mapBuffers;

	// BrnDispatchThreadInputBuffer.h:364
	DispatchThreadInputBuffer * mpWriteBuffer;

	// BrnDispatchThreadInputBuffer.h:365
	DispatchThreadInputBuffer * mpReadBuffer;

	// BrnDispatchThreadInputBuffer.h:366
	uint32_t muWriteBufferIndex;

public:
	// BrnDispatchThreadInputBuffer.h:346
	void Construct(IOBufferStack *);

	// BrnDispatchThreadInputBuffer.h:351
	void Destruct(IOBufferStack *);

	// BrnDispatchThreadInputBuffer.h:354
	void Swap();

	// BrnDispatchThreadInputBuffer.h:357
	DispatchThreadInputBuffer * GetWriteBuffer();

	// BrnDispatchThreadInputBuffer.h:360
	DispatchThreadInputBuffer * GetReadBuffer();

}


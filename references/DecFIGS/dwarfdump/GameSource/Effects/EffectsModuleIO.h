// BrnEffectsDebugComponent.h:36
namespace BrnEffects {
	// EffectsModuleIO.h:78
	namespace EffectsIO {
		struct InputBuffer;

		struct DispatchInputBuffer;

		struct OutputBuffer;

	}

	// EffectsModuleIO.h:56
	const int32_t KI_EVENT_QUEUE_MAX_SIZE = 4096;

}

// EffectsModuleIO.h:89
struct BrnEffects::EffectsIO::InputBuffer : public IOBuffer {
	// EffectsModuleIO.h:160
	BoostOutputInfo[8] maBoostInfos;

	// EffectsModuleIO.h:66
	typedef VariableEventQueue<4096,16> InAttribSysUserEventQueue;

private:
	// EffectsModuleIO.h:165
	InputBuffer::InAttribSysUserEventQueue mInEventQueue;

	// EffectsModuleIO.h:167
	RCEntityActiveRaceCarOutputInterface mActiveRaceCarInterface;

	// EffectsModuleIO.h:168
	VehicleOutputInterface::PhysicalTrafficStateQueue mVehiclePhysicalStateQueue;

	// EffectsModuleIO.h:169
	Camera mCameraInput;

	// EffectsModuleIO.h:170
	TimerStatusInterface mTimerStatusInterface;

	// EffectsModuleIO.h:171
	ContactSpyInterface mContactSpyInterface;

	// EffectsModuleIO.h:172
	DeformationOutputInterface mDeformationInterface;

	// EffectsModuleIO.h:173
	InputBuffer::GameActionQueue mGameActionQueue;

	// EffectsModuleIO.h:174
	EffectsEnvironmentInterface mEffectsEnvironmentInterface;

	// Unknown accessibility
	// EffectsModuleIO.h:69
	typedef StatusInterface ReplayStatusInterface;

	// EffectsModuleIO.h:175
	InputBuffer::ReplayStatusInterface mReplayStatusInterface;

	// EffectsModuleIO.h:176
	OutputBuffer_PostPhysics::PropVFXLocatorQueue mPropVFXLocatorQueue;

	// Unknown accessibility
	// EffectsModuleIO.h:73
	typedef TriangleCacheInterface InTriangleCacheInterface;

	// EffectsModuleIO.h:177
	InputBuffer::InTriangleCacheInterface mTriangleCacheInterface;

	// EffectsModuleIO.h:178
	AudioEffectsMessageQueue mAudioEffectsMessageQueue;

public:
	// EffectsModuleIO.h:94
	void Construct();

	// EffectsModuleIO.h:98
	void Destruct();

	// EffectsModuleIO.h:109
	void SetActiveRaceCarInterface(const RCEntityActiveRaceCarOutputInterface *);

	// EffectsModuleIO.h:110
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface * GetActiveRaceCarInterface();

	// EffectsModuleIO.h:111
	const RCEntityActiveRaceCarOutputInterface * GetActiveRaceCarInterface() const;

	// EffectsModuleIO.h:113
	void SetVehiclePhysicalStateQueue(const VehicleOutputInterface::PhysicalTrafficStateQueue *);

	// EffectsModuleIO.h:114
	VehicleOutputInterface::PhysicalTrafficStateQueue * GetVehiclePhysicalStateQueue();

	// EffectsModuleIO.h:115
	const VehicleOutputInterface::PhysicalTrafficStateQueue * GetVehiclePhysicalStateQueue() const;

	// EffectsModuleIO.h:117
	void SetCameraInput(const Camera *);

	// EffectsModuleIO.h:118
	Camera * GetCameraInput();

	// EffectsModuleIO.h:119
	const Camera * GetCameraInput() const;

	// EffectsModuleIO.h:121
	void SetTimerStatusInterface(const TimerStatusInterface *);

	// EffectsModuleIO.h:122
	TimerStatusInterface * GetTimerStatusInterface();

	// EffectsModuleIO.h:123
	const TimerStatusInterface * GetTimerStatusInterface() const;

	// EffectsModuleIO.h:125
	void SetContactSpyInterface(const ContactSpyInterface *);

	// EffectsModuleIO.h:126
	ContactSpyInterface * GetContactSpyInterface();

	// EffectsModuleIO.h:127
	const ContactSpyInterface * GetContactSpyInterface() const;

	// EffectsModuleIO.h:129
	void SetDeformationInterface(const DeformationOutputInterface *);

	// EffectsModuleIO.h:130
	DeformationOutputInterface * GetDeformationInterface();

	// EffectsModuleIO.h:131
	const DeformationOutputInterface * GetDeformationInterface() const;

	// EffectsModuleIO.h:134
	void SetBoostInfoN(int32_t, const BoostOutputInfo *);

	// EffectsModuleIO.h:136
	void SetGameActionQueue(const InputBuffer::GameActionQueue *);

	// EffectsModuleIO.h:137
	InputBuffer::GameActionQueue * GetGameActionQueue();

	// EffectsModuleIO.h:138
	const InputBuffer::GameActionQueue * GetGameActionQueue() const;

	// EffectsModuleIO.h:140
	const InputBuffer::ReplayStatusInterface * GetReplayStatusInterface() const;

	// EffectsModuleIO.h:141
	void SetReplayStatusInterface(const InputBuffer::ReplayStatusInterface *);

	// EffectsModuleIO.h:143
	void SetEffectsEnvironmentInterface(const EffectsEnvironmentInterface *);

	// EffectsModuleIO.h:144
	EffectsEnvironmentInterface * GetEffectsEnvironmentInterface();

	// EffectsModuleIO.h:145
	const EffectsEnvironmentInterface * GetEffectsEnvironmentInterface() const;

	// EffectsModuleIO.h:147
	void SetPropVFXLocatorQueue(const OutputBuffer_PostPhysics::PropVFXLocatorQueue *);

	// EffectsModuleIO.h:148
	OutputBuffer_PostPhysics::PropVFXLocatorQueue * GetPropVFXLocatorQueue();

	// EffectsModuleIO.h:149
	const OutputBuffer_PostPhysics::PropVFXLocatorQueue * GetPropVFXLocatorQueue() const;

	// EffectsModuleIO.h:151
	void SetTriangleCacheInterface(const InputBuffer::InTriangleCacheInterface *);

	// EffectsModuleIO.h:152
	const InputBuffer::InTriangleCacheInterface * GetTriangleCacheInterface() const;

	// EffectsModuleIO.h:154
	void SetAudioEffectsMessageQueue(const AudioEffectsMessageQueue *);

	// EffectsModuleIO.h:155
	AudioEffectsMessageQueue * GetAudioEffectsMessageQueue();

	// EffectsModuleIO.h:156
	const AudioEffectsMessageQueue * GetAudioEffectsMessageQueue() const;

}

// EffectsModuleIO.h:196
struct BrnEffects::EffectsIO::DispatchInputBuffer : public IOBuffer {
private:
	// EffectsModuleIO.h:254
	BrnEffectsFrame * mpBaseEffectsFrame;

	// EffectsModuleIO.h:255
	BrnEffectsFrame *[2] mapFXEventsEffectsFrames;

	// EffectsModuleIO.h:257
	CgsGraphics::DispatchFrame * mpDispatchFrame;

	// EffectsModuleIO.h:258
	Vector3 mKeyLightDirection;

	// EffectsModuleIO.h:259
	Vector3 mKeyLightColour;

	// EffectsModuleIO.h:260
	Vector3 mAverageIrradianceColour;

	// EffectsModuleIO.h:261
	Camera mCameraInput;

	// EffectsModuleIO.h:262
	const Texture * mpEnvironmentMap;

	// EffectsModuleIO.h:263
	float32_t mfWhiteLevel;

public:
	// EffectsModuleIO.h:201
	void Construct();

	// EffectsModuleIO.h:205
	void Destruct();

	// EffectsModuleIO.h:210
	void SetDispatchFrame(CgsGraphics::DispatchFrame *);

	// EffectsModuleIO.h:213
	CgsGraphics::DispatchFrame * GetDispatchFrame() const;

	// EffectsModuleIO.h:216
	void SetBaseEffectsFrame(BrnEffectsFrame *);

	// EffectsModuleIO.h:218
	BrnEffectsFrame * GetBaseEffectsFrame() const;

	// EffectsModuleIO.h:223
	void SetFXEventsEffectsFrame(uint8_t, BrnEffectsFrame *);

	// EffectsModuleIO.h:225
	BrnEffectsFrame * GetFXEventsEffectsFrame(uint8_t) const;

	// EffectsModuleIO.h:228
	void SetKeyLightDirection(Vector3);

	// EffectsModuleIO.h:230
	Vector3 GetKeyLightDirection() const;

	// EffectsModuleIO.h:233
	void SetKeyLightColour(Vector3);

	// EffectsModuleIO.h:235
	Vector3 GetKeyLightColour() const;

	// EffectsModuleIO.h:238
	void SetAverageIrradianceColour(Vector3);

	// EffectsModuleIO.h:240
	Vector3 GetAverageIrradianceColour() const;

	// EffectsModuleIO.h:242
	void SetCameraInput(const Camera *);

	// EffectsModuleIO.h:243
	Camera * GetCameraInput();

	// EffectsModuleIO.h:244
	const Camera * GetCameraInput() const;

	// EffectsModuleIO.h:246
	void SetEnvironmentMap(const Texture *);

	// EffectsModuleIO.h:247
	const Texture * GetEnvironmentMap() const;

	// EffectsModuleIO.h:249
	void SetWhiteLevel(float32_t);

	// EffectsModuleIO.h:250
	float32_t GetWhiteLevel() const;

}

// EffectsModuleIO.h:275
struct BrnEffects::EffectsIO::OutputBuffer : public IOBuffer {
private:
	// EffectsModuleIO.h:303
	PrepareOutputBuffer::EffectsModuleResourceQueue mResourceRequestInterface;

	// Unknown accessibility
	// EffectsModuleIO.h:63
	typedef AttribSysRequestInterface<2048> AttribSysUserVaultRequestInterface;

	// EffectsModuleIO.h:304
	OutputBuffer::AttribSysUserVaultRequestInterface mVaultRequestInterface;

	// Unknown accessibility
	// EffectsModuleIO.h:70
	typedef RequestInterface ReplayRequestInterface;

	// EffectsModuleIO.h:305
	OutputBuffer::ReplayRequestInterface mReplayRequestInterface;

public:
	// EffectsModuleIO.h:284
	void Construct();

	// EffectsModuleIO.h:288
	void Destruct();

	// EffectsModuleIO.h:290
	void SetResourceRequestInterface(const PrepareOutputBuffer::EffectsModuleResourceQueue *);

	// EffectsModuleIO.h:291
	const PrepareOutputBuffer::EffectsModuleResourceQueue * GetResourceRequestInterface() const;

	// EffectsModuleIO.h:292
	PrepareOutputBuffer::EffectsModuleResourceQueue * GetResourceRequestInterface();

	// EffectsModuleIO.h:294
	void SetVaultRequestInterface(const OutputBuffer::AttribSysUserVaultRequestInterface *);

	// EffectsModuleIO.h:295
	const OutputBuffer::AttribSysUserVaultRequestInterface * GetVaultRequestInterface() const;

	// EffectsModuleIO.h:296
	OutputBuffer::AttribSysUserVaultRequestInterface * GetVaultRequestInterface();

	// EffectsModuleIO.h:298
	const OutputBuffer::ReplayRequestInterface * GetReplayRequestInterface() const;

	// EffectsModuleIO.h:299
	void SetReplayRequestInterface(const OutputBuffer::ReplayRequestInterface *);

}

// Curves.h:24
namespace BrnEffects {
	// EffectsModuleIO.h:78
	namespace EffectsIO {
	}

	// EffectsModuleIO.h:56
	const int32_t KI_EVENT_QUEUE_MAX_SIZE = 4096;

}

// BrnEffectsData.h:75
namespace BrnEffects {
	// EffectsModuleIO.h:78
	namespace EffectsIO {
		struct InputBuffer;

		struct DispatchInputBuffer;

		struct OutputBuffer;

	}

	// EffectsModuleIO.h:56
	const int32_t KI_EVENT_QUEUE_MAX_SIZE = 4096;

}

// BrnEffectsData.h:75
namespace BrnEffects {
	// EffectsModuleIO.h:56
	const int32_t KI_EVENT_QUEUE_MAX_SIZE = 4096;

}

// BrnEffectsData.h:75
namespace BrnEffects {
	// EffectsModuleIO.h:78
	namespace EffectsIO {
	}

	// EffectsModuleIO.h:56
	const int32_t KI_EVENT_QUEUE_MAX_SIZE = 4096;

}

// BrnEffectsData.h:75
namespace BrnEffects {
	// EffectsModuleIO.h:78
	namespace EffectsIO {
		struct InputBuffer;

	}

	// EffectsModuleIO.h:56
	const int32_t KI_EVENT_QUEUE_MAX_SIZE = 4096;

}


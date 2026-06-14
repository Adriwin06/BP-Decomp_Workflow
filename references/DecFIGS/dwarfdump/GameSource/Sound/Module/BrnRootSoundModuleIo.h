// BrnRootSoundModuleIo.h:67
struct BrnSound::Module::Io::RootInputBuffer : public InputBuffer {
	// BrnRootSoundModuleIo.h:55
	typedef StatusInterface ReplayStatusInterface;

private:
	// BrnRootSoundModuleIo.h:246
	RootInputBuffer::ReplayStatusInterface mReplayStatusInterface;

	// Unknown accessibility
	// BrnSoundLogicSharedIO.h:48
	typedef RCEntityActiveRaceCarOutputInterface VehicleInterface;

	// BrnRootSoundModuleIo.h:248
	RootInputBuffer::VehicleInterface mVehicleInterface;

	// BrnRootSoundModuleIo.h:249
	EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

	// Unknown accessibility
	// BrnSoundLogicSharedIO.h:51
	typedef Camera DirectorCamera;

	// BrnRootSoundModuleIo.h:251
	RootInputBuffer::DirectorCamera mDirectorCamera;

	// Unknown accessibility
	// BrnSoundLogicSharedIO.h:53
	typedef ContactSpyInterface InputContactSpyQueueInterface;

	// BrnRootSoundModuleIo.h:252
	RootInputBuffer::InputContactSpyQueueInterface mContactSpyQueueInterface;

	// Unknown accessibility
	// BrnRootSoundModuleIo.h:49
	typedef InputBuffer::GameActionQueue GameActionQueue;

	// BrnRootSoundModuleIo.h:253
	RootInputBuffer::GameActionQueue mGameActionQueue;

	// Unknown accessibility
	// BrnRootSoundModuleIo.h:50
	typedef GameEventQueue GameEventQueue;

	// BrnRootSoundModuleIo.h:254
	RootInputBuffer::GameEventQueue mGameEventQueue;

	// Unknown accessibility
	// BrnSoundLogicSharedIO.h:62
	typedef TrafficSoundOutputInterface TrafficSoundOutputInterface;

	// BrnRootSoundModuleIo.h:255
	RootInputBuffer::TrafficSoundOutputInterface mTrafficOutputInterface;

	// Unknown accessibility
	// BrnSoundLogicSharedIO.h:67
	typedef VehicleOutputInterface::PhysicalTrafficStateQueue PhysicalTrafficStateQueue;

	// BrnRootSoundModuleIo.h:256
	RootInputBuffer::PhysicalTrafficStateQueue mPhysicalTrafficStates;

	// Unknown accessibility
	// BrnSoundLogicSharedIO.h:60
	typedef DeformationOutputInterface DeformationInterface;

	// BrnRootSoundModuleIo.h:257
	RootInputBuffer::DeformationInterface mDeformationInterface;

	// Unknown accessibility
	// BrnSoundLogicSharedIO.h:65
	typedef ScoringOutputInterface ScoringOutputInterface;

	// BrnRootSoundModuleIo.h:258
	RootInputBuffer::ScoringOutputInterface mScoringInterface;

	// Unknown accessibility
	// BrnSoundLogicSharedIO.h:66
	typedef OnlineScoringOutputInterface OnlineScoringOutputInterface;

	// BrnRootSoundModuleIo.h:259
	RootInputBuffer::OnlineScoringOutputInterface mOnlineScoringInterface;

	// BrnRootSoundModuleIo.h:260
	OutputBuffer_PreScene::SoundWorldLoadInterface mWorldLoadInterface;

	// BrnRootSoundModuleIo.h:261
	const InputBuffer::GuiEventQueue * mpGuiEventQueue;

	// Unknown accessibility
	// BrnSoundLogicSharedIO.h:64
	typedef GameModeOutputInterface GameModeOutputInterface;

	// BrnRootSoundModuleIo.h:262
	RootInputBuffer::GameModeOutputInterface mGameModeInterface;

	// BrnRootSoundModuleIo.h:263
	UpdateInfo mUpdateInfo;

	// Unknown accessibility
	// BrnRootSoundModuleIo.h:58
	typedef EffectsExplosionInterface EffectsExplosionInterface;

	// BrnRootSoundModuleIo.h:264
	RootInputBuffer::EffectsExplosionInterface mEffectsExplosionInterface;

	// Unknown accessibility
	// BrnRootSoundModuleIo.h:60
	typedef InputBuffer_PreScene::AudioCarLoadedDataQueue AudioCarLoadedDataQueue;

	// BrnRootSoundModuleIo.h:265
	RootInputBuffer::AudioCarLoadedDataQueue mAudioCarLoadedDataQueue;

	// BrnRootSoundModuleIo.h:266
	AICarOutputInterface mAICarOutputInterface;

	// BrnRootSoundModuleIo.h:268
	OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue mPropBecamePhysicalEventQueue;

	// BrnRootSoundModuleIo.h:269
	PropOutputInterface::PropUpdateNotificationQueue mPropUpdateNotificationQueue;

	// BrnRootSoundModuleIo.h:271
	GuiAudioEventResults mGuiAudioEventResults;

public:
	// BrnRootSoundModuleIo.h:73
	void Construct();

	// BrnRootSoundModuleIo.h:78
	void SetCameraInput(const Camera *);

	// BrnRootSoundModuleIo.h:82
	const Camera & GetDirectorCamera() const;

	// BrnRootSoundModuleIo.h:87
	RootInputBuffer::GameActionQueue & GetGameActionQueue();

	// BrnRootSoundModuleIo.h:90
	const RootInputBuffer::GameActionQueue & GetGameActionQueue() const;

	// BrnRootSoundModuleIo.h:96
	void SetVehicleData(const RootInputBuffer::VehicleInterface &);

	// BrnRootSoundModuleIo.h:101
	void SetContactSpyQueueInterface(const RootInputBuffer::InputContactSpyQueueInterface &);

	// BrnRootSoundModuleIo.h:104
	const RootInputBuffer::InputContactSpyQueueInterface & GetContactSpyQueueInterface() const;

	// BrnRootSoundModuleIo.h:108
	const RootInputBuffer::VehicleInterface & GetVehicleInterface() const;

	// BrnRootSoundModuleIo.h:111
	void SetVehicleInterface(RootInputBuffer::VehicleInterface &);

	// BrnRootSoundModuleIo.h:115
	EActiveRaceCarIndex GetPlayerActiveRaceCarIndex() const;

	// BrnRootSoundModuleIo.h:119
	void SetTrafficOutputInterface(const RootInputBuffer::TrafficSoundOutputInterface &);

	// BrnRootSoundModuleIo.h:123
	const RootInputBuffer::TrafficSoundOutputInterface & GetTrafficOutputInterface() const;

	// BrnRootSoundModuleIo.h:126
	void SetDeformationInterface(const RootInputBuffer::DeformationInterface &);

	// BrnRootSoundModuleIo.h:129
	const RootInputBuffer::DeformationInterface & GetDeformationInterface() const;

	// BrnRootSoundModuleIo.h:137
	void SetWorldLoadInterface(const OutputBuffer_PreScene::SoundWorldLoadInterface &);

	// BrnRootSoundModuleIo.h:144
	const OutputBuffer_PreScene::SoundWorldLoadInterface & GetWorldLoadInterface() const;

	// BrnRootSoundModuleIo.h:151
	const InputBuffer::GuiEventQueue * GetGuiEventQueue() const;

	// BrnRootSoundModuleIo.h:159
	void SetGuiEventQueue(const InputBuffer::GuiEventQueue *);

	// BrnRootSoundModuleIo.h:162
	const RootInputBuffer::ReplayStatusInterface * GetReplayStatusInterface() const;

	// BrnRootSoundModuleIo.h:163
	void SetReplayStatusInterface(const RootInputBuffer::ReplayStatusInterface *);

	// BrnRootSoundModuleIo.h:165
	const UpdateInfo * GetUpdateInfo() const;

	// BrnRootSoundModuleIo.h:166
	void SetUpdateInfo(const UpdateInfo *);

	// BrnRootSoundModuleIo.h:172
	const RootInputBuffer::GameModeOutputInterface * GetGameModeInterface() const;

	// BrnRootSoundModuleIo.h:173
	void SetGameModeInterface(const RootInputBuffer::GameModeOutputInterface *);

	// BrnRootSoundModuleIo.h:179
	const RootInputBuffer::EffectsExplosionInterface * GetEffectsExplosionInterface() const;

	// BrnRootSoundModuleIo.h:180
	void SetEffectsExplosionInterface(const RootInputBuffer::EffectsExplosionInterface *);

	// BrnRootSoundModuleIo.h:185
	const RootInputBuffer::AudioCarLoadedDataQueue * GetAudioCarLoadedDataQueue() const;

	// BrnRootSoundModuleIo.h:186
	RootInputBuffer::AudioCarLoadedDataQueue * GetAudioCarLoadedDataQueue();

	// BrnRootSoundModuleIo.h:192
	const RootInputBuffer::ScoringOutputInterface * GetScoringInterface() const;

	// BrnRootSoundModuleIo.h:193
	void SetScoringInterface(const RootInputBuffer::ScoringOutputInterface *);

	// BrnRootSoundModuleIo.h:199
	const RootInputBuffer::OnlineScoringOutputInterface * GetOnlineScoringInterface() const;

	// BrnRootSoundModuleIo.h:200
	void SetOnlineScoringInterface(const RootInputBuffer::OnlineScoringOutputInterface *);

	// BrnRootSoundModuleIo.h:206
	const RootInputBuffer::PhysicalTrafficStateQueue * GetPhysicalTrafficStates() const;

	// BrnRootSoundModuleIo.h:207
	void SetPhysicalTrafficStates(const RootInputBuffer::PhysicalTrafficStateQueue *);

	// BrnRootSoundModuleIo.h:212
	const AICarOutputInterface * GetAICarOutputInterface() const;

	// BrnRootSoundModuleIo.h:213
	void SetAICarOutputInterface(const AICarOutputInterface *);

	// BrnRootSoundModuleIo.h:218
	const RootInputBuffer::GameEventQueue * GetGameEventQueue() const;

	// BrnRootSoundModuleIo.h:219
	RootInputBuffer::GameEventQueue * GetGameEventQueue();

	// BrnRootSoundModuleIo.h:221
	const OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue * GetPropBecamePhysicalEventQueue() const;

	// BrnRootSoundModuleIo.h:222
	OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue * GetPropBecamePhysicalEventQueue();

	// BrnRootSoundModuleIo.h:223
	void AppendPropBecamePhysicalEventQueue(const OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue *);

	// BrnRootSoundModuleIo.h:225
	const PropOutputInterface::PropUpdateNotificationQueue * GetPropUpdateNotificationQueue() const;

	// BrnRootSoundModuleIo.h:226
	PropOutputInterface::PropUpdateNotificationQueue * GetPropUpdateNotificationQueue();

	// BrnRootSoundModuleIo.h:227
	void AppendPropUpdateNotificationQueue(const PropOutputInterface::PropUpdateNotificationQueue *);

	// BrnRootSoundModuleIo.h:235
	void SetGuiAudioEventResults(const GuiAudioEventResults &);

	// BrnRootSoundModuleIo.h:242
	const GuiAudioEventResults & GetGuiAudioEventResults() const;

}

// BrnRootSoundModuleIo.h:278
struct BrnSound::Module::Io::RootOutputBuffer : public IOBuffer {
	// BrnSoundCommonSharedIO.h:37
	typedef RequestInterface<4096> SoundResourceRequestInterface;

private:
	// BrnRootSoundModuleIo.h:305
	RootOutputBuffer::SoundResourceRequestInterface mResourceRequestInterface;

	// Unknown accessibility
	// BrnSoundLogicSharedIO.h:47
	typedef AttribSysRequestInterface<2048> AttribSysRequestInterface;

	// BrnRootSoundModuleIo.h:306
	RootOutputBuffer::AttribSysRequestInterface mAttribSysRequestInterface;

	// Unknown accessibility
	// BrnRootSoundModuleIo.h:56
	typedef RequestInterface ReplayRequestInterface;

	// BrnRootSoundModuleIo.h:307
	RootOutputBuffer::ReplayRequestInterface mReplayRequestInterface;

public:
	// BrnRootSoundModuleIo.h:284
	void Construct();

	// BrnRootSoundModuleIo.h:289
	const RootOutputBuffer::SoundResourceRequestInterface * GetResourceRequestInterface() const;

	// BrnRootSoundModuleIo.h:292
	RootOutputBuffer::SoundResourceRequestInterface * GetResourceRequestInterface();

	// BrnRootSoundModuleIo.h:295
	const RootOutputBuffer::AttribSysRequestInterface * GetAttribSysRequestInterface() const;

	// BrnRootSoundModuleIo.h:298
	RootOutputBuffer::AttribSysRequestInterface * GetAttribSysRequestInterface();

	// BrnRootSoundModuleIo.h:300
	const RootOutputBuffer::ReplayRequestInterface * GetReplayRequestInterface() const;

	// BrnRootSoundModuleIo.h:301
	void SetReplayRequestInterface(const RootOutputBuffer::ReplayRequestInterface *);

}

// BrnRootSoundModuleIo.h:322
struct BrnSound::Module::Io::RootPreUpdateOutputBuffer : public IOBuffer {
private:
	// BrnRootSoundModuleIo.h:352
	PreUpdateOutput mPreUpdateOutput;

public:
	// BrnRootSoundModuleIo.h:331
	void Construct();

	// BrnRootSoundModuleIo.h:338
	const PreUpdateOutput & GetPreUpdateOutput() const;

	// BrnRootSoundModuleIo.h:346
	void SetPreUpdateOutput(const PreUpdateOutput &);

}

// BrnRootSoundModuleIo.h:67
struct BrnSound::Module::Io::RootInputBuffer : public InputBuffer {
	// BrnRootSoundModuleIo.h:55
	typedef StatusInterface ReplayStatusInterface;

private:
	// BrnRootSoundModuleIo.h:246
	RootInputBuffer::ReplayStatusInterface mReplayStatusInterface;

	// Unknown accessibility
	// BrnSoundLogicSharedIO.h:48
	typedef RCEntityActiveRaceCarOutputInterface VehicleInterface;

	// BrnRootSoundModuleIo.h:248
	RootInputBuffer::VehicleInterface mVehicleInterface;

	// BrnRootSoundModuleIo.h:249
	EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

	// Unknown accessibility
	// BrnSoundLogicSharedIO.h:51
	typedef Camera DirectorCamera;

	// BrnRootSoundModuleIo.h:251
	RootInputBuffer::DirectorCamera mDirectorCamera;

	// Unknown accessibility
	// BrnSoundLogicSharedIO.h:53
	typedef ContactSpyInterface InputContactSpyQueueInterface;

	// BrnRootSoundModuleIo.h:252
	RootInputBuffer::InputContactSpyQueueInterface mContactSpyQueueInterface;

	// Unknown accessibility
	// BrnRootSoundModuleIo.h:49
	typedef OutputBuffer::GameActionQueue GameActionQueue;

	// BrnRootSoundModuleIo.h:253
	RootInputBuffer::GameActionQueue mGameActionQueue;

	// Unknown accessibility
	// BrnRootSoundModuleIo.h:50
	typedef GameEventQueue GameEventQueue;

	// BrnRootSoundModuleIo.h:254
	RootInputBuffer::GameEventQueue mGameEventQueue;

	// Unknown accessibility
	// BrnSoundLogicSharedIO.h:62
	typedef TrafficSoundOutputInterface TrafficSoundOutputInterface;

	// BrnRootSoundModuleIo.h:255
	RootInputBuffer::TrafficSoundOutputInterface mTrafficOutputInterface;

	// Unknown accessibility
	// BrnSoundLogicSharedIO.h:67
	typedef VehicleOutputInterface::PhysicalTrafficStateQueue PhysicalTrafficStateQueue;

	// BrnRootSoundModuleIo.h:256
	RootInputBuffer::PhysicalTrafficStateQueue mPhysicalTrafficStates;

	// Unknown accessibility
	// BrnSoundLogicSharedIO.h:60
	typedef DeformationOutputInterface DeformationInterface;

	// BrnRootSoundModuleIo.h:257
	RootInputBuffer::DeformationInterface mDeformationInterface;

	// Unknown accessibility
	// BrnSoundLogicSharedIO.h:65
	typedef ScoringOutputInterface ScoringOutputInterface;

	// BrnRootSoundModuleIo.h:258
	RootInputBuffer::ScoringOutputInterface mScoringInterface;

	// Unknown accessibility
	// BrnSoundLogicSharedIO.h:66
	typedef OnlineScoringOutputInterface OnlineScoringOutputInterface;

	// BrnRootSoundModuleIo.h:259
	RootInputBuffer::OnlineScoringOutputInterface mOnlineScoringInterface;

	// BrnRootSoundModuleIo.h:260
	UpdateOutputBuffer::SoundWorldLoadInterface mWorldLoadInterface;

	// BrnRootSoundModuleIo.h:261
	const InputBuffer::GuiEventQueue * mpGuiEventQueue;

	// Unknown accessibility
	// BrnSoundLogicSharedIO.h:64
	typedef GameModeOutputInterface GameModeOutputInterface;

	// BrnRootSoundModuleIo.h:262
	RootInputBuffer::GameModeOutputInterface mGameModeInterface;

	// BrnRootSoundModuleIo.h:263
	UpdateInfo mUpdateInfo;

	// Unknown accessibility
	// BrnRootSoundModuleIo.h:58
	typedef EffectsExplosionInterface EffectsExplosionInterface;

	// BrnRootSoundModuleIo.h:264
	RootInputBuffer::EffectsExplosionInterface mEffectsExplosionInterface;

	// Unknown accessibility
	// BrnRootSoundModuleIo.h:60
	typedef InputBuffer_PreScene::AudioCarLoadedDataQueue AudioCarLoadedDataQueue;

	// BrnRootSoundModuleIo.h:265
	RootInputBuffer::AudioCarLoadedDataQueue mAudioCarLoadedDataQueue;

	// BrnRootSoundModuleIo.h:266
	AICarOutputInterface mAICarOutputInterface;

	// BrnRootSoundModuleIo.h:268
	OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue mPropBecamePhysicalEventQueue;

	// BrnRootSoundModuleIo.h:269
	UpdateOutputBuffer::PropUpdateNotificationQueue mPropUpdateNotificationQueue;

	// BrnRootSoundModuleIo.h:271
	GuiAudioEventResults mGuiAudioEventResults;

public:
	// BrnRootSoundModuleIo.h:73
	void Construct();

	// BrnRootSoundModuleIo.h:78
	void SetCameraInput(const Camera *);

	// BrnRootSoundModuleIo.h:82
	const Camera & GetDirectorCamera() const;

	// BrnRootSoundModuleIo.h:87
	RootInputBuffer::GameActionQueue & GetGameActionQueue();

	// BrnRootSoundModuleIo.h:90
	const RootInputBuffer::GameActionQueue & GetGameActionQueue() const;

	// BrnRootSoundModuleIo.h:96
	void SetVehicleData(const RootInputBuffer::VehicleInterface &);

	// BrnRootSoundModuleIo.h:101
	void SetContactSpyQueueInterface(const RootInputBuffer::InputContactSpyQueueInterface &);

	// BrnRootSoundModuleIo.h:104
	const RootInputBuffer::InputContactSpyQueueInterface & GetContactSpyQueueInterface() const;

	// BrnRootSoundModuleIo.h:108
	const RootInputBuffer::VehicleInterface & GetVehicleInterface() const;

	// BrnRootSoundModuleIo.h:111
	void SetVehicleInterface(RootInputBuffer::VehicleInterface &);

	// BrnRootSoundModuleIo.h:115
	EActiveRaceCarIndex GetPlayerActiveRaceCarIndex() const;

	// BrnRootSoundModuleIo.h:119
	void SetTrafficOutputInterface(const RootInputBuffer::TrafficSoundOutputInterface &);

	// BrnRootSoundModuleIo.h:123
	const RootInputBuffer::TrafficSoundOutputInterface & GetTrafficOutputInterface() const;

	// BrnRootSoundModuleIo.h:126
	void SetDeformationInterface(const RootInputBuffer::DeformationInterface &);

	// BrnRootSoundModuleIo.h:129
	const RootInputBuffer::DeformationInterface & GetDeformationInterface() const;

	// BrnRootSoundModuleIo.h:137
	void SetWorldLoadInterface(const UpdateOutputBuffer::SoundWorldLoadInterface &);

	// BrnRootSoundModuleIo.h:144
	const UpdateOutputBuffer::SoundWorldLoadInterface & GetWorldLoadInterface() const;

	// BrnRootSoundModuleIo.h:151
	const InputBuffer::GuiEventQueue * GetGuiEventQueue() const;

	// BrnRootSoundModuleIo.h:159
	void SetGuiEventQueue(const InputBuffer::GuiEventQueue *);

	// BrnRootSoundModuleIo.h:162
	const RootInputBuffer::ReplayStatusInterface * GetReplayStatusInterface() const;

	// BrnRootSoundModuleIo.h:163
	void SetReplayStatusInterface(const RootInputBuffer::ReplayStatusInterface *);

	// BrnRootSoundModuleIo.h:165
	const UpdateInfo * GetUpdateInfo() const;

	// BrnRootSoundModuleIo.h:166
	void SetUpdateInfo(const UpdateInfo *);

	// BrnRootSoundModuleIo.h:172
	const RootInputBuffer::GameModeOutputInterface * GetGameModeInterface() const;

	// BrnRootSoundModuleIo.h:173
	void SetGameModeInterface(const RootInputBuffer::GameModeOutputInterface *);

	// BrnRootSoundModuleIo.h:179
	const RootInputBuffer::EffectsExplosionInterface * GetEffectsExplosionInterface() const;

	// BrnRootSoundModuleIo.h:180
	void SetEffectsExplosionInterface(const RootInputBuffer::EffectsExplosionInterface *);

	// BrnRootSoundModuleIo.h:185
	const RootInputBuffer::AudioCarLoadedDataQueue * GetAudioCarLoadedDataQueue() const;

	// BrnRootSoundModuleIo.h:186
	RootInputBuffer::AudioCarLoadedDataQueue * GetAudioCarLoadedDataQueue();

	// BrnRootSoundModuleIo.h:192
	const RootInputBuffer::ScoringOutputInterface * GetScoringInterface() const;

	// BrnRootSoundModuleIo.h:193
	void SetScoringInterface(const RootInputBuffer::ScoringOutputInterface *);

	// BrnRootSoundModuleIo.h:199
	const RootInputBuffer::OnlineScoringOutputInterface * GetOnlineScoringInterface() const;

	// BrnRootSoundModuleIo.h:200
	void SetOnlineScoringInterface(const RootInputBuffer::OnlineScoringOutputInterface *);

	// BrnRootSoundModuleIo.h:206
	const RootInputBuffer::PhysicalTrafficStateQueue * GetPhysicalTrafficStates() const;

	// BrnRootSoundModuleIo.h:207
	void SetPhysicalTrafficStates(const RootInputBuffer::PhysicalTrafficStateQueue *);

	// BrnRootSoundModuleIo.h:212
	const AICarOutputInterface * GetAICarOutputInterface() const;

	// BrnRootSoundModuleIo.h:213
	void SetAICarOutputInterface(const AICarOutputInterface *);

	// BrnRootSoundModuleIo.h:218
	const RootInputBuffer::GameEventQueue * GetGameEventQueue() const;

	// BrnRootSoundModuleIo.h:219
	RootInputBuffer::GameEventQueue * GetGameEventQueue();

	// BrnRootSoundModuleIo.h:221
	const OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue * GetPropBecamePhysicalEventQueue() const;

	// BrnRootSoundModuleIo.h:222
	OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue * GetPropBecamePhysicalEventQueue();

	// BrnRootSoundModuleIo.h:223
	void AppendPropBecamePhysicalEventQueue(const OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue *);

	// BrnRootSoundModuleIo.h:225
	const UpdateOutputBuffer::PropUpdateNotificationQueue * GetPropUpdateNotificationQueue() const;

	// BrnRootSoundModuleIo.h:226
	UpdateOutputBuffer::PropUpdateNotificationQueue * GetPropUpdateNotificationQueue();

	// BrnRootSoundModuleIo.h:227
	void AppendPropUpdateNotificationQueue(const UpdateOutputBuffer::PropUpdateNotificationQueue *);

	// BrnRootSoundModuleIo.h:235
	void SetGuiAudioEventResults(const GuiAudioEventResults &);

	// BrnRootSoundModuleIo.h:242
	const GuiAudioEventResults & GetGuiAudioEventResults() const;

}


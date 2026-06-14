// BrnWorldEntityModuleIO.h:61
struct BrnWorld::WorldEntityIO::OutputBuffer_Prepare : public IOBuffer {
	// BrnWorldEntityModuleIO.h:51
	typedef RequestInterface<4096> ResourceRequestInterface;

private:
	// BrnWorldEntityModuleIO.h:80
	OutputBuffer_Prepare::ResourceRequestInterface mResourceRequestInterface;

	// Unknown accessibility
	// BrnWorldEntityModuleIO.h:52
	typedef InSceneUpdateInterface SceneInputInterface;

	// BrnWorldEntityModuleIO.h:81
	OutputBuffer_Prepare::SceneInputInterface mSceneInputInterface;

public:
	// BrnWorldEntityModuleIO.h:66
	void Construct();

	// BrnWorldEntityModuleIO.h:70
	void Destruct();

	// BrnWorldEntityModuleIO.h:72
	const OutputBuffer_Prepare::ResourceRequestInterface * GetResourceRequestInterface() const;

	// BrnWorldEntityModuleIO.h:73
	OutputBuffer_Prepare::ResourceRequestInterface * GetResourceRequestInterface();

	// BrnWorldEntityModuleIO.h:75
	const OutputBuffer_Prepare::SceneInputInterface * GetSceneInputInterface() const;

	// BrnWorldEntityModuleIO.h:76
	OutputBuffer_Prepare::SceneInputInterface * GetSceneInputInterface();

}

// BrnWorldEntityModuleIO.h:85
struct BrnWorld::WorldEntityIO::InputBuffer_PreScene : public IOBuffer {
private:
	// BrnWorldEntityModuleIO.h:104
	RCEntityActiveRaceCarOutputInterface mActiveRaceCarInterface;

	// BrnWorldEntityModuleIO.h:105
	RequestInterface mRequestInterface;

public:
	// BrnWorldEntityModuleIO.h:90
	void Construct();

	// BrnWorldEntityModuleIO.h:94
	void Destruct();

	// BrnWorldEntityModuleIO.h:96
	const RCEntityActiveRaceCarOutputInterface * GetActiveRaceCarInterface() const;

	// BrnWorldEntityModuleIO.h:97
	void SetActiveRaceCarInterface(const RCEntityActiveRaceCarOutputInterface *);

	// BrnWorldEntityModuleIO.h:99
	void AppendRequestInterface(const RequestInterface *);

	// BrnWorldEntityModuleIO.h:100
	const RequestInterface * GetRequestInterface() const;

}

// BrnWorldEntityModuleIO.h:109
struct BrnWorld::WorldEntityIO::OutputBuffer_PreScene : public IOBuffer {
private:
	// BrnWorldEntityModuleIO.h:146
	InputBuffer_PreScene::PropInstancesNeededForZoneQueue mPropInstancesNeededForZoneQueue;

	// BrnWorldEntityModuleIO.h:147
	InputBuffer_PreScene::PropGraphicsLoadedQueue mPropGraphicsLoadedQueue;

	// BrnWorldEntityModuleIO.h:148
	InputBuffer_PreScene::PropGraphicsUnloadedQueue mPropGraphicsUnloadedQueue;

	// BrnWorldEntityModuleIO.h:149
	OutputBuffer_Prepare::SceneInputInterface mSceneInputInterface;

	// Unknown accessibility
	// BrnWorldEntityModuleIO.h:56
	typedef GameEventQueue GameEventQueue;

	// BrnWorldEntityModuleIO.h:150
	OutputBuffer_PreScene::GameEventQueue mGameEventQueue;

	// Unknown accessibility
	// BrnWorldEntityModuleIO.h:57
	typedef UpdateOutputBuffer::SoundWorldLoadInterface SoundWorldLoadInterface;

	// BrnWorldEntityModuleIO.h:151
	OutputBuffer_PreScene::SoundWorldLoadInterface mSoundWorldLoadInterface;

	// BrnWorldEntityModuleIO.h:152
	int32_t miPlayerZoneNumber;

public:
	// BrnWorldEntityModuleIO.h:114
	void Construct();

	// BrnWorldEntityModuleIO.h:118
	void Destruct();

	// BrnWorldEntityModuleIO.h:120
	const OutputBuffer_Prepare::SceneInputInterface * GetSceneInputInterface() const;

	// BrnWorldEntityModuleIO.h:121
	OutputBuffer_Prepare::SceneInputInterface * GetSceneInputInterface();

	// BrnWorldEntityModuleIO.h:123
	const OutputBuffer_PreScene::GameEventQueue * GetGameEventQueue() const;

	// BrnWorldEntityModuleIO.h:124
	OutputBuffer_PreScene::GameEventQueue * GetGameEventQueue();

	// BrnWorldEntityModuleIO.h:126
	const InputBuffer_PreScene::PropGraphicsLoadedQueue * GetPropGraphicsLoadedQueue() const;

	// BrnWorldEntityModuleIO.h:127
	InputBuffer_PreScene::PropGraphicsLoadedQueue * GetPropGraphicsLoadedQueue();

	// BrnWorldEntityModuleIO.h:129
	const InputBuffer_PreScene::PropInstancesNeededForZoneQueue * GetPropInstancesNeededForZoneQueue() const;

	// BrnWorldEntityModuleIO.h:130
	InputBuffer_PreScene::PropInstancesNeededForZoneQueue * GetPropInstancesNeededForZoneQueue();

	// BrnWorldEntityModuleIO.h:132
	const InputBuffer_PreScene::PropGraphicsUnloadedQueue * GetPropGraphicsUnloadedQueue() const;

	// BrnWorldEntityModuleIO.h:133
	InputBuffer_PreScene::PropGraphicsUnloadedQueue * GetPropGraphicsUnloadedQueue();

	// BrnWorldEntityModuleIO.h:135
	const OutputBuffer_PreScene::SoundWorldLoadInterface * GetSoundWorldLoadInterface() const;

	// BrnWorldEntityModuleIO.h:136
	OutputBuffer_PreScene::SoundWorldLoadInterface * GetSoundWorldLoadInterface();

	// BrnWorldEntityModuleIO.h:140
	void SetPlayerZoneNumber(int32_t);

	// BrnWorldEntityModuleIO.h:143
	int32_t GetPlayerZoneNumber() const;

}

// BrnWorldEntityModuleIO.h:156
struct BrnWorld::WorldEntityIO::InputBuffer_PostScene : public IOBuffer {
public:
	// BrnWorldEntityModuleIO.h:161
	void Construct();

	// BrnWorldEntityModuleIO.h:165
	void Destruct();

}

// BrnWorldEntityModuleIO.h:170
struct BrnWorld::WorldEntityIO::OutputBuffer_PostScene : public IOBuffer {
public:
	// BrnWorldEntityModuleIO.h:175
	void Construct();

	// BrnWorldEntityModuleIO.h:179
	void Destruct();

}

// BrnWorldEntityModuleIO.h:184
struct BrnWorld::WorldEntityIO::InputBuffer_PrePhysics : public IOBuffer {
public:
	// BrnWorldEntityModuleIO.h:189
	void Construct();

	// BrnWorldEntityModuleIO.h:193
	void Destruct();

}

// BrnWorldEntityModuleIO.h:198
struct BrnWorld::WorldEntityIO::OutputBuffer_PrePhysics : public IOBuffer {
public:
	// BrnWorldEntityModuleIO.h:203
	void Construct();

	// BrnWorldEntityModuleIO.h:207
	void Destruct();

}

// BrnWorldEntityModuleIO.h:212
struct BrnWorld::WorldEntityIO::InputBuffer_PostPhysics : public IOBuffer {
	// BrnWorldEntityModuleIO.h:55
	typedef InputBuffer::GameActionQueue GameActionQueue;

private:
	// BrnWorldEntityModuleIO.h:229
	InputBuffer_PostPhysics::GameActionQueue mGameActionQueue;

public:
	// BrnWorldEntityModuleIO.h:217
	void Construct();

	// BrnWorldEntityModuleIO.h:221
	void Destruct();

	// BrnWorldEntityModuleIO.h:223
	const InputBuffer_PostPhysics::GameActionQueue * GetGameActionQueue() const;

	// BrnWorldEntityModuleIO.h:224
	InputBuffer_PostPhysics::GameActionQueue * GetGameActionQueue();

}

// BrnWorldEntityModuleIO.h:234
struct BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics : public IOBuffer {
private:
	// BrnWorldEntityModuleIO.h:257
	OutputBuffer_Prepare::ResourceRequestInterface mResourceRequestInterface;

	// BrnWorldEntityModuleIO.h:258
	OutputBuffer_Prepare::SceneInputInterface mSceneInputInterface;

	// BrnWorldEntityModuleIO.h:259
	StatusInterface mStatusInterface;

public:
	// BrnWorldEntityModuleIO.h:239
	void Construct();

	// BrnWorldEntityModuleIO.h:243
	void Destruct();

	// BrnWorldEntityModuleIO.h:245
	const OutputBuffer_Prepare::ResourceRequestInterface * GetResourceRequestInterface() const;

	// BrnWorldEntityModuleIO.h:246
	OutputBuffer_Prepare::ResourceRequestInterface * GetResourceRequestInterface();

	// BrnWorldEntityModuleIO.h:248
	const StatusInterface * GetStatusInterface() const;

	// BrnWorldEntityModuleIO.h:249
	StatusInterface * GetStatusInterface();

	// BrnWorldEntityModuleIO.h:251
	const OutputBuffer_Prepare::SceneInputInterface * GetSceneInputInterface() const;

	// BrnWorldEntityModuleIO.h:252
	OutputBuffer_Prepare::SceneInputInterface * GetSceneInputInterface();

}

// BrnWorldEntityModuleIO.h:264
struct BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists : public IOBuffer {
private:
	// BrnWorldEntityModuleIO.h:285
	CgsGraphics::DispatchFrame * mpDispatchFrame;

	// Unknown accessibility
	// BrnWorldEntityModuleIO.h:53
	typedef OutputBuffer::OutSmSceneQueryResultsQueue SceneResultQueue;

	// BrnWorldEntityModuleIO.h:286
	InputBuffer_GenerateDispatchLists::SceneResultQueue mSceneResultQueue;

	// BrnWorldEntityModuleIO.h:287
	BrnWorld::ShadowMap * mpShadowMap;

public:
	// BrnWorldEntityModuleIO.h:269
	void Construct();

	// BrnWorldEntityModuleIO.h:273
	void Destruct();

	// BrnWorldEntityModuleIO.h:275
	const InputBuffer_GenerateDispatchLists::SceneResultQueue * GetSceneResultQueue() const;

	// BrnWorldEntityModuleIO.h:276
	InputBuffer_GenerateDispatchLists::SceneResultQueue * GetSceneResultQueue();

	// BrnWorldEntityModuleIO.h:278
	CgsGraphics::DispatchFrame * GetDispatchFrame() const;

	// BrnWorldEntityModuleIO.h:279
	void SetDispatchFrame(CgsGraphics::DispatchFrame *);

	// BrnWorldEntityModuleIO.h:281
	BrnWorld::ShadowMap * GetShadowMap() const;

	// BrnWorldEntityModuleIO.h:282
	void SetShadowMap(BrnWorld::ShadowMap *);

}

// BrnWorldEntityModuleIO.h:109
struct BrnWorld::WorldEntityIO::OutputBuffer_PreScene : public IOBuffer {
private:
	// BrnWorldEntityModuleIO.h:146
	InputBuffer_PreScene::PropInstancesNeededForZoneQueue mPropInstancesNeededForZoneQueue;

	// BrnWorldEntityModuleIO.h:147
	InputBuffer_PreScene::PropGraphicsLoadedQueue mPropGraphicsLoadedQueue;

	// BrnWorldEntityModuleIO.h:148
	InputBuffer_PreScene::PropGraphicsUnloadedQueue mPropGraphicsUnloadedQueue;

	// BrnWorldEntityModuleIO.h:149
	OutputBuffer_Prepare::SceneInputInterface mSceneInputInterface;

	// Unknown accessibility
	// BrnWorldEntityModuleIO.h:56
	typedef GameEventQueue GameEventQueue;

	// BrnWorldEntityModuleIO.h:150
	OutputBuffer_PreScene::GameEventQueue mGameEventQueue;

	// Unknown accessibility
	// BrnWorldEntityModuleIO.h:57
	typedef OutputBuffer_PreScene::SoundWorldLoadInterface SoundWorldLoadInterface;

	// Unknown accessibility
	// BrnSoundRootSharedIO.h:145
	typedef EventQueue<BrnSound::Module::Io::SoundWorldLoadEvent,25> SoundWorldLoadInterface;

	// BrnWorldEntityModuleIO.h:151
	OutputBuffer_PreScene::SoundWorldLoadInterface mSoundWorldLoadInterface;

	// BrnWorldEntityModuleIO.h:152
	int32_t miPlayerZoneNumber;

public:
	// BrnWorldEntityModuleIO.h:114
	void Construct();

	// BrnWorldEntityModuleIO.h:118
	void Destruct();

	// BrnWorldEntityModuleIO.h:120
	const OutputBuffer_Prepare::SceneInputInterface * GetSceneInputInterface() const;

	// BrnWorldEntityModuleIO.h:121
	OutputBuffer_Prepare::SceneInputInterface * GetSceneInputInterface();

	// BrnWorldEntityModuleIO.h:123
	const OutputBuffer_PreScene::GameEventQueue * GetGameEventQueue() const;

	// BrnWorldEntityModuleIO.h:124
	OutputBuffer_PreScene::GameEventQueue * GetGameEventQueue();

	// BrnWorldEntityModuleIO.h:126
	const InputBuffer_PreScene::PropGraphicsLoadedQueue * GetPropGraphicsLoadedQueue() const;

	// BrnWorldEntityModuleIO.h:127
	InputBuffer_PreScene::PropGraphicsLoadedQueue * GetPropGraphicsLoadedQueue();

	// BrnWorldEntityModuleIO.h:129
	const InputBuffer_PreScene::PropInstancesNeededForZoneQueue * GetPropInstancesNeededForZoneQueue() const;

	// BrnWorldEntityModuleIO.h:130
	InputBuffer_PreScene::PropInstancesNeededForZoneQueue * GetPropInstancesNeededForZoneQueue();

	// BrnWorldEntityModuleIO.h:132
	const InputBuffer_PreScene::PropGraphicsUnloadedQueue * GetPropGraphicsUnloadedQueue() const;

	// BrnWorldEntityModuleIO.h:133
	InputBuffer_PreScene::PropGraphicsUnloadedQueue * GetPropGraphicsUnloadedQueue();

	// BrnWorldEntityModuleIO.h:135
	const OutputBuffer_PreScene::SoundWorldLoadInterface * GetSoundWorldLoadInterface() const;

	// BrnWorldEntityModuleIO.h:136
	OutputBuffer_PreScene::SoundWorldLoadInterface * GetSoundWorldLoadInterface();

	// BrnWorldEntityModuleIO.h:140
	void SetPlayerZoneNumber(int32_t);

	// BrnWorldEntityModuleIO.h:143
	int32_t GetPlayerZoneNumber() const;

}


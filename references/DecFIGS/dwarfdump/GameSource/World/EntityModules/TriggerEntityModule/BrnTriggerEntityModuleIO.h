// BrnTriggerEntityModuleIO.h:55
struct BrnWorld::TriggerEntityModuleIO::InputBuffer_PreScene : public IOBuffer {
private:
	// BrnTriggerEntityModuleIO.h:68
	TriggerManagementInputInterface mManagementInputInterface;

public:
	// BrnTriggerEntityModuleIO.h:58
	void Construct();

	// BrnTriggerEntityModuleIO.h:61
	void Destruct();

	// BrnTriggerEntityModuleIO.h:64
	const TriggerManagementInputInterface * GetManagementInputInterface() const;

	// BrnTriggerEntityModuleIO.h:65
	TriggerManagementInputInterface * GetManagementInputInterface();

}

// BrnTriggerEntityModuleIO.h:81
struct BrnWorld::TriggerEntityModuleIO::OutputBuffer_PreScene : public IOBuffer {
	// BrnTriggerEntityModuleIO.h:40
	typedef InSceneUpdateInterface SceneInputInterface;

private:
	// BrnTriggerEntityModuleIO.h:94
	OutputBuffer_PreScene::SceneInputInterface mSceneInputInterface;

public:
	// BrnTriggerEntityModuleIO.h:84
	void Construct();

	// BrnTriggerEntityModuleIO.h:87
	void Destruct();

	// BrnTriggerEntityModuleIO.h:90
	const OutputBuffer_PreScene::SceneInputInterface * GetSceneInputInterface() const;

	// BrnTriggerEntityModuleIO.h:91
	OutputBuffer_PreScene::SceneInputInterface * GetSceneInputInterface();

}

// BrnTriggerEntityModuleIO.h:109
struct BrnWorld::TriggerEntityModuleIO::InputBuffer_PostScene : public IOBuffer {
private:
	// BrnTriggerEntityModuleIO.h:122
	TriggerQueryInputInterface mQueryInputInterface;

public:
	// BrnTriggerEntityModuleIO.h:112
	void Construct();

	// BrnTriggerEntityModuleIO.h:115
	void Destruct();

	// BrnTriggerEntityModuleIO.h:118
	const TriggerQueryInputInterface * GetQueryInputInterface() const;

	// BrnTriggerEntityModuleIO.h:119
	TriggerQueryInputInterface * GetQueryInputInterface();

}

// BrnTriggerEntityModuleIO.h:135
struct BrnWorld::TriggerEntityModuleIO::OutputBuffer_PostScene : public IOBuffer {
	// BrnTriggerEntityModuleIO.h:41
	typedef OutputBuffer_PostScene::InSmFineQueryQueue SceneFineQueryQueue;

	// CgsSceneManagerModuleIO.h:166
	typedef InFineQueryQueue<2048> InSmFineQueryQueue;

private:
	// BrnTriggerEntityModuleIO.h:148
	OutputBuffer_PostScene::SceneFineQueryQueue mSceneFineQueryQueue;

public:
	// BrnTriggerEntityModuleIO.h:138
	void Construct();

	// BrnTriggerEntityModuleIO.h:141
	void Destruct();

	// BrnTriggerEntityModuleIO.h:144
	const OutputBuffer_PostScene::SceneFineQueryQueue * GetSceneFineQueryQueue() const;

	// BrnTriggerEntityModuleIO.h:145
	OutputBuffer_PostScene::SceneFineQueryQueue * GetSceneFineQueryQueue();

}

// BrnTriggerEntityModuleIO.h:163
struct BrnWorld::TriggerEntityModuleIO::InputBuffer_PrePhysics : public IOBuffer {
	// BrnTriggerEntityModuleIO.h:42
	typedef OutputBuffer::OutSmSceneQueryResultsQueue SceneResultQueue;

private:
	// BrnTriggerEntityModuleIO.h:176
	InputBuffer_PrePhysics::SceneResultQueue mSceneResultQueue;

public:
	// BrnTriggerEntityModuleIO.h:166
	void Construct();

	// BrnTriggerEntityModuleIO.h:169
	void Destruct();

	// BrnTriggerEntityModuleIO.h:172
	const InputBuffer_PrePhysics::SceneResultQueue * GetSceneResultQueue() const;

	// BrnTriggerEntityModuleIO.h:173
	InputBuffer_PrePhysics::SceneResultQueue * GetSceneResultQueue();

}

// BrnTriggerEntityModuleIO.h:189
struct BrnWorld::TriggerEntityModuleIO::OutputBuffer_PrePhysics : public IOBuffer {
private:
	// BrnTriggerEntityModuleIO.h:202
	TriggerEntityModuleOutputInterface mOutputInterface;

public:
	// BrnTriggerEntityModuleIO.h:192
	void Construct();

	// BrnTriggerEntityModuleIO.h:195
	void Destruct();

	// BrnTriggerEntityModuleIO.h:198
	const TriggerEntityModuleOutputInterface * GetOutputInterface() const;

	// BrnTriggerEntityModuleIO.h:199
	TriggerEntityModuleOutputInterface * GetOutputInterface();

}


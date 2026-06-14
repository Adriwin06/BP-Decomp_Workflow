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

struct cLionEffectDefinition;

struct cParticleEmitter;

// Declaration
struct LoadingScriptedState {
	// BrnGameMainFlowStates.h:81
	enum ELoadingStateStage {
		E_LOADINGSTATESTAGE_START = 0,
		E_LOADINGSTATESTAGE_SOUND_AGAIN = 1,
		E_LOADINGSTATESTAGE_EFFECTS = 2,
		E_LOADINGSTATESTAGE_WORLD = 3,
		E_LOADINGSTATESTAGE_SOUND_BINDPROPS = 4,
		E_LOADINGSTATESTAGE_WORLD_COLLISION = 5,
		E_LOADINGSTATESTAGE_DONE = 6,
		E_LOADINGSTATE_NUM = 7,
	}

}

// Declaration
struct WorldModule {
private:
	// WorldBridgeEntityModulesToScene.cpp:160
	void BridgeWorldModuleToSceneModule_PostScene(CgsSceneManager::SceneManagerIO::InputBuffer_Query *);

	// WorldBridgeEntityModulesToScene.cpp:176
	void BridgePropModuleToSceneModule_PostScene(CgsSceneManager::SceneManagerIO::InputBuffer_Query *);

	// WorldBridgeSceneToEntityModules.cpp:136
	void BridgeSceneQueryResultsToWorldModule_PrePhysics(const OutputBuffer *);

	// WorldBridgeSceneToEntityModules.cpp:152
	void BridgeSceneQueryResultsToPropModule_PrePhysics(const OutputBuffer *);

	// WorldBridgeSceneToEntityModules.cpp:243
	void BridgeSceneContactsToWorldModule_PrePhysics(const OutputBuffer *);

	// WorldBridgePhysicsToEntityModules.cpp:38
	void BridgePhysicsModuleToRaceCarModule_PostPhysics(InputBuffer_PostPhysics *, const OutputBuffer *);

	// WorldBridgeToEntityModules.cpp:45
	void BridgeWorldModuleToEntityModules_Render(InputBuffer_Dispatch *, InputBuffer_GenerateDispatchLists *, InputBuffer_GenerateDispatchLists *, InputBuffer_Dispatch *, const DispatchInputBuffer *);

	// WorldBridgeEntityModulesToEntityModules.cpp:136
	void BridgeRaceCarModuleToPropModule_PreScene(InputBuffer_PreScene *, const OutputBuffer_PreScene *);

	// WorldBridgePhysicsToEntityModules.cpp:140
	void BridgePhysicsModuleToAIModule_PostPhysics(InputBuffer_PostPhysics *, const OutputBuffer *);

	// WorldBridgeSceneToOutput.cpp:40
	void BridgeSceneModuleToOutput(UpdateOutputBuffer *, const OutputBuffer *);

	// WorldBridgeAIToEntityModules.cpp:36
	void BridgeAIToEntityModules_PrePhysics(InputBuffer_PrePhysics *, InputBuffer_PrePhysics *, const OutputBuffer *);

	// WorldBridgeAIToEntityModules.cpp:55
	void BridgeAIToEntityModules_PostPhysics(InputBuffer_PostPhysics *, const OutputBuffer *);

	// WorldBridgeCrashToEntityModules.cpp:38
	void BridgeCrashModuleToRaceCarModule_PostScene(InputBuffer_PostScene *, const OutputBuffer_PreScene *);

	// WorldBridgeCrashToEntityModules.cpp:56
	void BridgeCrashModuleToPhysicsModule(InputBuffer *, const OutputBuffer_PreScene *);

	// WorldBridgeCrashToEntityModules.cpp:77
	void BridgeCrashModuleToTrafficModule_PostScene(InputBuffer_PostScene *, const OutputBuffer_PreScene *);

	// WorldBridgeEntityModulesToAI.cpp:38
	void BridgeRaceCarModuleToAIModule_PreScene(InputBuffer *, const OutputBuffer_PreScene *);

	// WorldBridgeEntityModulesToAI.cpp:58
	void BridgeRaceCarModuleToAIModule_PostScene(InputBuffer *, const OutputBuffer_PostScene *);

	// WorldBridgeEntityModulesToAI.cpp:78
	void BridgeTrafficModuleToAIModule_Update(InputBuffer *, const OutputBuffer_PostScene *);

	// WorldBridgeEntityModulesToCrash.cpp:35
	void BridgeEntityModulesToCrashModule_PreScene(InputBuffer_PreScene *, const OutputBuffer_PreScene *);

	// WorldBridgeEntityModulesToCrash.cpp:53
	void BridgeTrafficToCrashModule_PostPhysics(InputBuffer_PostPhysics *, const OutputBuffer_PostPhysics *);

	// WorldBridgeEntityModulesToEntityModules.cpp:31
	void BridgeRaceCarModuleToTrafficModule_PreScene(InputBuffer_PreScene *, InputBuffer_PostScene *, InputBuffer_PostPhysics *, const OutputBuffer_PreScene *);

	// WorldBridgeEntityModulesToEntityModules.cpp:59
	void BridgeRaceCarModuleToTrafficModule_PostScene(InputBuffer_PostScene *, const OutputBuffer_PostScene *);

	// WorldBridgeEntityModulesToEntityModules.cpp:70
	void BridgeTrafficToRaceCar_PrePhysics(InputBuffer_PrePhysics *, const OutputBuffer_PostScene *);

	// WorldBridgeEntityModulesToEntityModules.cpp:81
	void BridgeRaceCarModuleToTrafficModule_PrePhysics(InputBuffer_PrePhysics *, const OutputBuffer_PrePhysics *);

	// WorldBridgeEntityModulesToEntityModules.cpp:90
	void BridgeRaceCarModuleToWorldModule_PreScene(InputBuffer_PreScene *, const OutputBuffer_PreScene *);

	// WorldBridgeEntityModulesToEntityModules.cpp:126
	void BridgeWorldModuleToPropModule_PreScene(InputBuffer_PreScene *, const OutputBuffer_PreScene *);

	// WorldBridgeEntityModulesToEntityModules.cpp:161
	void BridgeCrashModuleToPropModule_PostScene(InputBuffer_PostScene *, const OutputBuffer_PreScene *);

	// WorldBridgeEntityModulesToPhysics.cpp:40
	void BridgeEntityModulesToPhysicsModule_PreScene(InputBuffer *, const OutputBuffer_PreScene *, const OutputBuffer_PreScene *);

	// WorldBridgeEntityModulesToScene.cpp:38
	void BridgeTrafficModuleToSceneModule_Prepare(InputBuffer_Update *, const OutputBuffer_Prepare *);

	// WorldBridgeEntityModulesToScene.cpp:56
	void BridgePropModuleToSceneModule_Prepare(InputBuffer_Update *, const OutputBuffer_Prepare *);

	// WorldBridgeEntityModulesToScene.cpp:74
	void BridgePropModuleToPhysicsModule_Prepare(InputBuffer *, const OutputBuffer_Prepare *);

	// WorldBridgeEntityModulesToScene.cpp:96
	void BridgeEntityModulesToSceneModule_PreScene(InputBuffer_Update *, const OutputBuffer_PreScene *, const OutputBuffer_PreScene *, const OutputBuffer_PreScene *, const OutputBuffer_PreScene *, const OutputBuffer_PreScene *);

	// WorldBridgeEntityModulesToScene.cpp:121
	void BridgeRaceCarModuleToSceneModule_PostScene(CgsSceneManager::SceneManagerIO::InputBuffer_Query *, const OutputBuffer_PostScene *);

	// WorldBridgeAIToScene.cpp:14
	void BridgeAIModuleToSceneModule_SceneQueries(CgsSceneManager::SceneManagerIO::InputBuffer_Query *, const OutputBuffer_PostScene *);

	// WorldBridgeEntityModulesToScene.cpp:142
	void BridgeTrafficModuleToSceneModule_PostScene(CgsSceneManager::SceneManagerIO::InputBuffer_Query *, const OutputBuffer_PostScene *);

	// WorldBridgeEntityModulesToScene.cpp:193
	void BridgeTriggerModuleToSceneModule_PostScene(CgsSceneManager::SceneManagerIO::InputBuffer_Query *, const OutputBuffer_PostScene *);

	// WorldBridgeEntityModulesToScene.cpp:241
	void BridgeEntityModulesToScene_PostPhysics(InputBuffer_Update *, const OutputBuffer_PostPhysics *, const OutputBuffer_PostPhysics *, const OutputBuffer_PostPhysics *, const OutputBuffer_PostPhysics *);

	// WorldBridgeInputToCrash.cpp:38
	void BridgeInputToCrashModule(InputBuffer_PreScene *, const UpdateInputBuffer *);

	// WorldBridgeEntityModulesToOutput.cpp:243
	void BridgePropResourceRequestsToOutput_Prepare(UpdateOutputBuffer *, const OutputBuffer_Prepare *);

	// WorldBridgeEntityModulesToOutput.cpp:165
	void BridgeRaceCarResourceRequestsToOutput_Prepare(UpdateOutputBuffer *, const OutputBuffer_Prepare *);

	// WorldBridgeEntityModulesToOutput.cpp:144
	void BridgeRaceCarResourceRequestsToOutput(UpdateOutputBuffer *, const OutputBuffer_PostPhysics *);

	// WorldBridgeEntityModulesToOutput.cpp:224
	void BridgeWorldResourceRequestsToOutput_PostPhysics(UpdateOutputBuffer *, const OutputBuffer_PostPhysics *);

	// WorldBridgeEntityModulesToOutput.cpp:186
	void BridgeTrafficResourceRequestsToOutput(UpdateOutputBuffer *, const OutputBuffer_Prepare *);

	// WorldBridgeEntityModulesToOutput.cpp:205
	void BridgeWorldResourceRequestsToOutput_Prepare(UpdateOutputBuffer *, const OutputBuffer_Prepare *);

	// WorldBridgeEntityModulesToEntityModules.cpp:48
	void BridgeTrafficToTrigger_PreScene(InputBuffer_PreScene *, const OutputBuffer_PreScene *);

	// WorldBridgeInputToEntityModules.cpp:183
	void CheckForNetworkDriverControlsReceived(InputBuffer_PreScene *, const UpdateInputBuffer *);

	// WorldBridgeAIToPhysics.cpp:38
	void BridgeAIModuleToPhysicsModule(InputBuffer *, const OutputBuffer *);

	// WorldBridgeInputToPhysics.cpp:29
	void BridgeInputToPhysicsModule(InputBuffer *, const UpdateInputBuffer *);

	// WorldBridgePhysicsToEntityModules.cpp:61
	void BridgePhysicsModuleToCrashModule_PostPhysics(InputBuffer_PostPhysics *, const OutputBuffer *);

	// WorldBridgePhysicsToEntityModules.cpp:80
	void BridgePhysicsModuleToTrafficModule_PostPhysics(InputBuffer_PostPhysics *, const OutputBuffer *);

	// WorldBridgePhysicsToEntityModules.cpp:100
	void BridgePhysicsModuleToPropModule_PostPhysics(InputBuffer_PostPhysics *, const OutputBuffer *);

	// WorldBridgePhysicsToEntityModules.cpp:121
	void BridgePropModuleToTrafficModule_PrePhysics(InputBuffer_PrePhysics *, const OutputBuffer_PrePhysics *);

	// WorldBridgeEntityModulesToOutput.cpp:291
	void BridgeRaceCarEntityInfoToOutput_PreScene(UpdateOutputBuffer *, const OutputBuffer_PreScene *);

	// WorldBridgePhysicsToOutput.cpp:29
	void BridgePhysicsToOutput(UpdateOutputBuffer *, const OutputBuffer *);

	// WorldBridgeEntityModulesToOutput.cpp:458
	void BridgeWorldEntityInfoToOutput(UpdateOutputBuffer *, const OutputBuffer_PreScene *);

	// WorldBridgeEntityModulesToOutput.cpp:438
	void BridgeTrafficEntityInfoToOutput_PostPhysics(UpdateOutputBuffer *, const OutputBuffer_PostPhysics *);

	// WorldBridgeEntityModulesToOutput.cpp:386
	void BridgeRaceCarEntityInfoToOutput_PostPhysics(UpdateOutputBuffer *, const OutputBuffer_PostPhysics *);

	// WorldBridgeEntityModulesToOutput.cpp:317
	void BridgeRaceCarEntityInfoToOutput_PrePhysics(UpdateOutputBuffer *, const OutputBuffer_PrePhysics *);

	// WorldBridgeCrashToOutput.cpp:36
	void BridgeCrashModuleToOutput(UpdateOutputBuffer *, const OutputBuffer_PostPhysics *);

	// WorldBridgeAIToOutput.cpp:38
	void BridgeAIModuleToOutput(UpdateOutputBuffer *, const OutputBuffer *);

	// WorldBridgePhysicsToScene.cpp:38
	void BridgePhysicsSceneQueriesToScene(CgsSceneManager::SceneManagerIO::InputBuffer_Query *, const OutputBuffer *);

	// WorldBridgePhysicsToScene.cpp:101
	void BridgePhysicsSceneUpdateToScene(InputBuffer_Update *, const OutputBuffer *);

	// WorldBridgeSceneToEntityModules.cpp:169
	void BridgeSceneContactsToRaceCarModule_PrePhysics(InputBuffer_PrePhysics *, const OutputBuffer *);

	// WorldBridgeSceneToEntityModules.cpp:189
	void BridgeSceneContactsToTrafficModule_PrePhysics(InputBuffer_PrePhysics *, const OutputBuffer *);

	// WorldBridgeSceneToEntityModules.cpp:207
	void BridgeSceneContactsToPropModule_PrePhysics(InputBuffer_PrePhysics *, const OutputBuffer *);

	// WorldBridgeSceneToEntityModules.cpp:227
	void BridgeSceneQueryResultsToTriggerModule_PrePhysics(InputBuffer_PrePhysics *, const OutputBuffer *);

	// WorldBridgeSceneToEntityModules.cpp:117
	void BridgeSceneQueryResultsToTrafficModule_PrePhysics(InputBuffer_PrePhysics *, InputBuffer_PostPhysics *, const OutputBuffer *);

	// WorldBridgeSceneToEntityModules.cpp:96
	void BridgeSceneQueryResultsToRaceCarModule_PrePhysics(InputBuffer_PrePhysics *, const OutputBuffer *);

	// WorldBridgeSceneToAI.cpp:13
	void BridgeSceneQueryResultsToAIModule_Update(InputBuffer *, const OutputBuffer *);

	// WorldBridgeEntityModulesToOutput.cpp:72
	void BridgeEntityModulesToOutput_PostPhysics(UpdateOutputBuffer *, const OutputBuffer_PostPhysics *, const OutputBuffer_PostPhysics *, const OutputBuffer_PostPhysics *, const OutputBuffer_PostPhysics *);

	// WorldBridgeEntityModulesToOutput.cpp:413
	void BridgeTrafficEntityInfoToOutput_PreScene(UpdateOutputBuffer *, const OutputBuffer_PreScene *);

	// WorldBridgeEntityModulesToOutput.cpp:339
	void BridgeTrafficCarEntityInfoToOutput_PrePhysics(UpdateOutputBuffer *, const OutputBuffer_PrePhysics *);

	// WorldBridgeEntityModulesToOutput.cpp:40
	void BridgeEntityModulesToOutput_PrePhysics(UpdateOutputBuffer *, const OutputBuffer_PrePhysics *, const OutputBuffer_PrePhysics *, const OutputBuffer_PrePhysics *);

	// WorldBridgeEntityModulesToOutput.cpp:264
	void BridgePropToOutput_PreScene(UpdateOutputBuffer *, const OutputBuffer_PreScene *);

	// WorldBridgeEntityModulesToPhysics.cpp:74
	void BridgeEntityModulesToPhysicsModule_PrePhysics(InputBuffer *, const OutputBuffer_PrePhysics *, const OutputBuffer_PrePhysics *, const OutputBuffer_PrePhysics *);

	// WorldBridgeSceneToPhysics.cpp:38
	void BridgeSceneQueryResultsToPhysics(InputBuffer *, const OutputBuffer *);

	// WorldBridgeSceneToPhysics.cpp:115
	void BridgeScenePotentialContactsToPhysics(InputBuffer *, const OutputBuffer *);

	// WorldBridgeToEntityModules.cpp:79
	void BridgeActionsToRaceCarModule(InputBuffer_PreScene *, const UpdateInputBuffer *);

	// WorldBridgeInputToAI.cpp:37
	void BridgeInputToAIModule(InputBuffer *, const UpdateInputBuffer *);

	// WorldBridgeToEntityModules.cpp:171
	void BridgeActionsToWorldModule(InputBuffer_PostPhysics *, const UpdateInputBuffer *);

	// WorldBridgeToEntityModules.cpp:104
	void BridgeActionsToTrafficModule(InputBuffer_PostPhysics *, const UpdateInputBuffer *);

	// WorldBridgeToEntityModules.cpp:219
	void BridgeActionsToPhysicsModule(InputBuffer *, const UpdateInputBuffer *);

	// WorldBridgeInputToEntityModules.cpp:46
	void BridgeInputToEntityModules(InputBuffer_PreScene *, InputBuffer_PostScene *, InputBuffer_PreScene *, InputBuffer_PreScene *, InputBuffer_PrePhysics *, InputBuffer_PreScene *, InputBuffer_PreScene *, const UpdateInputBuffer *);

}

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

void CgsModule::IOBuffer::IsBufferLockedForReading() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
}

void CgsModule::IOBuffer::IsBufferLockedForReading(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void operator++(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
}

void WorldModule::BridgeWorldModuleToSceneModule_PostScene(CgsSceneManager::SceneManagerIO::InputBuffer_Query *  lpSceneModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgePropModuleToSceneModule_PostScene(CgsSceneManager::SceneManagerIO::InputBuffer_Query *  lpSceneModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeSceneQueryResultsToWorldModule_PrePhysics(const OutputBuffer *  lpSceneModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeSceneQueryResultsToPropModule_PrePhysics(const OutputBuffer *  lpSceneModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeSceneContactsToWorldModule_PrePhysics(const OutputBuffer *  lpSceneModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::ResourceHandle(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsResource::ResourceHandle::Construct(ResourceHandle::Resource *  lpResource, CgsResource::Entry *  lpSourceEntry) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::RGBA::RGBA(uint8_t  r, uint8_t  g, uint8_t  b, uint8_t  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void renderengine::RGBA32::RGBA32(float32_t  red, float32_t  green, float32_t  blue, float32_t  alpha) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector2Template<float>::Vector2Template(float  _x, float  _y) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void rw::math::fpu::Vector3Template<float>::Vector3Template(float  _x, float  _y, float  _z) {
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

void rw::math::fpu::Vector4Template<double>::Vector4Template(double  _x, double  _y, double  _z, double  _w) {
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

void rw::math::fpu::Cos(float  a) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void std::cosf(float  _Left) {
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

void BrnPhysics::ContactId::ContactId(uint32_t  luId) {
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
	CgsSceneManager::SceneQueryId::SceneQueryId(/* parameters */);
	CgsPhysics::RigidBodyId::RigidBodyId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::fpu::Cos(/* parameters */);
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
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator/(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	BrnPhysics::ContactId::ContactId(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
}

void CgsModule::BaseEventQueue<BrnDirector::NewVehicleEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnDirector::NewVehicleEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnDirector::NewVehicleEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::MemCpy(void *  lpDestination, const void *  lpSource, size_t  liSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnDirector::NewVehicleEvent>::Append(const const BaseEventQueue<BrnDirector::NewVehicleEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>::Append(const const BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent>::Append(const const BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::EventQueue<BrnPhysics::Props::AddPhysicalPropEvent,50>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent>::Append(const const BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Props::RemovePhysicalPropEvent,300>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent>::Append(const const BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Props::RemovePhysicalPartEvent,100>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent>::Append(const const BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Props::AddPhysicalPartEvent,50>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::Append(const const BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Props::PropInputInterface::Append(const PropInputInterface *  lpInterfaceToAppend) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Append<50>(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPropEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Append<300>(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Props::RemovePhysicalPropEvent,300>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPropEvent>::Append(/* parameters */);
	Append<100>(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Props::RemovePhysicalPartEvent,100>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::RemovePhysicalPartEvent>::Append(/* parameters */);
	Append<50>(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Props::AddPhysicalPartEvent,50>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Props::AddPhysicalPartEvent>::Append(/* parameters */);
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Append(const const BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8>::operator=(const const EventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent,8> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Clear(/* parameters */);
	BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::Append(/* parameters */);
	BaseEventQueue<BrnTraffic::BrnTrafficIO::ActivateHullEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50>::operator=(const const EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::Append(const const BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::JointedPartStateEvent,50>::operator=(const const EventQueue<BrnPhysics::Deformation::JointedPartStateEvent,50> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::JointedPartStateEvent,50>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::Append(const const BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10>::operator=(const const EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::Append(const const BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20>::operator=(const const EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Append(const const BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent,50>::operator=(const const EventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent,50> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent,50>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::Append(const const BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationOutputInterface::operator=(const const DeformationOutputInterface &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationOutputInterface.h:349
		uint32_t luDeformationModelIndex;

	}
	CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent,50>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartNotificationEvent>::Append(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::JointedPartStateEvent,50>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::JointedPartStateEvent,50>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::JointedPartStateEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent,10>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::BrokenJointNotificationEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent,50>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent,50>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartCurrentPositionEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition,298>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::Append(const const BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventUpdateCachedPosition>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition,1024>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity,5120>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddDynamicVolume,1280>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddForCollision,1536>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstance,1280>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventForceNoPadding,64>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity,10000>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveForCollision,1536>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolume,1344>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveVolumeInstance,1280>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventReplaceDynamicVolume,64>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetCullingGroupPair,64>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable,64>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearCullingTable>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::Append(const const BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache,298>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::Append(const const BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventRemoveFromCache>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList,20>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>::Append(const const BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventAddPolySoupList>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>::Append(const const BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::Append(const const CgsSceneManager::SceneManagerIO::InSceneUpdateInterface &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Append<1024>(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform,1024>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::Append(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceTransform>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Append<64>(/* parameters */);
	Append<1536>(/* parameters */);
	Append<1024>(/* parameters */);
	Append<5120>(/* parameters */);
	Append<1280>(/* parameters */);
	Append<1536>(/* parameters */);
	Append<1280>(/* parameters */);
	Append<10000>(/* parameters */);
	Append<1344>(/* parameters */);
	Append<1280>(/* parameters */);
	Append<64>(/* parameters */);
	Append<64>(/* parameters */);
	Append<64>(/* parameters */);
	Append<512>(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius,512>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityRadius>::Append(/* parameters */);
	Append<1280>(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding,1280>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetPadding>::Append(/* parameters */);
	Append<1280>(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup,1280>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetVolumeInstanceCullingGroup>::Append(/* parameters */);
	Append<64>(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching,64>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddVolumeInstanceForCaching>::Append(/* parameters */);
	Append<16>(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding,16>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventClearEntityPadding>::Append(/* parameters */);
	Append<298>(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache,298>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCacheManagerIO::InEventAddToCache>::Append(/* parameters */);
	Append<298>(/* parameters */);
	Append<20>(/* parameters */);
	Append<20>(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists,20>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::TriangleCollisionManagerIO::InEventClearPolySoupLists>::Append(/* parameters */);
	Append<1>(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities,1>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveAllEntities>::Append(/* parameters */);
}

extern CameraEffects & operator=(const const CameraEffects &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::HookNameStringWrapper::operator=(const const HookNameStringWrapper &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnDirector::HookNameStringWrapper::Set(const char *  lpcName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsCore::StrCpy(char *  lpcDest, unsigned int  luBytes, const char *  lpcSource) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern BackgroundEffectRequest & operator=(const const BackgroundEffectRequest &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern Camera & operator=(const const Camera &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	operator=(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	BrnDirector::HookNameStringWrapper::operator=(/* parameters */);
	BrnDirector::HookNameStringWrapper::Set(/* parameters */);
	operator=(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
}

void CgsModule::IOBuffer::IsBufferLockedForWriting() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
	}
}

void CgsModule::IOBuffer::IsBufferLockedForWriting(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,2000>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleInputInterface::Append(const VehicleInputInterface *  lpInterfaceToAppend) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Append<2000>(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Append<8>(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent,8>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateRaceCarEvent>::Append(/* parameters */);
	Append<8>(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent,8>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveRaceCarEvent>::Append(/* parameters */);
	Append<16>(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ResetVehicleEvent,16>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ResetVehicleEvent>::Append(/* parameters */);
	Append<25>(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent,25>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreatePhysicalTrafficEvent>::Append(/* parameters */);
	Append<25>(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent,25>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetTrafficCrashingEvent>::Append(/* parameters */);
	Append<25>(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent,25>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::Append(/* parameters */);
	Append<20>(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent,20>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::UpdateNetworkTrafficEvent>::Append(/* parameters */);
	Append<16>(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Append(/* parameters */);
	Append<8>(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent,8>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ValidateRaceCarEvent>::Append(/* parameters */);
	Append<10>(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent,10>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCollisionEvent>::Append(/* parameters */);
	Append<10>(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent,10>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::SetRaceCarCullingGroupEvent>::Append(/* parameters */);
	Append<10>(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent,10>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateArticulatedTrafficEvent>::Append(/* parameters */);
	Append<64>(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent,64>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::VehicleAddedForCollisionEvent>::Append(/* parameters */);
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,20>::operator=(const const EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,20> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,20>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20>::operator=(const const EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10>::operator=(const const EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8>::operator=(const const EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8>::operator=(const const EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8>::operator=(const const EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<std::uint16_t,32>::operator=(const const EventQueue<std::uint16_t,32> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<uint16_t>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<std::uint16_t,32>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<uint16_t>::Append(const const BaseEventQueue<uint16_t> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<uint16_t>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<uint16_t>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<uint16_t>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25>::operator=(const const EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern VehicleManagerOutputInterface & operator=(const const VehicleManagerOutputInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,20>::operator=(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent,20>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficSlammedEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent,10>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficCrashedEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent,8>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarCrashEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::RaceCarResetEvent,8>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RaceCarResetEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreateVehicleResult,8>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateVehicleResult>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<std::uint16_t,32>::operator=(/* parameters */);
	CgsModule::EventQueue<std::uint16_t,32>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<uint16_t>::Append(/* parameters */);
	CgsModule::BaseEventQueue<uint16_t>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<uint16_t>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25>::operator=(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent,25>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::TrafficRemovedEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
}

void BrnPhysics::PhysicsModuleIO::OutputBuffer::GetVehicleOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:354
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics::SetVehicleOutputInterface(const InputBuffer_PostPhysics::VehicleOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:514
		CgsDev::StrStream lStrStream;

	}
}

extern VehicleOutputInterface & operator=(const const VehicleOutputInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::RaceCarState::operator=(const const RaceCarState &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>::operator=(const const EventQueue<BrnPhysics::Vehicle::ImpactEvent,16> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>::operator=(const const EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModuleIO::OutputBuffer::GetVehicleManagerOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:351
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics::SetVehicleManagerOutputInterface(const InputBuffer_PostPhysics::VehicleManagerOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:517
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::PhysicsModuleIO::OutputBuffer::GetDeformationOutputInterfaceForEntityModules() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:363
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics::SetDeformationOutputInterfaceForEntityModules(const InputBuffer_PostPhysics::DeformationOutputInterfaceForEntityModules *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:523
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Deformation::DeformationOutputInterfaceForEntityModules::operator=(const const DeformationOutputInterfaceForEntityModules &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDeformationOutputInterface.h:516
		uint32_t luI;

	}
}

extern WheelPhysicalStates & operator=(const const WheelPhysicalStates &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern BrnPhysics::Deformation::WheelPhysicalStates::WheelPhysicalState & operator=(const const BrnPhysics::Deformation::WheelPhysicalStates::WheelPhysicalState &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Deformation::DeformationOutputInterfaceForEntityModules::GetDetachedPartRenderQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent,50>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::Append(const const BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::PhysicsModuleIO::OutputBuffer::GetDeformationOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:360
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics::SetDeformationOutputInterface(const InputBuffer_PostPhysics::DeformationOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:526
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics::GetSceneInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:520
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::PhysicsModuleIO::OutputBuffer::GetSceneInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:366
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::PhysicsModuleIO::OutputBuffer::GetContactSpyInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:369
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics::SetContactSpyInterface(const InputBuffer_PostPhysics::ContactSpyInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:529
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::ContactSpy::ContactSpyInterface::operator=(const const ContactSpyInterface &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgePhysicsModuleToRaceCarModule_PostPhysics(InputBuffer_PostPhysics *  lpRaceCarInputBuffer_PostPhysics, const OutputBuffer *  lpPhysicsModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetVehicleOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics::SetVehicleOutputInterface(/* parameters */);
	operator=(/* parameters */);
	BrnPhysics::Vehicle::RaceCarState::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>::operator=(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetVehicleManagerOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics::SetVehicleManagerOutputInterface(/* parameters */);
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetDeformationOutputInterfaceForEntityModules(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics::SetDeformationOutputInterfaceForEntityModules(/* parameters */);
	BrnPhysics::Deformation::DeformationOutputInterfaceForEntityModules::operator=(/* parameters */);
	operator=(/* parameters */);
	Append<50>(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent,50>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::Append(/* parameters */);
	Append<20>(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetDeformationOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics::SetDeformationOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics::GetSceneInputInterface(/* parameters */);
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetSceneInputInterface(/* parameters */);
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetContactSpyInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics::SetContactSpyInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnPhysics::ContactSpy::ContactSpyInterface::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnWorldIO::DispatchInputBuffer::GetDispatchFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:857
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists::SetDispatchFrame(CgsGraphics::DispatchFrame *  lpDispatchFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityModuleIO.h:279
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists::SetShadowMap(BrnWorld::ShadowMap *  lpShadowMap) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityModuleIO.h:282
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch::SetDispatchFrame(CgsGraphics::DispatchFrame *  lpDispatchFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:475
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::DispatchInputBuffer::GetBlobbyShadowBuffer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:398
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch::SetBlobbyShadowBuffer(BrnBlobbyShadowManager::BrnBlobbyShadowBuffer *  lpBlobbyShadowBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:481
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::DispatchInputBuffer::GetCoronaSubmissionInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:401
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch::SetCoronaSubmissionInterface(BrnCoronaManager::BrnSubmissionInterface *  lpCoronaSubmissionInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:484
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch::SetShadowMap(BrnWorld::ShadowMap *  lpShadowMap) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:487
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::PropEntityIO::InputBuffer_Dispatch::SetDispatchFrame(InputBuffer_Dispatch::DispatchFrame *  lpDispatchFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:293
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::PropEntityIO::InputBuffer_Dispatch::SetShadowMap(BrnWorld::ShadowMap *  lpShadowMap) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:299
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::PropEntityIO::InputBuffer_Dispatch::SetCoronaSubmissionInterface(BrnCoronaManager::BrnSubmissionInterface *  lpCoronaSubmissionInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:302
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_GenerateDispatchLists::SetDispatchFrame(CgsGraphics::DispatchFrame *  lpDispatchFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:634
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::DispatchInputBuffer::GetCameraInput() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:385
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_GenerateDispatchLists::SetCameraInput(const Camera *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:628
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_GenerateDispatchLists::SetBlobbyShadowBuffer(BrnBlobbyShadowManager::BrnBlobbyShadowBuffer *  lpBlobbyShadowBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:637
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_GenerateDispatchLists::SetCoronaSubmissionInterface(BrnCoronaManager::BrnSubmissionInterface *  lpCoronaSubmissionInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:640
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_GenerateDispatchLists::SetShadowMap(BrnWorld::ShadowMap *  lpShadowMap) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:643
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeWorldModuleToEntityModules_Render(InputBuffer_Dispatch *  lpTrafficInputBuffer_Dispatch, InputBuffer_GenerateDispatchLists *  lpRaceCarInputBuffer, InputBuffer_GenerateDispatchLists *  lpWorldEntityInputBuffer, InputBuffer_Dispatch *  lpPropEntityInputBuffer, const DispatchInputBuffer *  lpWorldInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WorldBridgeToEntityModules.cpp:47
		CgsGraphics::DispatchFrame * lpDispatchFrame;

		BrnWorldIO::DispatchInputBuffer::GetDispatchFrame(/* parameters */);
	}
	BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists::SetDispatchFrame(/* parameters */);
	BrnWorld::WorldEntityIO::InputBuffer_GenerateDispatchLists::SetShadowMap(/* parameters */);
	BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch::SetDispatchFrame(/* parameters */);
	BrnWorldIO::DispatchInputBuffer::GetBlobbyShadowBuffer(/* parameters */);
	BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch::SetBlobbyShadowBuffer(/* parameters */);
	BrnWorldIO::DispatchInputBuffer::GetCoronaSubmissionInterface(/* parameters */);
	BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch::SetCoronaSubmissionInterface(/* parameters */);
	BrnTraffic::BrnTrafficIO::InputBuffer_Dispatch::SetShadowMap(/* parameters */);
	BrnWorld::PropEntityIO::InputBuffer_Dispatch::SetDispatchFrame(/* parameters */);
	BrnWorld::PropEntityIO::InputBuffer_Dispatch::SetShadowMap(/* parameters */);
	BrnWorldIO::DispatchInputBuffer::GetCoronaSubmissionInterface(/* parameters */);
	BrnWorld::PropEntityIO::InputBuffer_Dispatch::SetCoronaSubmissionInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_GenerateDispatchLists::SetDispatchFrame(/* parameters */);
	BrnWorldIO::DispatchInputBuffer::GetCameraInput(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_GenerateDispatchLists::SetCameraInput(/* parameters */);
	BrnWorldIO::DispatchInputBuffer::GetBlobbyShadowBuffer(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_GenerateDispatchLists::SetBlobbyShadowBuffer(/* parameters */);
	BrnWorldIO::DispatchInputBuffer::GetCoronaSubmissionInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_GenerateDispatchLists::SetCoronaSubmissionInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_GenerateDispatchLists::SetShadowMap(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
		CgsDev::StrStream::StrStream(/* parameters */);
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
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::GetActiveRaceCarOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:288
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::InputBuffer_PreScene::SetPlayerPosition(const rw::math::vpu::Vector3  lPlayerPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::InputBuffer_PreScene::SetPlayerCarIndex(uint8_t  lu8PlayerIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarCrashing() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::InputBuffer_PreScene::SetPlayerCarCrashing(bool  lbPlayerCarCrashing) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerWrecked() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::InputBuffer_PreScene::SetPlayerWrecked(bool  lbPlayerCarWrecked) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::InputBuffer_PreScene::SetRaceCarVelocity(int32_t  liRaceCarIndex, const rw::math::vpu::Vector3  lVelocity) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeRaceCarModuleToPropModule_PreScene(InputBuffer_PreScene *  lpPropInputBuffer_PreScene, const OutputBuffer_PreScene *  lpRaceCarOutputBuffer_PreScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WorldBridgeEntityModulesToEntityModules.cpp:138
		const RCEntityActiveRaceCarOutputInterface * lpActiveRaceCarInterface;

		BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::GetActiveRaceCarOutputInterface(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerPosition(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetPlayerActiveRaceCarIndex(/* parameters */);
		BrnWorld::PropEntityIO::InputBuffer_PreScene::SetPlayerCarIndex(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarCrashing(/* parameters */);
		BrnWorld::PropEntityIO::InputBuffer_PreScene::SetPlayerCarCrashing(/* parameters */);
		BrnWorld::PropEntityIO::InputBuffer_PreScene::SetPlayerWrecked(/* parameters */);
		{
			// WorldBridgeEntityModulesToEntityModules.cpp:147
			int32_t liActiveRaceCarIndex;

			{
				// WorldBridgeEntityModulesToEntityModules.cpp:149
				EActiveRaceCarIndex leRaceCarEnum;

				BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
				{
					// WorldBridgeEntityModulesToEntityModules.cpp:152
					Vector3 lLinearVelocity;

					BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::GetRaceCarState(/* parameters */);
				}
			}
		}
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AIModuleIO::InputBuffer_PostPhysics::AppendContacts(const ContactSpyInterface *  lpContacts) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgePhysicsModuleToAIModule_PostPhysics(InputBuffer_PostPhysics *  lpAIModuleInputBuffer_PostPhysics, const OutputBuffer *  lpPhysicsModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetContactSpyInterface(/* parameters */);
	BrnAI::AIModuleIO::InputBuffer_PostPhysics::AppendContacts(/* parameters */);
}

void CgsSceneManager::SceneManagerIO::OutputBuffer::GetTriangleCacheInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerModuleIO.h:628
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateOutputBuffer::AppendTriangleCacheInterface(const UpdateOutputBuffer::OutTriangleCacheInterface *  lpTriangleCacheInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneManagerIO::TriangleCacheInterface::Append(const TriangleCacheInterface *  lpInterfaceToAppend) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeSceneModuleToOutput(UpdateOutputBuffer *  lpOutputBuffer, const OutputBuffer *  lpSceneModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSceneManager::SceneManagerIO::OutputBuffer::GetTriangleCacheInterface(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::AppendTriangleCacheInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AIModuleIO::OutputBuffer::GetAIModuleResultInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:479
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AIModuleIO::AIModuleResultInterface::GetResetOnTrackResultQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::InputBuffer_PrePhysics::AppendResetOnTrackResultQueue(const AIModuleResultInterface::ResetOnTrackResultQueue *  lpQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:544
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<BrnAI::AIModuleIO::ResetOnTrackResult,128>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>::Append(const const BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PrePhysics::SetAIModuleResultInterface(const InputBuffer_PrePhysics::AIModuleResultInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:419
		CgsDev::StrStream lStrStream;

	}
}

extern AIModuleResultInterface & operator=(const const AIModuleResultInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnAI::AIModuleIO::ResetOnTrackResult,128>::operator=(const const EventQueue<BrnAI::AIModuleIO::ResetOnTrackResult,128> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackResult>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest,128>::operator=(const const EventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest,128> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest,128>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>::Append(const const BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::PlaceOnTrackRequest>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeAIToEntityModules_PrePhysics(InputBuffer_PrePhysics *  lpRaceCarInputBuffer_PrePhysics, InputBuffer_PrePhysics *  lpPropInputBuffer_PrePhysics, const OutputBuffer *  lpAIOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	BrnAI::AIModuleIO::OutputBuffer::GetAIModuleResultInterface(/* parameters */);
	BrnWorld::PropEntityIO::InputBuffer_PrePhysics::AppendResetOnTrackResultQueue(/* parameters */);
	Append<128>(/* parameters */);
	BrnAI::AIModuleIO::OutputBuffer::GetAIModuleResultInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_PrePhysics::SetAIModuleResultInterface(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AIModuleIO::OutputBuffer::GetAIRaceCarInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:451
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics::SetAIRaceCarInterface(const InputBuffer_PostPhysics::AIRaceCarInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:532
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeAIToEntityModules_PostPhysics(InputBuffer_PostPhysics *  lpRaceCarInputBuffer_PostPhysics, const OutputBuffer *  lpAIOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	BrnAI::AIModuleIO::OutputBuffer::GetAIRaceCarInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostPhysics::SetAIRaceCarInterface(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::CrashIO::OutputBuffer_PreScene::GetRaceCarOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:136
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostScene::SetCrashInterface(const InputBuffer_PostScene::CrashInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:344
		CgsDev::StrStream lStrStream;

	}
}

extern RaceCarOutputInterface & operator=(const const RaceCarOutputInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent,10>::operator=(const const EventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent,10> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent,10>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent>::Append(const const BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RaceCarCrashCompleteEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeCrashModuleToRaceCarModule_PostScene(InputBuffer_PostScene *  lpRaceCarInputBuffer_PostScene, const OutputBuffer_PreScene *  lpCrashOutput_PreScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::CrashIO::OutputBuffer_PreScene::GetRaceCarOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_PostScene::SetCrashInterface(/* parameters */);
	operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::GetVehicleInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:276
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::CrashIO::OutputBuffer_PreScene::GetVehicleInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:133
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeCrashModuleToPhysicsModule(InputBuffer *  lpPhysicsModuleInputBuffer, const OutputBuffer_PreScene *  lpCrashOutput_PreScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnPhysics::PhysicsModuleIO::InputBuffer::GetVehicleInputInterface(/* parameters */);
	BrnWorld::CrashIO::OutputBuffer_PreScene::GetVehicleInputInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::CrashIO::OutputBuffer_PreScene::GetTrafficOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:130
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PostScene::SetCrashTrafficOutputInterface(const InputBuffer_PostScene::CrashTrafficOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:229
		CgsDev::StrStream lStrStream;

	}
}

extern TrafficOutputInterface & operator=(const const TrafficOutputInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::CrashIO::CleanupTrafficEvent,160>::operator=(const const EventQueue<BrnWorld::CrashIO::CleanupTrafficEvent,160> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::CrashIO::CleanupTrafficEvent,160>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>::Append(const const BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent,160>::operator=(const const EventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent,160> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent,160>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>::Append(const const BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeCrashModuleToTrafficModule_PostScene(InputBuffer_PostScene *  lpTrafficInputBuffer_PostScene, const OutputBuffer_PreScene *  lpCrashOutput_PreScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::CrashIO::OutputBuffer_PreScene::GetTrafficOutputInterface(/* parameters */);
	BrnTraffic::BrnTrafficIO::InputBuffer_PostScene::SetCrashTrafficOutputInterface(/* parameters */);
	operator=(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::CleanupTrafficEvent>::Append(/* parameters */);
	CgsModule::EventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent,160>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent,160>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::NetworkTrafficCrashingEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::GetRaceCarAIInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:300
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AIModuleIO::InputBuffer::SetRaceCarAIInterface(const RaceCarAIInterface *  lpInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:322
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeRaceCarModuleToAIModule_PreScene(InputBuffer *  lpAIInputBuffer, const OutputBuffer_PreScene *  lpRaceCarOutputBuffer_PreScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::GetRaceCarAIInterface(/* parameters */);
	BrnAI::AIModuleIO::InputBuffer::SetRaceCarAIInterface(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostScene::GetAIModuleRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:379
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AIModuleIO::InputBuffer::AppendAIModuleRequestInterface(const AIModuleRequestInterface *  lpRequestInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:344
		CgsDev::StrStream lStrStream;

	}
}

extern AIModuleRequestInterface & operator=(const const AIModuleRequestInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest,128>::operator=(const const EventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest,128> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest,128>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>::Append(const const BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::AIModuleIO::ResetOnTrackRequest>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeRaceCarModuleToAIModule_PostScene(InputBuffer *  lpAIInputBuffer, const OutputBuffer_PostScene *  lpRaceCarOutputBuffer_PostScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostScene::GetAIModuleRequestInterface(/* parameters */);
	BrnAI::AIModuleIO::InputBuffer::AppendAIModuleRequestInterface(/* parameters */);
	operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostScene::GetTrafficAIInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:255
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AIModuleIO::InputBuffer::SetTrafficAIInterface(const InputBuffer::TrafficAIInterface *  lpInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:333
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeTrafficModuleToAIModule_Update(InputBuffer *  lpAIInputBuffer, const OutputBuffer_PostScene *  lpTrafficOutputBuffer_PostScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnTraffic::BrnTrafficIO::OutputBuffer_PostScene::GetTrafficAIInterface(/* parameters */);
	BrnAI::AIModuleIO::InputBuffer::SetTrafficAIInterface(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::CrashIO::InputBuffer_PreScene::SetActiveRaceCarInterface(const InputBuffer_PreScene::ActiveRaceCarInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:85
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::operator=(const const RCEntityActiveRaceCarOutputInterface &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeEntityModulesToCrashModule_PreScene(InputBuffer_PreScene *  lpCrashInputBuffer_PreScene, const OutputBuffer_PreScene *  lpRaceCarOutputBuffer_PreScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::GetActiveRaceCarOutputInterface(/* parameters */);
	BrnWorld::CrashIO::InputBuffer_PreScene::SetActiveRaceCarInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetCrashTrafficInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:387
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::CrashIO::InputBuffer_PostPhysics::SetTrafficInputInterface(const TrafficInputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:169
		CgsDev::StrStream lStrStream;

	}
}

extern TrafficInputInterface & operator=(const const TrafficInputInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent,160>::operator=(const const EventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent,160> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent,160>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>::Append(const const BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent,160>::operator=(const const EventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent,160> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent,160>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>::Append(const const BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent,160>::operator=(const const EventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent,160> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent,160>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>::Append(const const BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeTrafficToCrashModule_PostPhysics(InputBuffer_PostPhysics *  lpCrashInputBuffer_PostPhysics, const OutputBuffer_PostPhysics *  lpTrafficOutputBuffer_PostPhysics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetCrashTrafficInputInterface(/* parameters */);
	BrnWorld::CrashIO::InputBuffer_PostPhysics::SetTrafficInputInterface(/* parameters */);
	operator=(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::AddCrashingTrafficEvent>::Append(/* parameters */);
	CgsModule::EventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent,160>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent,160>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveSlammedTrafficEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent,160>::operator=(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent,160>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::RemoveCrashedTrafficEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PreScene::SetActiveRaceCarOutputInterface(const InputBuffer_PreScene::ActiveRaceCarOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:154
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PostScene::SetActiveRaceCarOutputInterface(const InputBuffer_PreScene::ActiveRaceCarOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:232
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::SetActiveRaceCarOutputInterface(const InputBuffer_PreScene::ActiveRaceCarOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:359
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::GetGlobalRaceCarOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:291
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PreScene::SetGlobalRaceCarOutputInterface(const InputBuffer_PreScene::GlobalRaceCarOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:157
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::operator=(const const RCEntityGlobalRaceCarOutputInterface &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeRaceCarModuleToTrafficModule_PreScene(InputBuffer_PreScene *  lpTrafficInputBuffer_PreScene, InputBuffer_PostScene *  lpTrafficInputBuffer_PostScene, InputBuffer_PostPhysics *  lpTrafficInputBuffer_PostPhysics, const OutputBuffer_PreScene *  lpRaceCarOutputBuffer_PreScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::GetActiveRaceCarOutputInterface(/* parameters */);
	BrnTraffic::BrnTrafficIO::InputBuffer_PreScene::SetActiveRaceCarOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::operator=(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::GetActiveRaceCarOutputInterface(/* parameters */);
	BrnTraffic::BrnTrafficIO::InputBuffer_PostScene::SetActiveRaceCarOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::GetActiveRaceCarOutputInterface(/* parameters */);
	BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::SetActiveRaceCarOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::GetGlobalRaceCarOutputInterface(/* parameters */);
	BrnTraffic::BrnTrafficIO::InputBuffer_PreScene::SetGlobalRaceCarOutputInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::operator=(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostScene::GetRaceCarToTrafficInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:382
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PostScene::SetRaceCarToTrafficInterface(const InputBuffer_PostScene::RaceCarToTrafficInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:235
		CgsDev::StrStream lStrStream;

	}
}

extern RaceCarToTrafficInterface & operator=(const const RaceCarToTrafficInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent,34>::operator=(const const EventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent,34> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent,34>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent>::Append(const const BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent,34>::operator=(const const EventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent,34> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent,34>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent>::Append(const const BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeRaceCarModuleToTrafficModule_PostScene(InputBuffer_PostScene *  lpTrafficInputBuffer_PostScene, const OutputBuffer_PostScene *  lpRaceCarOutputBuffer_PostScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostScene::GetRaceCarToTrafficInterface(/* parameters */);
	BrnTraffic::BrnTrafficIO::InputBuffer_PostScene::SetRaceCarToTrafficInterface(/* parameters */);
	operator=(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::CreateRivalInTrafficSystemEvent>::Append(/* parameters */);
	CgsModule::EventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent,34>::operator=(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent,34>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::RemoveRivalFromTrafficSystemEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostScene::GetTrafficToRaceCarInterface_PostScene() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:258
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PrePhysics::SetTrafficToRaceCarInterface_PostScene(const InputBuffer_PrePhysics::TrafficToRaceCarInterface_PostScene *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:431
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeTrafficToRaceCar_PrePhysics(InputBuffer_PrePhysics *  lpRaceCarInputBuffer_PrePhysics, const OutputBuffer_PostScene *  lpTrafficOutputBuffer_PostScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnTraffic::BrnTrafficIO::OutputBuffer_PostScene::GetTrafficToRaceCarInterface_PostScene(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_PrePhysics::SetTrafficToRaceCarInterface_PostScene(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics::GetPlayerResetInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:479
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PrePhysics::SetPlayerResetInterface(const InputBuffer_PrePhysics::RCEntityPlayerResetInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:284
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeRaceCarModuleToTrafficModule_PrePhysics(InputBuffer_PrePhysics *  lpTrafficInputBuffer_PrePhysics, const OutputBuffer_PrePhysics *  lpRaceCarOutputBuffer_PrePhysics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics::GetPlayerResetInterface(/* parameters */);
	BrnTraffic::BrnTrafficIO::InputBuffer_PrePhysics::SetPlayerResetInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::WorldEntityIO::InputBuffer_PreScene::SetActiveRaceCarInterface(const RCEntityActiveRaceCarOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityModuleIO.h:97
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarRival(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeRaceCarModuleToWorldModule_PreScene(InputBuffer_PreScene *  lpWorldInputBuffer_PreScene, const OutputBuffer_PreScene *  lpRaceCarOutputBuffer_PreScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WorldBridgeEntityModulesToEntityModules.cpp:92
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// WorldBridgeEntityModulesToEntityModules.cpp:97
		const RCEntityActiveRaceCarOutputInterface * lpRaceCarEntityOutputInterface;

	}
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::GetActiveRaceCarOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::GetActiveRaceCarOutputInterface(/* parameters */);
	BrnWorld::WorldEntityIO::InputBuffer_PreScene::SetActiveRaceCarInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsPlayerCarActive(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarRival(/* parameters */);
	operator++(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::IsRaceCarActive(/* parameters */);
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

void BrnWorld::PropEntityIO::InputBuffer_PreScene::GetPropInstancesNeededForZoneQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:456
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::WorldEntityIO::OutputBuffer_PreScene::GetPropInstancesNeededForZoneQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityModuleIO.h:129
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent,30>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent>::Append(const const BaseEventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropInstancesNeededForZoneEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::InputBuffer_PreScene::GetPropGraphicsLoadedQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:450
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::WorldEntityIO::OutputBuffer_PreScene::GetPropGraphicsLoadedQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityModuleIO.h:126
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent,25>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent>::Append(const const BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsLoadedEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::InputBuffer_PreScene::GetPropGraphicsUnloadedQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:453
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::WorldEntityIO::OutputBuffer_PreScene::GetPropGraphicsUnloadedQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityModuleIO.h:132
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent,25>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent>::Append(const const BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropGraphicsUnloadedEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldEntityIO::OutputBuffer_PreScene::GetPlayerZoneNumber() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::InputBuffer_PreScene::SetPlayerZoneNumber(int32_t  liPlayerZoneNumber) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeWorldModuleToPropModule_PreScene(InputBuffer_PreScene *  lpPropInputBuffer_PreScene, const OutputBuffer_PreScene *  lpWorldOutputBuffer_PreScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::PropEntityIO::InputBuffer_PreScene::GetPropInstancesNeededForZoneQueue(/* parameters */);
	BrnWorld::WorldEntityIO::OutputBuffer_PreScene::GetPropInstancesNeededForZoneQueue(/* parameters */);
	Append<30>(/* parameters */);
	BrnWorld::PropEntityIO::InputBuffer_PreScene::GetPropGraphicsLoadedQueue(/* parameters */);
	BrnWorld::WorldEntityIO::OutputBuffer_PreScene::GetPropGraphicsLoadedQueue(/* parameters */);
	Append<25>(/* parameters */);
	BrnWorld::PropEntityIO::InputBuffer_PreScene::GetPropGraphicsUnloadedQueue(/* parameters */);
	BrnWorld::WorldEntityIO::OutputBuffer_PreScene::GetPropGraphicsUnloadedQueue(/* parameters */);
	Append<25>(/* parameters */);
	BrnWorld::PropEntityIO::InputBuffer_PreScene::SetPlayerZoneNumber(/* parameters */);
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

void BrnWorld::CrashIO::RaceCarOutputInterface::GetRaceCarCrashCompleteEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::InputBuffer_PostScene::AppendRaceCarCrashQueue(const RaceCarOutputInterface::RaceCarCrashCompleteEventQueue *  lpRaceCarCrashCompleteEventQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeCrashModuleToPropModule_PostScene(InputBuffer_PostScene *  lpPropInputBuffer_PostScene, const OutputBuffer_PreScene *  lpCrashOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WorldBridgeEntityModulesToEntityModules.cpp:163
		const RaceCarOutputInterface * lpRaceCarInterface;

		BrnWorld::CrashIO::OutputBuffer_PreScene::GetRaceCarOutputInterface(/* parameters */);
		BrnWorld::PropEntityIO::InputBuffer_PostScene::AppendRaceCarCrashQueue(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics::GetReplayRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:587
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics::GetStatusInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityModuleIO.h:248
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetTrafficDirectorOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:396
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetTrafficSoundOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:393
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetNetworkInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:390
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::PropEntityIO::OutputBuffer_PostPhysics::GetHitOverheadSignQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:727
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::PropEntityIO::OutputBuffer_PostPhysics::GetPropVFXLocatorQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:729
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::PropEntityIO::OutputBuffer_PostPhysics::GetPropBecamePhysicalEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:731
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetGuiEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:411
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetResourceRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:408
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsDev::StrStreamBase::operator<<(int32_t  liInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(CgsDev::PrintMode  lePrintMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsDev::StrStreamBase::operator<<(void *  lpPointer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsStrStream.h:627
		CgsDev::PrintMode leSavedPrintMode;

	}
}

void CgsDev::StrStreamBase::operator<<(uint32_t  liUInt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<8192,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<8192,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<1024,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<1024,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
	{
		// BrnWorldModuleIO.h:521
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
	}
}

void BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorldIO::UpdateOutputBuffer::GetGuiEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
	{
		// BrnWorldModuleIO.h:608
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
	}
}

void BrnWorldIO::UpdateOutputBuffer::GetGuiEventQueue(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsDev::PerfMonCpu::StopMonitor(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsDev::PerfMonCpu::StartMonitor(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorldIO::UpdateOutputBuffer::GetGameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
	{
		// BrnWorldModuleIO.h:576
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
	}
}

void BrnWorldIO::UpdateOutputBuffer::GetGameEventQueue(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::GetVehicleInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:282
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::GetPropManagerInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:302
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::PropEntityIO::OutputBuffer_PreScene::GetPropInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:635
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::SetRCEntityOutputInterface(const InputBuffer::RCEntityOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:285
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::SetSolverMaxIterations(const uint32_t *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:299
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeEntityModulesToPhysicsModule_PreScene(InputBuffer *  lpPhysicsModuleInputBuffer, const OutputBuffer_PreScene *  lpRaceCarOutputBuffer_PreScene, const OutputBuffer_PreScene *  lpPropOutputBuffer_PreScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WorldBridgeEntityModulesToPhysics.cpp:51
		uint32_t luSolverMaxIterations;

	}
	BrnPhysics::PhysicsModuleIO::InputBuffer::GetVehicleInputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::GetVehicleInputInterface(/* parameters */);
	BrnPhysics::PhysicsModuleIO::InputBuffer::GetPropManagerInputInterface(/* parameters */);
	BrnWorld::PropEntityIO::OutputBuffer_PreScene::GetPropInputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::GetActiveRaceCarOutputInterface(/* parameters */);
	BrnPhysics::PhysicsModuleIO::InputBuffer::SetRCEntityOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::operator=(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::GetActiveRaceCarOutputInterface(/* parameters */);
	BrnPhysics::PhysicsModuleIO::InputBuffer::SetSolverMaxIterations(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerModuleIO.h:463
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_Prepare::GetSceneInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:122
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeTrafficModuleToSceneModule_Prepare(InputBuffer_Update *  lpSceneInputBuffer, const OutputBuffer_Prepare *  lpTrafficOutputBuffer_Prepare) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface(/* parameters */);
	BrnTraffic::BrnTrafficIO::OutputBuffer_Prepare::GetSceneInputInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::PropEntityIO::OutputBuffer_Prepare::GetSceneInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:599
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgePropModuleToSceneModule_Prepare(InputBuffer_Update *  lpSceneInputBuffer, const OutputBuffer_Prepare *  lpPropOutputBuffer_Prepare) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface(/* parameters */);
	BrnWorld::PropEntityIO::OutputBuffer_Prepare::GetSceneInputInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::PropEntityIO::OutputBuffer_Prepare::GetPropInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:600
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgePropModuleToPhysicsModule_Prepare(InputBuffer *  lpPhysicsInputBuffer, const OutputBuffer_Prepare *  lpPropOutputBuffer_Prepare) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnPhysics::PhysicsModuleIO::InputBuffer::GetPropManagerInputInterface(/* parameters */);
	BrnWorld::PropEntityIO::OutputBuffer_Prepare::GetPropInputInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PreScene::GetSceneInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:182
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::GetSceneInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:285
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::WorldEntityIO::OutputBuffer_PreScene::GetSceneInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityModuleIO.h:120
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::PropEntityIO::OutputBuffer_PreScene::GetSceneInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:634
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::TriggerEntityModuleIO::OutputBuffer_PreScene::GetSceneInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerEntityModuleIO.h:90
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeEntityModulesToSceneModule_PreScene(InputBuffer_Update *  lpSceneModuleInputBuffer, const OutputBuffer_PreScene *  lpTriggerOutputBuffer_PreScene, const OutputBuffer_PreScene *  lpTrafficOutputBuffer_PreScene, const OutputBuffer_PreScene *  lpRaceCarOutputBuffer_PreScene, const OutputBuffer_PreScene *  lpPropOutputBuffer_PreScene, const OutputBuffer_PreScene *  lpWorldOutputBuffer_PreScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface(/* parameters */);
	BrnTraffic::BrnTrafficIO::OutputBuffer_PreScene::GetSceneInputInterface(/* parameters */);
	CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::GetSceneInputInterface(/* parameters */);
	CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface(/* parameters */);
	BrnWorld::WorldEntityIO::OutputBuffer_PreScene::GetSceneInputInterface(/* parameters */);
	CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface(/* parameters */);
	BrnWorld::PropEntityIO::OutputBuffer_PreScene::GetSceneInputInterface(/* parameters */);
	CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface(/* parameters */);
	BrnWorld::TriggerEntityModuleIO::OutputBuffer_PreScene::GetSceneInputInterface(/* parameters */);
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

void CgsModule::VariableEventQueue<16384,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<16384,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<16384,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<16384,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<16384,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
	GetFirstEvent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<16384,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<16384,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<16384,16>::Append<16384, 16>(const const VariableEventQueue<16384,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

	}
	GetSizeInBytes(/* parameters */);
	GetFirstWritePointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	GetLength(/* parameters */);
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
	{
		// CgsVariableEventQueue.h:759
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void CgsSceneManager::SceneManagerIO::InputBuffer_Query::GetCoarseQueryQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerModuleIO.h:522
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostScene::GetSceneCoarseQueryQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:373
		CgsDev::StrStream lStrStream;

	}
}

void CgsSceneManager::SceneManagerIO::InputBuffer_Query::GetFineLineTestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerModuleIO.h:523
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostScene::GetSceneFineLineTestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:376
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine,256>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeRaceCarModuleToSceneModule_PostScene(CgsSceneManager::SceneManagerIO::InputBuffer_Query *  lpSceneModuleInputBuffer, const OutputBuffer_PostScene *  lpRaceCarOutputBuffer_PostScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSceneManager::SceneManagerIO::InputBuffer_Query::GetCoarseQueryQueue(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostScene::GetSceneCoarseQueryQueue(/* parameters */);
	CgsSceneManager::SceneManagerIO::InputBuffer_Query::GetFineLineTestQueue(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostScene::GetSceneFineLineTestQueue(/* parameters */);
	Append<256>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AIModuleIO::OutputBuffer_PostScene::GetSceneCoarseQueryQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:307
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeAIModuleToSceneModule_SceneQueries(CgsSceneManager::SceneManagerIO::InputBuffer_Query *  lpSceneInputBuffer_Query, const OutputBuffer_PostScene *  lpAIOutputBuffer_PostScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSceneManager::SceneManagerIO::InputBuffer_Query::GetCoarseQueryQueue(/* parameters */);
	BrnAI::AIModuleIO::OutputBuffer_PostScene::GetSceneCoarseQueryQueue(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostScene::GetSceneCoarseQueryQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:252
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeTrafficModuleToSceneModule_PostScene(CgsSceneManager::SceneManagerIO::InputBuffer_Query *  lpSceneModuleInputBuffer, const OutputBuffer_PostScene *  lpTrafficOutputBuffer_PostScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSceneManager::SceneManagerIO::InputBuffer_Query::GetCoarseQueryQueue(/* parameters */);
	BrnTraffic::BrnTrafficIO::OutputBuffer_PostScene::GetSceneCoarseQueryQueue(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<2048,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<2048,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>::AddEvent(const const InEventLineTestFine &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[142] __PRETTY_FUNCTION__;

	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		// CgsBaseEventQueue.h:313
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
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::TriggerEntityModuleIO::OutputBuffer_PostScene::GetSceneFineQueryQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerEntityModuleIO.h:144
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<2048,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsSceneManager::SceneManagerIO::InputBuffer_Query::AddLineTestFineQuery(const const InEventLineTestFine &  lLineTestQuery) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeTriggerModuleToSceneModule_PostScene(CgsSceneManager::SceneManagerIO::InputBuffer_Query *  lpSceneModuleInputBuffer, const OutputBuffer_PostScene *  lpTriggerOutput_PostScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WorldBridgeEntityModulesToScene.cpp:198
		const OutputBuffer_PostScene::InSmFineQueryQueue * lFineQueryQueue;

		// WorldBridgeEntityModulesToScene.cpp:199
		int32_t lSize;

		// WorldBridgeEntityModulesToScene.cpp:200
		const CgsModule::Event * lEvent;

		// WorldBridgeEntityModulesToScene.cpp:201
		int32_t lType;

	}
	BrnWorld::TriggerEntityModuleIO::OutputBuffer_PostScene::GetSceneFineQueryQueue(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::GetFirstEvent(/* parameters */);
	{
		// WorldBridgeEntityModulesToScene.cpp:212
		const InEventLineTestFine * lCommand;

		CgsSceneManager::SceneManagerIO::InputBuffer_Query::AddLineTestFineQuery(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>::GetMaxLength(/* parameters */);
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

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetSceneInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:402
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics::GetSceneInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:566
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::PropEntityIO::OutputBuffer_PostPhysics::GetSceneInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:725
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics::GetSceneInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityModuleIO.h:251
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeEntityModulesToScene_PostPhysics(InputBuffer_Update *  lpSceneModuleInputBuffer, const OutputBuffer_PostPhysics *  lpTrafficOutputBuffer_PostPhysics, const OutputBuffer_PostPhysics *  lpRaceCarOutputBuffer_PostPhysics, const OutputBuffer_PostPhysics *  lpPropOutputBuffer_PostPhysics, const OutputBuffer_PostPhysics *  lpWorldOutputBuffer_PostPhysics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface(/* parameters */);
	BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetSceneInputInterface(/* parameters */);
	CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics::GetSceneInputInterface(/* parameters */);
	CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface(/* parameters */);
	BrnWorld::PropEntityIO::OutputBuffer_PostPhysics::GetSceneInputInterface(/* parameters */);
	CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface(/* parameters */);
	BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics::GetSceneInputInterface(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorldIO::UpdateInputBuffer::GetPlayerVehicleControls() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:281
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::CrashIO::InputBuffer_PreScene::SetPlayerPressingBoost(bool  lbBoosting) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::UpdateInputBuffer::GetCrashNetworkInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:287
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::CrashIO::InputBuffer_PreScene::SetNetworkInputInterface(const NetworkInputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:79
		CgsDev::StrStream lStrStream;

	}
}

extern NetworkInputInterface & operator=(const const NetworkInputInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent,24>::operator=(const const EventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent,24> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent,24>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::Append(const const BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::UpdateInputBuffer::GetGameActionQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:265
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::CrashIO::InputBuffer_PreScene::SetGameActionQueue(const InputBuffer_PreScene::GameActionQueue *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:88
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateInputBuffer::GetVehicleDriverInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:262
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::CrashIO::InputBuffer_PreScene::SetVehicleDriverInterface(const InputBuffer_PreScene::VehicleDriverInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:82
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateInputBuffer::GetTimerStatusInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:269
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::CrashIO::InputBuffer_PreScene::SetTimerStatusInterface(const TimerStatusInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:76
		CgsDev::StrStream lStrStream;

	}
}

void CgsSystem::TimerStatusInterface::operator=(const const TimerStatusInterface &  lOtherInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::operator=(const const TimerStatus &  lOtherTimer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::Time::operator=(const const Time &  lTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeInputToCrashModule(InputBuffer_PreScene *  lpCrashInput_PreScene, const UpdateInputBuffer *  lpWorldInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorldIO::UpdateInputBuffer::GetPlayerVehicleControls(/* parameters */);
	BrnWorld::CrashIO::InputBuffer_PreScene::SetPlayerPressingBoost(/* parameters */);
	BrnWorldIO::UpdateInputBuffer::GetCrashNetworkInterface(/* parameters */);
	BrnWorld::CrashIO::InputBuffer_PreScene::SetNetworkInputInterface(/* parameters */);
	operator=(/* parameters */);
	CgsModule::EventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent,24>::operator=(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::CrashIO::CrashingTrafficUpdateEvent>::Clear(/* parameters */);
	BrnWorldIO::UpdateInputBuffer::GetGameActionQueue(/* parameters */);
	BrnWorld::CrashIO::InputBuffer_PreScene::SetGameActionQueue(/* parameters */);
	BrnWorldIO::UpdateInputBuffer::GetVehicleDriverInputInterface(/* parameters */);
	BrnWorld::CrashIO::InputBuffer_PreScene::SetVehicleDriverInterface(/* parameters */);
	BrnWorldIO::UpdateInputBuffer::GetTimerStatusInterface(/* parameters */);
	BrnWorld::CrashIO::InputBuffer_PreScene::SetTimerStatusInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsSystem::TimerStatusInterface::operator=(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	CgsSystem::TimerStatus::operator=(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorldIO::UpdateInputBuffer::GetWorldEntityRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:308
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<4096,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<4096,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<4096,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<4096,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<4096,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
	GetFirstEvent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnResource::GameDataIO::RequestInterface<1024>::GetRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<4096,16>::Append<1024, 16>(const const VariableEventQueue<1024,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

		{
			// CgsVariableEventQueue.h:759
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<1024,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<1024,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
}

void CgsModule::VariableEventQueue<1024,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<1024,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<1024,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::PropEntityIO::OutputBuffer_Prepare::GetResourceRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:605
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgePropResourceRequestsToOutput_Prepare(UpdateOutputBuffer *  lpWorldOutput, const OutputBuffer_Prepare *  lpPropOutputBuffer_Prepare) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnWorld::PropEntityIO::OutputBuffer_Prepare::GetResourceRequestInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnResource::GameDataIO::RequestInterface<8192>::GetRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<4096,16>::Append<8192, 16>(const const VariableEventQueue<8192,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

		{
			// CgsVariableEventQueue.h:759
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<8192,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<8192,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
}

void CgsModule::VariableEventQueue<8192,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<8192,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<8192,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_Prepare::GetResourceRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:126
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeRaceCarResourceRequestsToOutput_Prepare(UpdateOutputBuffer *  lpWorldOutput, const OutputBuffer_Prepare *  lpRaceCarOutputBuffer_Prepare) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_Prepare::GetResourceRequestInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics::GetResourceRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:563
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeRaceCarResourceRequestsToOutput(UpdateOutputBuffer *  lpWorldOutput, const OutputBuffer_PostPhysics *  lpRaceCarOutputBuffer_PostPhysics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics::GetResourceRequestInterface(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<4096,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<4096,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<4096,16>::Append<4096, 16>(const const VariableEventQueue<4096,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

	}
	GetSizeInBytes(/* parameters */);
	GetFirstWritePointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	GetLength(/* parameters */);
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
	{
		// CgsVariableEventQueue.h:759
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics::GetResourceRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityModuleIO.h:245
		CgsDev::StrStream lStrStream;

	}
}

void BrnResource::GameDataIO::RequestInterface<4096>::GetRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeWorldResourceRequestsToOutput_PostPhysics(UpdateOutputBuffer *  lpWorldOutput, const OutputBuffer_PostPhysics *  lpWorldOutputBuffer_PostPhysics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnWorld::WorldEntityIO::OutputBuffer_PostPhysics::GetResourceRequestInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Append<4096>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_Prepare::GetResourceRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:125
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeTrafficResourceRequestsToOutput(UpdateOutputBuffer *  lpWorldOutput, const OutputBuffer_Prepare *  lpTrafficOutputBuffer_Prepare) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnTraffic::BrnTrafficIO::OutputBuffer_Prepare::GetResourceRequestInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Append<4096>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::WorldEntityIO::OutputBuffer_Prepare::GetResourceRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityModuleIO.h:72
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeWorldResourceRequestsToOutput_Prepare(UpdateOutputBuffer *  lpWorldOutput, const OutputBuffer_Prepare *  lpWorldOutputBuffer_Prepare) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnWorld::WorldEntityIO::OutputBuffer_Prepare::GetResourceRequestInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	Append<4096>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorldIO::UpdateInputBuffer::GetTriggerQueryInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:278
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::TriggerEntityModuleIO::InputBuffer_PostScene::GetQueryInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerEntityModuleIO.h:119
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<131072,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<131072,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<131072,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<131072,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<131072,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
	GetFirstEvent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::TriggerEntityModuleIO::TriggerManagementInputInterface::GetAddTriggerEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<131072,16>::Append<131072, 16>(const const VariableEventQueue<131072,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

		{
			// CgsVariableEventQueue.h:759
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<131072,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<131072,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::TriggerEntityModuleIO::TriggerManagementInputInterface::GetRemoveTriggerEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent,256>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::Append(const const BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::TriggerEntityModuleIO::TriggerManagementInputInterface::Append(const TriggerManagementInputInterface *  lpOther) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<131072,16>::Append<131072, 16>(/* parameters */);
	CgsModule::VariableEventQueue<131072,16>::GetSizeInBytes(/* parameters */);
	CgsModule::VariableEventQueue<131072,16>::GetFirstWritePointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::VariableEventQueue<131072,16>::GetLength(/* parameters */);
	Append<256>(/* parameters */);
	CgsModule::EventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent,256>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::TriggerEntityModuleIO::InRemoveTriggerEvent>::Append(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnWorld::TriggerEntityModuleIO::InputBuffer_PreScene::GetManagementInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerEntityModuleIO.h:65
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PreScene::GetTriggerManagementInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:188
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeTrafficToTrigger_PreScene(InputBuffer_PreScene *  lpTriggerInputBuffer_PreScene, const OutputBuffer_PreScene *  lpTrafficOutputBuffer_PreScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::TriggerEntityModuleIO::InputBuffer_PreScene::GetManagementInputInterface(/* parameters */);
	BrnTraffic::BrnTrafficIO::OutputBuffer_PreScene::GetTriggerManagementInputInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorldIO::UpdateInputBuffer::GetTriggerManagementInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:275
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::TriggerEntityModuleIO::InputBuffer_PreScene::GetManagementInputInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PrePhysics::SetInHardStopCamera(bool  lbInHardStopCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:437
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsContainers::BitArray<30u>::IsBitSet(const uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsBitArray.h:193
		CgsDev::StrStream lStrStream;

	}
}

void BrnDirector::Camera::CameraState::IsFlagSet(BrnDirector::Camera::CameraState::EFlag  leFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<30u>::IsBitSet(/* parameters */);
	{
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PrePhysics::SetControllerActive(bool  lbControllerActive) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:434
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PrePhysics::SetOnlineScoringInterface(const InputBuffer_PrePhysics::OnlineScoringInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:428
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnGameState::GameStateModuleIO::ScoringOutputInterface::operator=(const const ScoringOutputInterface &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PrePhysics::SetScoringInterface(const InputBuffer_PrePhysics::ScoringInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:425
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnGameState::GameStateModuleIO::ScoringOutputInterface::operator=(/* parameters */);
}

void BrnWorldIO::UpdateInputBuffer::GetScoringInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:297
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::operator=(const const EventQueue<BrnGameState::TakedownEvent,8> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::Append(const const BaseEventQueue<BrnGameState::TakedownEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::TakedownEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PrePhysics::SetTakedownEventQueue(const InputBuffer_PrePhysics::TakedownEventQueue *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::operator=(/* parameters */);
	{
		// BrnRaceCarEntityModuleIO.h:422
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorldIO::UpdateInputBuffer::GetTakedownEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		(None)unknown_arg
		{
			(None)unknown_arg
		}
	}
	{
		// BrnWorldModuleIO.h:272
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
	}
}

void BrnWorldIO::UpdateInputBuffer::GetTakedownEventQueue(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::SetCameraInput(const Camera *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:158
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::SetActivePaybackAggressor(EActiveRaceCarIndex  leActivePaybackAggressor) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:170
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorldIO::UpdateInputBuffer::GetActivePaybackAggressor() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:319
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::SetActivePaybackType(BrnNetwork::EPaybackType  leActivePaybackType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:167
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorldIO::UpdateInputBuffer::GetActivePaybackType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:316
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorldIO::UpdateInputBuffer::GetPlayerVehicleControls(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::SetTimerStatusInterface(const TimerStatusInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:155
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsSystem::TimerStatusInterface::operator=(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	CgsSystem::TimerStatus::operator=(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
}

void BrnWorldIO::UpdateInputBuffer::GetTrafficNetworkInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:284
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorldIO::UpdateInputBuffer::GetTimerStatusInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<4920,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<4920,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::Vehicle::VehicleDriverInputInterface::GetUpdateDriverQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<4920,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::SetReceivedNetworkDriverControls(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::CheckForNetworkDriverControlsReceived(InputBuffer_PreScene *  lpRaceCarInputBuffer_PreScene, const UpdateInputBuffer *  lpWorldInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WorldBridgeInputToEntityModules.cpp:185
		const VehicleDriverInputInterface::UpdateDriverEventQueue * lpDriverQueue;

		// WorldBridgeInputToEntityModules.cpp:186
		int32_t liId;

		// WorldBridgeInputToEntityModules.cpp:187
		int32_t liSize;

		// WorldBridgeInputToEntityModules.cpp:188
		const CgsModule::Event * lpEvent;

		BrnWorldIO::UpdateInputBuffer::GetVehicleDriverInputInterface(/* parameters */);
		BrnPhysics::Vehicle::VehicleDriverInputInterface::GetUpdateDriverQueue(/* parameters */);
		CgsModule::VariableEventQueue<4920,16>::GetFirstEvent(/* parameters */);
		{
			// WorldBridgeInputToEntityModules.cpp:200
			const BrnNetworkDriverControls * lpControls;

			BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::SetReceivedNetworkDriverControls(/* parameters */);
		}
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

void CgsModule::VariableEventQueue<4920,16>::GetFirstEvent(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<4920,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<4920,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
	GetFirstEvent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<4920,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[160] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:464
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AIModuleIO::OutputBuffer::GetVehicleDriverInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:409
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::GetVehicleDriverInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:279
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeAIModuleToPhysicsModule(InputBuffer *  lpInput, const OutputBuffer *  lpAIOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WorldBridgeAIToPhysics.cpp:44
		int32_t liId;

		// WorldBridgeAIToPhysics.cpp:44
		int32_t liSize;

		// WorldBridgeAIToPhysics.cpp:45
		const CgsModule::Event * lpEvent;

		// WorldBridgeAIToPhysics.cpp:46
		const VehicleDriverInputInterface::UpdateDriverEventQueue * lpInQueue;

		// WorldBridgeAIToPhysics.cpp:47
		VehicleDriverInputInterface::UpdateDriverEventQueue * lpOutQueue;

		BrnAI::AIModuleIO::OutputBuffer::GetVehicleDriverInterface(/* parameters */);
		BrnPhysics::PhysicsModuleIO::InputBuffer::GetVehicleDriverInterface(/* parameters */);
		BrnPhysics::Vehicle::VehicleDriverInputInterface::GetUpdateDriverQueue(/* parameters */);
		CgsModule::VariableEventQueue<4920,16>::GetLength(/* parameters */);
		BrnPhysics::Vehicle::VehicleDriverInputInterface::GetUpdateDriverQueue(/* parameters */);
		CgsModule::VariableEventQueue<4920,16>::GetFirstEvent(/* parameters */);
		{
			// WorldBridgeAIToPhysics.cpp:55
			const BrnPlayerDriverControls * lpControls;

		}
	}
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
	{
		// WorldBridgeAIToPhysics.cpp:49
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::VariableEventQueue<4920,16>::GetLength(/* parameters */);
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
	}
}

void CgsModule::VariableEventQueue<4920,16>::Append<4920, 16>(const const VariableEventQueue<4920,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

		{
			// CgsVariableEventQueue.h:759
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<4920,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<4920,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleDriverInputInterface::GetTargetAssistCount() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleDriverInputInterface::CopyTargetAssistParams(const VehicleDriverInputInterface *  lpInterfaceToCopy) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleDriverInputInterface::GetTargetAssistParams(Vector3 *  lpOutTargetAssistPositions, EntityId *  lpOutTargetAssistIDs, int32_t *  lpiOutTargetAssistCount) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleDriverInputInterface::Append(const VehicleDriverInputInterface *  lpInterfaceToAppend) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<4920,16>::Append<4920, 16>(/* parameters */);
	CgsModule::VariableEventQueue<4920,16>::GetSizeInBytes(/* parameters */);
	CgsModule::VariableEventQueue<4920,16>::GetFirstWritePointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::VariableEventQueue<4920,16>::GetLength(/* parameters */);
	CopyTargetAssistParams(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnWorldIO::UpdateInputBuffer::GetVehicleInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:259
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::SetTimerInterface(const TimerStatusInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:296
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::SetCameraInput(const Camera *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:273
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeInputToPhysicsModule(InputBuffer *  lpPhysicsModuleInputBuffer, const UpdateInputBuffer *  lpWorldInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnPhysics::PhysicsModuleIO::InputBuffer::GetVehicleDriverInterface(/* parameters */);
	BrnWorldIO::UpdateInputBuffer::GetVehicleDriverInputInterface(/* parameters */);
	BrnPhysics::PhysicsModuleIO::InputBuffer::GetVehicleInputInterface(/* parameters */);
	BrnWorldIO::UpdateInputBuffer::GetVehicleInputInterface(/* parameters */);
	BrnWorldIO::UpdateInputBuffer::GetTimerStatusInterface(/* parameters */);
	BrnPhysics::PhysicsModuleIO::InputBuffer::SetTimerInterface(/* parameters */);
	CgsSystem::TimerStatusInterface::operator=(/* parameters */);
	CgsSystem::TimerStatus::operator=(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	BrnPhysics::PhysicsModuleIO::InputBuffer::SetCameraInput(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::GetVehicleDriverInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::CrashIO::InputBuffer_PostPhysics::SetVehicleOutputInterface(const InputBuffer_PostPhysics::VehicleOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:172
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::CrashIO::InputBuffer_PostPhysics::SetVehicleManagerOutputInterface(const InputBuffer_PostPhysics::VehicleManagerOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:175
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgePhysicsModuleToCrashModule_PostPhysics(InputBuffer_PostPhysics *  lpCrashInput_PostPhysics, const OutputBuffer *  lpPhysicsModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetVehicleOutputInterface(/* parameters */);
	BrnWorld::CrashIO::InputBuffer_PostPhysics::SetVehicleOutputInterface(/* parameters */);
	operator=(/* parameters */);
	BrnPhysics::Vehicle::RaceCarState::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>::operator=(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetVehicleManagerOutputInterface(/* parameters */);
	BrnWorld::CrashIO::InputBuffer_PostPhysics::SetVehicleManagerOutputInterface(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::SetVehicleOutputInterface(const InputBuffer_PostPhysics::VehicleOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:347
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::SetVehicleManagerOutputInterface(const InputBuffer_PostPhysics::VehicleManagerOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:353
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::SetDeformationOutputInterfaceForEntityModules(const InputBuffer_PostPhysics::DeformationOutputInterfaceForEntityModules *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:362
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::SetContactSpyInterface(const InputBuffer_PostPhysics::ContactSpyInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:366
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgePhysicsModuleToTrafficModule_PostPhysics(InputBuffer_PostPhysics *  lpTrafficInputBuffer_PostPhysics, const OutputBuffer *  lpPhysicsModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetVehicleOutputInterface(/* parameters */);
	BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::SetVehicleOutputInterface(/* parameters */);
	operator=(/* parameters */);
	BrnPhysics::Vehicle::RaceCarState::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>::operator=(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetVehicleManagerOutputInterface(/* parameters */);
	BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::SetVehicleManagerOutputInterface(/* parameters */);
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetDeformationOutputInterfaceForEntityModules(/* parameters */);
	BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::SetDeformationOutputInterfaceForEntityModules(/* parameters */);
	BrnPhysics::Deformation::DeformationOutputInterfaceForEntityModules::operator=(/* parameters */);
	operator=(/* parameters */);
	Append<50>(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent,50>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::DetachedPartRenderEvent>::Append(/* parameters */);
	Append<20>(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent,20>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Deformation::GlassSmashOrCrackEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetContactSpyInterface(/* parameters */);
	BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::SetContactSpyInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnPhysics::ContactSpy::ContactSpyInterface::operator=(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::PhysicsModuleIO::OutputBuffer::GetPropManagerOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:357
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Props::PropOutputInterface::GetUpdatedProps() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::InputBuffer_PostPhysics::AppendUpdatedPropQueue(const PropOutputInterface::UpdatePropEventQueue *  lpQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:573
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<BrnPhysics::Props::UpdatePropEvent,200>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::Append(const const BaseEventQueue<BrnPhysics::Props::UpdatePropEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::UpdatePropEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::InputBuffer_PostPhysics::GetContactSpyInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:572
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgePhysicsModuleToPropModule_PostPhysics(InputBuffer_PostPhysics *  lpPropInputBuffer_PostPhysics, const OutputBuffer *  lpPhysicsModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetPropManagerOutputInterface(/* parameters */);
	BrnWorld::PropEntityIO::InputBuffer_PostPhysics::AppendUpdatedPropQueue(/* parameters */);
	BrnPhysics::Props::PropOutputInterface::GetUpdatedProps(/* parameters */);
	Append<200>(/* parameters */);
	BrnWorld::PropEntityIO::InputBuffer_PostPhysics::GetContactSpyInterface(/* parameters */);
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetContactSpyInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnPhysics::ContactSpy::ContactSpyInterface::operator=(/* parameters */);
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

void BrnTraffic::BrnTrafficIO::InputBuffer_PrePhysics::GetPropToTrafficInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:290
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::PropEntityIO::OutputBuffer_PrePhysics::GetPropToTrafficInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:698
		CgsDev::StrStream lStrStream;

	}
}

extern PropToTrafficInterface & operator=(const const PropToTrafficInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent,32>::operator=(const const EventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent,32> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent,32>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent>::Append(const const BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent,80>::operator=(const const EventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent,80> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent,80>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent>::Append(const const BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgePropModuleToTrafficModule_PrePhysics(InputBuffer_PrePhysics *  lpTrafficInputBuffer_PrePhysics, const OutputBuffer_PrePhysics *  lpPropOutbutBuffer_PrePhysics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnTraffic::BrnTrafficIO::InputBuffer_PrePhysics::GetPropToTrafficInterface(/* parameters */);
	BrnWorld::PropEntityIO::OutputBuffer_PrePhysics::GetPropToTrafficInterface(/* parameters */);
	operator=(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightKnockDownEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::EventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent,80>::operator=(/* parameters */);
	CgsModule::EventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent,80>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent>::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::TrafficLightRestoreEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<1536,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<1536,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<1536,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<1536,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<1536,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
	GetFirstEvent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<1536,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[160] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:464
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::IsRequestingRivalUpdate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:303
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateOutputBuffer::GetAudioCarLoadedDataQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:605
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::GetAudioCarLoadedDataQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:307
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent,16>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>::Append(const const BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::RaceCarEntityModuleIO::AudioCarDataLoadedEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeRaceCarEntityInfoToOutput_PreScene(UpdateOutputBuffer *  lpWorldOutput, const OutputBuffer_PreScene *  lpRaceCarOutputBuffer_PreScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::IsRequestingRivalUpdate(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::GetGameEventQueue(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::GetAudioCarLoadedDataQueue(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PreScene::GetAudioCarLoadedDataQueue(/* parameters */);
	Append<16>(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<1536,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<1536,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<1536,16>::Append<1536, 16>(const const VariableEventQueue<1536,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

	}
	GetSizeInBytes(/* parameters */);
	GetFirstWritePointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	GetLength(/* parameters */);
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
	{
		// CgsVariableEventQueue.h:759
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnWorldIO::UpdateOutputBuffer::GetVehicleOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:529
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleOutputInterface::Append(const VehicleOutputInterface *  lpOtherInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleOutputInterface::GetTrafficStateQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleOutputInterface::GetImpactEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleOutputInterface::GetGameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleOutputInterface::GetUsedCarsBitArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleOutputInterface::SetUsedCarsBitArray(const const BitArray<8u> &  lOther) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::UpdateOutputBuffer::GetContactSpyInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:551
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateOutputBuffer::GetVehicleManagerOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:532
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateOutputBuffer::SetDeformationOutputInterface(const UpdateOutputBuffer::DeformationOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:580
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateOutputBuffer::AppendGameEventQueue(const UpdateOutputBuffer::GameEventQueue *  lpQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:577
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Props::PropOutputInterface::GetUpdatePropNotifications() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::UpdateOutputBuffer::AppendPropUpdateNotificationQueue(const PropOutputInterface::PropUpdateNotificationQueue *  lpQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:618
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<BrnPhysics::Props::PropUpdateNotification,200>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::PropUpdateNotification>::Append(const const BaseEventQueue<BrnPhysics::Props::PropUpdateNotification> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::PropUpdateNotification>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::PropUpdateNotification>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Props::PropUpdateNotification>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgePhysicsToOutput(UpdateOutputBuffer *  lpWorldOutput, const OutputBuffer *  lpPhysicsModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorldIO::UpdateOutputBuffer::GetVehicleOutputInterface(/* parameters */);
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetVehicleOutputInterface(/* parameters */);
	BrnPhysics::Vehicle::VehicleOutputInterface::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::Append(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::PhysicalTrafficState,20>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::PhysicalTrafficState>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Append<16>(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::ImpactEvent,16>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::ImpactEvent>::Append(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::GetContactSpyInterface(/* parameters */);
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetContactSpyInterface(/* parameters */);
	BrnPhysics::ContactSpy::ContactSpyInterface::operator=(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::GetVehicleManagerOutputInterface(/* parameters */);
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetVehicleManagerOutputInterface(/* parameters */);
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetDeformationOutputInterface(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::SetDeformationOutputInterface(/* parameters */);
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetVehicleOutputInterface(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::AppendGameEventQueue(/* parameters */);
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetPropManagerOutputInterface(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::AppendPropUpdateNotificationQueue(/* parameters */);
	BrnPhysics::Props::PropOutputInterface::GetUpdatePropNotifications(/* parameters */);
	Append<200>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

void BrnWorld::WorldEntityIO::OutputBuffer_PreScene::GetGameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityModuleIO.h:123
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::WorldEntityIO::OutputBuffer_PreScene::GetSoundWorldLoadInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityModuleIO.h:135
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateOutputBuffer::AppendSoundWorldLoadInterface(const OutputBuffer_PreScene::SoundWorldLoadInterface *  lpQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:595
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<BrnSound::Module::Io::SoundWorldLoadEvent,25>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>::Append(const const BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnSound::Module::Io::SoundWorldLoadEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeWorldEntityInfoToOutput(UpdateOutputBuffer *  lpWorldOutput, const OutputBuffer_PreScene *  lpWorldOutputBuffer_PreScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorldIO::UpdateOutputBuffer::GetGameEventQueue(/* parameters */);
	BrnWorld::WorldEntityIO::OutputBuffer_PreScene::GetGameEventQueue(/* parameters */);
	BrnWorld::WorldEntityIO::OutputBuffer_PreScene::GetSoundWorldLoadInterface(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::AppendSoundWorldLoadInterface(/* parameters */);
	Append<25>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
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

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetGameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:399
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetTrafficTypeResponseQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:405
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateOutputBuffer::AppendTrafficTypeResponseQueue(const UpdateOutputBuffer::TrafficTypeResponseQueue *  lpQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:586
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse,32>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::Append(const const BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnTraffic::BrnTrafficIO::TrafficTypeResponse>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeTrafficEntityInfoToOutput_PostPhysics(UpdateOutputBuffer *  lpWorldOutput, const OutputBuffer_PostPhysics *  lpTrafficOutputBuffer_PostPhysics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::GetGameEventQueue(/* parameters */);
	BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetGameEventQueue(/* parameters */);
	BrnTraffic::BrnTrafficIO::OutputBuffer_PostPhysics::GetTrafficTypeResponseQueue(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::AppendTrafficTypeResponseQueue(/* parameters */);
	Append<32>(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics::GetActiveRaceCarOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:572
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateOutputBuffer::SetActiveRaceCarOutputInterface(const UpdateOutputBuffer::RCEntityActiveRaceCarOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:545
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics::GetReplayActiveRaceCarOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:578
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateOutputBuffer::SetReplayActiveRaceCarOutputInterface(const UpdateOutputBuffer::RCEntityActiveRaceCarOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:548
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics::GetGlobalRaceCarOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:575
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateOutputBuffer::SetRaceCarGlobalOutputInterface(const UpdateOutputBuffer::RCEntityGlobalOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:539
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics::GetGameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:584
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeRaceCarEntityInfoToOutput_PostPhysics(UpdateOutputBuffer *  lpWorldOutput, const OutputBuffer_PostPhysics *  lpRaceCarOutputBuffer_PostPhysics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics::GetActiveRaceCarOutputInterface(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::SetActiveRaceCarOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::operator=(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics::GetReplayActiveRaceCarOutputInterface(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::SetReplayActiveRaceCarOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface::operator=(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics::GetGlobalRaceCarOutputInterface(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::SetRaceCarGlobalOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface::operator=(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::GetGameEventQueue(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics::GetGameEventQueue(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics::GetGameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:482
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeRaceCarEntityInfoToOutput_PrePhysics(UpdateOutputBuffer *  lpOutputBuffer, const OutputBuffer_PrePhysics *  lpRaceCarOutputBuffer_PrePhysics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::GetGameEventQueue(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics::GetGameEventQueue(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::CrashIO::OutputBuffer_PostPhysics::GetNetworkOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:207
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateOutputBuffer::SetCrashNetworkOutputInterface(const UpdateOutputBuffer::CrashNetworkOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:573
		CgsDev::StrStream lStrStream;

	}
}

extern NetworkOutputInterface & operator=(const const NetworkOutputInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::CrashIO::OutputBuffer_PostPhysics::GetGameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashModuleIO.h:210
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeCrashModuleToOutput(UpdateOutputBuffer *  lpWorldOutput, const OutputBuffer_PostPhysics *  lpCrashOutput_PostPhysics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::CrashIO::OutputBuffer_PostPhysics::GetNetworkOutputInterface(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::SetCrashNetworkOutputInterface(/* parameters */);
	operator=(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::GetGameEventQueue(/* parameters */);
	BrnWorld::CrashIO::OutputBuffer_PostPhysics::GetGameEventQueue(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AIModuleIO::OutputBuffer::GetAIResourceRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:423
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateOutputBuffer::AppendResourceRequestInterface(const UpdateOutputBuffer::WorldResourceRequestInterface *  lpInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:522
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AIModuleIO::OutputBuffer::GetRouteMapResponseQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:437
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateOutputBuffer::AppendRouteResponseQueue(const OutputBuffer::RouteResponseQueue *  lpQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:561
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<BrnAI::RouteMapModuleIO::RouteResponse,16>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::Append(const const BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RouteResponse>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnAI::AIModuleIO::OutputBuffer::GetAICarOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:465
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateOutputBuffer::SetAICarOutputInterface(const UpdateOutputBuffer::AICarOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:555
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AIModuleIO::OutputBuffer::GetGameEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:232
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeAIModuleToOutput(UpdateOutputBuffer *  lpWorldOutput, const OutputBuffer *  lpAIOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnAI::AIModuleIO::OutputBuffer::GetAIResourceRequestInterface(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::AppendResourceRequestInterface(/* parameters */);
	Append<4096>(/* parameters */);
	BrnAI::AIModuleIO::OutputBuffer::GetRouteMapResponseQueue(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::AppendRouteResponseQueue(/* parameters */);
	Append<16>(/* parameters */);
	BrnAI::AIModuleIO::OutputBuffer::GetAICarOutputInterface(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::SetAICarOutputInterface(/* parameters */);
	BrnAI::AIModuleIO::OutputBuffer::GetGameEventQueue(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::AppendGameEventQueue(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<13440,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<13440,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern InEventVolumeTestDeepest & operator=(const const InEventVolumeTestDeepest &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>::AddEvent(const const InEventVolumeTestDeepest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[147] __PRETTY_FUNCTION__;

	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		// CgsBaseEventQueue.h:313
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
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
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

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>::AddEvent(const const InEventLineTestNearest &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[145] __PRETTY_FUNCTION__;

	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		// CgsBaseEventQueue.h:313
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
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::PhysicsModuleIO::OutputBuffer::GetVehicleOutputRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:348
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleOutputRequestInterface::GetLineTestRequests() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::VariableEventQueue<13440,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsSceneManager::SceneManagerIO::InputBuffer_Query::AddLineTestNearestQuery(const const InEventLineTestNearest &  lLineTestQuery) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::SceneManagerIO::InputBuffer_Query::AddVolumeTestDeepestQuery(const const InEventVolumeTestDeepest &  lVolumeTestQuery) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgePhysicsSceneQueriesToScene(CgsSceneManager::SceneManagerIO::InputBuffer_Query *  lpSceneInputBuffer_Query, const OutputBuffer *  lpPhysicsModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WorldBridgePhysicsToScene.cpp:43
		const VehicleOutputRequestInterface::OutFineQueryQueue * lpFineQueryQueue;

		// WorldBridgePhysicsToScene.cpp:44
		int32_t liFineQueryID;

		// WorldBridgePhysicsToScene.cpp:45
		int32_t liFineQueryQueueSize;

		// WorldBridgePhysicsToScene.cpp:46
		const CgsModule::Event * lpEvent;

	}
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetVehicleOutputRequestInterface(/* parameters */);
	BrnPhysics::Vehicle::VehicleOutputRequestInterface::GetLineTestRequests(/* parameters */);
	CgsModule::VariableEventQueue<13440,16>::GetFirstEvent(/* parameters */);
	{
		// WorldBridgePhysicsToScene.cpp:60
		const InEventLineTestNearest * lpLineTestNearest;

		CgsSceneManager::SceneManagerIO::InputBuffer_Query::AddLineTestNearestQuery(/* parameters */);
	}
	{
		// WorldBridgePhysicsToScene.cpp:69
		const InEventVolumeTestDeepest * lpVolumeTestDeepest;

		CgsSceneManager::SceneManagerIO::InputBuffer_Query::AddVolumeTestDeepestQuery(/* parameters */);
		operator=(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestNearest>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventVolumeTestDeepest>::GetMaxLength(/* parameters */);
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
	{
		// WorldBridgePhysicsToScene.cpp:49
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void WorldModule::BridgePhysicsSceneUpdateToScene(InputBuffer_Update *  lpSceneInputBuffer_Update, const OutputBuffer *  lpPhysicsModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSceneManager::SceneManagerIO::InputBuffer_Update::GetSceneUpdateInterface(/* parameters */);
	BrnPhysics::PhysicsModuleIO::OutputBuffer::GetSceneInputInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsSceneManager::SceneManagerIO::OutputBuffer::GetPotentialContactQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerModuleIO.h:625
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PrePhysics::SetPotentialContactQueue(const InputBuffer_PrePhysics::PotentialContactQueue *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:413
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048>::operator=(const const EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::PotentialContact>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeSceneContactsToRaceCarModule_PrePhysics(InputBuffer_PrePhysics *  lpRaceCarInputBuffer_PrePhysics, const OutputBuffer *  lpSceneModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSceneManager::SceneManagerIO::OutputBuffer::GetPotentialContactQueue(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_PrePhysics::SetPotentialContactQueue(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048>::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PrePhysics::SetPotentialContactQueue(const InputBuffer_PrePhysics::PotentialContactQueue *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:278
		CgsDev::StrStream lStrStream;

	}
}

void CgsSceneManager::SceneManagerIO::OutputBuffer::GetOverlapPairsQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerModuleIO.h:627
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PrePhysics::SetOverlapPairsQueue(const InputBuffer_PrePhysics::OverlapPairsQueue *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:281
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128>::operator=(const const EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>::Append(const const BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeSceneContactsToTrafficModule_PrePhysics(InputBuffer_PrePhysics *  lpTrafficInputBuffer_PrePhysics, const OutputBuffer *  lpSceneModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSceneManager::SceneManagerIO::OutputBuffer::GetPotentialContactQueue(/* parameters */);
	BrnTraffic::BrnTrafficIO::InputBuffer_PrePhysics::SetPotentialContactQueue(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::PotentialContact,2048>::operator=(/* parameters */);
	CgsSceneManager::SceneManagerIO::OutputBuffer::GetOverlapPairsQueue(/* parameters */);
	BrnTraffic::BrnTrafficIO::InputBuffer_PrePhysics::SetOverlapPairsQueue(/* parameters */);
	CgsModule::EventQueue<CgsSceneManager::SceneManagerIO::OutOverlapPair,128>::operator=(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::PropEntityIO::InputBuffer_PrePhysics::AppendPotentialContactQueue(const OutputBuffer::OutPotentialContactQueue *  lpQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:541
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeSceneContactsToPropModule_PrePhysics(InputBuffer_PrePhysics *  lpPropInputBuffer_PrePhysics, const OutputBuffer *  lpSceneModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsSceneManager::SceneManagerIO::OutputBuffer::GetPotentialContactQueue(/* parameters */);
	BrnWorld::PropEntityIO::InputBuffer_PrePhysics::AppendPotentialContactQueue(/* parameters */);
	Append<2048>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<32768,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<32768,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<32768,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<32768,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<32768,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
	GetFirstEvent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<32768,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<32768,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<32768,16>::Append<32768, 16>(const const VariableEventQueue<32768,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

	}
	GetSizeInBytes(/* parameters */);
	GetFirstWritePointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	GetLength(/* parameters */);
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
	{
		// CgsVariableEventQueue.h:759
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnWorld::TriggerEntityModuleIO::InputBuffer_PrePhysics::GetSceneResultQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerEntityModuleIO.h:173
		CgsDev::StrStream lStrStream;

	}
}

void CgsSceneManager::SceneManagerIO::OutputBuffer::GetResultsQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsSceneManagerModuleIO.h:624
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeSceneQueryResultsToTriggerModule_PrePhysics(InputBuffer_PrePhysics *  lpTriggerInput_PrePhysics, const OutputBuffer *  lpSceneModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::TriggerEntityModuleIO::InputBuffer_PrePhysics::GetSceneResultQueue(/* parameters */);
	CgsSceneManager::SceneManagerIO::OutputBuffer::GetResultsQueue(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PrePhysics::GetSceneResultQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:287
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::GetSceneResultQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:350
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeSceneQueryResultsToTrafficModule_PrePhysics(InputBuffer_PrePhysics *  lpTrafficInputBuffer_PrePhysics, InputBuffer_PostPhysics *  lpTrafficInputBuffer_PostPhysics, const OutputBuffer *  lpSceneModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnTraffic::BrnTrafficIO::InputBuffer_PrePhysics::GetSceneResultQueue(/* parameters */);
	CgsSceneManager::SceneManagerIO::OutputBuffer::GetResultsQueue(/* parameters */);
	BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::GetSceneResultQueue(/* parameters */);
	CgsSceneManager::SceneManagerIO::OutputBuffer::GetResultsQueue(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PrePhysics::GetSceneResultQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:416
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeSceneQueryResultsToRaceCarModule_PrePhysics(InputBuffer_PrePhysics *  lpRaceCarInputBuffer_PrePhysics, const OutputBuffer *  lpSceneModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_PrePhysics::GetSceneResultQueue(/* parameters */);
	CgsSceneManager::SceneManagerIO::OutputBuffer::GetResultsQueue(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AIModuleIO::InputBuffer::GetSceneResultQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:146
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeSceneQueryResultsToAIModule_Update(InputBuffer *  lpAIInputBuffer_Update, const OutputBuffer *  lpSceneModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnAI::AIModuleIO::InputBuffer::GetSceneResultQueue(/* parameters */);
	CgsSceneManager::SceneManagerIO::OutputBuffer::GetResultsQueue(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorldIO::UpdateOutputBuffer::AppendPropBecamePhysicalEventQueue(const OutputBuffer_PostPhysics::PropBecamePhysicalEventQueue *  lpQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:614
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent,20>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::UpdateOutputBuffer::SetPropVFXLocatorQueue(const OutputBuffer_PostPhysics::PropVFXLocatorQueue *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:600
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent,10>::operator=(const const EventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent,10> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent,10>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::OutputBuffer_PostPhysics::GetRecordHitPropQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:730
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::OutputBuffer_PostPhysics::ShouldRequestPropProgression() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::UpdateOutputBuffer::SetTrafficNetworkOutputInterface(const UpdateOutputBuffer::TrafficNetworkOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:564
		CgsDev::StrStream lStrStream;

	}
}

extern TrafficNetworkOutputInterface & operator=(const const TrafficNetworkOutputInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::UpdateOutputBuffer::SetTrafficSoundOutputInterface(const UpdateOutputBuffer::TrafficSoundOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:567
		CgsDev::StrStream lStrStream;

	}
}

extern TrafficSoundOutputInterface & operator=(const const TrafficSoundOutputInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern TrafficSoundEntity & operator=(const const TrafficSoundEntity &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::UpdateOutputBuffer::SetTrafficDirectorOutputInterface(const TrafficDirectorOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:570
		CgsDev::StrStream lStrStream;

	}
}

extern TrafficDirectorOutputInterface & operator=(const const TrafficDirectorOutputInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u> & operator=(const const Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u> &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern TrafficDirectorEntity & operator=(const const TrafficDirectorEntity &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics::GetDirectorVehicleInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:569
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateOutputBuffer::SetDirectorVehicleInputInterface(const UpdateOutputBuffer::DirectorVehicleInputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:536
		CgsDev::StrStream lStrStream;

	}
}

extern BrnDirectorVehicleInputInterface & operator=(const const BrnDirectorVehicleInputInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnDirector::NewVehicleEvent,50>::operator=(const const EventQueue<BrnDirector::NewVehicleEvent,50> &  lRhs) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnDirector::NewVehicleEvent>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnDirector::NewVehicleEvent,50>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::UpdateOutputBuffer::SetWorldEntityStatusInterface(const StatusInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:592
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateOutputBuffer::AppendReplayRequestInterface(const UpdateOutputBuffer::ReplayRequestInterface *  lpInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:598
		CgsDev::StrStream lStrStream;

	}
}

void BrnReplays::ReplayIO::RequestInterface::Append(const RequestInterface *  lpOtherInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnReplayRequestInterface.h:91
		int32_t liIndex;

		{
			// BrnReplayRequestInterface.h:95
			uintptr_t luAddr0;

			// BrnReplayRequestInterface.h:96
			uintptr_t luAddr1;

			{
				// BrnReplayRequestInterface.h:94
				CgsDev::StrStream lStrStream;

			}
		}
	}
}

void WorldModule::BridgeEntityModulesToOutput_PostPhysics(UpdateOutputBuffer *  lpWorldOutput, const OutputBuffer_PostPhysics *  lpTrafficOutputBuffer_PostPhysics, const OutputBuffer_PostPhysics *  lpRaceCarOutputBuffer_PostPhysics, const OutputBuffer_PostPhysics *  lpPropOutputBuffer_PostPhysics, const OutputBuffer_PostPhysics *  lpWorldOutputBuffer_PostPhysics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Append<4096>(/* parameters */);
	AppendGuiQueue<32768, 16>(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::AppendPropBecamePhysicalEventQueue(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::SetPropVFXLocatorQueue(/* parameters */);
	BrnWorld::PropEntityIO::OutputBuffer_PostPhysics::GetRecordHitPropQueue(/* parameters */);
	Append<BrnGameState::GameStateModuleIO::RecordPropHitEvent, 50>(/* parameters */);
	{
		CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::RecordPropHitEvent>::GetEvent(/* parameters */);
	}
	Append<BrnGameState::GameStateModuleIO::HitOverheadSignEvent, 100>(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::SetTrafficNetworkOutputInterface(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::SetTrafficSoundOutputInterface(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::SetTrafficDirectorOutputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PostPhysics::GetDirectorVehicleInputInterface(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::SetDirectorVehicleInputInterface(/* parameters */);
	operator=(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::SetWorldEntityStatusInterface(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::AppendReplayRequestInterface(/* parameters */);
	{
	}
	{
		// WorldBridgeEntityModulesToOutput.cpp:99
		RequestPropProgression lRequestPropProgressionEvent;

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
}

void CgsModule::VariableEventQueue<32768,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[161] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:464
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

extern void GuiTrafficCarInfoEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void VehicleScoreData() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PreScene::GetPotentialScorees() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsGui::GuiEvent<206>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeTrafficEntityInfoToOutput_PreScene(UpdateOutputBuffer *  lpWorldOutput, const OutputBuffer_PreScene *  lpTrafficOutputBuffer_PreScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WorldBridgeEntityModulesToOutput.cpp:417
		GuiTrafficCarInfoEvent lTrafficCarInfoEvent;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	GuiTrafficCarInfoEvent(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::GetGuiEventQueue(/* parameters */);
	AddGuiEvent<BrnGui::GuiTrafficCarInfoEvent>(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics::GetPlayingShowtime() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics::GetVehicleInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:310
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleInputInterface::GetRemoveTrafficEvents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void GuiRemovedTrafficEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,25u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGui::GuiRemovedTrafficEvent::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,25u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::GetEvent(int32_t  liIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::GetEntityIDEntityIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::VolumeInstanceId::GetEntityId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSceneManager::EntityId::GetEntityIndex() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<uint16_t,25u>::Append(const const uint16_t &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<207>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeTrafficCarEntityInfoToOutput_PrePhysics(UpdateOutputBuffer *  lpOutputBuffer, const OutputBuffer_PrePhysics *  lpTrafficOutput_PrePhysics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WorldBridgeEntityModulesToOutput.cpp:351
		const VehicleInputInterface::RemoveTrafficEventQueue * lpQueue;

		// WorldBridgeEntityModulesToOutput.cpp:353
		GuiRemovedTrafficEvent lGuiEvent;

		// WorldBridgeEntityModulesToOutput.cpp:356
		int32_t liIndex;

		// WorldBridgeEntityModulesToOutput.cpp:357
		uint16_t luTrafficEntityIndex;

	}
	CgsDev::PerfMonCpu::StartMonitor(/* parameters */);
	BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics::GetVehicleInputInterface(/* parameters */);
	BrnGui::GuiRemovedTrafficEvent::Construct(/* parameters */);
	{
		// WorldBridgeEntityModulesToOutput.cpp:362
		const const RemoveTrafficEvent & lTrafficEvent;

		CgsModule::BaseEventQueue<BrnPhysics::Vehicle::RemoveTrafficEvent>::GetEvent(/* parameters */);
		CgsContainers::Array<uint16_t,25u>::Append(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnWorldIO::UpdateOutputBuffer::GetGuiEventQueue(/* parameters */);
	AddGuiEvent<BrnGui::GuiRemovedTrafficEvent>(/* parameters */);
	CgsDev::PerfMonCpu::StopMonitor(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::TriggerEntityModuleIO::OutputBuffer_PrePhysics::GetOutputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTriggerEntityModuleIO.h:198
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateOutputBuffer::SetTriggerEntityOutputInterface(const UpdateOutputBuffer::TriggerEntityModuleOutputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:542
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeEntityModulesToOutput_PrePhysics(UpdateOutputBuffer *  lpOutputBuffer, const OutputBuffer_PrePhysics *  lpRaceCarOutput_PrePhysics, const OutputBuffer_PrePhysics *  lpTrafficOutput_PrePhysics, const OutputBuffer_PrePhysics *  lpTriggerOutput_PrePhysics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnWorld::TriggerEntityModuleIO::OutputBuffer_PrePhysics::GetOutputInterface(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::SetTriggerEntityOutputInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::PropEntityIO::OutputBuffer_PreScene::GetResourceRequestInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:640
		CgsDev::StrStream lStrStream;

	}
}

extern void GuiOverheadSignInfoEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::OverheadSignScore,32u>::Array() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

extern void OverheadSignScore() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::OverheadSignScore,32u>::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::OutputBuffer_PreScene::GetVisibleOverheadSignArray() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:643
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnGui::OverheadSignScore,32u>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::OverheadSignScore,32u>::operator[](uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsContainers::Array<BrnGui::OverheadSignScore,32u>::GetItem(uint32_t  luIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:531
		CgsDev::StrStream lStrStream;

	}
}

void CgsContainers::Array<BrnGui::OverheadSignScore,32u>::Append(const const OverheadSignScore &  lElement) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsArray.h:218
		CgsDev::StrStream lStrStream;

	}
}

void CgsGui::GuiEvent<208>::GetEventType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgePropToOutput_PreScene(UpdateOutputBuffer *  lpWorldOutput, const OutputBuffer_PreScene *  lpPropOutputBuffer_PreScene) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WorldBridgeEntityModulesToOutput.cpp:273
		GuiOverheadSignInfoEvent lGuiInfo;

	}
	BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnWorld::PropEntityIO::OutputBuffer_PreScene::GetResourceRequestInterface(/* parameters */);
	GuiOverheadSignInfoEvent(/* parameters */);
	BrnWorld::PropEntityIO::OutputBuffer_PreScene::GetVisibleOverheadSignArray(/* parameters */);
	CgsContainers::Array<BrnGui::OverheadSignScore,32u>::Construct(/* parameters */);
	AppendArray<32u>(/* parameters */);
	CgsContainers::Array<BrnGui::OverheadSignScore,32u>::GetLength(/* parameters */);
	CgsContainers::Array<BrnGui::OverheadSignScore,32u>::Append(/* parameters */);
	CgsContainers::Array<BrnGui::OverheadSignScore,32u>::operator[](/* parameters */);
	CgsContainers::Array<BrnGui::OverheadSignScore,32u>::GetLength(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnWorldIO::UpdateOutputBuffer::GetGuiEventQueue(/* parameters */);
	AddGuiEvent<BrnGui::GuiOverheadSignInfoEvent>(/* parameters */);
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

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::AddEvent(const const OutEventLineTestNearestResult &  lEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[152] __PRETTY_FUNCTION__;

	{
		(None)unknown_arg
	}
	{
		(None)unknown_arg
	}
	{
		// CgsBaseEventQueue.h:313
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
		{
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
		{
			(None)unknown_arg
			(None)unknown_arg
		}
	}
}

void CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::AddEvent(None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::GetVehicleInputInterface(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics::GetVehicleDriverInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:473
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics::GetVehicleInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:470
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::GetVehicleEffectsInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:282
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics::GetVehicleEffectsInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:476
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleEffectsInputInterface::Append(const VehicleEffectsInputInterface *  lpInterfaceToAppend) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreateAirRamEvent,20>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::EventQueue<BrnPhysics::Vehicle::CreateSpinEvent,10>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>::Append(const const BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics::GetVehicleEffectsInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:313
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::PropEntityIO::OutputBuffer_PrePhysics::GetPropInputInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropEntityModuleIO.h:694
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics::GetVehicleDriverInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:316
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::Vehicle::VehicleInputInterface::GetRaceCarsAddedForCollision() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleInputInterface::SetRaceCarsAddedForCollision(const VehicleInputInterface::RaceCarBitArray *  lpRaceCarsAddedForCollision) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeEntityModulesToPhysicsModule_PrePhysics(InputBuffer *  lpPhysicsModuleInputBuffer, const OutputBuffer_PrePhysics *  lpTrafficOutputBuffer_PrePhysics, const OutputBuffer_PrePhysics *  lpRaceCarOutputBuffer_PrePhysics, const OutputBuffer_PrePhysics *  lpPropOutputBuffer_PrePhysics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WorldBridgeEntityModulesToPhysics.cpp:83
		int32_t liId;

		// WorldBridgeEntityModulesToPhysics.cpp:83
		int32_t liSize;

		// WorldBridgeEntityModulesToPhysics.cpp:84
		const CgsModule::Event * lpEvent;

		// WorldBridgeEntityModulesToPhysics.cpp:85
		const VehicleDriverInputInterface::UpdateDriverEventQueue * lpInQueue;

		// WorldBridgeEntityModulesToPhysics.cpp:86
		VehicleDriverInputInterface::UpdateDriverEventQueue * lpOutQueue;

		BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics::GetVehicleDriverInterface(/* parameters */);
		{
			// WorldBridgeEntityModulesToPhysics.cpp:92
			const BrnPlayerDriverControls * lpControls;

		}
		BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics::GetVehicleDriverInterface(/* parameters */);
		BrnPhysics::Vehicle::VehicleDriverInputInterface::CopyTargetAssistParams(/* parameters */);
	}
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics::GetVehicleInputInterface(/* parameters */);
	BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics::GetVehicleInputInterface(/* parameters */);
	BrnPhysics::PhysicsModuleIO::InputBuffer::GetVehicleEffectsInputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics::GetVehicleEffectsInterface(/* parameters */);
	BrnPhysics::Vehicle::VehicleEffectsInputInterface::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Append<10>(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreateSpinEvent,10>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>::Append(/* parameters */);
	BrnPhysics::PhysicsModuleIO::InputBuffer::GetVehicleEffectsInputInterface(/* parameters */);
	BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics::GetVehicleEffectsInterface(/* parameters */);
	BrnPhysics::Vehicle::VehicleEffectsInputInterface::Append(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateAirRamEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	Append<10>(/* parameters */);
	CgsModule::EventQueue<BrnPhysics::Vehicle::CreateSpinEvent,10>::GetBaseEventQueue(/* parameters */);
	CgsModule::BaseEventQueue<BrnPhysics::Vehicle::CreateSpinEvent>::GetQueueStartPointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	BrnPhysics::PhysicsModuleIO::InputBuffer::GetPropManagerInputInterface(/* parameters */);
	BrnWorld::PropEntityIO::OutputBuffer_PrePhysics::GetPropInputInterface(/* parameters */);
	BrnTraffic::BrnTrafficIO::OutputBuffer_PrePhysics::GetVehicleDriverInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::OutputBuffer_PrePhysics::GetVehicleInputInterface(/* parameters */);
	BrnPhysics::Vehicle::VehicleInputInterface::GetRaceCarsAddedForCollision(/* parameters */);
	BrnPhysics::Vehicle::VehicleInputInterface::SetRaceCarsAddedForCollision(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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
}

void CgsSceneManager::SceneQueryId::SceneQueryId() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleInputInterface::AddLineTestResult(OutEventLineTestNearestResult  lResult) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnPhysics::Vehicle::VehicleInputInterface::AppendTriangleCacheInterface(const VehicleInputInterface::InTriangleCacheInterface *  lpTriangleCacheInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeSceneQueryResultsToPhysics(InputBuffer *  lpPhysicsModuleInputBuffer, const OutputBuffer *  lpSceneModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WorldBridgeSceneToPhysics.cpp:43
		const OutputBuffer::OutSmSceneQueryResultsQueue * lpQueryResults;

		// WorldBridgeSceneToPhysics.cpp:46
		int32_t liId;

		// WorldBridgeSceneToPhysics.cpp:47
		int32_t liSize;

		// WorldBridgeSceneToPhysics.cpp:48
		VehicleInputInterface * lpVehicleInterface;

		// WorldBridgeSceneToPhysics.cpp:49
		SceneQueryId lQueryId;

		// WorldBridgeSceneToPhysics.cpp:50
		const CgsModule::Event * lpEvent;

	}
	CgsSceneManager::SceneManagerIO::OutputBuffer::GetResultsQueue(/* parameters */);
	BrnPhysics::PhysicsModuleIO::InputBuffer::GetVehicleInputInterface(/* parameters */);
	CgsModule::VariableEventQueue<32768,16>::GetFirstEvent(/* parameters */);
	{
	}
	CgsSceneManager::SceneManagerIO::OutputBuffer::GetTriangleCacheInterface(/* parameters */);
	BrnPhysics::Vehicle::VehicleInputInterface::AppendTriangleCacheInterface(/* parameters */);
	{
		// WorldBridgeSceneToPhysics.cpp:74
		const OutEventLineTestNearestResult * lpCommand;

		BrnPhysics::Vehicle::VehicleInputInterface::AddLineTestResult(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::GetMaxLength(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::GetPotentialContactQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:290
		CgsDev::StrStream lStrStream;

	}
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::GetOverlapPairsQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:293
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeScenePotentialContactsToPhysics(InputBuffer *  lpPhysicsModuleInputBuffer, const OutputBuffer *  lpSceneModuleOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnPhysics::PhysicsModuleIO::InputBuffer::GetPotentialContactQueue(/* parameters */);
	CgsSceneManager::SceneManagerIO::OutputBuffer::GetPotentialContactQueue(/* parameters */);
	Append<2048>(/* parameters */);
	BrnPhysics::PhysicsModuleIO::InputBuffer::GetOverlapPairsQueue(/* parameters */);
	CgsSceneManager::SceneManagerIO::OutputBuffer::GetOverlapPairsQueue(/* parameters */);
	Append<128>(/* parameters */);
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<13312,16>::GetEventPaddingSize(int32_t  liTotalEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:729
		int32_t liRem;

		// CgsVariableEventQueue.h:730
		int32_t liPaddingBytes;

		{
			// CgsVariableEventQueue.h:728
			CgsDev::StrStream lStrStream;

		}
	}
}

void CgsModule::VariableEventQueue<13312,16>::GetNextEvent(const CgsModule::Event *  lpPreviousEvent, const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:409
		int32_t liPrevEntryPosition;

		// CgsVariableEventQueue.h:413
		CBufferEntry * lpPrevBufferEntry;

		// CgsVariableEventQueue.h:416
		int32_t liNextEntryPosition;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:426
		CBufferEntry * lpNextBufferEntry;

	}
	{
		// CgsVariableEventQueue.h:410
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:407
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:419
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:420
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<13312,16>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:348
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<13312,16>::GetFirstEvent(const CgsModule::Event **  lppOutEvent, int32_t *  lpOutSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:367
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:372
		CBufferEntry * lpBufferEntry;

	}
}

void CgsModule::VariableEventQueue<13312,16>::OutputQueueContents() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:897
		int32_t liEntry;

		// CgsVariableEventQueue.h:898
		int32_t liId;

		// CgsVariableEventQueue.h:899
		int32_t liIndex;

		// CgsVariableEventQueue.h:900
		int32_t liSize;

		// CgsVariableEventQueue.h:901
		const CgsModule::Event * lpTestEvent;

		// CgsVariableEventQueue.h:902
		int32_t[100] laiEventType;

		// CgsVariableEventQueue.h:903
		int32_t[100] laiEventTypeCount;

		// CgsVariableEventQueue.h:904
		int32_t[100] laiEventTypeSize;

		// CgsVariableEventQueue.h:905
		int32_t liNumEventTypes;

	}
	GetFirstEvent(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
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
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	GetLength(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<13312,16>::GetSizeInBytes() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:983
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<13312,16>::GetFirstWritePointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:1000
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<13312,16>::Append<13312, 16>(const const VariableEventQueue<13312,16> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:757
		int32_t liSourceSizeInBytes;

	}
	GetSizeInBytes(/* parameters */);
	GetFirstWritePointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	GetLength(/* parameters */);
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
	{
		// CgsVariableEventQueue.h:759
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::GetGameActionQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:164
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::GetAudioCarLoadedDataQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:176
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateInputBuffer::GetAudioCarDataLoadedQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:313
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeActionsToRaceCarModule(InputBuffer_PreScene *  lpRaceCarInputBuffer_PreScene, const UpdateInputBuffer *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WorldBridgeToEntityModules.cpp:84
		const InputBuffer::GameActionQueue * lpInQueue;

		// WorldBridgeToEntityModules.cpp:85
		InputBuffer::GameActionQueue * lpOutQueue;

		BrnWorldIO::UpdateInputBuffer::GetGameActionQueue(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::GetGameActionQueue(/* parameters */);
		BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::GetAudioCarLoadedDataQueue(/* parameters */);
		BrnWorldIO::UpdateInputBuffer::GetAudioCarDataLoadedQueue(/* parameters */);
		Append<16>(/* parameters */);
	}
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnAI::AIModuleIO::InputBuffer::GetGameActionQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:149
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AIModuleIO::InputBuffer::SetTimerInterface(const TimerStatusInterface *  lpTimerInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:355
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateInputBuffer::GetRaceCarRaceDistanceInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:294
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AIModuleIO::InputBuffer::SetRaceCarRaceDistanceInterface(const InputBuffer::RaceCarRaceDistanceInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:143
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AIModuleIO::InputBuffer::SetTakedownEventQueue(const InputBuffer::TakedownEventQueue *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:152
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AIModuleIO::InputBuffer::SetPlayerVehicleControls(const PlayerVehicleControls *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:155
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateInputBuffer::GetRaceRouteRequestQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:255
		CgsDev::StrStream lStrStream;

	}
}

void BrnAI::AIModuleIO::InputBuffer::AppendRaceRouteRequestQueue(const InputBuffer::RaceRouteRequestQueue *  lpQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnAIModuleIO.h:140
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::EventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest,1>::GetBaseEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::Append(const const BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest> &  lSourceQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::GetLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::GetMaxLength() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsModule::BaseEventQueue<BrnAI::RouteMapModuleIO::RaceRouteRequest>::GetQueueStartPointer() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeInputToAIModule(InputBuffer *  lpAIInputBuffer, const UpdateInputBuffer *  lpWorldInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WorldBridgeInputToAI.cpp:43
		const InputBuffer::GameActionQueue * lpInQueue;

		// WorldBridgeInputToAI.cpp:44
		InputBuffer::GameActionQueue * lpOutQueue;

		BrnWorldIO::UpdateInputBuffer::GetGameActionQueue(/* parameters */);
		BrnAI::AIModuleIO::InputBuffer::GetGameActionQueue(/* parameters */);
		BrnWorldIO::UpdateInputBuffer::GetTimerStatusInterface(/* parameters */);
		BrnAI::AIModuleIO::InputBuffer::SetTimerInterface(/* parameters */);
		CgsSystem::TimerStatusInterface::operator=(/* parameters */);
		CgsSystem::TimerStatus::operator=(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
		CgsSystem::Time::operator=(/* parameters */);
		BrnWorldIO::UpdateInputBuffer::GetRaceCarRaceDistanceInterface(/* parameters */);
		BrnAI::AIModuleIO::InputBuffer::SetRaceCarRaceDistanceInterface(/* parameters */);
		BrnWorldIO::UpdateInputBuffer::GetTakedownEventQueue(/* parameters */);
		BrnAI::AIModuleIO::InputBuffer::SetTakedownEventQueue(/* parameters */);
		CgsModule::EventQueue<BrnGameState::TakedownEvent,8>::operator=(/* parameters */);
		BrnWorldIO::UpdateInputBuffer::GetPlayerVehicleControls(/* parameters */);
		BrnAI::AIModuleIO::InputBuffer::SetPlayerVehicleControls(/* parameters */);
		BrnWorldIO::UpdateInputBuffer::GetRaceRouteRequestQueue(/* parameters */);
		BrnAI::AIModuleIO::InputBuffer::AppendRaceRouteRequestQueue(/* parameters */);
		Append<1>(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void CgsModule::VariableEventQueue<13312,16>::AddEvent(const CgsModule::Event *  lpEvent, const int32_t  liEventId, const int32_t  liEventSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	const char[161] __PRETTY_FUNCTION__;

	{
		// CgsVariableEventQueue.h:455
		int32_t liTotalEventSize;

		// CgsVariableEventQueue.h:456
		int32_t liPaddingBytes;

		// CgsVariableEventQueue.h:474
		CBufferEntry * lpBufferEntry;

	}
	GetEventPaddingSize(/* parameters */);
	{
		// CgsVariableEventQueue.h:464
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsVariableEventQueue.h:454
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnWorld::WorldEntityIO::InputBuffer_PostPhysics::GetGameActionQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityModuleIO.h:224
		CgsDev::StrStream lStrStream;

	}
}

void CgsModule::VariableEventQueue<13312,16>::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsVariableEventQueue.h:298
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsVariableEventQueue.h:304
		int32_t liAlignRem;

		// CgsVariableEventQueue.h:305
		int32_t liFirstEventOffset;

		{
			// CgsVariableEventQueue.h:310
			CgsDev::StrStream lStrStream;

		}
	}
}

void WorldModule::BridgeActionsToWorldModule(InputBuffer_PostPhysics *  lpWorldInputBuffer_PostPhysics, const UpdateInputBuffer *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WorldBridgeToEntityModules.cpp:176
		const InputBuffer::GameActionQueue * lpInQueue;

		// WorldBridgeToEntityModules.cpp:177
		InputBuffer::GameActionQueue * lpOutQueue;

		// WorldBridgeToEntityModules.cpp:185
		const CgsModule::Event * lpAction;

		// WorldBridgeToEntityModules.cpp:186
		int32_t liActionSize;

		// WorldBridgeToEntityModules.cpp:187
		int32_t liActionType;

		BrnWorldIO::UpdateInputBuffer::GetGameActionQueue(/* parameters */);
		BrnWorld::WorldEntityIO::InputBuffer_PostPhysics::GetGameActionQueue(/* parameters */);
		CgsModule::VariableEventQueue<13312,16>::Clear(/* parameters */);
		CgsModule::VariableEventQueue<13312,16>::GetFirstEvent(/* parameters */);
		{
		}
	}
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::GetGameActionQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:356
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeActionsToTrafficModule(InputBuffer_PostPhysics *  lpTrafficInputBuffer_PostPhysics, const UpdateInputBuffer *  lpInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WorldBridgeToEntityModules.cpp:109
		const InputBuffer::GameActionQueue * lpInQueue;

		// WorldBridgeToEntityModules.cpp:110
		InputBuffer::GameActionQueue * lpOutQueue;

		// WorldBridgeToEntityModules.cpp:115
		const CgsModule::Event * lpAction;

		// WorldBridgeToEntityModules.cpp:116
		int32_t liActionSize;

		// WorldBridgeToEntityModules.cpp:117
		int32_t liActionType;

		BrnWorldIO::UpdateInputBuffer::GetGameActionQueue(/* parameters */);
		BrnTraffic::BrnTrafficIO::InputBuffer_PostPhysics::GetGameActionQueue(/* parameters */);
		CgsModule::VariableEventQueue<13312,16>::GetFirstEvent(/* parameters */);
	}
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

void CgsModule::VariableEventQueue<13312,16>::GetFirstEvent(None, None, None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnPhysics::PhysicsModuleIO::InputBuffer::GetGameActionQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPhysicsModuleIO.h:305
		CgsDev::StrStream lStrStream;

	}
}

void WorldModule::BridgeActionsToPhysicsModule(InputBuffer *  lpPhysicsModuleInputBuffer, const UpdateInputBuffer *  lpWorldModuleInputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WorldBridgeToEntityModules.cpp:224
		const InputBuffer::GameActionQueue * lpInQueue;

		// WorldBridgeToEntityModules.cpp:225
		InputBuffer::GameActionQueue * lpOutQueue;

		// WorldBridgeToEntityModules.cpp:230
		const CgsModule::Event * lpAction;

		// WorldBridgeToEntityModules.cpp:231
		int32_t liActionSize;

		// WorldBridgeToEntityModules.cpp:232
		int32_t liActionType;

		BrnWorldIO::UpdateInputBuffer::GetGameActionQueue(/* parameters */);
		BrnPhysics::PhysicsModuleIO::InputBuffer::GetGameActionQueue(/* parameters */);
		CgsModule::VariableEventQueue<13312,16>::GetFirstEvent(/* parameters */);
	}
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

void BrnWorldIO::UpdateInputBuffer::GetGameActionQueue(None) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PreScene::SetTimerStatusInterface(const TimerStatusInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:151
		CgsDev::StrStream lStrStream;

	}
}

void BrnTraffic::BrnTrafficIO::InputBuffer_PreScene::SetTrafficNetworkInputInterface(const TrafficNetworkInputInterface *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrafficEntityModuleIO.h:160
		CgsDev::StrStream lStrStream;

	}
}

extern TrafficNetworkInputInterface & operator=(const const TrafficNetworkInputInterface &) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::SetPlayerVehicleControls(const PlayerVehicleControls *  lpObject) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarEntityModuleIO.h:161
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateInputBuffer::IsRaceCarColourIndexValid(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::UpdateInputBuffer::GetRaceCarColourIndex(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::SetRaceCarColourIndex(EActiveRaceCarIndex  leActiveRaceCarIndex, uint16_t  lu16CarColourIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::UpdateInputBuffer::IsRaceCarPaintFinishValid(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::UpdateInputBuffer::GetRaceCarPaintFinishIndex(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::SetRaceCarPaintFinishIndex(EActiveRaceCarIndex  leActiveRaceCarIndex, uint16_t  lu16CarPaintFinishIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::UpdateInputBuffer::GetLostContact(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::SetLostContact(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::UpdateInputBuffer::GetRegainedContact(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::SetRegainedContact(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::UpdateInputBuffer::IsCarSelectStatusValid(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::UpdateInputBuffer::GetCarSelectStatus(EActiveRaceCarIndex  leActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::SetCarSelectStatus(EActiveRaceCarIndex  leActiveRaceCarIndex, bool  lbCarSelectStatus) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorldIO::UpdateInputBuffer::GetOnlineScoringInterface() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:300
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorldIO::UpdateInputBuffer::GetControllerActive() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldModuleIO.h:303
		CgsDev::StrStream lStrStream;

	}
}

void BrnDirector::Camera::Camera::GetState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::TriggerEntityModuleIO::TriggerQueryInputInterface::Append(const TriggerQueryInputInterface *  lpOther) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::TriggerEntityModuleIO::TriggerQueryInputInterface::GetTriggerQueryEventQueue() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::WorldEntityIO::InputBuffer_PreScene::AppendRequestInterface(const RequestInterface *  lpInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityModuleIO.h:99
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::WorldEntityIO::RequestInterface::Append(const RequestInterface *  lpOtherInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnWorldEntityRequestInterface.h:114
		CgsDev::StrStream lStrStream;

	}
}

void BrnWorld::PropEntityIO::InputBuffer_PreScene::ReloadingProfile() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PropSmashReportAction::GetHitProps() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::InputBuffer_PreScene::SetHitPropsBitArray(const const Profile::HitPropsBitArray &  lHitProps) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::InputBuffer_PreScene::SendingPropProgression() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::InputBuffer_PreScene::SetIsOnline(bool  lbOnline) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::InputBuffer_PreScene::SetEasySmashProps(bool  lbEasySmash) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::InputBuffer_PreScene::SetPropProgressionEnabled(bool  lbEnablePropProgression) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PrepareForModeAction::IsFirstPrepareForMode() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameStateModuleIO::PrepareForModeAction::GetGameModeParams() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetGameModeType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnGameState::GameModeParams::GetFlag(uint64_t  lFlag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::InputBuffer_PreScene::ResetProps() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatusInterface::GetSimTimerStatus() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void CgsSystem::TimerStatus::GetCurrentTimeStep() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void BrnWorld::PropEntityIO::InputBuffer_PreScene::SetCurrentTimestep(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

void WorldModule::BridgeInputToEntityModules(InputBuffer_PreScene *  lpTriggerInput_PreScene, InputBuffer_PostScene *  lpTriggerInput_PostScene, InputBuffer_PreScene *  lpTrafficInputBuffer_PreScene, InputBuffer_PreScene *  lpRaceCarInputBuffer_PreScene, InputBuffer_PrePhysics *  lpRaceCarInputBuffer_PrePhysics, InputBuffer_PreScene *  lpWorldEntityInputBuffer_PreScene, InputBuffer_PreScene *  lpPropEntityInputBuffer_PreScene, const UpdateInputBuffer *  lpWorldInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// WorldBridgeInputToEntityModules.cpp:48
		EActiveRaceCarIndex leActiveRaceCarIndex;

		// WorldBridgeInputToEntityModules.cpp:108
		const CgsModule::Event * lpGameAction;

		// WorldBridgeInputToEntityModules.cpp:109
		int32_t liEventSize;

		// WorldBridgeInputToEntityModules.cpp:110
		int32_t liType;

	}
	BrnTraffic::BrnTrafficIO::InputBuffer_PreScene::SetTimerStatusInterface(/* parameters */);
	CgsSystem::Time::operator=(/* parameters */);
	BrnTraffic::BrnTrafficIO::InputBuffer_PreScene::SetTrafficNetworkInputInterface(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::SetPlayerVehicleControls(/* parameters */);
	BrnWorldIO::UpdateInputBuffer::GetRaceCarColourIndex(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::SetRaceCarColourIndex(/* parameters */);
	BrnWorldIO::UpdateInputBuffer::IsRaceCarPaintFinishValid(/* parameters */);
	BrnWorldIO::UpdateInputBuffer::GetRaceCarPaintFinishIndex(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::SetRaceCarPaintFinishIndex(/* parameters */);
	BrnWorldIO::UpdateInputBuffer::GetLostContact(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::SetLostContact(/* parameters */);
	BrnWorldIO::UpdateInputBuffer::GetRegainedContact(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::SetRegainedContact(/* parameters */);
	BrnWorldIO::UpdateInputBuffer::IsCarSelectStatusValid(/* parameters */);
	BrnWorldIO::UpdateInputBuffer::GetCarSelectStatus(/* parameters */);
	BrnWorld::RaceCarEntityModuleIO::InputBuffer_PreScene::SetCarSelectStatus(/* parameters */);
	BrnWorldIO::UpdateInputBuffer::IsRaceCarColourIndexValid(/* parameters */);
	BrnWorldIO::UpdateInputBuffer::GetOnlineScoringInterface(/* parameters */);
	BrnWorldIO::UpdateInputBuffer::GetControllerActive(/* parameters */);
	BrnWorld::TriggerEntityModuleIO::TriggerQueryInputInterface::Append(/* parameters */);
	BrnWorld::WorldEntityIO::InputBuffer_PreScene::AppendRequestInterface(/* parameters */);
	{
		// WorldBridgeInputToEntityModules.cpp:125
		const PropSmashReportAction * lpPropHitReport;

		BrnWorld::PropEntityIO::InputBuffer_PreScene::SetHitPropsBitArray(/* parameters */);
	}
	BrnWorld::PropEntityIO::InputBuffer_PreScene::SendingPropProgression(/* parameters */);
	CgsSystem::TimerStatusInterface::GetSimTimerStatus(/* parameters */);
	BrnWorld::PropEntityIO::InputBuffer_PreScene::SetCurrentTimestep(/* parameters */);
	{
		// WorldBridgeInputToEntityModules.cpp:133
		const StopModeAction * lpStopModeEvent;

		BrnWorld::PropEntityIO::InputBuffer_PreScene::SetIsOnline(/* parameters */);
		BrnWorld::PropEntityIO::InputBuffer_PreScene::SetEasySmashProps(/* parameters */);
		BrnWorld::PropEntityIO::InputBuffer_PreScene::SetPropProgressionEnabled(/* parameters */);
	}
	BrnWorld::PropEntityIO::InputBuffer_PreScene::ReloadingProfile(/* parameters */);
	{
		// WorldBridgeInputToEntityModules.cpp:148
		const PrepareForModeAction * lpPrepareForModeEvent;

		{
			// WorldBridgeInputToEntityModules.cpp:152
			bool lbOnlineMode;

			// WorldBridgeInputToEntityModules.cpp:155
			bool lbEasySmashProps;

			// WorldBridgeInputToEntityModules.cpp:158
			bool lbDisablePropProgession;

			BrnGameState::GameStateModuleIO::PrepareForModeAction::GetGameModeParams(/* parameters */);
			BrnWorld::PropEntityIO::InputBuffer_PreScene::SetIsOnline(/* parameters */);
			BrnWorld::PropEntityIO::InputBuffer_PreScene::SetEasySmashProps(/* parameters */);
			BrnWorld::PropEntityIO::InputBuffer_PreScene::SetPropProgressionEnabled(/* parameters */);
			BrnWorld::PropEntityIO::InputBuffer_PreScene::ResetProps(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
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

::::KF_DEFAULT_TIMESTEP = [60, 136, 136, 137];

::::KF_VECTOR_NORMALISED_TOLERANCE = [60, 35, 215, 10];

::::KF_DEFAULT_CONTACT_RELAXATION = [63, 0, 0, 0];

::::KF_DEFAULT_BAR_RELAXATION = [63, 128, 0, 0];

::::KF_DEFAULT_DEFORMABLE_BAR_RELAXATION = [63, 76, 204, 205];

::::fMAX_DEFORMATION = [61, 204, 204, 205];

::::KF_MAX_UNRESOLVED_ERROR_THRESHOLD = [61, 76, 204, 205];

::::msfTicksPerSecond = [69, 59, 128, 0];

::::msfOneOverTicksPerSecond = [57, 174, 195, 62];

::::KE_WORLD_PERFMON_PAGE = 4;

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

BrnAI::KF_CENTRE_LINE_AHEAD_CLOSE = [63, 127, 92, 41];

BrnAI::KF_CENTRE_LINE_AHEAD_FAR = [63, 124, 40, 246];

BrnAI::KF_HNG_CROSSPIECE_LENGTH = [64, 160, 0, 0];

BrnAI::KF_AI_VULNERABILITY_RADIUS_BEHIND = [65, 240, 0, 0];

BrnAI::KF_AI_PASSTHROUGH_RADIUS = [66, 200, 0, 0];

BrnAI::KE_AI_PERFMON_PAGE = 7;

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

BrnPhysics::KF_DEFAULT_RACE_CAR_CACHE_SPHERE_SIZE = [64, 160, 0, 0];

BrnPhysics::KF_DEFAULT_TRAFFIC_CACHE_SPHERE_SIZE = [64, 160, 0, 0];

BrnPhysics::KF_DEFAULT_PROP_CACHE_SPHERE_SIZE = [64, 32, 0, 0];

BrnPhysics::KR_MIN_TIMESTEP_MULTIPLIER = [63, 128, 0, 0];

BrnPhysics::Verlet::KF_DEFAULT_BAR_MAX_DISPLACEMENT = [65, 32, 0, 0];

BrnPhysics::Verlet::KF_DEFAULT_BAR_DEFORMATION_THRESHOLD = [59, 163, 215, 10];

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

BrnPhysics::Deformation::KF_DEFORMATION_MODEL_DATA_WHEEL_OFFSET = [61, 204, 204, 205];

BrnPhysics::Deformation::KF_JOINT_DETACH_THRESHOLD_MODIFIER = [64, 0, 0, 0];

BrnPhysics::Deformation::KF_JOINT_DETACH_THRESHOLD_MODIFIER_SQUARED = [64, 128, 0, 0];

BrnPhysics::Deformation::KF_PART_EXTRA_GRAVITY = [0, 0, 0, 0];

BrnPhysics::Deformation::KF_MIN_SWEPT_SPHERE_SPEED = [64, 192, 0, 0];

BrnPhysics::Deformation::KF_PART_DYNAMIC_FRICTION = [62, 153, 153, 154];

BrnPhysics::Deformation::KF_PART_STATIC_FRICTION = [62, 153, 153, 154];

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

BrnPhysics::Vehicle::KF_POST_PLAYER_TD_INVULNERABILITY_TIME = [64, 0, 0, 0];

BrnPhysics::Vehicle::KF_JOINT_ANGLE_BREAK_EXTENT = [63, 76, 204, 205];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_SIZE_X = [67, 150, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_SIZE_Y = [67, 97, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_BORDER_X = [65, 160, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_BORDER_Y = [65, 160, 0, 0];

BrnPhysics::Vehicle::KF_GRIP_CURVE_GRAPH_TEXT_SIZE = [65, 144, 0, 0];

BrnPhysics::Vehicle::KF_SHOWTIME_UNCAP_SPEED_LIMIT_TIME = [62, 153, 153, 154];

CgsNumeric::KU_RANDOM_DEFAULT_SEED = -1881117246;

Attrib::key_default = -2887443745685561006;

Attrib::h64_default = -2887443745685561006;

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

Attrib::Hash::surface::AudioSurface = -2951005994454003311;

Attrib::Hash::boostparamsasset::AirEarning = -1891887715510008784;

Attrib::Hash::boostparamsasset::AirSpinEarning = -4352757040966857742;

Attrib::Hash::boostparamsasset::BarrelRollEarning = -1035108252361594191;

Attrib::Hash::boostparamsasset::BoostChainMin = -2343420446165730523;

Attrib::Hash::boostparamsasset::BoostSlamStrength = -7766274748171065765;

Attrib::Hash::boostparamsasset::BoostSpinIncrease = -6502808958254691887;

Attrib::Hash::boostparamsasset::BurnRateBoost = -3648956812362844215;

Attrib::Hash::boostparamsasset::CleanLanding = -6630060647361528260;

Attrib::Hash::boostparamsasset::ComboModifier = -4173559742227163691;

Attrib::Hash::boostparamsasset::GrindingEarning = -4363492811123288973;

Attrib::Hash::boostparamsasset::Handbrake180Earning = -103186127672983849;

Attrib::Hash::boostparamsasset::MaxSpeedBoostModifier = -9097027527144457540;

Attrib::Hash::boostparamsasset::NearMissBoostEarning = -8500197340308483883;

Attrib::Hash::boostparamsasset::OnComing = -8123106555570631457;

Attrib::Hash::boostparamsasset::RubbingEarning = -5657847537147772142;

Attrib::Hash::boostparamsasset::SlamEarning = -1643247501148292748;

Attrib::Hash::boostparamsasset::SpeedForMaxEarning = -1574127377284081412;

Attrib::Hash::boostparamsasset::StuntSmashEarning = -7010097363749819817;

Attrib::Hash::boostparamsasset::TailgatingEarning = -1992470372002763846;

Attrib::Hash::boostparamsasset::TradingPaintEarning = -6557756835454833620;

Attrib::Hash::boostparamsasset::TrafficCheck = -4306685691871961585;

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

Attrib::ClassName::boostparamsasset = -2728788314741784660;

CgsAttribSys::KF_LOG_WINDOW_WIDTH = [67, 160, 0, 0];

CgsAttribSys::KF_LOG_WINDOW_HEIGHT = [66, 112, 0, 0];

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

BrnWorld::KF_BLUESTWOS_FLASH_DURATION = [63, 128, 0, 0];

BrnWorld::KF_BLUESTWOS_FLASH_HALF_DURATION = [63, 0, 0, 0];

BrnWorld::KF_BLUESTWOS_ONE_OVER_FLASH_DURATION = [63, 128, 0, 0];

BrnWorld::KF_BLUESTWOS_FLASH_TIMEOUT = [61, 204, 204, 205];

BrnWorld::KF_EVENT_START_RESET_DEFER_TIME = [62, 25, 153, 154];

BrnWorld::KF_BOOST_EFFECT_LOSS_MAX = [64, 0, 0, 0];

BrnWorld::KF_BOOST_EFFECT_LOSS_MIN = [63, 128, 0, 0];

BrnWorld::KF_MIN_BOOST_BEFORE_USE = [62, 25, 153, 154];

BrnWorld::KF_MIN_BOOST_BEFORE_BOUNCE = [60, 35, 215, 10];

BrnWorld::KF_MIN_SPIN_ANGLE = [66, 52, 0, 0];

BrnWorld::KF_BOUNCE_BOOST_FLASH_BAR_TIME = [63, 25, 153, 154];

BrnWorld::KF_MIN_BOOST_TIME = [63, 160, 0, 0];

BrnWorld::KF_MIN_AIR_TIME_FOR_BOOST = [63, 0, 0, 0];

BrnWorld::KF_INFORMATION_REMEMBER_TIME_GENERAL = [63, 0, 0, 0];

BrnWorld::KF_INFORMATION_REMEMBER_TIME_TAKEDOWNS = [65, 32, 0, 0];

BrnWorld::KF_MAX_BOOST = [66, 200, 0, 0];

BrnWorld::KF_PLAYER_NETWORK_CAR_RESET_SECONDS = [64, 160, 0, 0];

BrnWorld::KF_PLANE_SEGMENT_TRIGGER_DEPTH = [60, 35, 215, 10];

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

CgsGraphics::DefaultValues::mkDefault_float_t = [0, 0, 0, 0];

CgsGraphics::DefaultValues::mkDefault_double_t = [0, 0, 0, 0, 0, 0, 0, 0];

BrnParticle::kfNumberOfSecondsInTenYears = [77, 150, 96, 24];

CgsContainers::kxDictFlag_DuplicateDataReference = -2147483648;

CgsContainers::KI_DICTIONARY_INVALID_KEY = -1;

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

CgsDev::DebugUI::KF_OFFSET_TO_MIN_MAX = [63, 0, 0, 0];

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


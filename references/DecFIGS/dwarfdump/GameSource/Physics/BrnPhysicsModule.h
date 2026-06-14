// Wheel.h:30
namespace BrnPhysics {
	// BrnPhysicsModule.h:52
	const float32_t KR_MIN_TIMESTEP_MULTIPLIER;

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnPhysicsModule.h:52
	const float32_t KR_MIN_TIMESTEP_MULTIPLIER;

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// Declaration
	struct PhysicsModule {
		// BrnPhysicsModule.h:75
		enum EPrepareStage {
			E_PREPARESTAGE_START = 0,
			E_PREPARESTAGE_MANAGER = 1,
			E_PREPARESTAGE_CONTACTMAPPER = 2,
			E_PREPARESTAGE_SIMULATIONMODULE = 3,
			E_PREPARESTAGE_DEFORMATIONMANAGER = 4,
			E_PREPARESTAGE_PROPMANAGER = 5,
			E_PREPARESTAGE_VEHICLEMODULE = 6,
			E_PREPARESTAGE_CREATE_PLAYER_VEHICLE = 7,
			E_PREPARESTAGE_CREATE_WORLD_RIGIDBODY = 8,
			E_PREPARESTAGE_DONE = 9,
		}

		// BrnPhysicsModule.h:89
		enum EReleaseStage {
			E_RELEASESTAGE_START = 0,
			E_RELEASESTAGE_MANAGER = 1,
			E_RELEASESTAGE_VEHICLEMODULE = 2,
			E_RELEASESTAGE_PROPMANAGER = 3,
			E_RELEASESTAGE_DEFORMATIONMANAGER = 4,
			E_RELEASESTAGE_SIMULATIONMODULE = 5,
			E_RELEASESTAGE_CONTACTMAPPER = 6,
			E_RELEASESTAGE_DONE = 7,
		}

	}

	// BrnPhysicsModule.h:52
	const float32_t KR_MIN_TIMESTEP_MULTIPLIER;

}

// BrnPhysicsModule.h:72
struct BrnPhysics::PhysicsModule : public CgsModule::ModuleSingleBuffered {
private:
	// BrnPhysicsModule.h:189
	CgsPhysics::PhysicsSimulationModule mSimulationModule;

	// BrnPhysicsModule.h:190
	VehicleManager mVehicleManager;

	// BrnPhysicsModule.h:192
	ContactSpyData mContactData;

	// BrnPhysicsModule.h:194
	DeformationManager mDeformationManager;

	// BrnPhysicsModule.h:195
	DeformationInputInterface mDeformationInput;

	// BrnPhysicsModule.h:196
	DeformationOutputInterface mDeformationOutput;

	// BrnPhysicsModule.h:198
	PropManager mPropManager;

	// BrnPhysicsModule.h:200
	BrnPhysics::PhysicsModule::EPrepareStage mePrepareStage;

	// BrnPhysicsModule.h:201
	BrnPhysics::PhysicsModule::EReleaseStage meReleaseStage;

	// BrnPhysicsModule.h:204
	RigidBodyId mWorldRigidBodyId;

	// BrnPhysicsModule.h:205
	EntityId mWorldEntityId;

	// BrnPhysicsModule.h:207
	BrnGameState::GameStateModuleIO::EGameModeType meCurrentGameMode;

	// BrnPhysicsModule.h:211
	int32_t miPhysicsPreSceneUpdatePM;

	// BrnPhysicsModule.h:212
	int32_t miPhysicsUpdateSimulationPM;

	// BrnPhysicsModule.h:213
	int32_t miPhysicsUpdateReadUpdatedBodiesPM;

	// BrnPhysicsModule.h:214
	int32_t miPhysicsUpdateVehiclePhysicsPM;

	// BrnPhysicsModule.h:215
	int32_t miPhysicsUpdateCrashPredictionPM;

	// BrnPhysicsModule.h:216
	int32_t miDeformationMaintenancePM;

	// BrnPhysicsModule.h:217
	int32_t miContactSpyListGenerationPM;

	// BrnPhysicsModule.h:218
	int32_t miGenerateSceneQueriesPM;

	// BrnPhysicsModule.h:219
	int32_t miPhysicsProcessRaceCarContactsPM;

	// BrnPhysicsModule.h:220
	int32_t miDeformationManagerPM;

	// BrnPhysicsModule.h:221
	int32_t miPhysicsBridgeContactsPM;

	// BrnPhysicsModule.h:222
	int32_t miPhysicsUpdateContactGenAsyncPM;

	// BrnPhysicsModule.h:223
	int32_t miPhysicsUpdateDoVehicleContactGenStartPM;

	// BrnPhysicsModule.h:224
	int32_t miPhysicsUpdateDoVehicleContactGenEndPM;

	// BrnPhysicsModule.h:225
	int32_t miPhysicsUpdateDoPartContactGenStartPM;

	// BrnPhysicsModule.h:226
	int32_t miPhysicsUpdateDoPartContactGenEndPM;

	// BrnPhysicsModule.h:227
	int32_t miPhysicsUpdateDoPropContactGenStartPM;

	// BrnPhysicsModule.h:228
	int32_t miPhysicsUpdateDoPropContactGenEndPM;

	// BrnPhysicsModule.h:229
	int32_t miPhysicsUpdateValidateRaceCarWorldContactPM;

	// BrnPhysicsModule.h:230
	int32_t miPropManagerPM;

	// BrnPhysicsModule.h:231
	int32_t miPropManagerPreScenePM;

	// BrnPhysicsModule.h:232
	int32_t miPropManagerWorldContactGenPM;

	// BrnPhysicsModule.h:233
	int32_t miPropManagerProcessInputsPM;

	// BrnPhysicsModule.h:234
	int32_t miPropManagerReadUpdatedBodiesPM;

	// BrnPhysicsModule.h:235
	int32_t miPropManagerOutputUpdatedPropsPM;

	// BrnPhysicsModule.h:236
	int32_t miPropManagerApplyShockwavePM;

	// BrnPhysicsModule.h:237
	int32_t miPhysicsUpdateFixUpVehContactsPM;

	// BrnPhysicsModule.h:240
	int32_t miFramesToForceSuperSlowMotion;

	// BrnPhysicsModule.h:241
	bool mbIsOnlineGameMode;

public:
	// BrnPhysicsModule.cpp:52
	virtual void Construct();

	// BrnPhysicsModule.cpp:192
	virtual bool Prepare(IOBufferStack *, IOBufferStack *, InputBuffer_Update *, const AllocatorList *);

	// BrnPhysicsModule.cpp:348
	virtual bool Release();

	// BrnPhysicsModule.cpp:449
	virtual void Destruct();

	// BrnPhysicsModuleUpdateFunctions.cpp:63
	void PostSceneUpdate(IOBufferStack *, IOBufferStack *, const InputBuffer *, OutputBuffer *, BrnUpdateSet);

	// BrnPhysicsModule.cpp:615
	void UpdateCachedPositions(InputBuffer_Update *);

	// BrnPhysicsModuleUpdateFunctions.cpp:191
	void GenerateSceneQueries(OutputBuffer *, BrnUpdateSet);

	// BrnPhysicsModuleUpdateFunctions.cpp:237
	void Update(IOBufferStack *, IOBufferStack *, const InputBuffer *, OutputBuffer *, BrnUpdateSet);

	// BrnPhysicsModuleUpdateFunctions.cpp:1045
	void UpdateNetworkCatchup(const InputBuffer *, BrnUpdateSet);

	// BrnPhysicsModule.cpp:472
	bool PrepareWorldRigidBody(InputBuffer *);

	// BrnPhysicsModuleUpdateFunctions.cpp:214
	void PropPrepareTypes(const InputBuffer *);

	// BrnPhysicsModuleUpdateFunctions.cpp:1075
	void HandleGameActionsPostScene(const InputBuffer::GameActionQueue *, InputBuffer *, OutputBuffer::SceneInputInterface *);

	// BrnPhysicsModuleUpdateFunctions.cpp:1166
	void HandleGameActions(const InputBuffer::GameActionQueue *, OutputBuffer *);

	// BrnPhysicsModuleUpdateFunctions.cpp:1356
	void HandlePlayerStatsUpdate(const SendCarStatsAction *);

	// BrnPhysicsModuleUpdateFunctions.cpp:1375
	void CheckState();

	// BrnPhysicsModule.h:451
	void ReadSurfaceProperties(Attribute::Key);

private:
	// BrnPhysicsModuleBridgeFunctions.cpp:47
	void BridgeContactsToSimulation(InputBuffer *, const InputBuffer *, PotentialContactInterface *, PropRaceCarContactBuffer *);

	// BrnPhysicsModuleBridgeFunctions.cpp:552
	// Declaration
	void CheckContactQueueSize(const InputBuffer::InAddContactQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPhysicsModuleBridgeFunctions.cpp:580
		using namespace CgsDev::Message;

	}

	// BrnPhysicsModule.h:473
	void SetDeformationContactOrder(PotentialContact *, const PotentialContact *);

	// BrnPhysicsModuleBridgeFunctions.cpp:793
	void BridgeUpdatedVehiclesToSimulation(InputBuffer *, const InputBuffer *);

	// BrnPhysicsModuleBridgeFunctions.cpp:868
	void BridgeVehicleManagerToSimulation_PostScene(InputBuffer *, const VehicleManagerOutputBuffer *);

	// BrnPhysicsModule.h:286
	void BridgePropManagerToSimulation_PostScene(InputBuffer *);

	// BrnPhysicsModuleBridgeFunctions.cpp:991
	void BridgeVehicleManagerToSimulation_PostPhysics(InputBuffer *, const VehicleManagerOutputBuffer *);

	// BrnPhysicsModuleBridgeFunctions.cpp:1313
	void BridgeVehicleManagerRequestsToSimulation(InputBuffer *, const VehicleOutputRequestInterface *);

	// BrnPhysicsModuleBridgeFunctions.cpp:900
	void BridgeDeformationManagerToSimulation(InputBuffer *);

	// BrnPhysicsModuleBridgeFunctions.cpp:957
	void BridgeDeformationManagerToSimulation_PostScene(InputBuffer *);

	// BrnPhysicsModuleBridgeFunctions.cpp:974
	void BridgeDeformationManagerToSimulation_PostPhysics(InputBuffer *);

	// BrnPhysicsModuleBridgeFunctions.cpp:1023
	void BridgeVehicleManagerToOutput(OutputBuffer *, const VehicleManagerOutputBuffer *);

	// BrnPhysicsModuleBridgeFunctions.cpp:832
	void BridgeSimulationToOutput(OutputBuffer *, const PotentialContactInterface *, const PropRaceCarContactBuffer *, const OutputBuffer *, VecFloat);

	// BrnPhysicsModuleBridgeFunctions.cpp:1049
	void ProcessContactSpies(const OutputBuffer::OutContactSpyQueue *, const PotentialContactInterface *, const PropRaceCarContactBuffer *, VecFloat);

	// BrnPhysicsModuleBridgeFunctions.cpp:1094
	void ProcessContactSpy(OutContactSpy, const PotentialContactInterface *, const PropRaceCarContactBuffer *, VecFloat);

	// BrnPhysicsModuleBridgeFunctions.cpp:1206
	void StoreContact(const OutContactSpy *, const PotentialContact *, const PropRaceCarContactBuffer *);

	// BrnPhysicsModule.cpp:558
	EntityId GetEntityId(RigidBodyId);

	// BrnPhysicsModule.h:411
	bool IsSimulationUpdateRequired();

	// BrnPhysicsModule.h:431
	bool IsSkippingSimulationUpdates() const;

	// BrnPhysicsModuleUpdateFunctions.cpp:913
	void FixUpVehicleContacts(PotentialContactInterface *);

	// BrnPhysicsModuleBridgeFunctions.cpp:498
	void BridgeSimpleTrafficWithWorldContactsToSimulation(InputBuffer::InAddContactQueue *, const PotentialContactInterface *);

	// BrnPhysicsModuleBridgeFunctions.cpp:604
	// Declaration
	void ValidateSimulationContacts(const InputBuffer::InAddContactQueue *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnPhysicsModuleBridgeFunctions.cpp:606
		using namespace CgsPhysics::PhysicsSimulationIO;

	}

	// BrnPhysicsModuleBridgeFunctions.cpp:649
	void ValidateSimulationContactTypes(BrnWorld::EEntityTypeID, BrnWorld::EEntityTypeID);

}

// Wheel.h:30
namespace BrnPhysics {
	// Declaration
	struct PhysicsModule {
	public:
		// BrnPhysicsModule.h:451
		void ReadSurfaceProperties(Attribute::Key);

	}

	// BrnPhysicsModule.h:52
	const float32_t KR_MIN_TIMESTEP_MULTIPLIER;

}

// BrnPhysicsModule.h:72
void BrnPhysics::PhysicsModule::~PhysicsModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPhysicsModule.h:72
void BrnPhysics::PhysicsModule::PhysicsModule() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


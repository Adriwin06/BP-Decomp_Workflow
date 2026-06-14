// BrnReplayRaceCarEntitySerialiser.h:40
struct BrnReplays::RaceCarKeyData {
	// BrnReplayRaceCarEntitySerialiser.h:46
	OrthonormalMatrix mTransform;

	// BrnReplayRaceCarEntitySerialiser.h:47
	OrthonormalMatrix[6] maWheelTransforms;

	// BrnReplayRaceCarEntitySerialiser.h:48
	Vector3Plus[128] maVerletOffsets;

	// BrnReplayRaceCarEntitySerialiser.h:49
	bool[128] mabWheelExists;

public:
	// BrnReplayRaceCarEntitySerialiser.h:44
	void Clear();

}

// BrnReplayRaceCarEntitySerialiser.h:61
struct BrnReplays::RaceCarStaticLayout {
	// BrnReplayRaceCarEntitySerialiser.h:63
	EActiveRaceCarIndex mePlayerCarIndex;

	// BrnReplayRaceCarEntitySerialiser.h:64
	BrnWorld::ActiveRaceCar::RenderParams[8] maRenderParams;

	// BrnReplayRaceCarEntitySerialiser.h:65
	CgsID[8] maRaceCarIds;

	// BrnReplayRaceCarEntitySerialiser.h:66
	CgsID[8] maWheelIds;

	// BrnReplayRaceCarEntitySerialiser.h:67
	bool[8] mabRaceCarActive;

	// BrnReplayRaceCarEntitySerialiser.h:68
	RaceCarKeyData[8] maRaceCarKeyData;

	// BrnReplayRaceCarEntitySerialiser.h:69
	RaceCarState[8] maRaceCarPhysicsStates;

	// BrnReplayRaceCarEntitySerialiser.h:70
	BoostOutputInfo[8] maRaceCarBoostStates;

	// BrnReplayRaceCarEntitySerialiser.h:71
	int32_t[8] maiGlobalIndices;

}

// BrnReplayRaceCarEntitySerialiser.h:83
struct BrnReplays::RaceCarEntitySerialiser : public BaseSerialiser {
public:
	// BrnReplayRaceCarEntitySerialiser.h:87
	void Construct();

	// BrnReplayRaceCarEntitySerialiser.h:90
	void Destruct();

	// BrnReplayRaceCarEntitySerialiser.h:93
	RaceCarStaticLayout * GetStaticLayout();

	// BrnReplayRaceCarEntitySerialiser.h:101
	void RecordRaceCarFrame(int32_t, bool, bool, BrnWorld::ActiveRaceCar *, BoostManager *);

	// BrnReplayRaceCarEntitySerialiser.h:104
	void PlayRaceCars();

	// BrnReplayRaceCarEntitySerialiser.h:109
	void FillOuputInterfaces(BrnWorld::RaceCarEntityModuleIO::RCEntityActiveRaceCarOutputInterface *, BrnWorld::RaceCarEntityModuleIO::RCEntityGlobalRaceCarOutputInterface *);

private:
	// BrnReplayRaceCarEntitySerialiser.h:115
	void WriteRenderParams(BrnWorld::ActiveRaceCar::RenderParams *, RaceCarKeyData *);

	// BrnReplayRaceCarEntitySerialiser.h:118
	void ReadRenderParams(BrnWorld::ActiveRaceCar::RenderParams *, RaceCarKeyData *);

	// BrnReplayRaceCarEntitySerialiser.h:126
	void RecordActiveRaceCar(int32_t, int32_t, bool, BrnWorld::ActiveRaceCar *, BoostManager *);

	// BrnReplayRaceCarEntitySerialiser.h:129
	void PlayActiveRaceCar(int32_t);

}


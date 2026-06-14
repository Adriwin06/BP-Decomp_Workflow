// BrnReplayDirectorBridgeSerialiser.h:44
struct BrnReplays::DirectorBridgeStaticLayout {
	// BrnReplayDirectorBridgeSerialiser.h:46
	int8_t miActivePlayerCarIndex;

	// BrnReplayDirectorBridgeSerialiser.h:47
	int8_t miPlayerKiller;

	// BrnReplayDirectorBridgeSerialiser.h:48
	bool mbPlayerTakenDown;

	// BrnReplayDirectorBridgeSerialiser.h:49
	bool[8] mabActive;

	// BrnReplayDirectorBridgeSerialiser.h:50
	VehicleInfo[8] mVehicleInfo;

	// BrnReplayDirectorBridgeSerialiser.h:51
	InputBuffer::GameActionQueue mGameActionQueue;

	// BrnReplayDirectorBridgeSerialiser.h:52
	PlayerCrashInfo mPlayerCrashInfo;

	// BrnReplayDirectorBridgeSerialiser.h:53
	Matrix44Affine[8] maCentreOfMassTransforms;

	// BrnReplayDirectorBridgeSerialiser.h:55
	CarScoreData mPlayerScoreData;

	// BrnReplayDirectorBridgeSerialiser.h:56
	bool mbPlayerComboWarningActive;

	// BrnReplayDirectorBridgeSerialiser.h:57
	float32_t mfPlayerBoostPercentage;

}

// BrnReplayDirectorBridgeSerialiser.h:69
struct BrnReplays::DirectorBridgeSerialiser : public BaseSerialiser {
public:
	// BrnReplayDirectorBridgeSerialiser.h:73
	void Construct();

	// BrnReplayDirectorBridgeSerialiser.h:76
	void Destruct();

	// BrnReplayDirectorBridgeSerialiser.h:79
	DirectorBridgeStaticLayout * GetStaticLayout();

	// BrnReplayDirectorBridgeSerialiser.h:82
	void SerialiseGameActionQueue();

	// BrnReplayDirectorBridgeSerialiser.h:85
	void WriteActivePlayerIndex(EActiveRaceCarIndex);

	// BrnReplayDirectorBridgeSerialiser.h:88
	EActiveRaceCarIndex ReadActivePlayerIndex();

	// BrnReplayDirectorBridgeSerialiser.h:91
	void WriteVehicleActive(int32_t, bool);

	// BrnReplayDirectorBridgeSerialiser.h:94
	bool ReadVehicleActive(int32_t);

	// BrnReplayDirectorBridgeSerialiser.h:97
	void WriteVehicleInfo(int32_t, const VehicleInfo *);

	// BrnReplayDirectorBridgeSerialiser.h:100
	const VehicleInfo * ReadVehicleInfo(int32_t);

	// BrnReplayDirectorBridgeSerialiser.h:103
	void WriteCrashInfo(const PlayerCrashInfo *);

	// BrnReplayDirectorBridgeSerialiser.h:106
	const PlayerCrashInfo * ReadCrashInfo();

	// BrnReplayDirectorBridgeSerialiser.h:109
	void WriteCentreOfMassTransform(int32_t, Matrix44Affine);

	// BrnReplayDirectorBridgeSerialiser.h:112
	const rw::math::vpu::Matrix44Affine & ReadCentreOfMassTransform(int32_t);

	// BrnReplayDirectorBridgeSerialiser.h:115
	void WritePlayerScoreData(const CarScoreData *);

	// BrnReplayDirectorBridgeSerialiser.h:118
	const CarScoreData & ReadPlayerScoreData();

	// BrnReplayDirectorBridgeSerialiser.h:121
	void WritePlayerComboWarningActive(bool);

	// BrnReplayDirectorBridgeSerialiser.h:124
	const bool ReadPlayerComboWarningActive();

	// BrnReplayDirectorBridgeSerialiser.h:127
	void WritePlayerBoostPercentage(float32_t);

	// BrnReplayDirectorBridgeSerialiser.h:130
	const float32_t ReadPlayerBoostPercentage();

	// BrnReplayDirectorBridgeSerialiser.h:135
	void WritePlayerTakedownInfo(bool, EActiveRaceCarIndex);

	// BrnReplayDirectorBridgeSerialiser.h:140
	void ReadPlayerTakedownInfo(bool *, EActiveRaceCarIndex *);

}


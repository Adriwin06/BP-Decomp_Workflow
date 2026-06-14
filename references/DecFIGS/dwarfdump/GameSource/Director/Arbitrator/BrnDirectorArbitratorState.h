// BrnDirectorArbitratorState.h:54
struct BrnDirector::ArbStateSharedInfo {
	// BrnDirectorArbitratorState.h:57
	SharedCameraContainer * mpSharedCameraContainer;

	// BrnDirectorArbitratorState.h:59
	BrnDirector::DebugPrinter * mpDebugPrinter;

	// BrnDirectorArbitratorState.h:60
	BrnDirector::DebugLog * mpDebugLog;

	// BrnDirectorArbitratorState.h:61
	BrnDirector::ICEWrapper * mpICEWrapper;

	// BrnDirectorArbitratorState.h:62
	DirectorOutputInterface * mpOutputInterface;

	// BrnDirectorArbitratorState.h:63
	BrnDirector::ArbitratorStateContainer * mpStateContainer;

	// BrnDirectorArbitratorState.h:64
	BehaviourManager * mpBehaviourManager;

	// BrnDirectorArbitratorState.h:65
	const NamedParameters * mpNamedParameters;

	// BrnDirectorArbitratorState.h:66
	BrnDirector::MomentController * mpMomentController;

	// BrnDirectorArbitratorState.h:67
	GameState * mpGameState;

	// BrnDirectorArbitratorState.h:68
	Random * mpRandom;

	// BrnDirectorArbitratorState.h:69
	const BrnDirector::DirectorResourceManager * mpDirectorResourceManager;

	// BrnDirectorArbitratorState.h:70
	const EffectInterface * mpEffectInterface;

	// BrnDirectorArbitratorState.h:72
	const PlayerCrashInfo * mpPlayerCrashInfo;

	// BrnDirectorArbitratorState.h:73
	const AllVehicleData * mpAllVehicleData;

	// BrnDirectorArbitratorState.h:74
	const VehicleTracker * mpPlayerTracker;

	// BrnDirectorArbitratorState.h:76
	const ControllerInfo * mpControllerInfo;

	// BrnDirectorArbitratorState.h:78
	const VehicleInfo * mpRaceCars;

	// BrnDirectorArbitratorState.h:79
	const VehicleInfo * mpPlayerCar;

	// BrnDirectorArbitratorState.h:80
	const rw::math::vpu::Matrix44Affine * mpPlayerCarTransform;

	// BrnDirectorArbitratorState.h:81
	EActiveRaceCarIndex mePlayerActiveRaceCarIndex;

	// BrnDirectorArbitratorState.h:83
	const Camera2DRotationController * mpRotationController;

	// BrnDirectorArbitratorState.h:84
	const CameraSphericalRotationController * mpSphericalRotationController;

	// BrnDirectorArbitratorState.h:86
	float32_t mfTimestep;

	// BrnDirectorArbitratorState.h:87
	float32_t mfSimTimestep;

}

// BrnDirectorArbitratorState.h:93
struct BrnDirector::ArbitratorState {
	int (*)(...) * _vptr.ArbitratorState;

protected:
	// BrnDirectorArbitratorState.h:135
	Camera mCamera;

private:
	// BrnDirectorArbitratorState.h:148
	bool mbDebugDisplayActive;

	// BrnDirectorArbitratorState.h:151
	bool mbCycleCameraThisFrame;

public:
	// BrnDirectorArbitratorState.h:157
	const Camera & GetCamera() const;

	// BrnDirectorArbitratorState.cpp:27
	virtual void Construct();

	// BrnDirectorArbitratorState.h:104
	virtual bool Prepare(BrnDirector::ArbStateSharedInfo &);

	// BrnDirectorArbitratorState.h:108
	virtual void Update(BrnDirector::ArbStateSharedInfo &);

	// BrnDirectorArbitratorState.cpp:41
	void PostUpdate(BrnDirector::ArbStateSharedInfo &);

	// BrnDirectorArbitratorState.cpp:58
	virtual bool Release(BrnDirector::ArbStateSharedInfo &);

	// BrnDirectorArbitratorState.h:119
	virtual void Destruct();

	// BrnDirectorArbitratorState.cpp:68
	virtual bool CanRun(BrnDirector::ArbStateSharedInfo &) const;

	// BrnDirectorArbitratorState.cpp:49
	void CycleCamera();

	// BrnDirectorArbitratorState.h:130
	virtual const char * GetName() const;

protected:
	// BrnDirectorArbitratorState.h:165
	bool ShouldCycleCameraThisFrame() const;

	// BrnDirectorArbitratorState.h:173
	bool IsDebugDisplayActive() const;

}

// BrnDirectorArbitratorState.h:93
void BrnDirector::ArbitratorState::ArbitratorState() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


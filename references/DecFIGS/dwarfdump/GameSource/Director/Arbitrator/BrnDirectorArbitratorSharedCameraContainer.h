// BrnDirectorArbitratorSharedCameraContainer.h:40
struct BrnDirector::SharedCameraContainer {
private:
	// BrnDirectorArbitratorSharedCameraContainer.h:90
	bool mbUseGameplayExternal;

	// BrnDirectorArbitratorSharedCameraContainer.h:91
	bool mbLookbackOverride;

	// BrnDirectorArbitratorSharedCameraContainer.h:93
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal> mGameplayExternal;

	// BrnDirectorArbitratorSharedCameraContainer.h:94
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayBumper> mGameplayBumper;

public:
	// BrnDirectorArbitratorSharedCameraContainer.h:44
	void Construct();

	// BrnDirectorArbitratorSharedCameraContainer.h:48
	void Prepare(BrnDirector::ArbStateSharedInfo &);

	// BrnDirectorArbitratorSharedCameraContainer.h:52
	void Release(BrnDirector::ArbStateSharedInfo &);

	// BrnDirectorArbitratorSharedCameraContainer.h:55
	void Destruct();

	// BrnDirectorArbitratorSharedCameraContainer.h:58
	const Camera & GetGameplayCamera() const;

	// BrnDirectorArbitratorSharedCameraContainer.h:61
	BehaviourHelperIndex GetGameplayCameraHelperIndex() const;

	// BrnDirectorArbitratorSharedCameraContainer.h:64
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal> & GetGameplayExternal();

	// BrnDirectorArbitratorSharedCameraContainer.h:67
	const BehaviourHandle<BrnDirector::Camera::BehaviourGameplayExternal> & GetGameplayExternal() const;

	// BrnDirectorArbitratorSharedCameraContainer.h:70
	BehaviourHandle<BrnDirector::Camera::BehaviourGameplayBumper> & GetGameplayBumper();

	// BrnDirectorArbitratorSharedCameraContainer.h:73
	const BehaviourHandle<BrnDirector::Camera::BehaviourGameplayBumper> & GetGameplayBumper() const;

	// BrnDirectorArbitratorSharedCameraContainer.h:76
	void CycleGameplayCamera();

	// BrnDirectorArbitratorSharedCameraContainer.h:79
	bool IsUsingGameplayExternal() const;

	// BrnDirectorArbitratorSharedCameraContainer.h:82
	void SetUsingGameplayExternal(bool);

	// BrnDirectorArbitratorSharedCameraContainer.h:86
	void SetLookbackOverride(bool);

}


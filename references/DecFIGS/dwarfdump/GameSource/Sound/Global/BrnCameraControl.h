// BrnCameraControl.h:35
struct BrnSound::Logic::CameraControl : public BrnSound::Logic::BrnEffectControl {
protected:
	// BrnCameraControl.cpp:23
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

private:
	// BrnCameraControl.h:93
	DataPoint<BrnSound::ECameraModes> mCameraMode;

	// BrnCameraControl.h:94
	float32_t mfRaceEndEffect;

	// BrnCameraControl.h:96
	bool mbLockedFor100Percent;

public:
	void CameraControl(const CameraControl &);

	void CameraControl();

	// BrnCameraControl.cpp:23
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnCameraControl.cpp:23
	virtual const char * GetTypeName() const;

	// BrnCameraControl.h:37
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnCameraControl.cpp:23
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// BrnCameraControl.cpp:47
	virtual bool Attach();

	// BrnCameraControl.cpp:77
	virtual void UpdateParams(float32_t);

	// BrnCameraControl.cpp:260
	virtual void ProcessUpdate();

	// BrnCameraControl.cpp:279
	virtual void Notify(const CgsSound::Io::MessageHeader *);

	// BrnCameraControl.cpp:395
	// Declaration
	BrnSound::ECameraModes GetCameraMode(const CameraState &, const RootInputBuffer::GameModeOutputInterface *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnCameraControl.cpp:398
		using namespace BrnDirector::Camera;

	}

	// BrnCameraControl.cpp:443
	BrnSound::ECameraModes GetCameraModeFromLogicModule(BrnSound::Module::SoundLogicModule *);

private:
	// BrnCameraControl.cpp:470
	void ClearEventSnapshots();

	// BrnCameraControl.cpp:360
	BrnSound::ESnapshotTypes GetEventSnapshot(const RootInputBuffer::GameModeOutputInterface *);

public:
	virtual void ~CameraControl();

}

// BrnCameraControl.h:35
void BrnSound::Logic::CameraControl::~CameraControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCameraControl.h:35
void BrnSound::Logic::CameraControl::CameraControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


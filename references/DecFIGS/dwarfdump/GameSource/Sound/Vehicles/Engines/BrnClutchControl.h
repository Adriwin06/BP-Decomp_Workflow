// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnVehicleState.h:27
		namespace Engines {
			// Declaration
			struct ClutchControl {
				// BrnClutchControl.h:46
				enum EClutchState {
					E_CLUTCH_STATE_NONE = 0,
					E_CLUTCH_STATE_ATTACK_BEGIN = 1,
					E_CLUTCH_STATE_ATTACK_UPDATE = 2,
					E_CLUTCH_STATE_IDLE_BEGIN = 3,
					E_CLUTCH_STATE_IDLE_REVING = 4,
					E_CLUTCH_STATE_IDLE_DISENGAGE = 5,
					E_CLUTCH_STATE_INTERRUPT = 6,
					E_CLUTCH_STATE_INIFINITE_GEAR = 7,
					E_CLUTCH_STATE_BOOST = 8,
				}

				// BrnClutchControl.h:139
				enum EDrivingState {
					E_DRIVING_STATE_REGULAR = 0,
					E_DRIVING_STATE_BOOST = 1,
					E_MAX_DRIVING_STATES = 2,
				}

			}

		}

	}

}

// BrnClutchControl.h:233
struct BrnSound::Vehicles::Engines::AIClutchControl : public BrnSound::Vehicles::Engines::ClutchControl {
protected:
	// BrnClutchControl.cpp:79
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

public:
	void AIClutchControl(const AIClutchControl &);

	void AIClutchControl();

	// BrnClutchControl.cpp:79
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnClutchControl.cpp:79
	virtual const char * GetTypeName() const;

	// BrnClutchControl.h:235
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnClutchControl.cpp:79
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// BrnClutchControl.cpp:976
	virtual void UpdateParams(float32_t);

	virtual void ~AIClutchControl();

}

// BrnClutchControl.h:42
struct BrnSound::Vehicles::Engines::ClutchControl : public BrnSound::Vehicles::Engines::ShiftControl::IShiftingActivator {
protected:
	// BrnClutchControl.cpp:73
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

private:
	// BrnClutchControl.h:147
	BrnSound::Vehicles::Engines::PhysicsControl * mpPhysicsControl;

	// BrnClutchControl.h:148
	BrnSound::Vehicles::Engines::EngineControl * mpEngineControl;

	// BrnClutchControl.h:149
	BrnSound::Vehicles::Engines::ShiftControl * mpShiftControl;

	// BrnClutchControl.h:150
	BrnSound::Vehicles::Engines::HybridExhaustControl * mpHybridExhaustControl;

	// BrnClutchControl.h:151
	BrnSound::Vehicles::Wheels::WheelControl * mpWheelControl;

	// BrnClutchControl.h:153
	vehicleengine mVehicleEngineAttributes;

	// BrnClutchControl.h:155
	BrnSound::Vehicles::Engines::ClutchControl::EClutchState meClutchState;

	// BrnClutchControl.h:157
	float32_t mfLastClutchAttack;

	// BrnClutchControl.h:158
	float32_t mfLastIdleClutch;

	// BrnClutchControl.h:185
	InterpolateLine mInterpThrottle;

	// BrnClutchControl.h:186
	InterpolateLine mInterpRPM;

	// BrnClutchControl.h:187
	InterpolateLine mInterpVol;

	// BrnClutchControl.h:192
	float32_t mfElapsedTimeOfInfiniteGears;

	// BrnClutchControl.h:193
	BrnSound::Vehicles::Engines::ClutchControl::EDrivingState meDrivingState;

	// BrnClutchControl.h:194
	Random mRandom;

	// BrnClutchControl.h:195
	float32_t mfMaxIncrement;

	// BrnClutchControl.h:196
	float32_t mfRandomTarget;

	// BrnClutchControl.h:197
	float32_t mfRPMBeforeShift;

	// BrnClutchControl.h:221
	float32_t mfDamageEngineAmount;

	// BrnClutchControl.h:222
	float32_t mfDamageThrottleAmount;

	// BrnClutchControl.h:224
	SqaureWave mDamagedThrottle;

	// BrnClutchControl.h:225
	SqaureWave mDamagedWindow;

public:
	void ClutchControl(const ClutchControl &);

	// BrnClutchControl.cpp:73
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnClutchControl.cpp:73
	virtual const char * GetTypeName() const;

	// BrnClutchControl.h:43
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnClutchControl.cpp:73
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// BrnClutchControl.cpp:100
	void ClutchControl();

	// BrnClutchControl.cpp:130
	virtual void ~ClutchControl();

	// BrnClutchControl.cpp:197
	virtual int32_t GetController(int32_t);

	// BrnClutchControl.cpp:227
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnClutchControl.cpp:146
	virtual bool Attach();

	// BrnClutchControl.cpp:283
	virtual void UpdateParams(float32_t);

	// BrnClutchControl.cpp:901
	virtual void ProcessUpdate();

	// BrnClutchControl.cpp:710
	virtual void Notify(const CgsSound::Io::MessageHeader *);

	// BrnClutchControl.h:107
	bool IsActive();

	// BrnClutchControl.h:110
	bool IsInfiniteGears();

	// BrnClutchControl.h:116
	bool IsBoostingGears();

	// BrnClutchControl.h:262
	float32_t GetClutchRPM();

	// BrnClutchControl.h:299
	float32_t GetDamageThrottle();

	// BrnClutchControl.h:280
	float32_t GetClutchThrottle();

	// BrnClutchControl.h:318
	float32_t GetClutchVolume();

	// BrnClutchControl.h:336
	BrnSound::Vehicles::Engines::ClutchControl::EClutchState GetClutchState();

private:
	// BrnClutchControl.cpp:748
	bool ShouldBeginClutchAttack();

	// BrnClutchControl.cpp:779
	bool ShouldBeginIdleClutch();

	// BrnClutchControl.cpp:864
	bool ShouldBeginInfiniteGearRise();

	// BrnClutchControl.cpp:818
	bool ShouldBeginBoostAttack();

	// BrnClutchControl.cpp:388
	void UpdateClutchState(float32_t);

	// BrnClutchControl.cpp:920
	virtual float32_t GetStartRPM();

	// BrnClutchControl.cpp:934
	virtual float32_t GetTargetRPM();

	// BrnClutchControl.cpp:955
	virtual float32_t GetRiseFromRPM();

	// BrnClutchControl.cpp:623
	void UpdateDamagedEngine(float32_t);

	// BrnClutchControl.cpp:676
	void GenerateDamagedWindow();

}

// BrnClutchControl.h:233
void BrnSound::Vehicles::Engines::AIClutchControl::~AIClutchControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnClutchControl.h:233
void BrnSound::Vehicles::Engines::AIClutchControl::AIClutchControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


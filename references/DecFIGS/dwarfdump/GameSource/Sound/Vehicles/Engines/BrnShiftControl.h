// BrnShiftControl.h:48
extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

// BrnShiftControl.h:205
extern const float32_t KF_MIN_RPM_FOR_SHIFT_FX;

// BrnShiftControl.h:206
extern const float32_t KF_DOWN_SHIFTING_REV_RAMP_TIME;

// BrnShiftControl.h:207
extern const float32_t KF_DOWN_SHFT_REATTACH_SCALE;

// BrnShiftControl.h:208
extern const float32_t KF_UP_SHIFTING_ENGAGING_REATTACH_MAX_TIME;

// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnVehicleState.h:27
		namespace Engines {
			// Declaration
			struct ShiftControl {
				// BrnShiftControl.h:98
				enum EShiftStage {
					E_SHFT_NONE = 0,
					E_SHFT_UP_DISENGAGE = 1,
					E_SHFT_UP_ENGAGING = 2,
					E_SHFT_UP_LFO = 3,
					E_SHFT_DOWN_DISENGAGE = 4,
					E_SHFT_DOWN_ENGAGING_RISE = 5,
					E_SHFT_DOWN_ENGAGING_FALL = 6,
					E_SHFT_DOWN_ENGAGING_REATTACH = 7,
				}

				// BrnShiftControl.h:248
				enum EPostShiftLFO {
					E_SHIFT_LFO_NONE = 0,
					E_SHIFT_LFO_ON = 1,
				}

				struct IShiftingActivator;

			}

		}

	}

}

// BrnShiftControl.h:47
struct BrnSound::Vehicles::Engines::ShiftControl : public BrnSound::Logic::BrnEffectControl {
protected:
	// BrnShiftControl.cpp:36
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

private:
	// BrnShiftControl.h:199
	BrnSound::Vehicles::Engines::PhysicsControl * mpPhysicsControl;

	// BrnShiftControl.h:200
	BrnSound::Vehicles::Engines::EngineControl * mpEngineControl;

	// BrnShiftControl.h:201
	BrnSound::Vehicles::Engines::HybridExhaustControl * mpHybridControl;

	// BrnShiftControl.cpp:26
	extern const float32_t KF_MIN_RPM_FOR_SHIFT_FX;

	// BrnShiftControl.cpp:27
	extern const float32_t KF_DOWN_SHIFTING_REV_RAMP_TIME;

	// BrnShiftControl.cpp:28
	extern const float32_t KF_DOWN_SHFT_REATTACH_SCALE;

	// BrnShiftControl.cpp:29
	extern const float32_t KF_UP_SHIFTING_ENGAGING_REATTACH_MAX_TIME;

	// BrnShiftControl.h:212
	bool mbNeed_ShiftGearSnd;

	// BrnShiftControl.h:213
	bool mbNeed_DisengageSnd;

	// BrnShiftControl.h:214
	bool mbNeed_EngageSnd;

	// BrnShiftControl.h:219
	shiftpattern mShiftingPatternData;

	// BrnShiftControl.h:221
	BrnSound::Vehicles::Engines::ShiftControl::EShiftStage meShiftState;

	// BrnShiftControl.h:222
	BrnSound::Vehicles::Engines::ShiftControl::EShiftStage meShiftStageChanged;

	// BrnShiftControl.h:254
	int32_t miRaceCarIndex;

	// BrnShiftControl.h:255
	BrnSound::Vehicles::Engines::ShiftControl::EPostShiftLFO meShift_LFO;

	// BrnShiftControl.h:257
	float32_t mfVOL_LFO_AMP;

	// BrnShiftControl.h:258
	float32_t mfVOL_LFO_FRQ;

	// BrnShiftControl.h:260
	float32_t mfRPM_LFO_AMP;

	// BrnShiftControl.h:261
	float32_t mfRPM_LFO_FRQ;

	// BrnShiftControl.h:263
	InterpolateLine mInterpRPM_LFODecay;

	// BrnShiftControl.h:264
	InterpolateLine mInterpVol_LFODecay;

	// BrnShiftControl.h:267
	float32_t mfRPMAtShift;

	// BrnShiftControl.h:268
	float32_t mfLastUpShift;

	// BrnShiftControl.h:270
	BrnSound::Vehicles::Engines::ShiftControl::IShiftingActivator * mpShiftingActivator;

	// BrnShiftControl.h:273
	InterpolateLine mInterpShiftThrottle;

	// BrnShiftControl.h:274
	InterpolateLine mInterpShiftRPM;

	// BrnShiftControl.h:275
	InterpolateLine mInterpShiftVol;

public:
	void ShiftControl(const ShiftControl &);

	// BrnShiftControl.cpp:36
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnShiftControl.cpp:36
	virtual const char * GetTypeName() const;

	// BrnShiftControl.h:48
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnShiftControl.cpp:36
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// BrnShiftControl.h:310
	void ShiftControl();

	// BrnShiftControl.cpp:55
	virtual void ~ShiftControl();

	// BrnShiftControl.cpp:77
	virtual int32_t GetController(int32_t);

	// BrnShiftControl.cpp:115
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnShiftControl.cpp:156
	virtual bool Attach();

	// BrnShiftControl.cpp:183
	virtual void SetupLoadData();

	// BrnShiftControl.cpp:212
	virtual void UpdateParams(float32_t);

	// BrnShiftControl.cpp:352
	virtual void ProcessUpdate();

	// BrnShiftControl.h:329
	bool IsActive();

	// BrnShiftControl.h:367
	float32_t GetShiftingRPM();

	// BrnShiftControl.h:373
	float32_t GetShiftingThrottle();

	// BrnShiftControl.h:380
	float32_t GetShiftingVolume();

	// BrnShiftControl.h:354
	BrnSound::Vehicles::Engines::ShiftControl::EShiftStage GetShiftingState();

	// BrnShiftControl.h:361
	BrnSound::Vehicles::Engines::ShiftControl::EShiftStage GetShiftingStateChange();

	// BrnShiftControl.h:390
	float32_t GetVolLFO_Amplitude();

	// BrnShiftControl.h:396
	float32_t GetVolLFO_Frequency();

	// BrnShiftControl.h:402
	float32_t GetRPM_LFO_Amplitude();

	// BrnShiftControl.h:408
	float32_t GetRPM_LFO_Frequncy();

	// BrnShiftControl.h:414
	float32_t GetLastUpShiftTime();

	// BrnShiftControl.h:336
	bool IsUpshifting();

	// BrnShiftControl.h:345
	bool IsDownShifting();

	// BrnShiftControl.cpp:371
	void BeginUpShift(BrnSound::Vehicles::Engines::ShiftControl::IShiftingActivator *);

	// BrnShiftControl.cpp:415
	void BeginDownShift(BrnSound::Vehicles::Engines::ShiftControl::IShiftingActivator *);

private:
	// BrnShiftControl.cpp:469
	// Declaration
	void UpdateGearShiftState(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnShiftControl.cpp:471
		using namespace CgsSound::Utils;

	}

	// BrnShiftControl.cpp:671
	void EndShifting();

	// BrnShiftControl.cpp:758
	void PostShiftFX_Init();

	// BrnShiftControl.cpp:694
	void PostShiftFX_Update(float32_t);

	// BrnShiftControl.cpp:733
	void PostShiftFX_End();

	// BrnShiftControl.cpp:815
	void UpdateThrottle(float32_t);

	// BrnShiftControl.cpp:855
	void UpdateRPM(float32_t);

}

// BrnShiftControl.h:153
struct BrnSound::Vehicles::Engines::ShiftControl::IShiftingActivator {
	int (*)(...) * _vptr.IShiftingActivator;

public:
	void IShiftingActivator();

	void IShiftingActivator(const IShiftingActivator &);

	// BrnShiftControl.h:157
	virtual float32_t GetStartRPM();

	// BrnShiftControl.h:161
	virtual float32_t GetTargetRPM();

	// BrnShiftControl.h:166
	virtual float32_t GetRiseFromRPM();

}

// BrnShiftControl.h:153
void BrnSound::Vehicles::Engines::ShiftControl::IShiftingActivator::IShiftingActivator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


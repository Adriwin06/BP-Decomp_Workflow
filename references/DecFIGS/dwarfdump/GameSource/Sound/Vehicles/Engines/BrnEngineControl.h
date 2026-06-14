// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnVehicleState.h:27
		namespace Engines {
			// Declaration
			struct EngineControl {
			public:
				// BrnEngineControl.h:263
				void GenerateEngineBundlePath(const char *, char *);

			}

		}

	}

}

// BrnEngineControl.h:53
extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnVehicleState.h:27
		namespace Engines {
			// Declaration
			struct EngineControl {
				// BrnEngineControl.h:202
				enum eRedlingState {
					E_REDLINING_STATE_OFF = 0,
					E_REDLINING_STATE_HIGH = 1,
					E_REDLINING_STATE_LOW = 2,
				}

				// BrnEngineControl.h:225
				enum eDistortionState {
					E_DISTORTION_NONE = 0,
					E_DISTORTION_SLOW_ON = 1,
					E_DISTORTION_FAST_ON = 2,
					E_DISTORTION_INSTANT_ON = 3,
				}

			}

		}

		// BrnEngineControl.h:29
		namespace Wheels {
			struct SkidEffect;

			struct JunkyardInAirEffect;

			struct AISkidEffect;

			struct AIWheelControl;

			struct TrafficInAir;

		}

	}

}

// BrnEngineControl.h:51
struct BrnSound::Vehicles::Engines::EngineControl : public BrnSound::Vehicles::Engines::ShiftControl::IShiftingActivator {
protected:
	// BrnEngineControl.cpp:58
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

private:
	// BrnEngineControl.h:132
	BrnSound::Vehicles::Engines::PhysicsControl * mpPhysicsControl;

	// BrnEngineControl.h:133
	BrnSound::Vehicles::Engines::ShiftControl * mpShiftControl;

	// BrnEngineControl.h:134
	ClutchControl * mpClutchControl;

	// BrnEngineControl.h:135
	Car3DControl * mpCar3DControl;

	// BrnEngineControl.h:136
	BrnSound::Vehicles::Wheels::WheelControl * mpWheelControl;

	// BrnEngineControl.h:141
	DataPoint<float32_t> mfAudioRpm;

	// BrnEngineControl.h:142
	DataPoint<float32_t> mfAudioThrottle;

	// BrnEngineControl.h:143
	DataPoint<float32_t> mfAudioEngineVolume;

	// BrnEngineControl.h:144
	InterpolateLine mAudioPitch;

	// BrnEngineControl.h:145
	InterpolateLine mAudioDistortion;

	// BrnEngineControl.h:176
	bool mbClutchStateOn;

	// BrnEngineControl.h:193
	float32_t mfVOL_LFO;

	// BrnEngineControl.h:194
	float32_t mfRPM_LFO;

	// BrnEngineControl.h:196
	float32_t mfAngleRPM_LFO;

	// BrnEngineControl.h:197
	float32_t mfAngleVOL_LFO;

	// BrnEngineControl.h:209
	BrnSound::Vehicles::Engines::EngineControl::eRedlingState meRedLiningState;

	// BrnEngineControl.h:211
	float32_t mfRedlingRPMOffset;

	// BrnEngineControl.h:212
	float32_t mfRedlingVolumeScale;

	// BrnEngineControl.h:213
	float32_t mfRedliningTime;

	// BrnEngineControl.h:233
	BrnSound::Vehicles::Engines::EngineControl::eDistortionState meDistortionState;

	// BrnEngineControl.h:236
	float32_t mfRPMRamping;

public:
	void EngineControl(const EngineControl &);

	// BrnEngineControl.cpp:58
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnEngineControl.cpp:58
	virtual const char * GetTypeName() const;

	// BrnEngineControl.h:53
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnEngineControl.cpp:58
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// BrnEngineControl.cpp:77
	void EngineControl();

	// BrnEngineControl.cpp:107
	virtual void ~EngineControl();

	// BrnEngineControl.cpp:365
	virtual void UpdateParams(float32_t);

	// BrnEngineControl.cpp:126
	virtual int32_t GetController(int32_t);

	// BrnEngineControl.cpp:157
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnEngineControl.cpp:213
	virtual bool Attach();

	// BrnEngineControl.h:290
	DataPoint<float32_t> & GetAudioThrottle();

	// BrnEngineControl.h:298
	DataPoint<float32_t> & GetAudioEngVolume();

	// BrnEngineControl.h:283
	DataPoint<float32_t> & GetAudioRPM();

	// BrnEngineControl.h:305
	float32_t GetAudioPitch();

	// BrnEngineControl.h:313
	float32_t GetAudioDistorion() const;

	// BrnEngineControl.h:322
	const InterpolateLine & GetAudioDistorionInterpolater() const;

	// BrnEngineControl.h:263
	void GenerateEngineBundlePath(const char *, char *);

	// BrnEngineControl.h:273
	void GenerateEngineRegistryResourceName(const char *, char *);

	// BrnEngineControl.h:328
	bool GetClutchState() const;

private:
	// BrnEngineControl.cpp:624
	virtual void UpdateRPM(float32_t);

	// BrnEngineControl.cpp:716
	virtual void UpdateThrottle(float32_t);

	// BrnEngineControl.cpp:790
	virtual void UpdateVolume(float32_t);

	// BrnEngineControl.cpp:595
	virtual void UpdateEnginePitch(float32_t);

	// BrnEngineControl.cpp:539
	virtual void UpdateDistortion(float32_t);

	// BrnEngineControl.cpp:269
	virtual void UpdateRedLiningRPM(float32_t);

	// BrnEngineControl.cpp:428
	void UpdateClutchState();

	// BrnEngineControl.cpp:447
	bool ShouldTurnOnClutch(float32_t);

	// BrnEngineControl.cpp:481
	virtual void UpdateEngineLFO(float32_t);

public:
	// BrnEngineControl.cpp:834
	virtual float32_t GetTargetRPM();

	// BrnEngineControl.h:251
	virtual float32_t GetRiseFromRPM();

	// BrnEngineControl.h:254
	virtual float32_t GetStartRPM();

}


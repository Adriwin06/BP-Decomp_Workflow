// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnEngineControl.h:29
		namespace Wheels {
			// Declaration
			struct RoadnoiseEffect {
				// BrnRoadNoise.h:90
				struct TransitionSound {
					// BrnRoadNoise.h:101
					CgsSound::Logic::VoiceWrapper mTransitionVoice;

					// BrnRoadNoise.h:102
					BrnSound::Vehicles::Wheels::WheelControl::EWheelSide meSide;

				public:
					// BrnRoadNoise.h:91
					void Construct();

					// BrnRoadNoise.h:96
					void Release();

				}

				// BrnRoadNoise.h:125
				struct TransitionEnvelope {
					// BrnRoadNoise.h:126
					PathLine<2u> mManilla;

					// BrnRoadNoise.h:127
					DataPoint<float32_t> mVolume;

				public:
					// BrnRoadNoise.h:129
					TransitionEnvelope();

					// BrnRoadNoise.h:137
					float32_t Update(float32_t);

					// BrnRoadNoise.h:148
					void Setup(float32_t, float32_t, float32_t);

				}

			}

		}

	}

}

// BrnRoadNoise.h:36
struct BrnSound::Vehicles::Wheels::RoadnoiseEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnRoadNoise.cpp:35
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnRoadNoise.h:157
	BrnSound::Vehicles::Wheels::WheelControl * mpWheelControl;

	// BrnRoadNoise.h:158
	BrnSound::Vehicles::Engines::PhysicsControl * mpPhysicsControl;

	// BrnRoadNoise.h:160
	extern const uint8_t KI_NUMBER_OF_TRANSITION_VOICES = 3;

	// BrnRoadNoise.h:162
	float32_t[2] mafLoopBaseVolume;

	// BrnRoadNoise.h:163
	BrnSound::Vehicles::Wheels::RoadnoiseEffect::TransitionEnvelope[2] maLoopEnvelope;

	// BrnRoadNoise.h:164
	CgsSound::Logic::VoiceWrapper[2] mRoadNoiseVoice;

	// BrnRoadNoise.h:165
	uint8_t[2] muSurfaceID;

	// BrnRoadNoise.h:166
	DataPoint<int32_t>[2] muRoadnoiseLoop;

	// BrnRoadNoise.h:168
	BrnSound::Vehicles::Wheels::RoadnoiseEffect::TransitionSound[3] mTransitionsSounds;

	// BrnRoadNoise.h:169
	uint8_t miLastVoiceUsed;

	// BrnRoadNoise.h:171
	surfacelist mSurfaceList;

public:
	void RoadnoiseEffect(const RoadnoiseEffect &);

	// BrnRoadNoise.cpp:35
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnRoadNoise.cpp:35
	virtual const char * GetTypeName() const;

	// BrnRoadNoise.h:37
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnRoadNoise.cpp:35
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnRoadNoise.h:189
	void RoadnoiseEffect();

	// BrnRoadNoise.cpp:61
	virtual void ~RoadnoiseEffect();

	// BrnRoadNoise.cpp:78
	virtual int32_t GetController(int32_t);

	// BrnRoadNoise.cpp:114
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnRoadNoise.cpp:145
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRoadNoise.cpp:147
		using namespace rw::math;

	}

	// BrnRoadNoise.cpp:268
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRoadNoise.cpp:279
		using namespace SendIndexes::AEMS_surface_class;

		// BrnRoadNoise.cpp:280
		using namespace ParameterIndexes::AEMS_surface_class;

	}

	// BrnRoadNoise.cpp:372
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnRoadNoise.cpp:374
		using namespace CgsSound::Logic;

		// BrnRoadNoise.cpp:375
		using namespace CgsSound::Playback;

		// BrnRoadNoise.cpp:420
		using namespace SendIndexes::AEMS_surface_class;

	}

	// BrnRoadNoise.cpp:443
	virtual bool Detach();

private:
	// BrnRoadNoise.cpp:239
	void PlayTransitionSound(BrnSound::Vehicles::Wheels::WheelControl::EWheelSide, uint8_t, uint8_t);

	// BrnRoadNoise.cpp:501
	void DrawDebug() const;

}

// BrnRoadNoise.h:160
extern const uint8_t KI_NUMBER_OF_TRANSITION_VOICES = 3;


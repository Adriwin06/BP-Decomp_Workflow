// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnVehicleState.h:27
		namespace Engines {
			// Declaration
			struct DualGinsuEffect {
				// BrnDualGinsuEffect.h:120
				struct LoopOutputs {
					// BrnDualGinsuEffect.h:123
					enum EOutput {
						E_UNKNOWN = 0,
						E_GAIN = 1,
						E_PITCH = 2,
						E_MAX_OUTPUTS = 3,
					}

				private:
					// BrnDualGinsuEffect.h:160
					float32_t[3] mafData;

				public:
					// BrnDualGinsuEffect.h:121
					LoopOutputs();

					// BrnDualGinsuEffect.h:135
					bool Update(float32_t, float32_t, const Partial &);

					// BrnDualGinsuEffect.h:140
					float32_t GetOutput(BrnSound::Vehicles::Engines::DualGinsuEffect::LoopOutputs::EOutput);

					// BrnDualGinsuEffect.h:143
					void Clear();

				private:
					// BrnDualGinsuEffect.h:152
					// Declaration
					bool UpdateGainGraph(float32_t, const Graph &) {
						// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
						// BrnDualGinsuEffect.cpp:1068
						using namespace rw::math::fpu;

					}

					// BrnDualGinsuEffect.h:157
					void UpdatePitchGraph(float32_t, const Graph &);

				}

				// BrnDualGinsuEffect.h:164
				enum EDualGinsuPrepareState {
					E_GINSU_PREPARE_STATE_NONE = 0,
					E_GINSU_PREPARE_STATE_INITIALIZE_SUBMIX = 1,
					E_GINSU_PREPARE_STATE_WAIT_FOR_CREATE = 2,
					E_GINSU_PREPARE_STATE_CREATE_VOICES = 3,
					E_GINSU_PREPARE_STATE_VOICES_ARE_PLAYING = 4,
					E_GINSU_PREPARE_STATE_FINISHED = 5,
				}

			}

			// BrnDualGinsuEffect.cpp:29
			using namespace CgsSound::Io;

			// BrnDualGinsuEffect.cpp:30
			using namespace CgsSound::Logic;

			// BrnDualGinsuEffect.cpp:31
			using namespace CgsSound::Playback;

			// BrnDualGinsuEffect.cpp:35
			extern int32_t KI_DEBUG_PITCH_BELOW_IDLE_DECEL_GINSU;

			// BrnDualGinsuEffect.cpp:37
			extern int32_t KI_DEBUG_PRINT_RPM_OUTPUT;

			// BrnDualGinsuEffect.cpp:38
			extern int32_t KI_DEBUG_PRINT_LOOP_OUTPUT;

			// BrnDualGinsuEffect.cpp:39
			extern int32_t KI_DEBUG_DUMP_LOOP_DATA;

			// BrnDualGinsuEffect.cpp:41
			extern float32_t KF_MIN_PITCH;

			// BrnDualGinsuEffect.cpp:42
			extern float32_t KF_MAX_PITCH;

			// BrnDualGinsuEffect.cpp:44
			extern float32_t KF_VOLUME_TOLERANE;

			// BrnDualGinsuEffect.cpp:46
			extern bool KB_GINSU_PAUSE_ENABLED;

			// BrnDualGinsuEffect.cpp:48
			extern bool KF_PANNING_ON;

			// BrnDualGinsuEffect.cpp:49
			extern float32_t KF_PANNING_DISTANCE;

			// BrnDualGinsuEffect.cpp:50
			extern float32_t KF_PANNING_SIZE;

			// BrnDualGinsuEffect.cpp:51
			extern float32_t KF_PANNING_TWIST;

			// BrnDualGinsuEffect.cpp:52
			extern float32_t KF_PANNING_CENTRELEVEL;

			// BrnDualGinsuEffect.cpp:53
			extern float32_t KF_PANNING_MAINLEVEL;

			// BrnDualGinsuEffect.cpp:54
			extern float32_t KF_PANNING_LFELEVEL;

			// BrnDualGinsuEffect.cpp:56
			extern float32_t KF_Default_DistortionInputGain;

			// BrnDualGinsuEffect.cpp:57
			extern float32_t KF_Default_DistortionMakeUpGain;

			// BrnDualGinsuEffect.cpp:58
			extern float32_t KF_Default_DistortionOrder;

			// BrnDualGinsuEffect.cpp:59
			extern float32_t KF_Default_DistortionThreshold;

			// BrnDualGinsuEffect.cpp:60
			extern float32_t KF_Default_DistortionFiddle;

			// BrnDualGinsuEffect.cpp:62
			extern int32_t KI_DEBUG_SPEW_AI_ENGINE_INFO;

			// BrnDualGinsuEffect.cpp:63
			extern float32_t KF_DEBUG_SHUFFLE_PITCH;

			// BrnDualGinsuEffect.cpp:65
			extern float32_t KF_MAX_REVERSE_SPEED;

			// BrnDualGinsuEffect.cpp:66
			extern float32_t KF_MIN_REVERSE_PITCH;

			// BrnDualGinsuEffect.cpp:67
			extern float32_t KF_MAX_REVERSE_PITCH;

			// BrnDualGinsuEffect.cpp:70
			const Name K_DefaultSendName;

			// BrnDualGinsuEffect.cpp:71
			const Name K_GinsuSlotName;

			// BrnDualGinsuEffect.cpp:73
			const Name K_PanningAngle;

			// BrnDualGinsuEffect.cpp:74
			const Name K_PanningDistance;

			// BrnDualGinsuEffect.cpp:75
			const Name K_PanningSize;

			// BrnDualGinsuEffect.cpp:76
			const Name K_PanningTwist;

			// BrnDualGinsuEffect.cpp:77
			const Name K_PanningCentreLevel;

			// BrnDualGinsuEffect.cpp:78
			const Name K_PanningMainLevel;

			// BrnDualGinsuEffect.cpp:79
			const Name K_PanningLfeLevel;

			// BrnDualGinsuEffect.cpp:82
			const Name K_SimplePanningAzimuth;

			// BrnDualGinsuEffect.cpp:83
			const Name K_SimplePanningRadius;

			// BrnDualGinsuEffect.cpp:84
			const Name K_SimplePanningCentreLevel;

			// BrnDualGinsuEffect.cpp:85
			const Name K_SimplePanningMainLevel;

			// BrnDualGinsuEffect.cpp:86
			const Name K_SimplePanningLfeLevel;

			// BrnDualGinsuEffect.cpp:88
			const Name K_REVERSE_WHINE_NAME;

			// BrnDualGinsuEffect.cpp:90
			const Name K_CutoffFreq;

			// BrnDualGinsuEffect.cpp:92
			const Name K_LoopSendName;

			// BrnDualGinsuEffect.cpp:93
			const Name K_ReverbSendName;

			// BrnDualGinsuEffect.cpp:95
			const Name K_VoiceSpecName;

			// BrnDualGinsuEffect.cpp:99
			const Name K_LowShelfFreq;

			// BrnDualGinsuEffect.cpp:100
			const Name K_LowShelfGain;

			// BrnDualGinsuEffect.cpp:102
			const Name K_HighShelfFreq;

			// BrnDualGinsuEffect.cpp:103
			const Name K_HighShelfGain;

			// BrnDualGinsuEffect.cpp:105
			const Name K_PeakingFreq;

			// BrnDualGinsuEffect.cpp:106
			const Name K_PeakingGain;

			// BrnDualGinsuEffect.cpp:107
			const Name K_PeakingQ;

			// BrnDualGinsuEffect.cpp:271
			extern float32_t KF_HARDCODE_RPM;

			// BrnDualGinsuEffect.cpp:272
			extern float32_t KF_GINSU_PITCH_CORRETION;

		}

	}

}

// BrnDualGinsuEffect.cpp:1030
void BrnSound::Vehicles::Engines::DualGinsuEffect::LoopOutputs::Update(float32_t  lfRpm, float32_t  lfAccelerator, const const Partial &  lPartial) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDualGinsuEffect.cpp:1066
void BrnSound::Vehicles::Engines::DualGinsuEffect::LoopOutputs::UpdateGainGraph(float32_t  lfInput, const const Graph &  lGraph) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDualGinsuEffect.cpp:1078
		uint8_t i;

		// BrnDualGinsuEffect.cpp:1089
		float32_t lfDeltaX;

		// BrnDualGinsuEffect.cpp:1090
		float32_t lfResult;

	}
}

// BrnDualGinsuEffect.cpp:1124
void BrnSound::Vehicles::Engines::DualGinsuEffect::LoopOutputs::UpdatePitchGraph(float32_t  lfInput, const const Graph &  lGraph) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDualGinsuEffect.cpp:1131
		float32_t lfDeltaX;

		// BrnDualGinsuEffect.cpp:1132
		float32_t lfResult;

	}
}


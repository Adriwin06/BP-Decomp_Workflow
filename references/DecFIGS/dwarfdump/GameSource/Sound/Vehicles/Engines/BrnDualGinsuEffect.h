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

		}

	}

}

// BrnDualGinsuEffect.h:278
struct BrnSound::Vehicles::Engines::DualGinsuExhaustEffect : public BrnSound::Vehicles::Engines::DualGinsuEffect {
protected:
	// BrnDualGinsuEffect.cpp:117
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

	// Unknown accessibility
	// BrnDualGinsuEffect.h:307
	enum {
		E_CONSTRUCTED = 0,
		E_ATTACHING_BASE_CLASS = 1,
		E_CONSTRUCTING_VOICE = 2,
		E_ATTACHED = 3,
		E_DETACHING_BASE_CLASS = 4,
		E_DETACHED = 5,
		E_STATE_COUNT = 6,
	}

private:
	// BrnDualGinsuEffect.h:319
	DualGinsuExhaustEffect::enumeration  meState;

	// BrnDualGinsuEffect.h:321
	CgsSound::Logic::VoiceWrapper mReverseWhineVoice;

public:
	void DualGinsuExhaustEffect(const DualGinsuExhaustEffect &);

	// BrnDualGinsuEffect.cpp:117
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnDualGinsuEffect.cpp:117
	virtual const char * GetTypeName() const;

	// BrnDualGinsuEffect.h:279
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnDualGinsuEffect.cpp:117
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnDualGinsuEffect.h:336
	void DualGinsuExhaustEffect();

	// BrnDualGinsuEffect.cpp:1247
	virtual int32_t GetController(int32_t);

	// BrnDualGinsuEffect.cpp:1282
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnDualGinsuEffect.cpp:1438
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDualGinsuEffect.cpp:1440
		using namespace SendIndexes::LoopVoiceSpec;

		// BrnDualGinsuEffect.cpp:1441
		using namespace ParameterIndexes::LoopVoiceSpec;

	}

	// BrnDualGinsuEffect.cpp:1325
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDualGinsuEffect.cpp:1347
		using namespace ParameterIndexes::LoopVoiceSpec;

		// BrnDualGinsuEffect.cpp:1348
		using namespace SendIndexes::LoopVoiceSpec;

	}

	// BrnDualGinsuEffect.cpp:1391
	virtual bool Detach();

	virtual void ~DualGinsuExhaustEffect();

}

// BrnDualGinsuEffect.h:43
struct BrnSound::Vehicles::Engines::DualGinsuEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnDualGinsuEffect.cpp:113
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

	// Unknown accessibility
	// BrnDualGinsuEffect.h:48
	extern const int32_t KI_LOOP_VOICE_COUNT = 3;

	// Unknown accessibility
	// BrnDualGinsuEffect.h:49
	extern const uint32_t KI_MAX_LOOPS = 10;

	// BrnDualGinsuEffect.h:102
	BrnSound::Vehicles::Engines::HybridExhaustControl * mpHybridControl;

	// BrnDualGinsuEffect.h:103
	BrnSound::Vehicles::Engines::PhysicsControl * mpPhysicsControl;

	// BrnDualGinsuEffect.h:104
	BrnSound::Vehicles::Engines::EngineControl * mpEngineControl;

	// BrnDualGinsuEffect.h:174
	BrnSound::Vehicles::Engines::DualGinsuEffect::EDualGinsuPrepareState meDualGinsuPrepareState;

	// BrnDualGinsuEffect.h:201
	CgsSound::Logic::Voice[3] mLoopModelVoice;

	// BrnDualGinsuEffect.h:202
	int32_t[3] maiVoiceToPartial;

	// BrnDualGinsuEffect.h:203
	int32_t[10] maiPartialToVoice;

	// BrnDualGinsuEffect.h:205
	BrnSound::Vehicles::Engines::DualGinsuEffect::LoopOutputs[10] mLoopModelOutput;

	// BrnDualGinsuEffect.h:206
	uint32_t miNumberOfLoops;

	// BrnDualGinsuEffect.h:208
	Content[10] maLoopContentSpecs;

	// BrnDualGinsuEffect.h:209
	const CgsSound::Logic::Content *[10] mapLoopContentSpecs;

	// BrnDualGinsuEffect.h:212
	CgsSound::Logic::VoiceWrapper mAccelGinsuVoice;

	// BrnDualGinsuEffect.h:213
	CgsSound::Logic::VoiceWrapper mDecelGinsuVoice;

	// BrnDualGinsuEffect.h:216
	CgsSound::Logic::Voice mCarSubmix;

	// BrnDualGinsuEffect.h:217
	CgsSound::Logic::Voice mAICarReverbSubmix;

	// BrnDualGinsuEffect.h:218
	Command::QueueElement mSubmixIdent;

	// BrnDualGinsuEffect.h:219
	int8_t miCarSubmixSend01Index;

	// BrnDualGinsuEffect.h:220
	int8_t miCarSubmixReverbIndex;

	// BrnDualGinsuEffect.h:223
	int8_t miCarSubmixPanningAngleIndex;

	// BrnDualGinsuEffect.h:224
	int8_t miCarSubmixPanningDistanceIndex;

	// BrnDualGinsuEffect.h:225
	int8_t miCarSubmixPanningSizeIndex;

	// BrnDualGinsuEffect.h:226
	int8_t miCarSubmixPanningTwistIndex;

	// BrnDualGinsuEffect.h:227
	int8_t miCarSubmixPanningCentreLevelIndex;

	// BrnDualGinsuEffect.h:228
	int8_t miCarSubmixPanningMainLevelIndex;

	// BrnDualGinsuEffect.h:229
	int8_t miCarSubmixPanningLfeLevelIndex;

	// BrnDualGinsuEffect.h:231
	int8_t miCarSubmixCutoffFreq;

	// BrnDualGinsuEffect.h:232
	int8_t miCarSubmixLowShelfFreq;

	// BrnDualGinsuEffect.h:233
	int8_t miCarSubmixLowShelfGain;

	// BrnDualGinsuEffect.h:234
	int8_t miCarSubmixHighShelfFreq;

	// BrnDualGinsuEffect.h:235
	int8_t miCarSubmixHighShelfGain;

	// BrnDualGinsuEffect.h:236
	int8_t miCarSubmixPeakingFreq;

	// BrnDualGinsuEffect.h:237
	int8_t miCarSubmixPeakingGain;

	// BrnDualGinsuEffect.h:238
	int8_t miCarSubmixPeakingQ;

	// BrnDualGinsuEffect.h:243
	ResourceHandle mLoopModelResource;

	// BrnDualGinsuEffect.h:244
	ResourceHandle mAccGinsuResource;

	// BrnDualGinsuEffect.h:245
	ResourceHandle mDecGinsuResource;

	// BrnDualGinsuEffect.h:246
	ResourceHandle mAttribs;

	// BrnDualGinsuEffect.h:249
	DataPoint<float32_t> mfAccelGinsuRPM;

	// BrnDualGinsuEffect.h:250
	DataPoint<float32_t> mfDecelGinsuRPM;

	// BrnDualGinsuEffect.h:251
	DataPoint<float32_t> mfLoopModelRPM;

	// BrnDualGinsuEffect.h:260
	float32_t mfMinRpm;

	// BrnDualGinsuEffect.h:261
	float32_t mfDecelMinRpm;

	// BrnDualGinsuEffect.h:263
	float32_t mfLowShelfFreq;

	// BrnDualGinsuEffect.h:264
	float32_t mfLowShelfGain;

	// BrnDualGinsuEffect.h:266
	float32_t mfHighShelfFreq;

	// BrnDualGinsuEffect.h:267
	float32_t mfHighShelfGain;

	// BrnDualGinsuEffect.h:269
	float32_t mfPeakingFreq;

	// BrnDualGinsuEffect.h:270
	float32_t mfPeakingGain;

	// BrnDualGinsuEffect.h:271
	float32_t mfPeakingQ;

	// BrnDualGinsuEffect.h:273
	int32_t miAIEngineIndex;

public:
	void DualGinsuEffect(const DualGinsuEffect &);

	// BrnDualGinsuEffect.cpp:113
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnDualGinsuEffect.cpp:113
	virtual const char * GetTypeName() const;

	// BrnDualGinsuEffect.h:44
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnDualGinsuEffect.cpp:113
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnDualGinsuEffect.h:342
	void DualGinsuEffect();

	// BrnDualGinsuEffect.cpp:135
	virtual void ~DualGinsuEffect();

	// BrnDualGinsuEffect.cpp:152
	virtual int32_t GetController(int32_t);

	// BrnDualGinsuEffect.cpp:189
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnDualGinsuEffect.cpp:454
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDualGinsuEffect.cpp:475
		using namespace ParameterIndexes::PlayerCarSubmixVoiceSpec;

		// BrnDualGinsuEffect.cpp:476
		using namespace SendIndexes::PlayerCarSubmixVoiceSpec;

		// BrnDualGinsuEffect.cpp:511
		using namespace ParameterIndexes::AICarSubmixVoiceSpec;

		// BrnDualGinsuEffect.cpp:512
		using namespace SendIndexes::AICarSubmixVoiceSpec;

	}

	// BrnDualGinsuEffect.cpp:424
	virtual void SetupLoadData();

	// BrnDualGinsuEffect.cpp:1158
	virtual bool Detach();

	// BrnDualGinsuEffect.cpp:230
	virtual void UpdateParams(float32_t);

	// BrnDualGinsuEffect.cpp:276
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDualGinsuEffect.cpp:330
		using namespace SendIndexes::SubmixVoiceSpec;

		// BrnDualGinsuEffect.cpp:331
		using namespace ParameterIndexes::AICarSubmixVoiceSpec;

	}

protected:
	// BrnDualGinsuEffect.cpp:806
	// Declaration
	void UpdateLoopModelParams() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDualGinsuEffect.cpp:850
		using namespace ParameterIndexes::LoopVoiceSpec;

		// BrnDualGinsuEffect.cpp:851
		using namespace SendIndexes::LoopVoiceSpec;

	}

	// BrnDualGinsuEffect.cpp:913
	// Declaration
	void UpdateAccelGinsu() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDualGinsuEffect.cpp:915
		using namespace ParameterIndexes::GinsuVoiceSpec;

		// BrnDualGinsuEffect.cpp:916
		using namespace SendIndexes::GinsuVoiceSpec;

	}

	// BrnDualGinsuEffect.cpp:972
	// Declaration
	void UpdateDecelGinsu() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDualGinsuEffect.cpp:974
		using namespace ParameterIndexes::GinsuVoiceSpec;

		// BrnDualGinsuEffect.cpp:975
		using namespace SendIndexes::GinsuVoiceSpec;

	}

	// BrnDualGinsuEffect.h:425
	void AttachPartialToVoice(int32_t, int32_t);

	// BrnDualGinsuEffect.h:439
	void DetachPartialFromVoice(int32_t);

	// BrnDualGinsuEffect.h:394
	int32_t GetFreeLoopModelVoice(float32_t);

}

// BrnDualGinsuEffect.h:278
void BrnSound::Vehicles::Engines::DualGinsuExhaustEffect::~DualGinsuExhaustEffect() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnDualGinsuEffect.h:48
extern const int32_t KI_LOOP_VOICE_COUNT = 3;

// BrnDualGinsuEffect.h:49
extern const uint32_t KI_MAX_LOOPS = 10;


// Cgs3dEffectControl.h:37
extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

// CgsCommon.h:25
namespace CgsSound {
	// CgsSoundLogicModuleIO.h:39
	namespace Logic {
		// Declaration
		struct Cgs3dEffectControl {
			// Cgs3dEffectControl.h:157
			struct DebugRendererMessage {
				// Cgs3dEffectControl.h:164
				float32_t mfYOffset;

				// Cgs3dEffectControl.h:165
				float32_t mfRadius;

				// Cgs3dEffectControl.h:166
				bool mbEnable;

			public:
				// Cgs3dEffectControl.h:158
				DebugRendererMessage();

			}

		}

	}

}

// Cgs3dEffectControl.h:36
struct CgsSound::Logic::Cgs3dEffectControl : public CgsSound::Logic::EffectControl {
protected:
	// Cgs3dEffectControl.cpp:36
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

	// Cgs3dEffectControl.h:141
	DataPoint<float32_t>[2] mfDistanceToMic;

	// Cgs3dEffectControl.h:142
	DataPoint<float32_t>[2] mfVelocityToMic;

	// Cgs3dEffectControl.h:144
	const rw::math::vpu::Vector3 * mpEmitterPosition;

	// Cgs3dEffectControl.h:145
	const rw::math::vpu::Vector3 * mpEmitterDirection;

	// Cgs3dEffectControl.h:147
	DataPoint<rw::math::vpu::Vector3> mEmitterPosition;

	// Cgs3dEffectControl.h:148
	DataPoint<rw::math::vpu::Vector3> mEmitterDirection;

	// Unknown accessibility
	// Cgs3dEffectControl.h:170
	CgsSound::Logic::Cgs3dEffectControl::DebugRendererMessage mDebugRenderingMessageData;

	// Unknown accessibility
	// Cgs3dEffectControl.cpp:45
	extern void (*)(const CgsSound::Logic::Cgs3dEffectControl *) spDebugRenderingFunction;

public:
	void Cgs3dEffectControl(const CgsSound::Logic::Cgs3dEffectControl &);

	// Cgs3dEffectControl.cpp:36
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// Cgs3dEffectControl.cpp:36
	virtual const char * GetTypeName() const;

	// Cgs3dEffectControl.h:37
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// Cgs3dEffectControl.cpp:36
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// Cgs3dEffectControl.cpp:51
	void Cgs3dEffectControl();

	// Cgs3dEffectControl.cpp:63
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// Cgs3dEffectControl.cpp:67
		using namespace Nicotine;

	}

	// Cgs3dEffectControl.cpp:305
	virtual void AttachEmitterPosition(const rw::math::vpu::Vector3 *);

	// Cgs3dEffectControl.cpp:313
	virtual void AttachEmitterDirection(const rw::math::vpu::Vector3 *);

	// Cgs3dEffectControl.h:187
	DataPoint<rw::math::vpu::Vector3> GetEmitterPosition() const;

	// Cgs3dEffectControl.h:193
	DataPoint<rw::math::vpu::Vector3> GetEmitterDirection() const;

	// Cgs3dEffectControl.h:203
	DataPoint<float32_t> GetVelocityToMic(CgsSound::Logic::MicrophoneSystem::EMicPositions) const;

	// Cgs3dEffectControl.h:213
	DataPoint<float32_t> GetDistanceToMic(CgsSound::Logic::MicrophoneSystem::EMicPositions) const;

	// Cgs3dEffectControl.cpp:289
	virtual void Notify(const CgsSound::Io::MessageHeader *);

	// Cgs3dEffectControl.cpp:331
	// Declaration
	virtual bool Detach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// Cgs3dEffectControl.cpp:342
		using namespace Nicotine;

	}

protected:
	// Cgs3dEffectControl.h:221
	void SetMixerInputValueUnbound(int32_t, int32_t);

	// Cgs3dEffectControl.cpp:123
	// Declaration
	void Generate3DParams(int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// Cgs3dEffectControl.cpp:125
		using namespace Nicotine;

	}

	// Cgs3dEffectControl.cpp:202
	// Declaration
	void UpdateDoppler(float32_t, int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// Cgs3dEffectControl.cpp:204
		using namespace Nicotine;

	}

	// Cgs3dEffectControl.cpp:166
	int32_t GetPanningAngle(MicrophoneSystem &, CgsSound::Logic::MicrophoneSystem::EMicPositions);

	// Cgs3dEffectControl.h:181
	Vector2 Flatten(Vector3);

public:
	virtual void ~Cgs3dEffectControl();

}

// Cgs3dEffectControl.h:36
void CgsSound::Logic::Cgs3dEffectControl::~Cgs3dEffectControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


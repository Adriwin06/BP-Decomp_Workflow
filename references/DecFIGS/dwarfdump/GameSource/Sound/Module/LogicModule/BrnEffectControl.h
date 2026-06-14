// BrnEffectControl.h:59
extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

// BrnEffectControl.h:102
extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

// BrnEffectControl.h:163
extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// Declaration
		struct Brn3DEffectControl {
			// BrnEffectControl.h:122
			struct DrawSphere {
				// BrnEffectControl.h:136
				float32_t mfHeightOffset;

				// BrnEffectControl.h:137
				float32_t mfRadius;

				// BrnEffectControl.h:138
				float32_t mfDurationVisible;

				// BrnEffectControl.h:139
				const char * mpDebugString;

			public:
				// BrnEffectControl.h:126
				void Construct();

				// BrnEffectControl.h:133
				void Construct(float32_t, float32_t, float32_t, const char *);

			}

		}

	}

}

// BrnEffectControl.h:158
struct BrnSound::Logic::Brn3DUserSpaceEffectControl : public BrnSound::Logic::Brn3DEffectControl {
protected:
	// BrnEffectControl.cpp:46
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

private:
	// BrnEffectControl.h:188
	const rw::math::vpu::Matrix44Affine * mpTransform;

	// BrnEffectControl.h:190
	Vector3 mPositionInUserSpace;

	// BrnEffectControl.h:191
	Vector3 mDirectionInUserSpace;

	// BrnEffectControl.h:193
	Vector3 mGeneratedPosition;

	// BrnEffectControl.h:194
	Vector3 mGeneratedDirection;

public:
	void Brn3DUserSpaceEffectControl(const Brn3DUserSpaceEffectControl &);

	// BrnEffectControl.cpp:46
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnEffectControl.cpp:46
	virtual const char * GetTypeName() const;

	// BrnEffectControl.h:163
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnEffectControl.cpp:46
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// BrnEffectControl.cpp:215
	void Brn3DUserSpaceEffectControl();

	// BrnEffectControl.h:168
	virtual void ~Brn3DUserSpaceEffectControl();

	// BrnEffectControl.cpp:318
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnEffectControl.cpp:320
		using namespace rw::math::vpu;

	}

	// BrnEffectControl.cpp:235
	virtual void AttachTransform(const rw::math::vpu::Matrix44Affine *);

	// BrnEffectControl.cpp:250
	// Declaration
	virtual void AttachEmitterPosition(const rw::math::vpu::Vector3 *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnEffectControl.cpp:252
		using namespace rw::math::vpu;

	}

	// BrnEffectControl.cpp:284
	// Declaration
	virtual void AttachEmitterDirection(const rw::math::vpu::Vector3 *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnEffectControl.cpp:286
		using namespace rw::math::vpu;

	}

}

// BrnEffectControl.h:100
struct BrnSound::Logic::Brn3DEffectControl : public Cgs3dEffectControl {
protected:
	// BrnEffectControl.cpp:42
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

private:
	// BrnEffectControl.h:149
	globalenginedata mEngineDataAtrib;

	// BrnEffectControl.h:152
	BrnSound::Logic::Brn3DEffectControl::DrawSphere mDrawSphere;

public:
	void Brn3DEffectControl(const Brn3DEffectControl &);

	void Brn3DEffectControl();

	// BrnEffectControl.cpp:42
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnEffectControl.cpp:42
	virtual const char * GetTypeName() const;

	// BrnEffectControl.h:102
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnEffectControl.cpp:42
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// BrnEffectControl.cpp:83
	virtual bool Prepare(CgsSound::Logic::State *);

	// BrnEffectControl.cpp:109
	virtual void UpdateParams(float32_t);

	// BrnEffectControl.h:206
	BrnSound::Module::SoundLogicModule * GetBrnLogicModule() const;

	// BrnEffectControl.cpp:147
	virtual void Notify(const CgsSound::Io::MessageHeader *);

	virtual void ~Brn3DEffectControl();

}

// BrnEffectControl.h:56
struct BrnSound::Logic::BrnEffectControl : public EffectControl {
protected:
	// BrnEffectControl.cpp:38
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

public:
	void BrnEffectControl(const BrnEffectControl &);

	// BrnEffectControl.cpp:38
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnEffectControl.cpp:38
	virtual const char * GetTypeName() const;

	// BrnEffectControl.h:59
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnEffectControl.cpp:38
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// BrnEffectControl.h:256
	void BrnEffectControl();

	// BrnEffectControl.cpp:66
	virtual void ~BrnEffectControl();

	// BrnEffectControl.h:214
	BrnSound::Module::SoundLogicModule * GetBrnLogicModule() const;

	// BrnEffectControl.h:220
	virtual void ResourcesAreReady();

	// BrnEffectControl.h:231
	virtual BrnSound::Logic::ResourceRegistrar & GetResourceRegistrar();

	// BrnEffectControl.h:239
	virtual bool Detach();

}

// BrnEffectControl.h:100
void BrnSound::Logic::Brn3DEffectControl::Brn3DEffectControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEffectControl.h:100
void BrnSound::Logic::Brn3DEffectControl::~Brn3DEffectControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


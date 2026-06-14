// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnDeformationEffect.h:49
		namespace Deformation {
			struct DeformationEffect;

		}

	}

}

// BrnDeformationEffect.h:54
struct BrnSound::Vehicles::Deformation::DeformationEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnDeformationEffect.cpp:41
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnDeformationEffect.h:87
	extern const uint32_t KU_AVERAGE_TERMS = 4;

	// BrnDeformationEffect.h:89
	DataPoint<bool> mbDeforming;

	// BrnDeformationEffect.h:90
	DataPoint<float32_t> mDeformAmount;

	// BrnDeformationEffect.h:91
	Average<4u,float32_t> mDeformDeltaAverage;

	// BrnDeformationEffect.h:94
	DataPoint<float32_t> mDeformIntensityLagged;

	// BrnDeformationEffect.h:95
	float32_t mfAemsIntensity;

	// BrnDeformationEffect.h:96
	InterpolateLine mFadeOut;

	// BrnDeformationEffect.h:97
	float32_t mfTimeDeforming;

	// BrnDeformationEffect.h:99
	BrnSound::Vehicles::Engines::PhysicsControl * mpPhysicsControl;

	// BrnDeformationEffect.h:100
	CgsSound::Logic::VoiceWrapper mPatchVoice;

public:
	void DeformationEffect(const DeformationEffect &);

	// BrnDeformationEffect.cpp:41
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnDeformationEffect.cpp:41
	virtual const char * GetTypeName() const;

	// BrnDeformationEffect.h:56
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnDeformationEffect.cpp:41
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnDeformationEffect.cpp:55
	void DeformationEffect();

	// BrnDeformationEffect.cpp:69
	virtual void ~DeformationEffect();

	// BrnDeformationEffect.cpp:85
	virtual int32_t GetController(int32_t);

	// BrnDeformationEffect.cpp:116
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnDeformationEffect.cpp:145
	virtual void SetupLoadData();

	// BrnDeformationEffect.cpp:161
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDeformationEffect.cpp:168
		using namespace CgsSound::Logic;

		// BrnDeformationEffect.cpp:169
		using namespace CgsSound::Playback;

		// BrnDeformationEffect.cpp:180
		using namespace SendIndexes::AEMS_crumple;

	}

	// BrnDeformationEffect.cpp:226
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnDeformationEffect.cpp:228
		using namespace BrnPhysics::Deformation;

		// BrnDeformationEffect.cpp:229
		using namespace rw::math::fpu;

		// BrnDeformationEffect.cpp:230
		using namespace CgsSound::Playback;

		// BrnDeformationEffect.cpp:231
		using namespace ParameterIndexes::AEMS_crumple;

		// BrnDeformationEffect.cpp:232
		using namespace SendIndexes::AEMS_crumple;

	}

	// BrnDeformationEffect.cpp:424
	virtual void ProcessUpdate();

	// BrnDeformationEffect.cpp:400
	virtual bool Detach();

}

// BrnDeformationEffect.h:87
extern const uint32_t KU_AVERAGE_TERMS = 4;


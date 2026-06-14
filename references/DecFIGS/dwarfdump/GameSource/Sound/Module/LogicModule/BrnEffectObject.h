// BrnEffectObject.h:54
extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnState.h:39
	namespace Logic {
		// Declaration
		struct BrnEffectObject {
			// BrnEffectObject.h:87
			struct SampleTag {
				// BrnEffectObject.h:91
				float32_t mfVolume;

				// BrnEffectObject.h:92
				int16_t miSampleIndex;

			public:
				// BrnEffectObject.h:89
				void Construct();

			}

		}

	}

}

// BrnEffectObject.h:51
struct BrnSound::Logic::BrnEffectObject : public EffectObject {
protected:
	// BrnEffectObject.cpp:33
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

public:
	void BrnEffectObject(const BrnEffectObject &);

	// BrnEffectObject.cpp:33
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnEffectObject.cpp:33
	virtual const char * GetTypeName() const;

	// BrnEffectObject.h:54
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnEffectObject.cpp:33
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnEffectObject.h:188
	void BrnEffectObject();

	// BrnEffectObject.cpp:55
	virtual void ~BrnEffectObject();

	// BrnEffectObject.h:125
	BrnSound::Module::SoundLogicModule * GetBrnLogicModule() const;

	// BrnEffectObject.h:139
	virtual void ResourcesAreReady();

	// BrnEffectObject.h:157
	virtual BrnSound::Logic::ResourceRegistrar & GetResourceRegistrar();

	// BrnEffectObject.h:171
	virtual bool Detach();

	// BrnEffectObject.h:207
	bool GetSampleTag(AttribSys::Enums::eSampleTags::eSampleTags, uint32_t, uint32_t, BrnSound::Logic::BrnEffectObject::SampleTag &) const;

}


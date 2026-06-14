// BrnScrapeEffect.h:36
struct BrnSound::Logic::Collision::ScrapeEffect : public BrnSound::Logic::BrnEffectObject {
protected:
	// BrnScrapeEffect.cpp:54
	extern ClassTypeInfo<CgsSound::Logic::EffectObject> sTypeInfo;

private:
	// BrnScrapeEffect.h:105
	float32_t mfScrapeStartTimeStamp;

	// BrnScrapeEffect.h:107
	float32_t mfParam_AEMS_pitch;

	// BrnScrapeEffect.h:108
	float32_t mfParam_AEMS_volume;

	// BrnScrapeEffect.h:109
	float32_t mfParam_AEMS_friction_stress;

	// BrnScrapeEffect.h:110
	float32_t mfParam_AEMS_normal_stress;

	// BrnScrapeEffect.h:111
	float32_t mfParam_AEMS_time_scraping;

	// BrnScrapeEffect.h:112
	float32_t mfParam_AEMS_material_a;

	// BrnScrapeEffect.h:113
	uint8_t miParam_AEMS_material_b;

	// BrnScrapeEffect.h:114
	float32_t mfParam_AEMS_is_Crashing;

	// BrnScrapeEffect.h:116
	BrnSound::Logic::Collision::Collision3DControl * mpCollision3DControl;

	// BrnScrapeEffect.h:117
	BrnSound::Logic::Collision::CollisionControl * mpCollisionControl;

	// BrnScrapeEffect.h:118
	CgsSound::Logic::VoiceWrapper mScrapeVoice;

	// BrnScrapeEffect.h:119
	bool mbPlaying;

public:
	void ScrapeEffect(const BrnSound::Logic::Collision::ScrapeEffect &);

	// BrnScrapeEffect.cpp:54
	virtual ClassTypeInfo<CgsSound::Logic::EffectObject> * GetTypeInfo() const;

	// BrnScrapeEffect.cpp:54
	virtual const char * GetTypeName() const;

	// BrnScrapeEffect.h:37
	ClassTypeInfo<CgsSound::Logic::EffectObject> * GetStaticTypeInfo();

	// BrnScrapeEffect.cpp:54
	CgsSound::Logic::EffectObject * CreateObject(uint32_t);

	// BrnScrapeEffect.h:135
	void ScrapeEffect();

	// BrnScrapeEffect.cpp:73
	virtual void ~ScrapeEffect();

	// BrnScrapeEffect.cpp:89
	virtual int32_t GetController(int32_t);

	// BrnScrapeEffect.cpp:123
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnScrapeEffect.cpp:516
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnScrapeEffect.cpp:518
		using namespace CgsSound::Logic;

		// BrnScrapeEffect.cpp:519
		using namespace CgsSound::Playback;

	}

	// BrnScrapeEffect.cpp:228
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnScrapeEffect.cpp:230
		using namespace rw::math;

	}

	// BrnScrapeEffect.cpp:470
	// Declaration
	virtual void ProcessUpdate() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnScrapeEffect.cpp:472
		using namespace ParameterIndexes::AEMS_ScrapeGranulator;

		// BrnScrapeEffect.cpp:473
		using namespace SendIndexes::AEMS_ScrapeGranulator;

	}

	// BrnScrapeEffect.cpp:544
	virtual bool Detach();

private:
	// BrnScrapeEffect.cpp:360
	float GetIntensity(BrnSound::Logic::Collision::CollisionState *, const ScrapeInfo &);

	// BrnScrapeEffect.cpp:427
	float GetGain() const;

	// BrnScrapeEffect.cpp:454
	float32_t GetPitch() const;

	// BrnScrapeEffect.cpp:158
	// Declaration
	uint8_t MapScrapeToMaterial(const ScrapeInfo &) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnScrapeEffect.cpp:160
		using namespace BrnWorld;

	}

}


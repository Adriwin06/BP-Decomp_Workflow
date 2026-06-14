// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnAmbienceEffect.h:50
		namespace Environment {
			// BrnEnclosureControl.h:66
			enum eTriggerPosition {
				E_TRIGGER_POSITION_AT_ENTITY = 0,
				E_TRIGGER_POSITION_AHEAD_OF_ENTITY = 1,
				E_TRIGGER_POSITION_COUNT = 2,
			}

		}

	}

}

// BrnEnclosureControl.h:85
struct BrnSound::Vehicles::Environment::EntityTriggerInfo {
private:
	// BrnEnclosureControl.h:138
	uint32_t muActiveTriggers;

	// BrnEnclosureControl.h:139
	uint32_t muPrevTriggers;

public:
	// BrnEnclosureControl.h:94
	void Reset();

	// BrnEnclosureControl.h:101
	bool HasChanged() const;

	// BrnEnclosureControl.h:108
	// Declaration
	BrnTrigger::GenericRegion::Type GetChangeType() const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnEnclosureControl.cpp:98
		using namespace BrnTrigger;

	}

	// BrnEnclosureControl.h:116
	void Update(const Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::SoundTriggerAction &);

	// BrnEnclosureControl.h:124
	bool IsTypeActive(BrnTrigger::GenericRegion::Type) const;

	// BrnEnclosureControl.h:132
	bool HasTypeChanged(BrnTrigger::GenericRegion::Type) const;

}

// BrnEnclosureControl.h:154
struct BrnSound::Vehicles::Environment::EnclosureControl : public BrnSound::Logic::BrnEffectControl {
protected:
	// BrnEnclosureControl.cpp:52
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

private:
	// BrnEnclosureControl.h:231
	EntityTriggerInfo[2] maTriggerInfo;

	// BrnEnclosureControl.h:233
	BrnSound::Vehicles::Engines::PhysicsControl * mpPhysicsControl;

	// BrnEnclosureControl.h:236
	float32_t mfTimeSinceTrigger;

public:
	void EnclosureControl(const BrnSound::Vehicles::Environment::EnclosureControl &);

	void EnclosureControl();

	// BrnEnclosureControl.cpp:52
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnEnclosureControl.cpp:52
	virtual const char * GetTypeName() const;

	// BrnEnclosureControl.h:158
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnEnclosureControl.cpp:52
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// BrnEnclosureControl.cpp:130
	virtual int32_t GetController(int32_t);

	// BrnEnclosureControl.cpp:159
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnEnclosureControl.cpp:190
	virtual void UpdateParams(float32_t);

	// BrnEnclosureControl.cpp:262
	// Declaration
	void ProcessTriggerAction(const Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>::SoundTriggerAction &, BrnSound::Vehicles::Environment::eTriggerPosition) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnEnclosureControl.cpp:264
		using namespace Logic::Passby;

	}

	// BrnEnclosureControl.cpp:327
	virtual bool Attach();

	// BrnEnclosureControl.cpp:359
	// Declaration
	BrnSound::Logic::Passby::PassbyStateManager::Passby::EePassbyTypes ConvertRegionTypeToPassby(BrnTrigger::GenericRegion::Type) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnEnclosureControl.cpp:361
		using namespace BrnTrigger;

	}

	// BrnEnclosureControl.h:259
	const EntityTriggerInfo & GetTriggerInfo(BrnSound::Vehicles::Environment::eTriggerPosition) const;

private:
	// BrnEnclosureControl.cpp:430
	void DrawDebug() const;

public:
	virtual void ~EnclosureControl();

}

// BrnEnclosureControl.h:154
void BrnSound::Vehicles::Environment::EnclosureControl::~EnclosureControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEnclosureControl.h:154
void BrnSound::Vehicles::Environment::EnclosureControl::EnclosureControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


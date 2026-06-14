// BrnSoundCommonSharedIO.h:26
namespace BrnSound {
	// BrnVehicleState.h:24
	namespace Vehicles {
		// BrnAmbienceEffect.h:50
		namespace Environment {
			// Declaration
			struct StaticPassbyControl {
				// BrnStaticPassbyControl.h:158
				struct PassbyHistory {
					// BrnStaticPassbyControl.h:175
					struct PassbyRecord {
						// BrnStaticPassbyControl.h:177
						Vector3 mvPosition;

						// BrnStaticPassbyControl.h:178
						float32_t mfTimeStamp;

					}

				private:
					// BrnStaticPassbyControl.h:184
					Array<BrnSound::Vehicles::Environment::StaticPassbyControl::PassbyHistory::PassbyRecord,5u> mPassbyRecords;

				public:
					// BrnStaticPassbyControl.h:162
					void Construct();

					// BrnStaticPassbyControl.h:166
					void Update(float32_t);

					// BrnStaticPassbyControl.h:170
					bool Record(Vector3);

				}

			}

		}

	}

}

// BrnStaticPassbyControl.h:77
struct BrnSound::Vehicles::Environment::StaticPassbyControl : public BrnSound::Logic::BrnEffectControl {
protected:
	// BrnStaticPassbyControl.cpp:48
	extern ClassTypeInfo<CgsSound::Logic::EffectControl> sTypeInfo;

private:
	// BrnStaticPassbyControl.h:154
	extern const uint32_t KI_NUMBER_OF_ELEMENTS = 5;

	// BrnStaticPassbyControl.h:189
	BrnSound::Vehicles::Environment::StaticPassbyControl::PassbyHistory[19] mafHistoryTimeouts;

	// BrnStaticPassbyControl.h:190
	BrnSound::Vehicles::Engines::PhysicsControl * mpPhysicsControl;

public:
	void StaticPassbyControl(const StaticPassbyControl &);

	void StaticPassbyControl();

	// BrnStaticPassbyControl.cpp:48
	virtual ClassTypeInfo<CgsSound::Logic::EffectControl> * GetTypeInfo() const;

	// BrnStaticPassbyControl.cpp:48
	virtual const char * GetTypeName() const;

	// BrnStaticPassbyControl.h:81
	ClassTypeInfo<CgsSound::Logic::EffectControl> * GetStaticTypeInfo();

	// BrnStaticPassbyControl.cpp:48
	CgsSound::Logic::EffectControl * CreateObject(uint32_t);

	// BrnStaticPassbyControl.cpp:74
	virtual int32_t GetController(int32_t);

	// BrnStaticPassbyControl.cpp:103
	virtual void AttachController(CgsSound::Logic::EffectBase *);

	// BrnStaticPassbyControl.cpp:134
	// Declaration
	virtual void UpdateParams(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnStaticPassbyControl.cpp:136
		using namespace Engines;

		// BrnStaticPassbyControl.cpp:137
		using namespace World;

	}

	// BrnStaticPassbyControl.cpp:170
	// Declaration
	virtual bool Attach() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnStaticPassbyControl.cpp:172
		using namespace AttribSys::Enums;

	}

private:
	// BrnStaticPassbyControl.cpp:203
	// Declaration
	void ProcessPassbys(Vector3, float32_t, const BrnSound::Vehicles::PlayerVehicleStateManager *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnStaticPassbyControl.cpp:205
		using namespace World;

	}

	// BrnStaticPassbyControl.cpp:241
	// Declaration
	void TriggerPassby(const StaticSoundEntity &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnStaticPassbyControl.cpp:243
		using namespace Logic::Passby;

		// BrnStaticPassbyControl.cpp:244
		using namespace AttribSys::Enums;

	}

	// BrnStaticPassbyControl.cpp:273
	// Declaration
	void UpdateHistory(float32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnStaticPassbyControl.cpp:275
		using namespace AttribSys::Enums;

	}

public:
	virtual void ~StaticPassbyControl();

}

// BrnStaticPassbyControl.h:77
void BrnSound::Vehicles::Environment::StaticPassbyControl::~StaticPassbyControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStaticPassbyControl.h:77
void BrnSound::Vehicles::Environment::StaticPassbyControl::StaticPassbyControl() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnStaticPassbyControl.h:154
extern const uint32_t KI_NUMBER_OF_ELEMENTS = 5;


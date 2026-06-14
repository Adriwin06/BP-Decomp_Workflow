// BrnResetPlayerDebugComponent.h:114
extern const int32_t KI_CAR_FILTER_COUNT = 10;

// BrnResetPlayerDebugComponent.h:117
extern const int32_t KI_LOCATION_TEXT_LENGTH = 64;

// BrnResetPlayerDebugComponent.h:118
extern const int32_t KI_CAR_TEXT_LENGTH = 64;

// BrnResetPlayerDebugComponent.h:119
extern const int32_t KI_MAX_CAR_NAME_COUNT = 96;

// BrnResetPlayerDebugComponent.h:120
extern const int32_t KI_MAX_CAR_VERSION_NAME_COUNT = 16;

// BrnResetPlayerDebugComponent.h:121
extern const int32_t KI_MAX_WHEEL_NAME_COUNT = 128;

// BrnResetPlayerDebugComponent.h:122
extern const int32_t KI_MAX_TELEPORT_LOCATION_COUNT = 128;

// BrnResetPlayerDebugComponent.h:56
struct BrnGameState::ResetPlayerDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnResetPlayerDebugComponent.h:114
	extern const int32_t KI_CAR_FILTER_COUNT = 10;

	// BrnResetPlayerDebugComponent.cpp:37
	extern const char *[10] KAPC_CAR_FILTER_STRINGS;

	// BrnResetPlayerDebugComponent.cpp:51
	extern const char *[10] KAPC_CAR_FILTER_PREFIXES;

	// BrnResetPlayerDebugComponent.h:117
	extern const int32_t KI_LOCATION_TEXT_LENGTH = 64;

	// BrnResetPlayerDebugComponent.h:118
	extern const int32_t KI_CAR_TEXT_LENGTH = 64;

	// BrnResetPlayerDebugComponent.h:119
	extern const int32_t KI_MAX_CAR_NAME_COUNT = 96;

	// BrnResetPlayerDebugComponent.h:120
	extern const int32_t KI_MAX_CAR_VERSION_NAME_COUNT = 16;

	// BrnResetPlayerDebugComponent.h:121
	extern const int32_t KI_MAX_WHEEL_NAME_COUNT = 128;

	// BrnResetPlayerDebugComponent.h:122
	extern const int32_t KI_MAX_TELEPORT_LOCATION_COUNT = 128;

	// BrnResetPlayerDebugComponent.h:124
	BrnGameState::GameStateModule * mpGameStateModule;

	// BrnResetPlayerDebugComponent.h:126
	StringList[128] maLocationNames;

	// BrnResetPlayerDebugComponent.h:127
	StringList[10] maCarFilterNames;

	// BrnResetPlayerDebugComponent.h:128
	StringList[96] maCarNames;

	// BrnResetPlayerDebugComponent.h:129
	StringList[16] maCarVersionNames;

	// BrnResetPlayerDebugComponent.h:130
	StringList[128] maWheelNames;

	// BrnResetPlayerDebugComponent.h:131
	CgsID[96] maCarIds;

	// BrnResetPlayerDebugComponent.h:132
	CgsID[16] maCarVersionIds;

	// BrnResetPlayerDebugComponent.h:134
	char[128][64] maLocationStrings;

	// BrnResetPlayerDebugComponent.h:135
	Vector3[128] maLocationPositions;

	// BrnResetPlayerDebugComponent.h:136
	Vector3[128] maLocationDirections;

	// BrnResetPlayerDebugComponent.h:137
	char[96][64] maCarStrings;

	// BrnResetPlayerDebugComponent.h:138
	char[16][64] maCarVersionStrings;

	// BrnResetPlayerDebugComponent.h:140
	int32_t miCurrentLocationIndex;

	// BrnResetPlayerDebugComponent.h:141
	int32_t miCurrentCarFilter;

	// BrnResetPlayerDebugComponent.h:142
	int32_t miCurrentCarIndex;

	// BrnResetPlayerDebugComponent.h:143
	int32_t miCurrentCarVersionIndex;

	// BrnResetPlayerDebugComponent.h:144
	int32_t miCurrentWheelIndex;

	// BrnResetPlayerDebugComponent.h:146
	bool mbShowCarInfo;

public:
	// BrnResetPlayerDebugComponent.cpp:73
	void Construct(BrnGameState::GameStateModule *);

	// BrnResetPlayerDebugComponent.cpp:95
	void Destruct();

protected:
	// BrnResetPlayerDebugComponent.cpp:109
	virtual const char * GetName() const;

	// BrnResetPlayerDebugComponent.cpp:121
	virtual void OnActivate();

	// BrnResetPlayerDebugComponent.cpp:259
	virtual void OnRegister();

	// BrnResetPlayerDebugComponent.cpp:267
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnResetPlayerDebugComponent.cpp:331
	void TeleportCar();

	// BrnResetPlayerDebugComponent.cpp:350
	void ChangeCar();

	// BrnResetPlayerDebugComponent.cpp:375
	void TeleportCarCallback(void *);

	// BrnResetPlayerDebugComponent.cpp:389
	void ChangeCarCallback(void *);

	// BrnResetPlayerDebugComponent.cpp:402
	void OnChangeCarFilter();

	// BrnResetPlayerDebugComponent.cpp:456
	void OnChangeCarFilterCallback(void *, void *);

	// BrnResetPlayerDebugComponent.cpp:469
	// Declaration
	void OnChangeCarSelection() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnResetPlayerDebugComponent.cpp:485
		using namespace CgsDev::Message;

	}

	// BrnResetPlayerDebugComponent.cpp:529
	void OnChangeCarSelectionCallback(void *, void *);

}

// BurnoutConstants.h:90
namespace BrnGameState {
	// Declaration
	struct ResetPlayerDebugComponent {
	public:
		ResetPlayerDebugComponent();

	private:
		// BrnResetPlayerDebugComponent.h:114
		extern const int32_t KI_CAR_FILTER_COUNT = 10;

		// BrnResetPlayerDebugComponent.h:117
		extern const int32_t KI_LOCATION_TEXT_LENGTH = 64;

		// BrnResetPlayerDebugComponent.h:118
		extern const int32_t KI_CAR_TEXT_LENGTH = 64;

		// BrnResetPlayerDebugComponent.h:119
		extern const int32_t KI_MAX_CAR_NAME_COUNT = 96;

		// BrnResetPlayerDebugComponent.h:120
		extern const int32_t KI_MAX_CAR_VERSION_NAME_COUNT = 16;

		// BrnResetPlayerDebugComponent.h:121
		extern const int32_t KI_MAX_WHEEL_NAME_COUNT = 128;

		// BrnResetPlayerDebugComponent.h:122
		extern const int32_t KI_MAX_TELEPORT_LOCATION_COUNT = 128;

	}

}

// BrnResetPlayerDebugComponent.h:56
void BrnGameState::ResetPlayerDebugComponent::ResetPlayerDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


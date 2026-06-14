// BrnWorldDebugComponent.h:112
extern const float32_t KF_MPS_TO_MPH;

// BrnWorldDebugComponent.h:113
extern const float32_t KF_MPH_TO_MPS;

// BrnWorldDebugComponent.h:115
extern const float32_t KF_TEXT_POSITION_SCREEN_X;

// BrnWorldDebugComponent.h:116
extern const float32_t KF_TEXT_POSITION_SCREEN_Y;

// BrnWorldDebugComponent.h:117
extern const float32_t KF_TEXT_HEIGHT;

// BrnWorldDebugComponent.h:118
extern const float32_t KF_TEXT_LINE_HEIGHT;

// BrnWorldDebugComponent.h:120
extern const float32_t KF_VELOCITY_MIN;

// BrnWorldDebugComponent.h:121
extern const float32_t KF_VELOCITY_MAX;

// BrnWorldDebugComponent.h:122
extern const float32_t KF_VELOCITY_STEP;

// BrnWorldDebugComponent.h:124
extern const char[2][255] KAC_INACTIVE_TEXT;

// BrnWorldDebugComponent.h:46
struct BrnWorld::WorldDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnWorldDebugComponent.h:99
	WorldModule * mpWorldModule;

	// BrnWorldDebugComponent.h:102
	bool mbShowTarget;

	// BrnWorldDebugComponent.h:103
	bool mbHaveDebugController;

	// BrnWorldDebugComponent.h:105
	bool mbVehicleGunIsPrimed;

	// BrnWorldDebugComponent.h:106
	Vector3 mVehiclePosition;

	// BrnWorldDebugComponent.h:107
	Vector3 mVehicleDirection;

	// BrnWorldDebugComponent.h:108
	float32_t mfVehicleVelocity;

	// BrnWorldDebugComponent.h:110
	bool mbAIDrivesPlayer;

	// BrnWorldDebugComponent.cpp:31
	extern const float32_t KF_MPS_TO_MPH;

	// BrnWorldDebugComponent.cpp:32
	extern const float32_t KF_MPH_TO_MPS;

	// BrnWorldDebugComponent.cpp:34
	extern const float32_t KF_TEXT_POSITION_SCREEN_X;

	// BrnWorldDebugComponent.cpp:35
	extern const float32_t KF_TEXT_POSITION_SCREEN_Y;

	// BrnWorldDebugComponent.cpp:36
	extern const float32_t KF_TEXT_HEIGHT;

	// BrnWorldDebugComponent.cpp:37
	extern const float32_t KF_TEXT_LINE_HEIGHT;

	// BrnWorldDebugComponent.cpp:39
	extern const float32_t KF_VELOCITY_MIN;

	// BrnWorldDebugComponent.cpp:40
	extern const float32_t KF_VELOCITY_MAX;

	// BrnWorldDebugComponent.cpp:41
	extern const float32_t KF_VELOCITY_STEP;

	// BrnWorldDebugComponent.cpp:43
	extern const char[2][255] KAC_INACTIVE_TEXT;

	// BrnWorldDebugComponent.cpp:48
	extern char[5][255] KAC_ACTIVE_TEXT;

public:
	// BrnWorldDebugComponent.cpp:70
	void Construct(WorldModule *);

	// BrnWorldDebugComponent.cpp:160
	void Update(const DebugController *);

	// BrnWorldDebugComponent.cpp:242
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// BrnWorldDebugComponent.cpp:266
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnWorldDebugComponent.h:184
	bool HaveDebugController();

protected:
	// BrnWorldDebugComponent.h:85
	virtual const char * GetName() const;

	// BrnWorldDebugComponent.h:88
	virtual bool IsSimple() const;

	// BrnWorldDebugComponent.cpp:97
	virtual void OnActivate();

	// BrnWorldDebugComponent.cpp:218
	virtual void OnRegister();

private:
	// BrnWorldDebugComponent.cpp:288
	void DrawVehicleGun(CgsDev::Debug3DImmediateRender *) const;

	// BrnWorldDebugComponent.cpp:323
	void DrawTarget(CgsDev::Debug3DImmediateRender *) const;

	// BrnWorldDebugComponent.cpp:347
	void DrawInactiveMessage(CgsDev::Debug2DImmediateRender *) const;

	// BrnWorldDebugComponent.cpp:376
	void DrawActiveMessage(CgsDev::Debug2DImmediateRender *) const;

	// BrnWorldDebugComponent.cpp:408
	void PrimeGun();

	// BrnWorldDebugComponent.cpp:426
	void UnPrimeGun();

	// BrnWorldDebugComponent.cpp:439
	void FireGun();

	// BrnWorldDebugComponent.cpp:230
	void ClearStoredFile(void *);

	// BrnWorldDebugComponent.cpp:475
	void UnPrimeGunCallback(void *);

	// BrnWorldDebugComponent.cpp:491
	void PrimeGunCallback(void *);

	// BrnWorldDebugComponent.cpp:507
	void FireGunCallback(void *);

	// BrnWorldDebugComponent.cpp:523
	void TriggerCollWorldValidate(void *);

	// BrnWorldDebugComponent.cpp:539
	void TriggerCollWorldInvalidate(void *);

	// BrnWorldDebugComponent.cpp:557
	void AIDrivesPlayerChanged(void *, void *);

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// Declaration
	struct WorldDebugComponent {
	public:
		WorldDebugComponent();

	private:
		// BrnWorldDebugComponent.h:112
		extern const float32_t KF_MPS_TO_MPH;

		// BrnWorldDebugComponent.h:113
		extern const float32_t KF_MPH_TO_MPS;

		// BrnWorldDebugComponent.h:115
		extern const float32_t KF_TEXT_POSITION_SCREEN_X;

		// BrnWorldDebugComponent.h:116
		extern const float32_t KF_TEXT_POSITION_SCREEN_Y;

		// BrnWorldDebugComponent.h:117
		extern const float32_t KF_TEXT_HEIGHT;

		// BrnWorldDebugComponent.h:118
		extern const float32_t KF_TEXT_LINE_HEIGHT;

		// BrnWorldDebugComponent.h:120
		extern const float32_t KF_VELOCITY_MIN;

		// BrnWorldDebugComponent.h:121
		extern const float32_t KF_VELOCITY_MAX;

		// BrnWorldDebugComponent.h:122
		extern const float32_t KF_VELOCITY_STEP;

		// BrnWorldDebugComponent.h:124
		extern const char[2][255] KAC_INACTIVE_TEXT;

	}

}

// BrnWorldDebugComponent.h:46
void BrnWorld::WorldDebugComponent::WorldDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


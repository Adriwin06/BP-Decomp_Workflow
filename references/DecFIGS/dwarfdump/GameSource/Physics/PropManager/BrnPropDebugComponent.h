// BrnPropDebugComponent.h:54
struct BrnPhysics::Props::PropDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnPropDebugComponent.h:95
	PropManager * mpPropManager;

	// BrnPropDebugComponent.h:96
	bool mbRenderStats;

	// BrnPropDebugComponent.h:97
	bool mbRenderWorldContacts;

	// BrnPropDebugComponent.h:99
	float32_t mfGravityScale;

	// BrnPropDebugComponent.h:100
	float32_t mfInertiaScale;

	// BrnPropDebugComponent.h:102
	float32_t mfAntiHerdUpwardScale;

	// BrnPropDebugComponent.h:103
	float32_t mfAntiHerdSideScale;

	// BrnPropDebugComponent.h:104
	float32_t mfAntiHerdHighSpeedSideScale;

	// BrnPropDebugComponent.h:105
	float32_t mfMaxSpeedForSideForce;

	// BrnPropDebugComponent.h:106
	float32_t mfAntiHerdSpeedClamp;

	// BrnPropDebugComponent.h:108
	float32_t mfLeanPropsSpeed;

	// BrnPropDebugComponent.h:109
	float32_t mfLeanPropsSpeedClamp;

	// BrnPropDebugComponent.h:110
	float32_t mfLeanPropForceOnCar;

	// BrnPropDebugComponent.h:111
	float32_t mfLeanPropCarTranslation;

	// BrnPropDebugComponent.h:112
	float32_t mfLeanPropBreakLinearVel;

	// BrnPropDebugComponent.h:113
	float32_t mfLeanPropBreakAngularVel;

public:
	// BrnPropDebugComponent.cpp:47
	void Construct(PropManager *);

	// BrnPropDebugComponent.cpp:67
	void Destruct();

	// BrnPropDebugComponent.cpp:110
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnPropDebugComponent.cpp:126
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

protected:
	// BrnPropDebugComponent.cpp:84
	virtual const char * GetName() const;

	// BrnPropDebugComponent.cpp:97
	virtual const char * GetPath() const;

	// BrnPropDebugComponent.cpp:163
	virtual void OnActivate();

	// BrnPropDebugComponent.cpp:290
	virtual void OnRegister();

	// BrnPropDebugComponent.cpp:307
	void RenderStats(CgsDev::Debug2DImmediateRender *);

private:
	// BrnPropDebugComponent.cpp:337
	void OnChangeGravityScale(void *, void *);

	// BrnPropDebugComponent.cpp:343
	void OnChangeInertiaScale(void *, void *);

	// BrnPropDebugComponent.cpp:349
	void OnChangeAntiHerdUpwardScale(void *, void *);

	// BrnPropDebugComponent.cpp:355
	void OnChangeAntiHerdSideScale(void *, void *);

	// BrnPropDebugComponent.cpp:361
	void OnChangeAntiHerdHighSpeedSideScale(void *, void *);

	// BrnPropDebugComponent.cpp:367
	void OnChangeMaxSpeedForSideForce(void *, void *);

	// BrnPropDebugComponent.cpp:373
	void OnChangeAntiHerdSpeedClamp(void *, void *);

	// BrnPropDebugComponent.cpp:379
	void OnChangeLeanPropsSpeed(void *, void *);

	// BrnPropDebugComponent.cpp:385
	void OnChangeLeanPropsSpeedClamp(void *, void *);

	// BrnPropDebugComponent.cpp:391
	void OnChangeLeanPropForceOnCar(void *, void *);

	// BrnPropDebugComponent.cpp:397
	void OnChangeLeanPropCarTranslation(void *, void *);

	// BrnPropDebugComponent.cpp:403
	void OnChangeLeanPropBreakLinearVel(void *, void *);

	// BrnPropDebugComponent.cpp:409
	void OnChangeLeanPropBreakAngularVel(void *, void *);

}

// BrnPropDebugComponent.h:54
void BrnPhysics::Props::PropDebugComponent::PropDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


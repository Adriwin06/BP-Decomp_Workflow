// BrnDeformationDebugComponent.h:131
struct BrnPhysics::Deformation::DeformationAxisAlignedBox : public AxisAlignedBox {
public:
	// BrnDeformationDebugComponent.h:136
	float32_t GetExtent(BrnPhysics::Deformation::ENextSensorDirection);

}

// BrnDeformationDebugComponent.h:149
struct BrnPhysics::Deformation::DeformationDebugComponent : public CgsDev::DebugComponent {
private:
	// BrnDeformationDebugComponent.h:315
	DeformationManager * mpDeformationManager;

	// BrnDeformationDebugComponent.h:316
	int32_t miSelectedRig;

	// BrnDeformationDebugComponent.h:317
	BrnPhysics::Deformation::DeformableObject * mpSelectedRig;

	// BrnDeformationDebugComponent.h:318
	int32_t miSelectedSensor;

	// BrnDeformationDebugComponent.h:319
	BrnPhysics::Deformation::DeformationSensor * mpSelectedSensor;

	// BrnDeformationDebugComponent.h:320
	int32_t miSelectedPoint;

	// BrnDeformationDebugComponent.h:321
	bool mbRenderDeformationRig;

	// BrnDeformationDebugComponent.h:322
	bool mbRenderTagPoints;

	// BrnDeformationDebugComponent.h:323
	bool mbRenderDrivenPoints;

	// BrnDeformationDebugComponent.h:324
	bool mbRenderOffsets;

	// BrnDeformationDebugComponent.h:325
	bool mbRenderDrivenPointConnections;

	// BrnDeformationDebugComponent.h:326
	bool mbDrawDrivetimeLimitsBox;

	// BrnDeformationDebugComponent.h:327
	bool mbDrawDeformedBox;

	// BrnDeformationDebugComponent.h:328
	bool mbDrawDetachedWheels;

	// BrnDeformationDebugComponent.h:332
	float32_t mfSensorX;

	// BrnDeformationDebugComponent.h:333
	float32_t mfSensorY;

	// BrnDeformationDebugComponent.h:334
	float32_t mfSensorZ;

	// BrnDeformationDebugComponent.h:335
	float32_t mfSensorScratch;

	// BrnDeformationDebugComponent.h:338
	float32_t mfCompressPosXAxis;

	// BrnDeformationDebugComponent.h:339
	float32_t mfCompressNegXAxis;

	// BrnDeformationDebugComponent.h:340
	float32_t mfCompressPosYAxis;

	// BrnDeformationDebugComponent.h:341
	float32_t mfCompressNegYAxis;

	// BrnDeformationDebugComponent.h:342
	float32_t mfCompressPosZAxis;

	// BrnDeformationDebugComponent.h:343
	float32_t mfCompressNegZAxis;

	// BrnDeformationDebugComponent.h:344
	int32_t miCompressPreset;

	// BrnDeformationDebugComponent.h:345
	StringList[3] maCompressPresetStrings;

	// BrnDeformationDebugComponent.h:349
	float32_t mfPointX;

	// BrnDeformationDebugComponent.h:350
	float32_t mfPointY;

	// BrnDeformationDebugComponent.h:351
	float32_t mfPointZ;

	// BrnDeformationDebugComponent.h:354
	float32_t mfPenetrationLimitMultiplier;

	// BrnDeformationDebugComponent.h:355
	float32_t mfForceLimitMultiplier;

	// BrnDeformationDebugComponent.h:357
	float32_t mfAngularVelocityForDetachment;

	// BrnDeformationDebugComponent.h:358
	float32_t mfAngularVelocityDecay;

public:
	void DeformationDebugComponent(const DeformationDebugComponent &);

	void DeformationDebugComponent();

	// BrnDeformationDebugComponent.cpp:153
	void Construct(DeformationManager *);

	// BrnDeformationDebugComponent.cpp:225
	void Destruct();

	// BrnDeformationDebugComponent.cpp:264
	virtual void RenderWorld(CgsDev::Debug3DImmediateRender *);

	// BrnDeformationDebugComponent.cpp:244
	virtual void Update();

protected:
	// BrnDeformationDebugComponent.h:446
	virtual const char * GetName() const;

	// BrnDeformationDebugComponent.h:461
	virtual const char * GetPath() const;

	// BrnDeformationDebugComponent.cpp:1426
	virtual void OnActivate();

	// BrnDeformationDebugComponent.cpp:2252
	virtual void OnRegister();

private:
	// BrnDeformationDebugComponent.cpp:1699
	void CompressSelectedRig(float32_t, float32_t, float32_t, float32_t, float32_t, float32_t);

	// BrnDeformationDebugComponent.cpp:1758
	void CompressSelectedRig_MaxDrivetime();

	// BrnDeformationDebugComponent.cpp:534
	void DrawDetachedWheels(CgsDev::Debug3DImmediateRender *);

	// BrnDeformationDebugComponent.cpp:2031
	void AngularVelocityDetachmentCallback(void *, void *);

	// BrnDeformationDebugComponent.cpp:1645
	void JointPentrationMultiplierCallback(void *, void *);

	// BrnDeformationDebugComponent.cpp:1658
	void JointForceMultiplierCallback(void *, void *);

	// BrnDeformationDebugComponent.cpp:2093
	void OnSelectedSensorChange(void *, void *);

	// BrnDeformationDebugComponent.cpp:2219
	void OnSelectedPointChange(void *, void *);

	// BrnDeformationDebugComponent.cpp:2124
	void OnSelectedRigChange(void *, void *);

	// BrnDeformationDebugComponent.cpp:2261
	void ResetSensors(void *);

	// BrnDeformationDebugComponent.cpp:2053
	void DetachPart(void *);

	// BrnDeformationDebugComponent.cpp:1949
	void OnCompressionChange(void *, void *);

	// BrnDeformationDebugComponent.cpp:1980
	void OnCompressionPresetChange(void *, void *);

	// BrnDeformationDebugComponent.cpp:2179
	void OnSensorPositionChange(void *, void *);

	// BrnDeformationDebugComponent.cpp:2197
	void OnPointPositionChange(void *, void *);

	// BrnDeformationDebugComponent.cpp:1670
	void ResetSelectedRig(void *);

}

// BrnDeformationDebugComponent.h:149
void BrnPhysics::Deformation::DeformationDebugComponent::DeformationDebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


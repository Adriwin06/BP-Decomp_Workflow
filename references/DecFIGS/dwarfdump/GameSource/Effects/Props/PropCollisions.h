// PropCollisions.h:37
struct BrnEffects::PropToVFXMaterialMapping {
	// PropCollisions.h:38
	const VFXMaterial * mpUnBrokenVFXMaterial;

	// PropCollisions.h:39
	const VFXMaterial * mpSmashingVFXMaterial;

public:
	// PropCollisions.h:41
	void PropToVFXMaterialMapping();

}

// PropCollisions.h:45
struct BrnEffects::PropCollisions {
private:
	// PropCollisions.h:80
	ResourcePtr<BrnParticle::VFXPropCollection> mVFXPropCollection;

	// PropCollisions.h:81
	ResourceHandle mPropDataResourceHandle;

	// PropCollisions.h:82
	PropToVFXMaterialMapping[500] maPropToMaterialMappings;

	// PropCollisions.h:83
	Random mRandom;

public:
	// PropCollisions.h:48
	void SetPropDataResource(ResourceHandle);

	// PropCollisions.h:53
	void SetPropCollection(ResourceHandle);

	// PropCollisions.h:58
	void Initialise();

	// PropCollisions.h:63
	const PropToVFXMaterialMapping * MapPropTypeToMaterial(uint32_t) const;

	// PropCollisions.h:74
	void UpdateLocatorVfx(float32_t, float32_t, BrnParticle::ParticleModule &, const OutputBuffer_PostPhysics::PropVFXLocatorQueue &, int32_t, const RaceCarState *, const Camera *);

private:
	// PropCollisions.h:85
	// Declaration
	void BuildPropToMaterialTable() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// PropCollisions.cpp:287
		using namespace BrnPhysics::Props;

	}

	// PropCollisions.h:91
	bool ContactVisible(Vector3, const Camera *);

}

// PropCollisions.h:45
struct BrnEffects::PropCollisions {
private:
	// PropCollisions.h:80
	ResourcePtr<BrnParticle::VFXPropCollection> mVFXPropCollection;

	// PropCollisions.h:81
	ResourceHandle mPropDataResourceHandle;

	// PropCollisions.h:82
	PropToVFXMaterialMapping[500] maPropToMaterialMappings;

	// PropCollisions.h:83
	Random mRandom;

public:
	// PropCollisions.h:48
	void SetPropDataResource(ResourceHandle);

	// PropCollisions.h:53
	void SetPropCollection(ResourceHandle);

	// PropCollisions.h:58
	void Initialise();

	// PropCollisions.h:63
	const PropToVFXMaterialMapping * MapPropTypeToMaterial(uint32_t) const;

	// PropCollisions.h:74
	void UpdateLocatorVfx(float32_t, float32_t, BrnParticle::ParticleModule &, const OutputBuffer_PostPhysics::PropVFXLocatorQueue &, int32_t, const RaceCarState *, const Camera *);

private:
	// PropCollisions.h:85
	void BuildPropToMaterialTable();

	// PropCollisions.h:91
	bool ContactVisible(Vector3, const Camera *);

}


// LionBindings.h:25
struct cLionBindings {
	// LionBindings.h:103
	U32 mLocatorCount;

	// LionBindings.h:104
	U32 mWorldIndex;

	// LionBindings.h:106
	cParticleLocator ** mppLocators;

	// LionBindings.h:107
	cParticleLocator * mpLocator;

	// LionBindings.h:108
	cParticleScaler * mpScaler;

	// LionBindings.h:109
	cParticleTrigger * mpTrigger;

	// LionBindings.h:110
	cParticleRandomSeed mSeed;

	// LionBindings.h:111
	cLionBindings * mpNext;

private:
	// LionBindings.h:115
	cParticleEmitter * m_p_emitter;

public:
	// LionBindings.h:28
	void Init();

	// LionBindings.h:29
	void DeInit();

	// LionBindings.h:31
	void SetLocatorCount(U32);

	// LionBindings.h:33
	void SetpLocator(cParticleLocator *);

	// LionBindings.h:34
	void SetpScaler(cParticleScaler *);

	// LionBindings.h:35
	void SetpTrigger(cParticleTrigger *);

	// LionBindings.h:36
	void SetWorldIndex(U32);

	// LionBindings.h:38
	const cParticleLocator & GetLocator() const;

	// LionBindings.h:43
	cParticleLocator * GetpLocator() const;

	// LionBindings.h:48
	const cParticleLocator & GetLocator(U32) const;

	// LionBindings.h:53
	cParticleScaler * GetpScaler() const;

	// LionBindings.h:58
	cParticleTrigger * GetpTrigger() const;

	// LionBindings.h:63
	U32 GetWorldIndex() const;

	// LionBindings.h:68
	cParticleEmitter * GetEmitter();

	// LionBindings.h:73
	void SetEmitter(cParticleEmitter *);

	// LionBindings.h:78
	void SetpLocator(U32, cParticleLocator *);

	// LionBindings.h:83
	cLionBindings * GetNextBinding();

	// LionBindings.h:88
	void SetNextBinding(cLionBindings *);

	// LionBindings.h:93
	bool IsEqualTo(cLionBindings *) const;

	// LionBindings.h:98
	bool IsEqualTo(const cLionBindings &) const;

}


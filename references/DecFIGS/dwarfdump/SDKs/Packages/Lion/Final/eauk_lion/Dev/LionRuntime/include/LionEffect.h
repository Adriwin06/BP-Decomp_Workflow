// LionEffect.h:37
struct cLionEffectDefinition {
private:
	// LionEffect.h:151
	extern const U32 MAX_NAME_LENGTH = 32;

	// LionEffect.h:153
	U32 mVersion;

	// LionEffect.h:156
	LionHash m_key;

	// LionEffect.h:157
	LionChar[32] m_name;

	// LionEffect.h:159
	cLionParticleEffect * mpParticles;

	// LionEffect.h:160
	cLionBindings * mpBindings;

	// Unknown accessibility
	// LionEffect.h:172
	cLionEffectDefinition * mpNext;

public:
	// LionEffect.h:45
	LionHash CalculateHash(const LionChar *);

	// LionEffect.h:47
	U32 Version() const;

	// LionEffect.h:55
	LionHash Key() const;

	// LionEffect.h:60
	void SetKey(LionHash);

	// LionEffect.h:68
	const LionChar * GetName() const;

	// LionEffect.h:73
	void Init(const LionChar *);

	// LionEffect.h:75
	void DeInit();

	// LionEffect.h:77
	FP32 GetDurationMax() const;

	// LionEffect.h:101
	cLionParticleEffect *& GetReferenceToParticles();

	// LionEffect.h:106
	cLionParticleEffect * GetParticles() const;

	// LionEffect.h:111
	cLionBindings *& GetBindings();

	// LionEffect.h:116
	void SetParticles(cLionParticleEffect *);

	// LionEffect.h:121
	void SetNextParticles(cLionParticleEffect *);

	// LionEffect.h:123
	void Build();

	// LionEffect.h:124
	void UnBuild();

	// LionEffect.h:126
	void DefinitionAttach();

	// LionEffect.h:127
	void DefinitionRemove();

	// LionEffect.h:129
	void Delocate(U32);

	// LionEffect.h:130
	void Relocate();

	// LionEffect.h:132
	void GetSerialiseSize(cLionSerialiser &) const;

	// LionEffect.h:146
	cLionEffectDefinition * Serialise(cLionSerialiser &) const;

	// LionEffect.h:147
	void Remap(cLionSerialiser &);

}

// LionEffect.h:179
struct cLionEffectInstance {
	// LionEffect.h:182
	enum LionEffectInstanceFlags {
		eLEI_AWAITING_DESTRUCTION = 1,
	}

private:
	// LionEffect.h:242
	cLionEffectInstance * mpNext;

	// LionEffect.h:243
	cLionEffectDefinition * mpDefinition;

	// LionEffect.h:244
	cLionBindings mBindings;

	// LionEffect.h:245
	U32 mFlags;

public:
	// LionEffect.h:187
	void Init();

	// LionEffect.h:192
	const cLionEffectDefinition * GetEffectDefinition() const;

	// LionEffect.h:197
	void SetpEffectDefinition(cLionEffectDefinition *);

	// LionEffect.h:202
	const cLionBindings & GetBindings() const;

	// LionEffect.h:207
	cLionBindings & GetBindings();

	// LionEffect.h:212
	cLionEffectInstance *& GetpNext();

	// LionEffect.h:217
	void SetpNext(cLionEffectInstance *);

	// LionEffect.h:222
	void AddChild(cLionEffectInstance *);

	// LionEffect.h:224
	void SetFlag(cLionEffectInstance::LionEffectInstanceFlags);

	// LionEffect.h:229
	bool IsFlagSet(cLionEffectInstance::LionEffectInstanceFlags) const;

	// LionEffect.h:234
	void ToConsole(U32) const;

	// LionEffect.h:235
	void ToConsole() const;

}

// LionEffect.h:28
typedef uint32_t LionHash;

// LionEffect.h:29
typedef wchar_t LionChar;

// LionEffect.h:151
extern const U32 MAX_NAME_LENGTH = 32;


// partdefinition.h:51
struct rw::physics::PartDefinition {
protected:
	// partdefinition.h:321
	VolRef::Volume * m_volume;

	// partdefinition.h:322
	Inertia m_inertia;

	// partdefinition.h:323
	Matrix44Affine m_inverseBodyLTM;

	// partdefinition.h:324
	Material m_material;

	// partdefinition.h:325
	RwBool m_hasInverseBodyLTM;

	// partdefinition.h:329
	RwBool m_isStaticBody;

public:
	// partdefinition.h:62
	void PartDefinition(VolRef::Volume *);

	// partdefinition.h:77
	ResourceDescriptor GetResourceDescriptor();

	// partdefinition.h:87
	PartDefinition * Initialize(const Resource &, VolRef::Volume *);

	// partdefinition.h:94
	void Release();

	// partdefinition.h:118
	void SetVolume(VolRef::Volume *);

	// partdefinition.h:136
	VolRef::Volume * GetVolume();

	// partdefinition.h:149
	const VolRef::Volume * GetVolume() const;

	// partdefinition.h:171
	Inertia & Inertia();

	// partdefinition.h:185
	const Inertia & Inertia() const;

	// partdefinition.h:207
	Material & Material();

	// partdefinition.h:223
	const Material & Material() const;

	// partdefinition.h:230
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// partdefinition.h:233
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// partdefinition.h:236
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// partdefinition.h:239
	void RegisterArenaReadCallbacks();

	// partdefinition.h:242
	void RegisterArenaWriteCallbacks();

	// partdefinition.h:254
	const rw::math::vpu::Matrix44Affine * GetInverseBodyLTM() const;

	// partdefinition.h:275
	void SetInverseBodyLTM(const rw::math::vpu::Matrix44Affine *);

	// partdefinition.h:291
	RwBool IsStaticBody() const;

	// partdefinition.h:310
	void SetStaticBody(RwBool);

}


// part.h:55
struct rw::physics::Part {
protected:
	// part.h:670
	Matrix44Affine m_partTM;

	// part.h:671
	const VolRef::Volume * m_volume;

	// part.h:672
	const rw::math::vpu::Matrix44Affine * m_inverseBodyLTM;

	// part.h:673
	const Inertia * m_inertia;

	// part.h:674
	RigidBody * m_body;

	// part.h:675
	const Material * m_material;

	// part.h:676
	uint32_t m_worldIndex;

	// part.h:677
	RwBool m_staticBody;

public:
	// part.h:66
	void Part();

	// part.h:83
	ResourceDescriptor GetResourceDescriptor();

	// part.h:92
	Part * Initialize(const Resource &, const rw::physics::PartDefinition &);

	// part.h:103
	Part * Initialize(const Resource &, const Inertia *, const VolRef::Volume *, const Material *, RwBool);

	// part.h:111
	void Release();

	// part.h:131
	RigidBody * GetBody() const;

	// part.h:149
	void SetBody(RigidBody *);

	// part.h:170
	void Freeze();

	// part.h:198
	void Activate();

	// part.h:224
	const VolRef::Volume * GetVolume() const;

	// part.h:249
	void SetVolume(const VolRef::Volume *);

	// part.h:272
	const VolRef::Volume & Volume() const;

	// part.h:292
	const Inertia * GetInertia() const;

	// part.h:313
	void SetInertia(const Inertia *);

	// part.h:344
	const Inertia & Inertia() const;

	// part.h:362
	const Material * GetMaterial() const;

	// part.h:378
	void SetMaterial(const Material *);

	// part.h:396
	const Material & Material() const;

	// part.h:416
	const rw::math::vpu::Matrix44Affine * GetInverseBodyLTM() const;

	// part.h:438
	void SetInverseBodyLTM(const rw::math::vpu::Matrix44Affine *);

	// part.h:460
	Matrix44Affine GetBodyTransform() const;

	// part.h:489
	Matrix44Affine GetTransform() const;

	// part.h:517
	void SetTransform(const rw::math::vpu::Matrix44Affine &);

	// part.h:552
	RwBool AddToSimulation(rw::physics::Simulation *, rw::physics::BodyState);

	// part.h:598
	void RemoveFromSimulation(rw::physics::Simulation *);

	// part.h:624
	uint32_t GetWorldIndex() const;

	// part.h:643
	void SetWorldIndex(uint32_t);

	// part.h:654
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// part.h:660
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// part.h:666
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

}

// part.h:55
struct rw::physics::Part {
protected:
	// part.h:670
	Matrix44Affine m_partTM;

	// part.h:671
	const VolRef::Volume * m_volume;

	// part.h:672
	const rw::math::vpu::Matrix44Affine * m_inverseBodyLTM;

	// part.h:673
	const Inertia * m_inertia;

	// part.h:674
	RigidBody * m_body;

	// part.h:675
	const Material * m_material;

	// part.h:676
	uint32_t m_worldIndex;

	// part.h:677
	RwBool m_staticBody;

public:
	// part.h:66
	void Part();

	// part.h:83
	ResourceDescriptor GetResourceDescriptor();

	// part.h:92
	Part * Initialize(const Resource &, const PartDefinition &);

	// part.h:103
	Part * Initialize(const Resource &, const Inertia *, const VolRef::Volume *, const Material *, RwBool);

	// part.h:111
	void Release();

	// part.h:131
	RigidBody * GetBody() const;

	// part.h:149
	void SetBody(RigidBody *);

	// part.h:170
	void Freeze();

	// part.h:198
	void Activate();

	// part.h:224
	const VolRef::Volume * GetVolume() const;

	// part.h:249
	void SetVolume(const VolRef::Volume *);

	// part.h:272
	const VolRef::Volume & Volume() const;

	// part.h:292
	const Inertia * GetInertia() const;

	// part.h:313
	void SetInertia(const Inertia *);

	// part.h:344
	const Inertia & Inertia() const;

	// part.h:362
	const Material * GetMaterial() const;

	// part.h:378
	void SetMaterial(const Material *);

	// part.h:396
	const Material & Material() const;

	// part.h:416
	const rw::math::vpu::Matrix44Affine * GetInverseBodyLTM() const;

	// part.h:438
	void SetInverseBodyLTM(const rw::math::vpu::Matrix44Affine *);

	// part.h:460
	Matrix44Affine GetBodyTransform() const;

	// part.h:489
	Matrix44Affine GetTransform() const;

	// part.h:517
	void SetTransform(const rw::math::vpu::Matrix44Affine &);

	// part.h:552
	RwBool AddToSimulation(rw::physics::Simulation *, rw::physics::BodyState);

	// part.h:598
	void RemoveFromSimulation(rw::physics::Simulation *);

	// part.h:624
	uint32_t GetWorldIndex() const;

	// part.h:643
	void SetWorldIndex(uint32_t);

	// part.h:654
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// part.h:660
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// part.h:666
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

}


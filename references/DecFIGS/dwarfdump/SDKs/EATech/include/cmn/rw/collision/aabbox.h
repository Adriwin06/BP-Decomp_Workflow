// aabbox.h:39
struct AABBoxTemplate<rw::math::vpu::Matrix44Affine,rw::math::vpu::Vector3,rw::collision::AABBoxMemoryDumpPolicy> {
	// aabbox.h:51
	Vector3 m_min;

	// aabbox.h:52
	Vector3 m_max;

public:
	// aabbox.h:58
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// aabbox.h:66
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// aabbox.h:74
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// aabbox.h:82
	void RegisterArenaReadCallbacks();

	// aabbox.h:90
	void RegisterArenaWriteCallbacks();

	// aabbox.h:108
	void AABBoxTemplate();

	// aabbox.h:125
	void AABBoxTemplate(const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &);

	// aabbox.h:156
	void AABBoxTemplate(float, float, float, float, float, float);

	// aabbox.h:173
	void Set(const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &);

	// aabbox.h:194
	RwBool IsValid() const;

	// aabbox.h:213
	const rw::math::vpu::Vector3 & Min() const;

	// aabbox.h:226
	const rw::math::vpu::Vector3 & Max() const;

	// aabbox.h:241
	AABBoxTemplate<rw::math::vpu::Matrix44Affine,rw::math::vpu::Vector3,rw::collision::AABBoxMemoryDumpPolicy> Scale(float) const;

	// aabbox.h:262
	RwBool Overlaps(const AABBoxTemplate<rw::math::vpu::Matrix44Affine,rw::math::vpu::Vector3,rw::collision::AABBoxMemoryDumpPolicy> &) const;

	// aabbox.h:295
	float32_t Distance(const AABBoxTemplate<rw::math::vpu::Matrix44Affine,rw::math::vpu::Vector3,rw::collision::AABBoxMemoryDumpPolicy> &) const;

	// aabbox.h:323
	RwBool Contains(const AABBoxTemplate<rw::math::vpu::Matrix44Affine,rw::math::vpu::Vector3,rw::collision::AABBoxMemoryDumpPolicy> &) const;

	// aabbox.h:351
	AABBoxTemplate<rw::math::vpu::Matrix44Affine,rw::math::vpu::Vector3,rw::collision::AABBoxMemoryDumpPolicy> Transform(const rw::math::vpu::Matrix44Affine *) const;

}


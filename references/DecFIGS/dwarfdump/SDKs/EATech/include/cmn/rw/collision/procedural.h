// procedural.h:49
struct rw::collision::Procedural : public Aggregate {
protected:
	// procedural.h:54
	void Procedural(uint32_t, rw::collision::Aggregate::VTable *);

	// procedural.h:67
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// procedural.h:79
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// procedural.h:92
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

}

// procedural.h:49
struct rw::collision::Procedural : public Aggregate {
public:
	// procedural.h:54
	void Procedural(uint32_t, rw::collision::Aggregate::VTable *);

	// procedural.h:67
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// procedural.h:79
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// procedural.h:92
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

}


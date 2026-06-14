// typereg.h:64
struct rw::core::arena::ArenaTypeReg {
	// typereg.h:50
	typedef uint32_t ObjectTypeId;

	// typereg.h:66
	ArenaTypeReg::ObjectTypeId id;

	// arena.h:679
	typedef Arena::SizeAndAlignment *(*)(void *, Arena::SizeAndAlignment *) RwUnfixCB;

	// typereg.h:67
	ArenaTypeReg::RwUnfixCB unfixCB;

	// arena.h:695
	typedef void (*)(void *, void *, rw::core::arena::ArenaIterator *) RwRefixCB;

	// typereg.h:68
	ArenaTypeReg::RwRefixCB refixCB;

	// arena.h:705
	typedef RwBool (*)(void *, rw::core::arena::ArenaIterator *) RwFixupCB;

	// typereg.h:69
	ArenaTypeReg::RwFixupCB fixupCB;

	// arena.h:714
	typedef void (*)(void *) RwDestructCB;

	// typereg.h:70
	ArenaTypeReg::RwDestructCB destructCB;

public:
	// typereg.h:72
	void ArenaTypeReg();

	// typereg.h:77
	void ArenaTypeReg(ArenaTypeReg::ObjectTypeId);

	// typereg.h:80
	ArenaTypeReg::ObjectTypeId GetId() const;

}


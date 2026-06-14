// unfixrefixatoms.h:57
struct rw::core::atom::UnfixRefixAtoms {
	int (*)(...) * _vptr.UnfixRefixAtoms;

public:
	// unfixrefixatoms.h:64
	virtual void ~UnfixRefixAtoms();

	// unfixrefixatoms.h:105
	rw::core::atom::StaticAtomTable::Members::AtomID Unfix(const void *, rw::core::atom::StaticAtomTable::Members::AtomID, DynamicAtomTable &) const;

	// unfixrefixatoms.h:121
	rw::core::atom::StaticAtomTable::Members::AtomID Refix(const void *, rw::core::atom::StaticAtomTable::Members::AtomID, const rw::core::atom::DynamicAtomTable &) const;

protected:
	// unfixrefixatoms.h:83
	virtual const RwChar * At(const void *, rw::core::atom::StaticAtomTable::Members::AtomID) const;

	// unfixrefixatoms.h:89
	virtual rw::core::atom::StaticAtomTable::Members::AtomID At(const void *, const RwChar *) const;

}


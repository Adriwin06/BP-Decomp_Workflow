// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:10
	namespace core {
		// atomsettings.h:32
		namespace atom {
			// Declaration
			struct StaticAtomTable {
				// staticatomtable.h:115
				struct Members {
					// staticatomtable.h:116
					RwChar * atomNames;

					// staticatomtable.h:117
					RwChar * atomNameTail;

					// staticatomtable.h:118
					uint32_t * stringIndex;

					// atomsettings.h:98
					typedef uint16_t AtomID;

					// staticatomtable.h:119
					rw::core::atom::StaticAtomTable::Members::AtomID * idArray;

					// staticatomtable.h:120
					rw::core::atom::StaticAtomTable::Members::AtomID numAtomIDs;

					// staticatomtable.h:121
					rw::core::atom::StaticAtomTable::Members::AtomID freeAtomIDs;

					// staticatomtable.h:122
					rw::core::atom::StaticAtomTable::Members::AtomID nextAvailableID;

				}

			}

		}

	}

}

// staticatomtable.h:70
struct rw::core::atom::StaticAtomTable {
private:
	// staticatomtable.h:125
	rw::core::atom::StaticAtomTable::Members * table;

public:
	// staticatomtable.h:74
	rw::core::atom::StaticAtomTable::Members::AtomID Register(const RwChar *);

	// staticatomtable.h:74
	void Register(const RwChar *, rw::core::atom::StaticAtomTable::Members::AtomID);

	// staticatomtable.h:74
	rw::core::atom::StaticAtomTable::Members::AtomID At(const RwChar *) const;

	// staticatomtable.h:74
	const RwChar * At(rw::core::atom::StaticAtomTable::Members::AtomID) const;

	// staticatomtable.h:74
	bool Exists(const RwChar *) const;

	// staticatomtable.h:74
	bool Exists(rw::core::atom::StaticAtomTable::Members::AtomID) const;

	// staticatomtable.h:74
	bool FindID(const RwChar *, rw::core::atom::StaticAtomTable::Members::AtomID &) const;

	// staticatomtable.h:74
	bool Empty() const;

	// staticatomtable.h:74
	rw::core::atom::StaticAtomTable::Members::AtomID NumAtoms() const;

	// staticatomtable.h:74
	uint32_t BytesUsedByAtomStrings() const;

	// staticatomtable.h:77
	void Initialize(void *, uint32_t, rw::core::atom::StaticAtomTable::Members::AtomID);

	// staticatomtable.h:80
	Resource Create(const rw::core::atom::DynamicAtomTable &, rw::IResourceAllocator &, ResourceDescriptor &);

	// staticatomtable.h:83
	uint32_t BytesAvailable() const;

	// staticatomtable.h:86
	uint32_t FreeAtomIDs() const;

	// staticatomtable.h:89
	uint32_t MinTableSizeForAverageAtomLength(rw::core::atom::StaticAtomTable::Members::AtomID, uint32_t);

	// staticatomtable.h:92
	uint32_t MinTableSizeForTotalAtomLength(rw::core::atom::StaticAtomTable::Members::AtomID, uint32_t);

	// staticatomtable.h:95
	bool CanRegisterNewAtom(const RwChar *) const;

	// staticatomtable.h:98
	void Unfix(void *);

	// staticatomtable.h:101
	void Refix(void *);

	// staticatomtable.h:104
	void Fixup(void *);

	// staticatomtable.h:107
	void InitializeArenaReadCallbacks();

	// staticatomtable.h:110
	void InitializeArenaWriteCallbacks();

private:
	// staticatomtable.h:128
	rw::core::atom::StaticAtomTable::Members::AtomID HashIDArrayIndex(const RwChar *) const;

	// staticatomtable.h:131
	void RefixMembers();

}


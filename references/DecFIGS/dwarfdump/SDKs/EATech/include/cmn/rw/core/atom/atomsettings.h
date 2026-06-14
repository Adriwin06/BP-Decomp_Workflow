// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:10
	namespace core {
		// atomsettings.h:32
		namespace atom {
		}

	}

}

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

			struct DynamicAtomTable;

			struct UnfixRefixAtoms;

			struct FixupAtoms;

		}

	}

}


// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// Declaration
	struct PotentialContactOrderer {
		// PotentialContactOrderer.h:67
		struct ContactEntry {
			// PotentialContactOrderer.h:69
			const PotentialContact * mpContact;

			// PotentialContactOrderer.h:70
			float32_t mfImpactTime;

			// PotentialContactOrderer.h:71
			bool mbValid;

		}

	}

}

// PotentialContactOrderer.h:40
struct BrnPhysics::PotentialContactOrderer {
private:
	// PotentialContactOrderer.h:64
	extern const int32_t KI_MAX_CONTACTS = 5;

	// PotentialContactOrderer.h:74
	BrnPhysics::PotentialContactOrderer::ContactEntry[5] maContactEntries;

	// PotentialContactOrderer.h:75
	int32_t miNumEntries;

public:
	// PotentialContactOrderer.h:44
	void Construct();

	// PotentialContactOrderer.h:49
	void AddContact(const PotentialContact *, float32_t);

	// PotentialContactOrderer.h:52
	int32_t SortContacts();

	// PotentialContactOrderer.h:56
	const PotentialContact * GetContact(int32_t);

}

// PotentialContactOrderer.h:64
extern const int32_t KI_MAX_CONTACTS = 5;


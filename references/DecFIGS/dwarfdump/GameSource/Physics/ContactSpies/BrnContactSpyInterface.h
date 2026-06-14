// BrnContactSpyInterface.h:48
struct BrnPhysics::ContactSpy::ContactSpyInterface {
private:
	// BrnContactSpyInterface.h:130
	ContactSpyData * mpData;

public:
	// BrnContactSpyInterface.h:53
	void Construct();

	// BrnContactSpyInterface.h:56
	void SetData(ContactSpyData *);

	// BrnContactSpyInterface.h:59
	bool IsValid() const;

	// BrnContactSpyInterface.h:63
	void Destruct();

	// BrnContactSpyInterface.h:67
	void Clear();

	// BrnContactSpyInterface.h:71
	bool IsEmpty() const;

	// BrnContactSpyInterface.h:83
	ContactSpyInterface & operator=(const ContactSpyInterface &);

	// BrnContactSpyInterface.h:89
	const ContactSpyData::RaceCarContactQueue * GetRaceCarContacts() const;

	// BrnContactSpyInterface.h:92
	const ContactSpyData::TrafficContactQueue * GetTrafficContacts() const;

	// BrnContactSpyInterface.h:95
	const ContactSpyData::PhysicalCarPartContactQueue * GetPhysicalCarPartContacts() const;

	// BrnContactSpyInterface.h:98
	const ContactSpyData::HingedCarPartContactQueue * GetHingedPartContacts() const;

	// BrnContactSpyInterface.h:101
	const ContactSpyData::PropContactQueue * GetPropContacts() const;

	// BrnContactSpyInterface.h:104
	const ContactSpyData::DiscardedContactQueue * GetDiscardedContacts() const;

	// BrnContactSpyInterface.h:110
	const ContactSpyData::RaceCarContactRunList * GetRaceCarContactRunList() const;

	// BrnContactSpyInterface.h:113
	const ContactSpyData::TrafficContactRunList * GetTrafficContactRunList() const;

	// BrnContactSpyInterface.h:116
	const ContactSpyData::PhysicalCarPartContactRunList * GetPhysicalCarPartContactRunList() const;

	// BrnContactSpyInterface.h:119
	const ContactSpyData::PropContactRunList * GetPropContactRunList() const;

}


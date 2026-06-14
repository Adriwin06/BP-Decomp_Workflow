// Wheel.h:30
namespace BrnPhysics {
	// BrnContactSpyEvents.h:39
	namespace ContactSpy {
		// BrnContactSpyData.h:40
		const int32_t KI_MAX_RACECAR_CONTACTS = 300;

		// BrnContactSpyData.h:41
		const int32_t KI_MAX_TRAFFIC_CONTACTS = 400;

		// BrnContactSpyData.h:42
		const int32_t KI_MAX_DEFORMABLE_CONTACTS = 150;

		// BrnContactSpyData.h:43
		const int32_t KI_MAX_HINGED_PART_CONTACTS = 50;

		// BrnContactSpyData.h:44
		const int32_t KI_MAX_PROP_CONTACTS = 100;

		// BrnContactSpyData.h:45
		const int32_t KI_MAX_DISCARDED_CONTACTS = 20;

		// BrnContactSpyData.h:48
		const int32_t KI_MAX_COLLIDING_RACECAR_ENTITIES = 8;

		// BrnContactSpyData.h:49
		const int32_t KI_MAX_COLLIDING_TRAFFIC_ENTITIES = 64;

		// BrnContactSpyData.h:50
		const int32_t KI_MAX_COLLIDING_DEFORMABLE_ENTITIES = 50;

		// BrnContactSpyData.h:51
		const int32_t KI_MAX_COLLIDING_PROP_ENTITIES = 100;

	}

}

// BrnContactSpyData.h:79
struct BrnPhysics::ContactSpy::ContactSpyData {
	// BrnContactSpyData.h:57
	typedef ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300> RaceCarContactQueue;

private:
	// BrnContactSpyData.h:192
	ContactSpyData::RaceCarContactQueue mRaceCarContactQueue;

	// Unknown accessibility
	// BrnContactSpyData.h:58
	typedef ContactSpyQueue<BrnPhysics::ContactSpy::TrafficContact,400> TrafficContactQueue;

	// BrnContactSpyData.h:193
	ContactSpyData::TrafficContactQueue mTrafficContactQueue;

	// Unknown accessibility
	// BrnContactSpyData.h:59
	typedef ContactSpyQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150> PhysicalCarPartContactQueue;

	// BrnContactSpyData.h:194
	ContactSpyData::PhysicalCarPartContactQueue mPhysicalCarPartContactQueue;

	// Unknown accessibility
	// BrnContactSpyData.h:60
	typedef ContactSpyQueue<BrnPhysics::ContactSpy::HingedPartContact,50> HingedCarPartContactQueue;

	// BrnContactSpyData.h:195
	ContactSpyData::HingedCarPartContactQueue mHingedPartContactQueue;

	// Unknown accessibility
	// BrnContactSpyData.h:61
	typedef ContactSpyQueue<BrnPhysics::ContactSpy::PropContact,100> PropContactQueue;

	// BrnContactSpyData.h:196
	ContactSpyData::PropContactQueue mPropContactQueue;

	// Unknown accessibility
	// BrnContactSpyData.h:62
	typedef EventQueue<BrnPhysics::ContactSpy::DiscardedContact,20> DiscardedContactQueue;

	// BrnContactSpyData.h:197
	ContactSpyData::DiscardedContactQueue mDiscardedContactQueue;

	// Unknown accessibility
	// BrnContactSpyData.h:64
	typedef ContactSpyRunList<8> RaceCarContactRunList;

	// BrnContactSpyData.h:200
	ContactSpyData::RaceCarContactRunList mRaceCarContactRunList;

	// Unknown accessibility
	// BrnContactSpyData.h:65
	typedef ContactSpyRunList<64> TrafficContactRunList;

	// BrnContactSpyData.h:201
	ContactSpyData::TrafficContactRunList mTrafficContactRunList;

	// Unknown accessibility
	// BrnContactSpyData.h:66
	typedef ContactSpyRunList<50> PhysicalCarPartContactRunList;

	// BrnContactSpyData.h:202
	ContactSpyData::PhysicalCarPartContactRunList mPhysicalCarPartContactRunList;

	// Unknown accessibility
	// BrnContactSpyData.h:67
	typedef ContactSpyRunList<100> PropContactRunList;

	// BrnContactSpyData.h:203
	ContactSpyData::PropContactRunList mPropContactRunList;

public:
	// BrnContactSpyData.h:84
	void Construct();

	// BrnContactSpyData.h:88
	void Destruct();

	// BrnContactSpyData.h:92
	void Clear();

	// BrnContactSpyData.h:96
	bool IsEmpty() const;

	// BrnContactSpyData.h:100
	void SortQueuesByEntityId();

	// BrnContactSpyData.h:105
	void Append(const ContactSpyData *);

	// BrnContactSpyData.h:117
	ContactSpyData & operator=(const ContactSpyData &);

	// BrnContactSpyData.h:123
	const ContactSpyData::RaceCarContactQueue * GetRaceCarContacts() const;

	// BrnContactSpyData.h:126
	const ContactSpyData::TrafficContactQueue * GetTrafficContacts() const;

	// BrnContactSpyData.h:129
	const ContactSpyData::PhysicalCarPartContactQueue * GetPhysicalCarPartContacts() const;

	// BrnContactSpyData.h:132
	const ContactSpyData::HingedCarPartContactQueue * GetHingedPartContacts() const;

	// BrnContactSpyData.h:135
	const ContactSpyData::PropContactQueue * GetPropContacts() const;

	// BrnContactSpyData.h:138
	const ContactSpyData::DiscardedContactQueue * GetDiscardedContacts() const;

	// BrnContactSpyData.h:144
	const ContactSpyData::RaceCarContactRunList * GetRaceCarContactRunList() const;

	// BrnContactSpyData.h:147
	const ContactSpyData::TrafficContactRunList * GetTrafficContactRunList() const;

	// BrnContactSpyData.h:150
	const ContactSpyData::PhysicalCarPartContactRunList * GetPhysicalCarPartContactRunList() const;

	// BrnContactSpyData.h:153
	const ContactSpyData::PropContactRunList * GetPropContactRunList() const;

	// BrnContactSpyData.h:160
	// Declaration
	void AddContact(const RaceCarContact &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnContactSpyData.h:376
		using namespace CgsDev::Message;

	}

	// BrnContactSpyData.h:164
	// Declaration
	void AddContact(const TrafficContact &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnContactSpyData.h:387
		using namespace CgsDev::Message;

	}

	// BrnContactSpyData.h:168
	// Declaration
	void AddContact(const PhysicalCarPartContact &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnContactSpyData.h:398
		using namespace CgsDev::Message;

	}

	// BrnContactSpyData.h:172
	// Declaration
	void AddContact(const PropContact &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnContactSpyData.h:417
		using namespace CgsDev::Message;

	}

	// BrnContactSpyData.h:176
	// Declaration
	void AddContact(const DiscardedContact &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnContactSpyData.h:428
		using namespace CgsDev::Message;

	}

	// BrnContactSpyData.h:180
	void AddContact(const HingedPartContact &);

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnContactSpyEvents.h:39
	namespace ContactSpy {
		// BrnContactSpyData.h:40
		const int32_t KI_MAX_RACECAR_CONTACTS = 300;

		// BrnContactSpyData.h:41
		const int32_t KI_MAX_TRAFFIC_CONTACTS = 400;

		// BrnContactSpyData.h:42
		const int32_t KI_MAX_DEFORMABLE_CONTACTS = 150;

		// BrnContactSpyData.h:43
		const int32_t KI_MAX_HINGED_PART_CONTACTS = 50;

		// BrnContactSpyData.h:44
		const int32_t KI_MAX_PROP_CONTACTS = 100;

		// BrnContactSpyData.h:45
		const int32_t KI_MAX_DISCARDED_CONTACTS = 20;

		// BrnContactSpyData.h:48
		const int32_t KI_MAX_COLLIDING_RACECAR_ENTITIES = 8;

		// BrnContactSpyData.h:49
		const int32_t KI_MAX_COLLIDING_TRAFFIC_ENTITIES = 64;

		// BrnContactSpyData.h:50
		const int32_t KI_MAX_COLLIDING_DEFORMABLE_ENTITIES = 50;

		// BrnContactSpyData.h:51
		const int32_t KI_MAX_COLLIDING_PROP_ENTITIES = 100;

	}

}


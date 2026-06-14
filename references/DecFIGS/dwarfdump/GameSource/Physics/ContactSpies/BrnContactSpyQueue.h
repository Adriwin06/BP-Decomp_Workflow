// BrnContactSpyQueue.h:57
struct BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300> : public EventQueue<BrnPhysics::ContactSpy::RaceCarContact,300> {
private:
	// BrnContactSpyQueue.h:124
	BrnWorld::EEntityTypeID meEntityType;

public:
	// BrnContactSpyQueue.h:64
	void Construct(BrnWorld::EEntityTypeID);

	// BrnContactSpyQueue.h:83
	int32_t SortCompareContacts(const void *, const void *);

	// BrnContactSpyQueue.h:155
	const BaseContact * GetBaseContact(int) const;

	// BrnContactSpyQueue.h:142
	BaseContact * GetBaseContact(int);

	// BrnContactSpyQueue.h:167
	int32_t GetLength() const;

	// BrnContactSpyQueue.h:105
	const char * DebugGetEntityTypeName();

private:
	// BrnContactSpyQueue.h:176
	int32_t GetNumUniqueEntities();

}

// BrnContactSpyQueue.h:57
struct BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::TrafficContact,400> : public EventQueue<BrnPhysics::ContactSpy::TrafficContact,400> {
private:
	// BrnContactSpyQueue.h:124
	BrnWorld::EEntityTypeID meEntityType;

public:
	// BrnContactSpyQueue.h:64
	void Construct(BrnWorld::EEntityTypeID);

	// BrnContactSpyQueue.h:83
	int32_t SortCompareContacts(const void *, const void *);

	// BrnContactSpyQueue.h:155
	const BaseContact * GetBaseContact(int) const;

	// BrnContactSpyQueue.h:142
	BaseContact * GetBaseContact(int);

	// BrnContactSpyQueue.h:167
	int32_t GetLength() const;

	// BrnContactSpyQueue.h:105
	const char * DebugGetEntityTypeName();

private:
	// BrnContactSpyQueue.h:176
	int32_t GetNumUniqueEntities();

}

// BrnContactSpyQueue.h:57
struct BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150> : public EventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150> {
private:
	// BrnContactSpyQueue.h:124
	BrnWorld::EEntityTypeID meEntityType;

public:
	// BrnContactSpyQueue.h:64
	void Construct(BrnWorld::EEntityTypeID);

	// BrnContactSpyQueue.h:83
	int32_t SortCompareContacts(const void *, const void *);

	// BrnContactSpyQueue.h:155
	const BaseContact * GetBaseContact(int) const;

	// BrnContactSpyQueue.h:142
	BaseContact * GetBaseContact(int);

	// BrnContactSpyQueue.h:167
	int32_t GetLength() const;

	// BrnContactSpyQueue.h:105
	const char * DebugGetEntityTypeName();

private:
	// BrnContactSpyQueue.h:176
	int32_t GetNumUniqueEntities();

}

// BrnContactSpyQueue.h:57
struct BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::HingedPartContact,50> : public EventQueue<BrnPhysics::ContactSpy::HingedPartContact,50> {
private:
	// BrnContactSpyQueue.h:124
	BrnWorld::EEntityTypeID meEntityType;

public:
	// BrnContactSpyQueue.h:64
	void Construct(BrnWorld::EEntityTypeID);

	// BrnContactSpyQueue.h:83
	int32_t SortCompareContacts(const void *, const void *);

	// BrnContactSpyQueue.h:155
	const BaseContact * GetBaseContact(int) const;

	// BrnContactSpyQueue.h:142
	BaseContact * GetBaseContact(int);

	// BrnContactSpyQueue.h:167
	int32_t GetLength() const;

	// BrnContactSpyQueue.h:105
	const char * DebugGetEntityTypeName();

private:
	// BrnContactSpyQueue.h:176
	int32_t GetNumUniqueEntities();

}

// BrnContactSpyQueue.h:57
struct BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PropContact,100> : public EventQueue<BrnPhysics::ContactSpy::PropContact,100> {
private:
	// BrnContactSpyQueue.h:124
	BrnWorld::EEntityTypeID meEntityType;

public:
	// BrnContactSpyQueue.h:64
	void Construct(BrnWorld::EEntityTypeID);

	// BrnContactSpyQueue.h:83
	int32_t SortCompareContacts(const void *, const void *);

	// BrnContactSpyQueue.h:155
	const BaseContact * GetBaseContact(int) const;

	// BrnContactSpyQueue.h:142
	BaseContact * GetBaseContact(int);

	// BrnContactSpyQueue.h:167
	int32_t GetLength() const;

	// BrnContactSpyQueue.h:105
	const char * DebugGetEntityTypeName();

private:
	// BrnContactSpyQueue.h:176
	int32_t GetNumUniqueEntities();

}

// Wheel.h:30
namespace BrnPhysics {
	// BrnContactSpyEvents.h:39
	namespace ContactSpy {
		// BrnContactSpyQueue.h:35
		using namespace CgsModule;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnContactSpyEvents.h:39
	namespace ContactSpy {
		// BrnContactSpyQueue.h:35
		using namespace CgsModule;

	}

}

// BrnContactSpyQueue.h:57
struct BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300> : public EventQueue<BrnPhysics::ContactSpy::RaceCarContact,300> {
private:
	// BrnContactSpyQueue.h:124
	BrnWorld::EEntityTypeID meEntityType;

public:
	// BrnContactSpyQueue.h:64
	void Construct(BrnWorld::EEntityTypeID);

	// BrnContactSpyQueue.h:83
	int32_t SortCompareContacts(const void *, const void *);

	// BrnContactSpyQueue.h:155
	const BaseContact * GetBaseContact(int) const;

	// BrnContactSpyQueue.h:142
	BaseContact * GetBaseContact(int);

	// BrnContactSpyQueue.h:167
	int32_t GetLength() const;

	// BrnContactSpyQueue.h:105
	const char * DebugGetEntityTypeName();

private:
	// BrnContactSpyQueue.h:176
	int32_t GetNumUniqueEntities();

public:
	// BrnContactSpyQueue.h:77
	// Declaration
	void SortAndCreateRunList<8>(ContactSpyRunList<8> *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnContactSpyQueue.cpp:176
		using namespace CgsDev::Message;

		// BrnContactSpyQueue.cpp:215
		using namespace CgsDev::Message;

	}

	// BrnContactSpyQueue.h:70
	// Declaration
	bool AppendSafe<300>(const ContactSpyQueue<BrnPhysics::ContactSpy::RaceCarContact,300> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnContactSpyQueue.cpp:85
		using namespace CgsDev::Message;

	}

}

// BrnContactSpyQueue.h:57
struct BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::TrafficContact,400> : public EventQueue<BrnPhysics::ContactSpy::TrafficContact,400> {
private:
	// BrnContactSpyQueue.h:124
	BrnWorld::EEntityTypeID meEntityType;

public:
	// BrnContactSpyQueue.h:64
	void Construct(BrnWorld::EEntityTypeID);

	// BrnContactSpyQueue.h:83
	int32_t SortCompareContacts(const void *, const void *);

	// BrnContactSpyQueue.h:155
	const BaseContact * GetBaseContact(int) const;

	// BrnContactSpyQueue.h:142
	BaseContact * GetBaseContact(int);

	// BrnContactSpyQueue.h:167
	int32_t GetLength() const;

	// BrnContactSpyQueue.h:105
	const char * DebugGetEntityTypeName();

private:
	// BrnContactSpyQueue.h:176
	int32_t GetNumUniqueEntities();

public:
	// BrnContactSpyQueue.h:77
	// Declaration
	void SortAndCreateRunList<64>(ContactSpyRunList<64> *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnContactSpyQueue.cpp:176
		using namespace CgsDev::Message;

		// BrnContactSpyQueue.cpp:215
		using namespace CgsDev::Message;

	}

	// BrnContactSpyQueue.h:70
	// Declaration
	bool AppendSafe<400>(const ContactSpyQueue<BrnPhysics::ContactSpy::TrafficContact,400> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnContactSpyQueue.cpp:85
		using namespace CgsDev::Message;

	}

}

// BrnContactSpyQueue.h:57
struct BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150> : public EventQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150> {
private:
	// BrnContactSpyQueue.h:124
	BrnWorld::EEntityTypeID meEntityType;

public:
	// BrnContactSpyQueue.h:64
	void Construct(BrnWorld::EEntityTypeID);

	// BrnContactSpyQueue.h:83
	int32_t SortCompareContacts(const void *, const void *);

	// BrnContactSpyQueue.h:155
	const BaseContact * GetBaseContact(int) const;

	// BrnContactSpyQueue.h:142
	BaseContact * GetBaseContact(int);

	// BrnContactSpyQueue.h:167
	int32_t GetLength() const;

	// BrnContactSpyQueue.h:105
	const char * DebugGetEntityTypeName();

private:
	// BrnContactSpyQueue.h:176
	int32_t GetNumUniqueEntities();

public:
	// BrnContactSpyQueue.h:77
	// Declaration
	void SortAndCreateRunList<50>(ContactSpyRunList<50> *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnContactSpyQueue.cpp:176
		using namespace CgsDev::Message;

		// BrnContactSpyQueue.cpp:215
		using namespace CgsDev::Message;

	}

	// BrnContactSpyQueue.h:70
	// Declaration
	bool AppendSafe<150>(const ContactSpyQueue<BrnPhysics::ContactSpy::PhysicalCarPartContact,150> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnContactSpyQueue.cpp:85
		using namespace CgsDev::Message;

	}

}

// BrnContactSpyQueue.h:57
struct BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::HingedPartContact,50> : public EventQueue<BrnPhysics::ContactSpy::HingedPartContact,50> {
private:
	// BrnContactSpyQueue.h:124
	BrnWorld::EEntityTypeID meEntityType;

public:
	// BrnContactSpyQueue.h:64
	void Construct(BrnWorld::EEntityTypeID);

	// BrnContactSpyQueue.h:83
	int32_t SortCompareContacts(const void *, const void *);

	// BrnContactSpyQueue.h:155
	const BaseContact * GetBaseContact(int) const;

	// BrnContactSpyQueue.h:142
	BaseContact * GetBaseContact(int);

	// BrnContactSpyQueue.h:167
	int32_t GetLength() const;

	// BrnContactSpyQueue.h:105
	const char * DebugGetEntityTypeName();

private:
	// BrnContactSpyQueue.h:176
	int32_t GetNumUniqueEntities();

public:
	// BrnContactSpyQueue.h:70
	// Declaration
	bool AppendSafe<50>(const ContactSpyQueue<BrnPhysics::ContactSpy::HingedPartContact,50> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnContactSpyQueue.cpp:85
		using namespace CgsDev::Message;

	}

}

// BrnContactSpyQueue.h:57
struct BrnPhysics::ContactSpy::ContactSpyQueue<BrnPhysics::ContactSpy::PropContact,100> : public EventQueue<BrnPhysics::ContactSpy::PropContact,100> {
private:
	// BrnContactSpyQueue.h:124
	BrnWorld::EEntityTypeID meEntityType;

public:
	// BrnContactSpyQueue.h:64
	void Construct(BrnWorld::EEntityTypeID);

	// BrnContactSpyQueue.h:83
	int32_t SortCompareContacts(const void *, const void *);

	// BrnContactSpyQueue.h:155
	const BaseContact * GetBaseContact(int) const;

	// BrnContactSpyQueue.h:142
	BaseContact * GetBaseContact(int);

	// BrnContactSpyQueue.h:167
	int32_t GetLength() const;

	// BrnContactSpyQueue.h:105
	const char * DebugGetEntityTypeName();

private:
	// BrnContactSpyQueue.h:176
	int32_t GetNumUniqueEntities();

public:
	// BrnContactSpyQueue.h:77
	// Declaration
	void SortAndCreateRunList<100>(ContactSpyRunList<100> *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnContactSpyQueue.cpp:176
		using namespace CgsDev::Message;

		// BrnContactSpyQueue.cpp:215
		using namespace CgsDev::Message;

	}

	// BrnContactSpyQueue.h:70
	// Declaration
	bool AppendSafe<100>(const ContactSpyQueue<BrnPhysics::ContactSpy::PropContact,100> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnContactSpyQueue.cpp:85
		using namespace CgsDev::Message;

	}

}


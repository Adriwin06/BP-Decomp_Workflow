// BrnContactSpyRunList.h:56
struct BrnPhysics::ContactSpy::ContactSpyRunData {
private:
	// BrnContactSpyRunList.h:124
	EntityId mEntityId;

	// BrnContactSpyRunList.h:125
	Vector3 mTotalFrictionStress;

	// BrnContactSpyRunList.h:126
	Vector3 mAverageStress;

	// BrnContactSpyRunList.h:127
	Vector3 mAverageContactPoint;

	// BrnContactSpyRunList.h:128
	int32_t miStartIndex;

	// BrnContactSpyRunList.h:129
	int32_t miRunLength;

public:
	// BrnContactSpyRunList.h:61
	void Construct();

	// BrnContactSpyRunList.h:71
	void Construct(EntityId, Vector3, Vector3, Vector3, int32_t, int32_t);

	// BrnContactSpyRunList.h:77
	int32_t GetStartIndex() const;

	// BrnContactSpyRunList.h:80
	int32_t GetRunLength() const;

	// BrnContactSpyRunList.h:83
	EntityId GetEntityId() const;

	// BrnContactSpyRunList.h:86
	Vector3 GetTotalFrictionStress() const;

	// BrnContactSpyRunList.h:89
	Vector3 GetAverageStress() const;

	// BrnContactSpyRunList.h:92
	Vector3 GetAverageContactPoint() const;

	// BrnContactSpyRunList.h:99
	void SetStartIndex(int32_t);

	// BrnContactSpyRunList.h:103
	void SetRunLength(int32_t);

	// BrnContactSpyRunList.h:107
	void SetEntityId(EntityId);

	// BrnContactSpyRunList.h:111
	void SetTotalFrictionStress(Vector3);

	// BrnContactSpyRunList.h:115
	void SetAverageStress(Vector3);

	// BrnContactSpyRunList.h:119
	void SetAverageContactPoint(Vector3);

}

// BrnContactSpyRunList.h:143
struct BrnPhysics::ContactSpy::ContactSpyRunList<8> : public EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,8> {
private:
	// BrnContactSpyRunList.h:199
	BrnWorld::EEntityTypeID meEntityType;

public:
	// BrnContactSpyRunList.h:348
	void Construct(BrnWorld::EEntityTypeID);

	// BrnContactSpyRunList.h:365
	void AddEvent(EntityId, Vector3, Vector3, Vector3, int, int);

	// BrnContactSpyRunList.h:387
	const ContactSpyRunData * GetRunData(int) const;

	// BrnContactSpyRunList.h:412
	const ContactSpyRunData * GetRunDataWithEntityID(EntityId) const;

	// BrnContactSpyRunList.h:437
	int32_t GetLength() const;

private:
	// BrnContactSpyRunList.h:446
	int32_t GetMaxIndex() const;

	// BrnContactSpyRunList.h:400
	ContactSpyRunData * GetRunData(int);

}

// BrnContactSpyRunList.h:143
struct BrnPhysics::ContactSpy::ContactSpyRunList<64> : public EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,64> {
private:
	// BrnContactSpyRunList.h:199
	BrnWorld::EEntityTypeID meEntityType;

public:
	// BrnContactSpyRunList.h:348
	void Construct(BrnWorld::EEntityTypeID);

	// BrnContactSpyRunList.h:365
	void AddEvent(EntityId, Vector3, Vector3, Vector3, int, int);

	// BrnContactSpyRunList.h:387
	const ContactSpyRunData * GetRunData(int) const;

	// BrnContactSpyRunList.h:412
	const ContactSpyRunData * GetRunDataWithEntityID(EntityId) const;

	// BrnContactSpyRunList.h:437
	int32_t GetLength() const;

private:
	// BrnContactSpyRunList.h:446
	int32_t GetMaxIndex() const;

	// BrnContactSpyRunList.h:400
	ContactSpyRunData * GetRunData(int);

}

// BrnContactSpyRunList.h:143
struct BrnPhysics::ContactSpy::ContactSpyRunList<50> : public EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,50> {
private:
	// BrnContactSpyRunList.h:199
	BrnWorld::EEntityTypeID meEntityType;

public:
	// BrnContactSpyRunList.h:348
	void Construct(BrnWorld::EEntityTypeID);

	// BrnContactSpyRunList.h:365
	void AddEvent(EntityId, Vector3, Vector3, Vector3, int, int);

	// BrnContactSpyRunList.h:387
	const ContactSpyRunData * GetRunData(int) const;

	// BrnContactSpyRunList.h:412
	const ContactSpyRunData * GetRunDataWithEntityID(EntityId) const;

	// BrnContactSpyRunList.h:437
	int32_t GetLength() const;

private:
	// BrnContactSpyRunList.h:446
	int32_t GetMaxIndex() const;

	// BrnContactSpyRunList.h:400
	ContactSpyRunData * GetRunData(int);

}

// BrnContactSpyRunList.h:143
struct BrnPhysics::ContactSpy::ContactSpyRunList<100> : public EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,100> {
private:
	// BrnContactSpyRunList.h:199
	BrnWorld::EEntityTypeID meEntityType;

public:
	// BrnContactSpyRunList.h:348
	void Construct(BrnWorld::EEntityTypeID);

	// BrnContactSpyRunList.h:365
	void AddEvent(EntityId, Vector3, Vector3, Vector3, int, int);

	// BrnContactSpyRunList.h:387
	const ContactSpyRunData * GetRunData(int) const;

	// BrnContactSpyRunList.h:412
	const ContactSpyRunData * GetRunDataWithEntityID(EntityId) const;

	// BrnContactSpyRunList.h:437
	int32_t GetLength() const;

private:
	// BrnContactSpyRunList.h:446
	int32_t GetMaxIndex() const;

	// BrnContactSpyRunList.h:400
	ContactSpyRunData * GetRunData(int);

}

// Wheel.h:30
namespace BrnPhysics {
	// BrnContactSpyEvents.h:39
	namespace ContactSpy {
		// BrnContactSpyRunList.h:35
		using namespace CgsModule;

	}

}

// BrnVehicleConstants.h:26
namespace BrnPhysics {
	// BrnContactSpyEvents.h:39
	namespace ContactSpy {
		// BrnContactSpyRunList.h:35
		using namespace CgsModule;

	}

}

// BrnContactSpyRunList.h:143
struct BrnPhysics::ContactSpy::ContactSpyRunList<8> : public EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,8> {
private:
	// BrnContactSpyRunList.h:199
	BrnWorld::EEntityTypeID meEntityType;

public:
	// BrnContactSpyRunList.h:348
	void Construct(BrnWorld::EEntityTypeID);

	// BrnContactSpyRunList.h:365
	void AddEvent(EntityId, Vector3, Vector3, Vector3, int, int);

	// BrnContactSpyRunList.h:387
	const ContactSpyRunData * GetRunData(int) const;

	// BrnContactSpyRunList.h:412
	const ContactSpyRunData * GetRunDataWithEntityID(EntityId) const;

	// BrnContactSpyRunList.h:437
	int32_t GetLength() const;

private:
	// BrnContactSpyRunList.h:446
	int32_t GetMaxIndex() const;

	// BrnContactSpyRunList.h:400
	ContactSpyRunData * GetRunData(int);

public:
	// BrnContactSpyRunList.h:184
	// Declaration
	bool AppendSafe<8>(const ContactSpyRunList<8> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnContactSpyRunList.cpp:103
		using namespace CgsDev::Message;

	}

}

// BrnContactSpyRunList.h:143
struct BrnPhysics::ContactSpy::ContactSpyRunList<64> : public EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,64> {
private:
	// BrnContactSpyRunList.h:199
	BrnWorld::EEntityTypeID meEntityType;

public:
	// BrnContactSpyRunList.h:348
	void Construct(BrnWorld::EEntityTypeID);

	// BrnContactSpyRunList.h:365
	void AddEvent(EntityId, Vector3, Vector3, Vector3, int, int);

	// BrnContactSpyRunList.h:387
	const ContactSpyRunData * GetRunData(int) const;

	// BrnContactSpyRunList.h:412
	const ContactSpyRunData * GetRunDataWithEntityID(EntityId) const;

	// BrnContactSpyRunList.h:437
	int32_t GetLength() const;

private:
	// BrnContactSpyRunList.h:446
	int32_t GetMaxIndex() const;

	// BrnContactSpyRunList.h:400
	ContactSpyRunData * GetRunData(int);

public:
	// BrnContactSpyRunList.h:184
	// Declaration
	bool AppendSafe<64>(const ContactSpyRunList<64> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnContactSpyRunList.cpp:103
		using namespace CgsDev::Message;

	}

}

// BrnContactSpyRunList.h:143
struct BrnPhysics::ContactSpy::ContactSpyRunList<50> : public EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,50> {
private:
	// BrnContactSpyRunList.h:199
	BrnWorld::EEntityTypeID meEntityType;

public:
	// BrnContactSpyRunList.h:348
	void Construct(BrnWorld::EEntityTypeID);

	// BrnContactSpyRunList.h:365
	void AddEvent(EntityId, Vector3, Vector3, Vector3, int, int);

	// BrnContactSpyRunList.h:387
	const ContactSpyRunData * GetRunData(int) const;

	// BrnContactSpyRunList.h:412
	const ContactSpyRunData * GetRunDataWithEntityID(EntityId) const;

	// BrnContactSpyRunList.h:437
	int32_t GetLength() const;

private:
	// BrnContactSpyRunList.h:446
	int32_t GetMaxIndex() const;

	// BrnContactSpyRunList.h:400
	ContactSpyRunData * GetRunData(int);

public:
	// BrnContactSpyRunList.h:184
	// Declaration
	bool AppendSafe<50>(const ContactSpyRunList<50> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnContactSpyRunList.cpp:103
		using namespace CgsDev::Message;

	}

}

// BrnContactSpyRunList.h:143
struct BrnPhysics::ContactSpy::ContactSpyRunList<100> : public EventQueue<BrnPhysics::ContactSpy::ContactSpyRunData,100> {
private:
	// BrnContactSpyRunList.h:199
	BrnWorld::EEntityTypeID meEntityType;

public:
	// BrnContactSpyRunList.h:348
	void Construct(BrnWorld::EEntityTypeID);

	// BrnContactSpyRunList.h:365
	void AddEvent(EntityId, Vector3, Vector3, Vector3, int, int);

	// BrnContactSpyRunList.h:387
	const ContactSpyRunData * GetRunData(int) const;

	// BrnContactSpyRunList.h:412
	const ContactSpyRunData * GetRunDataWithEntityID(EntityId) const;

	// BrnContactSpyRunList.h:437
	int32_t GetLength() const;

private:
	// BrnContactSpyRunList.h:446
	int32_t GetMaxIndex() const;

	// BrnContactSpyRunList.h:400
	ContactSpyRunData * GetRunData(int);

public:
	// BrnContactSpyRunList.h:184
	// Declaration
	bool AppendSafe<100>(const ContactSpyRunList<100> &) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnContactSpyRunList.cpp:103
		using namespace CgsDev::Message;

	}

}


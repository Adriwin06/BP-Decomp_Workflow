// BrnPropPartInstance.h:42
struct BrnPhysics::Props::PropPartInstance {
private:
	// BrnPropPartInstance.h:104
	Vector3 mPos;

	// BrnPropPartInstance.h:105
	Vector3 mLinearVelocity;

	// BrnPropPartInstance.h:106
	Vector3 mAngularVelocity;

	// BrnPropPartInstance.h:107
	PropEntityID mEntityId;

	// BrnPropPartInstance.h:108
	uint32_t muTypeId;

	// BrnPropPartInstance.h:109
	uint8_t mu8PartId;

	// BrnPropPartInstance.h:110
	bool mbUpdated;

public:
	// BrnPropPartInstance.h:47
	void Construct();

	// BrnPropPartInstance.h:51
	bool Prepare();

	// BrnPropPartInstance.h:55
	bool Release();

	// BrnPropPartInstance.h:59
	void Destruct();

	// BrnPropPartInstance.h:62
	PropEntityID GetEntityId();

	// BrnPropPartInstance.h:65
	void SetEntityId(PropEntityID);

	// BrnPropPartInstance.h:68
	uint32_t GetType();

	// BrnPropPartInstance.h:71
	uint8_t GetPartId();

	// BrnPropPartInstance.h:74
	void SetType(uint32_t);

	// BrnPropPartInstance.h:77
	void SetPartId(uint8_t);

	// BrnPropPartInstance.h:81
	void SetPosition(Vector3);

	// BrnPropPartInstance.h:84
	Vector3 GetPosition();

	// BrnPropPartInstance.h:88
	void SetLinearVelocity(Vector3);

	// BrnPropPartInstance.h:91
	Vector3 GetAngularVelocity();

	// BrnPropPartInstance.h:95
	void SetAngularVelocity(Vector3);

	// BrnPropPartInstance.h:98
	Vector3 GetLinearVelocity();

	// BrnPropPartInstance.h:101
	bool HasBeenUpdated();

}


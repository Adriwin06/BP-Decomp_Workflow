// CgsPotentialContact.h:26
struct CgsSceneManager::SceneManagerIO::PotentialContact {
	// CgsPotentialContact.h:60
	Vector3 mPointOnA;

	// CgsPotentialContact.h:61
	Vector3 mPointOnB;

	// CgsPotentialContact.h:62
	Vector3 mNormal;

	// CgsPotentialContact.h:63
	VolumeInstanceId muVolumeInstanceIdA;

	// CgsPotentialContact.h:64
	VolumeInstanceId muVolumeInstanceIdB;

	// CgsPotentialContact.h:65
	uint32_t muPolyTagA;

	// CgsPotentialContact.h:66
	uint32_t muPolyTagB;

	// CgsPotentialContact.h:67
	uint16_t mu16PrimitiveIndexA;

	// CgsPotentialContact.h:68
	uint16_t mu16PrimitiveIndexB;

public:
	// CgsPotentialContact.h:30
	void Construct();

	// CgsPotentialContact.h:35
	void SwapEntityOrder();

	// CgsPotentialContact.h:39
	uint16_t GetMaterialTagA() const;

	// CgsPotentialContact.h:43
	uint16_t GetGroupTagA() const;

	// CgsPotentialContact.h:47
	uint16_t GetMaterialTagB() const;

	// CgsPotentialContact.h:51
	uint16_t GetGroupTagB() const;

	// CgsPotentialContact.h:54
	uint16_t GetPrimitiveIndexA() const;

	// CgsPotentialContact.h:57
	uint16_t GetPrimitiveIndexB() const;

}


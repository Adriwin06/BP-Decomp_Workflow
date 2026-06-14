// CgsInstanceCollisionList.h:45
struct CgsPhysics::InstanceCollisionList {
private:
	// CgsInstanceCollisionList.h:92
	InstanceCollision * mpaInstanceCollisions;

	// CgsInstanceCollisionList.h:93
	uint32_t muNumInstances;

	// CgsInstanceCollisionList.h:94
	ID mIdListResourceId;

	// CgsInstanceCollisionList.h:95
	uint32_t[2] muPad;

public:
	// CgsInstanceCollisionList.h:49
	void Construct();

	// CgsInstanceCollisionList.h:52
	void Destruct();

	// CgsInstanceCollisionList.h:56
	void FixUp(void *);

	// CgsInstanceCollisionList.h:60
	void FixDown(void *);

	// CgsInstanceCollisionList.h:63
	void ConstructInstanceCollisions();

	// CgsInstanceCollisionList.h:78
	uint32_t GetNumInstances() const;

	// CgsInstanceCollisionList.h:83
	InstanceCollision * GetInstanceCollision(uint32_t);

	// CgsInstanceCollisionList.h:87
	ID GetIdListResourceId() const;

}


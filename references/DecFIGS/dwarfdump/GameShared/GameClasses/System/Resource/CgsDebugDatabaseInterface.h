// CgsDebugDatabaseInterface.h:45
struct CgsResource::DebugDatabaseInterface {
public:
	// CgsDebugDatabaseInterface.h:48
	void DebugDatabaseInterface();

	// CgsDebugDatabaseInterface.h:50
	void ~DebugDatabaseInterface();

	// CgsDebugDatabaseInterface.h:53
	DebugResourceInfo * FindResourceByName(const char *);

	// CgsDebugDatabaseInterface.h:56
	DebugResourceInfo * FindResourceById(const char *);

	// CgsDebugDatabaseInterface.h:59
	DebugResourceInfo * FindResourceById(ID);

	// CgsDebugDatabaseInterface.h:62
	DebugResourceInfo * FindResourceAtAddress(const void *);

}


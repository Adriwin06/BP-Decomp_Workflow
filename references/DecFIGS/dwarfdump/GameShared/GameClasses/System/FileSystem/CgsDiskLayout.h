// CgsDiskLayout.h:42
struct CgsFileSystem::DiskLayoutFile {
	// CgsDiskLayout.h:44
	int32_t miLayer;

	// CgsDiskLayout.h:45
	uint64_t muLocation;

	// CgsDiskLayout.h:46
	char * mpcFileName;

}

// CgsDiskLayout.h:58
struct CgsFileSystem::DiskLayout {
private:
	// CgsDiskLayout.h:74
	int32_t miNumFiles;

	// CgsDiskLayout.h:75
	Hash64 * mpHashes;

	// CgsDiskLayout.h:76
	DiskLayoutFile * mpFiles;

public:
	// CgsDiskLayout.h:62
	void Construct(int32_t, Hash64 *, DiskLayoutFile *);

	// CgsDiskLayout.h:65
	void FixUp(void *);

	// CgsDiskLayout.h:68
	void FixDown(void *);

	// CgsDiskLayout.h:71
	bool GetFileLocation(const char *, uint64_t *, int32_t *);

}


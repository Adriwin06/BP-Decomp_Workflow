// CgsStrStream.h:39
namespace CgsDev {
	// CgsMapFile.h:29
	namespace MapFile {
		struct Reader;

		// CgsMapFile.h:41
		const int32_t KI_NAME_LENGTH = 120;

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsMapFile.h:29
	namespace MapFile {
		// Declaration
		struct Reader {
		public:
			Reader();

		}

		// CgsMapFile.h:41
		const int32_t KI_NAME_LENGTH = 120;

	}

}

// CgsStrStream.h:39
namespace CgsDev {
	// CgsMapFile.h:29
	namespace MapFile {
		// CgsMapFile.h:33
		enum EVersion {
			E_VERSION_1 = 0,
			E_VERSION_CURRENT = 1,
		}

		struct Record;

		struct MapFileHeader;

		struct Reader;

		struct MinimalMemoryReader;

		// CgsMapFile.h:41
		const int32_t KI_NAME_LENGTH = 120;

	}

}

// CgsMapFile.h:58
struct CgsDev::MapFile::Record {
	// CgsMapFile.h:60
	char[120] macName;

	// CgsMapFile.h:61
	TargetPtr mAddress;

	// CgsMapFile.h:62
	uint32_t muSize;

}

// CgsMapFile.h:74
struct CgsDev::MapFile::MapFileHeader {
	// CgsMapFile.h:86
	uint32_t muRecordCount;

	// CgsMapFile.h:87
	Record * mpRecordArray;

	// CgsMapFile.h:88
	TargetPtr mBaseAddress;

private:
	// CgsMapFile.h:91
	CgsDev::MapFile::EVersion meVersion;

public:
	// CgsMapFile.h:78
	const Record * FindRecord(TargetPtr) const;

	// CgsMapFile.h:81
	void FixUp();

	// CgsMapFile.h:82
	void FixDown();

	// CgsMapFile.h:83
	void CheckVersion();

}


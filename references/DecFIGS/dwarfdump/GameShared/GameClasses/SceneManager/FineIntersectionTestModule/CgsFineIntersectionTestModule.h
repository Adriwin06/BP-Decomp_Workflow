// CgsFineIntersectionTestModule.h:55
extern const uint32_t KU_VOLUME_VOLUME_QUERY_MEM_SIZE = 299008;

// CgsFineIntersectionTestModule.h:56
extern const uint32_t KU_VOLUME_LINE_QUERY_MEM_SIZE = 67584;

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// Declaration
	struct FineIntersectionTestModule {
		// CgsFineIntersectionTestModule.h:60
		enum EFineIntersectionTestPrepareStage {
			E_FINE_INTERSECTION_PREPARE_START = 0,
			E_FINE_INTERSECTION_PREPARE_MANAGER = 1,
			E_FINE_INTERSECTION_PREPARE_DONE = 2,
		}

		// CgsFineIntersectionTestModule.h:67
		enum EFineIntersectionTestReleaseStage {
			E_FINE_INTERSECTION_RELEASE_START = 0,
			E_FINE_INTERSECTION_RELEASE_MANAGER = 1,
			E_FINE_INTERSECTION_RELEASE_DONE = 2,
		}

	}

	// CgsFineIntersectionTestModule.h:137
	extern CgsSceneManager::FineIntersectionTestModule::EFineIntersectionTestPrepareStage operator++(CgsSceneManager::FineIntersectionTestModule::EFineIntersectionTestPrepareStage &, int);

	// CgsFineIntersectionTestModule.h:138
	extern CgsSceneManager::FineIntersectionTestModule::EFineIntersectionTestReleaseStage operator++(CgsSceneManager::FineIntersectionTestModule::EFineIntersectionTestReleaseStage &, int);

}

// CgsFineIntersectionTestModule.h:54
struct CgsSceneManager::FineIntersectionTestModule {
private:
	// CgsFineIntersectionTestModule.h:55
	extern const uint32_t KU_VOLUME_VOLUME_QUERY_MEM_SIZE = 299008;

	// CgsFineIntersectionTestModule.h:56
	extern const uint32_t KU_VOLUME_LINE_QUERY_MEM_SIZE = 67584;

	// CgsFineIntersectionTestModule.h:120
	uint8_t[299008] macVolumeVolumeQueryBuffer;

	// CgsFineIntersectionTestModule.h:121
	uint8_t[67584] macVolumeLineQueryBuffer;

	// CgsFineIntersectionTestModule.h:123
	CgsSceneManager::FineIntersectionTestModule::EFineIntersectionTestPrepareStage mePrepareStage;

	// CgsFineIntersectionTestModule.h:124
	CgsSceneManager::FineIntersectionTestModule::EFineIntersectionTestReleaseStage meReleaseStage;

	// CgsFineIntersectionTestModule.h:126
	int32_t miTextX;

	// CgsFineIntersectionTestModule.h:127
	int32_t miTextY;

	// CgsFineIntersectionTestModule.h:129
	CgsSceneManager::VolumeManager * mpVolumeManager;

	// CgsFineIntersectionTestModule.h:130
	EntityManager * mpEntityManager;

	// Unknown accessibility
	// volumevolumequery.h:29
	typedef VolumeVolumeQuery VolumeVolumeQuery;

	// CgsFineIntersectionTestModule.h:132
	FineIntersectionTestModule::VolumeVolumeQuery * mpVolumeVolumeQuery;

	// CgsFineIntersectionTestModule.h:133
	VolumeLineQuery * mpVolumeLineQuery;

public:
	// CgsFineIntersectionTestModule.h:76
	void Construct();

	// CgsFineIntersectionTestModule.h:82
	bool Prepare(EntityManager *, CgsSceneManager::VolumeManager *);

	// CgsFineIntersectionTestModule.h:86
	bool Release();

	// CgsFineIntersectionTestModule.h:90
	void Destruct();

	// CgsFineIntersectionTestModule.h:97
	void ComputeLineTestFine(const InEventLineTestFine *, OutEventLineTestFineResult *, OutputBuffer::LineTestIntersectionArray *);

	// CgsFineIntersectionTestModule.h:103
	void ComputeLineTestNearest(const InEventLineTestNearest *, OutEventLineTestNearestResult *);

	// CgsFineIntersectionTestModule.h:109
	void ComputeVolumeTestDeepest(const InEventVolumeTestDeepest *, OutEventVolumeTestDeepestResult *);

	// CgsFineIntersectionTestModule.h:116
	void ComputeVolumeTestFine(const InEventVolumeTestFine *, OutEventVolumeTestFineResult *, OutputBuffer::EntityBuffer *);

}


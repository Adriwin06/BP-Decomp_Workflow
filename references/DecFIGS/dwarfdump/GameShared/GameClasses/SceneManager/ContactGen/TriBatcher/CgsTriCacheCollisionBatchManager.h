// CgsTriCacheCollisionBatchManager.h:62
extern const int32_t KI_MAX_NUM_CONTACTS = 2000;

// CgsTriCacheCollisionBatchManager.h:101
extern const int32_t KI_MAX_NUM_OF_JOBS = 4;

// CgsCoarseQueryResultBuffer.h:25
namespace CgsSceneManager {
	// Declaration
	struct TriCacheCollisionBatchManager {
		// CgsTriCacheCollisionBatchManager.h:104
		struct TCCJob {
			// CgsTriCacheCollisionBatchManager.h:125
			TriCacheCollisionBatch mBatch;

			// CgsTriCacheCollisionBatchManager.h:126
			TriCacheCollisionBatchResult mResult;

		private:
			// CgsTriCacheCollisionBatchManager.h:129
			Job mJob;

			// CgsTriCacheCollisionBatchManager.h:130
			TriCacheCollisionData mJobData;

			// CgsTriCacheCollisionBatchManager.h:131
			bool mbFree;

		public:
			// CgsTriCacheCollisionBatchManager.h:108
			void Construct();

			// CgsTriCacheCollisionBatchManager.h:113
			void Prepare(const GPTriangle *, uint32_t);

			// CgsTriCacheCollisionBatchManager.h:116
			void Release();

			// CgsTriCacheCollisionBatchManager.h:119
			void Start();

			// CgsTriCacheCollisionBatchManager.h:122
			void WaitOn();

		}

	}

}

// CgsTriCacheCollisionBatchManager.h:60
struct CgsSceneManager::TriCacheCollisionBatchManager : public IOBuffer {
	// CgsTriCacheCollisionBatchManager.h:62
	extern const int32_t KI_MAX_NUM_CONTACTS = 2000;

private:
	// CgsTriCacheCollisionBatchManager.h:101
	extern const int32_t KI_MAX_NUM_OF_JOBS = 4;

	// CgsTriCacheCollisionBatchManager.h:134
	CgsSceneManager::TriCacheCollisionBatchManager::TCCJob[4] maJobs;

	// CgsTriCacheCollisionBatchManager.h:136
	int32_t miCurrentJob;

	// CgsTriCacheCollisionBatchManager.h:137
	int32_t miNumJobs;

	// CgsTriCacheCollisionBatchManager.h:139
	EventQueue<CgsSceneManager::IntermedateContact,2000> mTotalGeneratedContacts;

public:
	// CgsTriCacheCollisionBatchManager.h:68
	void Construct();

	// CgsTriCacheCollisionBatchManager.h:71
	void Destruct();

	// CgsTriCacheCollisionBatchManager.h:74
	// Declaration
	bool Prepare() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriCacheCollisionBatchManager.h:157
		using namespace CgsDev::Message;

	}

	// CgsTriCacheCollisionBatchManager.h:77
	void Release();

	// CgsTriCacheCollisionBatchManager.h:82
	// Declaration
	void StartNewBatch(const GPTriangle *, uint32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriCacheCollisionBatchManager.cpp:111
		using namespace CgsDev::Message;

	}

	// CgsTriCacheCollisionBatchManager.h:88
	void AddVolumeInstance(int32_t, const VolumeInstance *, const VolRef::Volume *);

	// CgsTriCacheCollisionBatchManager.h:91
	// Declaration
	void FinishCurrentBatch() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriCacheCollisionBatchManager.cpp:184
		using namespace CgsDev::Message;

		// CgsTriCacheCollisionBatchManager.cpp:185
		using namespace CgsDev::Message;

	}

	// CgsTriCacheCollisionBatchManager.h:94
	// Declaration
	void FinishAllJobs() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriCacheCollisionBatchManager.cpp:252
		using namespace CgsDev::Message;

		// CgsTriCacheCollisionBatchManager.cpp:259
		using namespace CgsDev::Message;

		// CgsTriCacheCollisionBatchManager.cpp:269
		using namespace CgsDev::Message;

		// CgsTriCacheCollisionBatchManager.cpp:275
		using namespace CgsDev::Message;

		// CgsTriCacheCollisionBatchManager.cpp:276
		using namespace CgsDev::Message;

	}

	// CgsTriCacheCollisionBatchManager.h:97
	const EventQueue<CgsSceneManager::IntermedateContact,2000> * GetGeneratedContactQueue() const;

private:
	// CgsTriCacheCollisionBatchManager.h:143
	// Declaration
	void OutputBatchContacts(int32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsTriCacheCollisionBatchManager.cpp:206
		using namespace CgsDev::Message;

	}

	// CgsTriCacheCollisionBatchManager.h:146
	void ClearAll();

}


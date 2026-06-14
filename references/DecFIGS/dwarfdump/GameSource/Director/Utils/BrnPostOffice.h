// BrnPostOffice.h:43
struct BrnDirector::PostOffice<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*,10u> {
private:
	// BrnPostOffice.h:68
	Array<BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*>*,10u> mPostBoxMap;

public:
	// BrnPostOffice.h:47
	void Construct();

	// BrnPostOffice.h:50
	void Clear();

	// Unknown accessibility
	// BrnPostOffice.h:37
	typedef uint16_t PostBoxIDIntType;

	// BrnPostOffice.h:76
	PostOffice<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*,10u>::PostBoxIDIntType AddPostBox(BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*> &);

	// BrnPostOffice.h:93
	void Deliver(short unsigned int, const OutEventLineTestFineResult *const&);

}

// BrnPostOffice.h:43
struct BrnDirector::PostOffice<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult,40u> {
private:
	// BrnPostOffice.h:68
	Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>*,40u> mPostBoxMap;

public:
	// BrnPostOffice.h:47
	void Construct();

	// BrnPostOffice.h:50
	void Clear();

	// BrnPostOffice.h:76
	PostOffice<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*,10u>::PostBoxIDIntType AddPostBox(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> &);

	// BrnPostOffice.h:93
	void Deliver(short unsigned int, const OutEventLineTestNearestResult &);

}

// BrnPostOffice.h:43
struct BrnDirector::PostOffice<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult,10u> {
private:
	// BrnPostOffice.h:68
	Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult>*,10u> mPostBoxMap;

public:
	// BrnPostOffice.h:47
	void Construct();

	// BrnPostOffice.h:50
	void Clear();

	// BrnPostOffice.h:76
	PostOffice<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*,10u>::PostBoxIDIntType AddPostBox(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> &);

	// BrnPostOffice.h:93
	void Deliver(short unsigned int, const OutEventLineTestFastDoubleSidedResult &);

}

// BrnPostOffice.h:43
struct BrnDirector::PostOffice<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult,10u> {
private:
	// BrnPostOffice.h:68
	Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult>*,10u> mPostBoxMap;

public:
	// BrnPostOffice.h:47
	void Construct();

	// BrnPostOffice.h:50
	void Clear();

	// BrnPostOffice.h:76
	PostOffice<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*,10u>::PostBoxIDIntType AddPostBox(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> &);

	// BrnPostOffice.h:93
	void Deliver(short unsigned int, const OutEventSphereTestFastResult &);

}

// BrnPostOffice.h:43
struct BrnDirector::PostOffice<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult,10u> {
private:
	// BrnPostOffice.h:68
	Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult>*,10u> mPostBoxMap;

public:
	// BrnPostOffice.h:47
	void Construct();

	// BrnPostOffice.h:50
	void Clear();

	// BrnPostOffice.h:76
	PostOffice<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*,10u>::PostBoxIDIntType AddPostBox(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult> &);

	// BrnPostOffice.h:93
	void Deliver(short unsigned int, const OutEventVolumeTestDeepestResult &);

}

// BrnPostOffice.h:43
struct BrnDirector::PostOffice<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult,1u> {
private:
	// BrnPostOffice.h:68
	Array<BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult>*,1u> mPostBoxMap;

public:
	// BrnPostOffice.h:47
	void Construct();

	// BrnPostOffice.h:50
	void Clear();

	// BrnPostOffice.h:76
	PostOffice<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*,10u>::PostBoxIDIntType AddPostBox(BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> &);

	// BrnPostOffice.h:93
	void Deliver(short unsigned int, const OutEventVolumeTestFineResult &);

}


// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*> {
		// BrnPostBox.h:82
		enum EState {
			E_STATE_EMPTY = 0,
			E_STATE_WAITING_FOR_PACKAGE = 1,
			E_STATE_GOT_PACKAGE = 2,
			E_NUM_STATES = 3,
		}

	}

	// Declaration
	struct PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> {
		// BrnPostBox.h:82
		enum EState {
			E_STATE_EMPTY = 0,
			E_STATE_WAITING_FOR_PACKAGE = 1,
			E_STATE_GOT_PACKAGE = 2,
			E_NUM_STATES = 3,
		}

	}

	// Declaration
	struct PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> {
		// BrnPostBox.h:82
		enum EState {
			E_STATE_EMPTY = 0,
			E_STATE_WAITING_FOR_PACKAGE = 1,
			E_STATE_GOT_PACKAGE = 2,
			E_NUM_STATES = 3,
		}

	}

	// Declaration
	struct PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> {
		// BrnPostBox.h:82
		enum EState {
			E_STATE_EMPTY = 0,
			E_STATE_WAITING_FOR_PACKAGE = 1,
			E_STATE_GOT_PACKAGE = 2,
			E_NUM_STATES = 3,
		}

	}

	// Declaration
	struct PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult> {
		// BrnPostBox.h:82
		enum EState {
			E_STATE_EMPTY = 0,
			E_STATE_WAITING_FOR_PACKAGE = 1,
			E_STATE_GOT_PACKAGE = 2,
			E_NUM_STATES = 3,
		}

	}

	// Declaration
	struct PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> {
		// BrnPostBox.h:82
		enum EState {
			E_STATE_EMPTY = 0,
			E_STATE_WAITING_FOR_PACKAGE = 1,
			E_STATE_GOT_PACKAGE = 2,
			E_NUM_STATES = 3,
		}

	}

}

// BrnPostBox.h:36
struct BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> {
private:
	// BrnPostBox.h:91
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult>::EState meState;

	// BrnPostBox.h:92
	OutEventLineTestNearestResult mPackage;

public:
	// BrnPostBox.h:40
	void Construct();

	// BrnPostBox.h:43
	void Clear();

	// BrnPostBox.h:46
	void WaitForPackage();

	// BrnPostBox.h:99
	bool HasPackage() const;

	// BrnPostBox.h:108
	const OutEventLineTestNearestResult & GetPackage() const;

	// BrnPostBox.h:56
	void TakePackage(const OutEventLineTestNearestResult &);

	// BrnPostBox.h:69
	void PostBox();

private:
	// BrnPostBox.h:75
	void PostBox(const PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> &);

	// BrnPostBox.h:80
	const PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> & operator=(const PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> &);

}

// BrnPostBox.h:36
struct BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult> {
private:
	// BrnPostBox.h:91
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult>::EState meState;

	// BrnPostBox.h:92
	OutEventVolumeTestDeepestResult mPackage;

public:
	// BrnPostBox.h:40
	void Construct();

	// BrnPostBox.h:43
	void Clear();

	// BrnPostBox.h:46
	void WaitForPackage();

	// BrnPostBox.h:99
	bool HasPackage() const;

	// BrnPostBox.h:108
	const OutEventVolumeTestDeepestResult & GetPackage() const;

	// BrnPostBox.h:56
	void TakePackage(const OutEventVolumeTestDeepestResult &);

	// BrnPostBox.h:69
	void PostBox();

private:
	// BrnPostBox.h:75
	void PostBox(const PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult> &);

	// BrnPostBox.h:80
	const PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult> & operator=(const PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult> &);

}

// BrnPostBox.h:36
struct BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*> {
private:
	// BrnPostBox.h:91
	BrnDirector::PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*>::EState meState;

	// BrnPostBox.h:92
	const OutEventLineTestFineResult * mPackage;

public:
	// BrnPostBox.h:40
	void Construct();

	// BrnPostBox.h:43
	void Clear();

	// BrnPostBox.h:46
	void WaitForPackage();

	// BrnPostBox.h:99
	bool HasPackage() const;

	// BrnPostBox.h:108
	const OutEventLineTestFineResult *const& GetPackage() const;

	// BrnPostBox.h:56
	void TakePackage(const OutEventLineTestFineResult *const&);

	// BrnPostBox.h:69
	void PostBox();

private:
	// BrnPostBox.h:75
	void PostBox(const PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*> &);

	// BrnPostBox.h:80
	const PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*> & operator=(const PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*> &);

}

// BrnPostBox.h:36
struct BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> {
private:
	// BrnPostBox.h:91
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult>::EState meState;

	// BrnPostBox.h:92
	OutEventLineTestFastDoubleSidedResult mPackage;

public:
	// BrnPostBox.cpp:34
	void Construct();

	// BrnPostBox.cpp:43
	void Clear();

	// BrnPostBox.cpp:52
	void WaitForPackage();

	// BrnPostBox.h:99
	bool HasPackage() const;

	// BrnPostBox.h:108
	const OutEventLineTestFastDoubleSidedResult & GetPackage() const;

	// BrnPostBox.cpp:63
	void TakePackage(const OutEventLineTestFastDoubleSidedResult &);

	// BrnPostBox.h:69
	void PostBox();

private:
	// BrnPostBox.h:75
	void PostBox(const PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> &);

	// BrnPostBox.h:80
	const PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> & operator=(const PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> &);

}

// BrnPostBox.h:36
struct BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> {
private:
	// BrnPostBox.h:91
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult>::EState meState;

	// BrnPostBox.h:92
	OutEventSphereTestFastResult mPackage;

public:
	// BrnPostBox.cpp:34
	void Construct();

	// BrnPostBox.cpp:43
	void Clear();

	// BrnPostBox.cpp:52
	void WaitForPackage();

	// BrnPostBox.h:99
	bool HasPackage() const;

	// BrnPostBox.h:108
	const OutEventSphereTestFastResult & GetPackage() const;

	// BrnPostBox.cpp:63
	void TakePackage(const OutEventSphereTestFastResult &);

	// BrnPostBox.h:69
	void PostBox();

private:
	// BrnPostBox.h:75
	void PostBox(const PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> &);

	// BrnPostBox.h:80
	const PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> & operator=(const PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> &);

}

// BrnPostBox.h:36
struct BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> {
private:
	// BrnPostBox.h:91
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult>::EState meState;

	// BrnPostBox.h:92
	OutEventVolumeTestFineResult mPackage;

public:
	// BrnPostBox.cpp:34
	void Construct();

	// BrnPostBox.cpp:43
	void Clear();

	// BrnPostBox.cpp:52
	void WaitForPackage();

	// BrnPostBox.h:99
	bool HasPackage() const;

	// BrnPostBox.h:108
	const OutEventVolumeTestFineResult & GetPackage() const;

	// BrnPostBox.cpp:63
	void TakePackage(const OutEventVolumeTestFineResult &);

	// BrnPostBox.h:69
	void PostBox();

private:
	// BrnPostBox.h:75
	void PostBox(const PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> &);

	// BrnPostBox.h:80
	const PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> & operator=(const PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> &);

}

// BrnPostBox.h:36
struct BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> {
private:
	// BrnPostBox.h:91
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult>::EState meState;

	// BrnPostBox.h:92
	OutEventLineTestFastDoubleSidedResult mPackage;

public:
	// BrnPostBox.h:40
	void Construct();

	// BrnPostBox.h:43
	void Clear();

	// BrnPostBox.h:46
	void WaitForPackage();

	// BrnPostBox.h:99
	bool HasPackage() const;

	// BrnPostBox.h:108
	const OutEventLineTestFastDoubleSidedResult & GetPackage() const;

	// BrnPostBox.h:56
	void TakePackage(const OutEventLineTestFastDoubleSidedResult &);

	// BrnPostBox.h:69
	void PostBox();

private:
	// BrnPostBox.h:75
	void PostBox(const PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> &);

	// BrnPostBox.h:80
	const PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> & operator=(const PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> &);

}

// BrnPostBox.h:36
struct BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> {
private:
	// BrnPostBox.h:91
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult>::EState meState;

	// BrnPostBox.h:92
	OutEventSphereTestFastResult mPackage;

public:
	// BrnPostBox.h:40
	void Construct();

	// BrnPostBox.h:43
	void Clear();

	// BrnPostBox.h:46
	void WaitForPackage();

	// BrnPostBox.h:99
	bool HasPackage() const;

	// BrnPostBox.h:108
	const OutEventSphereTestFastResult & GetPackage() const;

	// BrnPostBox.h:56
	void TakePackage(const OutEventSphereTestFastResult &);

	// BrnPostBox.h:69
	void PostBox();

private:
	// BrnPostBox.h:75
	void PostBox(const PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> &);

	// BrnPostBox.h:80
	const PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> & operator=(const PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> &);

}

// BrnPostBox.h:36
struct BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> {
private:
	// BrnPostBox.h:91
	BrnDirector::PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult>::EState meState;

	// BrnPostBox.h:92
	OutEventVolumeTestFineResult mPackage;

public:
	// BrnPostBox.h:40
	void Construct();

	// BrnPostBox.h:43
	void Clear();

	// BrnPostBox.h:46
	void WaitForPackage();

	// BrnPostBox.h:99
	bool HasPackage() const;

	// BrnPostBox.h:108
	const OutEventVolumeTestFineResult & GetPackage() const;

	// BrnPostBox.h:56
	void TakePackage(const OutEventVolumeTestFineResult &);

	// BrnPostBox.h:69
	void PostBox();

private:
	// BrnPostBox.h:75
	void PostBox(const PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> &);

	// BrnPostBox.h:80
	const PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> & operator=(const PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> &);

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct PostBox<const CgsSceneManager::SceneManagerIO::OutEventLineTestFineResult*> {
		// BrnPostBox.h:82
		enum EState {
			E_STATE_EMPTY = 0,
			E_STATE_WAITING_FOR_PACKAGE = 1,
			E_STATE_GOT_PACKAGE = 2,
			E_NUM_STATES = 3,
		}

	}

	// Declaration
	struct PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestNearestResult> {
		// BrnPostBox.h:82
		enum EState {
			E_STATE_EMPTY = 0,
			E_STATE_WAITING_FOR_PACKAGE = 1,
			E_STATE_GOT_PACKAGE = 2,
			E_NUM_STATES = 3,
		}

	}

	// Declaration
	struct PostBox<CgsSceneManager::SceneManagerIO::OutEventLineTestFastDoubleSidedResult> {
		// BrnPostBox.h:82
		enum EState {
			E_STATE_EMPTY = 0,
			E_STATE_WAITING_FOR_PACKAGE = 1,
			E_STATE_GOT_PACKAGE = 2,
			E_NUM_STATES = 3,
		}

	}

	// Declaration
	struct PostBox<CgsSceneManager::SceneManagerIO::OutEventSphereTestFastResult> {
		// BrnPostBox.h:82
		enum EState {
			E_STATE_EMPTY = 0,
			E_STATE_WAITING_FOR_PACKAGE = 1,
			E_STATE_GOT_PACKAGE = 2,
			E_NUM_STATES = 3,
		}

	}

	// Declaration
	struct PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestDeepestResult> {
		// BrnPostBox.h:82
		enum EState {
			E_STATE_EMPTY = 0,
			E_STATE_WAITING_FOR_PACKAGE = 1,
			E_STATE_GOT_PACKAGE = 2,
			E_NUM_STATES = 3,
		}

	}

	// Declaration
	struct PostBox<CgsSceneManager::SceneManagerIO::OutEventVolumeTestFineResult> {
		// BrnPostBox.h:82
		enum EState {
			E_STATE_EMPTY = 0,
			E_STATE_WAITING_FOR_PACKAGE = 1,
			E_STATE_GOT_PACKAGE = 2,
			E_NUM_STATES = 3,
		}

	}

}


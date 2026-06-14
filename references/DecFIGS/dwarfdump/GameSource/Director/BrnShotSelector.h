// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct ShotSelector {
		// BrnShotSelector.h:60
		enum EGroup {
			E_GROUP_LOW_ENERGY_CRASH = 0,
			E_GROUP_NORMAL_CRASH = 1,
			E_GROUP_HIGH_ENERGY_CRASH = 2,
			E_NUM_GROUPS = 3,
		}

	}

}

// BrnShotSelector.h:44
struct BrnDirector::ShotSelector {
private:
	// BrnShotSelector.h:100
	Array<int32_t,50u>[3] maaShotTimes;

	// BrnShotSelector.h:103
	int32_t miCurrentTimeID;

	// BrnShotSelector.h:104
	const BrnDirector::DirectorResourceManager * mpResourceManager;

public:
	// BrnShotSelector.h:48
	void Construct(const BrnDirector::DirectorResourceManager *);

	// BrnShotSelector.h:51
	bool Prepare();

	// BrnShotSelector.h:76
	// Declaration
	Camera::ShotReference * GetCrashShot(uint32_t, BrnDirector::Camera::Camera::ShotSelectionInfo *, uint32_t, uint32_t, uint32_t, BrnDirector::ShotSelector::EGroup) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnShotSelector.cpp:289
		using namespace CgsDev::Message;

		// BrnShotSelector.cpp:291
		using namespace CgsDev::Message;

		// BrnShotSelector.cpp:293
		using namespace CgsDev::Message;

		// BrnShotSelector.cpp:295
		using namespace CgsDev::Message;

		// BrnShotSelector.cpp:297
		using namespace CgsDev::Message;

		// BrnShotSelector.cpp:299
		using namespace CgsDev::Message;

		// BrnShotSelector.cpp:301
		using namespace CgsDev::Message;

	}

	// BrnShotSelector.h:81
	void Update(const Camera &);

private:
	// BrnShotSelector.h:94
	int32_t GetLastUsedIndex(const BrnDirector::Camera::Camera::ShotSelectionInfo &) const;

	// BrnShotSelector.h:98
	void SetLastUsedToNow(const BrnDirector::Camera::Camera::ShotSelectionInfo &);

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct ShotSelector {
		// BrnShotSelector.h:60
		enum EGroup {
			E_GROUP_LOW_ENERGY_CRASH = 0,
			E_GROUP_NORMAL_CRASH = 1,
			E_GROUP_HIGH_ENERGY_CRASH = 2,
			E_NUM_GROUPS = 3,
		}

	}

}

// BrnShotSelector.h:44
struct BrnDirector::ShotSelector {
private:
	// BrnShotSelector.h:100
	Array<int32_t,50u>[3] maaShotTimes;

	// BrnShotSelector.h:103
	int32_t miCurrentTimeID;

	// BrnShotSelector.h:104
	const BrnDirector::DirectorResourceManager * mpResourceManager;

public:
	// BrnShotSelector.h:48
	void Construct(const BrnDirector::DirectorResourceManager *);

	// BrnShotSelector.h:51
	bool Prepare();

	// BrnShotSelector.h:76
	Camera::ShotReference * GetCrashShot(uint32_t, BrnDirector::Camera::Camera::ShotSelectionInfo *, uint32_t, uint32_t, uint32_t, BrnDirector::ShotSelector::EGroup) const;

	// BrnShotSelector.h:81
	void Update(const Camera &);

private:
	// BrnShotSelector.h:94
	int32_t GetLastUsedIndex(const BrnDirector::Camera::Camera::ShotSelectionInfo &) const;

	// BrnShotSelector.h:98
	void SetLastUsedToNow(const BrnDirector::Camera::Camera::ShotSelectionInfo &);

}


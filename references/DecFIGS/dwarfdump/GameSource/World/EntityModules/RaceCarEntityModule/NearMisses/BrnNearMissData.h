// BrnWorldRegion.h:27
namespace BrnWorld {
	// Declaration
	struct NearMissData<4u,8u> {
		// BrnNearMissData.h:122
		struct VehicleTimePair {
			// BrnNearMissData.h:123
			uint32_t miEntityId;

			// BrnNearMissData.h:124
			float32_t mfTime;

		}

	}

	// Declaration
	struct NearMissData<4u,7u> {
		// BrnNearMissData.h:122
		struct VehicleTimePair {
			// BrnNearMissData.h:123
			uint32_t miEntityId;

			// BrnNearMissData.h:124
			float32_t mfTime;

		}

	}

	// BrnNearMissData.h:39
	const float32_t KF_INFORMATION_REMEMBER_TIME_GENERAL;

	// BrnNearMissData.h:40
	const float32_t KF_INFORMATION_REMEMBER_TIME_TAKEDOWNS;

}

// BrnNearMissData.h:44
struct BrnWorld::NearMissData<4u,8u> {
private:
	// BrnNearMissData.h:132
	Array<BrnAI::AISectionId,4u> mauCurrentFrameNearTraffic;

	// BrnNearMissData.h:133
	Array<BrnAI::AISectionId,4u> mauPreviousFrameNearTraffic;

	// BrnNearMissData.h:134
	Array<BrnWorld::NearMissData<4u, 8u>::VehicleTimePair,4u> maRecentTrafficNearMisses;

	// BrnNearMissData.h:135
	Array<BrnWorld::NearMissData<4u, 8u>::VehicleTimePair,4u> maRecentTrafficContacted;

	// BrnNearMissData.h:136
	Array<BrnWorld::NearMissData<4u, 8u>::VehicleTimePair,8u> maRecentlyCrashedTraffic;

	// BrnNearMissData.h:137
	Array<BrnWorld::NearMissData<4u, 8u>::VehicleTimePair,8u> maRecentlyTakenDownTraffic;

	// BrnNearMissData.h:138
	Array<BrnWorld::NearMissData<4u, 8u>::VehicleTimePair,8u> maRecentlyCheckedTraffic;

public:
	// BrnNearMissData.cpp:44
	bool Prepare();

	// BrnNearMissData.cpp:420
	void UpdateTimers(float);

	// BrnNearMissData.cpp:67
	void RememberNearMiss(unsigned int);

	// BrnNearMissData.cpp:101
	bool HasRecentlyCrashed(unsigned int);

	// BrnNearMissData.cpp:212
	void AddNear(unsigned int);

	// BrnNearMissData.cpp:346
	void AddContacted(unsigned int);

	// BrnNearMissData.cpp:381
	void AddCrashed(unsigned int);

	// BrnNearMissData.cpp:230
	void AddTakenDown(unsigned int);

	// BrnNearMissData.cpp:264
	void AddChecked(unsigned int);

	// BrnNearMissData.cpp:299
	bool IsRecentlyTakeDown(unsigned int);

	// BrnNearMissData.cpp:323
	bool IsRecentlyChecked(unsigned int);

	// BrnNearMissData.cpp:124
	bool IsRecentNearMiss(unsigned int) const;

	// BrnNearMissData.cpp:148
	bool IsRecentContacted(unsigned int) const;

	// BrnNearMissData.cpp:172
	bool IsRecentTrafficCheck(unsigned int) const;

	// BrnNearMissData.cpp:197
	bool HasThereBeenARecentNearMiss() const;

	// BrnNearMissData.cpp:494
	void BackupNearArray();

	// BrnNearMissData.cpp:516
	bool IsContainedInNearArray(unsigned int);

	// BrnNearMissData.cpp:531
	uint32_t GetPreviousFrameNearElement(unsigned int);

	// BrnNearMissData.cpp:545
	uint32_t GetNumPreviousFrameNearElements();

}

// BrnNearMissData.h:44
struct BrnWorld::NearMissData<4u,7u> {
private:
	// BrnNearMissData.h:132
	Array<BrnAI::AISectionId,4u> mauCurrentFrameNearTraffic;

	// BrnNearMissData.h:133
	Array<BrnAI::AISectionId,4u> mauPreviousFrameNearTraffic;

	// BrnNearMissData.h:134
	Array<BrnWorld::NearMissData<4u, 7u>::VehicleTimePair,4u> maRecentTrafficNearMisses;

	// BrnNearMissData.h:135
	Array<BrnWorld::NearMissData<4u, 7u>::VehicleTimePair,4u> maRecentTrafficContacted;

	// BrnNearMissData.h:136
	Array<BrnWorld::NearMissData<4u, 7u>::VehicleTimePair,7u> maRecentlyCrashedTraffic;

	// BrnNearMissData.h:137
	Array<BrnWorld::NearMissData<4u, 7u>::VehicleTimePair,7u> maRecentlyTakenDownTraffic;

	// BrnNearMissData.h:138
	Array<BrnWorld::NearMissData<4u, 7u>::VehicleTimePair,7u> maRecentlyCheckedTraffic;

public:
	// BrnNearMissData.cpp:44
	bool Prepare();

	// BrnNearMissData.cpp:420
	void UpdateTimers(float);

	// BrnNearMissData.cpp:67
	void RememberNearMiss(unsigned int);

	// BrnNearMissData.cpp:101
	bool HasRecentlyCrashed(unsigned int);

	// BrnNearMissData.cpp:212
	void AddNear(unsigned int);

	// BrnNearMissData.cpp:346
	void AddContacted(unsigned int);

	// BrnNearMissData.cpp:381
	void AddCrashed(unsigned int);

	// BrnNearMissData.cpp:230
	void AddTakenDown(unsigned int);

	// BrnNearMissData.cpp:264
	void AddChecked(unsigned int);

	// BrnNearMissData.cpp:299
	bool IsRecentlyTakeDown(unsigned int);

	// BrnNearMissData.cpp:323
	bool IsRecentlyChecked(unsigned int);

	// BrnNearMissData.cpp:124
	bool IsRecentNearMiss(unsigned int) const;

	// BrnNearMissData.cpp:148
	bool IsRecentContacted(unsigned int) const;

	// BrnNearMissData.cpp:172
	bool IsRecentTrafficCheck(unsigned int) const;

	// BrnNearMissData.cpp:197
	bool HasThereBeenARecentNearMiss() const;

	// BrnNearMissData.cpp:494
	void BackupNearArray();

	// BrnNearMissData.cpp:516
	bool IsContainedInNearArray(unsigned int);

	// BrnNearMissData.cpp:531
	uint32_t GetPreviousFrameNearElement(unsigned int);

	// BrnNearMissData.cpp:545
	uint32_t GetNumPreviousFrameNearElements();

}

// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnNearMissData.h:39
	const float32_t KF_INFORMATION_REMEMBER_TIME_GENERAL;

	// BrnNearMissData.h:40
	const float32_t KF_INFORMATION_REMEMBER_TIME_TAKEDOWNS;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnNearMissData.h:39
	const float32_t KF_INFORMATION_REMEMBER_TIME_GENERAL;

	// BrnNearMissData.h:40
	const float32_t KF_INFORMATION_REMEMBER_TIME_TAKEDOWNS;

}

// BrnWorldSharedConstants.h:30
namespace BrnWorld {
	// BrnNearMissData.h:39
	const float32_t KF_INFORMATION_REMEMBER_TIME_GENERAL;

	// BrnNearMissData.h:40
	const float32_t KF_INFORMATION_REMEMBER_TIME_TAKEDOWNS;

}

// BrnEntityTypes.h:22
namespace BrnWorld {
	// BrnNearMissData.h:39
	const float32_t KF_INFORMATION_REMEMBER_TIME_GENERAL;

	// BrnNearMissData.h:40
	const float32_t KF_INFORMATION_REMEMBER_TIME_TAKEDOWNS;

}

// BrnCollisionTag.h:37
namespace BrnWorld {
	// Declaration
	struct NearMissData<4u,8u> {
		// BrnNearMissData.h:122
		struct VehicleTimePair {
			// BrnNearMissData.h:123
			uint32_t miEntityId;

			// BrnNearMissData.h:124
			float32_t mfTime;

		}

	}

	// Declaration
	struct NearMissData<4u,7u> {
		// BrnNearMissData.h:122
		struct VehicleTimePair {
			// BrnNearMissData.h:123
			uint32_t miEntityId;

			// BrnNearMissData.h:124
			float32_t mfTime;

		}

	}

	// BrnNearMissData.h:39
	const float32_t KF_INFORMATION_REMEMBER_TIME_GENERAL;

	// BrnNearMissData.h:40
	const float32_t KF_INFORMATION_REMEMBER_TIME_TAKEDOWNS;

}


// BrnDirectorEnums.h:26
namespace BrnDirector {
	// BrnShotSelector.cpp:333
	// Declaration
	extern void PrintShotProperties(uint32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnShotSelector.cpp:339
		using namespace CgsDev::Message;

	}

	// BrnShotSelector.cpp:349
	// Declaration
	extern void PrintShotEventFlags(uint32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnShotSelector.cpp:355
		using namespace CgsDev::Message;

	}

}

// BrnShotSelector.cpp:73
void BrnDirector::ShotSelector::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnShotSelector.cpp:313
void BrnDirector::ShotSelector::GetLastUsedIndex(const const BrnDirector::Camera::Camera::ShotSelectionInfo &  lShotSelectionInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<int32_t,50u>::operator[](/* parameters */);
}

// BrnShotSelector.cpp:322
void BrnDirector::ShotSelector::SetLastUsedToNow(const const BrnDirector::Camera::Camera::ShotSelectionInfo &  lShotSelectionInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<int32_t,50u>::operator[](/* parameters */);
}

// BrnShotSelector.cpp:89
void BrnDirector::ShotSelector::Update(const const Camera &  lSelectedCamera) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Camera::Camera::GetShotSelectionInfo(/* parameters */);
}

// BrnShotSelector.cpp:47
void BrnDirector::ShotSelector::Construct(const BrnDirector::DirectorResourceManager *  lpResourceManager) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnShotSelector.cpp:52
		int32_t liLoop;

		// BrnShotSelector.cpp:53
		int32_t liLoop2;

	}
}

// BrnShotSelector.cpp:121
void BrnDirector::ShotSelector::GetCrashShot(uint32_t  lxCrashEventFlags, BrnDirector::Camera::Camera::ShotSelectionInfo *  lpShotSelectionInfoOut, uint32_t  lxPreferredShotProperties, uint32_t  lxExcludedShotProperties, uint32_t  lxRequiredShotProperties, BrnDirector::ShotSelector::EGroup  leShotGroup) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnShotSelector.cpp:125
		uint32_t liIndex;

		// BrnShotSelector.cpp:126
		const Attrib::RefSpec * lpBestShot;

		// BrnShotSelector.cpp:127
		int32_t liBestShotPropertySuitability;

		// BrnShotSelector.cpp:128
		int32_t liBestShotEventSuitability;

		// BrnShotSelector.cpp:129
		int32_t liLeastRecentTime;

		// BrnShotSelector.cpp:131
		const shotgroup * lpCrashShots;

		// BrnShotSelector.cpp:159
		const const shotgroup & lCrashShots;

	}
	DirectorResourceManager::GetSlowCrashShots(/* parameters */);
	Attrib::Gen::shotgroup::Num_ShotList(/* parameters */);
	{
		// BrnShotSelector.cpp:169
		const const Attrib::RefSpec & lShotRef;

		// BrnShotSelector.cpp:170
		uint32_t lxShotEventFlags;

		// BrnShotSelector.cpp:171
		uint32_t lxShotProperties;

		// BrnShotSelector.cpp:172
		int32_t liTimeLastUsed;

		// BrnShotSelector.cpp:175
		BrnDirector::Camera::Camera::ShotSelectionInfo lCameraShotSelectionInfo;

		// BrnShotSelector.cpp:238
		int32_t liPropertySuitablity;

		// BrnShotSelector.cpp:239
		int32_t liEventSuitablity;

		// BrnShotSelector.cpp:242
		bool lbUsedLessRecently;

		// BrnShotSelector.cpp:243
		bool lbBestMatchForEvent;

		// BrnShotSelector.cpp:244
		bool lbBestMatchForProperties;

		// BrnShotSelector.cpp:245
		bool lbGoodMatchForEvent;

		// BrnShotSelector.cpp:246
		bool lbGoodMatchForProperties;

	}
	Attrib::Gen::shotgroup::ShotList(/* parameters */);
	Attrib::RefSpec::GetClassKey(/* parameters */);
	{
		// BrnShotSelector.cpp:200
		const proceduralshot lCandidateShot;

		Attrib::Gen::proceduralshot::proceduralshot(/* parameters */);
		Attrib::Gen::proceduralshot::SuitableFor(/* parameters */);
		Attrib::Gen::proceduralshot::~proceduralshot(/* parameters */);
	}
	CgsNumeric::BitOperations::GetNumberOfSetBits(/* parameters */);
	CgsNumeric::BitOperations::GetNumberOfSetBits(/* parameters */);
	{
		// BrnShotSelector.cpp:154
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnShotSelector.cpp:182
		const iceanim lCandidateShot;

		Attrib::Gen::iceanim::iceanim(/* parameters */);
		Attrib::Gen::iceanim::SuitableFor(/* parameters */);
		Attrib::Gen::iceanim::~iceanim(/* parameters */);
	}
	DirectorResourceManager::GetNormalCrashShots(/* parameters */);
	DirectorResourceManager::GetFastCrashShots(/* parameters */);
}


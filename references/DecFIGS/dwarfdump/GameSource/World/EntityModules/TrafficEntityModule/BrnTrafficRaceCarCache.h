// BrnTrafficRaceCarCache.h:46
struct BrnTraffic::RaceCarStateData {
	// BrnTrafficRaceCarCache.h:56
	Array<rw::math::vpu::Vector3,8u> mRaceCarPositions;

	// BrnTrafficRaceCarCache.h:57
	Array<rw::math::vpu::Vector3,8u> mRaceCarLinearVelocities;

	// BrnTrafficRaceCarCache.h:58
	Array<rw::math::vpu::VecFloat,8u> mRaceCarSpeeds;

	// BrnTrafficRaceCarCache.h:59
	Array<rw::math::vpu::Vector3,8u> mRaceCarXZVelocityDirs;

	// BrnTrafficRaceCarCache.h:62
	bool[8] mabRaceCarActive;

	// BrnTrafficRaceCarCache.h:63
	Vector3[8] maActiveRaceCarPositions;

}


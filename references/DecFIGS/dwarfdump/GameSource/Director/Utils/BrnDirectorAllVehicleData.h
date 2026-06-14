// BrnDirectorEnums.h:26
namespace BrnDirector {
	// Declaration
	struct AllVehicleData {
		// BrnDirectorAllVehicleData.h:108
		struct NearestCarInfo {
			// BrnDirectorAllVehicleData.h:116
			EActiveRaceCarIndex meRaceCarIndex;

			// BrnDirectorAllVehicleData.h:117
			float32_t mfDistance;

		public:
			// BrnDirectorAllVehicleData.h:111
			bool operator>(const BrnDirector::AllVehicleData::NearestCarInfo &);

		}

	}

}

// BrnDirectorAllVehicleData.h:45
struct BrnDirector::AllVehicleData {
private:
	// BrnDirectorAllVehicleData.h:121
	Matrix44Affine mPlayerImpactSpace;

	// BrnDirectorAllVehicleData.h:122
	Matrix44Affine mPlayerHeadingSpace;

	// BrnDirectorAllVehicleData.h:123
	Matrix44Affine mPlayerLooseHeadingSpace;

	// BrnDirectorAllVehicleData.h:125
	const VehicleInfo * mpRaceCars;

	// BrnDirectorAllVehicleData.h:126
	EActiveRaceCarIndex mePlayerRaceCarIndex;

	// BrnDirectorAllVehicleData.h:127
	BitArray<8u> mUsedRaceCars;

	// BrnDirectorAllVehicleData.h:129
	const Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u> * mpTrafficVehicleArray;

	// BrnDirectorAllVehicleData.h:133
	Array<BrnDirector::AllVehicleData::NearestCarInfo,8u> maNearestRaceCarsToPlayer;

	// BrnDirectorAllVehicleData.h:134
	bool mbSorteddNearestRaceCarsToPlayer;

	// BrnDirectorAllVehicleData.h:136
	extern VecFloat KVF_LOOSE_HEADING_SPACE_BLEND_AMOUNT;

	// BrnDirectorAllVehicleData.h:137
	extern VecFloat KVF_HEADING_SPACE_BLEND_AMOUNT;

	// BrnDirectorAllVehicleData.h:139
	bool mbShouldUpdateNearestRaceCars;

public:
	// BrnDirectorAllVehicleData.h:54
	void Construct();

	// BrnDirectorAllVehicleData.h:57
	const VehicleInfo & GetPlayer() const;

	// BrnDirectorAllVehicleData.h:61
	const VehicleInfo & GetRaceCar(EActiveRaceCarIndex) const;

	// BrnDirectorAllVehicleData.h:68
	void Update(BitArray<8u>, const VehicleInfo *, EActiveRaceCarIndex, const Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u> *);

	// BrnDirectorAllVehicleData.h:75
	const VehicleInfo & GetNearestRaceCarToPlayer(uint32_t) const;

	// BrnDirectorAllVehicleData.h:82
	const EActiveRaceCarIndex GetNearestRaceCarIndexToPlayer(uint32_t) const;

	// BrnDirectorAllVehicleData.h:85
	const rw::math::vpu::Matrix44Affine GetPlayerImpactSpace() const;

	// BrnDirectorAllVehicleData.h:88
	const rw::math::vpu::Matrix44Affine GetPlayerHeadingSpace() const;

	// BrnDirectorAllVehicleData.h:91
	const rw::math::vpu::Matrix44Affine GetPlayerLooseHeadingSpace() const;

	// BrnDirectorAllVehicleData.h:94
	const Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u> * GetTraffic() const;

	// BrnDirectorAllVehicleData.h:97
	const VehicleInfo *const GetRaceCars() const;

	// BrnDirectorAllVehicleData.h:100
	const BitArray<8u> & GetUsedRaceCarsBitArray() const;

	// BrnDirectorAllVehicleData.h:103
	const EActiveRaceCarIndex GetPlayerRCIndex() const;

}

// BrnPlayerInfo.h:38
namespace BrnDirector {
	// Declaration
	struct AllVehicleData {
		// BrnDirectorAllVehicleData.h:108
		struct NearestCarInfo {
			// BrnDirectorAllVehicleData.h:116
			EActiveRaceCarIndex meRaceCarIndex;

			// BrnDirectorAllVehicleData.h:117
			float32_t mfDistance;

		public:
			// BrnDirectorAllVehicleData.h:111
			bool operator>(const BrnDirector::AllVehicleData::NearestCarInfo &);

		}

	}

}


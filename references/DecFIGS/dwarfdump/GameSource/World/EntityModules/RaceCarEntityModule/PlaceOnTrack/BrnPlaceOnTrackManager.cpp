// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnPlaceOnTrackManager.cpp:418
	extern void GetRandomVector(Random &, Vector3 &, const rw::math::vpu::Vector3 &, const rw::math::vpu::Vector3 &);

	// BrnPlaceOnTrackManager.cpp:32
	const VecFloat KVF_TWO_PI;

	// BrnPlaceOnTrackManager.cpp:34
	Vector3[3] KA_CAR_SELECT_NORMAL_ADD;

	// BrnPlaceOnTrackManager.cpp:41
	Vector3[3] KA_CAR_SELECT_NORMAL_RANDOMISE;

	// BrnPlaceOnTrackManager.cpp:48
	const rw::math::vpu::Vector3 K_CAR_SELECT_DROP_WORLD_RIGHT;

}

// BrnPlaceOnTrackManager.cpp:283
void BrnWorld::PlaceOnTrackManager::ComputeBestPlaceOnTrackIntersection(const OutEventLineTestFineResult *  lpLineTestResult, Vector3  lPosition, bool  lbIgnoreFatal) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlaceOnTrackManager.cpp:285
		const LineTestIntersection * lpBestIntersection;

		// BrnPlaceOnTrackManager.cpp:286
		const LineTestIntersection * lpBestIntersectionUnder;

		// BrnPlaceOnTrackManager.cpp:287
		int32_t liIntersectionIndex;

		// BrnPlaceOnTrackManager.cpp:288
		float32_t lfMinDistance;

		// BrnPlaceOnTrackManager.cpp:289
		float32_t lfMinDistanceUnder;

	}
	{
		// BrnPlaceOnTrackManager.cpp:294
		LineTestIntersection * lpCurrentIntersection;

		// BrnPlaceOnTrackManager.cpp:295
		CollisionTag lCollsionTag;

		// BrnPlaceOnTrackManager.cpp:296
		float32_t lfNewDistance;

		// BrnPlaceOnTrackManager.cpp:297
		bool lbUseIntersection;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
	rw::math::vpu::MagnitudeSquared(/* parameters */);
	rw::math::vpu::operator+<VectorAxisY>(/* parameters */);
	rw::math::vpu::operator< <VectorAxisY>(/* parameters */);
}

// BrnPlaceOnTrackManager.cpp:84
void BrnWorld::PlaceOnTrackManager::Construct(BrnWorld::RaceCarEntityModule *  lpRaceCarEntityModule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsNumeric::Random::Construct(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
}

// BrnPlaceOnTrackManager.cpp:359
void BrnWorld::PlaceOnTrackManager::GetValuesForCarSelect(const LineTestIntersection *  lpBestIntersection, const ActiveRaceCar *  lpActiveRaceCar, const Vector3 &  lResetPosition, const Vector3 &  lResetNormal, const Vector3 &  lResetDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlaceOnTrackManager.cpp:376
		Matrix33 lRotationMat;

		// BrnPlaceOnTrackManager.cpp:377
		VecFloat lAngle;

		CgsNumeric::Random::RandomVecFloat(/* parameters */);
		rw::math::vpu::operator*=(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Matrix33FromAxisRotationAngle(/* parameters */);
		vec_madd(/* parameters */);
		vec_add(/* parameters */);
		vec_cmpeq(/* parameters */);
		CgsNumeric::Random::RandomUInt(/* parameters */);
		vec_and(/* parameters */);
		vec_sel(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		rw::math::vpu::Add(/* parameters */);
		vec_add(/* parameters */);
		vec_and(/* parameters */);
		vec_cts(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		vec_ctf(/* parameters */);
		vec_and(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_and(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_sel(/* parameters */);
		vec_sel(/* parameters */);
		vec_xor(/* parameters */);
		vec_sel(/* parameters */);
		vec_xor(/* parameters */);
		vec_sel(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Matrix33::Matrix33(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::Transform(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisX>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisY>(/* parameters */);
		rw::math::vpu::operator*<VectorAxisZ>(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Vector3::Set(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		{
		}
		rw::math::vpu::Normalize(/* parameters */);
	}
	rw::math::vpu::Cross(/* parameters */);
	{
		{
		}
		{
			{
			}
		}
	}
}

// BrnPlaceOnTrackManager.cpp:99
void BrnWorld::PlaceOnTrackManager::PostSceneUpdate(OutputBuffer_PostScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlaceOnTrackManager.cpp:101
		EActiveRaceCarIndex leActiveRaceCarIndex;

		{
			// BrnPlaceOnTrackManager.cpp:105
			BrnWorld::ActiveRaceCar * lpActiveRaceCar;

			{
				// BrnPlaceOnTrackManager.cpp:110
				SceneQueryId lSceneQueryID;

				// BrnPlaceOnTrackManager.cpp:114
				InEventLineTestFine lEvent;

			}
		}
		operator++(/* parameters */);
	}
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::Vector3::Vector3(/* parameters */);
	CgsSceneManager::EntityId::SetInvalid(/* parameters */);
	RaceCarEntityModuleIO::OutputBuffer_PostScene::GetSceneFineLineTestQueue(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventLineTestFine>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
}

// BrnPlaceOnTrackManager.cpp:146
void BrnWorld::PlaceOnTrackManager::PrePhysicsUpdate(const InputBuffer_PrePhysics *  lpInput, OutputBuffer_PrePhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPlaceOnTrackManager.cpp:148
		const InputBuffer_PrePhysics::SceneResultQueue * lpSceneResultQueue;

		// BrnPlaceOnTrackManager.cpp:149
		const CgsModule::Event * lpEvent;

		// BrnPlaceOnTrackManager.cpp:150
		int32_t liType;

		// BrnPlaceOnTrackManager.cpp:151
		int32_t liSize;

		RaceCarEntityModuleIO::InputBuffer_PrePhysics::GetSceneResultQueue(/* parameters */);
	}
	CgsModule::VariableEventQueue<32768,16>::GetFirstEvent(/* parameters */);
	{
		// BrnPlaceOnTrackManager.cpp:159
		const OutEventLineTestFineResult * lpLineTestResult;

		CgsSceneManager::SceneQueryId::GetOwner(/* parameters */);
		{
			// BrnPlaceOnTrackManager.cpp:165
			Matrix44Affine lTransform;

			// BrnPlaceOnTrackManager.cpp:166
			EActiveRaceCarIndex leActiveRaceCarIndex;

			// BrnPlaceOnTrackManager.cpp:167
			BrnWorld::ActiveRaceCar * lpActiveRaceCar;

			// BrnPlaceOnTrackManager.cpp:168
			Vector3 lResetPosition;

			// BrnPlaceOnTrackManager.cpp:169
			Vector3 lResetNormal;

			// BrnPlaceOnTrackManager.cpp:170
			Vector3 lResetDirection;

			// BrnPlaceOnTrackManager.cpp:171
			const LineTestIntersection * lpBestIntersection;

			// BrnPlaceOnTrackManager.cpp:172
			bool lbIgnoreFatal;

			// BrnPlaceOnTrackManager.cpp:178
			int32_t liLineTestPrintOut;

			BrnMath::IsNormal(/* parameters */);
			rw::math::vpu::Magnitude(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			{
			}
			{
				{
				}
			}
			BrnMath::IsNormal(/* parameters */);
			rw::math::vpu::Magnitude(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			{
				{
					{
					}
				}
			}
			rw::math::vpu::IsZero(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			rw::math::vpu::IsSimilar(/* parameters */);
			{
			}
			rw::math::vpu::GetVector3_YAxis(/* parameters */);
			rw::math::vpu::IsSimilar(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			{
				{
				}
			}
			rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
			rw::math::vpu::IsValid(/* parameters */);
			rw::math::vpu::IsSimilar(/* parameters */);
			rw::math::vpu::VecFloat::VecFloat(/* parameters */);
			RaceCarEntityModule::GetPlayerActiveRaceCar(/* parameters */);
			rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
			RaceCarEntityModuleIO::OutputBuffer_PrePhysics::GetVehicleInputInterface(/* parameters */);
			ActiveRaceCar::GetPlaceOnTrackSpeed(/* parameters */);
			rw::math::vpu::operator*(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnPlaceOnTrackManager.cpp:181
		const const LineTestIntersection & lIntersection;

		CgsSceneManager::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
		CgsSceneManager::VolumeInstanceId::operator std::uint64_t(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		{
		}
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisY>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	VecFloat<VectorAxisZ>(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	{
		// BrnPlaceOnTrackManager.cpp:250
		PlayerCarPlacedOnTrackEvent lPlayerCarPlacedOnTrackEvent;

		RaceCarEntityModuleIO::OutputBuffer_PrePhysics::GetGameEventQueue(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	rw::math::vpu::VecFloatRefIndex::operator float(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnPlaceOnTrackManager.cpp:28
// BrnPlaceOnTrackManager.cpp:29
// BrnPlaceOnTrackManager.cpp:30

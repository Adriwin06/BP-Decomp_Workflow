// BrnCrashAnalyser.cpp:246
void BrnDirector::CrashAnalyser::SetShotChanged() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnCrashAnalyser.cpp:44
void BrnDirector::CrashAnalyser::Update(const BrnDirector::DirectorIO::InputBuffer *  lpInput, const GameState *  lpGameState, EActiveRaceCarIndex  lePlayerCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnCrashAnalyser.cpp:47
		const PlayerCrashInfo * lpPlayerCrashInfo;

		// BrnCrashAnalyser.cpp:48
		const VehicleInfo * lpPlayerVehicleInfo;

		DirectorIO::InputBuffer::GetPlayerCrashInfo(/* parameters */);
	}
	DirectorIO::InputBuffer::GetVehicleInfoArray(/* parameters */);
	{
		// BrnCrashAnalyser.cpp:167
		Vector3 lHalfExtents;

		// BrnCrashAnalyser.cpp:168
		Vector3 lReciprocalHalfExtents;

		// BrnCrashAnalyser.cpp:170
		Vector3 lCurrentCollisionNormalNoY;

		// BrnCrashAnalyser.cpp:171
		Vector3 lCurrentNormalisedAdjustedCollisionNormal;

		// BrnCrashAnalyser.cpp:172
		VecFloat lXAngle;

		// BrnCrashAnalyser.cpp:173
		VecFloat lZAngle;

		// BrnCrashAnalyser.cpp:174
		VecFloat lCosAngleForEqualOverlap;

		// BrnCrashAnalyser.cpp:176
		Vector3 lCarSpaceLeftOfActionLine;

		rw::math::vpu::GetVecFloat_Half(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::fpu::Cos(/* parameters */);
		rw::math::vpu::GetVector3_One(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::Matrix44Affine::GetY(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		{
			{
			}
		}
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		{
			{
			}
			{
				{
				}
			}
		}
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Vector3::SetZero(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::operator<(/* parameters */);
		rw::math::vpu::Dot(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		rw::math::vpu::IsZero(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		CrashAnalysis::Clear(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator+=(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
	rw::math::vpu::operator-=(/* parameters */);
}


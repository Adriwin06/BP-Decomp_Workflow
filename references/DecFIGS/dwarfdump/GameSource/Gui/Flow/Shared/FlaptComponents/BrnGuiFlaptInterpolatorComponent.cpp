// BrnGuiFlaptInterpolatorComponent.cpp:97
void BrnGui::FlaptInterpolatorComponent::SetInterpValues(const char *  lpControlledMovieClipName, const rw::math::vpu::Vector4  lv4StartColour, const rw::math::vpu::Vector4  lv4EndColour, const rw::math::vpu::Vector2  lv2StartScale, const rw::math::vpu::Vector2  lv2EndScale) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGuiFlaptInterpolatorComponent.cpp:102
		MovieClipRef lParent;

	}
}

// BrnGuiFlaptInterpolatorComponent.cpp:47
void BrnGui::FlaptInterpolatorComponent::Construct(const void *  lpUnused1, StateInterface *  lpStateInterface, const void *  lpUnused2) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlaptComponent::Construct(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	rw::math::vpu::Vector4::SetZero(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
	rw::math::vpu::Vector2::SetZero(/* parameters */);
	BrnFlapt::MovieClipRef::SetInvalid(/* parameters */);
}

// BrnGuiFlaptInterpolatorComponent.cpp:74
void BrnGui::FlaptInterpolatorComponent::Prepare(const char *  lacName, const const BrnFlapt::FileRef &  lFile, const char *  lacParentName) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	BrnFlaptComponent::Prepare(/* parameters */);
}

// BrnGuiFlaptInterpolatorComponent.cpp:125
void BrnGui::FlaptInterpolatorComponent::SetProportion(float32_t  lfNewProportion) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator-(/* parameters */);
	BrnFlapt::MovieClipRef::SetColourScale(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	{
	}
	rw::math::vpu::operator-(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	BrnFlapt::MovieClipRef::SetSizeScale(/* parameters */);
	rw::math::vpu::operator+(/* parameters */);
	Vector2<VectorAxisX, VectorAxisY>(/* parameters */);
	Vector2<VectorAxisZ, VectorAxisW>(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::operator*=<VectorAxisY>(/* parameters */);
	Set<VectorAxisX, VectorAxisY, VectorAxisX, VectorAxisY>(/* parameters */);
	rw::math::vpu::operator*=<VectorAxisX>(/* parameters */);
	rw::math::vpu::Normalize(/* parameters */);
	{
	}
	{
		{
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStream::StrStream(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnGuiFlaptInterpolatorComponent.cpp:29

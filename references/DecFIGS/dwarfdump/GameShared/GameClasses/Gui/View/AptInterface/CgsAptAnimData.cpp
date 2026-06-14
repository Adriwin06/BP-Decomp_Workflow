// CgsAptAnimData.cpp:37
void CgsGui::AnimChannelData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAptAnimData.cpp:61
void CgsGui::AnimChannelData::SetData(AnimChannelData::Time  lStartTime, AnimChannelData::Time  lEndTime, float32_t  lfStartValue, float32_t  lfEndValue, CgsGui::AnimChannelData::InterpolateType  leInterpolator, CgsGui::AnimChannelData::AnimationType  leAnimType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAptAnimData.cpp:79
void CgsGui::AnimData::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<CgsGui::AnimChannelData,6u>::Construct(/* parameters */);
	CgsContainers::Array<CgsGui::AnimData::AnimatorChannel,6u>::Construct(/* parameters */);
}

// CgsAptAnimData.cpp:136
void CgsGui::AnimData::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::Array<CgsGui::AnimChannelData,6u>::Clear(/* parameters */);
	CgsContainers::Array<CgsGui::AnimData::AnimatorChannel,6u>::Clear(/* parameters */);
}

// CgsAptAnimData.cpp:113
void CgsGui::AnimData::GetChannelData(CgsGui::AnimData::AnimatorChannel  leChannel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAnimData.cpp:115
		uint32_t luChannel;

		CgsContainers::Array<CgsGui::AnimData::AnimatorChannel,6u>::operator[](/* parameters */);
		CgsContainers::Array<CgsGui::AnimData::AnimatorChannel,6u>::GetLength(/* parameters */);
		CgsContainers::Array<CgsGui::AnimChannelData,6u>::operator[](/* parameters */);
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsAptAnimData.cpp:95
void CgsGui::AnimData::AddAnimationChannel(CgsGui::AnimData::AnimatorChannel  leChannel, AnimChannelData  lChannelData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAptAnimData.cpp:98
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::Array<CgsGui::AnimChannelData,6u>::Append(/* parameters */);
	CgsContainers::Array<CgsGui::AnimData::AnimatorChannel,6u>::Append(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}


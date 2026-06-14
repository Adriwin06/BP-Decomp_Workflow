// BrnCollisionTag.h:37
namespace BrnWorld {
	// BrnEnvironmentUtil.h:31
	namespace EnvironmentSettings {
		// BrnEnvironmentManager.cpp:49
		const char * KAC_JUNKYARD_LIGHTING_DATA_FILENAME;

		// BrnEnvironmentManager.cpp:50
		Vector3 K_DEFAULT_JUNKYARD_KEY_LIGHT_DIRECTION;

		// BrnEnvironmentManager.cpp:51
		float32_t KF_JUNKYARD_TIME_OF_DAY_SECONDS;

		// BrnEnvironmentManager.cpp:61
		const float32_t KF_SUN_RIG_ROTATION;

		// BrnEnvironmentManager.cpp:62
		const float32_t KF_SUN_TILT_AT_HORIZON;

		// BrnEnvironmentManager.cpp:63
		const float32_t KF_SUN_TILT_AT_MIDDAY;

	}

}

// BrnEnvironmentManager.cpp:533
void BrnWorld::EnvironmentSettings::EnvironmentManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEnvironmentManager.cpp:551
void BrnWorld::EnvironmentSettings::EnvironmentManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEnvironmentManager.cpp:1853
void BrnWorld::EnvironmentSettings::EnvironmentManager::DisableJunkyardLightingSetup() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SetTimeOfDay_Seconds(/* parameters */);
}

// BrnEnvironmentManager.cpp:620
void BrnWorld::EnvironmentSettings::EnvironmentManager::Pause(bool  lbPause) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEnvironmentManager.cpp:1780
void BrnWorld::EnvironmentSettings::EnvironmentManager::FindKeyframes(const const Keyframe *&  lpKeyframe0, const float32_t &  lfWeight0, const const Keyframe *&  lpKeyframe1, const float32_t &  lfWeight1, const const BrnWorld::EnvironmentSettings::TimeLine::LocationData &  lLocationData, float32_t  lfTimeOfDay) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentManager.cpp:1782
		uint32_t luKeyframe0;

		// BrnEnvironmentManager.cpp:1782
		uint32_t luKeyframe1;

	}
	FindKeyframeInds(/* parameters */);
}

// BrnEnvironmentManager.cpp:1865
void BrnWorld::EnvironmentSettings::EnvironmentManager::ReadJunkyardLightingData(const char *  lpcBuffer, uint32_t  luSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentManager.cpp:1868
		uint32_t luComponent;

		// BrnEnvironmentManager.cpp:1870
		bool lbInBrackets;

		// BrnEnvironmentManager.cpp:1871
		bool lbInComment;

		// BrnEnvironmentManager.cpp:1872
		bool lbReadThisFloat;

		// BrnEnvironmentManager.cpp:1874
		bool lbReadingJunkyardPosition;

		// BrnEnvironmentManager.cpp:1876
		Vector3 lCurrentVector;

		{
			// BrnEnvironmentManager.cpp:1879
			uint32_t luI;

		}
	}
	{
		// BrnEnvironmentManager.cpp:1881
		char lc;

	}
	{
		// BrnEnvironmentManager.cpp:1944
		char * lpcEndPtr;

		// BrnEnvironmentManager.cpp:1945
		float32_t lfCurrentValue;

		// BrnEnvironmentManager.cpp:1950
		int32_t liFloatLength;

		std(/* parameters */);
		rw::math::vpu::Vector3::SetComponent(/* parameters */);
	}
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::operator><VectorAxisY>(/* parameters */);
	{
		{
		}
	}
	rw::math::vpu::Vector3::SetY(/* parameters */);
	rw::math::vpu::operator< <VectorAxisY>(/* parameters */);
}

// BrnEnvironmentManager.cpp:1826
void BrnWorld::EnvironmentSettings::EnvironmentManager::EnableJunkyardLightingSetup() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentManager.cpp:1840
		VecFloat lNearestDistance;

		{
			// BrnEnvironmentManager.cpp:1841
			uint32_t luI;

		}
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		SetTimeOfDay_Seconds(/* parameters */);
	}
	{
		// BrnEnvironmentManager.cpp:1843
		VecFloat lDistance;

		rw::math::vpu::operator-(/* parameters */);
	}
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
}

// BrnEnvironmentManager.cpp:700
void BrnWorld::EnvironmentSettings::EnvironmentManager::GenerateEffects(BrnEffectsFrame *  lpEffectsFrameA0, BrnEffectsFrame *  lpEffectsFrameA1, BrnEffectsFrame *  lpEffectsFrameB0, BrnEffectsFrame *  lpEffectsFrameB1) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentManager.cpp:703
		BrnEffectsFrame *[4] lapEffectsFrames;

	}
	{
		// BrnEnvironmentManager.cpp:712
		uint32_t luFrame;

		{
			// BrnEnvironmentManager.cpp:714
			const Keyframe * lpKeyframe;

			// BrnEnvironmentManager.cpp:715
			float32_t lfWeight;

			// BrnEnvironmentManager.cpp:717
			BrnEffectsFrame * lpEffectsFrame;

			{
				// BrnEnvironmentManager.cpp:731
				Keyframe::BloomData lBloomData;

				// BrnEnvironmentManager.cpp:732
				Keyframe::VignetteData lVignetteData;

				BrnEffectsFrame::SetVignetteData(/* parameters */);
			}
			BrnEffectsFrame::SetBloomData(/* parameters */);
			BrnEffectsFrame::SetVignetteData(/* parameters */);
			BrnEffectsFrame::SetTintData(/* parameters */);
			BrnEffectsFrame::SetTintData(/* parameters */);
		}
	}
	BrnEffects::VignetteData::Construct(/* parameters */);
	BrnEffectsFrame::SetBloomData(/* parameters */);
	BrnEffects::BloomData::Construct(/* parameters */);
}

// BrnEnvironmentManager.cpp:89
void BrnWorld::EnvironmentSettings::EnvironmentManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentManager.cpp:166
		DebugInterface lDebugInterface;

		CgsModule::EventReceiverQueue<1024,16>::Construct(/* parameters */);
	}
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CgsNumeric::Random::Construct(/* parameters */);
	{
		CgsNumeric::Random::RandomFloat(/* parameters */);
	}
	BlendFrame::Construct(/* parameters */);
	ScatteringData::Construct(/* parameters */);
	LightingData::Construct(/* parameters */);
	CloudsData::Construct(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	CgsDev::DebugInterface::DebugInterface(/* parameters */);
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
}

// BrnEnvironmentManager.cpp:780
void BrnWorld::EnvironmentSettings::EnvironmentManager::GenerateShaderConstants(const Vector4 &  lOutputSkyTopColourDrk, const Vector4 &  lOutputSkyHorColourPow, const Vector4 &  lOutputSkySunColourPow, const Vector3 &  lOutputSkyHorBleedSclPow, const Vector4 &  lOutputScattTopColourDrk, const Vector4 &  lOutputScattHorColourPow, const Vector4 &  lOutputScattSunColourPow, const Vector3 &  lOutputScattHorBleedSclPow, const Vector4 &  lOutputScattCoeffs, const Vector3 &  lOutputKeyLightDirection, const Vector3 &  lOutputKeyLightColour, const Vector3 &  lOutputKeyLightSpecularColour, const Vector3 &  lOutputCloud0LiteColour, const Vector3 &  lOutputCloud1LiteColour, const Vector3 &  lOutputCloud0DarkColour, const Vector3 &  lOutputCloud1DarkColour, const Vector4 &  lOutputCloud0ScaleAndOffset, const Vector2 &  lOutputCloudOpacity, const Vector2 &  lOutputCloudDensity, const Vector2 &  lOutputCloudFeathering, const float32_t &  lfOutputWhiteLevel, const Matrix44 &  lOutputIrradianceMatrixR, const Matrix44 &  lOutputIrradianceMatrixG, const Matrix44 &  lOutputIrradianceMatrixB, const Vector3 &  lOutputAverageIrradianceColour, const Vector3 &  lOutputUnbiasedKeyLightDirection) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentManager.cpp:843
		float32_t ldD01_r;

		// BrnEnvironmentManager.cpp:886
		VecFloat lvfCloudScale;

		// BrnEnvironmentManager.cpp:909
		float32_t lfLightingScale;

		// BrnEnvironmentManager.cpp:928
		VecFloat lGlobalBrightnessScaleF;

		// BrnEnvironmentManager.cpp:929
		Vector4 lGlobalBrightnessScaleV4;

		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::Vector3::Set(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	{
		// BrnEnvironmentManager.cpp:859
		float32_t lfKeyLightElevationBiased;

		// BrnEnvironmentManager.cpp:860
		float32_t lfKeyLightElevationUnbiased;

	}
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::Vector2::GetX(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::Vector4::Set(/* parameters */);
	rw::math::vpu::Vector2::Set(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	VecFloat<VectorAxisX>(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	GlobalIrradianceManager::GetIrradianceMatrix(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	GlobalIrradianceManager::GetIrradianceMatrix(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	GlobalIrradianceManager::GetIrradianceMatrix(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::vpu::GetVecFloat_One(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::Vector4::Vector4(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
	rw::math::vpu::operator*=(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	rw::math::fpu::Max<float>(/* parameters */);
}

// BrnEnvironmentManager.cpp:1109
void BrnWorld::EnvironmentSettings::EnvironmentManager::StreamIn(UpdateOutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentManager.cpp:1111
		const CgsModule::Event * lpEvent;

		// BrnEnvironmentManager.cpp:1113
		int32_t liEventId;

		// BrnEnvironmentManager.cpp:1114
		int32_t liEventSize;

	}
	{
		// BrnEnvironmentManager.cpp:1256
		const AcquireResourceResponse * lpAquireResourceResponse;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		{
			// BrnEnvironmentManager.cpp:1252
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine>::operator=(/* parameters */);
	}
	{
		// BrnEnvironmentManager.cpp:1129
		const Dictionary * lpDictionary;

		// BrnEnvironmentManager.cpp:1130
		int32_t liTgtSeasonIdx;

		// BrnEnvironmentManager.cpp:1131
		const const BrnWorld::EnvironmentSettings::Dictionary::SeasonData & lTgtSeasonData;

	}
	CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::Dictionary>::GetMemoryResource(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::LoadBundle(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetEventId(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::ResourceIO::ResourceRequestQueue<4096>::LoadBundle(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		// BrnEnvironmentManager.cpp:1225
		const Dictionary * lpDictionary;

		// BrnEnvironmentManager.cpp:1226
		int32_t liSeasonIdx;

		// BrnEnvironmentManager.cpp:1227
		const const BrnWorld::EnvironmentSettings::Dictionary::SeasonData & lSeasonData;

	}
	CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::Dictionary>::GetMemoryResource(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::AcquireResource(/* parameters */);
	CgsResource::ResourceIO::ResourceRequestQueue<4096>::AcquireResource(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::Events::PoolEvent::SetEventId(/* parameters */);
	CgsResource::Events::PoolEvent::SetUser(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	{
		// BrnEnvironmentManager.cpp:1208
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnEnvironmentManager.cpp:1179
		const Dictionary * lpDictionary;

		// BrnEnvironmentManager.cpp:1180
		int32_t liTgtSeasonIdx;

		// BrnEnvironmentManager.cpp:1181
		const const BrnWorld::EnvironmentSettings::Dictionary::SeasonData & lTgtSeasonData;

	}
	CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::Dictionary>::GetMemoryResource(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::LoadBundle(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetEventId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::ResourceIO::ResourceRequestQueue<4096>::LoadBundle(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	{
		// BrnEnvironmentManager.cpp:1162
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnEnvironmentManager.cpp:1303
void BrnWorld::EnvironmentSettings::EnvironmentManager::RequestNextSeason() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentManager.cpp:1311
		Dictionary * lpDictionary;

	}
}

// BrnEnvironmentManager.cpp:205
void BrnWorld::EnvironmentSettings::EnvironmentManager::Prepare(UpdateOutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentManager.cpp:207
		const CgsModule::Event * lpEvent;

		// BrnEnvironmentManager.cpp:209
		int32_t liEventId;

		// BrnEnvironmentManager.cpp:210
		int32_t liEventSize;

	}
	{
		// BrnEnvironmentManager.cpp:292
		const AcquireResourceResponse * lpAquireResourceResponse;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		{
			// BrnEnvironmentManager.cpp:288
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsResource::ResourcePtr<rw::graphics::postfx::ColourCube>::operator=(/* parameters */);
		CgsResource::ResourcePtr<rw::graphics::postfx::ColourCube>::GetMemoryResource(/* parameters */);
	}
	BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::LoadBundle(/* parameters */);
	CgsResource::ResourceIO::ResourceRequestQueue<4096>::LoadBundle(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	{
		// BrnEnvironmentManager.cpp:330
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnEnvironmentManager.cpp:343
		char[256] lacResourceName;

	}
	Dictionary::BuildResourceName(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::AcquireResource(/* parameters */);
	CgsResource::ResourceIO::ResourceRequestQueue<4096>::AcquireResource(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::Events::PoolEvent::SetEventId(/* parameters */);
	CgsResource::Events::PoolEvent::SetUser(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		// BrnEnvironmentManager.cpp:376
		const AcquireResourceResponse * lpAquireResourceResponse;

		CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
		{
			// BrnEnvironmentManager.cpp:372
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
		CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::Dictionary>::operator=(/* parameters */);
	}
	RequestNextSeason(/* parameters */);
	{
		// BrnEnvironmentManager.cpp:499
		uint32_t luFileSize;

	}
	CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	{
		// BrnEnvironmentManager.cpp:250
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::AcquireResource(/* parameters */);
	CgsResource::ResourceIO::ResourceRequestQueue<4096>::AcquireResource(/* parameters */);
	CgsResource::Events::AcquireResourceRequest::Construct(/* parameters */);
	CgsResource::Events::PoolEvent::SetEventId(/* parameters */);
	CgsResource::Events::PoolEvent::SetUser(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::LoadBundle(/* parameters */);
	CgsResource::ResourceIO::ResourceRequestQueue<4096>::LoadBundle(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetUseHDCache(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::Events::LoadBundleRequest::SetAllowFailiure(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnEnvironmentManager.cpp:965
void BrnWorld::EnvironmentSettings::EnvironmentManager::StreamOut(UpdateOutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentManager.cpp:968
		const CgsModule::Event * lpEvent;

		// BrnEnvironmentManager.cpp:970
		int32_t liEventSize;

	}
	CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	{
		// BrnEnvironmentManager.cpp:1071
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	RequestNextSeason(/* parameters */);
	CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine>::ResourcePtr(/* parameters */);
	CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine>::operator=(/* parameters */);
	CgsResource::BaseResourcePtr::Reset(/* parameters */);
	~ResourcePtr(/* parameters */);
	{
		// BrnEnvironmentManager.cpp:994
		const Dictionary * lpDictionary;

		// BrnEnvironmentManager.cpp:995
		int32_t liTgtSeasonIdx;

		// BrnEnvironmentManager.cpp:996
		const const BrnWorld::EnvironmentSettings::Dictionary::SeasonData & lTgtSeasonData;

	}
	CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::Dictionary>::GetMemoryResource(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::UnloadBundle(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetUser(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::ResourceIO::ResourceRequestQueue<4096>::UnloadBundle(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	CgsModule::BaseEventReceiverQueue::GetFirstEvent(/* parameters */);
	{
		// BrnEnvironmentManager.cpp:1022
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnEnvironmentManager.cpp:1039
		const Dictionary * lpDictionary;

		// BrnEnvironmentManager.cpp:1040
		int32_t liTgtSeasonIdx;

		// BrnEnvironmentManager.cpp:1041
		const const BrnWorld::EnvironmentSettings::Dictionary::SeasonData & lTgtSeasonData;

	}
	CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::Dictionary>::GetMemoryResource(/* parameters */);
	BrnWorldIO::UpdateOutputBuffer::GetResourceRequestInterface(/* parameters */);
	BrnResource::GameDataIO::RequestInterface<4096>::UnloadBundle(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetFileName(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetEventId(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetPoolId(/* parameters */);
	CgsResource::Events::BundleLoaderEvent::SetLiveUpdateReplace(/* parameters */);
	CgsResource::ResourceIO::ResourceRequestQueue<4096>::UnloadBundle(/* parameters */);
	CgsModule::BaseEventReceiverQueue::Clear(/* parameters */);
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnEnvironmentManager.cpp:1285
void BrnWorld::EnvironmentSettings::EnvironmentManager::DiscardCurrSeason() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEnvironmentManager.cpp:1820
void BrnWorld::EnvironmentSettings::EnvironmentManager::LastKeyframe(const const Keyframe *&  lpKeyframe, const const BrnWorld::EnvironmentSettings::TimeLine::LocationData &  lLocationData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEnvironmentManager.cpp:1804
void BrnWorld::EnvironmentSettings::EnvironmentManager::FirstKeyframe(const const Keyframe *&  lpKeyframe, const const BrnWorld::EnvironmentSettings::TimeLine::LocationData &  lLocationData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEnvironmentManager.cpp:1582
void BrnWorld::EnvironmentSettings::EnvironmentManager::SetupSeasonsBlend(const BrnWorld::EnvironmentSettings::EnvironmentManager::BlendFrame &  lBlendFrame, UpdateOutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentManager.cpp:1584
		const TimeLine * lpTimeLine0;

		// BrnEnvironmentManager.cpp:1585
		const TimeLine * lpTimeLine1;

		// BrnEnvironmentManager.cpp:1675
		int32_t liLocationA;

		// BrnEnvironmentManager.cpp:1675
		int32_t liLocationB;

		// BrnEnvironmentManager.cpp:1677
		const const BrnWorld::EnvironmentSettings::TimeLine::LocationData & lLocationA0;

		// BrnEnvironmentManager.cpp:1678
		const const BrnWorld::EnvironmentSettings::TimeLine::LocationData & lLocationB0;

		// BrnEnvironmentManager.cpp:1679
		const const BrnWorld::EnvironmentSettings::TimeLine::LocationData & lLocationA1;

		// BrnEnvironmentManager.cpp:1680
		const const BrnWorld::EnvironmentSettings::TimeLine::LocationData & lLocationB1;

		CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine>::GetMemoryResource(/* parameters */);
	}
	LastKeyframe(/* parameters */);
	LastKeyframe(/* parameters */);
	LastKeyframe(/* parameters */);
	LastKeyframe(/* parameters */);
	DiscardCurrSeason(/* parameters */);
	FirstKeyframe(/* parameters */);
	FirstKeyframe(/* parameters */);
	FirstKeyframe(/* parameters */);
	FirstKeyframe(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine>::GetMemoryResource(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnEnvironmentManager.cpp:1504
void BrnWorld::EnvironmentSettings::EnvironmentManager::SetupTimeOfDayBlend(const BrnWorld::EnvironmentSettings::EnvironmentManager::BlendFrame &  lBlendFrame, UpdateOutputBuffer *  lpOutput, float32_t  lfCarSpeed) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentManager.cpp:1542
		const TimeLine * lpTimeLine;

		// BrnEnvironmentManager.cpp:1544
		int32_t liLocationA;

		// BrnEnvironmentManager.cpp:1544
		int32_t liLocationB;

		// BrnEnvironmentManager.cpp:1546
		const const BrnWorld::EnvironmentSettings::TimeLine::LocationData & lLocationA;

		// BrnEnvironmentManager.cpp:1547
		const const BrnWorld::EnvironmentSettings::TimeLine::LocationData & lLocationB;

		CgsResource::ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine>::GetMemoryResource(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnEnvironmentManager.cpp:1368
void BrnWorld::EnvironmentSettings::EnvironmentManager::SetupBlend(const BrnWorld::EnvironmentSettings::EnvironmentManager::BlendFrame &  lRes, float32_t  lfCarSpeed, UpdateOutputBuffer *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentManager.cpp:1371
		uint32_t luNumIts;

		{
			// BrnEnvironmentManager.cpp:1397
			const TimeLine * lpTimeLine;

			// BrnEnvironmentManager.cpp:1398
			int32_t liLocation;

			// BrnEnvironmentManager.cpp:1399
			const const BrnWorld::EnvironmentSettings::TimeLine::LocationData & lLocation;

			// BrnEnvironmentManager.cpp:1403
			DebugInterface lDebugInterface;

		}
		{
			// BrnEnvironmentManager.cpp:1455
			CgsDev::StrStream lStrStream;

		}
	}
}

// BrnEnvironmentManager.cpp:1472
void BrnWorld::EnvironmentSettings::EnvironmentManager::PerformBlend(const const BrnWorld::EnvironmentSettings::EnvironmentManager::BlendFrame &  lBlendFrame) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnEnvironmentManager.cpp:568
void BrnWorld::EnvironmentSettings::EnvironmentManager::Update(float32_t  lfPlayerCarSpeed, UpdateOutputBuffer *  lpOutput, const rw::math::vpu::Vector3  lCurrentCameraPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnEnvironmentManager.cpp:572
		const EffectsEnvironmentInterface & lEffectsInterface;

	}
	BrnWorldIO::UpdateOutputBuffer::GetEffectsEnvironmentInterface(/* parameters */);
	{
		// BrnEnvironmentManager.cpp:576
		VecFloat lvfSinDirection;

		// BrnEnvironmentManager.cpp:577
		VecFloat lvfCosDirection;

		// BrnEnvironmentManager.cpp:582
		Vector2 lCloud0Delta;

		// BrnEnvironmentManager.cpp:585
		Vector2 lvCloudVelocity;

		rw::math::vpu::SinCos(/* parameters */);
		vec_add(/* parameters */);
		vec_sel(/* parameters */);
		vec_cmpeq(/* parameters */);
		vec_and(/* parameters */);
		rw::math::vpu::operator/(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		vec_nmsub(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		vec_nmsub(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_madd(/* parameters */);
		vec_add(/* parameters */);
		vec_and(/* parameters */);
		vec_cts(/* parameters */);
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
		rw::math::vpu::RW_MATH_VPU_CreateVectorFromScalar_R(/* parameters */);
		{
		}
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator*(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
	}
	CgsModule::IOBuffer::UnlockForWrite(/* parameters */);
	SetupBlend(/* parameters */);
	PerformBlend(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	SetTimeOfDay_Seconds(/* parameters */);
	rw::math::vpu::Vector2::Vector2(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// _built-in_
namespace :: {
	// BrnEnvironmentManager.cpp:37
	extern float32_t gfBloomLuminanceScale;

	// BrnEnvironmentManager.cpp:38
	extern float32_t gfBloomThresholdScale;

	// BrnEnvironmentManager.cpp:39
	extern float32_t gfSpecularScale;

}

// BrnEnvironmentManager.cpp:53
// BrnEnvironmentManager.cpp:56
// BrnEnvironmentManager.cpp:58
// BrnEnvironmentManager.cpp:59

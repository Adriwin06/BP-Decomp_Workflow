// vertexbuffer.h:27
namespace BrnParticle {
	// BrnSparkRenderer.h:48
	namespace Native {
		// BrnTrailSystem.cpp:32
		const uint32_t kuUncachedMask;

		// BrnTrailSystem.cpp:33
		const float32_t krTrailHeightAdjustment;

		// BrnTrailSystem.cpp:34
		const rw::math::vpu::Vector3 kTrailHeightAdjustment;

		// BrnTrailSystem.cpp:35
		const float32_t krTrailsMinSegmentLength;

		// BrnTrailSystem.cpp:36
		const float32_t krTrailsMinSegmentLengthSquared;

		// BrnTrailSystem.cpp:38
		const char * kpcTrailTextureName;

	}

}

// BrnTrailSystem.cpp:472
void BrnParticle::Native::TrailEmitter::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrailSystem.cpp:485
void BrnParticle::Native::TrailEmitter::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrailSystem.cpp:110
void BrnParticle::Native::TrailSystem::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrailSystem.cpp:112
		int32_t lnIndex;

		CgsContainers::Stack<BrnParticle::Native::TrailEmitter*,96>::Clear(/* parameters */);
	}
}

// BrnTrailSystem.cpp:498
void BrnParticle::Native::TrailEmitter::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrailSystem.cpp:535
void BrnParticle::Native::TrailEmitter::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrailSystem.cpp:164
void BrnParticle::Native::TrailSystem::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrailSystem.cpp:166
		int32_t lnIndex;

	}
}

// BrnTrailSystem.cpp:518
void BrnParticle::Native::TrailEmitter::Prepare(BrnParticle::Native::TrailParams *  lpParams) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrailSystem.cpp:553
void BrnParticle::Native::TrailEmitter::Update(float32_t  lfCurrentTimeStep, float32_t  lfCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnTrailSystem.cpp:186
void BrnParticle::Native::TrailSystem::Update(float32_t  lfCurrentTimeStep, float32_t  lfCurrentTime, const rw::math::vpu::Matrix44 &  lViewProjMatrix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::Matrix44::Matrix44(/* parameters */);
	TrailRenderer::Update(/* parameters */);
	rw::math::vpu::Matrix44::operator=(/* parameters */);
}

// BrnTrailSystem.cpp:306
void BrnParticle::Native::TrailSystem::UpdateTrailType(int16_t  liSkidMarkTypeID, const rw::math::vpu::Vector4  lSkidMarkStartColour, const rw::math::vpu::Vector4  lSkidMarkEndColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisW>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloatRef<VectorAxisY>::operator float(/* parameters */);
}

// BrnTrailSystem.cpp:576
void BrnParticle::Native::TrailEmitter::AddTrailSegment(float32_t  lfCurrentTime, const rw::math::vpu::Vector3  lContactPoint, const rw::math::vpu::Vector3  lContactNormal, float32_t  lfSkidStrength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrailSystem.cpp:578
		Vector3 lPosition;

		// BrnTrailSystem.cpp:579
		Vector3 lTangent;

		// BrnTrailSystem.cpp:580
		float32_t lrCurrentTime;

		rw::math::vpu::operator+(/* parameters */);
	}
	rw::math::vpu::GetVector3_XAxis(/* parameters */);
	TrailSegmentCollection::WriteSegmentPosition(/* parameters */);
	TrailSegmentCollection::WriteSegmentTangent(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	TrailSegmentCollection::WriteSegmentTime(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	TrailSegmentCollection::WriteSegmentStrength(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	{
		// BrnTrailSystem.cpp:588
		Vector3 lPrevPos;

		// BrnTrailSystem.cpp:589
		Vector3 lDirectionVec;

		// BrnTrailSystem.cpp:590
		int32_t lnPrevIndex;

		rw::math::vpu::MagnitudeSquared(/* parameters */);
		rw::math::vpu::operator<=(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
	}
	rw::math::vpu::Normalize(/* parameters */);
	rw::math::vpu::Cross(/* parameters */);
	{
		// BrnTrailSystem.cpp:613
		Vector3 lPrevPrevPos;

		// BrnTrailSystem.cpp:614
		Vector3 lPrevDirectionVec;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Normalize(/* parameters */);
		rw::math::vpu::operator>(/* parameters */);
		{
		}
		rw::math::vpu::Dot(/* parameters */);
		TrailSegmentCollection::WriteSegmentPosition(/* parameters */);
		TrailSegmentCollection::WriteSegmentTangent(/* parameters */);
		TrailSegmentCollection::WriteSegmentTime(/* parameters */);
		TrailSegmentCollection::WriteSegmentStrength(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	}
	TrailSegmentCollection::WriteSegmentTangent(/* parameters */);
}

// BrnTrailSystem.cpp:84
void BrnParticle::Native::TrailSystem::Construct(HeapMalloc *  lpHeapMalloc, BrnGraphics::Im3dSkidsRenderer *  lpRenderer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrailSystem.cpp:86
		int32_t lnIndex;

		CgsContainers::Stack<BrnParticle::Native::TrailEmitter*,96>::Construct(/* parameters */);
	}
}

// BrnTrailSystem.cpp:235
void BrnParticle::Native::TrailSystem::AcquireTexture(uint32_t  uLionTextureNameHash, SafeResourceHandle<renderengine::Texture>  lTexture) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	TextureNameMap::Entry::HashString(/* parameters */);
	{
	}
	CgsResource::SafeResourceHandle<renderengine::Texture>::operator=(/* parameters */);
	CgsResource::ResourceHandle::CreateFromHandle(/* parameters */);
	std(/* parameters */);
}

// BrnTrailSystem.cpp:247
void BrnParticle::Native::TrailSystem::EndOfFrame() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrailSystem.cpp:272
		int32_t lnIndex;

		// BrnTrailSystem.cpp:273
		int32_t lnTrailType;

		{
			// BrnTrailSystem.cpp:251
			int32_t lnEmitterIndex;

			TrailEmitter::PostRender(/* parameters */);
		}
		{
			// BrnTrailSystem.cpp:260
			int32_t lnOldBuffer;

		}
		{
			// BrnTrailSystem.cpp:281
			BrnParticle::Native::TrailEmitter * lpEmitter;

			EmitterArray::operator[](/* parameters */);
			EmitterArray::RemoveEntry(/* parameters */);
			CgsContainers::Stack<BrnParticle::Native::TrailEmitter*,96>::Push(/* parameters */);
			CgsContainers::Stack<BrnParticle::Native::TrailEmitter*,96>::IsFull(/* parameters */);
		}
	}
}

// BrnTrailSystem.cpp:208
void BrnParticle::Native::TrailSystem::AttachTrailEmitter(int8_t  lu8TrailTypeID) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrailSystem.cpp:210
		BrnParticle::Native::TrailEmitter * lpTrailEmitter;

	}
	CgsContainers::Stack<BrnParticle::Native::TrailEmitter*,96>::IsEmpty(/* parameters */);
	CgsContainers::Stack<BrnParticle::Native::TrailEmitter*,96>::Peek(/* parameters */);
	CgsContainers::Stack<BrnParticle::Native::TrailEmitter*,96>::Pop(/* parameters */);
	CgsContainers::Stack<BrnParticle::Native::TrailEmitter*,96>::IsEmpty(/* parameters */);
	EmitterArray::AddEntry(/* parameters */);
}

// BrnTrailSystem.cpp:374
void BrnParticle::Native::TrailSystem::AddTrailSegment(TrailEmitterData *  lpTrailEmitterData, const rw::math::vpu::Vector3  lContactPoint, const rw::math::vpu::Vector3  lContactNormal, int8_t  lu8TrailTypeID, float32_t  lfSkidStrength, float32_t  lrCurrentTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrailSystem.cpp:378
		bool lbAlreadyHasEmitter;

		// BrnTrailSystem.cpp:379
		bool lbNeedANewEmitter;

		// BrnTrailSystem.cpp:380
		bool lbChangedTrailType;

		// BrnTrailSystem.cpp:381
		bool lbTooMuchTimePassedSinceLastTrail;

		// BrnTrailSystem.cpp:382
		bool lbRunOutOfSegments;

	}
	{
		// BrnTrailSystem.cpp:402
		BrnParticle::Native::TrailEmitter * lpTrailEmitter;

	}
	{
		// BrnTrailSystem.cpp:415
		const TrailSegmentCollection * lpSegmentCollection;

		// BrnTrailSystem.cpp:416
		int32_t lnIndex;

		TrailSegmentCollection::CopySegmentFromCollection(/* parameters */);
		TrailSegmentCollection::ReadSegmentTime(/* parameters */);
		rw::math::vpu::VecFloat::operator float(/* parameters */);
	}
}

// BrnTrailSystem.cpp:131
void BrnParticle::Native::TrailSystem::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrailSystem.cpp:133
		int32_t lnIndex;

		CgsContainers::Stack<BrnParticle::Native::TrailEmitter*,96>::Push(/* parameters */);
		EmitterArray::Prepare(/* parameters */);
	}
}

// BrnTrailSystem.cpp:330
void BrnParticle::Native::TrailSystem::Render(const float32_t  lfWhiteLevel) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnTrailSystem.cpp:335
		int32_t lnTrailType;

	}
	CgsResource::SafeResourceHandle<renderengine::Texture>::operator renderengine::Texture*(/* parameters */);
	{
		// BrnTrailSystem.cpp:342
		int32_t lnEmitterCount;

		EmitterArray::GetSize(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnTrailSystem.cpp:48

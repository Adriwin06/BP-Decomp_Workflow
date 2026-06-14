// CgsCollisionJobDescription.h:25
namespace CgsSceneManager {
	// CgsCollisionJobDescription.h:28
	namespace CgsCollision {
		// CgsPrimitivePairListBuilder.cpp:36
		const uint16_t[6] KAU16_VOLUME_SIZES;

	}

}

// CgsPrimitivePairListBuilder.cpp:66
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPrimitivePairListBuilder.cpp:83
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPrimitivePairListBuilder.cpp:102
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::Prepare(LinearMalloc *  lpMalloc, uint16_t  lNumPimitives) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPrimitivePairListBuilder.cpp:104
		int32_t liRequiredMemory;

		// CgsPrimitivePairListBuilder.cpp:105
		uint8_t * lpMemory;

	}
}

// CgsPrimitivePairListBuilder.cpp:131
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPrimitivePairListBuilder.cpp:751
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::AllocateMemory(int32_t  liBytes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPrimitivePairListBuilder.cpp:753
		void * lpMemory;

	}
}

// CgsPrimitivePairListBuilder.cpp:703
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::AddPrimitiveToList(CgsGeometric::Capsule *  lpCapsule) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPrimitivePairListBuilder.cpp:705
		int32_t liRequiredMemory;

		// CgsPrimitivePairListBuilder.cpp:707
		CgsGeometric::Capsule * lpPrimitive;

	}
}

// CgsPrimitivePairListBuilder.cpp:679
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::AddPrimitiveToList(CgsGeometric::Triangle4 *  lpTriangles) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPrimitivePairListBuilder.cpp:681
		int32_t liRequiredMemory;

		// CgsPrimitivePairListBuilder.cpp:683
		CgsGeometric::Triangle4 * lpPrimitive;

	}
}

// CgsPrimitivePairListBuilder.cpp:631
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::AddPrimitiveToList(Sphere *  lpSphere) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPrimitivePairListBuilder.cpp:633
		int32_t liRequiredMemory;

		// CgsPrimitivePairListBuilder.cpp:635
		Sphere * lpPrimitive;

	}
}

// CgsPrimitivePairListBuilder.cpp:603
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::AddCollisionHeader(CgsSceneManager::CgsCollision::PrimitivePairList::EVolumeType  lePrimTypeA, CgsSceneManager::CgsCollision::PrimitivePairList::EVolumeType  lePrimTypeB, float32_t  lfPadding, uint16_t  lu16PrimitiveATag, uint16_t  lu16PrimitiveBTag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPrimitivePairListBuilder.cpp:605
		CgsSceneManager::CgsCollision::PrimitivePairList::CollisionHeader * lpHeader;

	}
	PrimitivePairList::CollisionHeader::SetCheckSum(/* parameters */);
}

// CgsPrimitivePairListBuilder.cpp:442
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::AddPrimitivePair(Sphere *  lpSphereA, Sphere *  lpSphereB, float32_t  lfPadding, uint16_t  lu16PrimitiveTagA, uint16_t  lu16PrimitiveTagB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPrimitivePairListBuilder.cpp:727
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::AddPrimitiveToList(CgsGeometric::Cylinder *  lpCylinder) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPrimitivePairListBuilder.cpp:729
		int32_t liRequiredMemory;

		// CgsPrimitivePairListBuilder.cpp:731
		CgsGeometric::Cylinder * lpPrimitive;

	}
	operator=(/* parameters */);
}

// CgsPrimitivePairListBuilder.cpp:655
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::AddPrimitiveToList(Box *  lpBox) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPrimitivePairListBuilder.cpp:657
		int32_t liRequiredMemory;

		// CgsPrimitivePairListBuilder.cpp:659
		Box * lpPrimitive;

	}
	operator=(/* parameters */);
}

// CgsPrimitivePairListBuilder.cpp:548
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::AddPrimitivePair(CgsGeometric::Cylinder *  lpCylinder, Box *  lpBox, float32_t  lfPadding, uint16_t  lu16PrimitiveTagA, uint16_t  lu16PrimitiveTagB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPrimitivePairListBuilder.cpp:524
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::AddPrimitivePair(Box *  lpBox, Sphere *  lpSphere, float32_t  lfPadding, uint16_t  lu16PrimitiveTagA, uint16_t  lu16PrimitiveTagB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPrimitivePairListBuilder.cpp:500
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::AddPrimitivePair(Sphere *  lpSphere, Box *  lpBox, float32_t  lfPadding, uint16_t  lu16PrimitiveTagA, uint16_t  lu16PrimitiveTagB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPrimitivePairListBuilder.cpp:341
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::DebugRenderPrimitive(const VolRef::Volume *  lpVolume, const rw::math::vpu::Matrix44Affine &  lTransform) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPrimitivePairListBuilder.cpp:343
		DebugInterface lInt;

		// CgsPrimitivePairListBuilder.cpp:344
		const DebugRender & lDebugRender;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
	}
	CgsDev::DebugManager::ThreadSafeAquire(/* parameters */);
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	{
		// CgsPrimitivePairListBuilder.cpp:384
		Vector3 lHalfDimensions;

		// CgsPrimitivePairListBuilder.cpp:385
		const CylinderVolume * lpCylinder;

		// CgsPrimitivePairListBuilder.cpp:386
		float32_t lfRadius;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Vector3::SetZ(/* parameters */);
		rw::math::vpu::Vector3::SetX(/* parameters */);
		rw::math::vpu::Vector3::SetY(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
	{
		// CgsPrimitivePairListBuilder.cpp:361
		Vector3 lHalfDimensions;

		// CgsPrimitivePairListBuilder.cpp:362
		const CapsuleVolume * lpCapsule;

		// CgsPrimitivePairListBuilder.cpp:363
		float32_t lfRadius;

		rw::math::vpu::Vector3::Vector3(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Vector3::SetZ(/* parameters */);
		rw::math::vpu::Vector3::SetX(/* parameters */);
		rw::math::vpu::Vector3::SetY(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	{
		// CgsPrimitivePairListBuilder.cpp:351
		Vector3 lHalfDimensions;

		rw::collision::BoxVolume::GetDimensions(/* parameters */);
		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	{
		// CgsPrimitivePairListBuilder.cpp:375
		const SphereVolume * lpSphere;

		// CgsPrimitivePairListBuilder.cpp:376
		float32_t lfRadius;

		rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
	}
}

// CgsPrimitivePairListBuilder.cpp:571
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::AddCollisionHeader(CgsSceneManager::CgsCollision::PrimitivePairList::EVolumeType  lePrimType, float32_t  lfPadding, uint16_t  lu16PrimitiveTag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPrimitivePairListBuilder.cpp:573
		CgsSceneManager::CgsCollision::PrimitivePairList::CollisionHeader * lpHeader;

	}
	PrimitivePairList::CollisionHeader::SetCheckSum(/* parameters */);
}

// CgsPrimitivePairListBuilder.cpp:419
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::AddPrimitive(CgsGeometric::Cylinder *  lpCylinder, float32_t  lfPadding, uint16_t  lu16PrimitiveTag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPrimitivePairListBuilder.cpp:212
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::AddPrimitive(CgsGeometric::Capsule *  lpCapsule, float32_t  lfPadding, uint16_t  lu16PrimitiveTag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPrimitivePairListBuilder.cpp:191
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::AddPrimitive(CgsGeometric::Triangle4 *  lpTriangles, float32_t  lfPadding, uint16_t  lu16PrimitiveTag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPrimitivePairListBuilder.cpp:170
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::AddPrimitive(Box *  lpBox, float32_t  lfPadding, uint16_t  lu16PrimitiveTag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPrimitivePairListBuilder.cpp:149
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::AddPrimitive(Sphere *  lpSphere, float32_t  lfPadding, uint16_t  lu16PrimitiveTag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsPrimitivePairListBuilder.cpp:466
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::AddPrimitivePair(Box *  lpBoxA, Box *  lpBoxB, float32_t  lfPadding, uint16_t  lu16PrimitiveTagA, uint16_t  lu16PrimitiveTagB) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPrimitivePairListBuilder.cpp:469
		bool lbSameBox;

		rw::math::vpu::operator-(/* parameters */);
		rw::math::vpu::Magnitude(/* parameters */);
	}
	rw::math::vpu::operator-(/* parameters */);
	CgsGeometric::Box::GetTransform(/* parameters */);
	CgsGeometric::Box::GetTransform(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	CgsGeometric::Box::GetTransform(/* parameters */);
	CgsGeometric::Box::GetTransform(/* parameters */);
	CgsGeometric::Box::GetTransform(/* parameters */);
	CgsGeometric::Box::GetTransform(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::Dot(/* parameters */);
	{
	}
	rw::math::vpu::Dot(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	{
	}
	rw::math::vpu::Magnitude(/* parameters */);
	rw::math::vpu::operator>(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	rw::math::vpu::operator<(/* parameters */);
	{
		{
			{
			}
		}
	}
}

// CgsPrimitivePairListBuilder.cpp:237
void CgsSceneManager::CgsCollision::PrimitivePairListBuilder::AddPrimitive(const VolRef::Volume *  lpVolume, const rw::math::vpu::Matrix44Affine &  lTransform, float32_t  lfPadding, uint16_t  lu16PrimitiveTag) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsPrimitivePairListBuilder.cpp:301
		Cylinder lCylinderPrimitive;

		// CgsPrimitivePairListBuilder.cpp:304
		const CylinderVolume * lpCylinder;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		CgsGeometric::Cylinder::Set(/* parameters */);
		rw::collision::CylinderVolume::GetHalfHeight(/* parameters */);
	}
	{
		// CgsPrimitivePairListBuilder.cpp:267
		Capsule lCapsulePrimitive;

		// CgsPrimitivePairListBuilder.cpp:270
		const CapsuleVolume * lpCapsule;

		CgsGeometric::Capsule::Set(/* parameters */);
		rw::math::vpu::Vector3Plus::SetVector3(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
		rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
	}
	{
		// CgsPrimitivePairListBuilder.cpp:245
		Box lBoxPrimitive;

		// CgsPrimitivePairListBuilder.cpp:247
		Vector3 lHalfDims;

		// CgsPrimitivePairListBuilder.cpp:250
		const BoxVolume * lpBoxVolume;

		rw::collision::BoxVolume::GetDimensions(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	}
	{
		// CgsPrimitivePairListBuilder.cpp:286
		Sphere lSpherePrimitive;

		// CgsPrimitivePairListBuilder.cpp:289
		const SphereVolume * lpSphere;

		CgsGeometric::Sphere::Set(/* parameters */);
	}
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::Vector3Plus::SetPlus(/* parameters */);
}


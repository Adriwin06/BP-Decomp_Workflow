// BrnWorldRegion.h:27
namespace BrnWorld {
	// BrnPropZoneManager.cpp:675
	const VecFloat KVF_VELOCITY_FOR_MOVE;

}

// BrnPropZoneManager.cpp:920
void BrnWorld::PropGraphicsManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropZoneManager.cpp:922
		uint32_t i;

	}
}

// BrnPropZoneManager.cpp:953
void BrnWorld::PropGraphicsManager::Register(const BrnWorld::PropGraphicsManager::PropGraphicsReference::PropGraphics *  lpPropGraphics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropZoneManager.cpp:957
		uint32_t luType;

	}
}

// BrnPropZoneManager.cpp:1001
void BrnWorld::PropGraphicsManager::GetPropGraphics(uint32_t  luType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropZoneManager.cpp:80
void BrnWorld::PropZoneManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropZoneManager.cpp:95
void BrnWorld::PropZoneManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropZoneManager.cpp:110
void BrnWorld::PropZoneManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropZoneManager.cpp:936
void BrnWorld::PropGraphicsManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropZoneManager.cpp:938
		uint32_t i;

	}
}

// BrnPropZoneManager.cpp:980
void BrnWorld::PropGraphicsManager::UnRegister(uint32_t  luType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropZoneManager.cpp:1017
void BrnWorld::PropGraphicsManager::GetPropPartGraphics(uint32_t  luPropType, uint32_t  luPropPartType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropZoneManager.cpp:43
void BrnWorld::PropZoneManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropZoneManager.cpp:45
		uint16_t lZoneId;

	}
	CgsContainers::BitArray<9u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<100u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<9u>::UnSetAll(/* parameters */);
	CgsContainers::Array<uint32_t,80u>::Construct(/* parameters */);
}

// BrnPropZoneManager.cpp:892
void BrnWorld::PropZoneManager::GetZone(PropEntityID  lEntityId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropZoneManager.cpp:894
		uint16_t lu16PropIndex;

		PropEntityID::GetEntityIndex(/* parameters */);
	}
}

// BrnPropZoneManager.cpp:378
void BrnWorld::PropZoneManager::RemovePropFromScene(PropEntityInstance *  lpProp, const PropTypeData *  lpType, PropVolumeInstanceID  lPropVolumeInstanceID, InSceneUpdateInterface *  lpSceneInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropZoneManager.cpp:225
void BrnWorld::PropZoneManager::AddPropToScene(PropEntityInstance *  lpProp, const PropTypeData *  lpType, PropVolumeInstanceID  lPropVolumeInstanceID, InSceneUpdateInterface *  lpSceneInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropZoneManager.cpp:618
void BrnWorld::PropZoneManager::DeallocatePropInstancesBlock(uint32_t  luStartOfBlock, uint32_t  luSizeOfBlock) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropZoneManager.cpp:622
		int32_t liSlotIndex;

	}
	CgsContainers::BitArray<9u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<9u>::UnSetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnPropZoneManager.cpp:444
void BrnWorld::PropZoneManager::RemoveAllPropsAndParts(OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<9u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<9u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<5400u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<5400u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<100u>::UnSetAll(/* parameters */);
	PropCellManager::Clear(/* parameters */);
	CgsContainers::BitArray<15u>::UnSetAll(/* parameters */);
	{
		// BrnPropZoneManager.cpp:456
		int32_t liZoneIndex;

	}
	PropEntityIO::OutputBuffer_PreScene::GetSceneInputInterface(/* parameters */);
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveAllEntities(/* parameters */);
	PropEntityIO::OutputBuffer_PreScene::GetPropInputInterface(/* parameters */);
	BrnPhysics::Props::PropInputInterface::RemoveAllPropsAndParts(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnPropZoneManager.cpp:395
void BrnWorld::PropZoneManager::RemovePropFromSim(PropEntityInstance *  lpProp, const PropTypeData *  lpType, PropVolumeInstanceID  lPropVolumeInstanceID, OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	PropEntityInstance::IsPhysical(/* parameters */);
	PropEntityIO::OutputBuffer_PreScene::GetPropInputInterface(/* parameters */);
}

// BrnPropZoneManager.cpp:336
void BrnWorld::PropZoneManager::RemovePropFromContactGeneration(PropEntityInstance *  lpProp, const PropTypeData *  lpType, PropVolumeInstanceID  lPropVolumeInstanceID, InSceneUpdateInterface *  lpSceneInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropZoneManager.cpp:579
void BrnWorld::PropZoneManager::AllocatePropInstancesBlock(uint32_t  luSizeOfBlock) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropZoneManager.cpp:582
		int32_t liSlotIndex;

	}
}

// BrnPropZoneManager.cpp:599
void BrnWorld::PropZoneManager::AllocatePartInstancesBlock(uint32_t  luSizeOfBlock) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropZoneManager.cpp:602
		int32_t liSlotIndex;

	}
}

// BrnPropZoneManager.cpp:128
void BrnWorld::PropZoneManager::LoadZone(const PropZoneData *  lpZoneData, const PropPhysicsDataHeader *  lpTypes, const rw::math::vpu::Vector3  lPlayerPosition, OutputBuffer_PreScene *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropZoneManager.cpp:130
		int32_t liZoneId;

		// BrnPropZoneManager.cpp:131
		int32_t liStartIndex;

		// BrnPropZoneManager.cpp:132
		int32_t liZoneDataPropIndex;

		// BrnPropZoneManager.cpp:133
		int32_t liNumPartsInZone;

		// BrnPropZoneManager.cpp:134
		int32_t liPartsStartIndex;

		// BrnPropZoneManager.cpp:135
		int32_t liPartPoolIndex;

		// BrnPropZoneManager.cpp:136
		int32_t liPoolIndex;

		// BrnPropZoneManager.cpp:137
		PropVolumeInstanceID lPropVolumeInstanceID;

		// BrnPropZoneManager.cpp:138
		InSceneUpdateInterface * lpSceneInput;

		// BrnPropZoneManager.cpp:139
		int32_t liNumberOfPropsInZone;

		// BrnPropZoneManager.cpp:180
		const int32_t KI_PROP_LOOP_UNRAVEL;

		// BrnPropZoneManager.cpp:181
		int32_t liUnravelIterations;

		PropEntityIO::OutputBuffer_PreScene::GetSceneInputInterface(/* parameters */);
		IsZoneLoaded(/* parameters */);
		AllocatePropInstancesBlock(/* parameters */);
		AllocatePartInstancesBlock(/* parameters */);
		CgsContainers::BitArray<9u>::GetFirstZeroBit(/* parameters */);
		CgsContainers::BitArray<9u>::SetBit(/* parameters */);
		{
			// BrnPropZoneManager.cpp:173
			uintptr_t luAddress;

		}
		{
			// BrnPropZoneManager.cpp:174
			uintptr_t luAddress;

		}
		CgsContainers::Array<uint32_t,80u>::Clear(/* parameters */);
		{
			// BrnPropZoneManager.cpp:208
			CgsDev::StrStream lStrStream;

			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnPropZoneManager.cpp:203
		uintptr_t luAddress;

	}
	{
		// BrnPropZoneManager.cpp:185
		uintptr_t luAddress;

	}
	{
		// BrnPropZoneManager.cpp:188
		uintptr_t luAddress;

	}
	{
		// BrnPropZoneManager.cpp:191
		uintptr_t luAddress;

	}
	{
		// BrnPropZoneManager.cpp:194
		uintptr_t luAddress;

	}
	{
		// BrnPropZoneManager.cpp:170
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnPropZoneManager.cpp:637
void BrnWorld::PropZoneManager::DeallocatePartInstancesBlock(uint32_t  luStartOfBlock, uint32_t  luSizeOfBlock) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropZoneManager.cpp:641
		int32_t liSlotIndex;

	}
	CgsContainers::BitArray<9u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<9u>::UnSetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnPropZoneManager.cpp:652
void BrnWorld::PropZoneManager::UpdateAnimation(float32_t  lrTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropZoneManager.cpp:656
		int32_t liAnimationIndex;

	}
	CgsContainers::BitArray<100u>::GetFirstNonZeroBit(/* parameters */);
	{
		// BrnPropZoneManager.cpp:658
		PropEntityRotationParams * lpRotationParams;

		// BrnPropZoneManager.cpp:659
		int32_t liPropIndex;

		// BrnPropZoneManager.cpp:660
		PropEntityInstance * lpPropToUpdate;

	}
	CgsContainers::BitArray<100u>::GetNextNonZeroBit(/* parameters */);
}

// BrnPropZoneManager.cpp:685
void BrnWorld::PropZoneManager::UpdateInstance(PropEntityID  lEntityId, const rw::math::vpu::Matrix44Affine &  lTransform, const rw::math::vpu::Vector3  lLinearVelocity, const rw::math::vpu::Vector3  lAngularVelocity, bool  lbFrozen, const PropPhysicsResourcePtr &  laTypeData, float32_t  lfTimeStep, OutputBuffer_PostPhysics *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropZoneManager.cpp:687
		InSceneUpdateInterface * lpSceneInterface;

		// BrnPropZoneManager.cpp:688
		PropEntityInstance * lpProp;

		// BrnPropZoneManager.cpp:689
		const PropTypeData * lpType;

		// BrnPropZoneManager.cpp:694
		int32_t liPropIndex;

		// BrnPropZoneManager.cpp:696
		bool lbFellOutOfTheWorld;

		PropEntityIO::OutputBuffer_PostPhysics::GetSceneInputInterface(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	rw::math::vpu::IsValid(/* parameters */);
	PropEntityID::GetEntityIndex(/* parameters */);
	rw::math::vpu::Matrix44Affine::Pos(/* parameters */);
	rw::math::vpu::Vector3::Y(/* parameters */);
	rw::math::vpu::operator< <VectorAxisY>(/* parameters */);
	PropEntityInstance::GetState(/* parameters */);
	PropEntityInstance::IsSmashed(/* parameters */);
	{
		// BrnPropZoneManager.cpp:714
		const float32_t KF_MAX_VALID_POSITION_ALONG_AXIS;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::IsValid(/* parameters */);
		rw::math::vpu::operator< <VectorAxisX>(/* parameters */);
		rw::math::vpu::operator< <VectorAxisY>(/* parameters */);
		rw::math::vpu::operator< <VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator><VectorAxisX>(/* parameters */);
		rw::math::vpu::operator><VectorAxisZ>(/* parameters */);
		rw::math::vpu::operator< <VectorAxisY>(/* parameters */);
	}
	PropEntityInstance::IsSmashed(/* parameters */);
	PropEntityInstance::GetPhysicsIndex(/* parameters */);
	PropCellManager::IncrementPropsTimeInSim(/* parameters */);
	{
		// BrnPropZoneManager.cpp:773
		PropVolumeInstanceID lPropVolumeInstanceID;

		// BrnPropZoneManager.cpp:774
		uint32_t luVolumeIndex;

		rw::math::vpu::IsZero(/* parameters */);
	}
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	PropVolumeInstanceID::Set(/* parameters */);
	PropEntityID::operator CgsSceneManager::EntityId(/* parameters */);
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::SetEntityPosition(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::AddEvent(/* parameters */);
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::SetVolumeInstanceTransform(/* parameters */);
	operator=(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	PropVolumeInstanceID::SetVolumeNumber(/* parameters */);
	PropVolumeInstanceID::operator CgsSceneManager::VolumeInstanceId(/* parameters */);
	rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnPropZoneManager.cpp:833
		PropPartEntityInstance * lpPart;

		// BrnPropZoneManager.cpp:834
		const PropPartTypeData * lpPartType;

		// BrnPropZoneManager.cpp:835
		PropVolumeInstanceID lPropVolumeInstanceID;

		// BrnPropZoneManager.cpp:836
		uint32_t luVolumeIndex;

		PropEntityInstance::IsSmashed(/* parameters */);
		PropEntityID::GetPartIndex(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		PropVolumeInstanceID::SetPropEntityId(/* parameters */);
		CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
		PropCellManager::IncrementPartsTimeInSim(/* parameters */);
		PropEntityID::operator CgsSceneManager::EntityId(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::SetEntityPosition(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventSetEntityPosition>::AddEvent(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::SetVolumeInstanceTransform(/* parameters */);
		operator=(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		PropVolumeInstanceID::SetVolumeNumber(/* parameters */);
		PropVolumeInstanceID::operator CgsSceneManager::VolumeInstanceId(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
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
	PropCellManager::DecrementNumberOfPartsInSim(/* parameters */);
	FreePhysicalPartSlot(/* parameters */);
	CgsContainers::BitArray<30u>::IsBitSet(/* parameters */);
	CgsContainers::BitArray<30u>::UnSetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnPropZoneManager.cpp:704
		CgsDev::StrStream lStrStream;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		PropEntityID::GetValue(/* parameters */);
	}
	PropCellManager::DecrementNumberOfPropsInSim(/* parameters */);
	PropEntityInstance::SetState(/* parameters */);
	PropEntityInstance::GetPhysicsIndex(/* parameters */);
	FreePhysicalPropSlot(/* parameters */);
	{
		// BrnPropZoneManager.cpp:752
		PropVolumeInstanceID lVolumeInstanceId;

		PropVolumeInstanceID::Set(/* parameters */);
		PropEntityIO::OutputBuffer_PostPhysics::GetSceneInputInterface(/* parameters */);
		PropEntityIO::OutputBuffer_PostPhysics::GetSceneInputInterface(/* parameters */);
	}
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
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnPropZoneManager.cpp:725
		CgsDev::StrStream lStrStream;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsResource::ID::GetHash(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	}
	{
		// BrnPropZoneManager.cpp:720
		CgsDev::StrStream lStrStream;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsResource::ID::GetHash(/* parameters */);
	}
	{
		// BrnPropZoneManager.cpp:719
		CgsDev::StrStream lStrStream;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsResource::ID::GetHash(/* parameters */);
	}
	{
		// BrnPropZoneManager.cpp:718
		CgsDev::StrStream lStrStream;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsResource::ID::GetHash(/* parameters */);
	}
	{
		// BrnPropZoneManager.cpp:717
		CgsDev::StrStream lStrStream;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsResource::ID::GetHash(/* parameters */);
	}
	{
		// BrnPropZoneManager.cpp:716
		CgsDev::StrStream lStrStream;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsResource::ID::GetHash(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// BrnPropZoneManager.cpp:782
		PropBecamePhysicalEvent * lpEvent;

		// BrnPropZoneManager.cpp:789
		PropVFXLocatorEvent lVFXEvent;

		PropEntityInstance::SetMovedTrue(/* parameters */);
		PropEntityIO::OutputBuffer_PostPhysics::GetPropBecamePhysicalEventQueue(/* parameters */);
		CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropBecamePhysicalEvent>::AllocateEventSafe(/* parameters */);
		PropEntityIO::OutputBuffer_PostPhysics::GetPropVFXLocatorQueue(/* parameters */);
		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
		PropEntityInstance::GetTypeId(/* parameters */);
		CgsModule::BaseEventQueue<BrnWorld::PropEntityIO::PropVFXLocatorEvent>::AddEventSafe(/* parameters */);
		BrnPhysics::Props::PropTypeData::IsOverheadSign(/* parameters */);
		{
			// BrnPropZoneManager.cpp:798
			HitOverheadSignEvent lHitPropEvent;

			PropEntityIO::OutputBuffer_PostPhysics::GetHitOverheadSignQueue(/* parameters */);
			CgsModule::BaseEventQueue<BrnGameState::GameStateModuleIO::HitOverheadSignEvent>::AddEvent(/* parameters */);
		}
	}
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnPropZoneManager.cpp:280
void BrnWorld::PropZoneManager::AddPropPartsToContactGeneration(PropEntityInstance *  lpProp, const PropTypeData *  lpType, PropVolumeInstanceID  lPropVolumeInstanceID, InSceneUpdateInterface *  lpSceneInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropZoneManager.cpp:259
void BrnWorld::PropZoneManager::AddPropToContactGeneration(PropEntityInstance *  lpProp, const PropTypeData *  lpType, PropVolumeInstanceID  lPropVolumeInstanceID, InSceneUpdateInterface *  lpSceneInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropZoneManager.cpp:357
void BrnWorld::PropZoneManager::RemovePropPartsFromContactGeneration(PropEntityInstance *  lpProp, const PropTypeData *  lpType, PropVolumeInstanceID  lPropVolumeInstanceID, InSceneUpdateInterface *  lpSceneInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropZoneManager.cpp:242
void BrnWorld::PropZoneManager::AddPropPartsToScene(PropEntityInstance *  lpProp, const PropTypeData *  lpType, PropVolumeInstanceID  lPropVolumeInstanceID, InSceneUpdateInterface *  lpSceneInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropZoneManager.cpp:413
void BrnWorld::PropZoneManager::RemovePropPartsFromScene(PropEntityInstance *  lpProp, const PropTypeData *  lpType, PropVolumeInstanceID  lPropVolumeInstanceID, InSceneUpdateInterface *  lpSceneInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropZoneManager.cpp:430
void BrnWorld::PropZoneManager::UpdateCollisionStreaming(const rw::math::vpu::Vector3  lPlayerPos, const PropPhysicsDataHeader *  lpaTypes, RecentlyBrokenPropsArray *  lpRecentlyBrokenProps, OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropZoneManager.cpp:483
void BrnWorld::PropZoneManager::UnloadZone(uint16_t  luZoneId, const PropPhysicsResourcePtr &  lpaTypes, RecentlyBrokenPropsArray *  lpRecentlyBrokenProps, OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropZoneManager.cpp:485
		PropVolumeInstanceID lPropVolumeInstanceID;

		// BrnPropZoneManager.cpp:486
		uint16_t luStartIndex;

		// BrnPropZoneManager.cpp:487
		uint16_t luInstance;

		// BrnPropZoneManager.cpp:488
		int32_t liEndIndexOfZone;

		IsZoneLoaded(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::GetMemoryResource(/* parameters */);
	{
		// BrnPropZoneManager.cpp:511
		PropEntityInstance * lpProp;

		// BrnPropZoneManager.cpp:512
		const PropTypeData * lpType;

		BrnPhysics::Props::PropPhysicsDataHeader::GetType(/* parameters */);
		PropVolumeInstanceID::SetEntityIndex(/* parameters */);
		PropEntityID::operator CgsSceneManager::EntityId(/* parameters */);
		CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
		PropEntityInstance::IsSmashed(/* parameters */);
		PropEntityIO::OutputBuffer_PreScene::GetSceneInputInterface(/* parameters */);
		PropEntityInstance::IsSmashed(/* parameters */);
		PropEntityIO::OutputBuffer_PreScene::GetSceneInputInterface(/* parameters */);
		PropEntityInstance::IsPhysical(/* parameters */);
		CgsContainers::BitArray<100u>::IsBitSet(/* parameters */);
		CgsContainers::BitArray<100u>::UnSetBit(/* parameters */);
	}
	CgsResource::ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>::operator->(/* parameters */);
	PropEntityInstance::GetTypeId(/* parameters */);
	PropEntityIO::OutputBuffer_PreScene::GetSceneInputInterface(/* parameters */);
	PropEntityIO::OutputBuffer_PreScene::GetSceneInputInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnPropZoneManager.cpp:909
void BrnWorld::PropZoneManager::CanSmash(PropEntityID  lPropEntityId, PropPhysicsDataHeader *  lpPropTypes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


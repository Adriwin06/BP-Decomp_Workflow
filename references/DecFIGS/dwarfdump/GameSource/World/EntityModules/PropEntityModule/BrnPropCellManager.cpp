// BrnPropCellManager.cpp:395
void BrnWorld::PropCellManager::CanAddPartVolumes(const PropTypeData *  lpType) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropCellManager.cpp:397
		int32_t liPartIndex;

		// BrnPropCellManager.cpp:400
		int32_t liNumVolumesNeeded;

		// BrnPropCellManager.cpp:407
		bool lbInBudget;

	}
}

// BrnPropCellManager.cpp:198
void BrnWorld::PropCellManager::GenerateTargetList(const rw::math::vpu::Vector3  lPlayerPos) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropCellManager.cpp:201
		int32_t liHorizontalNeighbour;

		// BrnPropCellManager.cpp:202
		int32_t liVerticalNeighbour;

		// BrnPropCellManager.cpp:204
		float32_t lfX;

		// BrnPropCellManager.cpp:205
		float32_t lfZ;

		// BrnPropCellManager.cpp:218
		const float32_t KF_CELL_WIDTH;

		// BrnPropCellManager.cpp:219
		const float32_t KF_CELL_DEPTH;

		// BrnPropCellManager.cpp:220
		float32_t lfGridX;

		// BrnPropCellManager.cpp:221
		float32_t lfGridZ;

		// BrnPropCellManager.cpp:224
		uint16_t luPlayerGridX;

		// BrnPropCellManager.cpp:225
		uint16_t luPlayerGridZ;

		rw::math::vpu::VecFloatRef<VectorAxisX>::operator float(/* parameters */);
	}
	rw::math::vpu::VecFloatRef<VectorAxisZ>::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::operator float(/* parameters */);
	rw::math::vpu::VecFloat::VecFloat(/* parameters */);
	BrnPhysics::Props::PropCellId::Construct(/* parameters */);
	BrnPhysics::Props::PropCellId::Construct(/* parameters */);
	BrnPhysics::Props::PropCellId::Construct(/* parameters */);
	BrnPhysics::Props::PropCellId::Construct(/* parameters */);
}

// BrnPropCellManager.cpp:67
void BrnWorld::PropCellManager::AddCells(const PropZoneData *  lpZone, int32_t  liStartIndexOfZone) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropCellManager.cpp:70
		int32_t liCellIndex;

		{
			// BrnPropCellManager.cpp:74
			const PropCellData * lpCellData;

			BrnPhysics::Props::PropZoneData::GetCellData(/* parameters */);
			IsCellLoaded(/* parameters */);
			BrnPhysics::Props::PropCellData::GetId(/* parameters */);
			BrnPhysics::Props::PropCellId::operator==(/* parameters */);
			PropCellRecord::Constuct(/* parameters */);
		}
	}
}

// BrnPropCellManager.cpp:1146
void _GLOBAL__D_giDebugOnlyRenderThisCarPart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropCellManager.cpp:1145
void _GLOBAL__I_giDebugOnlyRenderThisCarPart() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnPropCellManager.cpp:38
void BrnWorld::PropCellManager::Construct(PropEntityInstance *  lpaPropInstances, PropPartEntityInstance *  lpaPropPartInstances) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<15u>::UnSetAll(/* parameters */);
	CgsContainers::BitArray<30u>::UnSetAll(/* parameters */);
}

// BrnPropCellManager.cpp:818
void BrnWorld::PropCellManager::RemovePropFromScene(PropEntityInstance *  lpProp, const PropTypeData *  lpType, PropVolumeInstanceID  lPropVolumeInstanceID, InSceneUpdateInterface *  lpSceneUpdate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	PropEntityInstance::IsPhysical(/* parameters */);
	PropEntityInstance::SetAddedToSceneFalse(/* parameters */);
	PropVolumeInstanceID::GetPropEntityID(/* parameters */);
	PropEntityID::PropEntityID(/* parameters */);
	PropEntityID::operator CgsSceneManager::EntityId(/* parameters */);
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveEntity(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventRemoveEntity>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnPropCellManager.cpp:688
void BrnWorld::PropCellManager::AddPropToScene(PropEntityInstance *  lpProp, const PropTypeData *  lpType, PropVolumeInstanceID  lPropVolumeInstanceID, InSceneUpdateInterface *  lpSceneInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropCellManager.cpp:690
		PropVolumeID lVolumeId;

		// BrnPropCellManager.cpp:691
		Matrix44Affine lTransform;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	PropEntityInstance::IsSmashed(/* parameters */);
	PropEntityInstance::IsPhysical(/* parameters */);
	{
		// BrnPropCellManager.cpp:711
		const float32_t KF_MAX_VALID_POSITION_ALONG_AXIS;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	PropEntityInstance::SetAddedToSceneTrue(/* parameters */);
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
	rw::math::vpu::operator><VectorAxisY>(/* parameters */);
	rw::math::vpu::operator><VectorAxisZ>(/* parameters */);
	PropVolumeInstanceID::GetPropEntityID(/* parameters */);
	PropEntityID::PropEntityID(/* parameters */);
	PropEntityID::operator CgsSceneManager::EntityId(/* parameters */);
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddEntity(/* parameters */);
	CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::AddEvent(/* parameters */);
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
}

// BrnPropCellManager.cpp:627
void BrnWorld::PropCellManager::RemovePropFromSim(PropEntityInstance *  lpProp, const PropTypeData *  lpType, PropVolumeInstanceID  lPropVolumeInstanceID, PropInputInterface *  lpPropPhysicsInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropCellManager.cpp:632
		int32_t liPhysicalPropIndex;

		PropEntityInstance::IsAddedToSim(/* parameters */);
		PropEntityInstance::GetPhysicsIndex(/* parameters */);
		FreePhysicalPropSlot(/* parameters */);
		PropVolumeInstanceID::GetPropEntityID(/* parameters */);
		BrnPhysics::Props::PropInputInterface::RemovePropInstance(/* parameters */);
		PropEntityInstance::SetState(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnPropCellManager.cpp:424
void BrnWorld::PropCellManager::RemovePropFromContactGeneration(PropEntityInstance *  lpProp, const PropTypeData *  lpType, PropVolumeInstanceID  lPropVolumeInstanceID, InSceneUpdateInterface *  lpSceneInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropCellManager.cpp:426
		int32_t liCollisionVolumeIndex;

		PropEntityInstance::SetAddedToContactGenFalse(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveForCollision(/* parameters */);
		PropVolumeInstanceID::operator CgsSceneManager::VolumeInstanceId(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveVolumeInstance(/* parameters */);
		PropVolumeInstanceID::SetVolumeNumber(/* parameters */);
		PropVolumeInstanceID::operator CgsSceneManager::VolumeInstanceId(/* parameters */);
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
}

// BrnPropCellManager.cpp:331
void BrnWorld::PropCellManager::AddPropPartsToContactGeneration(PropEntityInstance *  lpProp, PropPartEntityInstance *  lpaParts, const PropTypeData *  lpType, PropVolumeInstanceID  lPropVolumeInstanceID, InSceneUpdateInterface *  lpSceneInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropCellManager.cpp:333
		int32_t liPartsCollisionVolumeIndex;

		// BrnPropCellManager.cpp:334
		int32_t liCollisionVolumeIndex;

		// BrnPropCellManager.cpp:335
		int32_t liPartIndex;

		// BrnPropCellManager.cpp:336
		PropVolumeID lVolumeId;

		// BrnPropCellManager.cpp:337
		PropPartEntityInstance * lpPart;

	}
	PropEntityInstance::SetAddedToContactGenTrue(/* parameters */);
	PropVolumeInstanceID::SetPartIndex(/* parameters */);
	PropEntityID::PropEntityID(/* parameters */);
	PropEntityID::SetPartIndex(/* parameters */);
	PropEntityID::operator CgsSceneManager::EntityId(/* parameters */);
	CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
	PropVolumeID::Set(/* parameters */);
	PropVolumeInstanceID::operator CgsSceneManager::VolumeInstanceId(/* parameters */);
	CgsSceneManager::VolumeId::Set(/* parameters */);
	PropVolumeID::operator CgsSceneManager::VolumeId(/* parameters */);
	PropVolumeInstanceID::operator CgsSceneManager::VolumeInstanceId(/* parameters */);
	PropVolumeID::AssertIsProp(/* parameters */);
	PropVolumeInstanceID::SetVolumeNumber(/* parameters */);
}

// BrnPropCellManager.cpp:266
void BrnWorld::PropCellManager::AddPropToContactGeneration(PropEntityInstance *  lpProp, const PropTypeData *  lpType, PropVolumeInstanceID  lPropVolumeInstanceID, InSceneUpdateInterface *  lpSceneInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropCellManager.cpp:268
		PropVolumeID lVolumeId;

		// BrnPropCellManager.cpp:269
		Matrix44Affine lTransform;

		// BrnPropCellManager.cpp:270
		int32_t liCollisionVolumeIndex;

		rw::math::vpu::Matrix44Affine::Matrix44Affine(/* parameters */);
	}
	PropEntityInstance::SetAddedToContactGenTrue(/* parameters */);
	PropVolumeID::Set(/* parameters */);
	PropVolumeInstanceID::SetVolumeNumber(/* parameters */);
	CgsSceneManager::VolumeId::Set(/* parameters */);
	PropVolumeInstanceID::operator CgsSceneManager::VolumeInstanceId(/* parameters */);
	PropVolumeID::operator CgsSceneManager::VolumeId(/* parameters */);
	PropVolumeInstanceID::operator CgsSceneManager::VolumeInstanceId(/* parameters */);
	PropVolumeID::AssertIsProp(/* parameters */);
}

// BrnPropCellManager.cpp:456
void BrnWorld::PropCellManager::RemovePropPartsFromContactGeneration(PropEntityInstance *  lpProp, const PropTypeData *  lpType, PropVolumeInstanceID  lPropVolumeInstanceID, InSceneUpdateInterface *  lpSceneUpdate) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropCellManager.cpp:458
		int32_t liCollisionVolumeIndex;

		// BrnPropCellManager.cpp:459
		int32_t liPartIndex;

		PropEntityInstance::SetAddedToContactGenFalse(/* parameters */);
	}
	PropVolumeInstanceID::SetPartIndex(/* parameters */);
	PropEntityID::PropEntityID(/* parameters */);
	PropEntityID::SetPartIndex(/* parameters */);
	PropEntityID::operator CgsSceneManager::EntityId(/* parameters */);
	CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveVolumeInstance(/* parameters */);
	PropVolumeInstanceID::operator CgsSceneManager::VolumeInstanceId(/* parameters */);
	CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveForCollision(/* parameters */);
	PropVolumeInstanceID::SetVolumeNumber(/* parameters */);
	PropVolumeInstanceID::operator CgsSceneManager::VolumeInstanceId(/* parameters */);
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

// BrnPropCellManager.cpp:653
void BrnWorld::PropCellManager::RemovePropPartsFromSimIfPhysical(PropEntityInstance *  lpProp, const PropTypeData *  lpType, PropVolumeInstanceID  lPropVolumeInstanceID, OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropCellManager.cpp:656
		PropPartEntityInstance * lpaParts;

		// BrnPropCellManager.cpp:657
		PropPartEntityInstance * lpPart;

		// BrnPropCellManager.cpp:658
		PropVolumeInstanceID lPartVolumeInstanceId;

		{
			// BrnPropCellManager.cpp:660
			int32_t liPartIndex;

		}
	}
	PropVolumeInstanceID::SetPartIndex(/* parameters */);
	PropEntityID::PropEntityID(/* parameters */);
	PropEntityID::SetPartIndex(/* parameters */);
	PropEntityID::operator CgsSceneManager::EntityId(/* parameters */);
	CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
	FreePhysicalPartSlot(/* parameters */);
	PropEntityIO::OutputBuffer_PreScene::GetPropInputInterface(/* parameters */);
	PropVolumeInstanceID::GetPropEntityID(/* parameters */);
	BrnPhysics::Props::PropInputInterface::RemovePartInstance(/* parameters */);
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

// BrnPropCellManager.cpp:749
void BrnWorld::PropCellManager::AddPropPartsToScene(PropEntityInstance *  lpProp, const PropTypeData *  lpType, PropVolumeInstanceID  lPropVolumeInstanceID, InSceneUpdateInterface *  lpSceneInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropCellManager.cpp:751
		uint32_t luPartIndex;

		// BrnPropCellManager.cpp:752
		uint32_t luVolumeIndex;

		// BrnPropCellManager.cpp:753
		const PropPartTypeData * lpPartType;

		// BrnPropCellManager.cpp:754
		PropVolumeID lVolumeId;

		// BrnPropCellManager.cpp:755
		PropEntityID lPartId;

		// BrnPropCellManager.cpp:756
		Matrix44Affine lPartWorldTransform;

		// BrnPropCellManager.cpp:761
		uint32_t luNumExtraEntities;

	}
	PropEntityInstance::IsSmashed(/* parameters */);
	PropEntityInstance::SetAddedToSceneTrue(/* parameters */);
	{
		// BrnPropCellManager.cpp:794
		PropPartEntityInstance * lpPart;

		PropVolumeInstanceID::SetPartIndex(/* parameters */);
		PropEntityID::PropEntityID(/* parameters */);
		PropEntityID::SetPartIndex(/* parameters */);
		PropEntityID::operator CgsSceneManager::EntityId(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		rw::math::vpu::TransformVector(/* parameters */);
		CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
		PropVolumeInstanceID::GetPropEntityID(/* parameters */);
		rw::math::vpu::operator+=(/* parameters */);
		PropEntityID::PropEntityID(/* parameters */);
		PropEntityID::SetPartIndex(/* parameters */);
		GetPart(/* parameters */);
		rw::math::vpu::Matrix44Affine::operator=(/* parameters */);
		PropEntityID::operator CgsSceneManager::EntityId(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::AddEntity(/* parameters */);
		CgsModule::BaseEventQueue<CgsSceneManager::SceneManagerIO::InEventAddEntity>::AddEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnPropCellManager.cpp:849
void BrnWorld::PropCellManager::RemovePropPartsFromScene(PropEntityInstance *  lpProp, const PropTypeData *  lpType, PropVolumeInstanceID  lPropVolumeInstanceID, InSceneUpdateInterface *  lpSceneInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	PropEntityInstance::IsSmashed(/* parameters */);
	PropEntityInstance::SetAddedToSceneFalse(/* parameters */);
	{
		// BrnPropCellManager.cpp:861
		int32_t liPartIndex;

		PropVolumeInstanceID::SetPartIndex(/* parameters */);
		PropVolumeInstanceID::GetPropEntityID(/* parameters */);
		PropEntityID::PropEntityID(/* parameters */);
		PropEntityID::operator CgsSceneManager::EntityId(/* parameters */);
		CgsSceneManager::SceneManagerIO::InSceneUpdateInterface::RemoveEntity(/* parameters */);
		PropVolumeInstanceID::AssertIsProp(/* parameters */);
		PropEntityID::PropEntityID(/* parameters */);
		PropEntityID::AssertIsProp(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnPropCellManager.cpp:920
void BrnWorld::PropCellManager::GetPhysicalPartSlot(PropEntityID  lEntityID, const int32_t &  lrOutSlot, const PropEntityID &  lrOutRecycledEntityID, const bool &  lrbOutRecycled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropCellManager.cpp:923
		int32_t liPartIndex;

	}
	CgsContainers::BitArray<30u>::GetFirstZeroBit(/* parameters */);
	{
	}
	{
		// BrnPropCellManager.cpp:942
		float32_t lfOldestPartTime;

		// BrnPropCellManager.cpp:943
		int32_t liOldestPartIndex;

		{
			// BrnPropCellManager.cpp:946
			int32_t liRecycleIndex;

			CgsContainers::BitArray<30u>::IsBitSet(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::BitArray<30u>::SetBit(/* parameters */);
	PropEntityID::Set(/* parameters */);
	PropEntityID::Set(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnPropCellManager.cpp:998
void BrnWorld::PropCellManager::GetPhysicalPropSlot(PropEntityID  lEntityID, const int32_t &  lrOutSlot, const PropEntityID &  lrOutRecycledEntityID, const bool &  lrbOutRecycled) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropCellManager.cpp:1001
		int32_t liPropIndex;

	}
	CgsContainers::BitArray<15u>::GetFirstZeroBit(/* parameters */);
	{
	}
	{
		// BrnPropCellManager.cpp:1019
		float32_t lfOldestPropTime;

		// BrnPropCellManager.cpp:1020
		int32_t liOldestPropIndex;

		{
			// BrnPropCellManager.cpp:1023
			int32_t liRecycleIndex;

			CgsContainers::BitArray<15u>::IsBitSet(/* parameters */);
		}
	}
	PropEntityID::AssertIsProp(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::BitArray<15u>::SetBit(/* parameters */);
	PropEntityID::Set(/* parameters */);
	PropEntityID::Set(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnPropCellManager.cpp:494
void BrnWorld::PropCellManager::ActivateCell(PropCellRecord *  lpCell, const PropPhysicsDataHeader *  lpaTypes, InSceneUpdateInterface *  lpSceneInput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropCellManager.cpp:496
		PropVolumeInstanceID lVolumeInstanceId;

		// BrnPropCellManager.cpp:497
		const PropTypeData * lpType;

		// BrnPropCellManager.cpp:498
		PropEntityInstance * lpProp;

	}
	{
		// BrnPropCellManager.cpp:507
		int32_t liPropIndex;

		BrnPhysics::Props::PropPhysicsDataHeader::GetType(/* parameters */);
		PropVolumeInstanceID::SetEntityIndex(/* parameters */);
		PropEntityID::PropEntityID(/* parameters */);
		PropEntityID::SetEntityIndex(/* parameters */);
		PropEntityID::operator CgsSceneManager::EntityId(/* parameters */);
		CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
		PropEntityInstance::IsSmashed(/* parameters */);
		PropCellRecord::SetActive(/* parameters */);
		PropEntityInstance::GetTypeId(/* parameters */);
	}
	BrnPhysics::Props::operator<<(/* parameters */);
}

// BrnPropCellManager.cpp:545
void BrnWorld::PropCellManager::DeactivateCell(PropCellRecord *  lpCell, const PropPhysicsDataHeader *  lpaTypes, RecentlyBrokenPropsArray *  lpRecentlyBrokenProps, OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropCellManager.cpp:547
		PropVolumeInstanceID lVolumeInstanceId;

		// BrnPropCellManager.cpp:548
		const PropTypeData * lpType;

		// BrnPropCellManager.cpp:549
		PropEntityInstance * lpProp;

	}
	{
		// BrnPropCellManager.cpp:558
		int32_t liPropIndex;

		{
			// BrnPropCellManager.cpp:568
			PropEntityID lEntityId;

			PropEntityInstance::GetTypeId(/* parameters */);
			BrnPhysics::Props::PropPhysicsDataHeader::GetType(/* parameters */);
			PropVolumeInstanceID::SetEntityIndex(/* parameters */);
			PropEntityID::PropEntityID(/* parameters */);
			PropEntityID::SetEntityIndex(/* parameters */);
			PropEntityID::operator CgsSceneManager::EntityId(/* parameters */);
			CgsSceneManager::VolumeInstanceId::SetEntityId(/* parameters */);
			PropVolumeInstanceID::GetPropEntityID(/* parameters */);
			CgsContainers::Set<BrnWorld::PropEntityID,32u>::Contains(/* parameters */);
			PropEntityInstance::IsSmashed(/* parameters */);
			PropEntityInstance::IsAddedToSim(/* parameters */);
			PropEntityIO::OutputBuffer_PreScene::GetSceneInputInterface(/* parameters */);
			PropEntityIO::OutputBuffer_PreScene::GetSceneInputInterface(/* parameters */);
		}
		PropCellRecord::SetActive(/* parameters */);
	}
	PropEntityIO::OutputBuffer_PreScene::GetPropInputInterface(/* parameters */);
	PropEntityIO::OutputBuffer_PreScene::GetSceneInputInterface(/* parameters */);
	PropEntityIO::OutputBuffer_PreScene::GetSceneInputInterface(/* parameters */);
	CgsContainers::Set<BrnWorld::PropEntityID,32u>::Erase(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	BrnPhysics::Props::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnPropCellManager.cpp:142
void BrnWorld::PropCellManager::Update(const rw::math::vpu::Vector3  lPlayerPos, const PropPhysicsDataHeader *  lpaTypes, RecentlyBrokenPropsArray *  lpRecentlyBrokenProps, OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropCellManager.cpp:144
		bool lbIsInTargetList;

		// BrnPropCellManager.cpp:145
		PropCellId lCurrentCellId;

		CgsContainers::BitArray<15u>::CountSetBits(/* parameters */);
	}
	CgsContainers::BitArray<30u>::CountSetBits(/* parameters */);
	{
		// BrnPropCellManager.cpp:154
		int32_t liCellIndex;

		{
			// BrnPropCellManager.cpp:156
			PropCellRecord * lpCell;

			{
				// BrnPropCellManager.cpp:163
				int32_t liTargetIndex;

			}
			BrnPhysics::Props::PropCellId::operator==(/* parameters */);
		}
	}
	PropEntityIO::OutputBuffer_PreScene::GetSceneInputInterface(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnPropCellManager.cpp:100
void BrnWorld::PropCellManager::RemoveCells(int16_t  liZoneId, const PropPhysicsDataHeader *  lpaTypes, RecentlyBrokenPropsArray *  lpRecentlyBrokenProps, OutputBuffer_PreScene *  lpOutput) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropCellManager.cpp:102
		PropCellRecord * lpCell;

		// BrnPropCellManager.cpp:105
		int32_t liCellIndex;

	}
}

// BrnPropCellManager.cpp:882
void BrnWorld::PropCellManager::CanSmash(PropEntityID  lPropEntityId, PropPhysicsDataHeader *  lpPropTypes) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnPropEntityModule.h:58
	typedef PropPhysicsDataHeader PropPhysicsDataHeader;

	{
		// BrnPropCellManager.cpp:885
		PropEntityInstance * lpProp;

		// BrnPropCellManager.cpp:886
		const PropTypeData * lpType;

		// BrnPropCellManager.cpp:893
		int32_t liNumParts;

		// BrnPropCellManager.cpp:897
		int32_t liExtraEntities;

		// BrnPropCellManager.cpp:899
		bool lbInEntityBudget;

		// BrnPropCellManager.cpp:900
		bool lbInVolumeBudget;

		GetProp(/* parameters */);
		PropEntityInstance::GetTypeId(/* parameters */);
		BrnPhysics::Props::PropPhysicsDataHeader::GetType(/* parameters */);
		PropEntityInstance::IsSmashed(/* parameters */);
	}
}

// BrnPropCellManager.cpp:1075
void BrnWorld::PropCellManager::ClearPropsNearPosition(const rw::math::vpu::Vector3  lPosition, const VecFloat  lRadius, const PropPhysicsDataHeader *  lpTypes, PropInputInterface *  lpPropManagerInterface, InSceneUpdateInterface *  lpSceneInputInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnPropCellManager.cpp:1078
		int32_t liCellIndex;

		{
			// BrnPropCellManager.cpp:1080
			PropCellRecord * lpCell;

			// BrnPropCellManager.cpp:1083
			bool lbIsInTargetList;

			{
				// BrnPropCellManager.cpp:1084
				int32_t liTargetIndex;

			}
			{
				// BrnPropCellManager.cpp:1097
				int32_t liStartIndex;

				// BrnPropCellManager.cpp:1098
				int32_t liEndIndex;

				{
					// BrnPropCellManager.cpp:1101
					int32_t liPropIndex;

					{
						// BrnPropCellManager.cpp:1103
						PropEntityInstance * lpProp;

						// BrnPropCellManager.cpp:1104
						const PropTypeData * lpTypeData;

						{
							// BrnPropCellManager.cpp:1109
							PropVolumeInstanceID lVolumeInstanceId;

							// BrnPropCellManager.cpp:1114
							VecFloat lvfDistanceSquared;

							// BrnPropCellManager.cpp:1115
							VecFloat lvfMinDistance;

							// BrnPropCellManager.cpp:1116
							bool lbTooClose;

						}
					}
				}
			}
		}
	}
}


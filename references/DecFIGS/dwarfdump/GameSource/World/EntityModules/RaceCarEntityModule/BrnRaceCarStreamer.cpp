// BrnRaceCarStreamer.cpp:85
void BrnWorld::RaceCarStreamer::Prepare(const BrnResource::VehicleList *  lpVehicleList, const BrnResource::WheelList *  lpWheelList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRaceCarStreamer.cpp:272
void BrnWorld::RaceCarStreamer::RemoveVehicleData(int32_t  liActiveRaceCar) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRaceCarStreamer.cpp:99
void BrnWorld::RaceCarStreamer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarStreamer.cpp:101
		int32_t liActiveRaceCar;

	}
	CgsResource::ResourcePtr<BrnVehicle::GraphicsSpec>::operator=(/* parameters */);
	CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator=(/* parameters */);
	CgsResource::ResourcePtr<BrnWheel::GraphicsSpec>::operator=(/* parameters */);
}

// BrnRaceCarStreamer.cpp:42
void BrnWorld::RaceCarStreamer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarStreamer.cpp:44
		int32_t liActiveRaceCar;

	}
	CgsResource::ResourcePtr<BrnVehicle::GraphicsSpec>::operator=(/* parameters */);
	CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator=(/* parameters */);
	CgsResource::ResourcePtr<BrnWheel::GraphicsSpec>::operator=(/* parameters */);
}

// BrnRaceCarStreamer.cpp:329
void BrnWorld::RaceCarStreamer::SetDesiredVehicleData(int32_t  liSlotIndex, CgsID  lModelId, CgsID  lWheelId, int32_t  liPriority) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetCarModelId(/* parameters */);
}

// BrnRaceCarStreamer.cpp:135
void BrnWorld::RaceCarStreamer::AddVehicleData(int32_t  liActiveRaceCar, CgsID  lModelId, CgsID  lWheelId, bool  lbPlayerActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarStreamer.cpp:137
		uint8_t lxLoadFlags;

		// BrnRaceCarStreamer.cpp:138
		CgsID lOriginalId;

		// BrnRaceCarStreamer.cpp:173
		char[32] lacModelName;

		// BrnRaceCarStreamer.cpp:174
		char[32] lacWheelName;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	HACKGetValidModelIds(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	RaceCarBaseComponentStreamer::IsVehicleAssetLoaded(/* parameters */);
	RaceCarBaseComponentStreamer::IsVehicleAssetLoaded(/* parameters */);
	RaceCarBaseComponentStreamer::IsVehicleAssetLoaded(/* parameters */);
	RaceCarBaseComponentStreamer::IsVehicleAssetLoaded(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	RaceCarBaseComponentStreamer::AddEntry(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	RaceCarBaseComponentStreamer::AddEntry(/* parameters */);
	RaceCarBaseComponentStreamer::AddEntry(/* parameters */);
	RaceCarBaseComponentStreamer::AddEntry(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
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
		// BrnRaceCarStreamer.cpp:144
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	CgsResource::ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>::operator!=(/* parameters */);
	CgsResource::ResourcePtr<BrnWheel::GraphicsSpec>::operator!=(/* parameters */);
	CgsResource::ResourcePtr<BrnVehicle::GraphicsSpec>::operator!=(/* parameters */);
}

// BrnRaceCarStreamer.cpp:293
void BrnWorld::RaceCarStreamer::SetRequiredVehicleData(int32_t  liActiveRaceCar, CgsID  lModelId, CgsID  lWheelId, bool  lbPlayerActiveRaceCarIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarStreamer.cpp:295
		CgsID lValidModelId;

		// BrnRaceCarStreamer.cpp:296
		CgsID lValidWheelId;

		HACKGetValidModelIds(/* parameters */);
	}
	IsRaceCarActive(/* parameters */);
	RaceCarBaseComponentStreamer::GetDesiredAsset(/* parameters */);
	RaceCarBaseComponentStreamer::GetDesiredAsset(/* parameters */);
}

// BrnRaceCarStreamer.cpp:258
void BrnWorld::RaceCarStreamer::PrefetchVehicleData(int32_t  liActiveRaceCar, CgsID  lModelId, CgsID  lWheelId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRaceCarStreamer.cpp:454
void BrnWorld::RaceCarStreamer::UpdateDesiredCars() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRaceCarStreamer.cpp:456
		int32_t liActiveRaceCarIndex;

		// BrnRaceCarStreamer.cpp:468
		int32_t liHighestPriority;

		// BrnRaceCarStreamer.cpp:469
		int32_t liHighestPrioritySlot;

		IsRaceCarActive(/* parameters */);
		IsRaceCarLoaded(/* parameters */);
	}
	{
		// BrnRaceCarStreamer.cpp:482
		CgsID lDesiredCarModelId;

		GetCarModelId(/* parameters */);
	}
	{
		// BrnRaceCarStreamer.cpp:504
		CgsID lDesiredCarModelId;

		GetCarModelId(/* parameters */);
	}
}

// BrnRaceCarStreamer.cpp:354
void BrnWorld::RaceCarStreamer::Update(const InputBuffer_PreScene *  lpInput, OutputBuffer_PreScene *  lpOutput, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRaceCarStreamer.cpp:376
void BrnWorld::RaceCarStreamer::AppendGameDataRequests(OutputBuffer_Prepare::ResourceRequestInterface *  lpInterface) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Append<2048>(/* parameters */);
	Append<2048>(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::GetSizeInBytes(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::GetFirstWritePointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::GetLength(/* parameters */);
	Append<2048>(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::GetSizeInBytes(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::GetFirstWritePointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::GetLength(/* parameters */);
	Append<2048>(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::GetSizeInBytes(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::GetFirstWritePointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::GetLength(/* parameters */);
	Append<2048>(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::GetSizeInBytes(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::GetFirstWritePointer(/* parameters */);
	CgsCore::MemCpy(/* parameters */);
	CgsModule::VariableEventQueue<2048,16>::GetLength(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
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
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
	}
}

// BrnRaceCarStreamer.cpp:27

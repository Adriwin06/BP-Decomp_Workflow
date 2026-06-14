// CgsInputModuleIO.cpp:468
void CgsInput::InputIO::PadMapping::Construct(int32_t  liPortId, const ActionMapping *  lpMapping) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsInputModuleIO.cpp:446
void CgsInput::InputIO::PadOutputInformation::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.cpp:451
		uint32_t luIndex;

		AnalogueAxisInformation::Construct(/* parameters */);
		ActionInfo::Construct(/* parameters */);
	}
}

// CgsInputModuleIO.cpp:303
void CgsInput::InputIO::PostWorldInputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsInput::InputIO::PadMapping>::Destruct(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::Destruct(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::Clear(/* parameters */);
}

// CgsInputModuleIO.cpp:65
void CgsInput::InputIO::PreWorldInputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::Destruct(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::Destruct(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::Clear(/* parameters */);
}

// CgsInputModuleIO.cpp:400
void CgsInput::InputIO::OutputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.cpp:409
		uint32_t luIndex;

	}
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::EventQueue<CgsInput::InputIO::BindResult,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsInput::InputIO::UnBindResult,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsInput::InputIO::BaseInputEvent,8>::Construct(/* parameters */);
}

// CgsInputModuleIO.cpp:426
void CgsInput::InputIO::OutputBuffer::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::Destruct(/* parameters */);
	CgsModule::IOBuffer::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::Destruct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::Destruct(/* parameters */);
	CgsContainers::FlagSet<std::int8_t>::Clear(/* parameters */);
}

// CgsInputModuleIO.cpp:36
void CgsInput::InputIO::PreWorldInputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::EventQueue<CgsInput::InputIO::PlayJoltEffectEvent,4>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::SetEventPointer(/* parameters */);
	CgsModule::EventQueue<CgsInput::InputIO::PlayRumbleEffectEvent,4>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent,4>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsInput::InputIO::StopRumbleEffectEvent,4>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::Clear(/* parameters */);
}

// CgsInputModuleIO.cpp:278
void CgsInput::InputIO::PostWorldInputBuffer::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::IOBuffer::Construct(/* parameters */);
	CgsModule::EventQueue<CgsInput::InputIO::BaseInputEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::SetEventPointer(/* parameters */);
	CgsModule::EventQueue<CgsInput::InputIO::BaseInputEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsInput::InputIO::PadMapping,7>::Construct(/* parameters */);
	Device::WheelFFSpring::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::PadMapping>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::PadMapping>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::Clear(/* parameters */);
}

// CgsInputModuleIO.cpp:88
void CgsInput::InputIO::PreWorldInputBuffer::PostPlayJoltEffectByPort(int32_t  liPort, int32_t  liRumblePriority, const const JoltEffect &  lJoltEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.cpp:93
		PlayJoltEffectEvent lEvent;

		PlayJoltEffectEvent::Construct(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::AddEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsInputModuleIO.cpp:90
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsInputModuleIO.cpp:91
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsInputModuleIO.cpp:112
void CgsInput::InputIO::PreWorldInputBuffer::PostPlayJoltEffectByPlayer(int32_t  liPlayer, int32_t  liRumblePriority, const const JoltEffect &  lJoltEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.cpp:117
		PlayJoltEffectEvent lEvent;

		PlayJoltEffectEvent::Construct(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::AddEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::PlayJoltEffectEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsInputModuleIO.cpp:114
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsInputModuleIO.cpp:115
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsInputModuleIO.cpp:137
void CgsInput::InputIO::PreWorldInputBuffer::PostPlayRumbleEffectByPort(int32_t  liPort, int32_t  liRumblePriority, const const JoltEffect &  lJoltEvent, int32_t  liRumbleId, float32_t  lfRumbleVolume) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.cpp:142
		PlayRumbleEffectEvent lEvent;

		PlayRumbleEffectEvent::Construct(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::AddEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsInputModuleIO.cpp:139
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsInputModuleIO.cpp:140
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsInputModuleIO.cpp:163
void CgsInput::InputIO::PreWorldInputBuffer::PostPlayRumbleEffectByPlayer(int32_t  liPlayer, int32_t  liRumblePriority, const const JoltEffect &  lJoltEvent, int32_t  liRumbleId, float32_t  lfRumbleVolume) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.cpp:168
		PlayRumbleEffectEvent lEvent;

		PlayRumbleEffectEvent::Construct(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::AddEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::PlayRumbleEffectEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsInputModuleIO.cpp:165
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsInputModuleIO.cpp:166
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsInputModuleIO.cpp:187
void CgsInput::InputIO::PreWorldInputBuffer::PostChangeVolumeRumbleEffectByPort(int32_t  liPort, const const JoltEffect &  lJoltEvent, int32_t  liRumbleId, float32_t  lfRumbleVolume) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.cpp:192
		ChangeVolumeRumbleEffectEvent lEvent;

		ChangeVolumeRumbleEffectEvent::Construct(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::AddEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsInputModuleIO.cpp:189
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsInputModuleIO.cpp:190
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsInputModuleIO.cpp:212
void CgsInput::InputIO::PreWorldInputBuffer::PostChangeVolumeRumbleEffectByPlayer(int32_t  liPlayer, const const JoltEffect &  lJoltEvent, int32_t  liRumbleId, float32_t  lfRumbleVolume) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.cpp:217
		ChangeVolumeRumbleEffectEvent lEvent;

		ChangeVolumeRumbleEffectEvent::Construct(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::AddEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::ChangeVolumeRumbleEffectEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsInputModuleIO.cpp:214
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsInputModuleIO.cpp:215
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsInputModuleIO.cpp:234
void CgsInput::InputIO::PreWorldInputBuffer::PostStopRumbleEffectByPort(int32_t  liPort, int32_t  liRumbleId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.cpp:239
		StopRumbleEffectEvent lEvent;

		CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::AddEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsInputModuleIO.cpp:236
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsInputModuleIO.cpp:237
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsInputModuleIO.cpp:257
void CgsInput::InputIO::PreWorldInputBuffer::PostStopRumbleEffectByPlayer(int32_t  liPlayer, int32_t  liRumbleId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.cpp:262
		StopRumbleEffectEvent lEvent;

		CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::AddEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::StopRumbleEffectEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsInputModuleIO.cpp:259
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsInputModuleIO.cpp:260
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsInputModuleIO.cpp:324
void CgsInput::InputIO::PostWorldInputBuffer::PostBindRequest(int32_t  liPlayer, int32_t  liPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.cpp:327
		BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::BindRequest lEvent;

		CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::AddEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsInputModuleIO.cpp:326
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsInputModuleIO.cpp:343
void CgsInput::InputIO::PostWorldInputBuffer::PostBindNextRequest(int32_t  liPlayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.cpp:346
		BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::BindRequest lEvent;

		CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::AddEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsInputModuleIO.cpp:345
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsInputModuleIO.cpp:362
void CgsInput::InputIO::PostWorldInputBuffer::PostUnbindRequest(int32_t  liPlayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.h:167
		typedef BaseInputEvent UnBindRequest;

		// CgsInputModuleIO.cpp:365
		UnBindRequest lEvent;

		CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::AddEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsInputModuleIO.cpp:364
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsInputModuleIO.cpp:382
void CgsInput::InputIO::PostWorldInputBuffer::PostMappingRequest(ActionMapping *  lpMappingEvent, int32_t  liPortId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.cpp:385
		PadMapping lEvent;

		CgsModule::BaseEventQueue<CgsInput::InputIO::PadMapping>::AddEvent(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::PadMapping>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsInputModuleIO.cpp:384
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}


// CgsInputPads.cpp:638
void CgsInput::InputPads::StopRumbleEvent(const const StopRumbleEffectEvent &  lStopRumbleEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputPads.cpp:640
		int32_t liPort;

		// CgsInputPads.cpp:641
		int32_t liPlayer;

		// CgsInputPads.cpp:642
		int32_t liRumbleId;

		InputIO::BaseInputEvent::GetPort(/* parameters */);
		InputIO::BaseInputEvent::GetPlayer(/* parameters */);
		InputIO::StopRumbleEffectEvent::GetRumbleId(/* parameters */);
		{
			// CgsInputPads.cpp:661
			uint32_t luRumbleIndex;

		}
		InputPlayer::GetPort(/* parameters */);
	}
}

// CgsInputPads.cpp:190
void CgsInput::InputPads::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputPads.cpp:192
		int32_t i;

	}
	{
		// CgsInputPads.cpp:200
		uint32_t luPadIndex;

	}
}

// CgsInputPads.cpp:901
void CgsInput::InputPads::GetTotalJoltEnvelopeDuration(const const JoltEnvelope &  lJoltEnvelope) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsInputPads.cpp:878
void CgsInput::InputPads::GetTotalJoltDuration(const const JoltEffect &  lJoltEffect) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputPads.cpp:880
		float32_t lfLeftJoltTime;

		// CgsInputPads.cpp:881
		float32_t lfRightJoltTime;

	}
}

// CgsInputPads.cpp:396
void CgsInput::InputPads::FillRawData(float32_t *  lafNewRawData, AnalogueAxisInformation *  lpAxisInfo, int32_t  liPortIndex) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputPads.cpp:402
		int32_t liButtonIndex;

		{
			// CgsInputPads.cpp:404
			float32_t lfButtonValue;

		}
	}
	{
		// CgsInputPads.cpp:411
		int32_t liAxisIndex;

		InputIO::AnalogueAxisInformation::SetValue(/* parameters */);
		rw::math::fpu::Clamp<float>(/* parameters */);
	}
}

// CgsInputPads.cpp:841
void CgsInput::InputPads::UpdateJoltEnvelope(const const JoltEnvelope &  lJoltEnvelope, float32_t  lfTime) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputPads.cpp:844
		float32_t lfTimeParam;

	}
	rw::math::fpu::Lerp<float>(/* parameters */);
	rw::math::fpu::Lerp<float>(/* parameters */);
}

// CgsInputPads.cpp:594
void CgsInput::InputPads::ChangeVolumeRumbleEvent(const const ChangeVolumeRumbleEffectEvent &  lChangeVolumeRumbleEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputPads.cpp:596
		int32_t liPort;

		// CgsInputPads.cpp:597
		int32_t liPlayer;

		// CgsInputPads.cpp:598
		int32_t liRumbleId;

		InputIO::BaseInputEvent::GetPort(/* parameters */);
		InputIO::BaseInputEvent::GetPlayer(/* parameters */);
		InputIO::ChangeVolumeRumbleEffectEvent::GetRumbleId(/* parameters */);
		{
			// CgsInputPads.cpp:617
			uint32_t luRumbleIndex;

		}
		InputPlayer::GetPort(/* parameters */);
	}
}

// CgsInputPads.cpp:549
void CgsInput::InputPads::PlayRumbleEvent(const const PlayRumbleEffectEvent &  lRumbleEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputPads.cpp:551
		int32_t liPort;

		// CgsInputPads.cpp:552
		int32_t liPlayer;

		InputIO::BaseInputEvent::GetPort(/* parameters */);
	}
	InputIO::BaseInputEvent::GetPlayer(/* parameters */);
	{
		// CgsInputPads.cpp:570
		uint32_t luRumbleIndex;

		InputIO::BaseRumbleEvent::GetRumblePriority(/* parameters */);
	}
	InputPlayer::GetPort(/* parameters */);
}

// CgsInputPads.cpp:713
void CgsInput::InputPads::UpdatePadRumble(int32_t  liPort, int32_t  liPlayer, float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputPads.cpp:715
		bool lbStopMotors;

		// CgsInputPads.cpp:716
		float32_t lfLeftMotorValue;

		// CgsInputPads.cpp:717
		float32_t lfRightMotorValue;

	}
	{
		// CgsInputPads.cpp:722
		uint32_t liJoltIndex;

	}
	{
		// CgsInputPads.cpp:726
		float32_t lfJoltLeftMotorValue;

		// CgsInputPads.cpp:732
		float32_t lfJoltRightMotorValue;

	}
	{
		// CgsInputPads.cpp:752
		uint32_t liRumbleIndex;

		{
			// CgsInputPads.cpp:756
			float32_t lfRumbleLeftMotorValue;

			// CgsInputPads.cpp:763
			float32_t lfRumbleRightMotorValue;

		}
	}
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Clamp<float>(/* parameters */);
	rw::math::fpu::Min<float>(/* parameters */);
	Device::SetWheelFFSpring(/* parameters */);
}

// CgsInputPads.cpp:688
void CgsInput::InputPads::UpdateRumble(float32_t  lfTimeStep, bool  lbPauseRumble, bool  lbEnableRumble, bool  lbEnableWheelForceFeedback) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputPads.cpp:690
		int32_t liPort;

	}
}

// CgsInputPads.cpp:506
void CgsInput::InputPads::PlayJoltEvent(const const PlayJoltEffectEvent &  lJoltEvent) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputPads.cpp:508
		int32_t liPort;

		// CgsInputPads.cpp:509
		int32_t liPlayer;

		InputIO::BaseInputEvent::GetPort(/* parameters */);
		InputIO::BaseInputEvent::GetPlayer(/* parameters */);
		{
			// CgsInputPads.cpp:527
			uint32_t luJoltIndex;

			InputIO::BaseRumbleEvent::GetRumblePriority(/* parameters */);
		}
		InputPlayer::GetPort(/* parameters */);
	}
}

// CgsInputPads.cpp:427
void CgsInput::InputPads::BindPlayerToPort(int32_t  liPlayer, int32_t  liPort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputPads.cpp:432
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsInputPads.cpp:437
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	InputPlayer::Bind(/* parameters */);
	InputPort::Bind(/* parameters */);
}

// CgsInputPads.cpp:474
void CgsInput::InputPads::UnBindPlayer(int32_t  liPlayer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputPads.cpp:487
		int32_t liPort;

	}
	{
		// CgsInputPads.cpp:479
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	InputPlayer::GetPort(/* parameters */);
	InputPlayer::UnBind(/* parameters */);
	InputPort::UnBind(/* parameters */);
}

// CgsInputPads.cpp:102
void CgsInput::InputPads::InitializePads() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputPads.cpp:105
		uint32_t luPadIndex;

	}
}

// CgsInputPads.cpp:49
void CgsInput::InputPads::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputPads.cpp:53
		uint32_t i;

		{
			// CgsInputPads.cpp:60
			uint32_t j;

			InputIO::ActionMapping::Construct(/* parameters */);
		}
	}
	{
		// CgsInputPads.cpp:69
		uint32_t i;

		{
			// CgsInputPads.cpp:71
			uint32_t j;

		}
		{
			// CgsInputPads.cpp:77
			uint32_t j;

		}
	}
}

// CgsInputPads.cpp:121
void CgsInput::InputPads::Prepare(rw::IResourceAllocator *  lpInputGeneralAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputPads.cpp:128
		uint32_t luPadIndex;

	}
	{
		// CgsInputPads.cpp:133
		uint32_t i;

		{
			// CgsInputPads.cpp:135
			uint32_t j;

		}
		{
			// CgsInputPads.cpp:141
			uint32_t j;

		}
	}
}

// CgsInputPads.cpp:165
void CgsInput::InputPads::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputPads.cpp:172
		uint32_t luPadIndex;

	}
}

// CgsInputPads.cpp:216
void CgsInput::InputPads::Update(OutputBuffer *  lpOutputBuffer) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputPads.cpp:220
		uint32_t luPadIndex;

		{
			// CgsInputPads.cpp:222
			CgsInput::Manager::EInputPort lePortToBind;

			// CgsInputPads.cpp:224
			CgsInput::Manager::EInputPort leInputPort;

			// CgsInputPads.cpp:225
			CgsInput::Device::EType leInputDeviceType;

		}
	}
	{
		// CgsInputPads.cpp:248
		uint32_t luPadIndex;

	}
	{
		// CgsInputPads.cpp:254
		int32_t liPortIndex;

		{
			// CgsInputPads.cpp:256
			uint32_t luButtonIndex;

			// CgsInputPads.cpp:257
			float32_t[34] lafNewRawButtonData;

			// CgsInputPads.cpp:264
			PadOutputInformation * lpPadOutInfo;

			// CgsInputPads.cpp:265
			ActionInfo * lpActionInfo;

			// CgsInputPads.cpp:267
			int32_t liPlayerIndex;

			// CgsInputPads.cpp:303
			uint32_t luActionIndex;

			// CgsInputPads.cpp:304
			int32_t liActionId;

			// CgsInputPads.cpp:335
			bool lbPadIdle;

			InputIO::OutputBuffer::GetPadInfo(/* parameters */);
			InputIO::PadOutputInformation::GetActionInfo(/* parameters */);
			InputPort::GetPlayerID(/* parameters */);
			InputIO::PadOutputInformation::SetPlayerId(/* parameters */);
			InputPort::IsBound(/* parameters */);
			InputIO::PadOutputInformation::SetType(/* parameters */);
			{
				// CgsInputModuleIO.h:218
				typedef BaseInputEvent PadDisconnected;

				// CgsInputPads.cpp:290
				PadDisconnected lPadDisconnectedEvent;

				InputIO::OutputBuffer::GetPadDisconnectedQueue(/* parameters */);
				CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::AddEvent(/* parameters */);
			}
			InputIO::PadOutputInformation::SetType(/* parameters */);
			InputIO::ActionInfo::SetValue(/* parameters */);
			InputIO::ActionInfo::SetAsDown(/* parameters */);
			InputIO::ActionInfo::SetAsNotPressed(/* parameters */);
			InputIO::ActionInfo::SetAsPressed(/* parameters */);
			InputIO::ActionInfo::SetAsUp(/* parameters */);
			InputIO::ActionInfo::SetAsNotReleased(/* parameters */);
			InputIO::ActionInfo::SetAsReleased(/* parameters */);
		}
		InputIO::PadOutputInformation::SetPadIdle(/* parameters */);
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
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}


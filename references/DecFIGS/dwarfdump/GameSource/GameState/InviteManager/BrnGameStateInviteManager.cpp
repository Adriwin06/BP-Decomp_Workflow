// BurnoutConstants.h:90
namespace BrnGameState {
	// BrnGameStateInviteManager.cpp:27
	const RGBA KU_INVITE_MANAGER_TEXT_COLOUR;

	// BrnGameStateInviteManager.cpp:28
	const float32_t KF_INVITE_MANAGER_TEXT_SIZE;

	// BrnGameStateInviteManager.cpp:30
	const char[17] KAC_INVITE_MANAGER_PREPARE_INVITE_TEXT;

	// BrnGameStateInviteManager.cpp:31
	const float32_t KF_INVITE_MANAGER_PREPARE_INVITE_POS_X;

	// BrnGameStateInviteManager.cpp:32
	const float32_t KF_INVITE_MANAGER_PREPARE_INVITE_POS_Y;

	// BrnGameStateInviteManager.cpp:33
	const rw::math::vpu::Vector2 K_INVITE_MANAGER_PREPARE_INVITE_TEXT_POS;

	// BrnGameStateInviteManager.cpp:35
	const char[18] KAC_INVITE_MANAGER_PERFORM_INVITE_TEXT;

	// BrnGameStateInviteManager.cpp:36
	const float32_t KF_INVITE_MANAGER_PERFORM_INVITE_POS_X;

	// BrnGameStateInviteManager.cpp:37
	const float32_t KF_INVITE_MANAGER_PERFORM_INVITE_POS_Y;

	// BrnGameStateInviteManager.cpp:38
	const rw::math::vpu::Vector2 K_INVITE_MANAGER_PERFORM_INVITE_TEXT_POS;

	// BrnGameStateInviteManager.cpp:41
	const int32_t KI_PLAYER_TO_UNBIND;

	// BrnGameStateInviteManager.cpp:42
	const int32_t KI_PLAYER_TO_BIND;

}

// BrnGameStateInviteManager.cpp:468
void BrnGameState::GameStateInviteManager::StartPrepareForInvite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnGameStateInviteManager.cpp:540
void BrnGameState::GameStateInviteManager::RenderDebugText(const char *  lpcDebugText, const rw::math::vpu::Vector2  lTextPosition) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateInviteManager.cpp:543
		DebugInterface lDebugInterface;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
	}
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
}

// BrnGameStateInviteManager.cpp:68
void BrnGameState::GameStateInviteManager::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<1536,16>::Construct(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsInput::InputIO::BaseInputEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsInput::InputIO::BaseInputEvent,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsInput::InputIO::BindResult,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::SetEventPointer(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::Clear(/* parameters */);
	CgsModule::EventQueue<CgsInput::InputIO::UnBindResult,8>::Construct(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::SetEventPointer(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGameStateInviteManager.cpp:365
void BrnGameState::GameStateInviteManager::BindNewController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateInviteManager.cpp:368
		BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::BindRequest lBindRequest;

	}
	CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGameStateInviteManager.cpp:311
void BrnGameState::GameStateInviteManager::UnbindExistingController() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputModuleIO.h:167
		typedef BaseInputEvent UnBindRequest;

		// BrnGameStateInviteManager.cpp:318
		UnBindRequest lUnbindRequest;

	}
	CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::AddEvent(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::GetMaxLength(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGameStateInviteManager.cpp:93
void BrnGameState::GameStateInviteManager::Prepare() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<1536,16>::Prepare(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Clear(/* parameters */);
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

// BrnGameStateInviteManager.cpp:115
void BrnGameState::GameStateInviteManager::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<1536,16>::Release(/* parameters */);
	CgsModule::VariableEventQueue<1536,16>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGameStateInviteManager.cpp:132
void BrnGameState::GameStateInviteManager::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<1536,16>::Destruct(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGameStateInviteManager.cpp:229
void BrnGameState::GameStateInviteManager::CheckPreparedForInvite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::BitArray<2u>::FindFirstZero(/* parameters */);
}

// BrnGameStateInviteManager.cpp:500
void BrnGameState::GameStateInviteManager::SetModulePreparedForInvite(const CgsModule::Event *  lpAction) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateInviteManager.cpp:502
		const PreparedForInviteAction * lpPreparedForInviteAction;

	}
	CgsContainers::BitArray<2u>::SetBit(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGameStateInviteManager.cpp:519
void BrnGameState::GameStateInviteManager::InviteFailed() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateInviteManager.cpp:521
		InviteCompleteEvent lInviteCompleteEvent;

	}
}

// BrnGameStateInviteManager.cpp:382
void BrnGameState::GameStateInviteManager::ProcessBindResults() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateInviteManager.cpp:384
		int32_t liIndex;

		// BrnGameStateInviteManager.cpp:385
		BindResult lBindResult;

	}
	CgsModule::BaseEventQueue<CgsInput::InputIO::BindResult>::GetEvent(/* parameters */);
}

// BrnGameStateInviteManager.cpp:332
void BrnGameState::GameStateInviteManager::ProcessUnbindResults() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateInviteManager.cpp:334
		int32_t liIndex;

		// BrnGameStateInviteManager.cpp:335
		UnBindResult lUnbindResult;

	}
	CgsModule::BaseEventQueue<CgsInput::InputIO::UnBindResult>::GetEvent(/* parameters */);
}

// BrnGameStateInviteManager.cpp:252
void BrnGameState::GameStateInviteManager::UpdatePrepareForInvite() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateInviteManager.cpp:296
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGameStateInviteManager.cpp:416
void BrnGameState::GameStateInviteManager::ProcessGameStateActions(InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnGameStateInviteManager.cpp:419
		const CgsModule::Event * lpAction;

		// BrnGameStateInviteManager.cpp:420
		int32_t liActionSize;

		// BrnGameStateInviteManager.cpp:421
		int32_t liActionType;

		CgsModule::VariableEventQueue<13312,16>::GetFirstEvent(/* parameters */);
	}
	{
	}
	CgsContainers::BitArray<2u>::UnSetAll(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// BrnGameStateInviteManager.cpp:151
void BrnGameState::GameStateInviteManager::Update(BrnGameState::GameStateModuleIO::OutputBuffer *  lpOutput, InputBuffer::GameActionQueue *  lpActionQueue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsModule::VariableEventQueue<1536,16>::Clear(/* parameters */);
	{
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// BrnGameStateInviteManager.cpp:209
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	WriteDataToOuputBuffer(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::Clear(/* parameters */);
	CgsModule::BaseEventQueue<CgsInput::InputIO::BaseInputEvent>::Clear(/* parameters */);
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
		// BrnGameStateInviteManager.cpp:192
		PerformInviteEvent lPerformInviteEvent;

	}
	{
		// BrnGameStateInviteManager.cpp:167
		StartPrepareForInviteAction lStartPrepareForInviteAction;

	}
	GameStateModuleIO::OutputBuffer::GetGameActionQueue(/* parameters */);
	AddGameAction<BrnGameState::GameStateModuleIO::StartPrepareForInviteAction>(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}


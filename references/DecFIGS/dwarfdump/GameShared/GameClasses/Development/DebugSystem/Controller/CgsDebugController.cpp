// CgsStrStream.h:39
namespace CgsDev {
	// CgsDebugController.cpp:120
	enum AxisDirections {
		E_AXIS_UP = 0,
		E_AXIS_DOWN = 1,
		E_AXIS_LEFT = 2,
		E_AXIS_RIGHT = 3,
		E_AXIS_COUNT = 4,
	}

	// CgsDebugController.cpp:33
	const CgsDev::DebugUI::InputEvent[8] KAE_BUTTON_MAP_TABLE;

	// CgsDebugController.cpp:46
	const CgsInput::EPadButton[8] KA_BUTTON_MAP;

	// CgsDebugController.cpp:97
	const CgsInput::EPadButton[4] KA_DPAD_MAP;

	// CgsDebugController.cpp:130
	extern CgsDev::DebugUI::InputEvent[4] KAE_AXIS_MAP_TABLE;

	// CgsDebugController.cpp:138
	extern CgsDev::DebugUI::InputEvent[4] KAE_AXIS_MAP_TABLE_CTRL;

	// CgsDebugController.cpp:151
	const float32_t KF_CONTROLLER_DEAD_ZONE;

}

// CgsDebugController.cpp:230
void CgsDev::DebugController::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugController.cpp:304
void CgsDev::DebugController::ClearPad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugController.cpp:306
		int32_t liIndex;

	}
}

// CgsDebugController.cpp:429
void CgsDev::DebugController::ClearKeyboard() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugController.cpp:832
void CgsDev::DebugController::ClearEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugController.cpp:690
void CgsDev::DebugController::CopyKeyboardToPad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugController.cpp:243
void CgsDev::DebugController::UpdatePad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugController.cpp:268
		int32_t liIndex;

	}
}

// CgsDebugController.cpp:331
void CgsDev::DebugController::InitKeyboard() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugController.cpp:350
		int32_t liKeyboard;

	}
}

// CgsDebugController.cpp:641
void CgsDev::DebugController::SimpleLocaliseKey(char  lcKey) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugController.cpp:449
void CgsDev::DebugController::ReadKey(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugController.cpp:532
		CellKbInfo lKeyboardInfo;

		// CgsDebugController.cpp:545
		int32_t liKeyboard;

	}
	{
		// CgsDebugController.cpp:549
		CellKbData lKeyData;

	}
}

// CgsDebugController.cpp:391
void CgsDev::DebugController::UpdateKeyboard(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugController.cpp:958
void CgsDev::DebugController::GetAxisEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugController.cpp:960
		CgsDev::AxisDirections leAxis;

		rw::math::vpu::Abs<float>(/* parameters */);
		rw::math::vpu::Abs<float>(/* parameters */);
	}
}

// CgsDebugController.cpp:923
void CgsDev::DebugController::TranslateControllerInputEvent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugController.cpp:926
		CgsDev::DebugUI::InputEvent leInputEvent;

		// CgsDebugController.cpp:932
		int32_t liIndex;

		IsButtonPressed(/* parameters */);
	}
}

// CgsDebugController.cpp:869
void CgsDev::DebugController::GetInputEvent(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsDebugController.cpp:872
		CgsDev::DebugUI::InputEvent leInputEvent;

	}
}

// CgsDebugController.cpp:849
void CgsDev::DebugController::UpdateEvent(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugController.cpp:207
void CgsDev::DebugController::Update(float32_t  lfTimeStep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugController.cpp:813
void CgsDev::DebugController::UnlockKeyboard() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugController.cpp:796
void CgsDev::DebugController::LockKeyboard() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugController.cpp:172
void CgsDev::DebugController::Construct(const Metrics *  lpMetrics) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsDebugController.cpp:149

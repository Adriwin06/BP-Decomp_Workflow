// CgsStrStream.h:39
namespace CgsDev {
	// Declaration
	struct DebugController {
		// CgsDebugController.h:95
		enum SpecialKey {
			E_KEY_NONE = 0,
			E_KEY_LEFT = 1,
			E_KEY_RIGHT = 2,
			E_KEY_UP = 3,
			E_KEY_DOWN = 4,
			E_KEY_F1 = 5,
			E_KEY_F2 = 6,
			E_KEY_F3 = 7,
			E_KEY_F4 = 8,
			E_KEY_F5 = 9,
			E_KEY_F6 = 10,
			E_KEY_F7 = 11,
			E_KEY_F8 = 12,
			E_KEY_F9 = 13,
			E_KEY_F10 = 14,
			E_KEY_F11 = 15,
			E_KEY_F12 = 16,
		}

	}

}

// CgsDebugController.h:75
struct CgsDev::DebugController {
	// CgsDebugController.h:84
	extern const int32_t KI_INVALID_PORT = 4294967295;

	// CgsDebugController.h:93
	extern const int32_t KI_MAX_BUTTONS = 8;

private:
	// CgsDebugController.h:140
	const Metrics * mpMetrics;

	// CgsDebugController.h:143
	CgsDev::DebugUI::InputEvent meInputEvent;

	// CgsDebugController.h:145
	CgsDev::DebugUI::InputEvent meLastInputEvent;

	// CgsDebugController.h:146
	float32_t mfEventRepeatDelay;

	// CgsDebugController.h:147
	float32_t mfEventRepeatDelayMax;

	// CgsDebugController.h:165
	DebugManagerPad * mpDebugManagerPad;

	// CgsDebugController.h:166
	float32_t mfX;

	// CgsDebugController.h:167
	float32_t mfY;

	// CgsDebugController.h:168
	float32_t mfX2;

	// CgsDebugController.h:169
	float32_t mfY2;

	// CgsDebugController.h:170
	bool[8] mabButtons;

	// CgsDebugController.h:178
	CgsDev::DebugController::SpecialKey meSpecialKeyPress;

	// CgsDebugController.h:179
	char mcKeyPress;

	// CgsDebugController.h:180
	bool mbKeyboardPresent;

	// CgsDebugController.h:181
	bool mbShiftPressed;

	// CgsDebugController.h:182
	bool mbAltPressed;

	// CgsDebugController.h:183
	bool mbCtrlPressed;

	// CgsDebugController.h:186
	extern const float32_t KF_KEY_REPEAT_TIME;

	// CgsDebugController.h:199
	bool mbKeyboardLocked;

public:
	// CgsDebugController.h:79
	void Construct(const Metrics *);

	// CgsDebugController.h:80
	void Update(float32_t);

	// CgsDebugController.h:81
	void Destruct();

	// CgsDebugController.h:86
	void SetGamePad(DebugManagerPad *);

	// CgsDebugController.h:89
	CgsDev::DebugUI::InputEvent GetInputEvent() const;

	// CgsDebugController.h:117
	float32_t GetX() const;

	// CgsDebugController.h:118
	float32_t GetY() const;

	// CgsDebugController.h:119
	float32_t GetX2() const;

	// CgsDebugController.h:120
	float32_t GetY2() const;

	// CgsDebugController.h:121
	bool IsButtonPressed(int32_t) const;

	// CgsDebugController.h:124
	char GetKeyPress() const;

	// CgsDebugController.h:125
	CgsDev::DebugController::SpecialKey GetSpecialKeyPress() const;

	// CgsDebugController.h:126
	bool IsCtrlPressed() const;

	// CgsDebugController.h:127
	bool IsShiftPressed() const;

	// CgsDebugController.h:128
	bool IsAltPressed() const;

	// CgsDebugController.h:129
	bool IsKeyboardPresent() const;

	// CgsDebugController.h:132
	bool IsKeyboardLocked() const;

	// CgsDebugController.h:133
	void LockKeyboard();

	// CgsDebugController.h:134
	void UnlockKeyboard();

private:
	// CgsDebugController.h:148
	void ClearEvent();

	// CgsDebugController.h:149
	void UpdateEvent(float32_t);

	// CgsDebugController.h:152
	CgsDev::DebugUI::InputEvent GetInputEvent(float32_t);

	// CgsDebugController.h:153
	CgsDev::DebugUI::InputEvent TranslateControllerInputEvent() const;

	// CgsDebugController.h:154
	CgsDev::DebugUI::InputEvent GetAxisEvent() const;

	// CgsDebugController.h:161
	void CopyKeyboardToPad();

	// CgsDebugController.h:173
	void UpdatePad();

	// CgsDebugController.h:174
	void ClearPad();

	// CgsDebugController.h:192
	bool InitKeyboard();

	// CgsDebugController.h:193
	void UpdateKeyboard(float32_t);

	// CgsDebugController.h:194
	void ClearKeyboard();

	// CgsDebugController.h:195
	void ReadKey(float32_t);

	// CgsDebugController.h:196
	char SimpleLocaliseKey(char);

}

// CgsDebugController.h:93
extern const int32_t KI_MAX_BUTTONS = 8;

// CgsDebugController.h:186
extern const float32_t KF_KEY_REPEAT_TIME;


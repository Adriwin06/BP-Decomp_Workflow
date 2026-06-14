// CgsInputDevicePS3Pad.h:361
typedef CgsInput::DevicePS3Pad DebugManagerPad;

// CgsInputDevice.h:22
namespace CgsInput {
	// CgsInputDevicePS3Pad.h:84
	enum EPadAxis {
		E_PADAXIS_FIRST = 0,
		E_PADAXIS_0_X = 0,
		E_PADAXIS_0_Y = 1,
		E_PADAXIS_1_X = 2,
		E_PADAXIS_1_Y = 3,
		E_PADAXIS_SENSOR_X = 4,
		E_PADAXIS_SENSOR_Y = 5,
		E_PADAXIS_SENSOR_Z = 6,
		E_PADAXIS_SENSOR_G = 7,
		E_WHEELAXIS_STEERING = 8,
		E_WHEELAXIS_PEDALS = 9,
		E_PADAXIS_COUNT = 10,
	}

}

// CgsInputTypes.h:24
namespace CgsInput {
	// CgsInputDevicePS3Pad.h:84
	enum EPadAxis {
		E_PADAXIS_FIRST = 0,
		E_PADAXIS_0_X = 0,
		E_PADAXIS_0_Y = 1,
		E_PADAXIS_1_X = 2,
		E_PADAXIS_1_Y = 3,
		E_PADAXIS_SENSOR_X = 4,
		E_PADAXIS_SENSOR_Y = 5,
		E_PADAXIS_SENSOR_Z = 6,
		E_PADAXIS_SENSOR_G = 7,
		E_WHEELAXIS_STEERING = 8,
		E_WHEELAXIS_PEDALS = 9,
		E_PADAXIS_COUNT = 10,
	}

}

// CgsInputDevicePS3Pad.h:115
void CgsInput::DevicePS3Pad::DevicePS3Pad() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsInputDevice.h:22
namespace CgsInput {
	// CgsInputDevicePS3Pad.h:40
	enum EPadButton {
		E_PADBUTTON_FIRST = 0,
		E_PADBUTTON_UP = 0,
		E_PADBUTTON_DOWN = 1,
		E_PADBUTTON_LEFT = 2,
		E_PADBUTTON_RIGHT = 3,
		E_PADBUTTON_START = 4,
		E_PADBUTTON_SELECT = 5,
		E_PADBUTTON_LTHUMB = 6,
		E_PADBUTTON_RTHUMB = 7,
		E_PADBUTTON_CROSS = 8,
		E_PADBUTTON_CIRCLE = 9,
		E_PADBUTTON_SQUARE = 10,
		E_PADBUTTON_TRIANGLE = 11,
		E_PADBUTTON_L1 = 12,
		E_PADBUTTON_R1 = 13,
		E_PADBUTTON_L2 = 14,
		E_PADBUTTON_R2 = 15,
		E_PADBUTTON_ANALOGUE_0_UP = 16,
		E_PADBUTTON_ANALOGUE_0_DOWN = 17,
		E_PADBUTTON_ANALOGUE_0_LEFT = 18,
		E_PADBUTTON_ANALOGUE_0_RIGHT = 19,
		E_PADBUTTON_ANALOGUE_1_UP = 20,
		E_PADBUTTON_ANALOGUE_1_DOWN = 21,
		E_PADBUTTON_ANALOGUE_1_LEFT = 22,
		E_PADBUTTON_ANALOGUE_1_RIGHT = 23,
		E_WHEELBUTTON_ACCELERATOR = 24,
		E_WHEELBUTTON_BRAKE = 25,
		E_WHEELBUTTON_LEFT_PADDLE = 26,
		E_WHEELBUTTON_RIGHT_PADDLE = 27,
		E_WHEELBUTTON_X = 28,
		E_WHEELBUTTON_Y = 29,
		E_WHEELBUTTON_A = 30,
		E_WHEELBUTTON_B = 31,
		E_WHEELBUTTON_ANALOGUE_STEERING_LEFT = 32,
		E_WHEELBUTTON_ANALOGUE_STEERING_RIGHT = 33,
		E_PADBUTTON_COUNT = 34,
	}

}

// CgsInputDevice.h:22
namespace CgsInput {
	// CgsInputDevicePS3Pad.h:40
	enum EPadButton {
		E_PADBUTTON_FIRST = 0,
		E_PADBUTTON_UP = 0,
		E_PADBUTTON_DOWN = 1,
		E_PADBUTTON_LEFT = 2,
		E_PADBUTTON_RIGHT = 3,
		E_PADBUTTON_START = 4,
		E_PADBUTTON_SELECT = 5,
		E_PADBUTTON_LTHUMB = 6,
		E_PADBUTTON_RTHUMB = 7,
		E_PADBUTTON_CROSS = 8,
		E_PADBUTTON_CIRCLE = 9,
		E_PADBUTTON_SQUARE = 10,
		E_PADBUTTON_TRIANGLE = 11,
		E_PADBUTTON_L1 = 12,
		E_PADBUTTON_R1 = 13,
		E_PADBUTTON_L2 = 14,
		E_PADBUTTON_R2 = 15,
		E_PADBUTTON_ANALOGUE_0_UP = 16,
		E_PADBUTTON_ANALOGUE_0_DOWN = 17,
		E_PADBUTTON_ANALOGUE_0_LEFT = 18,
		E_PADBUTTON_ANALOGUE_0_RIGHT = 19,
		E_PADBUTTON_ANALOGUE_1_UP = 20,
		E_PADBUTTON_ANALOGUE_1_DOWN = 21,
		E_PADBUTTON_ANALOGUE_1_LEFT = 22,
		E_PADBUTTON_ANALOGUE_1_RIGHT = 23,
		E_WHEELBUTTON_ACCELERATOR = 24,
		E_WHEELBUTTON_BRAKE = 25,
		E_WHEELBUTTON_LEFT_PADDLE = 26,
		E_WHEELBUTTON_RIGHT_PADDLE = 27,
		E_WHEELBUTTON_X = 28,
		E_WHEELBUTTON_Y = 29,
		E_WHEELBUTTON_A = 30,
		E_WHEELBUTTON_B = 31,
		E_WHEELBUTTON_ANALOGUE_STEERING_LEFT = 32,
		E_WHEELBUTTON_ANALOGUE_STEERING_RIGHT = 33,
		E_PADBUTTON_COUNT = 34,
	}

	// CgsInputDevicePS3Pad.h:84
	enum EPadAxis {
		E_PADAXIS_FIRST = 0,
		E_PADAXIS_0_X = 0,
		E_PADAXIS_0_Y = 1,
		E_PADAXIS_1_X = 2,
		E_PADAXIS_1_Y = 3,
		E_PADAXIS_SENSOR_X = 4,
		E_PADAXIS_SENSOR_Y = 5,
		E_PADAXIS_SENSOR_Z = 6,
		E_PADAXIS_SENSOR_G = 7,
		E_WHEELAXIS_STEERING = 8,
		E_WHEELAXIS_PEDALS = 9,
		E_PADAXIS_COUNT = 10,
	}

}

// CgsInputDevicePS3Pad.h:115
struct CgsInput::DevicePS3Pad : public Device {
	int (*)(...) * _vptr.DevicePS3Pad;

private:
	// CgsInputDevicePS3Pad.h:284
	bool mbIsConnected;

	// CgsInputDevicePS3Pad.h:286
	bool mbHasRumble;

	// CgsInputDevicePS3Pad.h:288
	bool[34] mabPreviouslyPressedButtons;

	// CgsInputDevicePS3Pad.h:294
	bool[34] mabCurrentlyPressedButtons;

	// CgsInputDevicePS3Pad.h:298
	float32_t[34] mafButtonValues;

	// CgsInputDevicePS3Pad.h:302
	float32_t[10] mafAxisValues;

	// CgsInputDevicePS3Pad.h:304
	float32_t mfButtonThreshold;

	// CgsInputDevicePS3Pad.h:310
	float32_t mfButtonActivezoneThreshold;

	// CgsInputDevicePS3Pad.h:311
	float32_t mfButtonDeadzoneThreshold;

	// CgsInputDevicePS3Pad.h:313
	float32_t mfTriggerActivezoneThreshold;

	// CgsInputDevicePS3Pad.h:314
	float32_t mfTriggerDeadzoneThreshold;

	// CgsInputDevicePS3Pad.h:316
	float32_t mfAxisActivezoneThreshold;

	// CgsInputDevicePS3Pad.h:317
	float32_t mfAxisDeadzoneThreshold;

	// CgsInputDevicePS3Pad.h:319
	CgsInput::Manager::EInputPort mePort;

	// CgsInputDevicePS3Pad.h:323
	bool mbPaused;

	// CgsInputDevicePS3Pad.h:327
	float32_t mfLeftRumble;

	// CgsInputDevicePS3Pad.h:328
	float32_t mfRightRumble;

	// CgsInputDevicePS3Pad.h:330
	lgDevForceEffect mWheelFFSpringEffect;

	// CgsInputDevicePS3Pad.h:331
	lgDevForceEffect mWheelFFRumbleEffectLeft;

	// CgsInputDevicePS3Pad.h:332
	lgDevForceEffect mWheelFFRumbleEffectRight;

	// CgsInputDevicePS3Pad.h:334
	int32_t mWheelFFSpringEffectID;

	// CgsInputDevicePS3Pad.h:335
	int32_t mWheelFFRumbleEffectLeftID;

	// CgsInputDevicePS3Pad.h:336
	int32_t mWheelFFRumbleEffectRightID;

	// CgsInputDevicePS3Pad.h:338
	int32_t miWheelHandle;

public:
	// CgsInputDevicePS3Pad.cpp:80
	void Construct();

	// CgsInputDevicePS3Pad.cpp:178
	void Destruct();

	// CgsInputDevicePS3Pad.cpp:195
	bool Prepare();

	// CgsInputDevicePS3Pad.cpp:213
	void Release();

	// CgsInputDevicePS3Pad.cpp:231
	bool IsConnected() const;

	// CgsInputDevicePS3Pad.cpp:257
	void Reset();

	// CgsInputDevicePS3Pad.cpp:310
	float32_t GetButtonValue(CgsInput::EPadButton) const;

	// CgsInputDevicePS3Pad.cpp:354
	void SetButtonValue(CgsInput::EPadButton, float32_t);

	// CgsInputDevicePS3Pad.cpp:395
	bool IsButtonJustPressed(CgsInput::EPadButton) const;

	// CgsInputDevicePS3Pad.cpp:429
	bool IsButtonJustReleased(CgsInput::EPadButton) const;

	// CgsInputDevicePS3Pad.cpp:461
	bool IsButtonPressed(CgsInput::EPadButton) const;

	// CgsInputDevicePS3Pad.cpp:494
	void SetButtonThreshold(float32_t);

	// CgsInputDevicePS3Pad.cpp:523
	float32_t GetButtonThreshold() const;

	// CgsInputDevicePS3Pad.cpp:555
	float32_t GetAxisValue(CgsInput::EPadAxis) const;

	// CgsInputDevicePS3Pad.cpp:598
	void SetAxisValue(CgsInput::EPadAxis, float32_t);

	// CgsInputDevicePS3Pad.cpp:628
	CgsInput::Manager::EInputPort GetPort() const;

	// CgsInputDevicePS3Pad.cpp:646
	float32_t GetLeftRumble() const;

	// CgsInputDevicePS3Pad.cpp:664
	float32_t GetRightRumble() const;

	// CgsInputDevicePS3Pad.cpp:684
	void SetRumble(float32_t, float32_t);

	// CgsInputDevicePS3Pad.cpp:1348
	virtual void ClearCachedRumble();

	// CgsInputDevicePS3Pad.cpp:742
	void Update(bool, CgsInput::Manager::EInputPort, CgsInput::Device::EType, const CellPadData &, bool, bool, bool);

	// CgsInputDevicePS3Pad.cpp:965
	void Update(bool, CgsInput::Manager::EInputPort, CgsInput::Device::EType, int32_t, bool);

	// CgsInputDevicePS3Pad.cpp:1121
	void SetPause(bool);

	// CgsInputDevicePS3Pad.cpp:1157
	bool BindToPort(CgsInput::Manager::EInputPort, CgsInput::Device::EType, bool, int32_t);

	// CgsInputDevicePS3Pad.cpp:1361
	void CreateWheelFFEffects();

	// CgsInputDevicePS3Pad.cpp:1402
	void DestroyWheelFFEffects();

	// CgsInputDevicePS3Pad.cpp:1199
	void UnbindFromPort();

private:
	// CgsInputDevicePS3Pad.cpp:1226
	float32_t DeadzoneButton(float32_t);

	// CgsInputDevicePS3Pad.cpp:1260
	float32_t DeadzoneTrigger(float32_t);

	// CgsInputDevicePS3Pad.cpp:1294
	float32_t DeadzoneAxis(float32_t);

}


// JuiceDefines.h:17
namespace Juice {
	// JuicePadData.h:25
	const int JUICE_MAX_BUTTONS = 32;

	// JuicePadData.h:27
	const int MAX_JUICE_PADS = 4;

}

// JuicePadData.h:30
struct Juice::tGamePad {
private:
	// JuicePadData.h:44
	unsigned int mButtons;

	// JuicePadData.h:45
	short int[32] mButtonValues;

	// JuicePadData.h:46
	int[32] mButtonHoldWait;

	// JuicePadData.h:47
	unsigned int[32] mButtonHoldCountDown;

	// JuicePadData.h:48
	unsigned int[32] mButtonHoldStart;

	// JuicePadData.h:49
	int mPadUsed;

public:
	// JuicePadData.h:32
	const short int GetButton(Juice::eJuiceButtonNames);

	// JuicePadData.h:33
	void SetButton(Juice::eJuiceButtonNames, short int, int);

	// JuicePadData.h:34
	void SetButton(Juice::eJuiceButtonNames, short int);

	// JuicePadData.h:35
	const int IsPadUsed();

	// JuicePadData.h:36
	void PadUsed(int);

	// JuicePadData.h:37
	unsigned int GetButtonMask();

	// JuicePadData.h:38
	void SetButtonMask(unsigned int);

	// JuicePadData.h:39
	void ResetPad();

	// JuicePadData.h:40
	void Initialize();

	// JuicePadData.h:41
	void tGamePad();

}


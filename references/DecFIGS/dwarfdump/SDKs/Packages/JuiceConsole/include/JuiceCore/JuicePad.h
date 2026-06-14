// JuiceDefines.h:17
namespace Juice {
	// JuicePad.h:26
	const int BYTE_SIZE = 8;

	// JuicePad.h:28
	const int NUM_BUTTONS = 32;

}

// JuicePad.h:34
struct Juice::tJuicePad {
	// JuicePad.h:35
	unsigned int mButtons;

	// JuicePad.h:36
	float[32] mButtonVal;

	// JuicePad.h:37
	int[32] mScriptButtonHoldTable;

	// JuicePad.h:38
	float[32] mScriptButtonHoldValueTable;

}

// JuicePad.h:42
struct Juice::JuicePad {
private:
	// JuicePad.h:139
	tJuicePad masterJuicePad;

	// JuicePad.h:140
	tJuicePad mPreviousJuicePad;

	// JuicePad.h:141
	tJuicePad mCurrentlyPressed;

	// JuicePad.h:143
	tGamePad[4] mGamePads;

	// JuicePad.h:151
	float mButtonValue;

	// JuicePad.h:152
	unsigned int mDisabledButtons;

	// JuicePad.h:156
	unsigned int mTimeElapsed;

	// JuicePad.h:157
	unsigned int mLastUpdateTime;

	// JuicePad.h:158
	int mScriptButtonDelta;

	// JuicePad.h:159
	float mMaxButtonValue;

public:
	// JuicePad.h:47
	JuicePad * Instance();

	// JuicePad.h:51
	void SetButton(Juice::eJuiceButtonNames, float);

	// JuicePad.h:56
	void SetScriptButton(Juice::eJuiceButtonNames, float, int);

	// JuicePad.h:60
	void SetScriptButtonDelta(int);

	// JuicePad.h:64
	void StopScriptButtonDelta();

	// JuicePad.h:68
	float GetButtonValue(Juice::eJuiceButtonNames);

	// JuicePad.h:72
	void EnableButton(Juice::eJuiceButtonNames);

	// JuicePad.h:76
	void DisableButton(Juice::eJuiceButtonNames);

	// JuicePad.h:80
	int IsButtonDisabled(Juice::eJuiceButtonNames);

	// JuicePad.h:84
	int IsButtonPressed(Juice::eJuiceButtonNames);

	// JuicePad.h:88
	int IsButtonReleased(Juice::eJuiceButtonNames);

	// JuicePad.h:92
	int DidInputHappen();

	// JuicePad.h:96
	tJuicePad * GetMasterPad();

	// JuicePad.h:100
	void ResetButtons();

	// JuicePad.h:104
	void UpdateJuicePad();

	// JuicePad.h:108
	void SetButtonMask(unsigned int);

	// JuicePad.h:113
	void SetScriptButtonMask(unsigned int, int);

	// JuicePad.h:116
	void SaveLastInput();

	// JuicePad.h:119
	void SetReleasedButtonsMask();

	// JuicePad.h:126
	tGamePad * GetGamePad(Juice::eJuicePadNum);

private:
	// JuicePad.h:153
	void JuicePad();

}


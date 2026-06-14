// JuiceDefines.h:17
namespace Juice {
	// JuiceMonkey.h:8
	enum eMonkeyState {
		MONKEY_RANDOM = 0,
		MONKEY_SEQUENTIAL = 1,
	}

}

// JuiceMonkey.h:15
struct Juice::JuiceMonkey {
	// JuiceMonkey.h:17
	extern JuiceMonkey *(*)() Instance;

private:
	// JuiceMonkey.h:26
	Juice::eMonkeyState mMonkeyState;

	// JuiceMonkey.h:27
	bool mEnabled;

	// JuiceMonkey.h:28
	unsigned int[21] mFrequency;

public:
	// JuiceMonkey.h:18
	void CheckMonkey();

	// JuiceMonkey.h:19
	void SetMonkeyState(Juice::eMonkeyState);

	// JuiceMonkey.h:20
	void ActivatePadMonkey(unsigned int);

	// JuiceMonkey.h:21
	void DeactivatePadMonkey();

	// JuiceMonkey.h:22
	void SetButtonFrequency(Juice::eJuiceButtonNames, unsigned int);

private:
	// JuiceMonkey.h:25
	JuiceMonkey * InstanceFunction();

	// JuiceMonkey.h:29
	void JuiceMonkey();

	// JuiceMonkey.h:30
	void Sequential();

	// JuiceMonkey.h:31
	void Random();

}


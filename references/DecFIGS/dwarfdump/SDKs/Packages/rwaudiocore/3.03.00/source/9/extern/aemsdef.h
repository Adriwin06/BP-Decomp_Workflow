// aemsdef.h:108
namespace AemsDef {
	struct TIMERCLIENT;

	struct MODULEINSTANCE;

	struct Module;

	struct DESTROYSETTINGS;

	// aemsdef.h:111
	const int MAX_COMPONENTS = 40;

	// aemsdef.h:114
	const unsigned char PLATFORM_WIN;

	// aemsdef.h:115
	const unsigned char PLATFORM_MAC = 1;

	// aemsdef.h:116
	const unsigned char PLATFORM_PS2 = 2;

	// aemsdef.h:117
	const unsigned char PLATFORM_XBOX = 3;

	// aemsdef.h:118
	const unsigned char PLATFORM_GC = 4;

	// aemsdef.h:119
	const unsigned char PLATFORM_XENON = 5;

	// aemsdef.h:120
	const unsigned char PLATFORM_PSP = 6;

	// aemsdef.h:121
	const unsigned char PLATFORM_WININTERMEDIATE = 7;

	// aemsdef.h:122
	const unsigned char PLATFORM_XENONINTERMEDIATE = 8;

	// aemsdef.h:123
	const unsigned char PLATFORM_PSPINTERMEDIATE = 9;

	// aemsdef.h:124
	const unsigned char PLATFORM_PS3 = 10;

	// aemsdef.h:125
	const unsigned char PLATFORM_PS3INTERMEDIATE = 11;

	// aemsdef.h:126
	const unsigned char PLATFORM_MAX = 12;

	// aemsdef.h:128
	const unsigned char SAMPLEENTRY_PATCH;

	// aemsdef.h:129
	const unsigned char SAMPLEENTRY_STREAM = 1;

	// aemsdef.h:130
	const unsigned char SAMPLEENTRY_LOOPEDSTREAM = 2;

	// aemsdef.h:131
	const unsigned char SAMPLEENTRY_MIDI = 3;

	// aemsdef.h:132
	const unsigned char SAMPLEENTRY_MAX = 4;

	// aemsdef.h:134
	const unsigned char ENVELOPE_CONTROL_STOP;

	// aemsdef.h:135
	const unsigned char ENVELOPE_CONTROL_PLAY = 1;

	// aemsdef.h:136
	const unsigned char ENVELOPE_CONTROL_PAUSE = 2;

	// aemsdef.h:137
	const unsigned char ENVELOPE_CONTROL_RELEASE = 3;

	// aemsdef.h:140
	const unsigned char PLAYER_INPUT_PITCHMULT;

	// aemsdef.h:141
	const unsigned char PLAYER_INPUT_TIMEMULT = 1;

	// aemsdef.h:142
	const unsigned char PLAYER_INPUT_VOL = 2;

	// aemsdef.h:143
	const unsigned char PLAYER_INPUT_AZIMUTH = 3;

	// aemsdef.h:144
	const unsigned char PLAYER_INPUT_ELEVATION = 4;

	// aemsdef.h:145
	const unsigned char PLAYER_INPUT_FXWET0 = 5;

	// aemsdef.h:146
	const unsigned char PLAYER_INPUT_LOWPASS = 6;

	// aemsdef.h:147
	const unsigned char PLAYER_INPUT_HIGHPASS = 7;

	// aemsdef.h:148
	const unsigned char PLAYER_INPUT_DRYLEVEL = 8;

	// aemsdef.h:149
	const unsigned char PLAYER_INPUT_USER_FIRST = 9;

	// aemsdef.h:150
	const unsigned char PLAYER_INPUT_USER_LAST = 136;

	// aemsdef.h:152
	const unsigned char PLAYER_INPUT_MAX = 9;

	// aemsdef.h:153
	const unsigned char PLAYER_INPUT_EXTENDED_MAX = 137;

	// aemsdef.h:155
	const unsigned char PLAYER_OUTPUT_MIN = 3;

	// aemsdef.h:156
	const unsigned char PLAYER_OUTPUT_MAX = 8;

	// aemsdef.h:158
	const unsigned char PLAYER_PLAYCONTROL_STOP;

	// aemsdef.h:159
	const unsigned char PLAYER_PLAYCONTROL_PLAY = 1;

	// aemsdef.h:160
	const unsigned char PLAYER_PLAYCONTROL_PAUSE = 2;

	// aemsdef.h:162
	const unsigned char OSCILLATOR_WAVEFORM_SINE;

	// aemsdef.h:163
	const unsigned char OSCILLATOR_WAVEFORM_SQUARE = 1;

	// aemsdef.h:164
	const unsigned char OSCILLATOR_WAVEFORM_SAWTOOTH = 2;

	// aemsdef.h:165
	const unsigned char OSCILLATOR_WAVEFORM_TRIANGLE = 3;

}

// aemsdef.h:502
struct AemsDef::TIMERCLIENT {
	// aemsdef.h:503
	CListDNode ln;

	// aemsdef.h:508
	int padTo64Bit1;

	// aemsdef.h:510
	void * pclientfn;

	// aemsdef.h:515
	int padTo64Bit2;

	// aemsdef.h:517
	void * pclientdata;

}

// aemsdef.h:528
struct AemsDef::MODULEINSTANCE {
	// aemsdef.h:529
	CListDNode ln;

	// aemsdef.h:530
	TIMERCLIENT timerclient;

}

// aemsdef.h:540
struct AemsDef::Module {
	// aemsdef.h:542
	int id;

	// aemsdef.h:544
	int padTo64Bit1;

	// aemsdef.h:549
	ClassHandle classHandle;

	// aemsdef.h:550
	ClassConstructorClient constructorClient;

	// aemsdef.h:553
	short int curinstances;

	// aemsdef.h:554
	short int maxinstances;

	// aemsdef.h:557
	short unsigned int numGlobals;

	// aemsdef.h:558
	short unsigned int numFunctions;

	// aemsdef.h:560
	unsigned char numPlayers;

	// aemsdef.h:561
	unsigned char classDestructorPresent;

	// aemsdef.h:562
	unsigned char classDataPresent;

	// aemsdef.h:563
	unsigned char numClassControllers;

	// aemsdef.h:565
	int padTo64Bit2;

	// aemsdef.h:572
	int padTo64Bit3;

	// aemsdef.h:495
	typedef None TIMERCLIENTFN;

	// aemsdef.h:574
	Module::TIMERCLIENTFN * pcode;

	// aemsdef.h:579
	int padTo64Bit4;

	// aemsdef.h:581
	void * pdata;

	// aemsdef.h:583
	int datasize;

	// aemsdef.h:588
	int destroydataoffset;

	// aemsdef.h:591
	CListDStack moduleInstance;

public:
	// aemsdef.h:594
	void Module();

	// aemsdef.h:595
	void ~Module();

private:
	// aemsdef.h:599
	void Module(const Module &);

	// aemsdef.h:600
	Module & operator=(const Module &);

}

// aemsdef.h:923
struct AemsDef::DESTROYSETTINGS {
	// aemsdef.h:927
	int padTo64Bit1;

	// aemsdef.h:601
	typedef Module Module;

	// aemsdef.h:929
	DESTROYSETTINGS::Module * pModule;

	// aemsdef.h:934
	int padTo64Bit2;

	// aemsdef.h:936
	MODULEINSTANCE * pModuleInstance;

	// aemsdef.h:940
	int padTo64Bit3;

	// aemsdef.h:942
	Csis::Class * pClass;

}


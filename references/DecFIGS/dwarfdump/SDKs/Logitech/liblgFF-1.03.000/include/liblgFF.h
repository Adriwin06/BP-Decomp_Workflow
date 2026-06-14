// liblgFF.h:185
struct lgDevDeviceDesc {
	// liblgFF.h:186
	unsigned int DevClass;

	// liblgFF.h:187
	unsigned int AdditionalControls;

	// liblgFF.h:188
	unsigned int Flags;

	// liblgFF.h:189
	unsigned char[8] Topology;

	// liblgFF.h:190
	int ExistingHandle;

}

// liblgFF.h:191
typedef lgDevDeviceDesc lgDevDeviceDesc;

// liblgFF.h:38
struct lgDevInitParams {
	// liblgFF.h:41
	unsigned int MaxDevices;

	// liblgFF.h:45
	unsigned int MaxEffects;

	// liblgFF.h:49
	unsigned int ThreadPriority;

	// liblgFF.h:53
	void *(*)(size_t) pfnMemAlloc;

	// liblgFF.h:54
	void (*)(void *) pfnMemFree;

}

// liblgFF.h:56
typedef lgDevInitParams lgDevInitParams;

// liblgFF.h:74
struct lgDevPosition {
	// liblgFF.h:76
	short unsigned int Status;

	// liblgFF.h:80
	short int X1;

	// liblgFF.h:87
	short int Y1;

	// liblgFF.h:91
	short int X2;

	// liblgFF.h:95
	short int Y2;

	// liblgFF.h:99
	short unsigned int Throttle;

	// liblgFF.h:103
	short int Twist;

	// liblgFF.h:107
	short unsigned int Accelerator;

	// liblgFF.h:111
	short unsigned int Brake;

	// liblgFF.h:115
	short unsigned int Clutch;

	// liblgFF.h:120
	unsigned char POV0;

	// liblgFF.h:121
	unsigned char POV1;

	// liblgFF.h:125
	unsigned int Buttons;

	// liblgFF.h:128
	short int Gear;

}

// liblgFF.h:130
typedef lgDevPosition lgDevPosition;

// liblgFF.h:260
struct lgDevEnvelopeParams {
	// liblgFF.h:261
	unsigned int AttackTime;

	// liblgFF.h:262
	unsigned int AttackLevel;

	// liblgFF.h:263
	unsigned int FadeTime;

	// liblgFF.h:264
	unsigned int FadeLevel;

}

// liblgFF.h:265
typedef lgDevEnvelopeParams lgDevEnvelopeParams;

// liblgFF.h:267
struct lgDevConstantForceParams {
	// liblgFF.h:268
	int Magnitude;

	// liblgFF.h:269
	unsigned int Direction;

	// liblgFF.h:271
	lgDevEnvelopeParams envelope;

}

// liblgFF.h:274
struct lgDevRampForceParams {
	// liblgFF.h:275
	int MagnitudeStart;

	// liblgFF.h:276
	int MagnitudeEnd;

	// liblgFF.h:277
	unsigned int Direction;

}

// liblgFF.h:281
struct lgDevPeriodicForceParams {
	// liblgFF.h:282
	unsigned int Magnitude;

	// liblgFF.h:283
	unsigned int Direction;

	// liblgFF.h:285
	unsigned int Period;

	// liblgFF.h:286
	unsigned int Phase;

	// liblgFF.h:287
	int Offset;

	// liblgFF.h:288
	lgDevEnvelopeParams envelope;

}

// liblgFF.h:291
struct lgDevConditionForceParams {
	// liblgFF.h:292
	int Offset;

	// liblgFF.h:293
	unsigned int Deadband;

	// liblgFF.h:294
	unsigned int SaturationNeg;

	// liblgFF.h:295
	unsigned int SaturationPos;

	// liblgFF.h:296
	int CoefficientNeg;

	// liblgFF.h:297
	int CoefficientPos;

}

// liblgFF.h:300
struct lgDevForceEffect {
	// liblgFF.h:301
	unsigned char Type;

	// liblgFF.h:302
	unsigned int Duration;

	// liblgFF.h:304
	unsigned int StartDelay;

	// liblgFF.h:310
	// liblgFF.h:305
	union {
		// liblgFF.h:306
		lgDevConstantForceParams constant;

		// liblgFF.h:307
		lgDevRampForceParams ramp;

		// liblgFF.h:308
		lgDevPeriodicForceParams periodic;

		// liblgFF.h:309
		lgDevConditionForceParams[2] condition;

	}
 p;

}

// liblgFF.h:311
typedef lgDevForceEffect lgDevForceEffect;


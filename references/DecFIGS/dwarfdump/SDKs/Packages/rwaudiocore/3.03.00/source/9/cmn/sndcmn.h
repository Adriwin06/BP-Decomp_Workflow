// sndcmn.h:538
struct ENVELOPE {
	// sndcmn.h:539
	int duration;

	// sndcmn.h:541
	int targetvol;

}

// sndcmn.h:545
struct SCALINGTABLE {
	// sndcmn.h:546
	signed char[128] xlate;

}

// sndcmn.h:587
struct FXVOLUME {
	// sndcmn.h:588
	float fxLevel;

}

// sndcmn.h:598
struct CHANPUB {
	// sndcmn.h:599
	int handle;

	// sndcmn.h:601
	short int[6] voices;

	// sndcmn.h:603
	short unsigned int patnum;

	// sndcmn.h:604
	short int bhandle;

	// sndcmn.h:606
	unsigned int frames;

	// sndcmn.h:607
	int sustainend;

	// sndcmn.h:609
	short unsigned int azimuth;

	// sndcmn.h:610
	signed char progfxlevel;

	// sndcmn.h:613
	unsigned char isLfe;

	// sndcmn.h:615
	short unsigned int samplerate;

	// sndcmn.h:616
	unsigned char samplerep;

	// sndcmn.h:617
	unsigned char numchan;

	// sndcmn.h:619
	unsigned char patchkey;

	// sndcmn.h:620
	unsigned char ismaster;

	// sndcmn.h:622
	short int pitchlfodepth;

	// sndcmn.h:624
	short int masterchan;

	// sndcmn.h:625
	unsigned char priority;

	// sndcmn.h:626
	signed char builtinvol;

	// sndcmn.h:628
	unsigned int timestamp;

	// sndcmn.h:633
	float fadePer100Hz;

	// sndcmn.h:636
	float fadeTargetVol;

	// sndcmn.h:641
	float programmedVol;

	// sndcmn.h:643
	int envpertick;

	// sndcmn.h:644
	int envvol;

	// sndcmn.h:645
	int envduration;

	// sndcmn.h:647
	float finalvol;

	// sndcmn.h:649
	short unsigned int builtinazimuth;

	// sndcmn.h:650
	unsigned char vollfolength;

	// sndcmn.h:651
	unsigned char pitchlfolength;

	// sndcmn.h:653
	unsigned char curvollfoentry;

	// sndcmn.h:654
	char[3] pad;

	// sndcmn.h:658
	short unsigned int[6] azimuthOffsets;

	// sndcmn.h:660
	signed char numenvelopes;

	// sndcmn.h:661
	signed char curenvelope;

	// sndcmn.h:662
	signed char releaseenvelope;

	// sndcmn.h:663
	signed char drylevel;

	// sndcmn.h:665
	FXVOLUME * pFxVolume;

	// sndcmn.h:667
	unsigned char curpitchlfoentry;

	// sndcmn.h:668
	signed char status;

	// sndcmn.h:669
	short unsigned int timemult;

	// sndcmn.h:671
	ENVELOPE * paenvelope;

	// sndcmn.h:673
	SCALINGTABLE * pvoltable;

	// sndcmn.h:675
	SCALINGTABLE * pvollfo;

	// sndcmn.h:677
	SCALINGTABLE * ppitchlfo;

	// sndcmn.h:680
	short int initialdetune;

	// sndcmn.h:683
	short unsigned int detunepitch;

	// sndcmn.h:686
	short unsigned int progpitch;

	// sndcmn.h:688
	short unsigned int finalpitch;

}

// sndcmn.h:1244
struct Snd9::VariableTimerClient {
	// sndcmn.h:1245
	CListDNode ln;

	// sndcmn.h:1246
	void (*)(void *) pClientFunc;

	// sndcmn.h:1247
	void * pClientData;

}

// sndcmn.h:1268
struct Snd9::Util {
public:
	// sndcmn.h:1276
	void ReallocBuf(void **, int *, int, int);

	// sndcmn.h:1278
	void * MemCpy(void *, const void *, size_t);

	// sndcmn.h:1284
	void SetDefaultAzimuths(CHANPUB *);

	// sndcmn.h:1287
	short unsigned int Az360To65536(float);

	// sndcmn.h:1293
	float Az65536To360(short unsigned int);

	// sndcmn.h:1298
	void FastVol(CHANPUB *);

	// sndcmn.h:1306
	// Declaration
	void AddVariableTimerClient() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// sndcmn.h:1248
		typedef VariableTimerClient VariableTimerClient;

	}

	// sndcmn.h:1315
	void RemoveVariableTimerClient(VariableTimerClient *);

}

// sndcmn.h:1250
extern CListDStack gVariableTimerList;


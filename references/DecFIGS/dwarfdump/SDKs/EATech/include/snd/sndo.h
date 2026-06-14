// sndo.h:374
namespace Snd9 {
	// sndo.h:499
	const float AZIMUTH_DEFAULT;

	// sndo.h:1199
	const int FILE_SIZE_UNKNOWN = 4294967295;

}

// sndo.h:374
namespace Snd9 {
	// sndo.h:400
	enum Result {
		RESULT_ERR_INVDATAFORMAT = -11,
		RESULT_ERR_INVPARAM = -10,
		RESULT_ERR_DRIVER = -9,
		RESULT_ERR_UNSUPPORTEDOPT = -8,
		RESULT_ERR_ALREADYINUSE = -7,
		RESULT_ERR_GENERAL = -6,
		RESULT_ERR_INVOPT = -5,
		RESULT_ERR_NOTINIT = -4,
		RESULT_ERR_INVPLAYERTYPE = -3,
		RESULT_ERR_MEMERROR = -2,
		RESULT_ERR_FILEERROR = -1,
		RESULT_OK = 0,
	}

	// Declaration
	struct IAemsSamplePlayer {
		// sndo.h:1429
		enum InputSelector {
			PLAYER_INPUT_PITCHMULT = 0,
			PLAYER_INPUT_TIMEMULT = 1,
			PLAYER_INPUT_VOL = 2,
			PLAYER_INPUT_AZIMUTH = 3,
			PLAYER_INPUT_ELEVATION = 4,
			PLAYER_INPUT_FXWET0 = 5,
			PLAYER_INPUT_LOWPASS = 6,
			PLAYER_INPUT_HIGHPASS = 7,
			PLAYER_INPUT_DRYLEVEL = 8,
			PLAYER_INPUT_USER_FIRST = 9,
			PLAYER_INPUT_USER_LAST = 136,
		}

	}

	struct AemsPlayerInputAccessor;

	struct IAemsSamplePlayerFactory;

	struct VariableTimerClient;

	struct Util;

	// sndo.h:499
	const float AZIMUTH_DEFAULT;

	// sndo.h:1199
	const int FILE_SIZE_UNKNOWN = 4294967295;

}

// sndo.h:1587
struct Snd9::AemsPlayerInputAccessor {
private:
	// sndo.h:1669
	unsigned int mNumInputs;

	// sndo.h:1670
	void * mInputStates;

public:
	// sndo.h:1595
	unsigned int GetNumInputs() const;

	// sndo.h:1610
	int GetType(unsigned int) const;

	// sndo.h:1625
	int GetValue(unsigned int) const;

	// sndo.h:1643
	bool IsConnected(unsigned int) const;

	// sndo.h:1662
	int GetValueByType(unsigned int) const;

private:
	// sndo.h:1667
	void AemsPlayerInputAccessor(unsigned int, void *);

}

// sndo.h:1698
struct Snd9::IAemsSamplePlayerFactory {
	int (*)(...) * _vptr.IAemsSamplePlayerFactory;

public:
	void IAemsSamplePlayerFactory(const IAemsSamplePlayerFactory &);

	// sndo.h:1732
	virtual Snd9::IAemsSamplePlayer * CreateInstance(void *, int, const int *, const char *, int, const AemsPlayerInputAccessor *);

	// sndo.h:1746
	virtual void Release();

protected:
	// sndo.h:1750
	void IAemsSamplePlayerFactory();

	// sndo.h:1751
	virtual void ~IAemsSamplePlayerFactory();

}

// sndo.h:1421
struct Snd9::IAemsSamplePlayer {
	int (*)(...) * _vptr.IAemsSamplePlayer;

public:
	void IAemsSamplePlayer(const IAemsSamplePlayer &);

	// sndo.h:1491
	virtual void Release();

	// sndo.h:1505
	virtual void Pause();

	// sndo.h:1518
	virtual void Unpause();

	// sndo.h:1533
	virtual void SetInput(Snd9::IAemsSamplePlayer::InputSelector, int);

	// sndo.h:1549
	virtual void SetAzimuth(int, int *[6][6]);

	// sndo.h:1562
	virtual void GetOutputs(int, int *);

protected:
	// sndo.h:1566
	void IAemsSamplePlayer();

	// sndo.h:1567
	virtual void ~IAemsSamplePlayer();

}

// sndo.h:169
struct SNDREQUESTSTATUS {
	// sndo.h:170
	int state;

	// sndo.h:171
	int currenttime;

	// sndo.h:172
	int timetoend;

	// sndo.h:173
	int timebuffered;

}

// sndo.h:174
typedef SNDREQUESTSTATUS SNDREQUESTSTATUS;

// sndo.h:179
struct SNDSTREAMSTATUS {
	// sndo.h:180
	int outstandingrequests;

	// sndo.h:181
	int currentrequest;

	// sndo.h:182
	int timebuffered;

}

// sndo.h:183
typedef SNDSTREAMSTATUS SNDSTREAMSTATUS;


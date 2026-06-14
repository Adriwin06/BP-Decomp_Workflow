// saemsi.h:12
struct SNDAEMS {
	// saemsi.h:14
	CListDStack timerclient;

	// saemsi.h:17
	CListDStack modulebank;

	// saemsi.h:20
	VariableTimerClient variabletimerclient;

}

// saemsi.h:21
typedef SNDAEMS SNDAEMS;

// _built-in_
namespace :: {
	// saemsi.h:24
	extern SNDAEMS sndaems;

}

// saemsi.h:24
extern SNDAEMS sndaems;


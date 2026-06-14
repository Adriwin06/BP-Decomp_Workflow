// netgamedist.h:93
struct CgsNetwork::DirtySock::NetGameDistStreamInpT {
	// netgamedist.h:94
	char * inpdata;

	// netgamedist.h:95
	int32_t inpsize;

	// netgamedist.h:96
	int32_t inpprog;

	// netgamedist.h:97
	int32_t inpkind;

}

// netgamedist.h:102
struct CgsNetwork::DirtySock::NetGameDistStreamT {
	// netgamedist.h:103
	NetGameDistStreamT * next;

	// netgamedist.h:63
	typedef CgsNetwork::DirtySock::NetGameDistRefT NetGameDistRefT;

	// netgamedist.h:104
	NetGameDistStreamT::NetGameDistRefT * client;

	// netgamedist.h:106
	int32_t ident;

	// netgamedist.h:107
	int32_t subchan;

	// netgamedist.h:108
	int32_t refnum;

	// netgamedist.h:109
	void * refptr;

	// netgamedist.h:78
	typedef int32_t (NetGameDistStreamT *, int32_t, void *, int32_t) NetGameDistStreamSendProc;

	// netgamedist.h:110
	NetGameDistStreamT::NetGameDistStreamSendProc * Send;

	// netgamedist.h:81
	typedef int32_t (NetGameDistStreamT *, int32_t, int32_t, void *, int32_t) NetGameDistStreamSendProc2;

	// netgamedist.h:111
	NetGameDistStreamT::NetGameDistStreamSendProc2 * Send2;

	// netgamedist.h:87
	typedef void (NetGameDistStreamT *, int32_t, void *, int32_t) NetGameDistStreamRecvProc;

	// netgamedist.h:112
	NetGameDistStreamT::NetGameDistStreamRecvProc * Recv;

	// netgamedist.h:90
	typedef void (NetGameDistStreamT *, int32_t, int32_t, void *, int32_t) NetGameDistStreamRecvProc2;

	// netgamedist.h:113
	NetGameDistStreamT::NetGameDistStreamRecvProc2 * Recv2;

	// netgamedist.h:114
	int32_t qdepth;

	// netgamedist.h:115
	int32_t qlimit;

	// netgamedist.h:117
	int32_t inpmaxm;

	// netgamedist.h:98
	typedef NetGameDistStreamInpT NetGameDistStreamInpT;

	// netgamedist.h:118
	NetGameDistStreamT::NetGameDistStreamInpT * inp;

	// netgamedist.h:120
	char * outdata;

	// netgamedist.h:121
	int32_t outmaxm;

	// netgamedist.h:122
	int32_t outsize;

	// netgamedist.h:123
	int32_t outprog;

	// netgamedist.h:125
	char * syndata;

	// netgamedist.h:126
	int32_t synmaxm;

	// netgamedist.h:127
	int32_t synsize;

}

// netgamedist.h:63
typedef NetGameDistRefT NetGameDistRefT;


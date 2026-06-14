// netgamelink.h:53
struct CgsNetwork::DirtySock::NetGameLinkHistT {
	// netgamelink.h:54
	uint16_t min;

	// netgamelink.h:55
	uint16_t max;

	// netgamelink.h:56
	uint16_t avg;

	// netgamelink.h:57
	uint16_t cnt;

}

// netgamelink.h:62
struct CgsNetwork::DirtySock::NetGameLinkStatT {
	// netgamelink.h:63
	uint32_t volatile tick;

	// netgamelink.h:64
	uint32_t volatile tickseqn;

	// netgamelink.h:66
	uint32_t ping;

	// netgamelink.h:67
	uint32_t late;

	// netgamelink.h:68
	uint32_t conn;

	// netgamelink.h:69
	uint32_t sent;

	// netgamelink.h:70
	uint32_t rcvd;

	// netgamelink.h:71
	uint32_t sentlast;

	// netgamelink.h:72
	uint32_t rcvdlast;

	// netgamelink.h:73
	uint32_t sentshow;

	// netgamelink.h:74
	uint32_t rcvdshow;

	// netgamelink.h:75
	uint32_t senthide;

	// netgamelink.h:76
	uint32_t rcvdhide;

	// netgamelink.h:77
	uint32_t bps;

	// netgamelink.h:78
	uint32_t rps;

	// netgamelink.h:79
	uint32_t nps;

	// netgamelink.h:80
	uint32_t pps;

	// netgamelink.h:81
	uint32_t rpps;

	// netgamelink.h:82
	uint32_t stattick;

	// netgamelink.h:83
	uint32_t packsent;

	// netgamelink.h:84
	uint32_t packrcvd;

	// netgamelink.h:85
	uint32_t packlost;

	// netgamelink.h:87
	uint8_t isconn;

	// netgamelink.h:88
	uint8_t isopen;

	// netgamelink.h:89
	uint8_t[2] pad0;

	// netgamelink.h:91
	uint32_t pingtick;

	// netgamelink.h:92
	uint32_t pingslot;

	// netgamelink.h:93
	uint32_t[3] pad1;

	// netgamelink.h:58
	typedef NetGameLinkHistT NetGameLinkHistT;

	// netgamelink.h:95
	NetGameLinkStatT::NetGameLinkHistT[32] pinghist;

}

// netgamelink.h:49
typedef NetGameLinkRefT NetGameLinkRefT;

// netgamelink.h:53
struct NetGameLinkHistT {
	// netgamelink.h:54
	uint16_t min;

	// netgamelink.h:55
	uint16_t max;

	// netgamelink.h:56
	uint16_t avg;

	// netgamelink.h:57
	uint16_t cnt;

}

// netgamelink.h:58
typedef NetGameLinkHistT NetGameLinkHistT;

// netgamelink.h:62
struct NetGameLinkStatT {
	// netgamelink.h:63
	uint32_t volatile tick;

	// netgamelink.h:64
	uint32_t volatile tickseqn;

	// netgamelink.h:66
	uint32_t ping;

	// netgamelink.h:67
	uint32_t late;

	// netgamelink.h:68
	uint32_t conn;

	// netgamelink.h:69
	uint32_t sent;

	// netgamelink.h:70
	uint32_t rcvd;

	// netgamelink.h:71
	uint32_t sentlast;

	// netgamelink.h:72
	uint32_t rcvdlast;

	// netgamelink.h:73
	uint32_t sentshow;

	// netgamelink.h:74
	uint32_t rcvdshow;

	// netgamelink.h:75
	uint32_t senthide;

	// netgamelink.h:76
	uint32_t rcvdhide;

	// netgamelink.h:77
	uint32_t bps;

	// netgamelink.h:78
	uint32_t rps;

	// netgamelink.h:79
	uint32_t nps;

	// netgamelink.h:80
	uint32_t pps;

	// netgamelink.h:81
	uint32_t rpps;

	// netgamelink.h:82
	uint32_t stattick;

	// netgamelink.h:83
	uint32_t packsent;

	// netgamelink.h:84
	uint32_t packrcvd;

	// netgamelink.h:85
	uint32_t packlost;

	// netgamelink.h:87
	uint8_t isconn;

	// netgamelink.h:88
	uint8_t isopen;

	// netgamelink.h:89
	uint8_t[2] pad0;

	// netgamelink.h:91
	uint32_t pingtick;

	// netgamelink.h:92
	uint32_t pingslot;

	// netgamelink.h:93
	uint32_t[3] pad1;

	// netgamelink.h:95
	NetGameLinkHistT[32] pinghist;

}

// netgamelink.h:96
typedef NetGameLinkStatT NetGameLinkStatT;

// netgamelink.h:49
struct NetGameLinkRefT {
	// netgamelink.c:60
	CommRef * m_port;

	// netgamelink.c:62
	int32_t m_portowner;

	// netgamelink.c:65
	int32_t m_memgroup;

	// netgamelink.c:68
	uint32_t m_lastsend;

	// netgamelink.c:70
	uint32_t m_lastrecv;

	// netgamelink.c:72
	uint32_t m_lastecho;

	// netgamelink.c:74
	uint32_t m_lastsync;

	// netgamelink.c:76
	uint32_t m_lasthist;

	// netgamelink.c:79
	int32_t m_rttavg;

	// netgamelink.c:81
	int32_t m_rttdev;

	// netgamelink.c:84
	NetGameLinkStatT m_stats;

	// netgamelink.c:87
	int32_t m_inpbyte;

	// netgamelink.c:89
	int32_t m_inppack;

	// netgamelink.c:91
	int32_t m_inprawb;

	// netgamelink.c:93
	int32_t m_inprawp;

	// netgamelink.c:95
	int32_t m_overhead;

	// netgamelink.c:98
	char * m_buffer;

	// netgamelink.c:100
	int32_t m_buflen;

	// netgamelink.c:102
	int32_t m_bufmax;

	// netgamelink.c:105
	NetCritT crit;

	// netgamelink.c:107
	int32_t m_process;

	// netgamelink.c:110
	void * m_calldata;

	// netgamelink.c:112
	void (*)(void *, int32_t) m_callproc;

	// netgamelink.c:114
	int32_t m_callpend;

	// netgamelink.c:117
	int32_t m_recvprocct;

	// netgamelink.c:120
	int32_t m_sendenabled;

}


// netgamelink.c:50
struct NetGamePacketSyncT {
	// netgamelink.c:51
	uint32_t repl;

	// netgamelink.c:52
	uint32_t echo;

	// netgamelink.c:53
	int16_t late;

}

// netgamelink.c:54
typedef NetGamePacketSyncT NetGamePacketSyncT;

// netgamelink.c:156
int32_t _NetGameLinkSendPacket(NetGameLinkRefT *  ref, NetGamePacketT *  packet, uint32_t  currtick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netgamelink.c:157
	int32_t iResult;

	// netgamelink.c:158
	int32_t iSynced;

	// netgamelink.c:159
	NetGamePacketSyncT sync;

	// netgamelink.c:160
	uint32_t uPacketFlags;

	// netgamelink.c:160
	uint32_t uPacketType;

}

// netgamelink.c:279
int32_t _NetGameLinkRecvPacket0(NetGameLinkRefT *  ref, uint32_t  currtick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netgamelink.c:280
	int32_t size;

	// netgamelink.c:281
	int16_t delta;

	// netgamelink.c:282
	int32_t elapsed;

	// netgamelink.c:283
	uint32_t when;

	// netgamelink.c:283
	uint32_t kind;

	// netgamelink.c:284
	NetGamePacketT * packet;

	// netgamelink.c:285
	NetGameLinkHistT * history;

	{
		// netgamelink.c:355
		NetGamePacketSyncT sync;

		{
			// netgamelink.c:380
			int32_t weight;

			// netgamelink.c:382
			int32_t deviate;

		}
	}
}

// netgamelink.c:465
int32_t _NetGameLinkRecvPacket(NetGameLinkRefT *  ref, uint32_t  currtick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netgamelink.c:466
	int32_t retval;

}

// netgamelink.c:504
void _NetGameLinkProcess(NetGameLinkRefT *  ref, uint32_t  currtick) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netgamelink.c:505
	uint32_t range;

	{
		// netgamelink.c:572
		int32_t queue;

		{
			// netgamelink.c:578
			NetGamePacketT spacket;

		}
	}
}

// netgamelink.c:607
void _NetGameLinkNotify(CommRef *  what, int32_t  event) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netgamelink.c:608
	NetGameLinkRefT * ref;

}

// netgamelink.c:663
extern NetGameLinkRefT * NetGameLinkCreate(void *  pCommRef, int32_t  owner, int32_t  buflen) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netgamelink.c:664
	int32_t index;

	// netgamelink.c:665
	uint32_t tick;

	// netgamelink.c:666
	CommRef * port;

	// netgamelink.c:667
	NetGameLinkRefT * ref;

	// netgamelink.c:668
	int32_t iMemGroup;

}

// netgamelink.c:748
extern void NetGameLinkDestroy(NetGameLinkRefT *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// netgamelink.c:788
extern void NetGameLinkCallback(NetGameLinkRefT *  ref, void *  calldata, void (*)(void *, int32_t)  callproc) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// netgamelink.c:813
extern const NetGameLinkStatT * NetGameLinkStatus(NetGameLinkRefT *  ref) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netgamelink.c:814
	uint32_t volatile seqn;

	// netgamelink.c:815
	uint32_t portstat;

}

// netgamelink.c:864
extern int32_t NetGameLinkSend(NetGameLinkRefT *  ref, NetGamePacketT *  pkt, int32_t  len) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netgamelink.c:865
	int32_t cnt;

	// netgamelink.c:865
	int32_t err;

	// netgamelink.c:866
	uint32_t currtick;

}

// netgamelink.c:939
extern int32_t NetGameLinkPeek(NetGameLinkRefT *  ref, NetGamePacketT **  pkt) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netgamelink.c:940
	int32_t iBufLen;

}

// netgamelink.c:982
extern int32_t NetGameLinkRecv(NetGameLinkRefT *  ref, NetGamePacketT *  buf, int32_t  len) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// netgamelink.c:983
	NetGamePacketT * pkt;

	// netgamelink.c:984
	uint32_t currtick;

	// netgamelink.c:985
	int32_t idx;

}

// netgamelink.c:1084
extern int32_t NetGameLinkControl(NetGameLinkRefT *  ref, int32_t  iKind, int32_t  iData) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// netgamelink.c:1095
		int32_t iQueue;

	}
}


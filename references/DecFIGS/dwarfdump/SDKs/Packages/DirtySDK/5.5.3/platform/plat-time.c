// plat-time.c:67
extern uint32_t ds_timeinsecs() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// plat-time.c:97
extern uint32_t ds_timezone() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// plat-time.c:98
	time_t iGmt;

	// plat-time.c:98
	time_t iLoc;

	// plat-time.c:99
	int32_t iZone;

	{
		// plat-time.c:144
		CellRtcDateTime Gmt;

		// plat-time.c:144
		CellRtcDateTime Loc;

	}
}

// plat-time.c:196
extern tm * ds_secstotime(tm *  tm, uint32_t  elap) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// plat-time.c:197
	int32_t year;

	// plat-time.c:198
	int32_t leap;

	// plat-time.c:199
	int32_t next;

	// plat-time.c:200
	int32_t days;

	// plat-time.c:201
	int32_t secs;

	// plat-time.c:202
	const int32_t * mon;

	// plat-time.c:205
	const int32_t[24] dayspermonth;

}

// plat-time.c:277
extern uint32_t ds_timetosecs(const tm *  tm) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// plat-time.c:278
	int32_t res;

	// plat-time.c:279
	tm cmp;

	// plat-time.c:280
	uint32_t min;

	// plat-time.c:281
	uint32_t max;

	// plat-time.c:282
	uint32_t mid;

}

// plat-time.c:349
extern uint32_t ds_strtotime(const char *  pStr) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// plat-time.c:350
	int32_t i;

	// plat-time.c:351
	const char * s;

	// plat-time.c:352
	tm tm;

	// plat-time.c:353
	const char *[8] wday;

	// plat-time.c:354
	const char *[13] month;

}


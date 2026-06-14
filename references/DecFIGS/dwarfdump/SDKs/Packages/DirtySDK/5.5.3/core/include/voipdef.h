// voipdef.h:56
enum VoipProfStatE {
	VOIP_PROFSTAT_RECORD = 0,
	VOIP_PROFSTAT_COMPRESS = 1,
	VOIP_PROFSTAT_DECOMPRESS = 2,
	VOIP_PROFSTAT_PLAY = 3,
	VOIP_NUMPROFSTATS = 4,
}

// voipdef.h:63
typedef VoipProfStatE VoipProfStatE;

// voipdef.h:67
enum VoipCbTypeE {
	VOIP_CBTYPE_HSETEVENT = 0,
	VOIP_CBTYPE_FROMEVENT = 1,
	VOIP_CBTYPE_SENDEVENT = 2,
}

// voipdef.h:71
typedef VoipCbTypeE VoipCbTypeE;

// voipdef.h:81
typedef void (uint16_t *, int32_t, void *) VoipSpkrCallbackT;


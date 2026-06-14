// gcm_struct.h:30
struct CellGcmSurface {
	// gcm_struct.h:31
	uint8_t type;

	// gcm_struct.h:32
	uint8_t antialias;

	// gcm_struct.h:34
	uint8_t colorFormat;

	// gcm_struct.h:35
	uint8_t colorTarget;

	// gcm_struct.h:36
	uint8_t[4] colorLocation;

	// gcm_struct.h:37
	uint32_t[4] colorOffset;

	// gcm_struct.h:38
	uint32_t[4] colorPitch;

	// gcm_struct.h:40
	uint8_t depthFormat;

	// gcm_struct.h:41
	uint8_t depthLocation;

	// gcm_struct.h:42
	uint8_t[2] _padding;

	// gcm_struct.h:43
	uint32_t depthOffset;

	// gcm_struct.h:44
	uint32_t depthPitch;

	// gcm_struct.h:46
	uint16_t width;

	// gcm_struct.h:47
	uint16_t height;

	// gcm_struct.h:48
	uint16_t x;

	// gcm_struct.h:49
	uint16_t y;

}

// gcm_struct.h:50
typedef CellGcmSurface CellGcmSurface;

// gcm_struct.h:71
typedef int32_t (*)(CellGcmContextData *, uint32_t) CellGcmContextCallback;

// gcm_struct.h:73
struct CellGcmContextData {
	// gcm_struct.h:74
	uint32_t * begin;

	// gcm_struct.h:75
	uint32_t * end;

	// gcm_struct.h:76
	uint32_t * current;

	// gcm_struct.h:77
	CellGcmContextCallback callback;

}

// gcm_struct.h:78
typedef CellGcmContextData CellGcmContextData;

// gcm_struct.h:52
struct CellGcmTexture {
	// gcm_struct.h:53
	uint8_t format;

	// gcm_struct.h:54
	uint8_t mipmap;

	// gcm_struct.h:55
	uint8_t dimension;

	// gcm_struct.h:56
	uint8_t cubemap;

	// gcm_struct.h:58
	uint32_t remap;

	// gcm_struct.h:60
	uint16_t width;

	// gcm_struct.h:61
	uint16_t height;

	// gcm_struct.h:62
	uint16_t depth;

	// gcm_struct.h:63
	uint8_t location;

	// gcm_struct.h:64
	uint8_t _padding;

	// gcm_struct.h:66
	uint32_t pitch;

	// gcm_struct.h:67
	uint32_t offset;

}

// gcm_struct.h:68
typedef CellGcmTexture CellGcmTexture;

// gcm_struct.h:85
union CellGcmCast {
	// gcm_struct.h:86
	uint32_t u;

	// gcm_struct.h:87
	float f;

}
// gcm_struct.h:88
typedef CellGcmCast CellGcmCast;


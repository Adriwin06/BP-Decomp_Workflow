// camera.h:41
enum CellCameraType {
	CELL_CAMERA_TYPE_UNKNOWN = 0,
	CELL_CAMERA_EYETOY = 1,
	CELL_CAMERA_EYETOY2 = 2,
	CELL_CAMERA_USBVIDEOCLASS = 3,
}

// camera.h:46
typedef CellCameraType CellCameraType;

// camera.h:48
enum CellCameraFormat {
	CELL_CAMERA_FORMAT_UNKNOWN = 0,
	CELL_CAMERA_JPG = 1,
	CELL_CAMERA_RAW8 = 2,
	CELL_CAMERA_YUV422 = 3,
	CELL_CAMERA_RAW10 = 4,
	CELL_CAMERA_RGBA = 5,
	CELL_CAMERA_YUV420 = 6,
}

// camera.h:56
typedef CellCameraFormat CellCameraFormat;

// camera.h:58
enum CellCameraResolution {
	CELL_CAMERA_RESOLUTION_UNKNOWN = 0,
	CELL_CAMERA_VGA = 1,
	CELL_CAMERA_QVGA = 2,
	CELL_CAMERA_WGA = 3,
	CELL_CAMERA_SPECIFIED_WIDTH_HEIGHT = 4,
}

// camera.h:64
typedef CellCameraResolution CellCameraResolution;

// camera.h:277
struct CellCameraInfoEx {
	// camera.h:279
	CellCameraFormat format;

	// camera.h:280
	CellCameraResolution resolution;

	// camera.h:281
	int framerate;

	// camera.h:284
	unsigned char * buffer;

	// camera.h:285
	int bytesize;

	// camera.h:286
	int width;

	// camera.h:287
	int height;

	// camera.h:288
	int dev_num;

	// camera.h:289
	int guid;

	// camera.h:292
	int info_ver;

	// camera.h:293
	sys_memory_container_t container;

}

// camera.h:294
typedef CellCameraInfoEx CellCameraInfoEx;


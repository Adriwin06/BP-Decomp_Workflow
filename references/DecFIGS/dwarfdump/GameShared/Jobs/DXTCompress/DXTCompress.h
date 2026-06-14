// DXTCompress.h:46
struct DXTCompressData {
	// DXTCompress.h:48
	char * mpSrcPixels;

	// DXTCompress.h:49
	char * mpDstPixels;

	// DXTCompress.h:51
	int32_t miSrcWidth;

	// DXTCompress.h:52
	int32_t miSrcHeight;

	// DXTCompress.h:53
	int32_t miSrcPitch;

	// DXTCompress.h:54
	int32_t miDstPitch;

	// DXTCompress.h:55
	int32_t miQuality;

	// DXTCompress.h:56
	renderengine::PixelFormat mePixelFormat;

	// DXTCompress.h:57
	bool mbInputIsUncompressedYUYV;

}

// _built-in_
namespace :: {
	// DXTCompress.h:77
	extern char[] _binary_DXTCompress_elf_start;

	// DXTCompress.h:78
	extern uint32_t _binary_DXTCompress_elf_size;

}

// DXTCompress.h:77
extern char[] _binary_DXTCompress_elf_start;

// DXTCompress.h:78
extern uint32_t _binary_DXTCompress_elf_size;


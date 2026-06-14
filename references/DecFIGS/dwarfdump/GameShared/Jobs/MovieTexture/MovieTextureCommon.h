// MovieTextureCommon.h:56
struct MovieTextureParams {
	// MovieTextureCommon.h:59
	uint8_t *[3] mapu8VideoData;

	// MovieTextureCommon.h:60
	uint32_t[3] mauVideoDataStrides;

	// MovieTextureCommon.h:61
	uint32_t[3] mauVideoDataSizes;

	// MovieTextureCommon.h:63
	uint32_t muVideoWidth;

	// MovieTextureCommon.h:64
	uint32_t muVideoHeight;

	// MovieTextureCommon.h:69
	void * mpGPUMemoryTexturePixelData;

}


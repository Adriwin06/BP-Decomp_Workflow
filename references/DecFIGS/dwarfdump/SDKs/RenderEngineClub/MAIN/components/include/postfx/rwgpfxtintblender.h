// rwgpfxtintblender.h:14
struct rw::graphics::postfx::TintBlendParameters {
	// rwgpfxtintblender.h:15
	uint32_t size;

	// rwgpfxtintblender.h:16
	uint32_t numSources;

	// rwgpfxtintblender.h:17
	uint32_t dstStride;

	// rwgpfxtintblender.h:18
	uint32_t dstSliceStride;

	// rwgpfxtintblender.h:19
	uint8_t * dst;

	// rwgpfxtintblender.h:20
	uint8_t *[6] src;

	// rwgpfxtintblender.h:21
	float[6] factor;

	// rwgpfxtintblender.h:22
	uint8_t[60] pad;

}


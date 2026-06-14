// ostypes.h:78
typedef char RwChar;

// ostypes.h:101
typedef float float32_t;

// ostypes.h:102
typedef double float64_t;

// ostypes.h:119
typedef uint32_t TargetPtr;

// importnamespaces.h:8
namespace rw {
	// ostypes.h:426
	extern CoronaManager * MemAlign<renderengine::CoronaManager>(CoronaManager *, unsigned int);

	// ostypes.h:394
	extern uint32_t SizeAlign(uint32_t, uint32_t);

	// ostypes.h:426
	extern CoronaBuffer * MemAlign<renderengine::CoronaBuffer>(CoronaBuffer *, unsigned int);

}

// ostypes.h:845
struct RwRGBARealTag {
	// ostypes.h:846
	float32_t red;

	// ostypes.h:847
	float32_t green;

	// ostypes.h:848
	float32_t blue;

	// ostypes.h:849
	float32_t alpha;

public:
	// ostypes.h:850
	bool operator==(const RwRGBARealTag &) const;

}

// ostypes.h:857
typedef RwRGBARealTag RwRGBAReal;

// importnamespaces.h:8
namespace rw {
	// ostypes.h:496
	extern uint8_t * MemAddBasePtr<uint8_t, rw::graphics::postfx::ColourCube>(uint8_t *, rw::graphics::postfx::ColourCube *);

	// ostypes.h:426
	extern rw::graphics::postfx::ColourCube * MemAlign<rw::graphics::postfx::ColourCube>(rw::graphics::postfx::ColourCube *, unsigned int);

	// ostypes.h:509
	extern uint8_t * MemSubtractBasePtr<uint8_t, rw::graphics::postfx::ColourCube>(uint8_t *, rw::graphics::postfx::ColourCube *);

	// ostypes.h:394
	extern uint32_t SizeAlign(uint32_t, uint32_t);

	// ostypes.h:459
	extern void * MemAddOffset<void>(void *, unsigned int);

}

// importnamespaces.h:8
namespace rw {
	// ostypes.h:394
	extern uint32_t SizeAlign(uint32_t, uint32_t);

}

// importnamespaces.h:8
namespace rw {
	// ostypes.h:394
	extern uint32_t SizeAlign(uint32_t, uint32_t);

	// ostypes.h:376
	extern RwBool IsMemAligned(const void *, uint32_t);

}

// importnamespaces.h:8
namespace rw {
	// ostypes.h:394
	extern uint32_t SizeAlign(uint32_t, uint32_t);

	// ostypes.h:483
	extern SPU::HostPtr MemCalculateOffset(const void *, const void *);

	// ostypes.h:426
	extern uint8_t * MemAlign<std::uint8_t>(uint8_t *, unsigned int);

}

// importnamespaces.h:8
namespace rw {
	// ostypes.h:496
	extern uint8_t * MemAddBasePtr<std::uint8_t, rw::graphics::postfx::ColourCube>(uint8_t *, ColourCube *);

	// ostypes.h:509
	extern uint8_t * MemSubtractBasePtr<std::uint8_t, rw::graphics::postfx::ColourCube>(uint8_t *, ColourCube *);

	// ostypes.h:394
	extern uint32_t SizeAlign(uint32_t, uint32_t);

}

// ostypes.h:831
struct RwRGBRealTag {
	// ostypes.h:832
	float32_t red;

	// ostypes.h:833
	float32_t green;

	// ostypes.h:834
	float32_t blue;

}

// ostypes.h:838
typedef RwRGBRealTag RwRGBReal;


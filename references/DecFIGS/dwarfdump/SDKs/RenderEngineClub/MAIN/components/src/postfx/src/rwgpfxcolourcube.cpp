// rwgpfxcolourcube.cpp:5
using namespace rw;

// rwgpfxcolourcube.cpp:6
using namespace rw::math;

// rwgpfxcolourcube.cpp:7
using namespace rw::graphics::core;

// rwgpfxcolourcube.cpp:42
void rw::graphics::postfx::ColourCube::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rwgpfxcolourcube.cpp:89
void rw::graphics::postfx::ColourCube::RegisterArenaReadCallbacks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rwgpfxcolourcube.cpp:101
void rw::graphics::postfx::ColourCube::RegisterArenaWriteCallbacks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// rwgpfxcolourcube.cpp:77
void rw::graphics::postfx::ColourCube::Fixup(void *  ptr, rw::core::arena::ArenaIterator *  iterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxcolourcube.cpp:82
		rw::graphics::postfx::ColourCube * object;

		EndianSwapFixup(/* parameters */);
	}
}

// rwgpfxcolourcube.cpp:30
void rw::graphics::postfx::ColourCube::Initialize(const const Resource &  resource, const rw::graphics::postfx::ColourCube::Parameters &  parameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxcolourcube.cpp:34
		rw::graphics::postfx::ColourCube * object;

	}
}

// rwgpfxcolourcube.cpp:50
void rw::graphics::postfx::ColourCube::Unfix(void *  ptr, Arena::SizeAndAlignment *  offset) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxcolourcube.cpp:55
		rw::graphics::postfx::ColourCube * object;

		EndianSwapUnfix(/* parameters */);
	}
}

// rwgpfxcolourcube.cpp:64
void rw::graphics::postfx::ColourCube::Refix(void *  ptr, void *  offset, rw::core::arena::ArenaIterator *  iterator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxcolourcube.cpp:69
		rw::graphics::postfx::ColourCube * object;

		EndianSwapFixup(/* parameters */);
	}
}

// rwgpfxcolourcube.cpp:17
void rw::graphics::postfx::ColourCube::GetResourceDescriptor(const rw::graphics::postfx::ColourCube::Parameters &  parameters) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// rwgpfxcolourcube.cpp:21
		uint32_t size;

		ResourceDescriptor::ResourceDescriptor(/* parameters */);
		BaseResourceDescriptor::BaseResourceDescriptor(/* parameters */);
		BaseResourceDescriptors<6u>::GetBaseResourceDescriptor(/* parameters */);
	}
}


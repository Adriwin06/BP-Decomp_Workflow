// CgsDebugRenderStreamReader.h:49
struct CgsDev::DebugRenderStreamReader {
private:
	// CgsDebugRenderStreamReader.h:78
	DataStreamResultReader mInput;

public:
	// CgsDebugRenderStreamReader.h:54
	void Construct(DebugStreamInput *, int32_t, void *, int32_t);

	// CgsDebugRenderStreamReader.h:57
	void Construct(rw::IResourceAllocator *, int32_t, int32_t);

	// CgsDebugRenderStreamReader.h:60
	void Construct(LinearMalloc *, int32_t, int32_t);

	// CgsDebugRenderStreamReader.h:63
	void Construct(HeapMalloc *, int32_t, int32_t);

	// CgsDebugRenderStreamReader.h:66
	void Destruct();

	// CgsDebugRenderStreamReader.h:69
	void Begin();

	// CgsDebugRenderStreamReader.h:72
	void End();

}

// CgsDebugRenderStreamReader.h:49
struct CgsDev::DebugRenderStreamReader {
private:
	// CgsDebugRenderStreamReader.h:78
	DataStreamResultReader mInput;

public:
	// CgsDebugRenderStreamReader.h:54
	void Construct(DebugStreamInput *, int32_t, void *, int32_t);

	// CgsDebugRenderStreamReader.h:57
	void Construct(rw::IResourceAllocator *, int32_t, int32_t);

	// CgsDebugRenderStreamReader.h:60
	void Construct(LinearMalloc *, int32_t, int32_t);

	// CgsDebugRenderStreamReader.h:63
	void Construct(CgsMemory::HeapMalloc *, int32_t, int32_t);

	// CgsDebugRenderStreamReader.h:66
	void Destruct();

	// CgsDebugRenderStreamReader.h:69
	void Begin();

	// CgsDebugRenderStreamReader.h:72
	void End();

}

// CgsDebugRenderStreamReader.h:49
struct CgsDev::DebugRenderStreamReader {
private:
	// CgsDebugRenderStreamReader.h:78
	DataStreamResultReader mInput;

public:
	// CgsDebugRenderStreamReader.h:54
	void Construct(DebugStreamInput *, int32_t, void *, int32_t);

	// CgsDebugRenderStreamReader.h:57
	void Construct(rw::IResourceAllocator *, int32_t, int32_t);

	// CgsDebugRenderStreamReader.h:60
	void Construct(LinearMalloc *, int32_t, int32_t);

	// CgsDebugRenderStreamReader.h:63
	void Construct(HeapMalloc *, int32_t, int32_t);

	// CgsDebugRenderStreamReader.h:66
	void Destruct();

	// CgsDebugRenderStreamReader.h:69
	void Begin();

	// CgsDebugRenderStreamReader.h:72
	// Declaration
	void End() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsDebugRenderStreamReader.cpp:182
		using namespace Message;

	}

}


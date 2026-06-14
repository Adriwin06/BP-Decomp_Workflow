// SpliceObjects.cpp
void Splice::Play(float  lVol, float  lPitch, float  lAz, float  lSpread) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetData(/* parameters */);
	{
		// SpliceObjects.cpp:113
		int n;

	}
}

// SpliceObjects.cpp:164
void Splice::IsPlaying() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// SpliceObjects.cpp:167
		int n;

	}
}

// SpliceObjects.cpp:205
void Splice::GetCpuTicks() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// SpliceObjects.cpp:207
		uint32_t luSampleRefIndex;

		// SpliceObjects.cpp:208
		uint32_t luCpuTicks;

	}
	{
		// SpliceObjects.cpp:212
		SpliceSample * lpSpliceSample;

	}
}

// SpliceObjects.cpp:195
void Splice::operator delete(void *  lpSpliceMem) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	SpliceManager::Free(/* parameters */);
}

// SpliceObjects.cpp:82
void Splice::~Splice() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// SpliceObjects.cpp:84
		int n;

	}
}

// SpliceObjects.cpp:133
void Splice::Update(System *  lpRwacSystem, float  lVol, float  lPitch, float  lAz, float  tDelta, float  lSpread) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	GetData(/* parameters */);
	{
		// SpliceObjects.cpp:138
		int n;

	}
	SpliceManager::Free(/* parameters */);
	rw::IResourceAllocator::FreeMemoryResource(/* parameters */);
}

// SpliceObjects.cpp:47
void Splice::Splice(SPLICE_Data *  lpData, rw::audio::core::PlugIn *  lpSubMix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// SpliceObjects.cpp:54
		int n;

	}
	{
		// SpliceObjects.cpp:61
		int n;

		{
			// SpliceObjects.cpp:63
			void * lpvMem;

			// SpliceObjects.cpp:65
			SPLICE_SampleRef * lSampleData;

		}
	}
}

// SpliceObjects.cpp:11
void Splice::Splice(SPLICE_TYPE  type, int  index, rw::audio::core::PlugIn *  lpSubMix) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// SpliceObjects.cpp:17
		int n;

	}
	{
		// SpliceObjects.cpp:25
		int n;

		{
			// SpliceObjects.cpp:27
			void * lpvMem;

			// SpliceObjects.cpp:29
			SPLICE_SampleRef * lSampleData;

		}
	}
}

// SpliceObjects.cpp:184
void Splice::operator new(size_t  luSize) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// SpliceObjects.cpp:186
		void * lpMem;

		SpliceManager::Allocate(/* parameters */);
	}
	rw::IResourceAllocator::AllocateMemoryResource(/* parameters */);
	rw::ResourceDescriptor::ResourceDescriptor(/* parameters */);
	~ResourceDescriptor(/* parameters */);
	SpliceManager::GetAssertCallbackFunction(/* parameters */);
}

// _built-in_
namespace :: {
	// SpliceObjects.cpp:8
	const float KI_STEREO_SAMPLE_AZIMUTH;

	// SpliceObjects.cpp:384
	extern int g_FXBusChannel;

}


// BrnRendererModule.cpp:245
struct BrnScreenDimensions {
	// BrnRendererModule.cpp:247
	CellVideoOutResolutionId mResolutionID;

	// BrnRendererModule.cpp:248
	CellVideoOutScanMode mScanMode;

	// BrnRendererModule.cpp:249
	renderengine::Device::Parameters::DisplayType mRWDisplayType;

	// BrnRendererModule.cpp:250
	char[12] macResolutionName;

}

// BrnRendererModule.cpp:290
renderengine::Device::Parameters::DisplayType GetDisplayType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	// BrnRendererModule.cpp:317
	using namespace CgsDev::Message;

	{
		// BrnRendererModule.cpp:297
		renderengine::Device::Parameters::DisplayType mode;

		// BrnRendererModule.cpp:300
		int lnRet;

		// BrnRendererModule.cpp:302
		CellVideoOutState videoState;

	}
	{
		// BrnRendererModule.cpp:311
		uint32_t i;

		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// BrnRendererModule.cpp:1744
namespace BrnDispatchBinSharedMemory {
	struct CacheLineOfIntegers;

	// BrnRendererModule.cpp:1751
	CacheLineOfIntegers sCacheLine;

	// BrnRendererModule.cpp:1753
	uint32_t *const spBlockNextFree_Atomic;

	// BrnRendererModule.cpp:1754
	uint32_t suBlockMax;

	// BrnRendererModule.cpp:1756
	uintptr_t suSharedMemoryAddress;

}

// BrnRendererModule.cpp:1747
struct BrnDispatchBinSharedMemory::CacheLineOfIntegers {
	// BrnRendererModule.cpp:1748
	uint32_t[32] maIntegerArray;

}

// BrnRendererModule.cpp:363
namespace BrnRendererPS3GcmCommandBufferHelper {
	// BrnRendererModule.cpp:379
	extern int32_t CustomGcmCallback(CellGcmContextData *, uint32_t);

	// BrnRendererModule.cpp:447
	extern void InstallGcmCallback();

	// BrnRendererModule.cpp:364
	extern bool gbHasInstalledGcmCallback;

	// BrnRendererModule.cpp:365
	extern CellGcmContextCallback gpOriginalGcmCallback;

	// BrnRendererModule.cpp:373
	extern bool gbCommandBuffer_CacheZeroNewMemory;

	// BrnRendererModule.cpp:374
	extern bool gbCommandBuffer_CacheFlushOldMemory;

}

// BrnRendererModule.cpp:4831
void BrnRendererModule::BrnCpuMonitors::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRendererModule.cpp:4885
void BrnRendererModule::BrnGpuMonitors::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRendererModule.cpp:4928
void BrnRendererModule::BrnGpuHwCounters::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnRendererModule.cpp:1730
extern void _FillInObjectToMeshJobData(EA::Jobs::Job *  lpOutJob, ObjectToMeshJobInfo *  lpOutJobData, const const ObjectToMeshJobInfo &  lObjectToMeshJobInfoTemporary) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EA::Jobs::Job::SetCode(/* parameters */);
	EA::Jobs::Job::SetName(/* parameters */);
}

// BrnRendererModule.cpp:3587
extern void _FillInOcclusionJobData(CgsGraphics::OcclusionCullManager *  lpOcclusionCullManager, OcclusionJobOptions *  lpOcclusionJobOptions, EA::Jobs::Job *  lpOutJob, OcclusionJobData *  lpOutJobData, DispatchList *  lpDispatchList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	operator=(/* parameters */);
	EA::Jobs::Job::SetCode(/* parameters */);
	EA::Jobs::Job::SetName(/* parameters */);
}

// BrnRendererModule.cpp:3563
void _FillInJobData(EA::Jobs::Job *  lpOutJob, SortInfo *  lpOutJobData, DispatchList *  lpDispatchList) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	EA::Jobs::Job::SetCode(/* parameters */);
	EA::Jobs::Job::SetName(/* parameters */);
}

// BrnRendererModule.cpp:336
bool IsInWidescreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnRendererModule.cpp:339
		bool lIsWideScreen;

		// BrnRendererModule.cpp:345
		CellVideoOutState videoState;

		// BrnRendererModule.cpp:347
		int lnRet;

	}
}

// _built-in_
namespace :: {
	// BrnRendererModule.cpp:95
	extern float32_t gfBloomLuminanceScale;

	// BrnRendererModule.cpp:96
	extern float32_t gfBloomThresholdScale;

	// BrnRendererModule.cpp:109
	const uint32_t KU_MAX_COLOUR_CUBES = 5;

	// BrnRendererModule.cpp:111
	const float32_t KF_PREZ_NEAR_THRESHOLD;

	// BrnRendererModule.cpp:112
	const float32_t KF_OCCLUDEE_NEAR_CLIP_OFFSET;

	// BrnRendererModule.cpp:113
	const uint32_t KU_OCCLUSION_CULL_INDEX_COUNT_THRESHOLD = 32;

	// BrnRendererModule.cpp:116
	uint32_t KU32_SIZEOFDISPATCHBIN_DOUBLEBUFFERED;

	// BrnRendererModule.cpp:119
	const uint32_t KU32_NUMENTRIESINDBDISPATCHLIST_OBJECTS_SHADOW0 = 1024;

	// BrnRendererModule.cpp:120
	const uint32_t KU32_NUMENTRIESINDBDISPATCHLIST_OBJECTS_SHADOW1 = 4096;

	// BrnRendererModule.cpp:121
	const uint32_t KU32_NUMENTRIESINDBDISPATCHLIST_OBJECTS_ENVMAPPOSITIVEX = 512;

	// BrnRendererModule.cpp:122
	const uint32_t KU32_NUMENTRIESINDBDISPATCHLIST_OBJECTS_ENVMAPNEGATIVEX = 512;

	// BrnRendererModule.cpp:123
	const uint32_t KU32_NUMENTRIESINDBDISPATCHLIST_OBJECTS_ENVMAPPOSITIVEY = 512;

	// BrnRendererModule.cpp:124
	const uint32_t KU32_NUMENTRIESINDBDISPATCHLIST_OBJECTS_ENVMAPNEGATIVEY = 512;

	// BrnRendererModule.cpp:125
	const uint32_t KU32_NUMENTRIESINDBDISPATCHLIST_OBJECTS_ENVMAPPOSITIVEZ = 512;

	// BrnRendererModule.cpp:126
	const uint32_t KU32_NUMENTRIESINDBDISPATCHLIST_OBJECTS_ENVMAPNEGATIVEZ = 512;

	// BrnRendererModule.cpp:127
	const uint32_t KU32_NUMENTRIESINDBDISPATCHLIST_OBJECTS_WORLD = 4096;

	// BrnRendererModule.cpp:128
	const uint32_t KU32_NUMENTRIESINDBDISPATCHLIST_OBJECTS_CAR = 8192;

	// BrnRendererModule.cpp:134
	uint32_t KU32_SIZEOFDISPATCHBIN_SINGLEBUFFERED;

	// BrnRendererModule.cpp:137
	const uint32_t KU32_NUMENTRIESINSBDISPATCHLIST_SHADOW0 = 4096;

	// BrnRendererModule.cpp:138
	const uint32_t KU32_NUMENTRIESINSBDISPATCHLIST_SHADOW1 = 8192;

	// BrnRendererModule.cpp:139
	const uint32_t KU32_NUMENTRIESINSBDISPATCHLIST_SHADOWCACHED = 4096;

	// BrnRendererModule.cpp:140
	const uint32_t KU32_NUMENTRIESINSBDISPATCHLIST_ENVMAPPOSITIVEX = 1024;

	// BrnRendererModule.cpp:141
	const uint32_t KU32_NUMENTRIESINSBDISPATCHLIST_ENVMAPNEGATIVEX = 1024;

	// BrnRendererModule.cpp:142
	const uint32_t KU32_NUMENTRIESINSBDISPATCHLIST_ENVMAPPOSITIVEY = 1024;

	// BrnRendererModule.cpp:143
	const uint32_t KU32_NUMENTRIESINSBDISPATCHLIST_ENVMAPNEGATIVEY = 1024;

	// BrnRendererModule.cpp:144
	const uint32_t KU32_NUMENTRIESINSBDISPATCHLIST_ENVMAPPOSITIVEZ = 1024;

	// BrnRendererModule.cpp:145
	const uint32_t KU32_NUMENTRIESINSBDISPATCHLIST_ENVMAPNEGATIVEZ = 1024;

	// BrnRendererModule.cpp:146
	const uint32_t KU32_NUMENTRIESINSBDISPATCHLIST_WORLD_OPAQUE = 8192;

	// BrnRendererModule.cpp:147
	const uint32_t KU32_NUMENTRIESINSBDISPATCHLIST_WORLD_TRANSPARENT = 3072;

	// BrnRendererModule.cpp:148
	const uint32_t KU32_NUMENTRIESINSBDISPATCHLIST_CAR_OPAQUE = 6144;

	// BrnRendererModule.cpp:149
	const uint32_t KU32_NUMENTRIESINSBDISPATCHLIST_CAR_TRANSPARENT = 2048;

	// BrnRendererModule.cpp:150
	const uint32_t KU32_NUMENTRIESINSBDISPATCHLIST_PREZ = 4096;

	// BrnRendererModule.cpp:155
	const uint32_t KU32_NUMENTRIESINDISPATCHLIST_DEFAULT = 1;

	// BrnRendererModule.cpp:164
	const int32_t KI_IM2D_RENDER_BUFFER_COMMAND_BUFFER_SIZE = 110592;

	// BrnRendererModule.cpp:165
	const int32_t KI_IM2D_RENDER_BUFFER_VERTEX_BUFFER_SIZE = 393216;

	// BrnRendererModule.cpp:167
	const int32_t KI_IM3D_RENDER_BUFFER_COMMAND_BUFFER_SIZE = 1024;

	// BrnRendererModule.cpp:168
	const int32_t KI_IM3D_RENDER_BUFFER_VERTEX_BUFFER_SIZE = 32768;

	// BrnRendererModule.cpp:169
	const int32_t KI_IM3D_RENDER_BUFFER_UNTEX_COMMAND_BUFFER_SIZE = 16384;

	// BrnRendererModule.cpp:170
	const int32_t KI_IM3D_RENDER_BUFFER_UNTEX_VERTEX_BUFFER_SIZE = 524288;

	// BrnRendererModule.cpp:171
	const int32_t KI_IM3D_RENDER_BUFFER_RACEPOSITIONS_COMMANDBUFFER_SIZE = 131072;

	// BrnRendererModule.cpp:172
	const int32_t KI_IM3D_RENDER_BUFFER_RACEPOSITIONS_VERTEXBUFFER_SIZE = 131072;

	// BrnRendererModule.cpp:173
	const int32_t KI_IM3D_RENDER_BUFFER_MENUSANDHUD_COMMANDBUFFER_SIZE = 512;

	// BrnRendererModule.cpp:174
	const int32_t KI_IM3D_RENDER_BUFFER_MENUSANDHUD_VERTEXBUFFER_SIZE = 4;

	// BrnRendererModule.cpp:178
	const int32_t KI_IM3D_DEBUG_RENDER_BUFFER_COMMAND_BUFFER_SIZE = 4096;

	// BrnRendererModule.cpp:179
	const int32_t KI_IM3D_DEBUG_RENDER_BUFFER_VERTEX_BUFFER_SIZE = 131072;

	// BrnRendererModule.cpp:180
	const int32_t KI_IM2D_DEBUG_RENDER_BUFFER_COMMAND_BUFFER_SIZE = 16384;

	// BrnRendererModule.cpp:181
	const int32_t KI_IM2D_DEBUG_RENDER_BUFFER_VERTEX_BUFFER_SIZE = 368640;

	// BrnRendererModule.cpp:199
	const uint32_t KU32_PS3_COMMANDBUFFER_SIZE = 3145728;

	// BrnRendererModule.cpp:200
	const uint32_t KU32_PS3_DIRECTDRAWBUFFER_SIZE = 4718592;

	// BrnRendererModule.cpp:201
	const uint32_t KU32_PS3_DIRECTDRAWBUFFER_NUM_SUB_BUFFERS = 5;

	// BrnRendererModule.cpp:211
	const uint32_t KU32_RESOURCE_MAIN_MEMORY_SIZE = 10485760;

	// BrnRendererModule.cpp:212
	const uint32_t KU32_RESOURCE_MAIN_MEMORY_ALIGNMENT = 16384;

	// BrnRendererModule.cpp:213
	const uint32_t KU32_RESOURCE_X360_PHYSICAL_MEMORY = 47185920;

	// BrnRendererModule.cpp:214
	const uint32_t KU32_RESOURCE_X360_PHYSICAL_MEMORY_ALIGNMENT = 16384;

	// BrnRendererModule.cpp:215
	const uint32_t KU32_RESOURCE_PS3_GRAPHICS_SYSTEM_MEMORY = 8388608;

	// BrnRendererModule.cpp:216
	const uint32_t KU32_RESOURCE_PS3_GRAPHICS_SYSTEM_MEMORY_ALIGNMENT = 16384;

	// BrnRendererModule.cpp:217
	const uint32_t KU32_RESOURCE_PS3_GRAPHICS_LOCAL_MEMORY = 35651584;

	// BrnRendererModule.cpp:218
	const uint32_t KU32_RESOURCE_PS3_GRAPHICS_LOCAL_MEMORY_ALIGNMENT = 16384;

	// BrnRendererModule.cpp:221
	const uint32_t KU32_NUM_DISPATCH_FRAME_COUNT = 60;

	// BrnRendererModule.cpp:253
	BrnScreenDimensions[17] gaPS3ResolutionLookup;

	// BrnRendererModule.cpp:1721
	extern bool gbObjectToMeshJobsEnabled;

	// BrnRendererModule.cpp:1722
	extern bool gbObjectToMeshJobsWide;

}

// BrnRendererModule.cpp:95
extern float32_t gfBloomLuminanceScale;

// BrnRendererModule.cpp:96
extern float32_t gfBloomThresholdScale;


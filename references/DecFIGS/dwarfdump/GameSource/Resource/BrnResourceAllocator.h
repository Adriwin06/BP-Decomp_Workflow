// BrnResourceAllocator.h:288
extern rw::core::GeneralResourceAllocator * mpInternalGlobalSystemAllocator;

// BrnResourceAllocator.h:289
extern BrnResource::HeapResourceAllocator mGlobalSystemAllocator;

// BrnResourceAllocator.h:293
extern rw::core::GeneralResourceAllocator * mpInternalDebugAllocator;

// BrnResourceAllocator.h:294
extern BrnResource::HeapResourceAllocator mGlobalDebugAllocator;

// BrnResourceAllocator.h:299
extern BrnResource::LinearResourceAllocator mGlobalGraphicsAllocator;

// BrnResourceAllocator.h:304
extern BrnResource::LinearResourceAllocator mGlobalResourceAllocator;

// BrnResourceAllocator.h:306
extern BrnResource::HeapResourceAllocator mRuntimeAllocator;

// BrnResourceAllocator.h:307
extern BrnResource::LinearResourceAllocator mGlobalMemFileAllocator;

// BrnResourceAllocator.h:309
extern BrnResource::LinearResourceAllocator mEmbeddedTextureAllocator;

// BrnResourceAllocator.h:313
extern void * mpMappedMemory;

// BrnResourceAllocator.h:314
extern uint32_t muMappedSize;

// BrnResourceAllocator.h:315
extern uint32_t muMappedAlignment;

// BrnResourceAllocator.h:316
extern sys_memory_container_t mAutoSaveContainer;

// BrnResourceAllocator.h:317
extern sys_memory_container_t mWebCamContainer;

// BrnResourceAllocator.h:32
namespace BrnResource {
	struct HeapResourceAllocator;

	struct LinearResourceAllocator;

	struct CarStatsCollection;

	struct VehicleListEntryAudioData;

	struct SponsorCarSlot;

	// BrnResourceAllocator.h:387
	extern BrnResource::LinearResourceAllocator * GetGraphicsAllocator();

}

// VehicleListEntry.h:28
namespace BrnResource {
	// BrnResourceAllocator.h:405
	extern BrnResource::LinearResourceAllocator * GetEmbeddedTextureAllocator();

	// BrnResourceAllocator.h:367
	extern BrnResource::HeapResourceAllocator * GetDebugAllocator();

}

// BrnResourceAllocator.h:250
extern bool mbAssertOnMemoryChange;

// BrnResourceAllocator.h:32
namespace BrnResource {
	struct HeapResourceAllocator;

	// Declaration
	struct LinearResourceAllocator {
	public:
		// BrnResourceAllocator.h:504
		const Resource & GetLinearHeapBase() const;

		// BrnResourceAllocator.h:455
		ResourceDescriptor GetCurrentUsage() const;

		// BrnResourceAllocator.h:448
		ResourceDescriptor GetCapacity() const;

	}

	struct SponsorCarSlot;

	// BrnResourceAllocator.h:387
	extern BrnResource::LinearResourceAllocator * GetGraphicsAllocator();

	// BrnResourceAllocator.h:424
	extern void GetMappedMemoryParameters(void **, uint32_t *, uint32_t *);

	// BrnResourceAllocator.h:367
	extern BrnResource::HeapResourceAllocator * GetDebugAllocator();

}

// ps3mem.h:5
namespace BrnResource {
	// BrnResourceAllocator.h:412
	extern sys_memory_container_t GetAutoSaveContainerId();

}

// BrnResourceAllocator.h:32
namespace BrnResource {
	struct HeapResourceAllocator;

	struct LinearResourceAllocator;

	struct CarStatsCollection;

	struct VehicleListEntryAudioData;

	struct ChallengeListResource;

	struct ChallengeSlot;

	struct ChallengeList;

	struct VehicleListResource;

	struct VehicleSlot;

	struct SponsorCarSlot;

	struct VehicleList;

	struct WheelList;

	struct HudMessageController;

	struct WheelListEntry;

	struct WheelListResource;

	struct WheelSlot;

	struct HudMessageEvent;

	struct PopupController;

}

// VehicleListEntry.h:28
namespace BrnResource {
	// BrnResourceAllocator.h:418
	extern sys_memory_container_t GetWebCamContainerId();

	// BrnResourceAllocator.h:367
	extern BrnResource::HeapResourceAllocator * GetDebugAllocator();

}

// VehicleListEntry.h:28
namespace BrnResource {
	// BrnResourceAllocator.h:367
	extern BrnResource::HeapResourceAllocator * GetDebugAllocator();

}

// ps3mem.h:5
namespace BrnResource {
	// BrnResourceAllocator.h:367
	extern BrnResource::HeapResourceAllocator * GetDebugAllocator();

}

// ps3mem.h:5
namespace BrnResource {
	// Declaration
	struct Allocators {
		// BrnResourceAllocator.h:244
		struct GenAllocUsage {
			// BrnResourceAllocator.h:246
			uint32_t muAllocated;

			// BrnResourceAllocator.h:247
			uint32_t muFree;

		}

	}

	// BrnResourceAllocator.h:360
	extern HeapResourceAllocator * GetSystemAllocator();

	// BrnResourceAllocator.h:367
	extern HeapResourceAllocator * GetDebugAllocator();

	// BrnResourceAllocator.h:393
	extern LinearResourceAllocator * GetResourceAllocator();

}

// BrnResourceAllocator.h:241
struct BrnResource::Allocators {
	// BrnResourceAllocator.h:250
	extern bool mbAssertOnMemoryChange;

private:
	// BrnResourceAllocator.h:284
	extern BrnResource::DefaultLinearAllocator mInitialDefaultAllocator;

	// BrnResourceAllocator.h:286
	extern Resource mGlobalSystemMemory;

	// BrnResourceAllocator.h:287
	extern ResourceDescriptor mGlobalSystemMemoryDescriptor;

	// BrnResourceAllocator.h:288
	extern rw::core::GeneralResourceAllocator * mpInternalGlobalSystemAllocator;

	// BrnResourceAllocator.h:289
	extern BrnResource::HeapResourceAllocator mGlobalSystemAllocator;

	// BrnResourceAllocator.h:291
	extern Resource mGlobalDebugMemory;

	// BrnResourceAllocator.h:292
	extern ResourceDescriptor mGlobalDebugMemoryDescriptor;

	// BrnResourceAllocator.h:293
	extern rw::core::GeneralResourceAllocator * mpInternalDebugAllocator;

	// BrnResourceAllocator.h:294
	extern BrnResource::HeapResourceAllocator mGlobalDebugAllocator;

	// BrnResourceAllocator.h:296
	extern Resource mGlobalGraphicsMemory;

	// BrnResourceAllocator.h:297
	extern ResourceDescriptor mGlobalGraphicsMemoryDescriptor;

	// BrnResourceAllocator.h:298
	extern rw::LinearResourceAllocator * mpInternalGraphicsAllocator;

	// BrnResourceAllocator.h:299
	extern BrnResource::LinearResourceAllocator mGlobalGraphicsAllocator;

	// BrnResourceAllocator.h:301
	extern Resource mGlobalResourceMemory;

	// BrnResourceAllocator.h:302
	extern ResourceDescriptor mGlobalResourceMemoryDescriptor;

	// BrnResourceAllocator.h:303
	extern rw::LinearResourceAllocator * mpInternalResourceAllocator;

	// BrnResourceAllocator.h:304
	extern BrnResource::LinearResourceAllocator mGlobalResourceAllocator;

	// BrnResourceAllocator.h:306
	extern BrnResource::HeapResourceAllocator mRuntimeAllocator;

	// BrnResourceAllocator.h:307
	extern BrnResource::LinearResourceAllocator mGlobalMemFileAllocator;

	// BrnResourceAllocator.h:309
	extern BrnResource::LinearResourceAllocator mEmbeddedTextureAllocator;

	// BrnResourceAllocator.h:313
	extern void * mpMappedMemory;

	// BrnResourceAllocator.h:314
	extern uint32_t muMappedSize;

	// BrnResourceAllocator.h:315
	extern uint32_t muMappedAlignment;

	// BrnResourceAllocator.h:316
	extern sys_memory_container_t mAutoSaveContainer;

	// BrnResourceAllocator.h:317
	extern sys_memory_container_t mWebCamContainer;

public:
	// BrnResourceAllocator.h:253
	void InitMemoryMap();

	// BrnResourceAllocator.h:256
	void Construct();

	// BrnResourceAllocator.h:259
	void DebugWriteXMLStatus(CgsDev::StrStreamBase &);

	// BrnResourceAllocator.h:266
	void GetMemoryStats(rw::LinearResourceAllocator *, Entry::ResourceDescriptor &, Entry::ResourceDescriptor &);

	// BrnResourceAllocator.h:273
	void GetMemoryStats(rw::core::GeneralResourceAllocator *, Entry::ResourceDescriptor &, Entry::ResourceDescriptor &);

	// BrnResourceAllocator.h:280
	void GetMemoryStats(HeapMalloc::GeneralAllocator *, uint32_t *, uint32_t *);

private:
	// BrnResourceAllocator.h:321
	void ConstructGlobalSystemMemory();

	// BrnResourceAllocator.h:324
	void ConstructGlobalDebugMemory();

	// BrnResourceAllocator.h:327
	void ConstructGlobalGraphicsMemory();

	// BrnResourceAllocator.h:330
	void ConstructGlobalResourceMemory(const CgsMemory::MemoryBank::Params *);

	// BrnResourceAllocator.h:333
	void ConstructChildAllocators();

	// BrnResourceAllocator.h:336
	bool GeneralAllocatorReportCB(const EA::Allocator::GeneralAllocator::BlockInfo *, void *);

}

// BrnResourceAllocator.h:170
struct BrnResource::LinearResourceAllocator : public rw::IResourceAllocator {
private:
	// BrnResourceAllocator.h:227
	rw::LinearResourceAllocator * mpLinearAllocator;

	// BrnResourceAllocator.h:228
	const char * mpcName;

public:
	void LinearResourceAllocator(const LinearResourceAllocator &);

	void LinearResourceAllocator();

	// BrnResourceAllocator.cpp:1221
	void Construct(rw::LinearResourceAllocator *, const char *);

	// BrnResourceAllocator.cpp:1235
	void Construct(rw::IResourceAllocator *, const ResourceDescriptor &, const char *);

	// BrnResourceAllocator.h:448
	ResourceDescriptor GetCapacity() const;

	// BrnResourceAllocator.h:455
	ResourceDescriptor GetCurrentUsage() const;

	// BrnResourceAllocator.h:462
	ResourceDescriptor GetAvailable() const;

	// BrnResourceAllocator.h:469
	uint32_t GetNumAllocations() const;

	// BrnResourceAllocator.h:476
	ResourceDescriptor GetPaddingUsed() const;

	// BrnResourceAllocator.h:483
	void GetRestorePoint(rw::LinearResourceAllocator::RestorePoint &) const;

	// BrnResourceAllocator.h:490
	void Clear(const rw::LinearResourceAllocator::RestorePoint &);

	// BrnResourceAllocator.h:497
	void Clear();

	// BrnResourceAllocator.h:504
	const Resource & GetLinearHeapBase() const;

	// BrnResourceAllocator.cpp:1259
	void DebugWriteXMLStatus(CgsDev::StrStreamBase &);

protected:
	// BrnResourceAllocator.cpp:1285
	virtual Resource DoAllocate(const ResourceDescriptor &, const char8_t *);

	// BrnResourceAllocator.cpp:1381
	virtual void DoFree(const Resource &);

	// BrnResourceAllocator.cpp:1412
	virtual void DoFreeDisposable(Resource &);

public:
	virtual void ~LinearResourceAllocator();

}

// BrnResourceAllocator.h:121
struct BrnResource::HeapResourceAllocator : public rw::IResourceAllocator {
private:
	// BrnResourceAllocator.h:154
	rw::core::GeneralResourceAllocator * mpGeneralAllocator;

	// BrnResourceAllocator.h:155
	const char * mpcName;

	// BrnResourceAllocator.h:156
	int32_t miPrintLevel;

public:
	void HeapResourceAllocator(const HeapResourceAllocator &);

	void HeapResourceAllocator();

	// BrnResourceAllocator.cpp:1010
	void Construct(rw::core::GeneralResourceAllocator *, const char *, int32_t);

	// BrnResourceAllocator.cpp:1025
	void Construct(rw::IResourceAllocator *, const ResourceDescriptor &, const char *, int32_t);

	// BrnResourceAllocator.cpp:1048
	void DebugWriteXMLStatus(CgsDev::StrStreamBase &);

	// BrnResourceAllocator.cpp:1074
	void Validate();

protected:
	// BrnResourceAllocator.cpp:1093
	virtual Resource DoAllocate(const ResourceDescriptor &, const char8_t *);

	// BrnResourceAllocator.cpp:1176
	virtual void DoFree(const Resource &);

	// BrnResourceAllocator.cpp:1207
	virtual void DoFreeDisposable(Resource &);

public:
	virtual void ~HeapResourceAllocator();

}

// BrnResourceAllocator.h:71
struct BrnResource::DefaultLinearAllocator : public rw::IResourceAllocator {
private:
	// BrnResourceAllocator.h:109
	LinearMalloc[6] maAllocators;

public:
	void DefaultLinearAllocator(const DefaultLinearAllocator &);

	void DefaultLinearAllocator();

	// BrnResourceAllocator.cpp:737
	// Declaration
	void Construct(uint32_t) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnResourceAllocator.cpp:759
		using namespace CgsDev::Message;

		// BrnResourceAllocator.cpp:760
		using namespace CgsDev::Message;

		// BrnResourceAllocator.cpp:761
		using namespace CgsDev::Message;

		// BrnResourceAllocator.cpp:762
		using namespace CgsDev::Message;

	}

	// BrnResourceAllocator.cpp:806
	// Declaration
	void CheckRenderwareBudget() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnResourceAllocator.cpp:809
		using namespace CgsDev::Message;

		// BrnResourceAllocator.cpp:820
		using namespace CgsDev::Message;

	}

	// BrnResourceAllocator.cpp:847
	virtual void PS3GraphicsSystemMemoryInitialize(void *, uint32_t);

	// BrnResourceAllocator.cpp:863
	virtual void PS3GraphicsLocalMemoryInitialize(void *, uint32_t);

	// BrnResourceAllocator.cpp:880
	void DebugWriteXMLStatus(CgsDev::StrStreamBase &);

protected:
	// BrnResourceAllocator.cpp:906
	// Declaration
	virtual Resource DoAllocate(const ResourceDescriptor &, const char8_t *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnResourceAllocator.cpp:909
		using namespace CgsDev::Message;

		// BrnResourceAllocator.cpp:910
		using namespace CgsDev::Message;

		// BrnResourceAllocator.cpp:921
		using namespace CgsDev::Message;

		// BrnResourceAllocator.cpp:925
		using namespace CgsDev::Message;

		// BrnResourceAllocator.cpp:936
		using namespace CgsDev::Message;

		// BrnResourceAllocator.cpp:952
		using namespace CgsDev::Message;

		// BrnResourceAllocator.cpp:963
		using namespace CgsDev::Message;

		// BrnResourceAllocator.cpp:966
		using namespace CgsDev::Message;

	}

	// BrnResourceAllocator.cpp:982
	virtual void DoFree(const Resource &);

	// BrnResourceAllocator.cpp:997
	virtual void DoFreeDisposable(Resource &);

public:
	virtual void ~DefaultLinearAllocator();

}

// BrnResourceAllocator.h:71
void BrnResource::DefaultLinearAllocator::~DefaultLinearAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnResourceAllocator.h:121
void BrnResource::HeapResourceAllocator::~HeapResourceAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnResourceAllocator.h:170
void BrnResource::LinearResourceAllocator::~LinearResourceAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnResourceAllocator.h:71
void BrnResource::DefaultLinearAllocator::DefaultLinearAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnResourceAllocator.h:121
void BrnResource::HeapResourceAllocator::HeapResourceAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// BrnResourceAllocator.h:170
void BrnResource::LinearResourceAllocator::LinearResourceAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ChallengeListEntry.h:27
namespace BrnResource {
	// BrnResourceAllocator.h:367
	extern BrnResource::HeapResourceAllocator * GetDebugAllocator();

}

// BrnResourceAllocator.h:32
namespace BrnResource {
	struct HeapResourceAllocator;

	struct LinearResourceAllocator;

	struct CarStatsCollection;

	struct VehicleListEntryAudioData;

	struct SponsorCarSlot;

}

// VehicleListEntry.h:28
namespace BrnResource {
	// BrnResourceAllocator.h:381
	extern BrnResource::HeapResourceAllocator * GetRuntimeAllocator();

}

// BrnResourceAllocator.h:32
namespace BrnResource {
	struct HeapResourceAllocator;

	struct LinearResourceAllocator;

}


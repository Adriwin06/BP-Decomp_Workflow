// ps3mem.h:5
namespace BrnResource {
	// Declaration
	struct DebugComponent {
		// BrnResourceDebugComponent.h:70
		struct GenAllocUsage {
			// BrnResourceDebugComponent.h:72
			uint32_t muAllocated;

			// BrnResourceDebugComponent.h:73
			uint32_t muFree;

		}

		// BrnResourceDebugComponent.h:77
		struct MemTypeInfo {
			// BrnResourceDebugComponent.h:79
			int32_t miSize;

			// BrnResourceDebugComponent.h:80
			int32_t miCurrUsed;

			// BrnResourceDebugComponent.h:81
			int32_t miMaxUsed;

			// BrnResourceDebugComponent.h:82
			float32_t mfColInterp;

		public:
			// BrnResourceDebugComponent.h:85
			void UpdateMax();

		}

		// BrnResourceDebugComponent.h:89
		struct AllocatorInfo {
			// BrnResourceDebugComponent.h:91
			CgsMemory::MemoryMap::EAllocatorType meAllocatorType;

			// BrnResourceDebugComponent.h:92
			char[128] macName;

			// BrnResourceDebugComponent.h:93
			BrnResource::DebugComponent::MemTypeInfo mMainMemInfo;

			// BrnResourceDebugComponent.h:94
			BrnResource::DebugComponent::MemTypeInfo mVideoMemInfo;

		}

	}

}

// BrnResourceDebugComponent.h:48
struct BrnResource::DebugComponent : public CgsDev::DebugComponent {
protected:
	// BrnResourceDebugComponent.h:97
	BrnResource::GameDataModule * mpModule;

	// BrnResourceDebugComponent.h:98
	rw::IResourceAllocator * mpAllocator;

	// BrnResourceDebugComponent.h:99
	bool mbShowHud;

	// BrnResourceDebugComponent.h:100
	BrnResource::DebugComponent::AllocatorInfo * mpAllocatorInfo;

	// BrnResourceDebugComponent.h:101
	int32_t miGameDataSlotsUsed;

	// BrnResourceDebugComponent.h:102
	int32_t miGameDataSlotsFree;

public:
	// BrnResourceDebugComponent.cpp:45
	void Construct(BrnResource::GameDataModule *, rw::IResourceAllocator *);

	// BrnResourceDebugComponent.cpp:59
	void Destruct();

	// BrnResourceDebugComponent.cpp:65
	virtual void RenderHUD(CgsDev::Debug2DImmediateRender *);

	// BrnResourceDebugComponent.cpp:152
	virtual void Update();

protected:
	// BrnResourceDebugComponent.cpp:311
	virtual void OnActivate();

	// BrnResourceDebugComponent.h:109
	virtual const char * GetName() const;

	// BrnResourceDebugComponent.h:112
	virtual const char * GetPath() const;

	// BrnResourceDebugComponent.h:115
	virtual bool IsSimple() const;

	// BrnResourceDebugComponent.cpp:324
	bool GeneralAllocatorReportCB(const EA::Allocator::GeneralAllocator::BlockInfo *, void *);

	// BrnResourceDebugComponent.h:144
	RGBA InterpolateColours(RGBA, RGBA, float32_t);

}

// BrnResourceDebugComponent.h:48
void BrnResource::DebugComponent::DebugComponent() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}


// CgsLuaState.h:32
namespace CgsMemory {
	struct HeapMalloc;

	struct LinearMalloc;

	struct MemoryBankResourceSet;

	struct MemoryMapBaseBank;

	struct MemoryMapBank;

	struct MemoryMapPool;

	struct MemoryMapRawResource;

	struct MemoryMapLinearAllocator;

	struct MemoryMapHeapAllocator;

	struct MemoryMapRWLinearAllocator;

	struct MemoryMapRWGeneralAllocator;

	struct DataStreamCommandPoster;

	struct SimpleDataStreamResultIterator;

}

// CgsLuaState.h:37
namespace CgsResource {
	struct ID;

	struct SmallResourceDescriptor;

	struct SmallResource;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct DebugResourceInfo;

	struct Type;

	struct GuiGeometryMeshHeader;

	struct GuiGeometryMesh;

	struct GuiGeometryFile;

	struct GuiGeometryObject;

	struct FontChar;

	struct Font;

	struct ResourcePtr<BrnResource::ChallengeListResource>;

	struct ResourcePtr<BrnStreetData::StreetData>;

	struct ResourcePtr<BrnAI::AISectionsData>;

	struct ResourcePtr<BrnResource::VehicleListResource>;

	struct LanguageResourceHashEntry;

	struct LanguageResource;

	struct ResourcePtr<CgsResource::VideoDataResource>;

	struct SafeResourceHandle<CgsResource::Font>;

	struct ResourcePtr<BrnTrigger::TriggerData>;

	struct ResourcePtr<BrnProgression::ProgressionData>;

	struct ResourcePtr<BrnWorld::GlobalColourPalette>;

	struct ResourcePtr<CgsGui::GuiPopupResource>;

	struct ResourcePtr<CgsGui::GuiHudMessageResource>;

	struct ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>;

	struct ResourcePtr<BrnTraffic::TrafficData>;

	struct ResourcePtr<BrnVehicle::GraphicsSpec>;

	struct SafeResourceHandle<renderengine::Texture>;

	struct ResourcePtr<BrnResource::WheelListResource>;

	struct ResourcePtr<BrnFlapt::FlaptFile>;

}

// CgsLuaState.h:32
namespace CgsMemory {
	struct HeapMalloc;

	struct LinearMalloc;

	struct MemoryBankResourceSet;

}

// CgsLuaState.h:37
namespace CgsResource {
	struct ID;

	struct SmallResourceDescriptor;

	struct SmallResource;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct DebugResourceInfo;

	struct Type;

	struct GuiGeometryMeshHeader;

	struct GuiGeometryMesh;

	struct GuiGeometryFile;

	struct GuiGeometryObject;

	struct FontChar;

	struct Font;

	struct ResourcePtr<BrnResource::ChallengeListResource>;

	struct ResourcePtr<BrnStreetData::StreetData>;

	struct ResourcePtr<BrnResource::VehicleListResource>;

	struct LanguageResourceHashEntry;

	struct LanguageResource;

	struct SafeResourceHandle<CgsResource::Font>;

	struct ResourcePtr<BrnTrigger::TriggerData>;

	struct ResourcePtr<BrnProgression::ProgressionData>;

	struct ResourcePtr<BrnWorld::GlobalColourPalette>;

	struct ResourcePtr<CgsGui::GuiPopupResource>;

	struct ResourcePtr<CgsGui::GuiHudMessageResource>;

	struct ResourcePtr<BrnFlapt::FlaptFile>;

	struct SafeResourceHandle<renderengine::Texture>;

}

// CgsLuaState.h:37
namespace CgsResource {
	struct ID;

	struct SmallResourceDescriptor;

	struct SmallResource;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct DebugResourceInfo;

	struct Type;

	struct GuiGeometryMeshHeader;

	struct GuiGeometryMesh;

	struct GuiGeometryFile;

	struct GuiGeometryObject;

	struct FontChar;

	struct Font;

	struct ResourcePtr<BrnResource::ChallengeListResource>;

	struct ResourcePtr<BrnResource::VehicleListResource>;

	struct LanguageResourceHashEntry;

	struct LanguageResource;

	struct ResourcePtr<BrnStreetData::StreetData>;

	struct SafeResourceHandle<CgsResource::Font>;

	struct ResourcePtr<BrnTrigger::TriggerData>;

	struct ResourcePtr<BrnProgression::ProgressionData>;

	struct ResourcePtr<BrnWorld::GlobalColourPalette>;

	struct ResourcePtr<CgsGui::GuiPopupResource>;

	struct ResourcePtr<CgsGui::GuiHudMessageResource>;

}

// CgsLuaState.h:71
struct CgsFsm::LuaState {
private:
	// CgsLuaState.h:131
	lua_State * mpLuaState;

	// CgsLuaState.h:132
	CgsMemory::HeapMalloc * mpHeapMalloc;

	// CgsLuaState.h:134
	extern const char * KPC_NEXT_STATE_FUNCTION_NAME;

	// CgsLuaState.h:135
	extern const char * KPC_GET_STATE_FUNCTION_NAME;

public:
	// CgsLuaState.h:75
	void Construct();

	// CgsLuaState.h:80
	bool Prepare(CgsResource::LuaCodeResource *, CgsMemory::HeapMalloc *);

	// CgsLuaState.h:83
	bool Release();

	// CgsLuaState.h:88
	bool GetBool(const char *, CgsID);

	// CgsLuaState.h:93
	int32_t GetInt(const char *, CgsID);

	// CgsLuaState.h:100
	const char * GetString(const char *, CgsID, char *, int32_t);

	// CgsLuaState.h:106
	void SetBool(const char *, CgsID, bool);

	// CgsLuaState.h:112
	void SetInt(const char *, CgsID, int32_t);

	// CgsLuaState.h:118
	void SetString(const char *, CgsID, const char *);

	// CgsLuaState.h:122
	void NextState(CgsID);

	// CgsLuaState.h:125
	CgsID GetCurrentState();

	// CgsLuaState.h:128
	bool IsLuaResourceValid();

private:
	// CgsLuaState.h:142
	void * LuaAllocator(void *, void *, size_t, size_t);

	// CgsLuaState.h:146
	void LuaPushId(CgsID);

}

// CgsLuaState.h:32
namespace CgsMemory {
	struct HeapMalloc;

}

// CgsLuaState.h:37
namespace CgsResource {
	struct LuaCodeResource;

	struct BinaryFileResource;

}


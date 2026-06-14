// CgsResourceID.h:30
namespace CgsResource {
	struct ID;

	struct SmallResourceDescriptor;

	struct SmallResource;

	struct ResourceHandle;

	struct Entry;

	struct FontChar;

	struct Font;

	struct BaseResourcePtr;

	struct SafeResourceHandle<CgsResource::Font>;

	struct ResourcePtr<BrnResource::VehicleListResource>;

	struct ResourcePtr<BrnAI::AISectionsData>;

	struct DebugResourceInfo;

	struct Type;

	struct ResourcePtr<BrnTraffic::TrafficData>;

	struct ResourcePtr<BrnTrigger::TriggerData>;

	struct ResourcePtr<CgsContainers::Dictionary<ICE::ICETakeData> >;

}

// CgsResourceID.h:41
struct CgsResource::ID {
private:
	// CgsResourceID.h:76
	uint64_t mHash;

public:
	// CgsResourceID.h:45
	void ID();

	// CgsResourceID.h:49
	void Construct(const RwChar *);

	// CgsResourceID.h:53
	void Construct(const uint8_t *, uint32_t);

	// CgsResourceID.h:56
	uint64_t GetHash() const;

	// CgsResourceID.h:59
	void SetHash(uint64_t);

private:
	// CgsResourceID.h:80
	uint64_t HashString(const RwChar *);

	// CgsResourceID.h:84
	uint64_t HashData(const uint8_t *, uint32_t);

}

// programbuffer.h:24
namespace CgsResource {
	// CgsResourceID.h:175
	extern bool operator==(ID, ID);

}

// CgsResourceID.h:30
namespace CgsResource {
	struct ID;

	struct SmallResourceDescriptor;

	struct SmallResource;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct DebugResourceInfo;

	struct Type;

	struct ResourcePtr<BrnResource::ChallengeListResource>;

	struct FontChar;

	struct Font;

	struct SafeResourceHandle<CgsResource::Font>;

	struct ResourcePtr<BrnResource::VehicleListResource>;

	struct ResourcePtr<BrnStreetData::StreetData>;

	struct ResourcePtr<BrnAI::AISectionsData>;

	struct GuiGeometryMeshHeader;

	struct GuiGeometryMesh;

	struct GuiGeometryFile;

	struct GuiGeometryObject;

	struct LanguageResourceHashEntry;

	struct LanguageResource;

	struct BinaryFileResource;

	struct ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>;

	struct ResourcePtr<BrnTraffic::TrafficData>;

	struct ResourcePtr<BrnTrigger::TriggerData>;

	struct ResourcePtr<BrnVehicle::GraphicsSpec>;

	struct ResourcePtr<BrnWheel::GraphicsSpec>;

	struct ResourcePtr<BrnWorld::GlobalColourPalette>;

	struct ResourcePtr<BrnResource::WheelListResource>;

	struct SafeResourceHandle<renderengine::Texture>;

	struct ResourcePtr<BrnParticle::VFXPropCollection>;

	struct ResourcePtr<CgsSceneManager::ZoneList>;

	struct ResourcePtr<CgsGraphics::InstanceList>;

	struct ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>;

	struct ResourcePtr<BrnPhysics::Props::PropGraphicsList>;

	struct ResourcePtr<CgsGui::GuiHudMessageResource>;

	struct ResourcePtr<CgsGui::GuiPopupResource>;

	struct ResourcePtr<BrnFlapt::FlaptFile>;

	struct ResourcePtr<BrnProgression::ProgressionData>;

	struct ResourcePtr<Renderable>;

	struct ResourcePtr<BrnPhysics::Props::PropZoneData>;

}

// CgsResourceID.h:30
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

	struct ResourcePtr<CgsGui::GuiHudMessageResource>;

	struct ResourcePtr<BrnTrigger::TriggerData>;

	struct ResourcePtr<BrnProgression::ProgressionData>;

	struct ResourcePtr<BrnWorld::GlobalColourPalette>;

	struct ResourcePtr<CgsGui::GuiPopupResource>;

	struct ResourcePtr<BrnFlapt::FlaptFile>;

	struct SafeResourceHandle<renderengine::Texture>;

}

// CgsResourceID.h:30
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

	struct LanguageResourceHashEntry;

	struct LanguageResource;

	struct ResourcePtr<BrnFlapt::FlaptFile>;

	struct SafeResourceHandle<CgsResource::Font>;

}

// CgsResourceID.h:30
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

	struct ResourcePtr<BrnAI::AISectionsData>;

	struct SafeResourceHandle<CgsResource::Font>;

	struct ResourcePtr<BrnTrigger::TriggerData>;

	struct ResourcePtr<BrnProgression::ProgressionData>;

	struct ResourcePtr<BrnWorld::GlobalColourPalette>;

	struct ResourcePtr<CgsGui::GuiPopupResource>;

	struct ResourcePtr<CgsGui::GuiHudMessageResource>;

	struct ResourcePtr<BrnFlapt::FlaptFile>;

	struct ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>;

	struct SafeResourceHandle<renderengine::Texture>;

}

// CgsResourceID.h:30
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

	struct SafeResourceHandle<CgsResource::Font>;

	struct LanguageResourceHashEntry;

	struct LanguageResource;

	struct ResourcePtr<BrnResource::ChallengeListResource>;

	struct ResourcePtr<BrnResource::VehicleListResource>;

	struct ResourcePtr<BrnStreetData::StreetData>;

	struct ResourcePtr<CgsResource::VideoDataResource>;

	struct ResourcePtr<BrnFlapt::FlaptFile>;

	struct ResourcePtr<BrnTrigger::TriggerData>;

	struct ResourcePtr<BrnProgression::ProgressionData>;

	struct ResourcePtr<BrnWorld::GlobalColourPalette>;

	struct ResourcePtr<CgsGui::GuiPopupResource>;

	struct ResourcePtr<CgsGui::GuiHudMessageResource>;

	struct SafeResourceHandle<renderengine::Texture>;

	struct ResourcePtr<BrnResource::WheelListResource>;

}

// CgsResourceID.h:30
namespace CgsResource {
	struct ID;

	struct SmallResourceDescriptor;

	struct SmallResource;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct DebugResourceInfo;

	struct Type;

	struct FontChar;

	struct Font;

	struct SafeResourceHandle<CgsResource::Font>;

	struct ResourcePtr<BrnResource::ChallengeListResource>;

	struct ResourcePtr<BrnResource::VehicleListResource>;

	struct ResourcePtr<BrnStreetData::StreetData>;

	struct ResourcePtr<BrnAI::AISectionsData>;

	struct GuiGeometryMeshHeader;

	struct GuiGeometryMesh;

	struct GuiGeometryFile;

	struct GuiGeometryObject;

	struct LanguageResourceHashEntry;

	struct LanguageResource;

	struct ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>;

	struct ResourcePtr<BrnTraffic::TrafficData>;

	struct ResourcePtr<BrnTrigger::TriggerData>;

	struct SafeResourceHandle<renderengine::Texture>;

	struct ResourcePtr<BrnVehicle::GraphicsSpec>;

	struct ResourcePtr<BrnWorld::GlobalColourPalette>;

	struct ResourcePtr<BrnResource::WheelListResource>;

	struct ResourcePtr<CgsGui::GuiHudMessageResource>;

	struct ResourcePtr<CgsGui::GuiPopupResource>;

	struct ResourcePtr<BrnFlapt::FlaptFile>;

	struct ResourcePtr<BrnProgression::ProgressionData>;

}

// CgsResourceID.h:30
namespace CgsResource {
	struct ID;

	struct AllocRequest;

	struct AllocRequestAddressed;

	struct AllocResult;

	struct RelocateRequest;

	struct RelocateSource;

	struct LinearHeapNode;

	struct HeapEntry;

	struct Heap;

	struct SmallResourceDescriptor;

	struct SmallResource;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct DebugResourceInfo;

	struct DebugResourceTracker;

	struct BasePool;

	struct HashTable;

	struct PoolStats;

	struct AllocListSet;

	struct NewResource;

	struct ImportHashTableValue;

	struct ImportHashTable;

	struct ScratchEntry;

	struct DebugComponentParams;

	struct ResourcePtr<BrnResource::ChallengeListResource>;

	struct ResourcePtr<BrnResource::VehicleListResource>;

	struct ResourcePtr<CgsContainers::Dictionary<ICE::ICETakeData> >;

	struct ResourcePtr<BrnResource::WheelListResource>;

	struct FontChar;

	struct Font;

	struct SafeResourceHandle<CgsResource::Font>;

	struct ResourcePtr<CgsGui::GuiHudMessageResource>;

	struct ResourcePtr<CgsGui::GuiPopupResource>;

	struct DebugDatabaseInterface;

	struct SafeResourceHandle<renderengine::Texture>;

	struct RegistryResourceType;

	struct CsisResourceType;

	struct AemsBankResourceType;

	struct SplicerResourceType;

	struct GenericRwacReverbIRContentResourceType;

	struct AlignedBinaryFileResourceType;

	struct GenericRwacWaveContentResourceType;

	struct GinsuWaveContentResourceType;

	struct SnapshotDataResourceType;

	struct NicotineResourceType;

	struct WorldPainter2DResourceType;

	struct RwDebugResourceType;

	struct LuaCodeResourceType;

	// Declaration
	struct TextFileResourceType {
	public:
		TextFileResourceType();

	}

	// Declaration
	struct RwRasterResourceType {
	public:
		RwRasterResourceType();

	}

	// Declaration
	struct MaterialResourceType {
	public:
		MaterialResourceType();

	}

	// Declaration
	struct RwVertexDescResourceType {
	public:
		RwVertexDescResourceType();

	}

	// Declaration
	struct RwMaterialCRC32ResourceType {
	public:
		RwMaterialCRC32ResourceType();

	}

	// Declaration
	struct RwTextureStateResourceType {
	public:
		RwTextureStateResourceType();

	}

	// Declaration
	struct MaterialStateResourceType {
	public:
		MaterialStateResourceType();

	}

	// Declaration
	struct RwShaderProgramBufferResourceType {
	public:
		RwShaderProgramBufferResourceType();

	}

	// Declaration
	struct RwShaderParameterResourceType {
	public:
		RwShaderParameterResourceType();

	}

	// Declaration
	struct ShaderTechniqueResourceType {
	public:
		ShaderTechniqueResourceType();

	}

	// Declaration
	struct MaterialTechniqueResourceType {
	public:
		MaterialTechniqueResourceType();

	}

	// Declaration
	struct RwRenderableResourceType {
	public:
		RwRenderableResourceType();

	}

	// Declaration
	struct AptDataHeaderType {
	public:
		AptDataHeaderType();

	}

	// Declaration
	struct HudMessageResourceType {
	public:
		HudMessageResourceType();

	}

	// Declaration
	struct HudMessageListResourceType {
	public:
		HudMessageListResourceType();

	}

	// Declaration
	struct GuiPopupResourceType {
	public:
		GuiPopupResourceType();

	}

	// Declaration
	struct FontResourceType {
	public:
		FontResourceType();

	}

	// Declaration
	struct VoiceHierarchyResourceType {
	public:
		VoiceHierarchyResourceType();

	}

	// Declaration
	struct SnrResourceType {
	public:
		SnrResourceType();

	}

	// Declaration
	struct LanguageResourceType {
	public:
		LanguageResourceType();

	}

	// Declaration
	struct VideoDataResourceType {
	public:
		VideoDataResourceType();

	}

	// Declaration
	struct ZoneListResourceType {
	public:
		ZoneListResourceType();

	}

	// Declaration
	struct ClusteredMeshResourceType {
	public:
		ClusteredMeshResourceType();

	}

	// Declaration
	struct KdTreeResourceType {
	public:
		KdTreeResourceType();

	}

	// Declaration
	struct AttribSysSchemaResourceType {
	public:
		AttribSysSchemaResourceType();

	}

	// Declaration
	struct AttribSysVaultResourceType {
	public:
		AttribSysVaultResourceType();

	}

	// Declaration
	struct ModelResourceType {
	public:
		ModelResourceType();

	}

	// Declaration
	struct RwColourCubeResourceType {
	public:
		RwColourCubeResourceType();

	}

	// Declaration
	struct SatNavTileDirectoryResourceType {
	public:
		SatNavTileDirectoryResourceType();

	}

	// Declaration
	struct SatNavTileResourceType {
	public:
		SatNavTileResourceType();

	}

	// Declaration
	struct PFXHookBundleResourceType {
	public:
		PFXHookBundleResourceType();

	}

	// Declaration
	struct PolygonSoupListResourceType {
	public:
		PolygonSoupListResourceType();

	}

	// Declaration
	struct MassiveLookupTableResourceType {
	public:
		MassiveLookupTableResourceType();

	}

	// Declaration
	struct PlayerCarColoursResourceType {
	public:
		PlayerCarColoursResourceType();

	}

}

// programbuffer.h:24
namespace CgsResource {
	// CgsResourceID.h:175
	extern bool operator==(ID, ID);

	// CgsResourceID.h:263
	extern CgsDev::StrStreamBase & operator<<(CgsDev::StrStreamBase &, ID);

}

// CgsResourceID.h:30
namespace CgsResource {
	struct ID;

	struct SmallResourceDescriptor;

	struct SmallResource;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct DebugResourceInfo;

	struct Type;

	struct AttribSysVaultResource;

	struct FontChar;

	struct Font;

	struct SafeResourceHandle<CgsResource::Font>;

	struct ResourcePtr<CgsResource::AttribSysVaultResource>;

	// CgsResourceID.h:175
	extern bool operator==(ID, ID);

	// CgsResourceID.h:263
	extern CgsDev::StrStreamBase & operator<<(CgsDev::StrStreamBase &, ID);

}

// CgsResourceID.h:30
namespace CgsResource {
	struct ID;

	struct SmallResourceDescriptor;

	struct SmallResource;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct DebugResourceInfo;

	struct Type;

	struct HudMessageListResourceType;

	struct HudMessageResourceType;

}

// CgsResourceID.h:30
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

	struct SafeResourceHandle<CgsResource::Font>;

	struct LanguageResourceHashEntry;

	struct LanguageResource;

	struct GuiPopupResourceType;

	struct AptDataHeaderType;

}

// CgsResourceID.h:30
namespace CgsResource {
	struct ID;

	struct AllocRequest;

	struct AllocRequestAddressed;

	struct AllocResult;

	struct RelocateRequest;

	struct RelocateSource;

	struct LinearHeapNode;

	struct HeapEntry;

	struct Heap;

	struct SmallResourceDescriptor;

	struct SmallResource;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct DebugResourceInfo;

	struct DebugResourceTracker;

	struct Type;

	struct BasePool;

	struct ResourcePerfMonHelper;

	struct PoolPerfMonHelper;

	struct HashTable;

	struct PoolStats;

	struct AllocListSet;

	struct NewResource;

	struct GuiGeometryMeshHeader;

	struct GuiGeometryMesh;

	struct GuiGeometryFile;

	struct GuiGeometryObject;

	struct FontChar;

	struct Font;

	struct AttribSysVaultResource;

	struct SafeResourceHandle<CgsResource::Font>;

	struct CompressedData;

	struct DecompressionJobStatus;

	struct DecompressionJobData;

	struct DecompressionJobInterface;

	struct RunningLoad;

	struct LoadedBundleData;

	struct DebugDatabaseInterface;

	struct EntryListResource;

	struct ImportHashTableValue;

	struct ImportHashTable;

	struct ScratchEntry;

	struct BasePoolModuleState;

	struct EntryListResourceType;

	struct BaseDefragParams;

	struct IntelliFragParams;

	struct EmergencyFragParams;

	struct ResourceIdList;

	struct ResourcePtr<CgsResource::ResourceIdList>;

	struct DebugComponentParams;

	struct BinaryFileResource;

	struct TextFileResource;

	struct DebugComponent;

	struct BaseDefragPoolModuleState;

	struct ResourcePtr<BrnResource::ChallengeListResource>;

	struct ResourcePtr<BrnResource::VehicleListResource>;

	struct ResourcePtr<BrnStreetData::StreetData>;

	struct ResourcePtr<BrnAI::AISectionsData>;

	struct LanguageResourceHashEntry;

	struct LanguageResource;

	struct ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>;

	struct ResourcePtr<BrnTraffic::TrafficData>;

	struct ResourcePtr<BrnTrigger::TriggerData>;

	struct ResourcePtr<BrnVehicle::GraphicsSpec>;

	struct ResourcePtr<BrnWorld::GlobalColourPalette>;

	struct SafeResourceHandle<renderengine::Texture>;

	struct ResourcePtr<BrnResource::WheelListResource>;

	struct ResourcePtr<CgsGui::GuiHudMessageResource>;

	struct ResourcePtr<CgsGui::GuiPopupResource>;

	struct ResourcePtr<BrnFlapt::FlaptFile>;

	struct ResourcePtr<BrnProgression::ProgressionData>;

	struct IdListResourceType;

	struct DebugPoolHistogram;

	struct TextFileResourceType;

	struct BinaryFileResourceType;

	struct AttribSysVaultResourceType;

	struct AttribSysSchemaResourceType;

	// CgsResourceID.h:175
	extern bool operator==(ID, ID);

	// CgsResourceID.h:263
	extern CgsDev::StrStreamBase & operator<<(CgsDev::StrStreamBase &, ID);

	// CgsResourceID.h:203
	extern bool operator<(ID, ID);

}


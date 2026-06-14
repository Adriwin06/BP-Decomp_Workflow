// CgsCore.h:144
namespace renderengine {
	// Declaration
	struct ProgramBuffer {
		// programbuffer.h:83
		enum Type {
			TYPE_NA = 0,
			TYPE_VERTEX = 1,
			TYPE_PIXEL = 2,
			TYPE_FORCEENUMSIZEINT = 2147483647,
		}

		// programbuffer.h:94
		struct Parameters {
		protected:
			// programbuffer.h:115
			void * cgProgramBuffer;

			// programbuffer.h:116
			uint32_t cgProgramSize;

			// programbuffer.h:117
			renderengine::ProgramBuffer::Type programType;

			// programbuffer.h:118
			uint32_t programFlags;

		public:
			// programbuffer.h:96
			Parameters();

			// programbuffer.h:103
			void SetType(renderengine::ProgramBuffer::Type);

			// programbuffer.h:104
			void SetBuffer(void *);

			// programbuffer.h:105
			void SetSize(uint32_t);

			// programbuffer.h:106
			void SetFlags(uint32_t);

			// programbuffer.h:108
			renderengine::ProgramBuffer::Type GetType() const;

			// programbuffer.h:109
			const void * GetBuffer() const;

			// programbuffer.h:110
			uint32_t GetSize() const;

			// programbuffer.h:111
			uint32_t GetFlags() const;

		}

		// programbuffer.h:164
		struct ProgramVariableDescriptor {
			// programbuffer.h:165
			uint16_t m_index;

			// programbuffer.h:166
			uint16_t m_numConstants;

			// programbuffer.h:167
			uint16_t m_dataType;

			// programbuffer.h:168
			uint16_t m_cgParamIndex;

		}

	}

}

// programbuffer.h:78
struct renderengine::ProgramBuffer {
	// programbuffer.h:80
	extern const uint32_t FLAG_PS3PATCHABLE = 1;

protected:
	// programbuffer.h:181
	void * m_programBuffer;

	// programbuffer.h:182
	uint32_t m_programSize;

	// programbuffer.h:183
	uint32_t m_programOffset;

	// programbuffer.h:184
	renderengine::ProgramBuffer::Type m_programType;

	// programbuffer.h:185
	uint32_t m_programFlags;

	// programbuffer.h:187
	CGprogram m_cgProgramBuffer;

	// programbuffer.h:188
	uint32_t m_cgProgramSize;

	// programbuffer.h:189
	uint32_t m_numParameters;

	// programbuffer.h:191
	ParameterOffsetTable * m_parameterOffsetTable;

public:
	// programbuffer.h:123
	ResourceDescriptor GetResourceDescriptor(const renderengine::ProgramBuffer::Parameters &);

	// programbuffer.h:124
	ProgramBuffer * Initialize(const Resource &, const renderengine::ProgramBuffer::Parameters &);

	// programbuffer.h:125
	void Destruct(ProgramBuffer *);

	// programbuffer.h:126
	void Release();

	// programbuffer.h:127
	void GetParameters(renderengine::ProgramBuffer::Parameters &) const;

	// programbuffer.h:128
	renderengine::ProgramBuffer::Type GetType() const;

	// programbuffer.h:129
	uint32_t GetFlags() const;

	// programbuffer.h:132
	uint32_t GetNumStates() const;

	// programbuffer.h:134
	void GetVariableHandleByRegister(uint32_t, uint32_t, uint32_t, renderengine::ProgramVariableHandle &) const;

	// programbuffer.h:135
	bool GetVariableHandleByName(const char8_t *, renderengine::ProgramVariableHandle &) const;

	// programbuffer.h:136
	const char8_t * GetStateNameByIndex(uint32_t) const;

	// programbuffer.h:137
	bool PS3GetVariableHandleByResourceIndex(uint32_t, renderengine::ProgramVariableHandle &) const;

	// programbuffer.h:139
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// programbuffer.h:139
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// programbuffer.h:139
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// programbuffer.h:139
	void RegisterArenaReadCallbacks();

	// programbuffer.h:139
	void RegisterArenaWriteCallbacks();

	// programbuffer.h:139
	void EndianSwapUnfix();

	// programbuffer.h:139
	void EndianSwapFixup();

	// programbuffer.h:140
	int32_t AddRef();

	// programbuffer.h:140
	int32_t RemoveRef();

	// programbuffer.h:144
	const void * PS3GetCgProgramBuffer() const;

	// programbuffer.h:145
	void * PS3GetCgProgramBuffer();

	// programbuffer.h:146
	uint32_t PS3GetPixelProgramOffset() const;

	// programbuffer.h:147
	uint32_t PS3GetRegisterCount() const;

	// programbuffer.h:148
	void PS3SetRegisterCount(uint32_t);

	// programbuffer.h:150
	void PS3CreateProgram();

	// programbuffer.h:151
	void PS3CreateVariableHandleFromCGparam(CGparameter, renderengine::ProgramVariableHandle &) const;

	// programbuffer.h:153
	const void * PS3GetMicrocode() const;

	// programbuffer.h:154
	uint32_t PS3GetMicrocodeSize() const;

	// programbuffer.h:155
	ParameterOffsetTable * PS3GetParameterOffsetTable() const;

protected:
	// programbuffer.h:171
	const renderengine::ProgramBuffer::ProgramVariableDescriptor * PS3GetVariableDescriptorTable() const;

	// programbuffer.h:172
	renderengine::ProgramBuffer::ProgramVariableDescriptor * PS3GetVariableDescriptorTable();

	// programbuffer.h:174
	uint32_t PS3FillParamTable(renderengine::ProgramBuffer::ProgramVariableDescriptor *, CGprogram, renderengine::ProgramBuffer::Type);

	// programbuffer.h:175
	uint32_t PS3CountParams(CGprogram, renderengine::ProgramBuffer::Type);

	// programbuffer.h:195
	void ProgramBuffer();

	// programbuffer.h:196
	void ProgramBuffer(const ProgramBuffer &);

	// programbuffer.h:197
	void ~ProgramBuffer();

}

// programbuffer.h:390
struct renderengine::ProgramVariableHandle {
	// programbuffer.h:394
	extern const uint8_t FLAGS_FLOAT = 1;

	// programbuffer.h:395
	extern const uint8_t FLAGS_SAMPLER = 2;

	// programbuffer.h:396
	extern const uint8_t FLAGS_BOOL = 4;

	// programbuffer.h:397
	extern const uint8_t FLAGS_DATATYPEMASK = 7;

	// programbuffer.h:398
	extern const uint8_t FLAGS_VERTEXPROGRAM = 128;

	// programbuffer.h:402
	extern const uint32_t DATATYPE_NA;

	// programbuffer.h:403
	extern const uint32_t DATATYPE_FLOAT = 1;

	// programbuffer.h:404
	extern const uint32_t DATATYPE_SAMPLER = 2;

	// programbuffer.h:405
	extern const uint32_t DATATYPE_BOOL = 4;

protected:
	// programbuffer.h:431
	const ProgramBuffer * m_programBuffer;

	// programbuffer.h:432
	uint16_t m_index;

	// programbuffer.h:434
	uint8_t m_numConstants;

	// programbuffer.h:435
	uint8_t m_dataFlags;

public:
	// programbuffer.h:407
	void ProgramVariableHandle();

	// programbuffer.h:414
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// programbuffer.h:414
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// programbuffer.h:414
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// programbuffer.h:414
	void RegisterArenaReadCallbacks();

	// programbuffer.h:414
	void RegisterArenaWriteCallbacks();

	// programbuffer.h:414
	void EndianSwapUnfix();

	// programbuffer.h:414
	void EndianSwapFixup();

	// programbuffer.h:416
	void SetProgramType(renderengine::ProgramBuffer::Type);

	// programbuffer.h:417
	void SetDataType(uint32_t);

	// programbuffer.h:418
	void SetNumConstants(uint32_t);

	// programbuffer.h:419
	void SetConstantIndex(uint32_t);

	// programbuffer.h:420
	void PS3SetProgramBuffer(const ProgramBuffer *);

	// programbuffer.h:422
	renderengine::ProgramBuffer::Type GetProgramType() const;

	// programbuffer.h:423
	uint32_t GetDataType() const;

	// programbuffer.h:424
	uint32_t GetNumConstants() const;

	// programbuffer.h:425
	uint32_t GetConstantIndex() const;

	// programbuffer.h:426
	const ProgramBuffer * PS3GetProgramBuffer() const;

}

// programbuffer.h:80
extern const uint32_t FLAG_PS3PATCHABLE = 1;

// programbuffer.h:394
extern const uint8_t FLAGS_FLOAT = 1;

// programbuffer.h:395
extern const uint8_t FLAGS_SAMPLER = 2;

// programbuffer.h:396
extern const uint8_t FLAGS_BOOL = 4;

// programbuffer.h:397
extern const uint8_t FLAGS_DATATYPEMASK = 7;

// programbuffer.h:398
extern const uint8_t FLAGS_VERTEXPROGRAM = 128;

// programbuffer.h:403
extern const uint32_t DATATYPE_FLOAT = 1;

// programbuffer.h:24
namespace CgsResource {
	struct FontChar;

	struct Font;

	struct SmallResourceDescriptor;

	struct SmallResource;

	struct ID;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct SafeResourceHandle<CgsResource::Font>;

	struct DebugResourceInfo;

	struct Type;

	struct ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>;

	struct SafeResourceHandle<renderengine::Texture>;

	struct SafeResourceHandle<BrnParticle::BrnVFXMeshCollection>;

	struct SafeResourceHandle<BrnParticle::TextureNameMap>;

	struct ResourcePtr<BrnParticle::VFXPropCollection>;

	struct SafeResourceHandle<BrnParticle::ParticleDescriptionCollection>;

	struct ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>;

}

// programbuffer.h:24
namespace CgsResource {
	struct SmallResourceDescriptor;

	struct SmallResource;

	struct ID;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct DebugResourceInfo;

	struct Type;

	struct FontChar;

	struct Font;

	struct SafeResourceHandle<CgsResource::Font>;

	struct SafeResourceHandle<renderengine::Texture>;

}

// programbuffer.h:24
namespace CgsResource {
	struct FontChar;

	struct Font;

	struct SmallResourceDescriptor;

	struct SmallResource;

	struct ID;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct SafeResourceHandle<CgsResource::Font>;

	struct DebugResourceInfo;

	struct Type;

	struct GuiGeometryMeshHeader;

	struct GuiGeometryMesh;

	struct GuiGeometryFile;

	struct GuiGeometryObject;

	struct LanguageResourceHashEntry;

	struct LanguageResource;

	struct ResourcePtr<BrnResource::ChallengeListResource>;

	struct ResourcePtr<BrnResource::VehicleListResource>;

	struct ResourcePtr<BrnStreetData::StreetData>;

	struct ResourcePtr<BrnTrigger::TriggerData>;

	struct ResourcePtr<BrnProgression::ProgressionData>;

	struct ResourcePtr<BrnWorld::GlobalColourPalette>;

	struct ResourcePtr<CgsGui::GuiPopupResource>;

	struct ResourcePtr<CgsGui::GuiHudMessageResource>;

	struct SatNavTileDirectoryResourceType;

	struct SatNavTileResourceType;

}

// programbuffer.h:24
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

	struct ResourcePtr<BrnResource::VehicleListResource>;

	struct FontChar;

	struct Font;

	struct SafeResourceHandle<CgsResource::Font>;

	struct GuiGeometryMeshHeader;

	struct GuiGeometryMesh;

	struct GuiGeometryFile;

	struct GuiGeometryObject;

	struct LanguageResourceHashEntry;

	struct LanguageResource;

	struct ResourcePtr<BrnStreetData::StreetData>;

	struct ResourcePtr<BrnAI::AISectionsData>;

	struct LuaCodeResource;

	struct BinaryFileResource;

	struct ResourcePtr<CgsResource::VideoDataResource>;

	struct ResourcePtr<BrnTrigger::TriggerData>;

	struct ResourcePtr<BrnProgression::ProgressionData>;

	struct ResourcePtr<BrnWorld::GlobalColourPalette>;

	struct ResourcePtr<CgsGui::GuiPopupResource>;

	struct ResourcePtr<CgsGui::GuiHudMessageResource>;

	struct ResourcePtr<BrnFlapt::FlaptFile>;

	struct ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>;

	struct ResourcePtr<BrnTraffic::TrafficData>;

	struct ResourcePtr<rw::graphics::postfx::ColourCube>;

	struct ResourcePtr<BrnGui::PFXHookBundle>;

	struct SafeResourceHandle<renderengine::Texture>;

	struct ResourcePtr<BrnResource::WheelListResource>;

	struct ResourcePtr<BrnVehicle::GraphicsSpec>;

	struct PFXHookBundleResourceType;

}

// programbuffer.h:24
namespace CgsResource {
	struct FontChar;

	struct Font;

	struct SmallResourceDescriptor;

	struct SmallResource;

	struct ID;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct SafeResourceHandle<CgsResource::Font>;

	struct ResourcePtr<BrnStreetData::StreetData>;

	struct ResourcePtr<BrnAI::AISectionsData>;

	struct DebugResourceInfo;

	struct Type;

	struct ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>;

}

// programbuffer.h:24
namespace CgsResource {
	struct FontChar;

	struct Font;

	struct SmallResourceDescriptor;

	struct SmallResource;

	struct ID;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct SafeResourceHandle<CgsResource::Font>;

	struct ResourcePtr<BrnResource::ChallengeListResource>;

	struct ResourcePtr<BrnResource::VehicleListResource>;

	struct ResourcePtr<BrnStreetData::StreetData>;

	struct ResourcePtr<BrnAI::AISectionsData>;

	struct DebugResourceInfo;

	struct Type;

	struct GuiGeometryMeshHeader;

	struct GuiGeometryMesh;

	struct GuiGeometryFile;

	struct GuiGeometryObject;

	struct LanguageResourceHashEntry;

	struct LanguageResource;

	struct ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>;

	struct ResourcePtr<BrnTraffic::TrafficData>;

	struct ResourcePtr<BrnTrigger::TriggerData>;

	struct ResourcePtr<BrnVehicle::GraphicsSpec>;

	struct ResourcePtr<BrnWorld::GlobalColourPalette>;

	struct ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>;

	struct SafeResourceHandle<renderengine::Texture>;

	struct ResourcePtr<BrnResource::WheelListResource>;

	struct ResourcePtr<CgsGui::GuiHudMessageResource>;

	struct ResourcePtr<CgsGui::GuiPopupResource>;

	struct ResourcePtr<BrnFlapt::FlaptFile>;

	struct ResourcePtr<BrnProgression::ProgressionData>;

}

// programbuffer.h:24
namespace CgsResource {
	struct FontChar;

	struct Font;

	struct SmallResourceDescriptor;

	struct SmallResource;

	struct ID;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct SafeResourceHandle<CgsResource::Font>;

	struct DebugResourceInfo;

	struct ResourcePtr<BrnResource::ChallengeListResource>;

	struct ResourcePtr<BrnStreetData::StreetData>;

	struct ResourcePtr<BrnResource::VehicleListResource>;

	struct GuiGeometryMeshHeader;

	struct GuiGeometryMesh;

	struct GuiGeometryFile;

	struct GuiGeometryObject;

	struct LanguageResourceHashEntry;

	struct LanguageResource;

	struct BinaryFileResource;

	struct ResourcePtr<CgsGui::GuiHudMessageResource>;

	struct ResourcePtr<BrnTrigger::TriggerData>;

	struct ResourcePtr<BrnProgression::ProgressionData>;

	struct ResourcePtr<BrnWorld::GlobalColourPalette>;

	struct ResourcePtr<CgsGui::GuiPopupResource>;

	struct ResourcePtr<CgsResource::BinaryFileResource>;

	struct ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>;

	struct SafeResourceHandle<renderengine::Texture>;

	struct ResourcePtr<CgsSound::Playback::Registry>;

	struct ResourcePtr<BrnSound::Vehicles::Engines::LoopModelData>;

	struct ResourcePtr<BrnPhysics::Props::PropPhysicsDataHeader>;

	struct AlignedBinaryFileResource;

	struct ResourcePtr<CgsResource::AlignedBinaryFileResource>;

	struct SnrResourceType;

	struct FreqContentResourceType;

	struct VoiceHierarchyResourceType;

	struct VoiceHierarchyCollectionResourceType;

	struct InterpreterDataResourceType;

}

// programbuffer.h:24
namespace CgsResource {
	struct SmallResourceDescriptor;

	struct SmallResource;

	struct ID;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct DebugResourceInfo;

	struct Type;

	struct FontChar;

	struct Font;

	struct SafeResourceHandle<CgsResource::Font>;

	struct ResourcePtr<BrnPhysics::Deformation::StreamedDeformationSpec>;

	struct ResourcePtr<BrnVehicle::GraphicsSpec>;

	struct SafeResourceHandle<renderengine::Texture>;

}

// programbuffer.h:24
namespace CgsResource {
	struct SmallResourceDescriptor;

	struct SmallResource;

	struct ID;

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

	struct ResourcePtr<BrnVehicle::GraphicsSpec>;

	struct ResourcePtr<BrnWorld::GlobalColourPalette>;

	struct ResourcePtr<CgsSceneManager::ZoneList>;

	struct ResourcePtr<CgsGraphics::InstanceList>;

	struct SafeResourceHandle<renderengine::Texture>;

	struct ResourcePtr<BrnWorld::EnvironmentSettings::Dictionary>;

	struct ResourcePtr<BrnWorld::EnvironmentSettings::TimeLine>;

	struct ResourcePtr<rw::graphics::postfx::ColourCube>;

	struct ResourcePtr<BrnResource::WheelListResource>;

	struct ResourcePtr<CgsGui::GuiHudMessageResource>;

	struct ResourcePtr<CgsGui::GuiPopupResource>;

	struct ResourcePtr<BrnProgression::ProgressionData>;

	struct ResourcePtr<BrnFlapt::FlaptFile>;

}

// programbuffer.h:78
struct renderengine::ProgramBuffer {
	// programbuffer.h:80
	extern const uint32_t FLAG_PS3PATCHABLE = 1;

protected:
	// programbuffer.h:181
	void * m_programBuffer;

	// programbuffer.h:182
	uint32_t m_programSize;

	// programbuffer.h:183
	uint32_t m_programOffset;

	// programbuffer.h:184
	renderengine::ProgramBuffer::Type m_programType;

	// programbuffer.h:185
	uint32_t m_programFlags;

	// programbuffer.h:187
	CGprogram m_cgProgramBuffer;

	// programbuffer.h:188
	uint32_t m_cgProgramSize;

	// programbuffer.h:189
	uint32_t m_numParameters;

	// programbuffer.h:191
	ParameterOffsetTable * m_parameterOffsetTable;

public:
	// programbuffer.h:123
	ResourceDescriptor GetResourceDescriptor(const renderengine::ProgramBuffer::Parameters &);

	// programbuffer.h:124
	ProgramBuffer * Initialize(const Resource &, const renderengine::ProgramBuffer::Parameters &);

	// programbuffer.h:125
	void Destruct(ProgramBuffer *);

	// programbuffer.h:126
	void Release();

	// programbuffer.h:127
	void GetParameters(renderengine::ProgramBuffer::Parameters &) const;

	// programbuffer.h:128
	renderengine::ProgramBuffer::Type GetType() const;

	// programbuffer.h:129
	uint32_t GetFlags() const;

	// programbuffer.h:132
	uint32_t GetNumStates() const;

	// programbuffer.h:134
	void GetVariableHandleByRegister(uint32_t, uint32_t, uint32_t, renderengine::ProgramVariableHandle &) const;

	// programbuffer.h:135
	bool GetVariableHandleByName(const char8_t *, renderengine::ProgramVariableHandle &) const;

	// programbuffer.h:136
	const char8_t * GetStateNameByIndex(uint32_t) const;

	// programbuffer.h:137
	bool PS3GetVariableHandleByResourceIndex(uint32_t, renderengine::ProgramVariableHandle &) const;

	// programbuffer.h:139
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// programbuffer.h:139
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// programbuffer.h:139
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// programbuffer.h:139
	void RegisterArenaReadCallbacks();

	// programbuffer.h:139
	void RegisterArenaWriteCallbacks();

	// programbuffer.h:139
	void EndianSwapUnfix();

	// programbuffer.h:139
	void EndianSwapFixup();

	// programbuffer.h:140
	int32_t AddRef();

	// programbuffer.h:140
	int32_t RemoveRef();

	// programbuffer.h:144
	const void * PS3GetCgProgramBuffer() const;

	// programbuffer.h:145
	void * PS3GetCgProgramBuffer();

	// programbuffer.h:146
	uint32_t PS3GetPixelProgramOffset() const;

	// programbuffer.h:147
	uint32_t PS3GetRegisterCount() const;

	// programbuffer.h:148
	void PS3SetRegisterCount(uint32_t);

	// programbuffer.h:150
	void PS3CreateProgram();

	// programbuffer.h:151
	void PS3CreateVariableHandleFromCGparam(CGparameter, renderengine::ProgramVariableHandle &) const;

	// programbuffer.h:153
	const void * PS3GetMicrocode() const;

	// programbuffer.h:154
	uint32_t PS3GetMicrocodeSize() const;

	// programbuffer.h:155
	ParameterOffsetTable * PS3GetParameterOffsetTable() const;

protected:
	// programbuffer.h:171
	const renderengine::ProgramBuffer::ProgramVariableDescriptor * PS3GetVariableDescriptorTable() const;

	// programbuffer.h:172
	renderengine::ProgramBuffer::ProgramVariableDescriptor * PS3GetVariableDescriptorTable();

	// programbuffer.h:174
	uint32_t PS3FillParamTable(renderengine::ProgramBuffer::ProgramVariableDescriptor *, CGprogram, renderengine::ProgramBuffer::Type);

	// programbuffer.h:175
	uint32_t PS3CountParams(CGprogram, renderengine::ProgramBuffer::Type);

	// programbuffer.h:195
	void ProgramBuffer();

	// programbuffer.h:196
	void ProgramBuffer(const renderengine::ProgramBuffer &);

	// programbuffer.h:197
	void ~ProgramBuffer();

}

// programbuffer.h:390
struct renderengine::ProgramVariableHandle {
	// programbuffer.h:394
	extern const uint8_t FLAGS_FLOAT = 1;

	// programbuffer.h:395
	extern const uint8_t FLAGS_SAMPLER = 2;

	// programbuffer.h:396
	extern const uint8_t FLAGS_BOOL = 4;

	// programbuffer.h:397
	extern const uint8_t FLAGS_DATATYPEMASK = 7;

	// programbuffer.h:398
	extern const uint8_t FLAGS_VERTEXPROGRAM = 128;

	// programbuffer.h:402
	extern const uint32_t DATATYPE_NA;

	// programbuffer.h:403
	extern const uint32_t DATATYPE_FLOAT = 1;

	// programbuffer.h:404
	extern const uint32_t DATATYPE_SAMPLER = 2;

	// programbuffer.h:405
	extern const uint32_t DATATYPE_BOOL = 4;

protected:
	// programbuffer.h:431
	const renderengine::ProgramBuffer * m_programBuffer;

	// programbuffer.h:432
	uint16_t m_index;

	// programbuffer.h:434
	uint8_t m_numConstants;

	// programbuffer.h:435
	uint8_t m_dataFlags;

public:
	// programbuffer.h:407
	void ProgramVariableHandle();

	// programbuffer.h:414
	Arena::SizeAndAlignment * Unfix(void *, Arena::SizeAndAlignment *);

	// programbuffer.h:414
	void Refix(void *, void *, rw::core::arena::ArenaIterator *);

	// programbuffer.h:414
	RwBool Fixup(void *, rw::core::arena::ArenaIterator *);

	// programbuffer.h:414
	void RegisterArenaReadCallbacks();

	// programbuffer.h:414
	void RegisterArenaWriteCallbacks();

	// programbuffer.h:414
	void EndianSwapUnfix();

	// programbuffer.h:414
	void EndianSwapFixup();

	// programbuffer.h:416
	void SetProgramType(renderengine::ProgramBuffer::Type);

	// programbuffer.h:417
	void SetDataType(uint32_t);

	// programbuffer.h:418
	void SetNumConstants(uint32_t);

	// programbuffer.h:419
	void SetConstantIndex(uint32_t);

	// programbuffer.h:420
	void PS3SetProgramBuffer(const renderengine::ProgramBuffer *);

	// programbuffer.h:422
	renderengine::ProgramBuffer::Type GetProgramType() const;

	// programbuffer.h:423
	uint32_t GetDataType() const;

	// programbuffer.h:424
	uint32_t GetNumConstants() const;

	// programbuffer.h:425
	uint32_t GetConstantIndex() const;

	// programbuffer.h:426
	const renderengine::ProgramBuffer * PS3GetProgramBuffer() const;

}

// programbuffer.h:24
namespace CgsResource {
	struct ID;

	struct FontChar;

	struct Font;

	struct SmallResource;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct SafeResourceHandle<CgsResource::Font>;

	struct VideoDataResourceType;

	struct Type;

	struct ShaderTechniqueResourceType;

}

// programbuffer.h:24
namespace CgsResource {
	struct FontChar;

	struct Font;

	struct SmallResource;

	struct ID;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct SafeResourceHandle<CgsResource::Font>;

}

// programbuffer.h:24
namespace CgsResource {
	struct FontChar;

	struct Font;

	struct ID;

	struct SmallResourceDescriptor;

	struct SmallResource;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct DebugResourceInfo;

	struct Type;

	struct FontResourceType;

}

// programbuffer.h:24
namespace CgsResource {
	struct FontChar;

	struct Font;

	struct SmallResource;

	struct ID;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct SafeResourceHandle<CgsResource::Font>;

	struct PolygonSoupListResourceType;

	struct Type;

}

// programbuffer.h:24
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

	struct LanguageResourceHashEntry;

	struct LanguageResource;

	struct LanguageResourceType;

}

// programbuffer.h:24
namespace CgsResource {
	struct FontChar;

	struct Font;

	struct SmallResourceDescriptor;

	struct SmallResource;

	struct ID;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct SafeResourceHandle<CgsResource::Font>;

	struct DebugResourceInfo;

	struct Type;

}

// programbuffer.h:24
namespace CgsResource {
	struct FontChar;

	struct Font;

	struct SmallResource;

	struct ID;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct SafeResourceHandle<CgsResource::Font>;

	struct Type;

}

// programbuffer.h:24
namespace CgsResource {
	struct SmallResourceDescriptor;

	struct SmallResource;

	struct ID;

	struct ResourceHandle;

	struct Entry;

	struct BaseResourcePtr;

	struct DebugResourceInfo;

	struct Type;

	struct SafeResourceHandle<BrnParticle::TextureNameMap>;

	struct SafeResourceHandle<renderengine::Texture>;

}


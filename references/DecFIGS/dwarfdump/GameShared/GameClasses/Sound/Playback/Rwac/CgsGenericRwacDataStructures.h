// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// Declaration
		struct GenericRwacFeatureImplementation {
			// CgsGenericRwacDataStructures.h:58
			struct PluginInfo {
				// CgsGenericRwacDataStructures.h:59
				DecoderDesc::Guid mGuid;

				// CgsGenericRwacDataStructures.h:60
				PlugInRegistry::PlugInHandle mHandle;

				// CgsGenericRwacDataStructures.h:61
				uint32_t mu32OutputChannels;

			public:
				// CgsGenericRwacDataStructures.h:63
				void EndianSwap();

			}

			// CgsGenericRwacDataStructures.h:72
			struct ParameterMap {
				// CgsGenericRwacDataStructures.h:73
				Name mName;

				// CgsGenericRwacDataStructures.h:74
				uint16_t mu16PluginOffset;

				// CgsGenericRwacDataStructures.h:75
				uint16_t mu16Attribute;

			public:
				// CgsGenericRwacDataStructures.h:77
				void EndianSwap();

			}

			// CgsGenericRwacDataStructures.h:86
			struct SlotMap {
				// CgsGenericRwacDataStructures.h:87
				Name mName;

				// CgsGenericRwacDataStructures.h:88
				Name mRuntimeClass;

				// CgsGenericRwacDataStructures.h:90
				uint16_t mu16PluginOffset;

			public:
				// CgsGenericRwacDataStructures.h:92
				void EndianSwap();

			}

		}

	}

}

// CgsGenericRwacDataStructures.h:53
struct CgsSound::Playback::GenericRwacFeatureImplementation : public Entity {
	// CgsGenericRwacDataStructures.h:102
	extern const Name SK_TYPE_NAME;

private:
	// CgsGenericRwacDataStructures.h:405
	Name mFeatureSchemaName;

	// CgsGenericRwacDataStructures.h:406
	uint32_t mu32PluginInfoCount;

	// CgsGenericRwacDataStructures.h:407
	uint32_t mu32ParameterMapCount;

	// CgsGenericRwacDataStructures.h:408
	uint32_t mu32SlotMapCount;

public:
	// CgsGenericRwacDataStructures.h:108
	size_t GetAllocationSize(uint32_t, uint32_t, uint32_t);

	// CgsGenericRwacDataStructures.h:118
	size_t GetAllocatedSize();

	// CgsGenericRwacDataStructures.h:130
	void GenericRwacFeatureImplementation(uint32_t, uint32_t, uint32_t);

	// CgsGenericRwacDataStructures.h:137
	Name GetFeatureSchemaName() const;

	// CgsGenericRwacDataStructures.h:144
	void SetFeatureSchemaName(Name);

	// CgsGenericRwacDataStructures.h:150
	uint32_t GetPluginInfoCount() const;

	// CgsGenericRwacDataStructures.h:156
	uint32_t GetParameterMapCount() const;

	// CgsGenericRwacDataStructures.h:162
	uint32_t GetSlotMapCount() const;

	// CgsGenericRwacDataStructures.h:170
	void SetPluginInfoGuid(uint32_t, DecoderDesc::Guid);

	// CgsGenericRwacDataStructures.h:183
	PlugInRegistry::PlugInHandle GetPluginInfoHandle(uint32_t) const;

	// CgsGenericRwacDataStructures.h:194
	// Declaration
	void ResolvePluginInfoHandle(uint32_t, rw::audio::core::PlugInRegistry *) const {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsGenericRwacDataStructures.h:209
		using namespace CgsDev::Message;

	}

	// CgsGenericRwacDataStructures.h:218
	uint32_t GetPluginInfoOutputChannels(uint32_t) const;

	// CgsGenericRwacDataStructures.h:229
	void SetPluginInfoOutputChannels(uint32_t, uint32_t);

	// CgsGenericRwacDataStructures.h:239
	Name GetParameterMapName(uint32_t) const;

	// CgsGenericRwacDataStructures.h:250
	void SetParameterMapName(uint32_t, Name);

	// CgsGenericRwacDataStructures.h:260
	uint32_t GetParameterMapOffset(uint32_t) const;

	// CgsGenericRwacDataStructures.h:271
	void SetParameterMapOffset(uint32_t, uint32_t);

	// CgsGenericRwacDataStructures.h:282
	uint32_t GetParameterMapAttribute(uint32_t) const;

	// CgsGenericRwacDataStructures.h:293
	void SetParameterMapAttribute(uint32_t, uint32_t);

	// CgsGenericRwacDataStructures.h:304
	Name GetSlotMapName(uint32_t) const;

	// CgsGenericRwacDataStructures.h:315
	void SetSlotMapName(uint32_t, Name);

	// CgsGenericRwacDataStructures.h:325
	Name GetSlotMapRuntimeClass(uint32_t) const;

	// CgsGenericRwacDataStructures.h:336
	void SetSlotMapRuntimeClass(uint32_t, Name);

	// CgsGenericRwacDataStructures.h:347
	uint32_t GetSlotMapOffset(uint32_t) const;

	// CgsGenericRwacDataStructures.h:358
	void SetSlotMapOffset(uint32_t, uint32_t);

private:
	// CgsGenericRwacDataStructures.h:369
	CgsSound::Playback::GenericRwacFeatureImplementation::PluginInfo * GetPluginInfoAddress(uint32_t) const;

	// CgsGenericRwacDataStructures.h:380
	CgsSound::Playback::GenericRwacFeatureImplementation::ParameterMap * GetParameterMapAddress(uint32_t) const;

	// CgsGenericRwacDataStructures.h:393
	CgsSound::Playback::GenericRwacFeatureImplementation::SlotMap * GetSlotMapAddress(uint32_t) const;

}

// CgsGenericRwacDataStructures.h:102
extern const Name SK_TYPE_NAME;


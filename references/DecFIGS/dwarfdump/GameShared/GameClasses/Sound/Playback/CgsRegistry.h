// CgsCommon.h:25
namespace CgsSound {
	// CgsCommon.h:26
	namespace Playback {
		// Declaration
		struct Registry {
			// CgsRegistry.h:146
			struct iterator {
				// CgsRegistry.h:177
				const Entity ** mppEntity;

			public:
				// CgsRegistry.h:150
				iterator();

				// CgsRegistry.h:153
				iterator(const Entity **);

				// CgsRegistry.h:155
				const Entity & operator*() const;

				// CgsRegistry.h:157
				const Entity * operator->() const;

				// CgsRegistry.h:160
				CgsSound::Playback::Registry::iterator & operator++();

				// CgsRegistry.h:163
				CgsSound::Playback::Registry::iterator operator++(int);

				// CgsRegistry.h:166
				CgsSound::Playback::Registry::iterator & operator--();

				// CgsRegistry.h:169
				CgsSound::Playback::Registry::iterator operator--(int);

				// CgsRegistry.h:172
				bool operator==(const CgsSound::Playback::Registry::iterator &) const;

				// CgsRegistry.h:175
				bool operator!=(const CgsSound::Playback::Registry::iterator &) const;

			}

		}

	}

}

// CgsRegistry.h:42
struct CgsSound::Playback::RegistrySpec {
	// CgsRegistry.h:43
	uint32_t mu32EntityCount;

	// CgsRegistry.h:44
	size_t muDataSize;

	// CgsRegistry.h:45
	size_t muStringTableSize;

public:
	// CgsRegistry.h:47
	void RegistrySpec();

}

// CgsRegistry.h:55
struct CgsSound::Playback::Registry {
private:
	// CgsRegistry.h:232
	uint32_t mu32EntityCount;

	// CgsRegistry.h:233
	uint32_t mu32EntityCapacity;

	// CgsRegistry.h:234
	size_t muDataSize;

	// CgsRegistry.h:235
	uint8_t * mpu8Data;

	// CgsRegistry.h:236
	size_t muStringTableSize;

	// CgsRegistry.h:237
	char * mpcStringTable;

	// CgsRegistry.h:239
	uintptr_t muNameHashMask;

public:
	// CgsRegistry.h:62
	size_t GetAllocationSize(const RegistrySpec &);

	// CgsRegistry.h:67
	size_t GetAllocatedSize() const;

	// CgsRegistry.h:73
	void Registry(const RegistrySpec &);

	// CgsRegistry.h:77
	void ~Registry();

	// CgsRegistry.h:97
	bool AddEntity(const Entity &);

	// CgsRegistry.h:105
	uint32_t GetEntityCount() const;

	// CgsRegistry.h:108
	uint32_t GetAvailableEntityCount() const;

	// CgsRegistry.h:111
	size_t GetUsedSpace() const;

	// CgsRegistry.h:114
	size_t GetAvailableSpace() const;

	// CgsRegistry.h:117
	size_t GetUsedStringTable() const;

	// CgsRegistry.h:120
	size_t GetAvailableStringTable() const;

	// CgsRegistry.h:123
	const char * GetStringTableStart() const;

	// CgsRegistry.h:127
	Registry & operator+=(Registry &);

	// CgsRegistry.h:137
	bool Contains(const Entity &) const;

	// CgsRegistry.h:140
	// Declaration
	void Dump() {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsRegistry.h:575
		using namespace CgsDev::Message;

		// CgsRegistry.h:592
		using namespace CgsDev::Message;

		// CgsRegistry.h:596
		using namespace CgsDev::Message;

		// CgsRegistry.h:599
		using namespace CgsDev::Message;

		// CgsRegistry.h:605
		using namespace CgsDev::Message;

	}

	// CgsRegistry.h:182
	CgsSound::Playback::Registry::iterator begin();

	// CgsRegistry.h:186
	CgsSound::Playback::Registry::iterator end();

	// CgsRegistry.h:204
	void FixUp();

	// CgsRegistry.h:207
	void Unresolve();

	// CgsRegistry.h:211
	void Resolve(const Registry &);

private:
	// CgsRegistry.h:215
	const Entity ** GetFirstEntity() const;

	// CgsRegistry.h:218
	const uint8_t * GetDataStart() const;

	// CgsRegistry.h:221
	uint8_t * GetDataStart();

	// CgsRegistry.h:224
	char * GetStringTableStart();

	// CgsRegistry.h:230
	const Entity * Import(uint8_t *, const Entity &, const Registry &) const;

}

// CgsRegistry.h:424
extern const GenericRwacFeatureImplementation * GetEntity<CgsSound::Playback::GenericRwacFeatureImplementation>(Name &  lName) const {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.h:426
		const Entity ** lppEntity;

		// CgsRegistry.h:429
		uintptr_t luNameHash;

		// CgsRegistry.h:430
		uintptr_t luMaskedHash;

		// CgsRegistry.h:434
		uint32_t luStart;

		// CgsRegistry.h:435
		uint32_t luIndex;

		CgsSound::Playback::Registry::GetFirstEntity(/* parameters */);
	}
	CgsSound::Playback::Name::operator==(/* parameters */);
	CgsSound::Playback::Name::operator==(/* parameters */);
	{
		// CgsRegistry.h:432
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsRegistry.h:424
extern const AemsVoiceCsisClass * GetEntity<CgsSound::Playback::AemsVoiceCsisClass>(Name &  lName) const {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.h:426
		const Entity ** lppEntity;

		// CgsRegistry.h:429
		uintptr_t luNameHash;

		// CgsRegistry.h:430
		uintptr_t luMaskedHash;

		// CgsRegistry.h:434
		uint32_t luStart;

		// CgsRegistry.h:435
		uint32_t luIndex;

		CgsSound::Playback::Registry::GetFirstEntity(/* parameters */);
	}
	CgsSound::Playback::Name::operator==(/* parameters */);
	CgsSound::Playback::Name::operator==(/* parameters */);
	{
		// CgsRegistry.h:432
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsRegistry.h:424
extern const VoiceSpec * GetEntity<CgsSound::Playback::VoiceSpec>(Name &  lName) const {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.h:426
		const Entity ** lppEntity;

		// CgsRegistry.h:429
		uintptr_t luNameHash;

		// CgsRegistry.h:430
		uintptr_t luMaskedHash;

		// CgsRegistry.h:434
		uint32_t luStart;

		// CgsRegistry.h:435
		uint32_t luIndex;

		CgsSound::Playback::Registry::GetFirstEntity(/* parameters */);
	}
	CgsSound::Playback::Name::operator==(/* parameters */);
	CgsSound::Playback::Name::operator==(/* parameters */);
	{
		// CgsRegistry.h:432
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsRegistry.h:424
extern const ContentSpec * GetEntity<CgsSound::Playback::ContentSpec>(Name &  lName) const {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.h:426
		const Entity ** lppEntity;

		// CgsRegistry.h:429
		uintptr_t luNameHash;

		// CgsRegistry.h:430
		uintptr_t luMaskedHash;

		// CgsRegistry.h:434
		uint32_t luStart;

		// CgsRegistry.h:435
		uint32_t luIndex;

		CgsSound::Playback::Registry::GetFirstEntity(/* parameters */);
	}
	CgsSound::Playback::Name::operator==(/* parameters */);
	CgsSound::Playback::Name::operator==(/* parameters */);
	{
		// CgsRegistry.h:432
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsRegistry.h:424
extern const ContentType * GetEntity<CgsSound::Playback::ContentType>(Name &  lName) const {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.h:426
		const Entity ** lppEntity;

		// CgsRegistry.h:429
		uintptr_t luNameHash;

		// CgsRegistry.h:430
		uintptr_t luMaskedHash;

		// CgsRegistry.h:434
		uint32_t luStart;

		// CgsRegistry.h:435
		uint32_t luIndex;

		CgsSound::Playback::Registry::GetFirstEntity(/* parameters */);
	}
	CgsSound::Playback::Name::operator==(/* parameters */);
	CgsSound::Playback::Name::operator==(/* parameters */);
	{
		// CgsRegistry.h:432
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsRegistry.h:424
extern const VoiceSchema * GetEntity<CgsSound::Playback::VoiceSchema>(Name &  lName) const {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.h:426
		const Entity ** lppEntity;

		// CgsRegistry.h:429
		uintptr_t luNameHash;

		// CgsRegistry.h:430
		uintptr_t luMaskedHash;

		// CgsRegistry.h:434
		uint32_t luStart;

		// CgsRegistry.h:435
		uint32_t luIndex;

		CgsSound::Playback::Registry::GetFirstEntity(/* parameters */);
	}
	CgsSound::Playback::Name::operator==(/* parameters */);
	CgsSound::Playback::Name::operator==(/* parameters */);
	{
		// CgsRegistry.h:432
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsRegistry.h:424
extern const FeatureSchema * GetEntity<CgsSound::Playback::FeatureSchema>(Name &  lName) const {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.h:426
		const Entity ** lppEntity;

		// CgsRegistry.h:429
		uintptr_t luNameHash;

		// CgsRegistry.h:430
		uintptr_t luMaskedHash;

		// CgsRegistry.h:434
		uint32_t luStart;

		// CgsRegistry.h:435
		uint32_t luIndex;

		CgsSound::Playback::Registry::GetFirstEntity(/* parameters */);
	}
	CgsSound::Playback::Name::operator==(/* parameters */);
	CgsSound::Playback::Name::operator==(/* parameters */);
	{
		// CgsRegistry.h:432
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsRegistry.h:424
extern const SlotSchema * GetEntity<CgsSound::Playback::SlotSchema>(Name &  lName) const {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.h:426
		const Entity ** lppEntity;

		// CgsRegistry.h:429
		uintptr_t luNameHash;

		// CgsRegistry.h:430
		uintptr_t luMaskedHash;

		// CgsRegistry.h:434
		uint32_t luStart;

		// CgsRegistry.h:435
		uint32_t luIndex;

		CgsSound::Playback::Registry::GetFirstEntity(/* parameters */);
	}
	CgsSound::Playback::Name::operator==(/* parameters */);
	CgsSound::Playback::Name::operator==(/* parameters */);
	{
		// CgsRegistry.h:432
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsRegistry.h:424
extern const ParameterSchema * GetEntity<CgsSound::Playback::ParameterSchema>(Name &  lName) const {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.h:426
		const Entity ** lppEntity;

		// CgsRegistry.h:429
		uintptr_t luNameHash;

		// CgsRegistry.h:430
		uintptr_t luMaskedHash;

		// CgsRegistry.h:434
		uint32_t luStart;

		// CgsRegistry.h:435
		uint32_t luIndex;

		CgsSound::Playback::Registry::GetFirstEntity(/* parameters */);
	}
	CgsSound::Playback::Name::operator==(/* parameters */);
	CgsSound::Playback::Name::operator==(/* parameters */);
	{
		// CgsRegistry.h:432
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsRegistry.h:424
extern const ContentClass * GetEntity<CgsSound::Playback::ContentClass>(Name &  lName) const {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.h:426
		const Entity ** lppEntity;

		// CgsRegistry.h:429
		uintptr_t luNameHash;

		// CgsRegistry.h:430
		uintptr_t luMaskedHash;

		// CgsRegistry.h:434
		uint32_t luStart;

		// CgsRegistry.h:435
		uint32_t luIndex;

		CgsSound::Playback::Registry::GetFirstEntity(/* parameters */);
	}
	CgsSound::Playback::Name::operator==(/* parameters */);
	CgsSound::Playback::Name::operator==(/* parameters */);
	{
		// CgsRegistry.h:432
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}


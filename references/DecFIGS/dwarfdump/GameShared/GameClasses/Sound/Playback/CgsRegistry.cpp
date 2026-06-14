// CgsRegistry.cpp:287
void CgsSound::Playback::Registry::Resolve(const const Registry &  lOther) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.cpp:289
		const Entity ** lppEntity;

		GetFirstEntity(/* parameters */);
		{
			// CgsRegistry.cpp:290
			uint32_t lu32I;

		}
	}
	{
		// CgsRegistry.cpp:294
		const IEntityFixer * lpFixer;

		IEntityFixer::GetFixer(/* parameters */);
		Entity::GetTypeName(/* parameters */);
		IEntityFixer::GetTypeName(/* parameters */);
		IEntityFixer::Resolve(/* parameters */);
	}
}

// CgsRegistry.cpp:95
void CgsSound::Playback::Registry::Import(uint8_t *  lpu8BaseAddress, const const Entity &  lEntity, const const Registry &  lOther) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.cpp:97
		ptrdiff_t liRelocation;

		// CgsRegistry.cpp:99
		Entity * lpEntity;

		// CgsRegistry.cpp:103
		const IEntityFixer * lpFixer;

		IEntityFixer::GetFixer(/* parameters */);
	}
	Entity::GetTypeName(/* parameters */);
	IEntityFixer::GetTypeName(/* parameters */);
	IEntityFixer::Relocate(/* parameters */);
}

// CgsRegistry.cpp:233
void CgsSound::Playback::Registry::FixUp() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.cpp:247
		const Entity ** lppEntity;

		GetFirstEntity(/* parameters */);
	}
	{
		// CgsRegistry.cpp:249
		uint32_t lu32I;

	}
	{
		// CgsRegistry.cpp:259
		uintptr_t luTypeName;

		// CgsRegistry.cpp:262
		const IEntityFixer * lpFixer;

		IEntityFixer::GetFixer(/* parameters */);
		Entity::GetTypeName(/* parameters */);
		IEntityFixer::GetTypeName(/* parameters */);
		IEntityFixer::FixUp(/* parameters */);
	}
}

// CgsRegistry.cpp:270
void CgsSound::Playback::Registry::Unresolve() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.cpp:272
		const Entity ** lppEntity;

		GetFirstEntity(/* parameters */);
		{
			// CgsRegistry.cpp:273
			uint32_t lu32I;

		}
	}
	{
		// CgsRegistry.cpp:277
		const IEntityFixer * lpFixer;

		IEntityFixer::GetFixer(/* parameters */);
		Entity::GetTypeName(/* parameters */);
		IEntityFixer::GetTypeName(/* parameters */);
		IEntityFixer::Unresolve(/* parameters */);
	}
}

// CgsRegistry.cpp:41
void CgsSound::Playback::Registry::operator+=(const Registry &  lOther) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsRegistry.cpp:64
		const Entity ** lppOtherEntity;

		// CgsRegistry.cpp:67
		uint8_t * lpu8BaseAddress;

	}
	GetFirstEntity(/* parameters */);
	GetUsedStringTable(/* parameters */);
	GetStringTableStart(/* parameters */);
	GetAvailableStringTable(/* parameters */);
	GetStringTableStart(/* parameters */);
	GetUsedStringTable(/* parameters */);
	GetUsedStringTable(/* parameters */);
	GetStringTableStart(/* parameters */);
	{
		// CgsRegistry.cpp:77
		uint32_t lu32I;

		{
			// CgsRegistry.cpp:81
			const Entity * lpkEntity;

			AddEntity(/* parameters */);
			{
				GetFirstEntity(/* parameters */);
			}
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsRegistry.cpp:60
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		// CgsRegistry.cpp:56
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}


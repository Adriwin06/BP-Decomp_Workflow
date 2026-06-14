// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// CgsAttribSysVaultSlot.cpp:25
	const int32_t KI_MAX_VAULT_RESOURCE_NAME_LENGTH = 128;

}

// CgsAttribSysVaultSlot.cpp:50
void CgsAttribSys::VaultSlot::Prepare(LinearMalloc *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAttribSysVaultSlot.cpp:311
void CgsAttribSys::VaultSlot::GetVaultAllocator() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAttribSysVaultSlot.cpp:330
void CgsAttribSys::VaultSlot::SetVaultAllocator(CgsAttribSys::StreamedVaultAllocator *  lpVaultAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAttribSysVaultSlot.cpp:156
void CgsAttribSys::VaultSlot::DoLoad(const RegisterVaultRequest *  lpRegisterRequest, Attrib::IGarbageCollector *  lpGarbageCollector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysVaultSlot.cpp:165
		ResourceHandle lVaultResHandle;

		// CgsAttribSysVaultSlot.h:44
		typedef ResourcePtr<CgsResource::AttribSysVaultResource> VaultResourcePtr;

		// CgsAttribSysVaultSlot.cpp:168
		VaultResourcePtr lResPtr;

		// CgsAttribSysVaultSlot.cpp:172
		void * lpAllocedMem;

		// CgsAttribSysVaultSlot.cpp:175
		VaultSlot::AttribSysVault * lpVaultMem;

		CgsResource::ResourcePtr<CgsResource::AttribSysVaultResource>::ResourcePtr(/* parameters */);
		AttribSysMemoryManager::GetAttribSysAllocator(/* parameters */);
		AttribSysPackageAllocator::Malloc(/* parameters */);
		CgsResource::ResourcePtr<CgsResource::AttribSysVaultResource>::operator->(/* parameters */);
		{
			// CgsAttribSysVaultSlot.cpp:197
			uint8_t * lpau8BinData;

			CgsResource::ResourcePtr<CgsResource::AttribSysVaultResource>::operator->(/* parameters */);
			CgsResource::ResourcePtr<CgsResource::AttribSysVaultResource>::operator->(/* parameters */);
		}
		~ResourcePtr(/* parameters */);
	}
	CgsResource::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	StreamedVaultAllocator::GetSlotMemory(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		AttribSysPackageAllocator::GetUserPackageName(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsContainers::BitArray<24u>::IsBitSet(/* parameters */);
}

// CgsAttribSysVaultSlot.cpp:87
void CgsAttribSys::VaultSlot::RegisterVault(const RegisterVaultRequest *  lpRegisterRequest, Attrib::IGarbageCollector *  lpGarbageCollector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysVaultSlot.cpp:93
		ResourceHandle lVaultResHandle;

	}
	ContainsVaultResource(/* parameters */);
	ContainsVaultResource(/* parameters */);
	IncreaseRefCount(/* parameters */);
}

// CgsAttribSysVaultSlot.cpp:257
void CgsAttribSys::VaultSlot::DoUnload() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	ContainsStreamedVault(/* parameters */);
	StreamedVaultAllocator::ReleaseSlot(/* parameters */);
	DecreaseRefCount(/* parameters */);
	CgsResource::ID::SetHash(/* parameters */);
	CgsResource::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsAttribSysVaultSlot.cpp:127
void CgsAttribSys::VaultSlot::UnregisterVault(const UnregisterVaultRequest *  lpUnregisterRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	DecreaseRefCount(/* parameters */);
}

// CgsAttribSysVaultSlot.cpp:28

// CgsAttribSysPackageAllocator.h:32
namespace CgsAttribSys {
	// CgsAttribSysVaultArray.cpp:244
	extern CgsDev::StrStreamBase & operator<<(CgsDev::StrStreamBase &, const VaultArray &);

}

// CgsAttribSysVaultArray.cpp:43
void CgsAttribSys::VaultArray::Construct(Attrib::IGarbageCollector *  lpGarbageCollector) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsAttribSysVaultArray.cpp:73
void CgsAttribSys::VaultArray::Prepare(int32_t  liNumSlots, LinearMalloc *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysVaultArray.cpp:84
		int32_t liSlotArraySize;

	}
	{
		// CgsAttribSysVaultArray.cpp:95
		int32_t liI;

	}
	{
		// CgsAttribSysVaultArray.cpp:75
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	VaultSlot::Construct(/* parameters */);
}

// CgsAttribSysVaultArray.cpp:124
void CgsAttribSys::VaultArray::GetFreeSlotIndex(ResourceHandle  lVaultResourceHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysVaultArray.cpp:128
		int32_t liI;

		// CgsAttribSysVaultArray.cpp:130
		int32_t liFirstFreeSlotIndex;

	}
	{
		// CgsAttribSysVaultArray.cpp:126
		CgsDev::StrStream lStrStream;

	}
	VaultSlot::ContainsVaultResource(/* parameters */);
	GetNumSlots(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
	{
		// CgsAttribSysVaultArray.cpp:147
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// CgsAttribSysVaultArray.cpp:166
void CgsAttribSys::VaultArray::RegisterVault(RegisterVaultRequest *  lpRegisterRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysVaultArray.cpp:171
		int32_t liFreeSlotIndex;

		// CgsAttribSysVaultArray.cpp:174
		VaultSlot * lpSlot;

	}
	{
		// CgsAttribSysVaultArray.cpp:168
		CgsDev::StrStream lStrStream;

	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsResource::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	VaultSlot::GetRefCount(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
}

// CgsAttribSysVaultArray.cpp:198
void CgsAttribSys::VaultArray::UnregisterVault(UnregisterVaultRequest *  lpUnregisterRequest) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsAttribSysVaultArray.cpp:203
		int32_t liI;

	}
	GetNumSlots(/* parameters */);
	{
		// CgsAttribSysVaultArray.cpp:200
		CgsDev::StrStream lStrStream;

	}
	{
		// CgsAttribSysVaultArray.cpp:209
		VaultSlot * lpCurrentSlot;

		VaultSlot::ContainsVaultResource(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		// CgsAttribSysVaultArray.cpp:225
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsResource::operator<<(/* parameters */);
	VaultSlot::GetRefCount(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStream::StrStream(/* parameters */);
}


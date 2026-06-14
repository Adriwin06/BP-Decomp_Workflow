// CgsResourceImportHashTable.cpp:59
void CgsResource::ImportHashTable::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>::Clear(/* parameters */);
}

// CgsResourceImportHashTable.cpp:130
void CgsResource::ImportHashTable::GetDestAddress(ID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceImportHashTable.cpp:132
		ImportHashTableValue * lpValue;

		CgsContainers::LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>::FindEntry(/* parameters */);
	}
}

// CgsResourceImportHashTable.cpp:107
void CgsResource::ImportHashTable::GetTempAddress(ID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceImportHashTable.cpp:109
		ImportHashTableValue * lpValue;

		CgsContainers::LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>::FindEntry(/* parameters */);
	}
}

// CgsResourceImportHashTable.cpp:74
void CgsResource::ImportHashTable::AddEntry(ID  lId, void *  lpTempAddress, void *  lpDestAddress) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceImportHashTable.cpp:76
		ImportHashTableValue lValue;

		CgsContainers::LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>::AddEntry(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourceImportHashTable.cpp:43
void CgsResource::ImportHashTable::Initialize(uint64_t *  lpKeys, ImportHashTableValue *  lpValues, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>::Initialize(/* parameters */);
	CgsContainers::LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourceImportHashTable.cpp
void CgsResource::ImportHashTable::RemoveEntry(ID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>::RemoveEntry(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourceImportHashTable.cpp:154
void CgsResource::ImportHashTable::VerifyHashTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>::VerifyHashTable(/* parameters */);
	{
		CgsContainers::LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>::FindEntryPosition(/* parameters */);
		{
			CgsDev::StrStream::StrStream(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
			CgsDev::StrStreamBase::operator<<(/* parameters */);
		}
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntDecimal(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
	CgsDev::StrStreamBase::Append64IntHex(/* parameters */);
}


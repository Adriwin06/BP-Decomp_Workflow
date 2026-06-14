// CgsResourceHashTable.cpp:81
void CgsResource::HashTable::FindEntry(ID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourceHashTable.cpp:83
		uint64_t luHash;

		// CgsResourceHashTable.cpp:84
		int32_t * lpiValue;

		CgsContainers::LinearHashTable<std::uint64_t,std::int32_t>::FindEntry(/* parameters */);
	}
}

// CgsResourceHashTable.cpp:51
void CgsResource::HashTable::AddEntry(ID  lId, int32_t  liValue) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::LinearHashTable<std::uint64_t,std::int32_t>::AddEntry(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourceHashTable.cpp:36
void CgsResource::HashTable::Initialize(HashEntry *  lpEntries, int32_t  liLength) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::LinearHashTable<std::uint64_t,std::int32_t>::Initialize(/* parameters */);
	CgsContainers::LinearHashTable<std::uint64_t,std::int32_t>::Clear(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourceHashTable.cpp:66
void CgsResource::HashTable::RemoveEntry(ID  lId) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::LinearHashTable<std::uint64_t,std::int32_t>::RemoveEntry(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourceHashTable.cpp:106
void CgsResource::HashTable::VerifyHashTable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::LinearHashTable<std::uint64_t,std::int32_t>::VerifyHashTable(/* parameters */);
	{
		CgsContainers::LinearHashTable<std::uint64_t,std::int32_t>::FindEntryPosition(/* parameters */);
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


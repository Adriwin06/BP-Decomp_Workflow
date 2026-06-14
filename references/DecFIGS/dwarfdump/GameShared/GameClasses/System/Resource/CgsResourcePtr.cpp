// CgsResourceID.h:30
namespace CgsResource {
	// CgsResourcePtr.cpp:98
	extern CgsDev::StrStreamBase & operator<<(CgsDev::StrStreamBase &, const BaseResourcePtr &);

}

// CgsResourcePtr.cpp:40
void CgsResource::BaseResourcePtr::CreateFromHandle(const ResourceHandle *  lpSrcHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	RemoveFromCurrentList(/* parameters */);
	AddToNewList(/* parameters */);
}

// CgsResourcePtr.cpp:68
void CgsResource::BaseResourcePtr::Propogate() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsResourcePtr.cpp:76
		BaseResourcePtr * lpCurrent;

	}
	{
		// CgsResourcePtr.cpp:72
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsResourcePtr.cpp:28

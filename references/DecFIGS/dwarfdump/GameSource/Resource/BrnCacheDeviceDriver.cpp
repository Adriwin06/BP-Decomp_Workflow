// ps3mem.h:5
namespace BrnResource {
	// BrnCacheDeviceDriver.cpp:50
	const char[5] KAC_CACHEFILEMAGICNUMBER;

	// BrnCacheDeviceDriver.cpp:51
	const char[5] KAC_UNITCACHEFILEMAGICNUMBER;

	// BrnCacheDeviceDriver.cpp:54
	const int32_t KI_CACHEFILEVERSION = 1;

	// BrnCacheDeviceDriver.cpp:55
	const int32_t KI_HASH_DATA_LENGTH = 32;

	// BrnCacheDeviceDriver.cpp:57
	extern Mutex gCacheDeviceDebugMutex;

	// BrnCacheDeviceDriver.cpp:58
	extern LogChannelOutput gCacheDeviceLogChannelOutput;

}

// BrnCacheDeviceDriver.cpp:70
void BrnResource::CacheDeviceHandle::Construct(BrnResource::CacheDeviceDriver *  lpDriver, int32_t  liFileIndex, BrnResource::CacheDeviceHandle::EMode  leMode) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CacheDeviceDriver::GetFile(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}


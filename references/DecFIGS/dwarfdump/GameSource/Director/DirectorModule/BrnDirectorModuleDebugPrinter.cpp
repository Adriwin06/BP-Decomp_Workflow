// BrnDirectorModuleDebugPrinter.cpp:41
void BrnDirector::DebugPrinter::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDirectorModuleDebugPrinter.cpp:43
		DebugInterface lDebugInterface;

		// BrnDirectorModuleDebugPrinter.cpp:44
		Metrics lMetrics;

		// BrnDirectorModuleDebugPrinter.cpp:46
		float32_t lfTextSize;

		// BrnDirectorModuleDebugPrinter.cpp:47
		float32_t lfLineSize;

		// BrnDirectorModuleDebugPrinter.cpp:48
		RGBA lColour;

		// BrnDirectorModuleDebugPrinter.cpp:49
		RGBA lActiveColour;

		// BrnDirectorModuleDebugPrinter.cpp:50
		RGBA lInactiveColour;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
	}
	CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	CgsDev::DebugManager::ThreadSafeRelease(/* parameters */);
}

// BrnDirectorModuleDebugPrinter.cpp:74
void BrnDirector::DebugPrinter::ActualPrint(const char *  lpcMessage, RGBA  luColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDirectorModuleDebugPrinter.cpp:78
		DebugInterface lDebugInterface;

		CgsDev::DebugInterface::DebugInterface(/* parameters */);
		rw::math::vpu::Vector2::Vector2(/* parameters */);
		CgsDev::DebugInterface::~DebugInterface(/* parameters */);
	}
}

// BrnDirectorModuleDebugPrinter.cpp:94
void BrnDirector::DebugPrinter::ActualPrintName(const const BrnDirector::Moment &  lMoment, RGBA  luColour) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Print(/* parameters */);
}

// BrnDirectorModuleDebugPrinter.cpp:115
void BrnDirector::DebugPrinter::PrintActive(const char *  lpcMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Print(/* parameters */);
}

// BrnDirectorModuleDebugPrinter.cpp:131
void BrnDirector::DebugPrinter::PrintInactive(const char *  lpcMessage) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Print(/* parameters */);
}

// BrnDirectorModuleDebugPrinter.cpp:154
void BrnDirector::DebugLog::Clear() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>::Clear(/* parameters */);
	{
	}
	CgsContainers::Array<int32_t,20u>::Clear(/* parameters */);
}

// BrnDirectorModuleDebugPrinter.cpp:142
void BrnDirector::DebugLog::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	CgsContainers::ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>::Construct(/* parameters */);
	CgsContainers::Array<int32_t,20u>::Construct(/* parameters */);
}

// BrnDirectorModuleDebugPrinter.cpp:192
void BrnDirector::DebugLog::Print(const BrnDirector::DebugPrinter &  lDebugPrinter) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDirectorModuleDebugPrinter.cpp:195
		unsigned int luLoop;

		// BrnDirectorModuleDebugPrinter.cpp:196
		unsigned int luIndex;

		DebugPrinter::Print(/* parameters */);
	}
	CgsContainers::Array<int32_t,20u>::GetLength(/* parameters */);
	CgsContainers::Array<int32_t,20u>::operator[](/* parameters */);
	CgsContainers::ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>::operator[](/* parameters */);
	CgsContainers::ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>::operator[](/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnDirectorModuleDebugPrinter.cpp:164
void BrnDirector::DebugLog::Update(float32_t  lfTimestep) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDirectorModuleDebugPrinter.cpp:167
		unsigned int luLoop;

		// BrnDirectorModuleDebugPrinter.cpp:168
		unsigned int luIndex;

		CgsContainers::Array<int32_t,20u>::GetLength(/* parameters */);
		CgsContainers::Array<int32_t,20u>::operator[](/* parameters */);
		CgsContainers::ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>::operator[](/* parameters */);
		CgsContainers::ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>::operator[](/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsContainers::ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>::FreeObject(/* parameters */);
	CgsContainers::Array<int32_t,20u>::Erase(/* parameters */);
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
	{
		CgsDev::StrStream::StrStream(/* parameters */);
	}
}

// BrnDirectorModuleDebugPrinter.cpp:209
void BrnDirector::DebugLog::ActualAppend(const char *  lpcString, RGBA  lRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// BrnDirectorModuleDebugPrinter.cpp:211
		int liNewIndex;

		CgsContainers::ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>::AllocateObject(/* parameters */);
		CgsContainers::ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>::operator[](/* parameters */);
		CgsContainers::ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>::operator[](/* parameters */);
		CgsContainers::ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>::operator[](/* parameters */);
		CgsContainers::ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>::operator[](/* parameters */);
		CgsContainers::Array<int32_t,20u>::Append(/* parameters */);
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
		// BrnDirectorModuleDebugPrinter.cpp:216
		unsigned int luIndex;

		CgsContainers::Array<int32_t,20u>::operator[](/* parameters */);
		CgsContainers::ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>::FreeObject(/* parameters */);
		CgsContainers::Array<int32_t,20u>::Erase(/* parameters */);
		CgsContainers::ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>::AllocateObject(/* parameters */);
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
}

// BrnDirectorModuleDebugPrinter.cpp:237
void BrnDirector::DebugLog::ActualAppendName(const const BrnDirector::Moment &  lMoment, RGBA  lRGBA) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	Append(/* parameters */);
}


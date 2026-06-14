// CgsHardwareInit.h:34
namespace CgsSystem {
	// CgsHardwareInitPS3.cpp:67
	// Declaration
	extern void ExitCallback(uint64_t, uint64_t, void *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// CgsHardwareInitPS3.cpp:76
		using namespace CgsDev::Message;

	}

}

// CgsHardwareInitPS3.cpp:328
void CgsSystem::HardwareInit::GetFOPENDirectory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHardwareInitPS3.cpp:282
void CgsSystem::HardwareInit::GetAutoScriptToRun() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHardwareInitPS3.cpp:298
void CgsSystem::HardwareInit::GetTitleIDFromCommandLine() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHardwareInitPS3.cpp:313
void CgsSystem::HardwareInit::GetWorkingDirectory() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHardwareInitPS3.cpp:344
void CgsSystem::HardwareInit::IsHardwareWantingToShutdown() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHardwareInitPS3.cpp:359
void CgsSystem::HardwareInit::HasDetectedAutomatedTestingFile() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHardwareInitPS3.cpp:374
void CgsSystem::HardwareInit::IsGuideOnScreen() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHardwareInitPS3.cpp:389
void CgsSystem::HardwareInit::IsHardDiskAvailable() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsHardwareInitPS3.cpp:115
void CgsSystem::HardwareInit::InitializeHardware(int  lnArgc, char **  lapcArgv, const char *  lpcWorkingDirOveride, const char *  lpcFOpenDirOveride) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsHardwareInitPS3.cpp:117
		int32_t lnShutdownRequestResult;

		// CgsHardwareInitPS3.cpp:133
		JobThreadParameters jtp;

	}
	sys_spu_initialize(/* parameters */);
	EA::Jobs::JobThreadParameters::JobThreadParameters(/* parameters */);
	{
		// CgsHardwareInitPS3.cpp:201
		int32_t liParam;

	}
	CgsCore::StrCpy(/* parameters */);
	CgsCore::StrCpy(/* parameters */);
	{
		// CgsHardwareInitPS3.cpp:230
		std::FILE * fpFileHandle;

		// CgsHardwareInitPS3.cpp:231
		char[1024] lacFileName;

		CgsCore::StrCpy(/* parameters */);
		CgsCore::StrCat(/* parameters */);
	}
	{
		// CgsHardwareInitPS3.cpp:174
		int32_t lnIndex;

		// CgsHardwareInitPS3.cpp:175
		char[1024] laPossibleStem;

		CgsCore::StrCpy(/* parameters */);
		CgsCore::StrCat(/* parameters */);
		CgsCore::StrCat(/* parameters */);
		CgsCore::StrCat(/* parameters */);
	}
	{
		// CgsHardwareInitPS3.cpp:253
		int32_t liParam;

	}
	CgsCore::StrCat(/* parameters */);
	CgsCore::StrCat(/* parameters */);
}

// _built-in_
namespace :: {
	// CgsHardwareInitPS3.cpp:33
	const char * KAC_AUTOTESTFILENAME;

}

// CgsHardwareInitPS3.cpp:50
// CgsHardwareInitPS3.cpp:41
// CgsHardwareInitPS3.cpp:43
// CgsHardwareInitPS3.cpp:40
// CgsHardwareInitPS3.cpp:39
// CgsHardwareInitPS3.cpp:42
// CgsHardwareInitPS3.cpp:47
// CgsHardwareInitPS3.cpp:48
// CgsHardwareInitPS3.cpp:44
// CgsHardwareInitPS3.cpp:45
// CgsHardwareInitPS3.cpp:46

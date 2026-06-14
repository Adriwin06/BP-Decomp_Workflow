// CgsInputDevice.h:22
namespace CgsInput {
	// CgsInputManagerPS3.cpp:53
	extern void * InputAlloc(size_t);

	// CgsInputManagerPS3.cpp:62
	extern void InputFree(void *);

	// CgsInputManagerPS3.cpp:47
	extern rw::IResourceAllocator * sgpAllocator;

}

// CgsInputManagerPS3.cpp:130
void CgsInput::ManagerPS3::Destruct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputManagerPS3.cpp:132
		int32_t liIndex;

	}
}

// CgsInputManagerPS3.cpp:303
void CgsInput::ManagerPS3::GetConnectedDeviceType(CgsInput::Manager::EInputPort  lePort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsInputManagerPS3.cpp:359
void CgsInput::ManagerPS3::IsPaused() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsInputManagerPS3.cpp:663
void CgsInput::ManagerPS3::OnWheelConnected(int32_t  liIndex, const const CellPadInfo &  lPadInfo, lgDevDeviceDesc  lWheelDeviceDescriptor, int32_t  liWheelHandle) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsInputManagerPS3.cpp:600
void CgsInput::ManagerPS3::OnDeviceConnected(int32_t  liPortIndex, const const CellPadInfo &  lPadInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputManagerPS3.cpp:602
		CellPadCapabilityInfo lCapability;

	}
}

// CgsInputManagerPS3.cpp:692
void CgsInput::ManagerPS3::OnDeviceDisconnected(int32_t  liPortIndex, const const CellPadInfo &  lPadInfo) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsInputManagerPS3.cpp:441
void CgsInput::ManagerPS3::UpdateConnectedDevices() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputManagerPS3.cpp:443
		int32_t liIndex;

		// CgsInputManagerPS3.cpp:444
		CellPadInfo lPadInfo;

		// CgsInputManagerPS3.cpp:446
		int32_t liResult;

		// CgsInputManagerPS3.cpp:469
		int32_t liWheelIndex;

		// CgsInputManagerPS3.cpp:470
		int32_t liWheelHandle;

		// CgsInputManagerPS3.cpp:471
		bool lbWheelFound;

		// CgsInputManagerPS3.cpp:472
		lgDevDeviceDesc lWheelDeviceDescriptor;

	}
	{
		// CgsInputManagerPS3.cpp:533
		bool lbIntercepted;

	}
}

// CgsInputManagerPS3.cpp:419
void CgsInput::ManagerPS3::UnbindFromPort(CgsInput::DevicePS3Pad *  lpPad, CgsInput::Manager::EInputPort  lePort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsInputManagerPS3.cpp:382
void CgsInput::ManagerPS3::BindToPort(CgsInput::DevicePS3Pad *  lpPad, CgsInput::Manager::EInputPort  lePort) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// CgsInputManagerPS3.cpp:326
void CgsInput::ManagerPS3::SetPause(bool  lbPaused) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputManagerPS3.cpp:333
		int32_t liPad;

	}
}

// CgsInputManagerPS3.cpp:83
void CgsInput::ManagerPS3::Construct() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputManagerPS3.cpp:85
		int32_t liIndex;

		// CgsInputManagerPS3.cpp:88
		int32_t liResult;

	}
	{
		// CgsInputManagerPS3.cpp:90
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsInputManagerPS3.cpp:158
void CgsInput::ManagerPS3::Prepare(rw::IResourceAllocator *  lpAllocator) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputManagerPS3.cpp:160
		lgDevInitParams lParams;

		// CgsInputManagerPS3.cpp:175
		uint32_t luResult;

	}
	{
		// CgsInputManagerPS3.cpp:182
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
	}
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
	CgsDev::StrStreamBase::operator<<(/* parameters */);
}

// CgsInputManagerPS3.cpp:200
void CgsInput::ManagerPS3::Release() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputManagerPS3.cpp:202
		int32_t liIndex;

		// CgsInputManagerPS3.cpp:204
		int liResult;

	}
	{
		// CgsInputManagerPS3.cpp:205
		CgsDev::StrStream lStrStream;

		CgsDev::StrStream::StrStream(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
		CgsDev::StrStreamBase::operator<<(/* parameters */);
	}
}

// CgsInputManagerPS3.cpp:247
void CgsInput::ManagerPS3::Update() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// CgsInputManagerPS3.cpp:249
		int32_t liIndex;

		{
			// CgsInputManagerPS3.cpp:258
			CgsInput::Manager::EInputPort lePort;

		}
	}
}


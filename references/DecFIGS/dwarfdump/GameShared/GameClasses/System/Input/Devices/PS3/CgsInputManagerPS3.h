// CgsInputDevice.h:22
namespace CgsInput {
	// CgsInputManagerPS3.h:51
	const uint32_t KU_MANAGER_NUM_PADS = 4;

}

// CgsInputTypes.h:24
namespace CgsInput {
	// CgsInputManagerPS3.h:51
	const uint32_t KU_MANAGER_NUM_PADS = 4;

}

// CgsInputManagerPS3.h:67
struct CgsInput::PortPS3 {
	// CgsInputManagerPS3.h:69
	CgsInput::Device::EType meDeviceType;

	// CgsInputManagerPS3.h:70
	CellPadData mPadData;

	// CgsInputManagerPS3.h:71
	int32_t miWheelHandle;

	// CgsInputManagerPS3.h:72
	uint16_t mu16VendorID;

	// CgsInputManagerPS3.h:73
	uint16_t mu16ProductID;

	// CgsInputManagerPS3.h:74
	bool mbConnected;

	// CgsInputManagerPS3.h:75
	bool mbIntercepted;

	// CgsInputManagerPS3.h:76
	bool mbHasSensors;

	// CgsInputManagerPS3.h:77
	bool mbHasPressInfo;

	// CgsInputManagerPS3.h:78
	bool mbHasRumble;

	// CgsInputManagerPS3.h:79
	bool mbHasHighPrecision;

	// CgsInputManagerPS3.h:80
	bool mbWheelClassA;

}

// CgsInputManagerPS3.h:92
struct CgsInput::ManagerPS3 : public Manager {
private:
	// CgsInputManagerPS3.h:191
	PortPS3[4] maPorts;

	// CgsInputManagerPS3.h:192
	CgsInput::DevicePS3Pad *[4] mapBoundPads;

	// CgsInputManagerPS3.h:193
	int32_t miNumOfPads;

	// CgsInputManagerPS3.h:194
	int32_t miWheelPort;

	// CgsInputManagerPS3.h:195
	bool mbIsPaused;

public:
	// CgsInputManagerPS3.h:97
	void Construct();

	// CgsInputManagerPS3.h:101
	void Destruct();

	// CgsInputManagerPS3.h:106
	bool Prepare(rw::IResourceAllocator *);

	// CgsInputManagerPS3.h:110
	bool Release();

	// CgsInputManagerPS3.h:114
	void UpdateConnectedDevices();

	// CgsInputManagerPS3.h:117
	void Update();

	// CgsInputManagerPS3.h:130
	CgsInput::Device::EType GetConnectedDeviceType(CgsInput::Manager::EInputPort);

	// CgsInputManagerPS3.h:135
	void SetPause(bool);

	// CgsInputManagerPS3.h:141
	bool IsPaused();

	// CgsInputManagerPS3.h:148
	bool BindToPort(CgsInput::DevicePS3Pad *, CgsInput::Manager::EInputPort);

	// CgsInputManagerPS3.h:157
	void UnbindFromPort(CgsInput::DevicePS3Pad *, CgsInput::Manager::EInputPort);

protected:
	// CgsInputManagerPS3.h:169
	CellPadData * GetPadControls(CgsInput::Manager::EInputPort);

	// CgsInputManagerPS3.h:175
	void OnDeviceConnected(int32_t, const CellPadInfo &);

	// CgsInputManagerPS3.h:180
	void OnDeviceDisconnected(int32_t, const CellPadInfo &);

	// CgsInputManagerPS3.h:187
	void OnWheelConnected(int32_t, const CellPadInfo &, lgDevDeviceDesc, int32_t);

}


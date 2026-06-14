// CgsInputDevice.h:22
namespace CgsInput {
	struct DevicePS3Pad;

}

// CgsInputDevice.h:22
namespace CgsInput {
	// Declaration
	struct Device {
		// CgsInputDevice.h:48
		enum EType {
			E_NO_DEVICE_TYPE = 0,
			E_PAD_DEVICE_TYPE = 1,
			E_WHEEL_DEVICE_TYPE = 2,
			E_NUM_DEVICE_TYPES = 3,
		}

		// CgsInputDevice.h:57
		struct WheelFFSpring {
			// CgsInputDevice.h:59
			float32_t mfStrength;

			// CgsInputDevice.h:60
			float32_t mfOffset;

		public:
			// CgsInputDevice.h:63
			void Construct();

		}

	}

	struct DevicePS3Pad;

}

// CgsInputDevice.h:45
struct CgsInput::Device {
protected:
	// CgsInputDevice.h:104
	CgsInput::Device::EType meType;

	// CgsInputDevice.h:105
	CgsInput::Device::WheelFFSpring mWheelFFSpring;

public:
	// CgsInputDevice.h:67
	void Construct();

	// CgsInputDevice.h:71
	void Destruct();

	// CgsInputDevice.h:75
	bool Prepare();

	// CgsInputDevice.h:87
	void Release();

	// CgsInputDevice.h:91
	bool IsConnected();

	// CgsInputDevice.h:96
	CgsInput::Device::EType GetType();

	// CgsInputDevice.h:100
	void SetWheelFFSpring(const CgsInput::Device::WheelFFSpring &);

}

// CgsInputTypes.h:24
namespace CgsInput {
	// Declaration
	struct Device {
		// CgsInputDevice.h:48
		enum EType {
			E_NO_DEVICE_TYPE = 0,
			E_PAD_DEVICE_TYPE = 1,
			E_WHEEL_DEVICE_TYPE = 2,
			E_NUM_DEVICE_TYPES = 3,
		}

		// CgsInputDevice.h:57
		struct WheelFFSpring {
			// CgsInputDevice.h:59
			float32_t mfStrength;

			// CgsInputDevice.h:60
			float32_t mfOffset;

		public:
			// CgsInputDevice.h:63
			void Construct();

		}

	}

}

// CgsInputDevice.h:22
namespace CgsInput {
	// Declaration
	struct Device {
		// CgsInputDevice.h:48
		enum EType {
			E_NO_DEVICE_TYPE = 0,
			E_PAD_DEVICE_TYPE = 1,
			E_WHEEL_DEVICE_TYPE = 2,
			E_NUM_DEVICE_TYPES = 3,
		}

		// CgsInputDevice.h:57
		struct WheelFFSpring {
			// CgsInputDevice.h:59
			float32_t mfStrength;

			// CgsInputDevice.h:60
			float32_t mfOffset;

		public:
			// CgsInputDevice.h:63
			void Construct();

		}

	}

	struct PortPS3;

	struct ManagerPS3;

	struct DevicePS3Pad;

	struct InputPlayer;

	struct InputPort;

	struct InputPads;

}


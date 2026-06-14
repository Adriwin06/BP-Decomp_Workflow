// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:10
	namespace core {
		// manager.h:32
		namespace controller {
			// Declaration
			struct DeviceState {
				// devicestate.h:323
				enum ConnectedState {
					DISCONNECTED = 0,
					CONNECTED = 1,
				}

				// devicestate.h:330
				enum NetworkState {
					LOCAL = 0,
					NETWORKED = 1,
				}

			}

		}

	}

}

// devicestate.h:309
struct rw::core::controller::DeviceState {
	// devicestate.h:344
	extern const uint8_t MIN_BUTTON_VALUE;

	// devicestate.h:347
	extern const uint8_t MAX_BUTTON_VALUE = 255;

	// devicestate.h:350
	extern const int MIN_AXIS_VALUE = 4294966296;

	// devicestate.h:353
	extern const int MAX_AXIS_VALUE = 1000;

private:
	// devicestate.h:599
	unsigned int mDeviceID;

	// devicestate.h:602
	bool mHasSensorData;

	// devicestate.h:603
	bool mHasPressData;

	// devicestate.h:606
	rw::core::controller::DeviceState::ConnectedState mIsConnected;

	// devicestate.h:607
	rw::core::controller::DeviceState::NetworkState mIsNetworked;

	// devicestate.h:608
	unsigned int mTimestamp;

	// devicestate.h:609
	unsigned int mNumDigitalButtons;

	// devicestate.h:610
	unsigned int mNumAnalogButtons;

	// devicestate.h:611
	unsigned int mNumberAxis;

	// devicestate.h:617
	uint8_t * mDigitalButtonValues;

	// devicestate.h:618
	uint8_t * mButtonValues;

	// devicestate.h:619
	int * mAxisValues;

public:
	// devicestate.h:355
	void * operator new(size_t);

	// devicestate.h:356
	void operator delete(void *);

	// devicestate.h:360
	void DeviceState(unsigned int, rw::core::controller::DeviceState::NetworkState);

	// devicestate.h:363
	void ~DeviceState();

	// devicestate.h:372
	unsigned int GetID() const;

	// devicestate.h:376
	void HasSensorData(bool);

	// devicestate.h:379
	bool HasSensorData() const;

	// devicestate.h:382
	void HasPressData(bool);

	// devicestate.h:385
	bool HasPressData() const;

	// devicestate.h:392
	bool IsConnected() const;

	// devicestate.h:398
	bool IsNetworked() const;

	// devicestate.h:404
	unsigned int GetTimeStamp() const;

	// devicestate.h:415
	bool GetButtonPressed(unsigned int) const;

	// devicestate.h:427
	void GetAllButtonPressed(bool *, unsigned int) const;

	// devicestate.h:441
	uint8_t GetButtonValue(unsigned int) const;

	// devicestate.h:455
	void GetAllButtonValues(uint8_t *, unsigned int) const;

	// devicestate.h:466
	int GetAxisValue(unsigned int) const;

	// devicestate.h:481
	void GetAllAxisValues(int *, unsigned int) const;

	// devicestate.h:493
	unsigned int GetAscii(unsigned int) const;

	// devicestate.h:507
	unsigned int GetVirtKey(unsigned int) const;

	// devicestate.h:518
	unsigned int GetKeyState() const;

	// devicestate.h:524
	unsigned int GetNumberDigitalButtons() const;

	// devicestate.h:530
	unsigned int GetNumberAnalogButtons() const;

	// devicestate.h:536
	unsigned int GetNumberAxis() const;

	// devicestate.h:542
	void SetButtonValue(unsigned int, uint8_t);

	// devicestate.h:551
	void SetAllButtonValues(const uint8_t *, unsigned int);

	// devicestate.h:558
	void SetAxisValue(unsigned int, int);

	// devicestate.h:566
	void SetAllAxisValues(const int *, unsigned int);

	// devicestate.h:570
	void SetTimestamp(unsigned int);

	// devicestate.h:581
	void Reset(rw::core::controller::DeviceState::ConnectedState, unsigned int, unsigned int, unsigned int);

	// devicestate.h:587
	void DeviceState(const rw::core::controller::DeviceState &);

	// devicestate.h:594
	DeviceState & operator=(const rw::core::controller::DeviceState &);

}


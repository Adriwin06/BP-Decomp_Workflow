// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:10
	namespace core {
		// manager.h:32
		namespace controller {
			// Declaration
			struct DeviceInfo {
				// deviceinfo.h:40
				enum Type {
					PAD = 0,
					WHEEL = 1,
					MOUSE = 2,
					KEYBOARD = 3,
					UNKNOWN = 4,
				}

				// deviceinfo.h:53
				enum ButtonCapability {
					ANALOG = 1,
				}

			}

		}

	}

}

// deviceinfo.h:35
struct rw::core::controller::DeviceInfo {
private:
	// deviceinfo.h:105
	unsigned int mDeviceID;

	// deviceinfo.h:106
	rw::core::controller::DeviceInfo::Type mDeviceType;

	// deviceinfo.h:107
	unsigned int mNumberButtons;

	// deviceinfo.h:108
	unsigned int mNumberAxis;

	// deviceinfo.h:109
	rw::core::controller::DeviceInfo::ButtonCapability * mButtonCapabilities;

public:
	// deviceinfo.h:63
	unsigned int GetID() const;

	// deviceinfo.h:69
	rw::core::controller::DeviceInfo::Type GetType() const;

	// deviceinfo.h:75
	unsigned int GetNumberButtons() const;

	// deviceinfo.h:81
	unsigned int GetNumberAxis() const;

	// deviceinfo.h:90
	rw::core::controller::DeviceInfo::ButtonCapability GetButtonCapability(unsigned int) const;

private:
	// deviceinfo.h:93
	void DeviceInfo(unsigned int);

	// deviceinfo.h:94
	void ~DeviceInfo();

	// deviceinfo.h:95
	void * operator new(size_t);

	// deviceinfo.h:96
	void operator delete(void *);

	// deviceinfo.h:99
	void DeviceInfo(const rw::core::controller::DeviceInfo &);

	// deviceinfo.h:100
	DeviceInfo & operator=(const rw::core::controller::DeviceInfo &);

	// deviceinfo.h:102
	void SetButtonCapability(unsigned int, rw::core::controller::DeviceInfo::ButtonCapability);

	// deviceinfo.h:103
	void Reset(rw::core::controller::DeviceInfo::Type, unsigned int, unsigned int);

}


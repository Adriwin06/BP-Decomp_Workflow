// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:10
	namespace core {
		// manager.h:32
		namespace controller {
			// Declaration
			struct DeviceEffect {
				// deviceeffect.h:41
				struct Info {
					// deviceeffect.h:54
					enum PlayControl {
						STOP = 0,
						START = 1,
						START_IF_PLAYING = 2,
					}

					// deviceeffect.h:61
					int MagnitudeLeft;

					// deviceeffect.h:62
					int MagnitudeRight;

					// deviceeffect.h:63
					rw::core::controller::DeviceEffect::Info::PlayControl StartPlaying;

				}

			}

		}

	}

}

// deviceeffect.h:35
struct rw::core::controller::DeviceEffect {
private:
	// deviceeffect.h:99
	unsigned int mDeviceID;

	// deviceeffect.h:100
	bool mPlaying;

	// deviceeffect.h:101
	int mMagnitudeLeft;

	// deviceeffect.h:102
	int mMagnitudeRight;

public:
	// deviceeffect.h:67
	void DeviceEffect(unsigned int);

	// deviceeffect.h:68
	void ~DeviceEffect();

	// deviceeffect.h:70
	void * operator new(size_t);

	// deviceeffect.h:71
	void operator delete(void *);

	// deviceeffect.h:76
	bool IsPlaying() const;

	// deviceeffect.h:82
	void Start();

	// deviceeffect.h:88
	void Stop();

	// deviceeffect.h:96
	void SetInfo(const rw::core::controller::DeviceEffect::Info *);

}


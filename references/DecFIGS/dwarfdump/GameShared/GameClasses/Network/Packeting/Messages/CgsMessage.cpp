// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsMessage.cpp:61
	extern uint16_t TranslateFrame50HzTo60Hz(uint16_t, uint16_t, uint16_t);

	// CgsMessage.cpp:154
	extern uint16_t TranslateFrame60HzTo50Hz(uint16_t, uint16_t, uint16_t);

	// CgsMessage.cpp:250
	extern float_t GetTimeDiffWrapped16(uint16_t, uint16_t, int32_t, bool, bool);

	// CgsMessage.cpp:33
	const int32_t KI_MAX_PACKED_MESSAGE_SIZE = 1400;

	// CgsMessage.cpp:34
	const uint16_t KU16_WRAP_FRAMES = 65535;

	// CgsMessage.cpp:35
	const uint16_t KU16_HALF_WRAP_FRAMES = 32768;

	// CgsMessage.cpp:36
	const float_t KF_TIME_STEP_50HZ;

	// CgsMessage.cpp:37
	const float_t KF_TIME_STEP_60HZ;

	// CgsMessage.cpp:39
	const int32_t KI_MIN_YEAR;

	// CgsMessage.cpp:40
	const int32_t KI_MAX_YEAR = 5000;

	// CgsMessage.cpp:41
	const int32_t KI_MIN_MONTH = 1;

	// CgsMessage.cpp:42
	const int32_t KI_MAX_MONTH = 12;

	// CgsMessage.cpp:43
	const int32_t KI_MIN_DAY = 1;

	// CgsMessage.cpp:44
	const int32_t KI_MAX_DAY = 31;

	// CgsMessage.cpp:45
	const int32_t KI_MIN_HOUR;

	// CgsMessage.cpp:46
	const int32_t KI_MAX_HOUR = 23;

	// CgsMessage.cpp:47
	const int32_t KI_MIN_MINUTE;

	// CgsMessage.cpp:48
	const int32_t KI_MAX_MINUTE = 59;

	// CgsMessage.cpp:49
	const int32_t KI_MIN_SECOND;

	// CgsMessage.cpp:50
	const int32_t KI_MAX_SECOND = 59;

}


// CgsServerInterfaceStructureInterface.h:27
namespace CgsNetwork {
	// CgsOldFrameConversionFunctions.cpp:46
	uint16_t OLDTranslateFrame50HzTo60Hz(uint16_t, uint16_t, uint16_t);

	// CgsOldFrameConversionFunctions.cpp:130
	uint16_t OLDTranslateFrame60HzTo50Hz(uint16_t, uint16_t, uint16_t);

	// CgsOldFrameConversionFunctions.cpp:226
	float_t OLDGetTimeDiffWrapped16(uint16_t, uint16_t, int32_t, bool, bool);

	// CgsOldFrameConversionFunctions.cpp:28
	const float_t KF_OLD_TIME_STEP_50HZ;

	// CgsOldFrameConversionFunctions.cpp:29
	const float_t KF_OLD_TIME_STEP_60HZ;

	// CgsOldFrameConversionFunctions.cpp:30
	const float_t KF_OLD_WRAP_TIME_50HZ;

	// CgsOldFrameConversionFunctions.cpp:31
	const float_t KF_OLD_WRAP_TIME_60HZ;

}


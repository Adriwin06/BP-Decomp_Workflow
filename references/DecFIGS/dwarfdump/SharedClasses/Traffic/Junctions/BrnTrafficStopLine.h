// BrnTrafficStopLine.h:36
struct BrnTraffic::StopLine {
private:
	// BrnTrafficStopLine.h:74
	uint16_t muParamFixed;

public:
	// BrnTrafficStopLine.h:41
	uint16_t GetParameterAlongSection() const;

	// BrnTrafficStopLine.h:45
	uint16_t GetSegmentAlongSection() const;

	// BrnTrafficStopLine.h:51
	uint16_t ConvertToFixed(float32_t);

	// BrnTrafficStopLine.h:56
	float32_t ConvertToFloat(uint16_t);

	// BrnTrafficStopLine.h:61
	void EndianSwap();

}


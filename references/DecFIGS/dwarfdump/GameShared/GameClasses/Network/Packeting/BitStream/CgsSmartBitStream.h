// CgsSmartBitStream.h:119
extern const int32_t KI_BITSIZE_BYTE = 8;

// CgsSmartBitStream.h:120
extern const int32_t KI_BITSIZE_INT = 64;

// CgsSmartBitStream.h:39
struct CgsNetwork::SmartBitStream : public BitStream {
private:
	// CgsSmartBitStream.h:119
	extern const int32_t KI_BITSIZE_BYTE = 8;

	// CgsSmartBitStream.h:120
	extern const int32_t KI_BITSIZE_INT = 64;

public:
	// CgsSmartBitStream.h:46
	bool AddQuantisedFloat(float, float, float, int32_t);

	// CgsSmartBitStream.h:53
	bool AddQuantisedFloat(float, float, float, float);

	// CgsSmartBitStream.h:60
	void GetQuantisedFloat(float *, float, float, int32_t);

	// CgsSmartBitStream.h:67
	void GetQuantisedFloat(float *, float, float, float);

	// CgsSmartBitStream.h:73
	bool AddQuantisedInt(int32_t, int32_t, int32_t);

	// CgsSmartBitStream.h:79
	void GetQuantisedInt(int32_t *, int32_t, int32_t);

	// CgsSmartBitStream.h:84
	int32_t GetQuantisedInt(int32_t, int32_t);

	// CgsSmartBitStream.h:90
	bool AddByte(uint8_t);

	// CgsSmartBitStream.h:93
	uint8_t GetByte();

	// CgsSmartBitStream.h:97
	bool AddUInt(uint64_t);

	// CgsSmartBitStream.h:100
	uint64_t GetUInt();

	// CgsSmartBitStream.h:107
	bool AddRawData(const char *, int32_t);

	// CgsSmartBitStream.h:112
	void GetRawData(char *, int32_t);

}


// CgsSet.h:28
namespace CgsContainers {
	// CgsBitArray.h:167
	extern uint32_t _CountLeadingZeros64(uint64_t);

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<32u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 4;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 1;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[1] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<32u> *, const BitArray<32u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<32u> *, const BitArray<32u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<32u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<32u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<30u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 4;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 1;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[1] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<30u> *, const BitArray<30u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<30u> *, const BitArray<30u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<30u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<30u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<8u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 1;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 1;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[1] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<8u> *, const BitArray<8u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<8u> *, const BitArray<8u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<8u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<8u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<298u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 38;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 5;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[5] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<298u> *, const BitArray<298u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<298u> *, const BitArray<298u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<298u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<298u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<35u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 5;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 1;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[1] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<35u> *, const BitArray<35u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<35u> *, const BitArray<35u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<35u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<35u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<20u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 3;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 1;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[1] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<20u> *, const BitArray<20u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<20u> *, const BitArray<20u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<20u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<20u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<28u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 4;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 1;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[1] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<28u> *, const BitArray<28u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<28u> *, const BitArray<28u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<28u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<28u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:129
extern const int32_t KI_INVALID_BITINDEX = 4294967295;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 4;

// CgsBitArray.h:133
extern const uint32_t kuNumberOfBitFields = 1;

// CgsBitArray.h:135
extern const uint32_t kuNumberOfBitsInBitField = 64;

// CgsBitArray.h:136
extern const uint32_t kuBitsInBitFieldMask = 63;

// CgsBitArray.h:129
extern const int32_t KI_INVALID_BITINDEX;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 1;

// CgsBitArray.h:135
extern const uint32_t kuNumberOfBitsInBitField;

// CgsBitArray.h:136
extern const uint32_t kuBitsInBitFieldMask;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 1250;

// CgsBitArray.h:133
extern const uint32_t kuNumberOfBitFields = 157;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 631;

// CgsBitArray.h:133
extern const uint32_t kuNumberOfBitFields = 79;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 38;

// CgsBitArray.h:133
extern const uint32_t kuNumberOfBitFields = 5;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 8;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 37500;

// CgsBitArray.h:133
extern const uint32_t kuNumberOfBitFields = 4688;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 32;

// CgsBitArray.h:133
extern const uint32_t kuNumberOfBitFields = 4;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 5;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 12;

// CgsBitArray.h:133
extern const uint32_t kuNumberOfBitFields = 2;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 3;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 72;

// CgsBitArray.h:133
extern const uint32_t kuNumberOfBitFields = 9;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 632;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 576;

// CgsBitArray.h:133
extern const uint32_t kuNumberOfBitFields = 72;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 50;

// CgsBitArray.h:133
extern const uint32_t kuNumberOfBitFields = 7;

// CgsFlagSet.h:29
namespace CgsContainers {
	// CgsBitArray.h:167
	extern uint32_t _CountLeadingZeros64(uint64_t);

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<2u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 1;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 1;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[1] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<2u> *, const BitArray<2u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<2u> *, const BitArray<2u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<2u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<2u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<64u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 8;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 1;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[1] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<64u> *, const BitArray<64u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<64u> *, const BitArray<64u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<64u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<64u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<300000u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 37500;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 4688;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[4688] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<300000u> *, const BitArray<300000u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<300000u> *, const BitArray<300000u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<300000u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<300000u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<256u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 32;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 4;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[4] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<256u> *, const BitArray<256u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<256u> *, const BitArray<256u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<256u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<256u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<60u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 8;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 1;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[1] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<60u> *, const BitArray<60u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<60u> *, const BitArray<60u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<60u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<60u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<6u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 1;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 1;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[1] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<6u> *, const BitArray<6u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<6u> *, const BitArray<6u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<6u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<6u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<400u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 50;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 7;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[7] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<400u> *, const BitArray<400u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<400u> *, const BitArray<400u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<400u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<400u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<50u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 7;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 1;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[1] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<50u> *, const BitArray<50u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<50u> *, const BitArray<50u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<50u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<50u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<96u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 12;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 2;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[2] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<96u> *, const BitArray<96u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<96u> *, const BitArray<96u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<96u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<96u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<15u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 2;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 1;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[1] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<15u> *, const BitArray<15u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<15u> *, const BitArray<15u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<15u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<15u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<9u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 2;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 1;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[1] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<9u> *, const BitArray<9u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<9u> *, const BitArray<9u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<9u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<9u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<5400u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 675;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 85;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[85] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<5400u> *, const BitArray<5400u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<5400u> *, const BitArray<5400u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<5400u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<5400u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<100u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 13;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 2;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[2] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<100u> *, const BitArray<100u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<100u> *, const BitArray<100u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<100u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<100u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<500u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 63;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 8;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[8] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<500u> *, const BitArray<500u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<500u> *, const BitArray<500u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<500u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<500u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<512u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 64;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 8;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[8] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<512u> *, const BitArray<512u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<512u> *, const BitArray<512u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<512u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<512u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<10u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 2;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 1;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[1] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<10u> *, const BitArray<10u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<10u> *, const BitArray<10u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<10u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<10u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<7u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 1;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 1;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[1] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<7u> *, const BitArray<7u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<7u> *, const BitArray<7u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<7u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<7u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<46u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 6;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 1;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[1] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<46u> *, const BitArray<46u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<46u> *, const BitArray<46u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<46u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<46u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 7;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 25;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 9;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 2;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 675;

// CgsBitArray.h:133
extern const uint32_t kuNumberOfBitFields = 85;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 13;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 63;

// CgsBitArray.h:133
extern const uint32_t kuNumberOfBitFields = 8;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 64;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 76;

// CgsBitArray.h:133
extern const uint32_t kuNumberOfBitFields = 10;

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 6;

// CgsBitArray.h:29
namespace CgsContainers {
	struct BitArray<2u>;

	struct Array<BrnProgression::InterestData,8u>;

	struct RingBuffer<rw::math::vpu::Vector3>;

	struct FixedRingBuffer<rw::math::vpu::Vector3,256>;

	struct Set<CgsID,512u>;

	struct RingBuffer<std::uint16_t>;

	struct FixedRingBuffer<std::uint16_t,64>;

	struct FastBitArray<2000>;

	struct Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u>;

	struct Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>;

	struct FlagSet<std::int8_t>;

	struct Array<BrnAI::AISectionId,16u>;

	struct Array<std::uint32_t,8u>;

	struct Array<BrnGameState::CheckpointData,16u>;

	struct Array<BrnGameState::StartLocation,8u>;

	struct Array<BrnGameState::OpponentData,7u>;

	struct FastBitArray<2>;

	struct BitArray<35u>;

	struct Array<BrnGameState::BufferedNewHighScore,5u>;

	struct BitArray<64u>;

	struct Set<CgsID,5u>;

	struct Set<CgsID,11u>;

	struct Set<CgsID,14u>;

	struct Array<CgsID,2000u>;

	struct BitArray<300000u>;

	struct Array<BrnProgression::MugshotInfo,30u>;

	struct BitArray<30u>;

	struct BitArray<256u>;

	struct BitArray<60u>;

	struct BitArray<6u>;

	struct Array<CgsID,8u>;

	struct Array<BrnResource::VehicleListEntry::ELiveryType,8u>;

	struct Array<BrnProgression::ProfileEvent,175u>;

	struct Array<float32_t,16u>;

	struct Array<CgsNetwork::NetworkPlayerID,8u>;

	struct FastBitArray<60>;

	struct BaseLinkedListNode;

	struct BaseLinkedList;

	struct LocklessQueue<CgsFileSystem::DiskCacheCommand>;

	struct LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LocklessQueue<char*>;

	struct RingBuffer<CgsFileSystem::CacheDebugEntry>;

	struct FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>;

	struct LinkedList<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >;

	struct HashTable<std::uint32_t,const CgsUnicode::CgsUtf8*,13u>;

	struct HashTableElement<std::uint32_t,const CgsUnicode::CgsUtf8*>;

	struct LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>;

	struct LinkedList<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>;

	struct LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

	struct Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>;

	struct Array<BrnDirector::AllVehicleData::NearestCarInfo,8u>;

	struct Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>;

	struct Array<BrnGui::OverheadSignScore,32u>;

	struct Array<uint16_t,25u>;

	struct FastBitArray<128>;

	struct BitArray<298u>;

	struct BitArray<32u>;

	struct Array<EGlobalRaceCarIndex,34u>;

	struct Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>;

	struct Set<uint16_t,8u>;

	struct DictEntry;

	struct LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct HashTable<uint32_t,renderengine::TextureState*,25u>;

	struct HashTableElement<uint32_t,renderengine::TextureState*>;

	struct HashTableElementData<uint32_t,renderengine::TextureState*>;

	struct Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>;

	struct ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>;

	struct Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>;

	struct Array<uint16_t,256u>;

	struct Array<uint16_t,32u>;

	struct Array<BrnGameState::LandmarkIndex,16u>;

	struct BitArray<7u>;

	struct ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>;

	struct Array<CgsID,80u>;

	struct FastBitArray<120>;

	struct FastBitArray<19>;

	struct ObjectPool<BrnGameState::ChallengeManager::CarLeapingData,7,int32_t>;

	struct FixedRingBuffer<uint16_t,8>;

	struct Array<BrnGameState::CrashModeScoring::RecentCrash,64u>;

	struct RingBuffer<CgsID>;

	struct FixedRingBuffer<CgsID,8>;

	struct Array<EActiveRaceCarIndex,7u>;

	struct ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>;

	struct Array<BrnGameState::GameModeState*,8u>;

	struct FastBitArray<8>;

	struct BitArray<46u>;

	struct Array<std::uint16_t,8u>;

	struct Array<BrnProgression::Race,64u>;

	struct Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u>;

	struct Array<BrnGameState::GridPositionAndScoreData,8u>;

	struct Array<rw::math::vpu::Vector3,5120u>;

	struct Array<uint32_t,228u>;

	// CgsBitArray.h:167
	extern uint32_t _CountLeadingZeros64(uint64_t);

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<92u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 12;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 2;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[2] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<92u> *, const BitArray<92u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<92u> *, const BitArray<92u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<92u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<92u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<3u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 1;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 1;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[1] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<3u> *, const BitArray<3u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<3u> *, const BitArray<3u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<3u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<3u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsHash.h:24
namespace CgsContainers {
	// CgsBitArray.h:167
	extern uint32_t _CountLeadingZeros64(uint64_t);

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<601u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 76;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 10;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[10] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<601u> *, const BitArray<601u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<601u> *, const BitArray<601u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<601u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<601u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:29
namespace CgsContainers {
	struct FlagSet<std::int8_t>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<8u>;

	struct FastBitArray<140>;

	struct BitArray<2u>;

	struct FastBitArray<2000>;

	struct Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>;

	struct Array<BrnAI::AISectionId,16u>;

	struct Array<std::uint32_t,8u>;

	struct Array<BrnGameState::CheckpointData,16u>;

	struct Array<BrnGameState::StartLocation,8u>;

	struct Array<BrnGameState::OpponentData,7u>;

	struct FastBitArray<2>;

	struct BitArray<35u>;

	struct Array<BrnGameState::BufferedNewHighScore,5u>;

	struct BitArray<64u>;

	struct BitArray<60u>;

	struct Array<CgsID,8u>;

	struct Array<BrnResource::VehicleListEntry::ELiveryType,8u>;

	struct Array<CgsNetwork::NetworkPlayerID,8u>;

	struct FastBitArray<60>;

	struct CgsHash;

	struct BaseLinkedListNode;

	struct BaseLinkedList;

	struct LocklessQueue<CgsFileSystem::DiskCacheCommand>;

	struct LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LocklessQueue<char*>;

	struct RingBuffer<CgsFileSystem::CacheDebugEntry>;

	struct FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>;

	struct LinkedList<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >;

	struct HashTable<std::uint32_t,const CgsUnicode::CgsUtf8*,13u>;

	struct HashTableElement<std::uint32_t,const CgsUnicode::CgsUtf8*>;

	struct LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>;

	struct LinkedList<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>;

	struct LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>;

	struct BitArray<298u>;

	struct ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>;

	struct Array<EGlobalRaceCarIndex,34u>;

	struct Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>;

	struct Array<BrnNetwork::HullToActivateInfo,7u>;

	struct BitArray<7u>;

	struct RingBuffer<BrnNetwork::TrafficManager::TrafficHash>;

	struct FixedRingBuffer<BrnNetwork::TrafficManager::TrafficHash,128>;

	struct FifoQueue<BrnNetwork::StatsRequestEvent,32>;

	struct FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent,1>;

	struct Array<BrnNetwork::LiveRevengeRelationship,250u>;

	struct FastBitArray<10>;

	struct BitArray<50u>;

	struct BitArray<10u>;

	struct FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent,14>;

	struct FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2>;

	// CgsBitArray.h:167
	extern uint32_t _CountLeadingZeros64(uint64_t);

}

// CgsBitArray.h:29
namespace CgsContainers {
	struct BitArray<2u>;

	struct FastBitArray<140>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct FastBitArray<2000>;

	struct Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>;

	struct FlagSet<std::int8_t>;

	struct Array<BrnAI::AISectionId,16u>;

	struct FastBitArray<2>;

	struct BitArray<35u>;

	struct Array<BrnGameState::BufferedNewHighScore,5u>;

	struct BitArray<64u>;

	struct Array<CgsNetwork::NetworkPlayerID,8u>;

	struct FastBitArray<60>;

	struct LocklessQueue<CgsFileSystem::DiskCacheCommand>;

	struct LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LocklessQueue<char*>;

	struct RingBuffer<CgsFileSystem::CacheDebugEntry>;

	struct FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>;

	struct BitArray<8u>;

	struct BitArray<298u>;

	struct ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>;

	struct Array<EGlobalRaceCarIndex,34u>;

	struct Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>;

	struct Array<BrnNetwork::HullToActivateInfo,7u>;

	struct BitArray<7u>;

	struct RingBuffer<BrnNetwork::TrafficManager::TrafficHash>;

	struct FixedRingBuffer<BrnNetwork::TrafficManager::TrafficHash,128>;

	struct FifoQueue<BrnNetwork::StatsRequestEvent,32>;

	struct FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent,1>;

	struct Array<BrnNetwork::LiveRevengeRelationship,250u>;

	struct FastBitArray<10>;

	struct BitArray<50u>;

	struct BitArray<10u>;

	struct FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent,14>;

	struct FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2>;

	// CgsBitArray.h:167
	extern uint32_t _CountLeadingZeros64(uint64_t);

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<1u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 1;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 1;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[1] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<1u> *, const BitArray<1u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<1u> *, const BitArray<1u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<1u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<1u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsRingBuffer.h:24
namespace CgsContainers {
	// CgsBitArray.h:167
	extern uint32_t _CountLeadingZeros64(uint64_t);

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<4u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 1;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 1;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[1] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<4u> *, const BitArray<4u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<4u> *, const BitArray<4u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<4u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<4u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:29
namespace CgsContainers {
	struct BitArray<2u>;

	struct FlagSet<std::int8_t>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct BitArray<298u>;

	struct DictEntry;

	struct DictionaryBase;

	struct Dictionary<ICE::ICETakeData>;

	struct ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>;

	struct SimpleDictionary<ICE::ICETakeData>;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<72u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 9;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 2;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[2] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<72u> *, const BitArray<72u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<72u> *, const BitArray<72u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<72u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<72u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<25u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 4;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 1;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[1] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<25u> *, const BitArray<25u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<25u> *, const BitArray<25u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<25u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<25u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<10000u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 1250;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 157;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[157] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<10000u> *, const BitArray<10000u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<10000u> *, const BitArray<10000u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<10000u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<10000u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<5048u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 631;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 79;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[79] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<5048u> *, const BitArray<5048u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<5048u> *, const BitArray<5048u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<5048u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<5048u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<576u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 72;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 9;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[9] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<576u> *, const BitArray<576u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<576u> *, const BitArray<576u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<576u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<576u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<5051u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 632;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 79;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[79] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<5051u> *, const BitArray<5051u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<5051u> *, const BitArray<5051u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<5051u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<5051u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<4608u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 576;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 72;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[72] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<4608u> *, const BitArray<4608u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<4608u> *, const BitArray<4608u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<4608u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<4608u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<24u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 3;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 1;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[1] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<24u> *, const BitArray<24u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<24u> *, const BitArray<24u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<24u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<24u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsFifoQueue.h:24
namespace CgsContainers {
	// CgsBitArray.h:167
	extern uint32_t _CountLeadingZeros64(uint64_t);

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<1024u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 128;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 16;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[16] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<1024u> *, const BitArray<1024u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<1024u> *, const BitArray<1024u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<1024u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<1024u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:132
extern const uint32_t kuPaddedBytes = 128;

// CgsBitArray.h:133
extern const uint32_t kuNumberOfBitFields = 16;

// CgsBitArray.h:50
struct CgsContainers::BitArray<200u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 25;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 4;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[4] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<200u> *, const BitArray<200u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<200u> *, const BitArray<200u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<200u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<200u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:29
namespace CgsContainers {
	struct BitArray<10000u>;

	struct ObjectPool<CgsSceneManager::SceneManagerEntity,10000,std::int32_t>;

	struct BitArray<5048u>;

	struct ObjectPool<CgsSceneManager::VolumeInstance,5048,std::int32_t>;

	struct IndexedHashTableElementData<CgsSceneManager::EntityId,std::uint16_t>;

	struct IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t>;

	struct IndexedHashTableElement<CgsSceneManager::EntityId,std::uint16_t>;

	struct IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::EntityId, std::uint16_t>,std::uint16_t>;

	struct IndexedHashTable<CgsSceneManager::EntityId,std::uint16_t,541u>;

	struct IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId,std::uint32_t>;

	struct IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t>;

	struct IndexedHashTableElement<CgsSceneManager::VolumeInstanceId,std::uint32_t>;

	struct IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeInstanceId, std::uint32_t>,std::uint16_t>;

	struct IndexedHashTable<CgsSceneManager::VolumeInstanceId,std::uint32_t,509u>;

	struct BitArray<4608u>;

	struct ObjectPool<CgsSceneManager::VolumeSlot,4608,std::int32_t>;

	struct ObjectPool<CgsSceneManager::VolumeManagerVolume,5048,std::int32_t>;

	struct IndexedHashTableElementData<CgsSceneManager::VolumeId,std::uint32_t>;

	struct IndexedLinkedListNode<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t>;

	struct IndexedHashTableElement<CgsSceneManager::VolumeId,std::uint32_t>;

	struct IndexedLinkedList<CgsContainers::IndexedHashTableElementData<CgsSceneManager::VolumeId, std::uint32_t>,std::uint16_t>;

	struct IndexedHashTable<CgsSceneManager::VolumeId,std::uint32_t,227u>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct FlagSet<std::int8_t>;

	struct BitArray<298u>;

	struct IndexedLinkedListNode<CgsSceneManager::SpatialPartitionEntity,std::uint16_t>;

	struct BitArray<5051u>;

	struct Array<CgsSceneManager::LineTestIntersection,256u>;

	struct Array<std::uint16_t,16384u>;

	struct ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>;

	struct IndexedLinkedList<CgsSceneManager::SpatialPartitionEntity,std::uint16_t>;

	struct IndexedPool<CgsSceneManager::LooseOctree::LooseOctreeNodeAllocation,std::uint16_t>;

	struct BitArray<16u>;

	// CgsBitArray.h:167
	extern uint32_t _CountLeadingZeros64(uint64_t);

}

// CgsBitArray.h:50
struct CgsContainers::BitArray<16u> {
	// CgsBitArray.h:129
	extern const int32_t KI_INVALID_BITINDEX;

private:
	// CgsBitArray.h:132
	extern const uint32_t kuPaddedBytes = 2;

	// CgsBitArray.h:133
	extern const uint32_t kuNumberOfBitFields = 1;

	// CgsBitArray.h:135
	extern const uint32_t kuNumberOfBitsInBitField;

	// CgsBitArray.h:136
	extern const uint32_t kuBitsInBitFieldMask;

	// CgsBitArray.h:138
	uint64_t[1] maxBits;

public:
	// CgsBitArray.h:342
	void Construct();

	// CgsBitArray.h:360
	void Destruct();

	// CgsBitArray.h:378
	bool Prepare();

	// CgsBitArray.h:397
	void Release();

	// CgsBitArray.h:191
	const bool IsBitSet(unsigned int) const;

	// CgsBitArray.h:210
	void SetBit(unsigned int);

	// CgsBitArray.h:229
	void UnSetBit(unsigned int);

	// CgsBitArray.h:250
	void SetBitToBool(unsigned int, bool);

	// CgsBitArray.h:306
	void SetAll();

	// CgsBitArray.h:324
	void UnSetAll();

	// CgsBitArray.h:415
	bool IsZero() const;

	// CgsBitArray.h:276
	int32_t FindFirstZero() const;

	// CgsBitArray.h:445
	void ANDArrays(const BitArray<16u> *, const BitArray<16u> *);

	// CgsBitArray.h:491
	void ORArrays(const BitArray<16u> *, const BitArray<16u> *);

	// CgsBitArray.h:541
	int32_t GetFirstNonZeroBit() const;

	// CgsBitArray.h:588
	int32_t GetFirstZeroBit() const;

	// CgsBitArray.h:634
	int32_t GetNextNonZeroBit(unsigned int) const;

	// CgsBitArray.h:713
	int32_t GetNextZeroBit(unsigned int) const;

	// CgsBitArray.h:739
	uint32_t GetCapacity() const;

	// CgsBitArray.h:754
	bool operator==(const BitArray<16u> &) const;

	// CgsBitArray.h:768
	bool operator!=(const BitArray<16u> &) const;

	// CgsBitArray.h:822
	uint32_t CountSetBits() const;

private:
	// CgsBitArray.h:785
	int32_t GetZeroBitInInt(long long int) const;

}

// CgsBitArray.h:29
namespace CgsContainers {
	struct BitArray<8u>;

	struct FlagSet<std::int8_t>;

	struct IndexedLinkedList<CgsResource::HeapEntry,std::uint16_t>;

	struct IndexedLinkedListNode<CgsResource::HeapEntry,std::uint16_t>;

	struct BaseLinkedListNode;

	struct BaseLinkedList;

	struct LinearHashTable<std::uint64_t,std::int32_t>;

	struct LinearHashEntry<std::uint64_t,std::int32_t>;

	struct BasePriorityQueue;

	struct CgsHash;

	struct LocklessQueue<CgsFileSystem::DiskCacheCommand>;

	struct LinearHashTable<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LinearHashEntry<volatile std::uint32_t,CgsFileSystem::DiskCacheEntry* volatile>;

	struct LocklessQueue<char*>;

	struct RingBuffer<CgsFileSystem::CacheDebugEntry>;

	struct FixedRingBuffer<CgsFileSystem::CacheDebugEntry,4>;

	struct IndexedPool<CgsFileSystem::PhysicalPS3Handle,std::int8_t>;

	struct FixedIndexedPool<CgsFileSystem::PhysicalPS3Handle,16,std::int8_t>;

	struct IndexedPool8<CgsFileSystem::PhysicalPS3Handle,16>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct IndexedLinkedList<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>;

	struct IndexedLinkedListNode<CgsMemory::IndexedNodeHeapEntry,std::uint16_t>;

	struct FifoQueue<CgsResource::RunningLoad,4>;

	struct PriorityQueue<CgsResource::Events::LoadBundleRequest,128u>;

	struct FixedLengthPriorityQueue<CgsResource::Events::LoadBundleRequest,128u,128>;

	struct PriorityQueue<CgsResource::Events::UnloadBundleRequest,128u>;

	struct FixedLengthPriorityQueue<CgsResource::Events::UnloadBundleRequest,128u,128>;

	struct LinearSOAHashTable<std::uint64_t,CgsResource::ImportHashTableValue>;

	struct FifoQueue<CgsResource::Events::CreatePoolRequest,128>;

	struct FifoQueue<CgsResource::Events::AllocateResourceListRequest,4>;

	struct IndexedPool<CgsResource::ResourceModule::PendingFileResponse,std::int8_t>;

	struct FixedIndexedPool<CgsResource::ResourceModule::PendingFileResponse,16,std::int8_t>;

	struct IndexedPool8<CgsResource::ResourceModule::PendingFileResponse,16>;

	struct BitArray<2u>;

	struct Array<BrnProgression::InterestData,8u>;

	struct RingBuffer<rw::math::vpu::Vector3>;

	struct FixedRingBuffer<rw::math::vpu::Vector3,256>;

	struct Set<CgsID,512u>;

	struct RingBuffer<std::uint16_t>;

	struct FixedRingBuffer<std::uint16_t,64>;

	struct FastBitArray<2000>;

	struct Array<BrnGameState::GameStateModuleIO::SetUpAllEventStartsInterface::EventStart,175u>;

	struct Array<BrnGameState::GameStateModuleIO::SpecificGameModeEventInterface::Event,175u>;

	struct Array<BrnAI::AISectionId,16u>;

	struct Array<std::uint32_t,8u>;

	struct Array<BrnGameState::CheckpointData,16u>;

	struct Array<BrnGameState::StartLocation,8u>;

	struct Array<BrnGameState::OpponentData,7u>;

	struct FastBitArray<2>;

	struct BitArray<35u>;

	struct Array<BrnGameState::BufferedNewHighScore,5u>;

	struct BitArray<64u>;

	struct Set<CgsID,5u>;

	struct Set<CgsID,11u>;

	struct Set<CgsID,14u>;

	struct Array<CgsID,2000u>;

	struct BitArray<300000u>;

	struct Array<BrnProgression::MugshotInfo,30u>;

	struct BitArray<30u>;

	struct BitArray<256u>;

	struct BitArray<60u>;

	struct BitArray<6u>;

	struct Array<CgsID,8u>;

	struct Array<BrnResource::VehicleListEntry::ELiveryType,8u>;

	struct Array<BrnProgression::ProfileEvent,175u>;

	struct Array<CgsNetwork::NetworkPlayerID,8u>;

	struct FastBitArray<60>;

	struct LinkedList<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<std::uint32_t, const CgsUnicode::CgsUtf8*> >;

	struct HashTable<std::uint32_t,const CgsUnicode::CgsUtf8*,13u>;

	struct HashTableElement<std::uint32_t,const CgsUnicode::CgsUtf8*>;

	struct LinkedListNode<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>;

	struct LinkedList<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*>;

	struct LinkedListHelper<CgsContainers::HashTableElement<std::uint32_t, const CgsUnicode::CgsUtf8*>*,1024u>;

	struct Array<BrnTraffic::BrnTrafficIO::TrafficDirectorEntity,32u>;

	struct Array<BrnDirector::AllVehicleData::NearestCarInfo,8u>;

	struct Array<BrnTraffic::BrnTrafficIO::VehicleScoreData,20u>;

	struct Array<BrnGui::OverheadSignScore,32u>;

	struct Array<uint16_t,25u>;

	struct FastBitArray<128>;

	struct Array<BrnDirector::HookNameStringWrapper,100u>;

	struct BitArray<32u>;

	struct BitArray<298u>;

	struct FastBitArray<601>;

	struct Array<EGlobalRaceCarIndex,34u>;

	struct Array<BrnWorld::RaceCarEntityModuleIO::CarsInTheRaceData,8u>;

	struct BitArray<20u>;

	struct ObjectPool<BrnDirector::DebugLog::LogString,20,int32_t>;

	struct Array<int32_t,20u>;

	struct Set<uint16_t,8u>;

	struct BitArray<28u>;

	struct DictEntry;

	struct LinkedList<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct LinkedListNode<CgsContainers::HashTableElementData<uint32_t, renderengine::TextureState*> >;

	struct HashTable<uint32_t,renderengine::TextureState*,25u>;

	struct HashTableElement<uint32_t,renderengine::TextureState*>;

	struct HashTableElementData<uint32_t,renderengine::TextureState*>;

	struct Array<CgsContainers::HashTableElement<uint32_t, renderengine::TextureState*>,256u>;

	struct ReadOnlyObjectCache<CgsGeometric::PolygonSoupSpacialNode>;

	struct BitArray<50u>;

	struct BitArray<96u>;

	struct RingBuffer<rw::math::vpu::Matrix44Affine>;

	struct FixedRingBuffer<rw::math::vpu::Matrix44Affine,4>;

	struct BitArray<10u>;

	struct Array<BrnGameState::GameStateModuleIO::SoundTriggerAction,16u>;

	struct Stack<CgsGraphics::Im2dTransform,33>;

	struct Stack<uint16_t,2>;

	struct Array<rw::math::vpu::Vector3,5120u>;

	struct Array<uint32_t,228u>;

	struct Array<BrnNetwork::LiveRevengeRelationship,250u>;

	struct FastBitArray<10>;

	struct Array<uint16_t,256u>;

	struct Array<uint16_t,32u>;

	struct Array<BrnGameState::LandmarkIndex,16u>;

	struct BitArray<7u>;

	struct ObjectPool<BrnGameState::ChallengeManager::StoredLeapingData,7,int32_t>;

	struct Array<CgsID,80u>;

	struct FastBitArray<120>;

	struct FastBitArray<19>;

	struct FixedRingBuffer<uint16_t,8>;

	struct Array<BrnGameState::CrashModeScoring::RecentCrash,64u>;

	struct RingBuffer<CgsID>;

	struct FixedRingBuffer<CgsID,8>;

	struct Array<EActiveRaceCarIndex,7u>;

	struct ObjectPool<BrnGameState::HUDMessageLogic::BufferedCrashingCar,8,int32_t>;

	struct BitArray<46u>;

	struct Array<std::uint16_t,8u>;

	struct Array<BrnProgression::Race,64u>;

	struct Array<BrnGameState::GameStateModuleIO::TrophyUnlockAction,12u>;

	struct FastBitArray<140>;

	struct Array<BrnNetwork::HullToActivateInfo,7u>;

	struct RingBuffer<BrnNetwork::TrafficManager::TrafficHash>;

	struct FixedRingBuffer<BrnNetwork::TrafficManager::TrafficHash,128>;

	struct FifoQueue<BrnNetwork::StatsRequestEvent,32>;

	struct FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInSelectScoreboardEvent,1>;

	struct FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkOutRecvRoadRulesPBEvent,14>;

	struct FifoQueue<BrnNetwork::BrnNetworkModuleIO::NetworkInRoadRulesPBEvent,2>;

}


// CgsFastBitArray.h:51
struct CgsContainers::FastBitArray<601> {
	// CgsFastBitArray.h:54
	extern const uint64_t KU_PADDEDBYTES = 76;

	// CgsFastBitArray.h:55
	extern const uint64_t KU_NUMBEROFBITFIELDS = 10;

	// CgsFastBitArray.h:56
	extern const uint64_t KU_NUMBEROFBITSINBITFIELD;

	// CgsFastBitArray.h:57
	extern const uint64_t KU_BITSINBITFIELDMASK;

private:
	// CgsFastBitArray.h:155
	uint64_t[10] maxBits;

	// Unknown accessibility
	struct Iterator;

public:
	// CgsFastBitArray.h:378
	void Construct();

	// CgsFastBitArray.h:385
	void Destruct();

	// CgsFastBitArray.h:391
	const bool IsBitSet(int) const;

	// CgsFastBitArray.h:410
	const bool IsBitSet(const FastBitArray<601>::Iterator &) const;

	// CgsFastBitArray.h:426
	void SetBit(int);

	// CgsFastBitArray.h:437
	void SetBit(const FastBitArray<601>::Iterator &);

	// CgsFastBitArray.h:447
	void UnSetBit(int);

	// CgsFastBitArray.h:458
	void UnSetBit(const FastBitArray<601>::Iterator &);

	// CgsFastBitArray.h:468
	void SetBitTo(int, bool);

	// CgsFastBitArray.h:482
	void SetAll();

	// CgsFastBitArray.h:509
	void UnSetAll();

	// CgsFastBitArray.h:519
	bool IsZero() const;

	// CgsFastBitArray.h:134
	FastBitArray<601>::Iterator Begin() const;

	// CgsFastBitArray.h:138
	int32_t End() const;

	// CgsFastBitArray.h:534
	void SetInverse(const FastBitArray<601> &);

	// CgsFastBitArray.h:545
	void SetAnd(const FastBitArray<601> &, const FastBitArray<601> &);

	// CgsFastBitArray.h:556
	void SetOr(const FastBitArray<601> &, const FastBitArray<601> &);

}

// CgsFastBitArray.h:60
struct CgsContainers::FastBitArray<601>::Iterator {
private:
	// CgsFastBitArray.h:91
	int32_t miIndex;

	// CgsFastBitArray.h:92
	const uint64_t * mpxSourceMasks;

	// CgsFastBitArray.h:93
	uint64_t mxMask;

public:
	// CgsFastBitArray.h:174
	void Iterator();

	// CgsFastBitArray.h:189
	void Iterator(const uint64_t *);

	// CgsFastBitArray.h:211
	void ConstructOrphan(int);

	// CgsFastBitArray.h:230
	int32_t GetIndex() const;

	// CgsFastBitArray.h:245
	Iterator & operator++();

	// CgsFastBitArray.h:340
	bool operator==(int) const;

	// CgsFastBitArray.h:354
	bool operator!=(int) const;

	// CgsFastBitArray.h:369
	uint64_t GetMask() const;

}

// CgsFastBitArray.h:54
extern const uint64_t KU_PADDEDBYTES = 250;

// CgsFastBitArray.h:55
extern const uint64_t KU_NUMBEROFBITFIELDS = 32;

// CgsFastBitArray.h:56
extern const uint64_t KU_NUMBEROFBITSINBITFIELD;

// CgsFastBitArray.h:57
extern const uint64_t KU_BITSINBITFIELDMASK;

// CgsFastBitArray.h:54
extern const uint64_t KU_PADDEDBYTES = 4;

// CgsFastBitArray.h:55
extern const uint64_t KU_NUMBEROFBITFIELDS = 1;

// CgsFastBitArray.h:54
extern const uint64_t KU_PADDEDBYTES = 8;

// CgsFastBitArray.h:54
extern const uint64_t KU_PADDEDBYTES = 16;

// CgsFastBitArray.h:55
extern const uint64_t KU_NUMBEROFBITFIELDS = 2;

// CgsFastBitArray.h:54
extern const uint64_t KU_PADDEDBYTES = 76;

// CgsFastBitArray.h:55
extern const uint64_t KU_NUMBEROFBITFIELDS = 10;

// CgsFastBitArray.h:51
struct CgsContainers::FastBitArray<2000> {
	// CgsFastBitArray.h:54
	extern const uint64_t KU_PADDEDBYTES = 250;

	// CgsFastBitArray.h:55
	extern const uint64_t KU_NUMBEROFBITFIELDS = 32;

	// CgsFastBitArray.h:56
	extern const uint64_t KU_NUMBEROFBITSINBITFIELD;

	// CgsFastBitArray.h:57
	extern const uint64_t KU_BITSINBITFIELDMASK;

private:
	// CgsFastBitArray.h:155
	uint64_t[32] maxBits;

	// Unknown accessibility
	struct Iterator;

public:
	// CgsFastBitArray.h:378
	void Construct();

	// CgsFastBitArray.h:385
	void Destruct();

	// CgsFastBitArray.h:391
	const bool IsBitSet(int) const;

	// CgsFastBitArray.h:410
	const bool IsBitSet(const FastBitArray<2000>::Iterator &) const;

	// CgsFastBitArray.h:426
	void SetBit(int);

	// CgsFastBitArray.h:437
	void SetBit(const FastBitArray<2000>::Iterator &);

	// CgsFastBitArray.h:447
	void UnSetBit(int);

	// CgsFastBitArray.h:458
	void UnSetBit(const FastBitArray<2000>::Iterator &);

	// CgsFastBitArray.h:468
	void SetBitTo(int, bool);

	// CgsFastBitArray.h:482
	void SetAll();

	// CgsFastBitArray.h:509
	void UnSetAll();

	// CgsFastBitArray.h:519
	bool IsZero() const;

	// CgsFastBitArray.h:134
	FastBitArray<2000>::Iterator Begin() const;

	// CgsFastBitArray.h:138
	int32_t End() const;

	// CgsFastBitArray.h:534
	void SetInverse(const FastBitArray<2000> &);

	// CgsFastBitArray.h:545
	void SetAnd(const FastBitArray<2000> &, const FastBitArray<2000> &);

	// CgsFastBitArray.h:556
	void SetOr(const FastBitArray<2000> &, const FastBitArray<2000> &);

}

// CgsFastBitArray.h:51
struct CgsContainers::FastBitArray<60> {
	// CgsFastBitArray.h:54
	extern const uint64_t KU_PADDEDBYTES = 8;

	// CgsFastBitArray.h:55
	extern const uint64_t KU_NUMBEROFBITFIELDS = 1;

	// CgsFastBitArray.h:56
	extern const uint64_t KU_NUMBEROFBITSINBITFIELD;

	// CgsFastBitArray.h:57
	extern const uint64_t KU_BITSINBITFIELDMASK;

private:
	// CgsFastBitArray.h:155
	uint64_t[1] maxBits;

	// Unknown accessibility
	struct Iterator;

public:
	// CgsFastBitArray.h:378
	void Construct();

	// CgsFastBitArray.h:385
	void Destruct();

	// CgsFastBitArray.h:391
	const bool IsBitSet(int) const;

	// CgsFastBitArray.h:410
	const bool IsBitSet(const FastBitArray<60>::Iterator &) const;

	// CgsFastBitArray.h:426
	void SetBit(int);

	// CgsFastBitArray.h:437
	void SetBit(const FastBitArray<60>::Iterator &);

	// CgsFastBitArray.h:447
	void UnSetBit(int);

	// CgsFastBitArray.h:458
	void UnSetBit(const FastBitArray<60>::Iterator &);

	// CgsFastBitArray.h:468
	void SetBitTo(int, bool);

	// CgsFastBitArray.h:482
	void SetAll();

	// CgsFastBitArray.h:509
	void UnSetAll();

	// CgsFastBitArray.h:519
	bool IsZero() const;

	// CgsFastBitArray.h:134
	FastBitArray<60>::Iterator Begin() const;

	// CgsFastBitArray.h:138
	int32_t End() const;

	// CgsFastBitArray.h:534
	void SetInverse(const FastBitArray<60> &);

	// CgsFastBitArray.h:545
	void SetAnd(const FastBitArray<60> &, const FastBitArray<60> &);

	// CgsFastBitArray.h:556
	void SetOr(const FastBitArray<60> &, const FastBitArray<60> &);

}

// CgsFastBitArray.h:51
struct CgsContainers::FastBitArray<128> {
	// CgsFastBitArray.h:54
	extern const uint64_t KU_PADDEDBYTES = 16;

	// CgsFastBitArray.h:55
	extern const uint64_t KU_NUMBEROFBITFIELDS = 2;

	// CgsFastBitArray.h:56
	extern const uint64_t KU_NUMBEROFBITSINBITFIELD;

	// CgsFastBitArray.h:57
	extern const uint64_t KU_BITSINBITFIELDMASK;

private:
	// CgsFastBitArray.h:155
	uint64_t[2] maxBits;

	// Unknown accessibility
	struct Iterator;

public:
	// CgsFastBitArray.h:378
	void Construct();

	// CgsFastBitArray.h:385
	void Destruct();

	// CgsFastBitArray.h:391
	const bool IsBitSet(int) const;

	// CgsFastBitArray.h:410
	const bool IsBitSet(const FastBitArray<128>::Iterator &) const;

	// CgsFastBitArray.h:426
	void SetBit(int);

	// CgsFastBitArray.h:437
	void SetBit(const FastBitArray<128>::Iterator &);

	// CgsFastBitArray.h:447
	void UnSetBit(int);

	// CgsFastBitArray.h:458
	void UnSetBit(const FastBitArray<128>::Iterator &);

	// CgsFastBitArray.h:468
	void SetBitTo(int, bool);

	// CgsFastBitArray.h:482
	void SetAll();

	// CgsFastBitArray.h:509
	void UnSetAll();

	// CgsFastBitArray.h:519
	bool IsZero() const;

	// CgsFastBitArray.h:134
	FastBitArray<128>::Iterator Begin() const;

	// CgsFastBitArray.h:138
	int32_t End() const;

	// CgsFastBitArray.h:534
	void SetInverse(const FastBitArray<128> &);

	// CgsFastBitArray.h:545
	void SetAnd(const FastBitArray<128> &, const FastBitArray<128> &);

	// CgsFastBitArray.h:556
	void SetOr(const FastBitArray<128> &, const FastBitArray<128> &);

}

// CgsFastBitArray.h:51
struct CgsContainers::FastBitArray<1024> {
	// CgsFastBitArray.h:54
	extern const uint64_t KU_PADDEDBYTES = 128;

	// CgsFastBitArray.h:55
	extern const uint64_t KU_NUMBEROFBITFIELDS = 16;

	// CgsFastBitArray.h:56
	extern const uint64_t KU_NUMBEROFBITSINBITFIELD;

	// CgsFastBitArray.h:57
	extern const uint64_t KU_BITSINBITFIELDMASK;

private:
	// CgsFastBitArray.h:155
	uint64_t[16] maxBits;

	// Unknown accessibility
	struct Iterator;

public:
	// CgsFastBitArray.h:378
	void Construct();

	// CgsFastBitArray.h:385
	void Destruct();

	// CgsFastBitArray.h:391
	const bool IsBitSet(int) const;

	// CgsFastBitArray.h:410
	const bool IsBitSet(const FastBitArray<1024>::Iterator &) const;

	// CgsFastBitArray.h:426
	void SetBit(int);

	// CgsFastBitArray.h:437
	void SetBit(const FastBitArray<1024>::Iterator &);

	// CgsFastBitArray.h:447
	void UnSetBit(int);

	// CgsFastBitArray.h:458
	void UnSetBit(const FastBitArray<1024>::Iterator &);

	// CgsFastBitArray.h:468
	void SetBitTo(int, bool);

	// CgsFastBitArray.h:482
	void SetAll();

	// CgsFastBitArray.h:509
	void UnSetAll();

	// CgsFastBitArray.h:519
	bool IsZero() const;

	// CgsFastBitArray.h:134
	FastBitArray<1024>::Iterator Begin() const;

	// CgsFastBitArray.h:138
	int32_t End() const;

	// CgsFastBitArray.h:534
	void SetInverse(const FastBitArray<1024> &);

	// CgsFastBitArray.h:545
	void SetAnd(const FastBitArray<1024> &, const FastBitArray<1024> &);

	// CgsFastBitArray.h:556
	void SetOr(const FastBitArray<1024> &, const FastBitArray<1024> &);

}

// CgsFastBitArray.h:60
struct CgsContainers::FastBitArray<128>::Iterator {
private:
	// CgsFastBitArray.h:91
	int32_t miIndex;

	// CgsFastBitArray.h:92
	const uint64_t * mpxSourceMasks;

	// CgsFastBitArray.h:93
	uint64_t mxMask;

public:
	// CgsFastBitArray.h:174
	void Iterator();

	// CgsFastBitArray.h:189
	void Iterator(const uint64_t *);

	// CgsFastBitArray.h:211
	void ConstructOrphan(int);

	// CgsFastBitArray.h:230
	int32_t GetIndex() const;

	// CgsFastBitArray.h:245
	Iterator & operator++();

	// CgsFastBitArray.h:340
	bool operator==(int) const;

	// CgsFastBitArray.h:354
	bool operator!=(int) const;

	// CgsFastBitArray.h:369
	uint64_t GetMask() const;

}

// CgsFastBitArray.h:51
struct CgsContainers::FastBitArray<10> {
	// CgsFastBitArray.h:54
	extern const uint64_t KU_PADDEDBYTES = 2;

	// CgsFastBitArray.h:55
	extern const uint64_t KU_NUMBEROFBITFIELDS = 1;

	// CgsFastBitArray.h:56
	extern const uint64_t KU_NUMBEROFBITSINBITFIELD;

	// CgsFastBitArray.h:57
	extern const uint64_t KU_BITSINBITFIELDMASK;

private:
	// CgsFastBitArray.h:155
	uint64_t[1] maxBits;

	// Unknown accessibility
	struct Iterator;

public:
	// CgsFastBitArray.h:378
	void Construct();

	// CgsFastBitArray.h:385
	void Destruct();

	// CgsFastBitArray.h:391
	const bool IsBitSet(int) const;

	// CgsFastBitArray.h:410
	const bool IsBitSet(const FastBitArray<10>::Iterator &) const;

	// CgsFastBitArray.h:426
	void SetBit(int);

	// CgsFastBitArray.h:437
	void SetBit(const FastBitArray<10>::Iterator &);

	// CgsFastBitArray.h:447
	void UnSetBit(int);

	// CgsFastBitArray.h:458
	void UnSetBit(const FastBitArray<10>::Iterator &);

	// CgsFastBitArray.h:468
	void SetBitTo(int, bool);

	// CgsFastBitArray.h:482
	void SetAll();

	// CgsFastBitArray.h:509
	void UnSetAll();

	// CgsFastBitArray.h:519
	bool IsZero() const;

	// CgsFastBitArray.h:134
	FastBitArray<10>::Iterator Begin() const;

	// CgsFastBitArray.h:138
	int32_t End() const;

	// CgsFastBitArray.h:534
	void SetInverse(const FastBitArray<10> &);

	// CgsFastBitArray.h:545
	void SetAnd(const FastBitArray<10> &, const FastBitArray<10> &);

	// CgsFastBitArray.h:556
	void SetOr(const FastBitArray<10> &, const FastBitArray<10> &);

}

// CgsFastBitArray.h:51
struct CgsContainers::FastBitArray<120> {
	// CgsFastBitArray.h:54
	extern const uint64_t KU_PADDEDBYTES = 15;

	// CgsFastBitArray.h:55
	extern const uint64_t KU_NUMBEROFBITFIELDS = 2;

	// CgsFastBitArray.h:56
	extern const uint64_t KU_NUMBEROFBITSINBITFIELD;

	// CgsFastBitArray.h:57
	extern const uint64_t KU_BITSINBITFIELDMASK;

private:
	// CgsFastBitArray.h:155
	uint64_t[2] maxBits;

	// Unknown accessibility
	struct Iterator;

public:
	// CgsFastBitArray.h:378
	void Construct();

	// CgsFastBitArray.h:385
	void Destruct();

	// CgsFastBitArray.h:391
	const bool IsBitSet(int) const;

	// CgsFastBitArray.h:410
	const bool IsBitSet(const FastBitArray<120>::Iterator &) const;

	// CgsFastBitArray.h:426
	void SetBit(int);

	// CgsFastBitArray.h:437
	void SetBit(const FastBitArray<120>::Iterator &);

	// CgsFastBitArray.h:447
	void UnSetBit(int);

	// CgsFastBitArray.h:458
	void UnSetBit(const FastBitArray<120>::Iterator &);

	// CgsFastBitArray.h:468
	void SetBitTo(int, bool);

	// CgsFastBitArray.h:482
	void SetAll();

	// CgsFastBitArray.h:509
	void UnSetAll();

	// CgsFastBitArray.h:519
	bool IsZero() const;

	// CgsFastBitArray.h:134
	FastBitArray<120>::Iterator Begin() const;

	// CgsFastBitArray.h:138
	int32_t End() const;

	// CgsFastBitArray.h:534
	void SetInverse(const FastBitArray<120> &);

	// CgsFastBitArray.h:545
	void SetAnd(const FastBitArray<120> &, const FastBitArray<120> &);

	// CgsFastBitArray.h:556
	void SetOr(const FastBitArray<120> &, const FastBitArray<120> &);

}

// CgsFastBitArray.h:51
struct CgsContainers::FastBitArray<19> {
	// CgsFastBitArray.h:54
	extern const uint64_t KU_PADDEDBYTES = 3;

	// CgsFastBitArray.h:55
	extern const uint64_t KU_NUMBEROFBITFIELDS = 1;

	// CgsFastBitArray.h:56
	extern const uint64_t KU_NUMBEROFBITSINBITFIELD;

	// CgsFastBitArray.h:57
	extern const uint64_t KU_BITSINBITFIELDMASK;

private:
	// CgsFastBitArray.h:155
	uint64_t[1] maxBits;

	// Unknown accessibility
	struct Iterator;

public:
	// CgsFastBitArray.h:378
	void Construct();

	// CgsFastBitArray.h:385
	void Destruct();

	// CgsFastBitArray.h:391
	const bool IsBitSet(int) const;

	// CgsFastBitArray.h:410
	const bool IsBitSet(const FastBitArray<19>::Iterator &) const;

	// CgsFastBitArray.h:426
	void SetBit(int);

	// CgsFastBitArray.h:437
	void SetBit(const FastBitArray<19>::Iterator &);

	// CgsFastBitArray.h:447
	void UnSetBit(int);

	// CgsFastBitArray.h:458
	void UnSetBit(const FastBitArray<19>::Iterator &);

	// CgsFastBitArray.h:468
	void SetBitTo(int, bool);

	// CgsFastBitArray.h:482
	void SetAll();

	// CgsFastBitArray.h:509
	void UnSetAll();

	// CgsFastBitArray.h:519
	bool IsZero() const;

	// CgsFastBitArray.h:134
	FastBitArray<19>::Iterator Begin() const;

	// CgsFastBitArray.h:138
	int32_t End() const;

	// CgsFastBitArray.h:534
	void SetInverse(const FastBitArray<19> &);

	// CgsFastBitArray.h:545
	void SetAnd(const FastBitArray<19> &, const FastBitArray<19> &);

	// CgsFastBitArray.h:556
	void SetOr(const FastBitArray<19> &, const FastBitArray<19> &);

}

// CgsFastBitArray.h:51
struct CgsContainers::FastBitArray<140> {
	// CgsFastBitArray.h:54
	extern const uint64_t KU_PADDEDBYTES = 18;

	// CgsFastBitArray.h:55
	extern const uint64_t KU_NUMBEROFBITFIELDS = 3;

	// CgsFastBitArray.h:56
	extern const uint64_t KU_NUMBEROFBITSINBITFIELD;

	// CgsFastBitArray.h:57
	extern const uint64_t KU_BITSINBITFIELDMASK;

private:
	// CgsFastBitArray.h:155
	uint64_t[3] maxBits;

	// Unknown accessibility
	struct Iterator;

public:
	// CgsFastBitArray.h:378
	void Construct();

	// CgsFastBitArray.h:385
	void Destruct();

	// CgsFastBitArray.h:391
	const bool IsBitSet(int) const;

	// CgsFastBitArray.h:410
	const bool IsBitSet(const FastBitArray<140>::Iterator &) const;

	// CgsFastBitArray.h:426
	void SetBit(int);

	// CgsFastBitArray.h:437
	void SetBit(const FastBitArray<140>::Iterator &);

	// CgsFastBitArray.h:447
	void UnSetBit(int);

	// CgsFastBitArray.h:458
	void UnSetBit(const FastBitArray<140>::Iterator &);

	// CgsFastBitArray.h:468
	void SetBitTo(int, bool);

	// CgsFastBitArray.h:482
	void SetAll();

	// CgsFastBitArray.h:509
	void UnSetAll();

	// CgsFastBitArray.h:519
	bool IsZero() const;

	// CgsFastBitArray.h:134
	FastBitArray<140>::Iterator Begin() const;

	// CgsFastBitArray.h:138
	int32_t End() const;

	// CgsFastBitArray.h:534
	void SetInverse(const FastBitArray<140> &);

	// CgsFastBitArray.h:545
	void SetAnd(const FastBitArray<140> &, const FastBitArray<140> &);

	// CgsFastBitArray.h:556
	void SetOr(const FastBitArray<140> &, const FastBitArray<140> &);

}

// CgsFastBitArray.h:60
struct CgsContainers::FastBitArray<1024>::Iterator {
private:
	// CgsFastBitArray.h:91
	int32_t miIndex;

	// CgsFastBitArray.h:92
	const uint64_t * mpxSourceMasks;

	// CgsFastBitArray.h:93
	uint64_t mxMask;

public:
	// CgsFastBitArray.h:174
	void Iterator();

	// CgsFastBitArray.h:189
	void Iterator(const uint64_t *);

	// CgsFastBitArray.h:211
	void ConstructOrphan(int);

	// CgsFastBitArray.h:230
	int32_t GetIndex() const;

	// CgsFastBitArray.h:245
	Iterator & operator++();

	// CgsFastBitArray.h:340
	bool operator==(int) const;

	// CgsFastBitArray.h:354
	bool operator!=(int) const;

	// CgsFastBitArray.h:369
	uint64_t GetMask() const;

}

// CgsFastBitArray.h:54
extern const uint64_t KU_PADDEDBYTES = 1;

// CgsFastBitArray.h:54
extern const uint64_t KU_PADDEDBYTES = 128;

// CgsFastBitArray.h:55
extern const uint64_t KU_NUMBEROFBITFIELDS = 16;

// CgsFastBitArray.h:54
extern const uint64_t KU_PADDEDBYTES = 2;

// CgsFastBitArray.h:54
extern const uint64_t KU_PADDEDBYTES = 15;

// CgsFastBitArray.h:54
extern const uint64_t KU_PADDEDBYTES = 3;

// CgsFastBitArray.h:54
extern const uint64_t KU_PADDEDBYTES = 18;

// CgsFastBitArray.h:55
extern const uint64_t KU_NUMBEROFBITFIELDS = 3;

// CgsFastBitArray.h:54
extern const uint64_t KU_PADDEDBYTES = 13;

// CgsFastBitArray.h:51
struct CgsContainers::FastBitArray<8> {
	// CgsFastBitArray.h:54
	extern const uint64_t KU_PADDEDBYTES = 1;

	// CgsFastBitArray.h:55
	extern const uint64_t KU_NUMBEROFBITFIELDS = 1;

	// CgsFastBitArray.h:56
	extern const uint64_t KU_NUMBEROFBITSINBITFIELD;

	// CgsFastBitArray.h:57
	extern const uint64_t KU_BITSINBITFIELDMASK;

private:
	// CgsFastBitArray.h:155
	uint64_t[1] maxBits;

	// Unknown accessibility
	struct Iterator;

public:
	// CgsFastBitArray.h:378
	void Construct();

	// CgsFastBitArray.h:385
	void Destruct();

	// CgsFastBitArray.h:391
	const bool IsBitSet(int) const;

	// CgsFastBitArray.h:410
	const bool IsBitSet(const FastBitArray<8>::Iterator &) const;

	// CgsFastBitArray.h:426
	void SetBit(int);

	// CgsFastBitArray.h:437
	void SetBit(const FastBitArray<8>::Iterator &);

	// CgsFastBitArray.h:447
	void UnSetBit(int);

	// CgsFastBitArray.h:458
	void UnSetBit(const FastBitArray<8>::Iterator &);

	// CgsFastBitArray.h:468
	void SetBitTo(int, bool);

	// CgsFastBitArray.h:482
	void SetAll();

	// CgsFastBitArray.h:509
	void UnSetAll();

	// CgsFastBitArray.h:519
	bool IsZero() const;

	// CgsFastBitArray.h:134
	FastBitArray<8>::Iterator Begin() const;

	// CgsFastBitArray.h:138
	int32_t End() const;

	// CgsFastBitArray.h:534
	void SetInverse(const FastBitArray<8> &);

	// CgsFastBitArray.h:545
	void SetAnd(const FastBitArray<8> &, const FastBitArray<8> &);

	// CgsFastBitArray.h:556
	void SetOr(const FastBitArray<8> &, const FastBitArray<8> &);

}

// CgsFastBitArray.h:60
struct CgsContainers::FastBitArray<8>::Iterator {
private:
	// CgsFastBitArray.h:91
	int32_t miIndex;

	// CgsFastBitArray.h:92
	const uint64_t * mpxSourceMasks;

	// CgsFastBitArray.h:93
	uint64_t mxMask;

public:
	// CgsFastBitArray.h:174
	void Iterator();

	// CgsFastBitArray.h:189
	void Iterator(const uint64_t *);

	// CgsFastBitArray.h:211
	void ConstructOrphan(int);

	// CgsFastBitArray.h:230
	int32_t GetIndex() const;

	// CgsFastBitArray.h:245
	Iterator & operator++();

	// CgsFastBitArray.h:340
	bool operator==(int) const;

	// CgsFastBitArray.h:354
	bool operator!=(int) const;

	// CgsFastBitArray.h:369
	uint64_t GetMask() const;

}

// CgsFastBitArray.h:60
struct CgsContainers::FastBitArray<120>::Iterator {
private:
	// CgsFastBitArray.h:91
	int32_t miIndex;

	// CgsFastBitArray.h:92
	const uint64_t * mpxSourceMasks;

	// CgsFastBitArray.h:93
	uint64_t mxMask;

public:
	// CgsFastBitArray.h:174
	void Iterator();

	// CgsFastBitArray.h:189
	void Iterator(const uint64_t *);

	// CgsFastBitArray.h:211
	void ConstructOrphan(int);

	// CgsFastBitArray.h:230
	int32_t GetIndex() const;

	// CgsFastBitArray.h:245
	Iterator & operator++();

	// CgsFastBitArray.h:340
	bool operator==(int) const;

	// CgsFastBitArray.h:354
	bool operator!=(int) const;

	// CgsFastBitArray.h:369
	uint64_t GetMask() const;

}

// CgsFastBitArray.h:60
struct CgsContainers::FastBitArray<19>::Iterator {
private:
	// CgsFastBitArray.h:91
	int32_t miIndex;

	// CgsFastBitArray.h:92
	const uint64_t * mpxSourceMasks;

	// CgsFastBitArray.h:93
	uint64_t mxMask;

public:
	// CgsFastBitArray.h:174
	void Iterator();

	// CgsFastBitArray.h:189
	void Iterator(const uint64_t *);

	// CgsFastBitArray.h:211
	void ConstructOrphan(int);

	// CgsFastBitArray.h:230
	int32_t GetIndex() const;

	// CgsFastBitArray.h:245
	Iterator & operator++();

	// CgsFastBitArray.h:340
	bool operator==(int) const;

	// CgsFastBitArray.h:354
	bool operator!=(int) const;

	// CgsFastBitArray.h:369
	uint64_t GetMask() const;

}

// CgsFastBitArray.h:60
struct CgsContainers::FastBitArray<60>::Iterator {
private:
	// CgsFastBitArray.h:91
	int32_t miIndex;

	// CgsFastBitArray.h:92
	const uint64_t * mpxSourceMasks;

	// CgsFastBitArray.h:93
	uint64_t mxMask;

public:
	// CgsFastBitArray.h:174
	void Iterator();

	// CgsFastBitArray.h:189
	void Iterator(const uint64_t *);

	// CgsFastBitArray.h:211
	void ConstructOrphan(int);

	// CgsFastBitArray.h:230
	int32_t GetIndex() const;

	// CgsFastBitArray.h:245
	Iterator & operator++();

	// CgsFastBitArray.h:340
	bool operator==(int) const;

	// CgsFastBitArray.h:354
	bool operator!=(int) const;

	// CgsFastBitArray.h:369
	uint64_t GetMask() const;

}

// CgsFastBitArray.h:60
struct CgsContainers::FastBitArray<2000>::Iterator {
private:
	// CgsFastBitArray.h:91
	int32_t miIndex;

	// CgsFastBitArray.h:92
	const uint64_t * mpxSourceMasks;

	// CgsFastBitArray.h:93
	uint64_t mxMask;

public:
	// CgsFastBitArray.h:174
	void Iterator();

	// CgsFastBitArray.h:189
	void Iterator(const uint64_t *);

	// CgsFastBitArray.h:211
	void ConstructOrphan(int);

	// CgsFastBitArray.h:230
	int32_t GetIndex() const;

	// CgsFastBitArray.h:245
	Iterator & operator++();

	// CgsFastBitArray.h:340
	bool operator==(int) const;

	// CgsFastBitArray.h:354
	bool operator!=(int) const;

	// CgsFastBitArray.h:369
	uint64_t GetMask() const;

}

// CgsFastBitArray.h:51
struct CgsContainers::FastBitArray<2> {
	// CgsFastBitArray.h:54
	extern const uint64_t KU_PADDEDBYTES = 1;

	// CgsFastBitArray.h:55
	extern const uint64_t KU_NUMBEROFBITFIELDS = 1;

	// CgsFastBitArray.h:56
	extern const uint64_t KU_NUMBEROFBITSINBITFIELD;

	// CgsFastBitArray.h:57
	extern const uint64_t KU_BITSINBITFIELDMASK;

private:
	// CgsFastBitArray.h:155
	uint64_t[1] maxBits;

	// Unknown accessibility
	struct Iterator;

public:
	// CgsFastBitArray.h:378
	void Construct();

	// CgsFastBitArray.h:385
	void Destruct();

	// CgsFastBitArray.h:391
	const bool IsBitSet(int) const;

	// CgsFastBitArray.h:410
	const bool IsBitSet(const FastBitArray<2>::Iterator &) const;

	// CgsFastBitArray.h:426
	void SetBit(int);

	// CgsFastBitArray.h:437
	void SetBit(const FastBitArray<2>::Iterator &);

	// CgsFastBitArray.h:447
	void UnSetBit(int);

	// CgsFastBitArray.h:458
	void UnSetBit(const FastBitArray<2>::Iterator &);

	// CgsFastBitArray.h:468
	void SetBitTo(int, bool);

	// CgsFastBitArray.h:482
	void SetAll();

	// CgsFastBitArray.h:509
	void UnSetAll();

	// CgsFastBitArray.h:519
	bool IsZero() const;

	// CgsFastBitArray.h:134
	FastBitArray<2>::Iterator Begin() const;

	// CgsFastBitArray.h:138
	int32_t End() const;

	// CgsFastBitArray.h:534
	void SetInverse(const FastBitArray<2> &);

	// CgsFastBitArray.h:545
	void SetAnd(const FastBitArray<2> &, const FastBitArray<2> &);

	// CgsFastBitArray.h:556
	void SetOr(const FastBitArray<2> &, const FastBitArray<2> &);

}

// CgsFastBitArray.h:60
struct CgsContainers::FastBitArray<2>::Iterator {
private:
	// CgsFastBitArray.h:91
	int32_t miIndex;

	// CgsFastBitArray.h:92
	const uint64_t * mpxSourceMasks;

	// CgsFastBitArray.h:93
	uint64_t mxMask;

public:
	// CgsFastBitArray.h:174
	void Iterator();

	// CgsFastBitArray.h:189
	void Iterator(const uint64_t *);

	// CgsFastBitArray.h:211
	void ConstructOrphan(int);

	// CgsFastBitArray.h:230
	int32_t GetIndex() const;

	// CgsFastBitArray.h:245
	Iterator & operator++();

	// CgsFastBitArray.h:340
	bool operator==(int) const;

	// CgsFastBitArray.h:354
	bool operator!=(int) const;

	// CgsFastBitArray.h:369
	uint64_t GetMask() const;

}

// CgsFastBitArray.h:51
struct CgsContainers::FastBitArray<30> {
	// CgsFastBitArray.h:54
	extern const uint64_t KU_PADDEDBYTES = 4;

	// CgsFastBitArray.h:55
	extern const uint64_t KU_NUMBEROFBITFIELDS = 1;

	// CgsFastBitArray.h:56
	extern const uint64_t KU_NUMBEROFBITSINBITFIELD;

	// CgsFastBitArray.h:57
	extern const uint64_t KU_BITSINBITFIELDMASK;

private:
	// CgsFastBitArray.h:155
	uint64_t[1] maxBits;

	// Unknown accessibility
	struct Iterator;

public:
	// CgsFastBitArray.h:378
	void Construct();

	// CgsFastBitArray.h:385
	void Destruct();

	// CgsFastBitArray.h:391
	const bool IsBitSet(int) const;

	// CgsFastBitArray.h:410
	const bool IsBitSet(const FastBitArray<30>::Iterator &) const;

	// CgsFastBitArray.h:426
	void SetBit(int);

	// CgsFastBitArray.h:437
	void SetBit(const FastBitArray<30>::Iterator &);

	// CgsFastBitArray.h:447
	void UnSetBit(int);

	// CgsFastBitArray.h:458
	void UnSetBit(const FastBitArray<30>::Iterator &);

	// CgsFastBitArray.h:468
	void SetBitTo(int, bool);

	// CgsFastBitArray.h:482
	void SetAll();

	// CgsFastBitArray.h:509
	void UnSetAll();

	// CgsFastBitArray.h:519
	bool IsZero() const;

	// CgsFastBitArray.h:134
	FastBitArray<30>::Iterator Begin() const;

	// CgsFastBitArray.h:138
	int32_t End() const;

	// CgsFastBitArray.h:534
	void SetInverse(const FastBitArray<30> &);

	// CgsFastBitArray.h:545
	void SetAnd(const FastBitArray<30> &, const FastBitArray<30> &);

	// CgsFastBitArray.h:556
	void SetOr(const FastBitArray<30> &, const FastBitArray<30> &);

}

// CgsFastBitArray.h:51
struct CgsContainers::FastBitArray<5> {
	// CgsFastBitArray.h:54
	extern const uint64_t KU_PADDEDBYTES = 1;

	// CgsFastBitArray.h:55
	extern const uint64_t KU_NUMBEROFBITFIELDS = 1;

	// CgsFastBitArray.h:56
	extern const uint64_t KU_NUMBEROFBITSINBITFIELD;

	// CgsFastBitArray.h:57
	extern const uint64_t KU_BITSINBITFIELDMASK;

private:
	// CgsFastBitArray.h:155
	uint64_t[1] maxBits;

	// Unknown accessibility
	struct Iterator;

public:
	// CgsFastBitArray.h:378
	void Construct();

	// CgsFastBitArray.h:385
	void Destruct();

	// CgsFastBitArray.h:391
	const bool IsBitSet(int) const;

	// CgsFastBitArray.h:410
	const bool IsBitSet(const FastBitArray<5>::Iterator &) const;

	// CgsFastBitArray.h:426
	void SetBit(int);

	// CgsFastBitArray.h:437
	void SetBit(const FastBitArray<5>::Iterator &);

	// CgsFastBitArray.h:447
	void UnSetBit(int);

	// CgsFastBitArray.h:458
	void UnSetBit(const FastBitArray<5>::Iterator &);

	// CgsFastBitArray.h:468
	void SetBitTo(int, bool);

	// CgsFastBitArray.h:482
	void SetAll();

	// CgsFastBitArray.h:509
	void UnSetAll();

	// CgsFastBitArray.h:519
	bool IsZero() const;

	// CgsFastBitArray.h:134
	FastBitArray<5>::Iterator Begin() const;

	// CgsFastBitArray.h:138
	int32_t End() const;

	// CgsFastBitArray.h:534
	void SetInverse(const FastBitArray<5> &);

	// CgsFastBitArray.h:545
	void SetAnd(const FastBitArray<5> &, const FastBitArray<5> &);

	// CgsFastBitArray.h:556
	void SetOr(const FastBitArray<5> &, const FastBitArray<5> &);

}

// CgsFastBitArray.h:60
struct CgsContainers::FastBitArray<30>::Iterator {
private:
	// CgsFastBitArray.h:91
	int32_t miIndex;

	// CgsFastBitArray.h:92
	const uint64_t * mpxSourceMasks;

	// CgsFastBitArray.h:93
	uint64_t mxMask;

public:
	// CgsFastBitArray.h:174
	void Iterator();

	// CgsFastBitArray.h:189
	void Iterator(const uint64_t *);

	// CgsFastBitArray.h:211
	void ConstructOrphan(int);

	// CgsFastBitArray.h:230
	int32_t GetIndex() const;

	// CgsFastBitArray.h:245
	Iterator & operator++();

	// CgsFastBitArray.h:340
	bool operator==(int) const;

	// CgsFastBitArray.h:354
	bool operator!=(int) const;

	// CgsFastBitArray.h:369
	uint64_t GetMask() const;

}

// CgsFastBitArray.h:60
struct CgsContainers::FastBitArray<5>::Iterator {
private:
	// CgsFastBitArray.h:91
	int32_t miIndex;

	// CgsFastBitArray.h:92
	const uint64_t * mpxSourceMasks;

	// CgsFastBitArray.h:93
	uint64_t mxMask;

public:
	// CgsFastBitArray.h:174
	void Iterator();

	// CgsFastBitArray.h:189
	void Iterator(const uint64_t *);

	// CgsFastBitArray.h:211
	void ConstructOrphan(int);

	// CgsFastBitArray.h:230
	int32_t GetIndex() const;

	// CgsFastBitArray.h:245
	Iterator & operator++();

	// CgsFastBitArray.h:340
	bool operator==(int) const;

	// CgsFastBitArray.h:354
	bool operator!=(int) const;

	// CgsFastBitArray.h:369
	uint64_t GetMask() const;

}

// CgsFastBitArray.h:51
struct CgsContainers::FastBitArray<512> {
	// CgsFastBitArray.h:54
	extern const uint64_t KU_PADDEDBYTES = 64;

	// CgsFastBitArray.h:55
	extern const uint64_t KU_NUMBEROFBITFIELDS = 8;

	// CgsFastBitArray.h:56
	extern const uint64_t KU_NUMBEROFBITSINBITFIELD;

	// CgsFastBitArray.h:57
	extern const uint64_t KU_BITSINBITFIELDMASK;

private:
	// CgsFastBitArray.h:155
	uint64_t[8] maxBits;

	// Unknown accessibility
	struct Iterator;

public:
	// CgsFastBitArray.h:378
	void Construct();

	// CgsFastBitArray.h:385
	void Destruct();

	// CgsFastBitArray.h:391
	const bool IsBitSet(int) const;

	// CgsFastBitArray.h:410
	const bool IsBitSet(const FastBitArray<512>::Iterator &) const;

	// CgsFastBitArray.h:426
	void SetBit(int);

	// CgsFastBitArray.h:437
	void SetBit(const FastBitArray<512>::Iterator &);

	// CgsFastBitArray.h:447
	void UnSetBit(int);

	// CgsFastBitArray.h:458
	void UnSetBit(const FastBitArray<512>::Iterator &);

	// CgsFastBitArray.h:468
	void SetBitTo(int, bool);

	// CgsFastBitArray.h:482
	void SetAll();

	// CgsFastBitArray.h:509
	void UnSetAll();

	// CgsFastBitArray.h:519
	bool IsZero() const;

	// CgsFastBitArray.h:134
	FastBitArray<512>::Iterator Begin() const;

	// CgsFastBitArray.h:138
	int32_t End() const;

	// CgsFastBitArray.h:534
	void SetInverse(const FastBitArray<512> &);

	// CgsFastBitArray.h:545
	void SetAnd(const FastBitArray<512> &, const FastBitArray<512> &);

	// CgsFastBitArray.h:556
	void SetOr(const FastBitArray<512> &, const FastBitArray<512> &);

}

// CgsFastBitArray.h:60
struct CgsContainers::FastBitArray<512>::Iterator {
private:
	// CgsFastBitArray.h:91
	int32_t miIndex;

	// CgsFastBitArray.h:92
	const uint64_t * mpxSourceMasks;

	// CgsFastBitArray.h:93
	uint64_t mxMask;

public:
	// CgsFastBitArray.h:174
	void Iterator();

	// CgsFastBitArray.h:189
	void Iterator(const uint64_t *);

	// CgsFastBitArray.h:211
	void ConstructOrphan(int);

	// CgsFastBitArray.h:230
	int32_t GetIndex() const;

	// CgsFastBitArray.h:245
	Iterator & operator++();

	// CgsFastBitArray.h:340
	bool operator==(int) const;

	// CgsFastBitArray.h:354
	bool operator!=(int) const;

	// CgsFastBitArray.h:369
	uint64_t GetMask() const;

}

// CgsFastBitArray.h:51
struct CgsContainers::FastBitArray<175> {
	// CgsFastBitArray.h:54
	extern const uint64_t KU_PADDEDBYTES = 22;

	// CgsFastBitArray.h:55
	extern const uint64_t KU_NUMBEROFBITFIELDS = 3;

	// CgsFastBitArray.h:56
	extern const uint64_t KU_NUMBEROFBITSINBITFIELD;

	// CgsFastBitArray.h:57
	extern const uint64_t KU_BITSINBITFIELDMASK;

private:
	// CgsFastBitArray.h:155
	uint64_t[3] maxBits;

	// Unknown accessibility
	struct Iterator;

public:
	// CgsFastBitArray.h:378
	void Construct();

	// CgsFastBitArray.h:385
	void Destruct();

	// CgsFastBitArray.h:391
	const bool IsBitSet(int) const;

	// CgsFastBitArray.h:410
	const bool IsBitSet(const FastBitArray<175>::Iterator &) const;

	// CgsFastBitArray.h:426
	void SetBit(int);

	// CgsFastBitArray.h:437
	void SetBit(const FastBitArray<175>::Iterator &);

	// CgsFastBitArray.h:447
	void UnSetBit(int);

	// CgsFastBitArray.h:458
	void UnSetBit(const FastBitArray<175>::Iterator &);

	// CgsFastBitArray.h:468
	void SetBitTo(int, bool);

	// CgsFastBitArray.h:482
	void SetAll();

	// CgsFastBitArray.h:509
	void UnSetAll();

	// CgsFastBitArray.h:519
	bool IsZero() const;

	// CgsFastBitArray.h:134
	FastBitArray<175>::Iterator Begin() const;

	// CgsFastBitArray.h:138
	int32_t End() const;

	// CgsFastBitArray.h:534
	void SetInverse(const FastBitArray<175> &);

	// CgsFastBitArray.h:545
	void SetAnd(const FastBitArray<175> &, const FastBitArray<175> &);

	// CgsFastBitArray.h:556
	void SetOr(const FastBitArray<175> &, const FastBitArray<175> &);

}

// CgsFastBitArray.h:60
struct CgsContainers::FastBitArray<175>::Iterator {
private:
	// CgsFastBitArray.h:91
	int32_t miIndex;

	// CgsFastBitArray.h:92
	const uint64_t * mpxSourceMasks;

	// CgsFastBitArray.h:93
	uint64_t mxMask;

public:
	// CgsFastBitArray.h:174
	void Iterator();

	// CgsFastBitArray.h:189
	void Iterator(const uint64_t *);

	// CgsFastBitArray.h:211
	void ConstructOrphan(int);

	// CgsFastBitArray.h:230
	int32_t GetIndex() const;

	// CgsFastBitArray.h:245
	Iterator & operator++();

	// CgsFastBitArray.h:340
	bool operator==(int) const;

	// CgsFastBitArray.h:354
	bool operator!=(int) const;

	// CgsFastBitArray.h:369
	uint64_t GetMask() const;

}

// CgsFastBitArray.h:54
extern const uint64_t KU_PADDEDBYTES = 64;

// CgsFastBitArray.h:55
extern const uint64_t KU_NUMBEROFBITFIELDS = 8;

// CgsFastBitArray.h:54
extern const uint64_t KU_PADDEDBYTES = 22;

// CgsFastBitArray.h:51
struct CgsContainers::FastBitArray<64> {
	// CgsFastBitArray.h:54
	extern const uint64_t KU_PADDEDBYTES = 8;

	// CgsFastBitArray.h:55
	extern const uint64_t KU_NUMBEROFBITFIELDS = 1;

	// CgsFastBitArray.h:56
	extern const uint64_t KU_NUMBEROFBITSINBITFIELD;

	// CgsFastBitArray.h:57
	extern const uint64_t KU_BITSINBITFIELDMASK;

private:
	// CgsFastBitArray.h:155
	uint64_t[1] maxBits;

	// Unknown accessibility
	struct Iterator;

public:
	// CgsFastBitArray.h:378
	void Construct();

	// CgsFastBitArray.h:385
	void Destruct();

	// CgsFastBitArray.h:391
	const bool IsBitSet(int) const;

	// CgsFastBitArray.h:410
	const bool IsBitSet(const FastBitArray<64>::Iterator &) const;

	// CgsFastBitArray.h:426
	void SetBit(int);

	// CgsFastBitArray.h:437
	void SetBit(const FastBitArray<64>::Iterator &);

	// CgsFastBitArray.h:447
	void UnSetBit(int);

	// CgsFastBitArray.h:458
	void UnSetBit(const FastBitArray<64>::Iterator &);

	// CgsFastBitArray.h:468
	void SetBitTo(int, bool);

	// CgsFastBitArray.h:482
	void SetAll();

	// CgsFastBitArray.h:509
	void UnSetAll();

	// CgsFastBitArray.h:519
	bool IsZero() const;

	// CgsFastBitArray.h:134
	FastBitArray<64>::Iterator Begin() const;

	// CgsFastBitArray.h:138
	int32_t End() const;

	// CgsFastBitArray.h:534
	void SetInverse(const FastBitArray<64> &);

	// CgsFastBitArray.h:545
	void SetAnd(const FastBitArray<64> &, const FastBitArray<64> &);

	// CgsFastBitArray.h:556
	void SetOr(const FastBitArray<64> &, const FastBitArray<64> &);

}

// CgsFastBitArray.h:60
struct CgsContainers::FastBitArray<10>::Iterator {
private:
	// CgsFastBitArray.h:91
	int32_t miIndex;

	// CgsFastBitArray.h:92
	const uint64_t * mpxSourceMasks;

	// CgsFastBitArray.h:93
	uint64_t mxMask;

public:
	// CgsFastBitArray.h:174
	void Iterator();

	// CgsFastBitArray.h:189
	void Iterator(const uint64_t *);

	// CgsFastBitArray.h:211
	void ConstructOrphan(int);

	// CgsFastBitArray.h:230
	int32_t GetIndex() const;

	// CgsFastBitArray.h:245
	Iterator & operator++();

	// CgsFastBitArray.h:340
	bool operator==(int) const;

	// CgsFastBitArray.h:354
	bool operator!=(int) const;

	// CgsFastBitArray.h:369
	uint64_t GetMask() const;

}

// CgsFastBitArray.h:24
namespace CgsContainers {
	struct FastBitArray<140>;

	struct RingBuffer<float32_t>;

	struct FixedRingBuffer<float32_t,256>;

	struct FastBitArray<100>;

}

// CgsFastBitArray.h:60
struct CgsContainers::FastBitArray<140>::Iterator {
private:
	// CgsFastBitArray.h:91
	int32_t miIndex;

	// CgsFastBitArray.h:92
	const uint64_t * mpxSourceMasks;

	// CgsFastBitArray.h:93
	uint64_t mxMask;

public:
	// CgsFastBitArray.h:174
	void Iterator();

	// CgsFastBitArray.h:189
	void Iterator(const uint64_t *);

	// CgsFastBitArray.h:211
	void ConstructOrphan(int);

	// CgsFastBitArray.h:230
	int32_t GetIndex() const;

	// CgsFastBitArray.h:245
	Iterator & operator++();

	// CgsFastBitArray.h:340
	bool operator==(int) const;

	// CgsFastBitArray.h:354
	bool operator!=(int) const;

	// CgsFastBitArray.h:369
	uint64_t GetMask() const;

}

// CgsFastBitArray.h:51
struct CgsContainers::FastBitArray<100> {
	// CgsFastBitArray.h:54
	extern const uint64_t KU_PADDEDBYTES = 13;

	// CgsFastBitArray.h:55
	extern const uint64_t KU_NUMBEROFBITFIELDS = 2;

	// CgsFastBitArray.h:56
	extern const uint64_t KU_NUMBEROFBITSINBITFIELD;

	// CgsFastBitArray.h:57
	extern const uint64_t KU_BITSINBITFIELDMASK;

private:
	// CgsFastBitArray.h:155
	uint64_t[2] maxBits;

	// Unknown accessibility
	struct Iterator;

public:
	// CgsFastBitArray.h:378
	void Construct();

	// CgsFastBitArray.h:385
	void Destruct();

	// CgsFastBitArray.h:391
	const bool IsBitSet(int) const;

	// CgsFastBitArray.h:410
	const bool IsBitSet(const FastBitArray<100>::Iterator &) const;

	// CgsFastBitArray.h:426
	void SetBit(int);

	// CgsFastBitArray.h:437
	void SetBit(const FastBitArray<100>::Iterator &);

	// CgsFastBitArray.h:447
	void UnSetBit(int);

	// CgsFastBitArray.h:458
	void UnSetBit(const FastBitArray<100>::Iterator &);

	// CgsFastBitArray.h:468
	void SetBitTo(int, bool);

	// CgsFastBitArray.h:482
	void SetAll();

	// CgsFastBitArray.h:509
	void UnSetAll();

	// CgsFastBitArray.h:519
	bool IsZero() const;

	// CgsFastBitArray.h:134
	FastBitArray<100>::Iterator Begin() const;

	// CgsFastBitArray.h:138
	int32_t End() const;

	// CgsFastBitArray.h:534
	void SetInverse(const FastBitArray<100> &);

	// CgsFastBitArray.h:545
	void SetAnd(const FastBitArray<100> &, const FastBitArray<100> &);

	// CgsFastBitArray.h:556
	void SetOr(const FastBitArray<100> &, const FastBitArray<100> &);

}

// CgsFastBitArray.h:60
struct CgsContainers::FastBitArray<100>::Iterator {
private:
	// CgsFastBitArray.h:91
	int32_t miIndex;

	// CgsFastBitArray.h:92
	const uint64_t * mpxSourceMasks;

	// CgsFastBitArray.h:93
	uint64_t mxMask;

public:
	// CgsFastBitArray.h:174
	void Iterator();

	// CgsFastBitArray.h:189
	void Iterator(const uint64_t *);

	// CgsFastBitArray.h:211
	void ConstructOrphan(int);

	// CgsFastBitArray.h:230
	int32_t GetIndex() const;

	// CgsFastBitArray.h:245
	Iterator & operator++();

	// CgsFastBitArray.h:340
	bool operator==(int) const;

	// CgsFastBitArray.h:354
	bool operator!=(int) const;

	// CgsFastBitArray.h:369
	uint64_t GetMask() const;

}


// bitgetter.h:21
struct rw::audio::core::BitGetter {
private:
	// bitgetter.h:75
	unsigned char * mpBitBuffer;

	// bitgetter.h:76
	unsigned int mBitPosition;

public:
	// bitgetter.h:23
	void BitGetter();

	// bitgetter.h:30
	void ~BitGetter();

	// bitgetter.h:34
	void SetBitBuffer(void *);

	// bitgetter.h:40
	unsigned int GetBitPosition();

	// bitgetter.h:46
	unsigned int GetBits(unsigned int);

}


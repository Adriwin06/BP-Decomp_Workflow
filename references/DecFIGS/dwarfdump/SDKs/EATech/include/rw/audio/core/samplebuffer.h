// samplebuffer.h:30
struct rw::audio::core::SampleBuffer {
private:
	// samplebuffer.h:222
	extern const unsigned char MAX_MAXLOCKS = 6;

	// samplebuffer.h:223
	extern const unsigned char SLOT_EMPTY = 255;

	// samplebuffer.h:243
	unsigned int[4] mSampleBufferCodeLocation;

	// samplebuffer.h:246
	System * mpSystem;

	// samplebuffer.h:247
	float * mpStorage;

	// samplebuffer.h:248
	uintptr_t mpTempStore;

	// samplebuffer.h:250
	short unsigned int mNumSamples;

	// samplebuffer.h:251
	short unsigned int mMaxSamples;

	// samplebuffer.h:254
	float *(*)(SampleBuffer *, unsigned int) mpLockChannelImplementation;

	// samplebuffer.h:257
	unsigned int mChannelSlotArrayOffset;

	// samplebuffer.h:258
	unsigned char mMaxLocks;

	// samplebuffer.h:259
	unsigned char[6] mSlotLockFlag;

	// samplebuffer.h:260
	unsigned char[6] mSlotChannelNumber;

	// samplebuffer.h:263
	unsigned char mNumChannels;

public:
	// samplebuffer.h:40
	unsigned int GetSize(unsigned int, unsigned int, unsigned int, unsigned int *, System *);

	// samplebuffer.h:49
	SampleBuffer * CreateInstance(unsigned int, unsigned int, unsigned int, void *, void *, System *);

	// samplebuffer.h:51
	unsigned int CalculateStorageSize(unsigned int, unsigned int);

	// samplebuffer.h:56
	unsigned int CalculateSpuStorageSize(unsigned int, unsigned int);

	// samplebuffer.h:109
	void SetStorage(void *);

	// samplebuffer.h:118
	void SetMaxSamples(unsigned int);

	// samplebuffer.h:147
	float * LockChannel(unsigned int);

	// samplebuffer.h:169
	void UnlockChannel(unsigned int);

	// samplebuffer.h:187
	void SetNumSamples(unsigned int);

	// samplebuffer.h:196
	unsigned int GetNumSamples();

	// samplebuffer.h:201
	unsigned int GetMaxSamples();

	// samplebuffer.h:207
	unsigned int GetMaxLocks();

private:
	// samplebuffer.h:220
	float * LockChannelImplementation(SampleBuffer *, unsigned int);

	// samplebuffer.h:226
	unsigned int * GetChannelSlotArray();

	// samplebuffer.h:233
	unsigned int GetChannelSlot(unsigned int);

}

// samplebuffer.h:222
extern const unsigned char MAX_MAXLOCKS = 6;


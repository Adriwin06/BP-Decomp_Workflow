// LionChannel.h:29
struct sLionChannel {
	// LionChannel.h:33
	sLionMemberToken * mpToken;

	// LionChannel.h:34
	U32 mKeyFrameCount;

	// LionChannel.h:35
	FP32 * mpTimes;

	// LionChannel.h:36
	void * mpValues;

public:
	// LionChannel.h:30
	void Init();

	// LionChannel.h:31
	void Evaluate(FP32, U8 *) const;

}

// LionChannel.h:40
struct cLionChannelGroup {
private:
	// LionChannel.h:73
	U32 mChannelCount;

	// LionChannel.h:74
	U32 mKeyFrameCount;

	// LionChannel.h:75
	FP32 * mpKeyTimes;

	// LionChannel.h:76
	sLionChannel * mpChannels;

	// LionChannel.h:77
	sLionChannel * mpChannelCurrent;

	// LionChannel.h:78
	const cLionTokenTable * mpTokenTable;

	// LionChannel.h:79
	EA::Allocator::ITaggedAllocator * mpAllocator;

public:
	// LionChannel.h:54
	void Init(EA::Allocator::ITaggedAllocator *, const cLionTokenTable *);

	// LionChannel.h:55
	void DeInit();

	// LionChannel.h:57
	sLionChannel * ChannelBegin(const char *, U32);

	// LionChannel.h:58
	sLionChannel * ChannelBegin(cLionArgsParser &, const char *, U32, U32);

	// LionChannel.h:59
	void ChannelKeyFrameAdd(cLionArgsParser &);

	// LionChannel.h:60
	void ChannelKeyFrameStructAdd(void *, FP32);

	// LionChannel.h:61
	void ChannelKeyFrameArrayAdd(const void *, const FP32 *, U32);

	// LionChannel.h:62
	FP32 * OptimisedTimesBuild(U32 &);

	// LionChannel.h:64
	U32 GetChannelCount() const;

	// LionChannel.h:65
	sLionChannel * GetpChannel(cLionArgsParser &);

	// LionChannel.h:66
	sLionChannel * GetpChannels();

	// LionChannel.h:68
	U32 KeyFrameCountBuild();

	// LionChannel.h:69
	void KeyFrameTimesBuild(FP32 *);

}


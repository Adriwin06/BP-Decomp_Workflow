// LionForceParser.h:26
struct cLionForceParser {
private:
	// LionForceParser.h:38
	extern cLionForceParser mSingleton;

	// LionForceParser.h:42
	EA::Allocator::ITaggedAllocator * mpAllocator;

public:
	// LionForceParser.h:29
	void AppInit(EA::Allocator::ITaggedAllocator *);

	// LionForceParser.h:30
	void AppDeInit();

	// LionForceParser.h:32
	cLionForceEffect * TextLoad(const char *, U32, U32 &, const char *);

	// LionForceParser.h:34
	EA::Allocator::ITaggedAllocator * GetpAllocator();

	// LionForceParser.h:35
	cLionForceParser * GetMe();

private:
	// LionForceParser.h:39
	U32 GetChunkCount(cLionArgsParser &, const char *, U32, U32, U32);

	// LionForceParser.h:40
	void ArrayValueWrite(void *, U32, U32, char *);

}

// LionForceParser.h:38
extern cLionForceParser mSingleton;


// LionConvert.h:23
struct cLionConvert {
private:
	// LionConvert.h:46
	extern cLionConvert mSingleton;

	// LionConvert.h:47
	EA::Allocator::ITaggedAllocator * mpAllocator;

public:
	// LionConvert.h:37
	void AppInit(EA::Allocator::ITaggedAllocator *);

	// LionConvert.h:38
	void AppDeInit();

	// LionConvert.h:40
	char * TextConvert(const char *, U32);

	// LionConvert.h:41
	void TextFree(char *);

	// LionConvert.h:43
	EA::Allocator::ITaggedAllocator * GetpAllocator();

	// LionConvert.h:44
	cLionConvert * GetMe();

}

// LionConvert.h:51
struct cLionString {
	// LionConvert.h:57
	char * mpChars;

	// LionConvert.h:58
	cLionString * mpNext;

public:
	// LionConvert.h:53
	void Init(const char *);

	// LionConvert.h:54
	void DeInit();

	// LionConvert.h:55
	U32 GetSize();

}

// LionConvert.h:62
struct cLionStringFactory {
public:
	// LionConvert.h:64
	cLionString * Create(const char *);

	// LionConvert.h:65
	void Destroy(cLionString *);

}

// LionConvert.h:70
struct cLionStringCollection {
	// LionConvert.h:84
	cLionString * mpName;

	// LionConvert.h:85
	cLionString * mpStrings;

	// LionConvert.h:86
	cLionStringCollection * mpNext;

public:
	// LionConvert.h:72
	void Init(const char *);

	// LionConvert.h:73
	void DeInit();

	// LionConvert.h:75
	cLionString * Add(const char *);

	// LionConvert.h:76
	void Add(const cLionStringCollection *);

	// LionConvert.h:77
	void Remove(cLionString *);

	// LionConvert.h:78
	U32 GetSize();

	// LionConvert.h:79
	cLionString * FindByKey(const char *);

	// LionConvert.h:80
	cLionString * FindByKeyFirst(const char *);

	// LionConvert.h:81
	cLionString * FindByKeyNext(cLionString *);

	// LionConvert.h:82
	char * Serialise();

}

// LionConvert.h:90
struct cLionStringCollectionFactory {
public:
	// LionConvert.h:92
	cLionStringCollection * Create(const char *);

	// LionConvert.h:93
	void Destroy(cLionStringCollection *);

}


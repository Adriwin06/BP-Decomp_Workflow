// LionTextParser.h:25
struct cLionTextParser {
private:
	// LionTextParser.h:63
	extern cLionTextParser mSingleton;

	// LionTextParser.h:74
	EA::Allocator::ITaggedAllocator * mpAllocator;

public:
	// LionTextParser.h:47
	void AppInit(EA::Allocator::ITaggedAllocator *);

	// LionTextParser.h:48
	void AppDeInit();

	// LionTextParser.h:50
	cLionEffectDefinition * TextLoad(const char *, U32, const char *);

	// LionTextParser.h:51
	void TextUnLoad(const char *, U32);

	// LionTextParser.h:52
	void TextSave(cLionEffectDefinition *, iLionTokeniserWriter *);

	// LionTextParser.h:53
	FP32 GetVersion(const char *, U32);

	// LionTextParser.h:55
	void UnLoad(cLionEffectDefinition *);

	// LionTextParser.h:57
	cLionTextParser * GetMe();

}


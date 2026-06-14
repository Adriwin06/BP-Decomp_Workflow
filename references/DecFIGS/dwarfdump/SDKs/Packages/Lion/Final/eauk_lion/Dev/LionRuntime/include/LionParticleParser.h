// LionParticleParser.h:29
struct cLionParticleParser {
private:
	// LionParticleParser.h:63
	extern cLionParticleParser mSingleton;

	// LionParticleParser.h:73
	EA::Allocator::ITaggedAllocator * mpAllocator;

	// LionParticleParser.h:75
	FP32 mAlphaReScale;

	// LionParticleParser.h:76
	FP32 mRGBReScale;

public:
	// LionParticleParser.h:45
	void AppInit(EA::Allocator::ITaggedAllocator *);

	// LionParticleParser.h:46
	void AppDeInit();

	// LionParticleParser.h:48
	cLionParticleEffect * TextLoad(const char *, U32, U32 &, const char *);

	// LionParticleParser.h:49
	void TextSave(const cLionParticleEffect *, iLionTokeniserWriter *);

	// LionParticleParser.h:51
	cLionTokenTable * GetpBehaviourTokenTable();

	// LionParticleParser.h:52
	cLionTokenTable * GetpDescriptorTokenTable();

	// LionParticleParser.h:53
	cLionTokenTable * GetpMaterialTokenTable();

	// LionParticleParser.h:54
	cLionTokenTable * GetpWaveFormTokenTable();

	// LionParticleParser.h:56
	void SetAlphaReScale(FP32);

	// LionParticleParser.h:57
	void SetRGBReScale(FP32);

	// LionParticleParser.h:59
	EA::Allocator::ITaggedAllocator * GetpAllocator();

	// LionParticleParser.h:60
	cLionParticleParser * GetMe();

private:
	// LionParticleParser.h:65
	void DescriptorTextLoad(cParticleDescriptor *, const char *, U32, U32 &, U32);

	// LionParticleParser.h:66
	void DescriptorRemoveDisabled(cParticleDescriptor *);

	// LionParticleParser.h:68
	U32 GetChunkCount(cLionArgsParser &, const char *, U32, U32, U32);

	// LionParticleParser.h:69
	void ArrayValueWrite(void *, U32, U32, char *);

	// LionParticleParser.h:70
	void DescriptorWrite(cParticleDescriptor *, iLionTokeniserWriter *);

	// LionParticleParser.h:71
	void WaveFormWrite(cParticleWaveForm *, const char *, iLionTokeniserWriter *);

}


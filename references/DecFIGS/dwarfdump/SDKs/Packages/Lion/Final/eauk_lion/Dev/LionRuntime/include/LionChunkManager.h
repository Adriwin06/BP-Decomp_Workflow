// LionChunkManager.h:40
struct cLionChunkManager {
private:
	// LionChunkManager.h:128
	extern cLionChunkManager mSingleton;

	// LionChunkManager.h:129
	EA::Allocator::ITaggedAllocator * mpAllocator;

	// LionChunkManager.h:130
	cLionChunk * mpChunks;

public:
	// LionChunkManager.h:42
	void AppInit(EA::Allocator::ITaggedAllocator *);

	// LionChunkManager.h:43
	void AppDeInit();

	// LionChunkManager.h:45
	void ChunkHierarchyCreate(cLionEffectDefinition *);

	// LionChunkManager.h:46
	void ChunkHierarchyDestroy(cLionEffectDefinition *);

	// LionChunkManager.h:48
	void ChunkHierarchyCreate(cGroper *);

	// LionChunkManager.h:49
	void ChunkHierarchyDestroy(cGroper *);

	// LionChunkManager.h:51
	void ChunkHierarchyCreate(cGroperBindGroup *);

	// LionChunkManager.h:52
	void ChunkHierarchyDestroy(cGroperBindGroup *);

	// LionChunkManager.h:54
	cLionChunk * ChunkGetRoot(cLionEffectDefinition *);

	// LionChunkManager.h:55
	cLionChunk * ChunkGetRoot(cGroper *);

	// LionChunkManager.h:56
	cLionChunk * ChunkGetRoot(cGroperBindGroup *);

	// LionChunkManager.h:57
	cLionChunk * ChunkGetNext(const cLionChunk *);

	// LionChunkManager.h:58
	cLionChunk * ChunkGetChild(const cLionChunk *);

	// LionChunkManager.h:59
	const char * ChunkGetType(const cLionChunk *);

	// LionChunkManager.h:61
	void ChunkDec(cLionChunk *);

	// LionChunkManager.h:62
	void ChunkInc(cLionChunk *);

	// LionChunkManager.h:64
	cLionChunk * ChunkAdd(cLionChunk *, const char *, const char *);

	// LionChunkManager.h:65
	void ChunkRemove(cLionChunk *);

	// LionChunkManager.h:67
	FP32 ChunkGetDuration(const cLionChunk *);

	// LionChunkManager.h:69
	void * ChunkGetPropertyValue(const cLionChunk *, const char *);

	// LionChunkManager.h:70
	void ChunkSetPropertyValue(const cLionChunk *, const char *, const void *);

	// LionChunkManager.h:72
	bool ChunkIsPropertyKeyFramable(const cLionChunk *, const char *);

	// LionChunkManager.h:73
	U32 ChunkGetPropertyKeyFrameCount(const cLionChunk *, const char *);

	// LionChunkManager.h:74
	FP32 * ChunkGetPropertyKeyFrameTimes(const cLionChunk *, const char *);

	// LionChunkManager.h:75
	void * ChunkGetPropertyKeyFrameValue(const cLionChunk *, const char *, U32);

	// LionChunkManager.h:76
	void ChunkSetPropertyKeyFrames(const cLionChunk *, const char *, const FP32 *, const void *, U32);

	// LionChunkManager.h:90
	sLionMemberToken * PropertyGetFirst(const cLionChunk *);

	// LionChunkManager.h:91
	sLionMemberToken * PropertyGetFirst(const char *);

	// LionChunkManager.h:92
	sLionMemberToken * PropertyGetNext(const sLionMemberToken *);

	// LionChunkManager.h:93
	const char * PropertyGetType(const sLionMemberToken *);

	// LionChunkManager.h:94
	const char * PropertyGetName(const sLionMemberToken *);

	// LionChunkManager.h:95
	cKeyStringTable * PropertyGetKeyStringTable(sLionMemberToken *);

	// LionChunkManager.h:97
	U32 KeyStringTableGetCount(cKeyStringTable *);

	// LionChunkManager.h:98
	const char * KeyStringTableGetString(cKeyStringTable *, U32);

	// LionChunkManager.h:99
	U32 KeyStringTableGetKey(cKeyStringTable *, U32);

	// LionChunkManager.h:101
	EA::Allocator::ITaggedAllocator * GetpAllocator();

	// LionChunkManager.h:103
	cLionChunkManager * GetMe();

private:
	// LionChunkManager.h:106
	void EffectStop(const cLionChunk *);

	// LionChunkManager.h:107
	void EffectStart(const cLionChunk *);

	// LionChunkManager.h:108
	cLionChunk * ChunkFindUp(const cLionChunk *, U32);

	// LionChunkManager.h:110
	void ChunkGroupDeAlloc(cLionChunk *);

	// LionChunkManager.h:112
	void ParticleHierarchyCreate(const cLionParticleEffect *, cLionChunk *);

	// LionChunkManager.h:113
	void ParticleDescriptorHierarchyCreate(cParticleDescriptor *, cLionChunk *);

	// LionChunkManager.h:124
	U32 ChunkGetLevelCount(const cLionChunk *, U32);

	// LionChunkManager.h:125
	U32 ChunkGetTotalCount(const cLionChunk *, U32);

}


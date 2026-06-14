// LionPostProRenderStack.h:26
struct sLionPostProRenderStackEntry {
	// LionPostProRenderStack.h:27
	cLionPostProDescriptor * mpDescriptor;

	// LionPostProRenderStack.h:28
	cLionBindings * mpBindings;

	// LionPostProRenderStack.h:29
	FP32 mBlend;

	// LionPostProRenderStack.h:30
	FP32 mFade;

	// LionPostProRenderStack.h:31
	FP32 mTime;

	// LionPostProRenderStack.h:32
	FP32 mDist;

	// LionPostProRenderStack.h:33
	sLionPostProRenderStackEntry * mpNext;

}

// LionPostProRenderStack.h:43
struct cLionPostProRenderStack {
private:
	// LionPostProRenderStack.h:62
	U32 mEntryCount;

	// LionPostProRenderStack.h:63
	sLionPostProRenderStackEntry[32] mStack;

	// LionPostProRenderStack.h:64
	sLionPostProRenderStackEntry *[16] mpMixLists;

public:
	// LionPostProRenderStack.h:54
	void Init();

	// LionPostProRenderStack.h:55
	void Render();

	// LionPostProRenderStack.h:56
	void Add(cLionPostProDescriptor *, cLionBindings *, FP32, FP32, FP32, FP32);

private:
	// LionPostProRenderStack.h:59
	void Mix();

	// LionPostProRenderStack.h:60
	S32 WeightingsAssign(sLionPostProRenderStackEntry *, S32);

}


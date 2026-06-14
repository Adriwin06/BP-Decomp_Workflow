// csisi.h:42
struct Csis::ClassData {
private:
	// csisi.h:91
	SystemDesc::ClassDesc * mpClassDesc;

	// csisi.h:95
	int mRefCount;

	// csisi.h:102
	CListDStack mUpdateClients;

	// csisi.h:104
	CListDStack mDestroyClients;

public:
	// csisi.h:46
	SystemDesc::ClassDesc * GetClassDesc() const;

private:
	// csisi.h:54
	void SendParameters(Parameter *);

	// csisi.h:56
	void AddRefInline();

	// csisi.h:61
	void DecRefInline();

}

// csisi.h:38
extern EA::Allocator::ICoreAllocator * gpCoreAllocator;


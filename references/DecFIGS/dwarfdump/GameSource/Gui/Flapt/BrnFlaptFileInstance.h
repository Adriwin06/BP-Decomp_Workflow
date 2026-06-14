// BrnFlaptFileInstance.h:54
struct BrnFlapt::FlaptFileInstance {
private:
	// BrnFlaptFileInstance.h:111
	bool mbIsActive;

	// BrnFlaptFileInstance.h:113
	ResourcePtr<BrnFlapt::FlaptFile> mpFile;

	// BrnFlaptFileInstance.h:115
	BrnFlapt::MovieClipInstance * mpRootMovieClipInstance;

	// BrnFlaptFileInstance.h:117
	const RGBA * mpAlternateTextColours;

	// BrnFlaptFileInstance.h:118
	int32_t miNumAlternateColours;

	// BrnFlaptFileInstance.h:120
	LinearMalloc * mpLinearAlloc;

public:
	// BrnFlaptFileInstance.h:61
	void Construct(const RGBA *, int32_t);

	// BrnFlaptFileInstance.h:66
	void Prepare(LinearMalloc *);

	// BrnFlaptFileInstance.h:70
	void Destruct();

	// BrnFlaptFileInstance.h:77
	void SetData(ResourceHandle, BrnFlapt::FlaptRenderer *);

	// BrnFlaptFileInstance.h:83
	void Update(float32_t);

	// BrnFlaptFileInstance.h:88
	void Render(BrnFlapt::FlaptRenderer *) const;

	// BrnFlaptFileInstance.h:93
	MovieClipRef GetRootMovieClip() const;

	// BrnFlaptFileInstance.h:100
	void FindComponent(uint32_t, BrnFlapt::MovieClipRef *, const char *);

	// BrnFlaptFileInstance.h:104
	bool IsActive() const;

}

// BrnFlaptFileInstance.h:54
struct BrnFlapt::FlaptFileInstance {
private:
	// BrnFlaptFileInstance.h:111
	bool mbIsActive;

	// BrnFlaptFileInstance.h:113
	ResourcePtr<BrnFlapt::FlaptFile> mpFile;

	// BrnFlaptFileInstance.h:115
	BrnFlapt::MovieClipInstance * mpRootMovieClipInstance;

	// BrnFlaptFileInstance.h:117
	const RGBA * mpAlternateTextColours;

	// BrnFlaptFileInstance.h:118
	int32_t miNumAlternateColours;

	// BrnFlaptFileInstance.h:120
	LinearMalloc * mpLinearAlloc;

public:
	// BrnFlaptFileInstance.h:61
	void Construct(const RGBA *, int32_t);

	// BrnFlaptFileInstance.h:66
	void Prepare(LinearMalloc *);

	// BrnFlaptFileInstance.h:70
	void Destruct();

	// BrnFlaptFileInstance.h:77
	// Declaration
	void SetData(ResourceHandle, BrnFlapt::FlaptRenderer *) {
		// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
		// BrnFlaptFileInstance.cpp:128
		using namespace CgsDev::Message;

	}

	// BrnFlaptFileInstance.h:83
	void Update(float32_t);

	// BrnFlaptFileInstance.h:88
	void Render(BrnFlapt::FlaptRenderer *) const;

	// BrnFlaptFileInstance.h:93
	MovieClipRef GetRootMovieClip() const;

	// BrnFlaptFileInstance.h:100
	void FindComponent(uint32_t, BrnFlapt::MovieClipRef *, const char *);

	// BrnFlaptFileInstance.h:104
	bool IsActive() const;

}


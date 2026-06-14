// BrnFlaptFileRef.h:48
struct BrnFlapt::FileRef {
private:
	// BrnFlaptFileRef.h:73
	BrnFlapt::FlaptFileInstance * mpFileInst;

public:
	// BrnFlaptFileRef.h:53
	void ConstructEmpty();

	// BrnFlaptFileRef.h:58
	void Construct(BrnFlapt::FlaptFileInstance *);

	// BrnFlaptFileRef.h:64
	MovieClipRef FindComponent(const char *) const;

	// BrnFlaptFileRef.h:68
	MovieClipRef GetRootMovieClip() const;

}

// BrnFlaptFileRef.h:48
struct BrnFlapt::FileRef {
private:
	// BrnFlaptFileRef.h:73
	FlaptFileInstance * mpFileInst;

public:
	// BrnFlaptFileRef.h:53
	void ConstructEmpty();

	// BrnFlaptFileRef.h:58
	void Construct(FlaptFileInstance *);

	// BrnFlaptFileRef.h:64
	MovieClipRef FindComponent(const char *) const;

	// BrnFlaptFileRef.h:68
	MovieClipRef GetRootMovieClip() const;

}


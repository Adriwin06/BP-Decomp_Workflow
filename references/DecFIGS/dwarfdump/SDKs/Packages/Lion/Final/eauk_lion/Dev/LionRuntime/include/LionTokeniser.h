// LionTokeniser.h:38
struct sLionMemberToken {
	// LionTokeniser.h:79
	U32 mType;

	// LionTokeniser.h:80
	U32 mValue;

	// LionTokeniser.h:81
	U32 mOffset;

	// LionTokeniser.h:82
	char * mpString;

	// LionTokeniser.h:83
	U32 mHash;

public:
	// LionTokeniser.h:39
	U32 GetSize() const;

	// LionTokeniser.h:40
	const char * GetTypeName() const;

	// LionTokeniser.h:41
	void * GetpData(void *);

	// LionTokeniser.h:42
	void SetData(void *, const void *);

	// LionTokeniser.h:43
	void Lerp(const void *, const void *, FP32, void *) const;

	// LionTokeniser.h:44
	void Min(const void *, const void *, void *) const;

	// LionTokeniser.h:45
	void Max(const void *, const void *, void *) const;

	// LionTokeniser.h:46
	void Mul(const void *, void *, FP32) const;

	// LionTokeniser.h:47
	void Add(const void *, const void *, void *) const;

	// LionTokeniser.h:48
	void Sub(const void *, const void *, void *) const;

	// LionTokeniser.h:49
	FP32 GetError(const void *, const void *, const void *, const void *) const;

	// LionTokeniser.h:50
	void TextOutput(const void *, iLionTokeniserWriter *) const;

	// LionTokeniser.h:51
	void ValueToString(const void *, char *) const;

	// LionTokeniser.h:52
	bool AreEqual(const void *, const void *) const;

	// LionTokeniser.h:53
	void EndianTwiddle(void *) const;

}

// LionTokeniser.h:138
struct cLionTokenTable {
	// LionTokeniser.h:170
	sLionMemberToken * mpTokens;

public:
	// LionTokeniser.h:140
	cLionTokenTable(sLionMemberToken *);

	// LionTokeniser.h:148
	~cLionTokenTable();

	// LionTokeniser.h:150
	void Validate();

	// LionTokeniser.h:151
	void BuildHashes();

	// LionTokeniser.h:152
	sLionMemberToken * GetpTokens() const;

	// LionTokeniser.h:153
	sLionMemberToken * GetpToken(const char *) const;

	// LionTokeniser.h:154
	U32 GetTokenCount() const;

	// LionTokeniser.h:155
	U32 GetStructSize() const;

	// LionTokeniser.h:156
	void MemberBuild(cLionArgsParser &, void *, EA::Allocator::ITaggedAllocator *) const;

	// LionTokeniser.h:157
	void MemberFree(void *, EA::Allocator::ITaggedAllocator *) const;

	// LionTokeniser.h:158
	void Lerp(const void *, const void *, FP32, void *) const;

	// LionTokeniser.h:159
	void StructWrite(const void *, iLionTokeniserWriter *);

	// LionTokeniser.h:160
	void Add(const void *, const void *, void *) const;

	// LionTokeniser.h:161
	void Mul(const void *, void *, FP32) const;

	// LionTokeniser.h:162
	void Min(const void *, const void *, void *) const;

	// LionTokeniser.h:163
	void Max(const void *, const void *, void *) const;

	// LionTokeniser.h:164
	FP32 Diff(const void *, const void *) const;

	// LionTokeniser.h:165
	FP32 GetError(const void *, const void *, const void *, const void *) const;

	// LionTokeniser.h:166
	sLionMemberToken * GetDiffFirst(const void *, const void *) const;

	// LionTokeniser.h:167
	sLionMemberToken * GetDiffNext(const void *, const void *, sLionMemberToken *) const;

	// LionTokeniser.h:168
	void EndianTwiddle(void *) const;

}

// LionTokeniser.h:99
struct cLionArgsParser {
private:
	// LionTokeniser.h:130
	U32 mArgCount;

	// LionTokeniser.h:131
	U32 mDstIndex;

	// LionTokeniser.h:132
	char[256] mTextSpace;

	// LionTokeniser.h:133
	char *[32] mpArgs;

public:
	// LionTokeniser.h:118
	void BuildArgs(const char *);

	// LionTokeniser.h:119
	U32 BuildArgs(const char *, U32, U32);

	// LionTokeniser.h:120
	U32 IsChunkHeader() const;

	// LionTokeniser.h:121
	U32 GetChunkCount(const char *, U32, U32, const char *);

	// LionTokeniser.h:122
	U32 ChunkSkip(const char *, U32, U32);

	// LionTokeniser.h:123
	void ArrayValueWrite(void *, U32, const sLionMemberToken *);

	// LionTokeniser.h:124
	U32 GetArgCount() const;

	// LionTokeniser.h:125
	char * GetpArg(U32) const;

private:
	// LionTokeniser.h:128
	void ArgCreate();

}


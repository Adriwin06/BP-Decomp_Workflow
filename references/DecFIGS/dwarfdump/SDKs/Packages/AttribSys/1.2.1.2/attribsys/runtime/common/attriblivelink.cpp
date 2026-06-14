// attribuserinclude.h:119
namespace Attrib {
	// attriblivelink.cpp:13
	enum EditOpCodeLabel {
		kReplaceLoopOp = 0,
		kReplaceDataOp = 1,
		kAddObjectOp = 2,
		kRemoveObjectOp = 3,
		kShapeObjectOp = 4,
		kTerminatorOp = 5,
		kInvalidOp = 6,
	}

	// attriblivelink.cpp:25
	Attrib::EditOpCodeLabel CharToEditOpCodeLabel(char);

	// attriblivelink.cpp:249
	extern void SetEditNotifier(void (*)(const Attrib::Collection *, Attribute::Key));

	// attriblivelink.cpp:254
	extern void SetLoopNotifier(void (*)(const Attrib::Collection *, Attribute::Key));

	// attriblivelink.cpp:259
	extern void SetMessageSender(void (*)(const char *));

	// attriblivelink.cpp:264
	extern void SetArrayLengthMessageSender(void (*)(const char *));

	// attriblivelink.cpp:269
	extern void SetHashLookupSender(const char *(*)(const char *, Attribute::Key));

	// attriblivelink.cpp:276
	unsigned char TextToHex(char);

	// attriblivelink.cpp:288
	char NibbleChar(unsigned char);

	// attriblivelink.cpp:294
	void ModifyMemory(unsigned char *, unsigned int, const char *);

	// attriblivelink.cpp:522
	extern void ValueToText(const void *, unsigned int, char *);

	// attriblivelink.cpp:534
	char * CopyString(char *, const char *);

	// attriblivelink.cpp:542
	char * IntToString(char *, unsigned int);

	// attriblivelink.cpp:563
	extern const char * InsertSchemaVersion(char *);

	// attriblivelink.cpp:571
	extern const char * HashLookup(Attribute::Key);

	// attriblivelink.cpp:587
	char * EncodeClassCollectionAttribute(Attribute &, char *);

	// attriblivelink.cpp:651
	extern void TweakAttributeLength(Attribute &, unsigned int);

	// attriblivelink.cpp:610
	unsigned int EncodeTweakPacketPrefix(Attribute &, unsigned int, const char *, char *);

	// attriblivelink.cpp:632
	extern void TweakAttribute(Attribute &, unsigned int, const char *, const void *, unsigned int);

	// attriblivelink.cpp:622
	extern void TweakAttribute(Attribute &, unsigned int, const char *, const char *);

	// attriblivelink.cpp:307
	unsigned char * RetrieveAttribDbDataPointer(const EditSpecifier &, Attribute::Type &, const Definition *&);

	// attriblivelink.cpp:437
	void * ResolveSymbolicNameToPointer(const char *, unsigned int);

	// attriblivelink.cpp:481
	void RevertPartiallySpecifiedEdit(const EditSpecifier &, unsigned int);

	// attriblivelink.cpp:515
	extern void RevertEdit(Attribute::Key, Attribute::Key, Attribute::Key, unsigned int);

	// attriblivelink.cpp:510
	extern void RevertAttributeEdits(Attribute::Key, Attribute::Key, Attribute::Key);

	// attriblivelink.cpp:505
	extern void RevertCollectionEdits(Attribute::Key, Attribute::Key);

	// attriblivelink.cpp:500
	extern void RevertClassEdits(Attribute::Key);

	// attriblivelink.cpp:493
	extern void RevertAllEdits();

	// attriblivelink.cpp:444
	extern Attrib::EDecodeResult DecodeLiveLinkMessage(const char *);

	// attriblivelink.cpp:12
	extern const char * kEditOpCodes;

	// attriblivelink.cpp:222
	EditTable * gLiveLinkEditTable;

	// attriblivelink.cpp:237
	void (*)(const Attrib::Collection *, Attribute::Key) gEditNotifier;

	// attriblivelink.cpp:238
	void (*)(const Attrib::Collection *, Attribute::Key) gLoopNotifier;

	// attriblivelink.cpp:241
	void (*)(const char *) gMessageSender;

	// attriblivelink.cpp:244
	void (*)(const char *) gArrayLengthMessageSender;

	// attriblivelink.cpp:247
	const char *(*)(const char *, Attribute::Key) gHashLookupSender;

}

// attriblivelink.cpp:45
struct Attrib::EditSpecifier {
private:
	// attriblivelink.cpp:110
	Attribute::Key mClassKey;

	// attriblivelink.cpp:111
	Attribute::Key mCollectionKey;

	// attriblivelink.cpp:112
	Attribute::Key mAttribKey;

	// attriblivelink.cpp:113
	unsigned int mIndex;

public:
	// attriblivelink.cpp:47
	void EditSpecifier(Attribute::Key, Attribute::Key, Attribute::Key, unsigned int);

	// attriblivelink.cpp:49
	void EditSpecifier(const EditSpecifier &);

	// attriblivelink.cpp:52
	Class * GetClass() const;

	// attriblivelink.cpp:53
	Attrib::Collection * GetCollection() const;

	// attriblivelink.cpp:54
	Attribute::Key GetCollectionKey() const;

	// attriblivelink.cpp:55
	Attribute::Key GetAttribKey() const;

	// attriblivelink.cpp:56
	unsigned int GetIndex() const;

	// attriblivelink.cpp:58
	bool EqualUnderFieldMask(const EditSpecifier &, unsigned int) const;

	// attriblivelink.cpp:66
	bool operator<(const EditSpecifier &) const;

	// attriblivelink.cpp:80
	const char * Decode(const char *);

}

// attriblivelink.cpp:133
struct Attrib::EditRecord {
private:
	// attriblivelink.cpp:193
	short unsigned int mOpInfo;

	// attriblivelink.cpp:194
	short unsigned int mIsLoopEdit;

	// attriblivelink.cpp:195
	const EditSpecifier * mEditSpec;

	// attriblivelink.cpp:197
	Attribute::Key mOriginalKey;

	// attriblivelink.cpp:198
	short unsigned int mOriginalLength;

	// attriblivelink.cpp:199
	short unsigned int mOriginalRelease;

	// attriblivelink.cpp:200
	unsigned int mTypeSize;

	// attriblivelink.cpp:202
	unsigned int mExtraSize;

	// attriblivelink.cpp:203
	unsigned char * mExtraImage;

	// attriblivelink.cpp:206
	union {
		// attriblivelink.cpp:207
		unsigned char * mOriginalImage;

		// attriblivelink.cpp:208
		Attrib::Array * mOriginalArray;

		// attriblivelink.cpp:209
		Attrib::Collection * mCollection;

	}

public:
	// attriblivelink.cpp:135
	void EditRecord();

	// attriblivelink.cpp:137
	void EditRecord(const EditRecord &);

	// attriblivelink.cpp:142
	void ~EditRecord();

	// attriblivelink.cpp:166
	void SetEditSpecifier(const EditSpecifier &);

	// attriblivelink.cpp:167
	const EditSpecifier & GetEditSpecifier() const;

	// attriblivelink.cpp:168
	bool IsLoopEdit() const;

	// attriblivelink.cpp:170
	Attrib::EDecodeResult Process(const char *);

	// attriblivelink.cpp:171
	void Revert(unsigned char);

private:
	// attriblivelink.cpp:174
	Attrib::EDecodeResult ProcessReplace(const char *);

	// attriblivelink.cpp:175
	void RevertReplace();

}

// attriblivelink.cpp:216
struct Attrib::EditTable : public map<Attrib::EditSpecifier,Attrib::EditRecord,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator> {
public:
	// attriblivelink.cpp:218
	void * operator new(size_t);

	// attriblivelink.cpp:219
	void operator delete(void *, size_t);

}

// attriblivelink.cpp:227
struct Attrib::TweakableAttribute : public Attribute {
public:
	// attriblivelink.cpp:229
	void * operator new(size_t);

	// attriblivelink.cpp:229
	void operator delete(void *, size_t);

	// attriblivelink.cpp:229
	void * operator new(size_t, void *);

	// attriblivelink.cpp:229
	void operator delete(void *, void *);

	// attriblivelink.cpp:230
	void TweakableAttribute(Attribute &);

	// attriblivelink.cpp:231
	void * GetPointer(unsigned int) const;

}


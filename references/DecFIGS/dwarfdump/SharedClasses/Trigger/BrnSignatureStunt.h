// BrnSignatureStunt.h:48
struct BrnTrigger::SignatureStunt {
private:
	// BrnSignatureStunt.h:86
	CgsID mId;

	// BrnSignatureStunt.h:87
	int64_t miCamera;

	// BrnSignatureStunt.h:88
	const GenericRegion ** mppStuntElements;

	// BrnSignatureStunt.h:89
	int32_t miStuntElementCount;

public:
	// BrnSignatureStunt.h:56
	void Construct(CgsID, int32_t, LinearMalloc *, int64_t);

	// BrnSignatureStunt.h:59
	CgsID GetId() const;

	// BrnSignatureStunt.h:63
	const GenericRegion * GetStuntElement(int32_t) const;

	// BrnSignatureStunt.h:67
	GenericRegion * GetStuntElement(int32_t);

	// BrnSignatureStunt.h:70
	int32_t GetStuntCount() const;

	// BrnSignatureStunt.h:75
	void SetStunt(int32_t, const GenericRegion *);

	// BrnSignatureStunt.h:79
	void FixDown(MemoryResource);

	// BrnSignatureStunt.h:83
	void FixUp(MemoryResource);

}


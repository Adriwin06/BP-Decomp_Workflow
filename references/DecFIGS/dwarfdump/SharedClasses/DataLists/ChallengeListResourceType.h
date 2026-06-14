// ChallengeListResourceType.h:43
struct BrnResource::ChallengeListResource {
	// ChallengeListResourceType.h:46
	uint32_t muNumChallenges;

	// ChallengeListResourceType.h:47
	ChallengeListEntry * mpEntries;

	// ChallengeListResourceType.h:48
	uint64_t mu16BytePad;

}

// ChallengeListResourceType.h:60
void BrnResource::ChallengeListResourceType::ChallengeListResourceType() {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
}

// ChallengeListResourceType.h:60
struct BrnResource::ChallengeListResourceType : public CgsResource::Type {
public:
	// ChallengeListResourceType.cpp:41
	virtual uint32_t GetTypeID() const;

	// ChallengeListResourceType.cpp:57
	virtual ResourceDescriptor GetSerialisedResourceDescriptor(const void *) const;

	// ChallengeListResourceType.cpp:122
	virtual void FixDown(void *, const Resource &) const;

	// ChallengeListResourceType.cpp:153
	virtual void FixUp(void *, const Resource &) const;

}


// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:31
	namespace physics {
		// Declaration
		struct PairSet {
			// pairset.h:121
			struct Link {
				// pairset.h:122
				uint32_t partIndex;

				// pairset.h:123
				uint32_t flags;

				// pairset.h:124
				uint32_t next;

				// pairset.h:125
				uint32_t prev;

			}

		}

	}

}

// pairset.h:64
struct rw::physics::PairSet {
private:
	// pairset.h:135
	rw::physics::PairSet::Link * m_links;

	// pairset.h:137
	uint32_t * m_linkLists;

	// pairset.h:138
	uint32_t m_maxPairs;

	// pairset.h:139
	uint32_t m_maxParts;

	// pairset.h:140
	uint32_t m_freePair;

	// Unknown accessibility
	struct LinkIterator;

	// pairset.h:65
	void PairSet();

public:
	// pairset.h:72
	ResourceDescriptor GetResourceDescriptor(uint32_t, uint32_t);

	// pairset.h:75
	PairSet * Initialize(const Resource &, uint32_t, uint32_t);

	// pairset.h:78
	void Release();

	// pairset.h:92
	void SetPairFlags(uint32_t, uint32_t);

	// pairset.h:93
	uint32_t GetPairFlags(uint32_t) const;

	// pairset.h:97
	uint32_t LinkParts(uint32_t, uint32_t, uint32_t);

	// pairset.h:98
	void UnlinkParts(uint32_t, uint32_t);

	// pairset.h:99
	void UnlinkPair(uint32_t);

	// pairset.h:100
	uint32_t UnlinkPart(uint32_t);

	// pairset.h:101
	void ClearAll();

	// pairset.h:103
	PairSet::LinkIterator PartLinksBegin(uint32_t);

	// pairset.h:104
	PairSet::LinkIterator PartLinksEnd();

	// pairset.h:106
	RwBool PairIsValid(uint32_t) const;

private:
	// pairset.h:131
	void InitializeLink(uint32_t, uint32_t);

	// pairset.h:132
	void ReleaseLink(uint32_t);

}

// pairset.h:153
struct rw::physics::PairSet::LinkIterator {
private:
	// pairset.h:184
	PairSet * m_pairSet;

	// pairset.h:185
	uint32_t m_cur;

public:
	// pairset.h:159
	void LinkIterator(PairSet *, uint32_t);

	// pairset.h:166
	uint32_t GetPairIndex();

	// pairset.h:167
	uint32_t GetOtherPartIndex();

	// pairset.h:171
	LinkIterator & operator++();

	// pairset.h:172
	RwBool operator!=(const LinkIterator &);

private:
	// pairset.h:181
	RwBool IsValid();

}


// ICEList.h:51
struct BrnResource::ICEList {
	// ICEList.h:53
	extern const int32_t KI_MAX_ICE_LISTS = 32;

	// ICEList.h:40
	typedef ResourcePtr<CgsContainers::Dictionary<ICE::ICETakeData> > ICETakeDictionaryResourcePtr;

private:
	// ICEList.h:91
	ICEList::ICETakeDictionaryResourcePtr[32] maTakeDictionary;

	// ICEList.h:92
	int32_t miCount;

	// ICEList.h:93
	int32_t miListCount;

public:
	// ICEList.h:56
	void Construct();

	// ICEList.h:59
	void Destruct();

	// ICEList.h:62
	void AddListResource(ICEList::ICETakeDictionaryResourcePtr &);

	// ICEList.h:65
	int32_t GetICEMovieCount() const;

	// ICEList.h:68
	const ICETakeData * GetICETakeData(DictEntry::DictionaryKey) const;

	// ICEList.h:72
	const ICETakeData * GetICETakeDataFromGuid(int32_t) const;

}

// ICEList.h:53
extern const int32_t KI_MAX_ICE_LISTS = 32;


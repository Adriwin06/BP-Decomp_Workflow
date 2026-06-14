// CgsSet.h:28
namespace CgsContainers {
	// CgsDictionary.h:33
	const int32_t kxDictFlag_DuplicateDataReference = [255, 255, 255, 255, 128, 0, 0, 0];

	// CgsDictionary.h:40
	const DictEntry::DictionaryKey KI_DICTIONARY_INVALID_KEY = 4294967295;

}

// CgsDictionary.h:51
struct CgsContainers::DictEntry {
	// CgsDictionary.h:39
	typedef int64_t DictionaryKey;

	// CgsDictionary.h:53
	DictEntry::DictionaryKey mKey;

	// CgsDictionary.h:54
	char * mpData;

	// CgsDictionary.h:55
	int32_t mxUserFlags;

}

// CgsFlagSet.h:29
namespace CgsContainers {
	// CgsDictionary.h:33
	const int32_t kxDictFlag_DuplicateDataReference = [255, 255, 255, 255, 128, 0, 0, 0];

	// CgsDictionary.h:40
	const DictEntry::DictionaryKey KI_DICTIONARY_INVALID_KEY = 4294967295;

}

// CgsBitArray.h:29
namespace CgsContainers {
	// CgsDictionary.h:33
	const int32_t kxDictFlag_DuplicateDataReference = [255, 255, 255, 255, 128, 0, 0, 0];

	// CgsDictionary.h:40
	const DictEntry::DictionaryKey KI_DICTIONARY_INVALID_KEY = 4294967295;

}

// CgsHash.h:24
namespace CgsContainers {
	// CgsDictionary.h:33
	const int32_t kxDictFlag_DuplicateDataReference = [255, 255, 255, 255, 128, 0, 0, 0];

	// CgsDictionary.h:40
	const DictEntry::DictionaryKey KI_DICTIONARY_INVALID_KEY = 4294967295;

}

// CgsStack.h:24
namespace CgsContainers {
	// CgsDictionary.h:33
	const int32_t kxDictFlag_DuplicateDataReference = [255, 255, 255, 255, 128, 0, 0, 0];

	// CgsDictionary.h:40
	const DictEntry::DictionaryKey KI_DICTIONARY_INVALID_KEY = 4294967295;

}

// CgsRingBuffer.h:24
namespace CgsContainers {
	// CgsDictionary.h:33
	const int32_t kxDictFlag_DuplicateDataReference = [255, 255, 255, 255, 128, 0, 0, 0];

	// CgsDictionary.h:40
	const DictEntry::DictionaryKey KI_DICTIONARY_INVALID_KEY = 4294967295;

}

// CgsIndexedPool.h:24
namespace CgsContainers {
	// CgsDictionary.h:33
	const int32_t kxDictFlag_DuplicateDataReference = [255, 255, 255, 255, 128, 0, 0, 0];

	// CgsDictionary.h:40
	const DictEntry::DictionaryKey KI_DICTIONARY_INVALID_KEY = 4294967295;

}

// CgsDictionary.h:73
struct CgsContainers::DictionaryBase {
protected:
	// CgsDictionary.h:99
	int32_t miNumEntries;

	// CgsDictionary.h:100
	int32_t miDictionarySize;

	// CgsDictionary.h:101
	DictEntry * mpaIndex;

public:
	// CgsDictionary.h:76
	void FixUp();

	// CgsDictionary.h:79
	void FixDown();

	// CgsDictionary.h:83
	int32_t GetNumEntries() const;

	// CgsDictionary.h:87
	int32_t GetIndexByKey(DictEntry::DictionaryKey) const;

	// CgsDictionary.h:91
	DictEntry::DictionaryKey GetKeyByIndex(int32_t) const;

	// CgsDictionary.h:94
	int32_t GetSize() const;

}

// CgsDictionary.h:123
struct CgsContainers::SimpleDictionary<ICE::ICETakeData> : public DictionaryBase {
public:
	// CgsDictionary.h:263
	ICE::ICETakeData * Find(long long int);

	// CgsDictionary.h:294
	const ICETakeData * Find(long long int) const;

	// CgsDictionary.h:354
	ICE::ICETakeData * GetAt(int);

	// CgsDictionary.h:375
	const ICETakeData * GetAt(int) const;

	// CgsDictionary.h:324
	DictEntry::DictionaryKey FindByValue(const ICETakeData *) const;

}

// CgsDictionary.h:168
struct CgsContainers::Dictionary<ICE::ICETakeData> : public SimpleDictionary<ICE::ICETakeData> {
public:
	// CgsDictionary.h:396
	void FixUp(const Resource &);

	// CgsDictionary.h:421
	void FixDown(const Resource &);

}

// CgsFifoQueue.h:24
namespace CgsContainers {
	// CgsDictionary.h:33
	const int32_t kxDictFlag_DuplicateDataReference = [255, 255, 255, 255, 128, 0, 0, 0];

	// CgsDictionary.h:40
	const DictEntry::DictionaryKey KI_DICTIONARY_INVALID_KEY = 4294967295;

}


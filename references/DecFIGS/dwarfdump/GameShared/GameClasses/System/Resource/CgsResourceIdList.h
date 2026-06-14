// CgsResourceIdList.h:43
struct CgsResource::ResourceIdList {
private:
	// CgsResourceIdList.h:94
	ID * mpaIds;

	// CgsResourceIdList.h:95
	uint32_t muNumIds;

	// CgsResourceIdList.h:96
	uint8_t[2] muPad;

public:
	// CgsResourceIdList.h:48
	void Construct();

	// CgsResourceIdList.h:52
	void Destruct();

	// CgsResourceIdList.h:57
	void FixUp(void *);

	// CgsResourceIdList.h:62
	void FixDown(void *);

	// CgsResourceIdList.h:66
	void ConstructIds();

	// CgsResourceIdList.h:85
	ID GetId(uint32_t);

	// CgsResourceIdList.h:89
	uint32_t GetNumIds() const;

}


// CgsAttribSysCollectionKey.h:52
struct CgsAttribSys::AttribSysCollectionKey {
private:
	// CgsAttribSysCollectionKey.h:94
	int64_t miAssetGuid;

public:
	// CgsAttribSysCollectionKey.h:57
	void Construct();

	// CgsAttribSysCollectionKey.h:60
	void Destruct();

	// CgsAttribSysCollectionKey.h:65
	void Set(int64_t);

	// CgsAttribSysCollectionKey.h:73
	void FixUp();

	// CgsAttribSysCollectionKey.h:77
	Attribute::Key GetHashKey() const;

}


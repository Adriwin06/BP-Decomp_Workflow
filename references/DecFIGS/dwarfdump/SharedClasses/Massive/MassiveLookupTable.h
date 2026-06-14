// MassiveLookupTable.h:25
namespace BrnMassive {
}

// MassiveLookupTable.h:25
namespace BrnMassive {
	struct MassiveLookupTableItem;

	struct BrnMassiveSubscriber;

	struct MassiveLookupTable;

}

// MassiveLookupTable.h:36
struct BrnMassive::MassiveLookupTableItem {
	// MassiveLookupTable.h:38
	Vector3 mBoundingBoxMin;

	// MassiveLookupTable.h:39
	Vector3 mBoundingBoxMax;

	// MassiveLookupTable.h:40
	ID mSceneID;

	// MassiveLookupTable.h:41
	BrnMassive::BrnMassiveSubscriber * mpSubscriber;

	// MassiveLookupTable.h:42
	int32_t miIEIndex;

	// MassiveLookupTable.h:43
	uint8_t muRenderableIndex;

}

// MassiveLookupTable.h:55
struct BrnMassive::MassiveLookupTable {
private:
	// MassiveLookupTable.h:81
	int32_t miNumberItems;

	// MassiveLookupTable.h:82
	MassiveLookupTableItem * mpItems;

public:
	// MassiveLookupTable.h:59
	void Construct();

	// MassiveLookupTable.h:62
	void FixUp(void *);

	// MassiveLookupTable.h:65
	void FixDown(void *);

	// MassiveLookupTable.h:69
	void SetItems(MassiveLookupTableItem *, uint32_t);

	// MassiveLookupTable.h:72
	MassiveLookupTableItem * GetItems();

	// MassiveLookupTable.h:75
	const MassiveLookupTableItem * GetItems() const;

	// MassiveLookupTable.h:78
	uint32_t GetNumItems() const;

}


// importnamespaces.h:8
namespace rw {
	// pdebug.h:13
	namespace audio {
		// pdebug.h:15
		namespace core {
			// Declaration
			struct Collection {
				// collection.h:28
				struct ItemHandle {
					// collection.h:31
					rw::audio::core::Collection::ItemNode * pNode;

				public:
					// collection.h:29
					ItemHandle();

				private:
					// collection.h:43
					ItemHandle(const rw::audio::core::Collection::ItemHandle &);

					// collection.h:44
					rw::audio::core::Collection::ItemHandle & operator=(const rw::audio::core::Collection::ItemHandle &);

				}

				// collection.h:48
				struct ItemNode {
					// collection.h:49
					ListDNode node;

					// collection.h:50
					rw::audio::core::Collection::ItemHandle * pHandle;

				}

			}

		}

	}

}

// collection.h:22
struct rw::audio::core::Collection {
private:
	// collection.h:122
	ListQueue mNodeBlocks;

	// collection.h:123
	ListDStack mFree;

	// collection.h:124
	ListDStack mUsed;

	// collection.h:125
	int mSize;

	// collection.h:126
	int mCapacity;

public:
	// collection.h:53
	void Collection();

	// collection.h:54
	void ~Collection();

	// collection.h:59
	bool AddItem(rw::audio::core::Collection::ItemHandle *);

	// collection.h:62
	void RemoveItem(rw::audio::core::Collection::ItemHandle *);

	// collection.h:76
	rw::audio::core::Collection::ItemNode * RemoveItemDeferred(rw::audio::core::Collection::ItemHandle *);

	// collection.h:79
	void RemoveNode(rw::audio::core::Collection::ItemNode *);

	// collection.h:82
	bool Contains(rw::audio::core::Collection::ItemHandle *);

	// collection.h:84
	bool Contains(rw::audio::core::Collection::ItemNode *);

	// collection.h:87
	rw::audio::core::Collection::ItemNode * GetNodes() const;

	// collection.h:90
	int GetSize();

	// collection.h:92
	int GetCapacity();

	// collection.h:95
	bool AddCapacity(int);

	// collection.h:100
	bool Defragment();

	// collection.h:103
	void Clear();

	// collection.h:106
	void Release();

}


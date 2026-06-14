// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:10
	namespace core {
		// list.h:15
		namespace filesys {
			// list.h:16
			namespace detail {
				struct ListSingle<rw::core::filesys::Device>;

				struct ListSingleIterator<rw::core::filesys::Device>;

			}

			struct Options;

			struct Device;

			struct Handle;

		}

	}

}

// list.h:50
struct rw::core::filesys::detail::ListSingle<rw::core::filesys::Device> {
private:
	// list.h:118
	rw::core::filesys::Device * mHead;

	// list.h:119
	rw::core::filesys::Device * mTail;

	// list.h:120
	uint32_t mNumNodes;

public:
	// list.h:53
	void ListSingle();

	// list.h:56
	void ~ListSingle();

	// list_inlines.h:24
	void Push(rw::core::filesys::Device *);

	// list_inlines.h:36
	void Append(rw::core::filesys::Device *);

	// list_inlines.h:51
	rw::core::filesys::Device * Pop();

	// list.h:86
	rw::core::filesys::Device * GetHead() const;

	// list.h:91
	rw::core::filesys::Device * GetTail() const;

	// list.h:97
	uint32_t GetCount() const;

	// list_inlines.h:78
	rw::core::filesys::Device * GetNode(unsigned int);

	// list_inlines.h:95
	void InsertAfter(rw::core::filesys::Device *, rw::core::filesys::Device *);

	// list_inlines.h:116
	bool Remove(rw::core::filesys::Device *, rw::core::filesys::Device *);

	// list.h:112
	rw::core::filesys::detail::ListSingleIterator<rw::core::filesys::Device> Begin();

}

// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:10
	namespace core {
		// list.h:15
		namespace filesys {
			// list.h:16
			namespace detail {
				struct ListNodeS;

				struct ListSingle<rw::core::filesys::Device>;

				struct ListSingleIterator<rw::core::filesys::Device>;

			}

			struct Options;

			struct Device;

			struct Handle;

		}

	}

}

// list.h:25
struct rw::core::filesys::detail::ListNodeS {
	// list.h:34
	ListNodeS * next;

public:
	// list.h:27
	void ListNodeS();

	// list.h:32
	void ~ListNodeS();

}

// importnamespaces.h:8
namespace rw {
	// importnamespaces.h:10
	namespace core {
		// list.h:15
		namespace filesys {
			// list.h:16
			namespace detail {
				struct ListNodeS;

				struct ListSingle<rw::core::filesys::Device>;

				struct ListSingleIterator<rw::core::filesys::Device>;

				struct ListSingle<rw::core::filesys::FilterStruct>;

				struct ListSingleIterator<rw::core::filesys::FilterStruct>;

				struct ListSingle<rw::core::filesys::TapStruct>;

				struct ListSingleIterator<rw::core::filesys::TapStruct>;

				struct ListSingle<rw::core::filesys::ChunkStruct>;

				struct ListSingleIterator<rw::core::filesys::ChunkStruct>;

			}

			struct Options;

			struct Device;

			struct Handle;

			struct FilterStruct;

			struct TapStruct;

			struct ChunkStruct;

			struct RequestStruct;

		}

	}

}

// list.h:50
struct rw::core::filesys::detail::ListSingle<rw::core::filesys::FilterStruct> {
private:
	// list.h:118
	rw::core::filesys::FilterStruct * mHead;

	// list.h:119
	rw::core::filesys::FilterStruct * mTail;

	// list.h:120
	uint32_t mNumNodes;

public:
	// list.h:53
	void ListSingle();

	// list.h:56
	void ~ListSingle();

	// list_inlines.h:24
	void Push(rw::core::filesys::FilterStruct *);

	// list_inlines.h:36
	void Append(rw::core::filesys::FilterStruct *);

	// list_inlines.h:51
	rw::core::filesys::FilterStruct * Pop();

	// list.h:86
	rw::core::filesys::FilterStruct * GetHead() const;

	// list.h:91
	rw::core::filesys::FilterStruct * GetTail() const;

	// list.h:97
	uint32_t GetCount() const;

	// list_inlines.h:78
	rw::core::filesys::FilterStruct * GetNode(unsigned int);

	// list_inlines.h:95
	void InsertAfter(rw::core::filesys::FilterStruct *, rw::core::filesys::FilterStruct *);

	// list_inlines.h:116
	bool Remove(rw::core::filesys::FilterStruct *, rw::core::filesys::FilterStruct *);

	// list.h:112
	rw::core::filesys::detail::ListSingleIterator<rw::core::filesys::FilterStruct> Begin();

}

// list.h:50
struct rw::core::filesys::detail::ListSingle<rw::core::filesys::TapStruct> {
private:
	// list.h:118
	rw::core::filesys::TapStruct * mHead;

	// list.h:119
	rw::core::filesys::TapStruct * mTail;

	// list.h:120
	uint32_t mNumNodes;

public:
	// list.h:53
	void ListSingle();

	// list.h:56
	void ~ListSingle();

	// list_inlines.h:24
	void Push(rw::core::filesys::TapStruct *);

	// list_inlines.h:36
	void Append(rw::core::filesys::TapStruct *);

	// list_inlines.h:51
	rw::core::filesys::TapStruct * Pop();

	// list.h:86
	rw::core::filesys::TapStruct * GetHead() const;

	// list.h:91
	rw::core::filesys::TapStruct * GetTail() const;

	// list.h:97
	uint32_t GetCount() const;

	// list_inlines.h:78
	rw::core::filesys::TapStruct * GetNode(unsigned int);

	// list_inlines.h:95
	void InsertAfter(rw::core::filesys::TapStruct *, rw::core::filesys::TapStruct *);

	// list_inlines.h:116
	bool Remove(rw::core::filesys::TapStruct *, rw::core::filesys::TapStruct *);

	// list.h:112
	rw::core::filesys::detail::ListSingleIterator<rw::core::filesys::TapStruct> Begin();

}

// list.h:50
struct rw::core::filesys::detail::ListSingle<rw::core::filesys::ChunkStruct> {
private:
	// list.h:118
	rw::core::filesys::ChunkStruct * mHead;

	// list.h:119
	rw::core::filesys::ChunkStruct * mTail;

	// list.h:120
	uint32_t mNumNodes;

public:
	// list.h:53
	void ListSingle();

	// list.h:56
	void ~ListSingle();

	// list_inlines.h:24
	void Push(rw::core::filesys::ChunkStruct *);

	// list_inlines.h:36
	void Append(rw::core::filesys::ChunkStruct *);

	// list_inlines.h:51
	rw::core::filesys::ChunkStruct * Pop();

	// list.h:86
	rw::core::filesys::ChunkStruct * GetHead() const;

	// list.h:91
	rw::core::filesys::ChunkStruct * GetTail() const;

	// list.h:97
	uint32_t GetCount() const;

	// list_inlines.h:78
	rw::core::filesys::ChunkStruct * GetNode(unsigned int);

	// list_inlines.h:95
	void InsertAfter(rw::core::filesys::ChunkStruct *, rw::core::filesys::ChunkStruct *);

	// list_inlines.h:116
	bool Remove(rw::core::filesys::ChunkStruct *, rw::core::filesys::ChunkStruct *);

	// list.h:112
	rw::core::filesys::detail::ListSingleIterator<rw::core::filesys::ChunkStruct> Begin();

}


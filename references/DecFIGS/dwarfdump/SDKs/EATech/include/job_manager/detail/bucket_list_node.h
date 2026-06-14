// bucket_list_node.h:20
struct EA::Jobs::Detail::BucketListNode<EA::Jobs::Job::Dependency,10> {
private:
	// bucket_list_node.h:103
	EA::Jobs::Job::Dependency[10] mBucket;

	// bucket_list_node.h:104
	BucketListNode<EA::Jobs::Job::Dependency,10> * mNext;

	// bucket_list_node.h:105
	uint32_t mSize;

	// bucket_list_node.h:106
	uint32_t mPad0;

	// bucket_list_node.h:109
	uint32_t mPad1;

	// Unknown accessibility
	struct Iterator;

public:
	// bucket_list_node.h:59
	void * operator new(unsigned int);

	// bucket_list_node.h:59
	void * operator new [](unsigned int);

	// bucket_list_node.h:59
	void * operator new(unsigned int, void *);

	// bucket_list_node.h:59
	void operator delete(void *);

	// bucket_list_node.h:59
	void operator delete [](void *);

	// bucket_list_node.h:61
	void BucketListNode();

	// bucket_list_node.h:62
	void ~BucketListNode();

	// bucket_list_node.h:64
	void Clear();

	// bucket_list_node.h:65
	BucketListNode<EA::Jobs::Job::Dependency,10>::Iterator GetIterator();

	// bucket_list_node.h:66
	uint32_t ListSize() const;

	// bucket_list_node.h:68
	void Add(const EA::Jobs::Job::Dependency &);

	// bucket_list_node.h:81
	const EA::Jobs::Job::Dependency & operator[](int) const;

private:
	// bucket_list_node.h:96
	void BucketListNode(const BucketListNode<EA::Jobs::Job::Dependency,10> &);

	// bucket_list_node.h:97
	BucketListNode<EA::Jobs::Job::Dependency,10> & operator=(const BucketListNode<EA::Jobs::Job::Dependency,10> &);

}

// bucket_list_node.h:20
struct EA::Jobs::Detail::BucketListNode<EA::Jobs::Job*,6> {
private:
	// bucket_list_node.h:103
	EA::Jobs::Job *[6] mBucket;

	// bucket_list_node.h:104
	BucketListNode<EA::Jobs::Job*,6> * mNext;

	// bucket_list_node.h:105
	uint32_t mSize;

	// bucket_list_node.h:106
	uint32_t mPad0;

	// bucket_list_node.h:109
	uint32_t mPad1;

	// Unknown accessibility
	struct Iterator;

public:
	// bucket_list_node.h:59
	void * operator new(unsigned int);

	// bucket_list_node.h:59
	void * operator new [](unsigned int);

	// bucket_list_node.h:59
	void * operator new(unsigned int, void *);

	// bucket_list_node.h:59
	void operator delete(void *);

	// bucket_list_node.h:59
	void operator delete [](void *);

	// bucket_list_node.h:61
	void BucketListNode();

	// bucket_list_node.h:62
	void ~BucketListNode();

	// bucket_list_node.h:64
	void Clear();

	// bucket_list_node.h:65
	BucketListNode<EA::Jobs::Job*,6>::Iterator GetIterator();

	// bucket_list_node.h:66
	uint32_t ListSize() const;

	// bucket_list_node.h:68
	void Add(EA::Jobs::Job *const&);

	// bucket_list_node.h:81
	EA::Jobs::Job *const& operator[](int) const;

private:
	// bucket_list_node.h:96
	void BucketListNode(const BucketListNode<EA::Jobs::Job*,6> &);

	// bucket_list_node.h:97
	BucketListNode<EA::Jobs::Job*,6> & operator=(const BucketListNode<EA::Jobs::Job*,6> &);

}

// bucket_list_node.h:20
struct EA::Jobs::Detail::BucketListNode<EA::Jobs::Event,10> {
private:
	// bucket_list_node.h:103
	Event[10] mBucket;

	// bucket_list_node.h:104
	BucketListNode<EA::Jobs::Event,10> * mNext;

	// bucket_list_node.h:105
	uint32_t mSize;

	// bucket_list_node.h:106
	uint32_t mPad0;

	// bucket_list_node.h:109
	uint32_t mPad1;

	// Unknown accessibility
	struct Iterator;

public:
	// bucket_list_node.h:59
	void * operator new(unsigned int);

	// bucket_list_node.h:59
	void * operator new [](unsigned int);

	// bucket_list_node.h:59
	void * operator new(unsigned int, void *);

	// bucket_list_node.h:59
	void operator delete(void *);

	// bucket_list_node.h:59
	void operator delete [](void *);

	// bucket_list_node.h:61
	void BucketListNode();

	// bucket_list_node.h:62
	void ~BucketListNode();

	// bucket_list_node.h:64
	void Clear();

	// bucket_list_node.h:65
	BucketListNode<EA::Jobs::Event,10>::Iterator GetIterator();

	// bucket_list_node.h:66
	uint32_t ListSize() const;

	// bucket_list_node.h:68
	void Add(const Event &);

	// bucket_list_node.h:81
	const Event & operator[](int) const;

private:
	// bucket_list_node.h:96
	void BucketListNode(const BucketListNode<EA::Jobs::Event,10> &);

	// bucket_list_node.h:97
	BucketListNode<EA::Jobs::Event,10> & operator=(const BucketListNode<EA::Jobs::Event,10> &);

}


// vector.h:93
struct eastl::VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator> {
	// vector.h:98
	extern const size_t kAlignment;

	// vector.h:99
	extern const size_t kAlignmentOffset;

	// vector.h:101
	extern const eastl_size_t npos;

	// vector.h:102
	extern const eastl_size_t kMaxSize;

	// attribdatabase.cpp:14
	typedef const TypeDesc * TypeDescPtr;

protected:
	// vector.h:105
	VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr * mpBegin;

	// vector.h:106
	VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr * mpEnd;

	// vector.h:107
	VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr * mpCapacity;

	// vector.h:108
	AttribSysPackageAllocator mAllocator;

public:
	// vector.h:302
	void VectorBase(const AttribSysPackageAllocator &);

	// vector.h:312
	void VectorBase(unsigned int, const AttribSysPackageAllocator &);

	// vector.h:322
	void ~VectorBase();

	// vector.h:331
	AttribSysPackageAllocator & get_allocator();

	// vector.h:338
	void set_allocator(const AttribSysPackageAllocator &);

protected:
	// vector.h:345
	VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr * DoAllocate(unsigned int);

	// vector.h:359
	void DoFree(VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *, unsigned int);

	// vector.h:368
	eastl_size_t GetNewCapacity(unsigned int);

}

// vector.h:139
struct eastl::vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator> : public VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator> {
public:
	// vector.h:382
	void vector(const AttribSysPackageAllocator &);

	// vector.h:390
	void vector(unsigned int, const AttribSysPackageAllocator &);

	// vector.h:399
	void vector(unsigned int, const VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr &, const AttribSysPackageAllocator &);

	// vector.h:408
	void vector(const vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator> &);

	// vector.h:425
	void ~vector();

	// vector.h:434
	vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator> & operator=(const vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator> &);

	// vector.h:885
	void swap(vector<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator> &);

	// vector.h:467
	void assign(unsigned int, const VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr &);

	// vector.h:486
	VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr * begin();

	// vector.h:494
	const VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr * begin() const;

	// vector.h:502
	VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr * end();

	// vector.h:510
	const VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr * end() const;

	// vector.h:518
	eastl::reverse_iterator<const Attrib::TypeDesc**> rbegin();

	// vector.h:526
	eastl::reverse_iterator<const Attrib::TypeDesc* const*> rbegin() const;

	// vector.h:534
	eastl::reverse_iterator<const Attrib::TypeDesc**> rend();

	// vector.h:542
	eastl::reverse_iterator<const Attrib::TypeDesc* const*> rend() const;

	// vector.h:549
	bool empty() const;

	// vector.h:557
	eastl_size_t size() const;

	// vector.h:565
	eastl_size_t capacity() const;

	// vector.h:572
	void resize(unsigned int, const VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr &);

	// vector.h:582
	void resize(unsigned int);

	// vector.h:595
	void reserve(unsigned int);

	// vector.h:617
	void set_capacity(unsigned int);

	// vector.h:643
	VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr * data();

	// vector.h:651
	const VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr * data() const;

	// vector.h:659
	VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr & operator[](unsigned int);

	// vector.h:672
	const VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr & operator[](unsigned int) const;

	// vector.h:685
	VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr & at(unsigned int);

	// vector.h:701
	const VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr & at(unsigned int) const;

	// vector.h:717
	VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr & front();

	// vector.h:730
	const VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr & front() const;

	// vector.h:743
	VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr & back();

	// vector.h:756
	const VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr & back() const;

	// vector.h:768
	void push_back(const VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr &);

	// vector.h:778
	void push_back();

	// vector.h:788
	void pop_back();

	// vector.h:801
	VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr * insert(VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *, const VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr &);

	// vector.h:820
	void insert(VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *, unsigned int, const VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr &);

	// vector.h:836
	VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr * erase(VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *);

	// vector.h:852
	VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr * erase(VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *, VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *);

	// vector.h:867
	void clear();

	// vector.h:874
	void reset();

	// vector.h:1279
	bool validate() const;

	// vector.h:1290
	int validate_iterator(const VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *) const;

protected:
	// vector.h:956
	void DoDestroyValues(VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *, VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *);

	// vector.h:981
	void DoAssignValues(unsigned int, const VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr &);

	// vector.h:1152
	void DoInsertValues(VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *, unsigned int, const VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr &);

	// vector.h:1223
	void DoInsertValue(VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *, const VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr &);

}

// vector.h:906
extern VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr * DoRealloc<const Attrib::TypeDesc**>(eastl_size_t  n, VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  first, VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *  last) {
	// This is not intended to be complete source code - just some variable hints. Consult a decompiler.
	{
		// vector.h:908
		VectorBase<const Attrib::TypeDesc*,CgsAttribSys::AttribSysPackageAllocator>::TypeDescPtr *const p;

	}
}

// vector.h:98
extern const size_t kAlignment = 4;

// vector.h:99
extern const size_t kAlignmentOffset;

// vector.h:101
extern const eastl_size_t npos;

// vector.h:102
extern const eastl_size_t kMaxSize;


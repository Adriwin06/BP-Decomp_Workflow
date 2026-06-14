// config.h:124
namespace eastl {
	// list.h:591
	extern bool operator!=<const Attrib::Class*, const Attrib::Class**, const Attrib::Class*&>(const ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> &, const ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> &);

	// list.h:573
	extern bool operator==<const Attrib::Class*, const Attrib::Class**, const Attrib::Class*&, const Attrib::Class**, const Attrib::Class*&>(const ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> &, const ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> &);

	// list.h:591
	extern bool operator!=<const Attrib::Collection*, const Attrib::Collection**, const Attrib::Collection*&>(const ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> &, const ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> &);

	// list.h:573
	extern bool operator==<const Attrib::Collection*, const Attrib::Collection**, const Attrib::Collection*&, const Attrib::Collection**, const Attrib::Collection*&>(const ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> &, const ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> &);

	// list.h:591
	extern bool operator!=<const Attrib::Collection*, const Attrib::Collection* const*, const Attrib::Collection* const&>(const ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&> &, const ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&> &);

	// list.h:591
	extern bool operator!=<const Attrib::Class*, const Attrib::Class* const*, const Attrib::Class* const&>(const ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&> &, const ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&> &);

}

// list.h:88
struct eastl::ListNodeBase {
	// list.h:89
	ListNodeBase * mpNext;

	// list.h:90
	ListNodeBase * mpPrev;

public:
	// list.h:92
	void insert(ListNodeBase *);

	// list.h:93
	void remove();

	// list.h:94
	void splice(ListNodeBase *, ListNodeBase *);

	// list.h:95
	void reverse();

	// list.h:96
	void swap(ListNodeBase &, ListNodeBase &);

}

// list.h:185
struct eastl::ListBase<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator> {
	// list.h:198
	extern const size_t kAlignment;

	// list.h:199
	extern const size_t kAlignmentOffset;

protected:
	// list.h:202
	ListNodeBase mNode;

	// list.h:206
	AttribSysPackageAllocator mAllocator;

public:
	// list.h:623
	AttribSysPackageAllocator & get_allocator();

	// list.h:630
	void set_allocator(const AttribSysPackageAllocator &);

protected:
	// list.h:603
	void ListBase(const AttribSysPackageAllocator &);

	// list.h:615
	void ~ListBase();

	// list.h:638
	eastl::ListNode<const Attrib::Collection*> * DoAllocateNode();

	// list.h:645
	void DoFreeNode(eastl::ListNode<const Attrib::Collection*> *);

	// list.h:652
	void DoInit();

	// list.h:660
	void DoClear();

}

// list.h:259
struct eastl::list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator> : public ListBase<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator> {
public:
	// list.h:682
	void list(const AttribSysPackageAllocator &);

	// list.h:690
	void list(unsigned int, const AttribSysPackageAllocator &);

	// list.h:699
	void list(unsigned int, const Attrib::Collection *const&, const AttribSysPackageAllocator &);

	// list.h:708
	void list(const list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator> &);

	// list.h:728
	eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> begin();

	// list.h:736
	eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&> begin() const;

	// list.h:744
	eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> end();

	// list.h:752
	eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&> end() const;

	// list.h:760
	eastl::reverse_iterator<eastl::ListIterator<const Attrib::Collection*, const Attrib::Collection**, const Attrib::Collection*&> > rbegin();

	// list.h:768
	eastl::reverse_iterator<eastl::ListIterator<const Attrib::Collection*, const Attrib::Collection* const*, const Attrib::Collection* const&> > rbegin() const;

	// list.h:776
	eastl::reverse_iterator<eastl::ListIterator<const Attrib::Collection*, const Attrib::Collection**, const Attrib::Collection*&> > rend();

	// list.h:784
	eastl::reverse_iterator<eastl::ListIterator<const Attrib::Collection*, const Attrib::Collection* const*, const Attrib::Collection* const&> > rend() const;

	// list.h:792
	const Attrib::Collection *& front();

	// list.h:800
	const Attrib::Collection *const& front() const;

	// list.h:808
	const Attrib::Collection *& back();

	// list.h:816
	const Attrib::Collection *const& back() const;

	// list.h:823
	bool empty() const;

	// list.h:831
	eastl_size_t size() const;

	// list.h:855
	list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator> & operator=(const list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator> &);

	// list.h:882
	void assign(unsigned int, const Attrib::Collection *const&);

	// list.h:900
	void clear();

	// list.h:911
	void reset();

	// list.h:925
	void resize(unsigned int, const Attrib::Collection *const&);

	// list.h:943
	void resize(unsigned int);

	// list.h:950
	void push_front(const Attrib::Collection *const&);

	// list.h:957
	void push_front();

	// list.h:968
	void pop_front();

	// list.h:975
	void push_back(const Attrib::Collection *const&);

	// list.h:982
	void push_back();

	// list.h:993
	void pop_back();

	// list.h:1001
	eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> insert(eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&>, const Attrib::Collection *const&);

	// list.h:1013
	void insert(eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&>, unsigned int, const Attrib::Collection *const&);

	// list.h:1030
	eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> erase(eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&>);

	// list.h:1040
	eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> erase(eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&>, eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&>);

	// list.h:1049
	void remove(const Attrib::Collection *const&);

	// list.h:1082
	void reverse();

	// list.h:1089
	void splice(eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&>, list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator> &);

	// list.h:1118
	void splice(eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&>, list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator> &, eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&>);

	// list.h:1146
	void splice(eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&>, list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator> &, eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&>, eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&>);

	// list.h:1176
	void swap(list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator> &);

	// list.h:1202
	void merge(list<const Attrib::Collection*,CgsAttribSys::AttribSysPackageAllocator> &);

	// list.h:1261
	void unique();

	// list.h:1306
	void sort();

	// list.h:1542
	bool validate() const;

	// list.h:1560
	int validate_iterator(eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&>) const;

protected:
	// list.h:1426
	eastl::ListNode<const Attrib::Collection*> * DoCreateNode();

	// list.h:1402
	eastl::ListNode<const Attrib::Collection*> * DoCreateNode(const Attrib::Collection *const&);

	// list.h:1476
	void DoAssignValues(unsigned int, const Attrib::Collection *const&);

	// list.h:1511
	void DoInsertValues(ListNodeBase *, unsigned int, const Attrib::Collection *const&);

	// list.h:1519
	void DoInsertValue(ListNodeBase *, const Attrib::Collection *const&);

	// list.h:1530
	void DoErase(ListNodeBase *);

}

// list.h:185
struct eastl::ListBase<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator> {
	// list.h:198
	extern const size_t kAlignment;

	// list.h:199
	extern const size_t kAlignmentOffset;

protected:
	// list.h:202
	ListNodeBase mNode;

	// list.h:206
	AttribSysPackageAllocator mAllocator;

public:
	// list.h:623
	AttribSysPackageAllocator & get_allocator();

	// list.h:630
	void set_allocator(const AttribSysPackageAllocator &);

protected:
	// list.h:603
	void ListBase(const AttribSysPackageAllocator &);

	// list.h:615
	void ~ListBase();

	// list.h:638
	eastl::ListNode<const Attrib::Class*> * DoAllocateNode();

	// list.h:645
	void DoFreeNode(eastl::ListNode<const Attrib::Class*> *);

	// list.h:652
	void DoInit();

	// list.h:660
	void DoClear();

}

// list.h:259
struct eastl::list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator> : public ListBase<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator> {
public:
	// list.h:682
	void list(const AttribSysPackageAllocator &);

	// list.h:690
	void list(unsigned int, const AttribSysPackageAllocator &);

	// list.h:699
	void list(unsigned int, const Class *const&, const AttribSysPackageAllocator &);

	// list.h:708
	void list(const list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator> &);

	// list.h:728
	eastl::ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> begin();

	// list.h:736
	eastl::ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&> begin() const;

	// list.h:744
	eastl::ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> end();

	// list.h:752
	eastl::ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&> end() const;

	// list.h:760
	eastl::reverse_iterator<eastl::ListIterator<const Attrib::Class*, const Attrib::Class**, const Attrib::Class*&> > rbegin();

	// list.h:768
	eastl::reverse_iterator<eastl::ListIterator<const Attrib::Class*, const Attrib::Class* const*, const Attrib::Class* const&> > rbegin() const;

	// list.h:776
	eastl::reverse_iterator<eastl::ListIterator<const Attrib::Class*, const Attrib::Class**, const Attrib::Class*&> > rend();

	// list.h:784
	eastl::reverse_iterator<eastl::ListIterator<const Attrib::Class*, const Attrib::Class* const*, const Attrib::Class* const&> > rend() const;

	// list.h:792
	const Class *& front();

	// list.h:800
	const Class *const& front() const;

	// list.h:808
	const Class *& back();

	// list.h:816
	const Class *const& back() const;

	// list.h:823
	bool empty() const;

	// list.h:831
	eastl_size_t size() const;

	// list.h:855
	list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator> & operator=(const list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator> &);

	// list.h:882
	void assign(unsigned int, const Class *const&);

	// list.h:900
	void clear();

	// list.h:911
	void reset();

	// list.h:925
	void resize(unsigned int, const Class *const&);

	// list.h:943
	void resize(unsigned int);

	// list.h:950
	void push_front(const Class *const&);

	// list.h:957
	void push_front();

	// list.h:968
	void pop_front();

	// list.h:975
	void push_back(const Class *const&);

	// list.h:982
	void push_back();

	// list.h:993
	void pop_back();

	// list.h:1001
	eastl::ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> insert(eastl::ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&>, const Class *const&);

	// list.h:1013
	void insert(eastl::ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&>, unsigned int, const Class *const&);

	// list.h:1030
	eastl::ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> erase(eastl::ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&>);

	// list.h:1040
	eastl::ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> erase(eastl::ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&>, eastl::ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&>);

	// list.h:1049
	void remove(const Class *const&);

	// list.h:1082
	void reverse();

	// list.h:1089
	void splice(eastl::ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&>, list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator> &);

	// list.h:1118
	void splice(eastl::ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&>, list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator> &, eastl::ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&>);

	// list.h:1146
	void splice(eastl::ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&>, list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator> &, eastl::ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&>, eastl::ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&>);

	// list.h:1176
	void swap(list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator> &);

	// list.h:1202
	void merge(list<const Attrib::Class*,CgsAttribSys::AttribSysPackageAllocator> &);

	// list.h:1261
	void unique();

	// list.h:1306
	void sort();

	// list.h:1542
	bool validate() const;

	// list.h:1560
	int validate_iterator(eastl::ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&>) const;

protected:
	// list.h:1426
	eastl::ListNode<const Attrib::Class*> * DoCreateNode();

	// list.h:1402
	eastl::ListNode<const Attrib::Class*> * DoCreateNode(const Class *const&);

	// list.h:1476
	void DoAssignValues(unsigned int, const Class *const&);

	// list.h:1511
	void DoInsertValues(ListNodeBase *, unsigned int, const Class *const&);

	// list.h:1519
	void DoInsertValue(ListNodeBase *, const Class *const&);

	// list.h:1530
	void DoErase(ListNodeBase *);

}

// list.h:147
struct eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> {
	// list.h:160
	eastl::ListNode<const Attrib::Collection*> * mpNode;

public:
	// list.h:491
	void ListIterator();

	// list.h:499
	void ListIterator(const ListNodeBase *);

	// list.h:507
	void ListIterator(const ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> &);

	// list.h:516
	const Attrib::Collection *& operator*() const;

	// list.h:524
	const Attrib::Collection ** operator->() const;

	// list.h:532
	ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> & operator++();

	// list.h:541
	ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> operator++(int);

	// list.h:551
	ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> & operator--();

	// list.h:560
	ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> operator--(int);

}

// list.h:147
struct eastl::ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> {
	// list.h:160
	eastl::ListNode<const Attrib::Class*> * mpNode;

public:
	// list.h:491
	void ListIterator();

	// list.h:499
	void ListIterator(const ListNodeBase *);

	// list.h:507
	void ListIterator(const ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> &);

	// list.h:516
	const Class *& operator*() const;

	// list.h:524
	const Class ** operator->() const;

	// list.h:532
	ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> & operator++();

	// list.h:541
	ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> operator++(int);

	// list.h:551
	ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> & operator--();

	// list.h:560
	ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> operator--(int);

}

// list.h:147
struct eastl::ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&> {
	// list.h:160
	eastl::ListNode<const Attrib::Collection*> * mpNode;

public:
	// list.h:491
	void ListIterator();

	// list.h:499
	void ListIterator(const ListNodeBase *);

	// list.h:507
	void ListIterator(const ListIterator<const Attrib::Collection*,const Attrib::Collection**,const Attrib::Collection*&> &);

	// list.h:516
	const Attrib::Collection *const& operator*() const;

	// list.h:524
	const Attrib::Collection *const* operator->() const;

	// list.h:532
	ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&> & operator++();

	// list.h:541
	ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&> operator++(int);

	// list.h:551
	ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&> & operator--();

	// list.h:560
	ListIterator<const Attrib::Collection*,const Attrib::Collection* const*,const Attrib::Collection* const&> operator--(int);

}

// list.h:147
struct eastl::ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&> {
	// list.h:160
	eastl::ListNode<const Attrib::Class*> * mpNode;

public:
	// list.h:491
	void ListIterator();

	// list.h:499
	void ListIterator(const ListNodeBase *);

	// list.h:507
	void ListIterator(const ListIterator<const Attrib::Class*,const Attrib::Class**,const Attrib::Class*&> &);

	// list.h:516
	const Class *const& operator*() const;

	// list.h:524
	const Class *const* operator->() const;

	// list.h:532
	ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&> & operator++();

	// list.h:541
	ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&> operator++(int);

	// list.h:551
	ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&> & operator--();

	// list.h:560
	ListIterator<const Attrib::Class*,const Attrib::Class* const*,const Attrib::Class* const&> operator--(int);

}

// list.h:134
struct eastl::ListNode<const Attrib::Collection*> : public ListNodeBase {
	// list.h:135
	const Attrib::Collection * mValue;

}

// list.h:134
struct eastl::ListNode<const Attrib::Class*> : public ListNodeBase {
	// list.h:135
	const Class * mValue;

}

// list.h:198
extern const size_t kAlignment = 4;

// list.h:199
extern const size_t kAlignmentOffset;


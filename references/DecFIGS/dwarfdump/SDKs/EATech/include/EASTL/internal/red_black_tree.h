// config.h:124
namespace eastl {
	// red_black_tree.h:65
	enum RBTreeSide {
		kRBTreeSideLeft = 0,
		kRBTreeSideRight = 1,
	}

	// red_black_tree.h:596
	extern bool operator!=<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&>(const rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> &, const rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> &);

	// red_black_tree.h:578
	extern bool operator==<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&, const Attrib::TypeDesc*, const Attrib::TypeDesc&>(const rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> &, const rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> &);

	// red_black_tree.h:596
	extern bool operator!=<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>(const rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> &, const rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> &);

	// red_black_tree.h:578
	extern bool operator==<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>(const rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> &, const rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> &);

}

// red_black_tree.h:84
struct eastl::rbtree_node_base {
	// red_black_tree.h:88
	rbtree_node_base * mpNodeRight;

	// red_black_tree.h:89
	rbtree_node_base * mpNodeLeft;

	// red_black_tree.h:90
	rbtree_node_base * mpNodeParent;

	// red_black_tree.h:91
	char mColor;

}

// red_black_tree.h:194
struct eastl::rb_base<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,eastl::use_self<Attrib::TypeDesc>,true,eastl::rbtree<Attrib::TypeDesc, Attrib::TypeDesc, eastl::less<Attrib::TypeDesc>, CgsAttribSys::AttribSysPackageAllocator, eastl::use_self<Attrib::TypeDesc>, false, true> > {
	// red_black_tree.h:198
	less<Attrib::TypeDesc> mCompare;

public:
	// red_black_tree.h:201
	void rb_base();

	// red_black_tree.h:202
	void rb_base(const less<Attrib::TypeDesc> &);

}

// red_black_tree.h:315
struct eastl::rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true> : public rb_base<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,eastl::use_self<Attrib::TypeDesc>,true,eastl::rbtree<Attrib::TypeDesc, Attrib::TypeDesc, eastl::less<Attrib::TypeDesc>, CgsAttribSys::AttribSysPackageAllocator, eastl::use_self<Attrib::TypeDesc>, false, true> > {
	// red_black_tree.h:340
	extern const size_t kKeyAlignment;

	// red_black_tree.h:341
	extern const size_t kKeyAlignmentOffset;

	// red_black_tree.h:342
	extern const size_t kValueAlignment;

	// red_black_tree.h:343
	extern const size_t kValueAlignmentOffset;

	// red_black_tree.h:346
	rbtree_node_base mAnchor;

	// red_black_tree.h:347
	eastl_size_t mnSize;

	// red_black_tree.h:348
	AttribSysPackageAllocator mAllocator;

public:
	// red_black_tree.h:609
	void rbtree(const AttribSysPackageAllocator &);

	// red_black_tree.h:619
	void rbtree(const less<Attrib::TypeDesc> &, const AttribSysPackageAllocator &);

	// red_black_tree.h:630
	void rbtree(const rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true> &);

	// red_black_tree.h:676
	void ~rbtree();

	// red_black_tree.h:686
	AttribSysPackageAllocator & get_allocator();

	// red_black_tree.h:693
	void set_allocator(const AttribSysPackageAllocator &);

	// red_black_tree.h:701
	eastl_size_t size() const;

	// red_black_tree.h:706
	bool empty() const;

	// red_black_tree.h:712
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> begin();

	// red_black_tree.h:718
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> begin() const;

	// red_black_tree.h:724
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> end();

	// red_black_tree.h:730
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> end() const;

	// red_black_tree.h:736
	eastl::reverse_iterator<eastl::rbtree_iterator<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&> > rbegin();

	// red_black_tree.h:742
	eastl::reverse_iterator<eastl::rbtree_iterator<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&> > rbegin() const;

	// red_black_tree.h:748
	eastl::reverse_iterator<eastl::rbtree_iterator<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&> > rend();

	// red_black_tree.h:754
	eastl::reverse_iterator<eastl::rbtree_iterator<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&> > rend() const;

	// red_black_tree.h:760
	rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true> & operator=(const rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true> &);

	// red_black_tree.h:782
	void swap(rbtree<Attrib::TypeDesc,Attrib::TypeDesc,eastl::less<Attrib::TypeDesc>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_self<Attrib::TypeDesc>,false,true> &);

	// red_black_tree.h:844
	eastl::pair<eastl::rbtree_iterator<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&>,bool> insert(const TypeDesc &);

	// red_black_tree.h:850
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> insert(eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&>, const TypeDesc &);

	// red_black_tree.h:1219
	void clear();

	// red_black_tree.h:1229
	void reset();

	// red_black_tree.h:1245
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> erase(eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&>);

	// red_black_tree.h:1258
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> erase(eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&>, eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&>);

	// red_black_tree.h:1288
	void erase(const TypeDesc *, const TypeDesc *);

	// red_black_tree.h:1300
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> find(const TypeDesc &);

	// red_black_tree.h:1332
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> find(const TypeDesc &) const;

	// red_black_tree.h:1378
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> lower_bound(const TypeDesc &);

	// red_black_tree.h:1402
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> lower_bound(const TypeDesc &) const;

	// red_black_tree.h:1411
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> upper_bound(const TypeDesc &);

	// red_black_tree.h:1435
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> upper_bound(const TypeDesc &) const;

	// red_black_tree.h:1444
	bool validate() const;

	// red_black_tree.h:1521
	int validate_iterator(eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&>) const;

protected:
	// red_black_tree.h:1540
	eastl::rbtree_node<Attrib::TypeDesc> * DoAllocateNode();

	// red_black_tree.h:1547
	void DoFreeNode(eastl::rbtree_node<Attrib::TypeDesc> *);

	// red_black_tree.h:1556
	eastl::rbtree_node<Attrib::TypeDesc> * DoCreateNodeFromKey(const TypeDesc &);

	// red_black_tree.h:1591
	eastl::rbtree_node<Attrib::TypeDesc> * DoCreateNode(const TypeDesc &);

	// red_black_tree.h:1625
	eastl::rbtree_node<Attrib::TypeDesc> * DoCreateNode(const eastl::rbtree_node<Attrib::TypeDesc> *, eastl::rbtree_node<Attrib::TypeDesc> *);

	// red_black_tree.h:1640
	eastl::rbtree_node<Attrib::TypeDesc> * DoCopySubtree(const eastl::rbtree_node<Attrib::TypeDesc> *, eastl::rbtree_node<Attrib::TypeDesc> *);

	// red_black_tree.h:1680
	void DoNukeSubtree(eastl::rbtree_node<Attrib::TypeDesc> *);

	// red_black_tree.h:856
	eastl::pair<eastl::rbtree_iterator<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&>,bool> DoInsertValue(const TypeDesc &, integral_constant<bool,true>);

	// red_black_tree.h:914
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> DoInsertValue(const TypeDesc &, integral_constant<bool,false>);

	// red_black_tree.h:937
	eastl::pair<eastl::rbtree_iterator<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&>,bool> DoInsertKey(const TypeDesc &, integral_constant<bool,true>);

	// red_black_tree.h:994
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> DoInsertKey(const TypeDesc &, integral_constant<bool,false>);

	// red_black_tree.h:1017
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> DoInsertValue(eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&>, const TypeDesc &, integral_constant<bool,true>);

	// red_black_tree.h:1053
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> DoInsertValue(eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&>, const TypeDesc &, integral_constant<bool,false>);

	// red_black_tree.h:1091
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> DoInsertKey(eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&>, const TypeDesc &, integral_constant<bool,true>);

	// red_black_tree.h:1127
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> DoInsertKey(eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&>, const TypeDesc &, integral_constant<bool,false>);

	// red_black_tree.h:1165
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> DoInsertValueImpl(eastl::rbtree_node<Attrib::TypeDesc> *, const TypeDesc &, bool);

	// red_black_tree.h:1188
	eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> DoInsertKeyImpl(eastl::rbtree_node<Attrib::TypeDesc> *, const TypeDesc &, bool);

}

// red_black_tree.h:135
struct eastl::rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> {
	// red_black_tree.h:149
	eastl::rbtree_node<Attrib::TypeDesc> * mpNode;

public:
	// red_black_tree.h:509
	void rbtree_iterator();

	// red_black_tree.h:514
	void rbtree_iterator(const eastl::rbtree_node<Attrib::TypeDesc> *);

	// red_black_tree.h:519
	void rbtree_iterator(const eastl::rbtree_iterator<Attrib::TypeDesc,Attrib::TypeDesc*,Attrib::TypeDesc&> &);

	// red_black_tree.h:525
	const TypeDesc & operator*() const;

	// red_black_tree.h:531
	const TypeDesc * operator->() const;

	// red_black_tree.h:537
	rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> & operator++();

	// red_black_tree.h:546
	rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> operator++(int);

	// red_black_tree.h:556
	rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> & operator--();

	// red_black_tree.h:565
	rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> operator--(int);

}

// red_black_tree.h:135
struct eastl::rbtree_iterator<Attrib::TypeDesc,Attrib::TypeDesc*,Attrib::TypeDesc&> {
	// red_black_tree.h:149
	eastl::rbtree_node<Attrib::TypeDesc> * mpNode;

public:
	// red_black_tree.h:509
	void rbtree_iterator();

	// red_black_tree.h:514
	void rbtree_iterator(const eastl::rbtree_node<Attrib::TypeDesc> *);

	// red_black_tree.h:519
	void rbtree_iterator(const eastl::rbtree_iterator<Attrib::TypeDesc,Attrib::TypeDesc*,Attrib::TypeDesc&> &);

	// red_black_tree.h:525
	TypeDesc & operator*() const;

	// red_black_tree.h:531
	TypeDesc * operator->() const;

	// red_black_tree.h:537
	rbtree_iterator<Attrib::TypeDesc,Attrib::TypeDesc*,Attrib::TypeDesc&> & operator++();

	// red_black_tree.h:546
	rbtree_iterator<Attrib::TypeDesc,Attrib::TypeDesc*,Attrib::TypeDesc&> operator++(int);

	// red_black_tree.h:556
	rbtree_iterator<Attrib::TypeDesc,Attrib::TypeDesc*,Attrib::TypeDesc&> & operator--();

	// red_black_tree.h:565
	rbtree_iterator<Attrib::TypeDesc,Attrib::TypeDesc*,Attrib::TypeDesc&> operator--(int);

}

// red_black_tree.h:194
struct eastl::rb_base<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,eastl::rbtree<Attrib::EditSpecifier, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::less<Attrib::EditSpecifier>, CgsAttribSys::AttribSysPackageAllocator, eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >, true, true> > {
	// red_black_tree.h:234
	less<Attrib::EditSpecifier> mCompare;

public:
	// red_black_tree.h:237
	void rb_base();

	// red_black_tree.h:238
	void rb_base(const less<Attrib::EditSpecifier> &);

}

// red_black_tree.h:315
struct eastl::rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true> : public rb_base<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,eastl::rbtree<Attrib::EditSpecifier, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::less<Attrib::EditSpecifier>, CgsAttribSys::AttribSysPackageAllocator, eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >, true, true> > {
	// red_black_tree.h:340
	extern const size_t kKeyAlignment;

	// red_black_tree.h:341
	extern const size_t kKeyAlignmentOffset;

	// red_black_tree.h:342
	extern const size_t kValueAlignment;

	// red_black_tree.h:343
	extern const size_t kValueAlignmentOffset;

	// red_black_tree.h:346
	rbtree_node_base mAnchor;

	// red_black_tree.h:347
	eastl_size_t mnSize;

	// red_black_tree.h:348
	AttribSysPackageAllocator mAllocator;

public:
	// red_black_tree.h:609
	void rbtree(const AttribSysPackageAllocator &);

	// red_black_tree.h:619
	void rbtree(const less<Attrib::EditSpecifier> &, const AttribSysPackageAllocator &);

	// red_black_tree.h:630
	void rbtree(const rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true> &);

	// red_black_tree.h:676
	void ~rbtree();

	// red_black_tree.h:686
	AttribSysPackageAllocator & get_allocator();

	// red_black_tree.h:693
	void set_allocator(const AttribSysPackageAllocator &);

	// red_black_tree.h:701
	eastl_size_t size() const;

	// red_black_tree.h:706
	bool empty() const;

	// red_black_tree.h:712
	eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> begin();

	// red_black_tree.h:718
	eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> begin() const;

	// red_black_tree.h:724
	eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> end();

	// red_black_tree.h:730
	eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> end() const;

	// red_black_tree.h:736
	eastl::reverse_iterator<eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> > rbegin();

	// red_black_tree.h:742
	eastl::reverse_iterator<eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> > rbegin() const;

	// red_black_tree.h:748
	eastl::reverse_iterator<eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> > rend();

	// red_black_tree.h:754
	eastl::reverse_iterator<eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> > rend() const;

	// red_black_tree.h:760
	rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true> & operator=(const rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true> &);

	// red_black_tree.h:782
	void swap(rbtree<Attrib::EditSpecifier,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::less<Attrib::EditSpecifier>,CgsAttribSys::AttribSysPackageAllocator,eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> >,true,true> &);

	// red_black_tree.h:844
	eastl::pair<eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>,bool> insert(const eastl::pair<const Attrib::EditSpecifier,Attrib::EditRecord> &);

	// red_black_tree.h:850
	eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> insert(eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>, const eastl::pair<const Attrib::EditSpecifier,Attrib::EditRecord> &);

	// red_black_tree.h:1219
	void clear();

	// red_black_tree.h:1229
	void reset();

	// red_black_tree.h:1245
	eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> erase(eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>);

	// red_black_tree.h:1258
	eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> erase(eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>, eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>);

	// red_black_tree.h:1288
	void erase(const EditSpecifier *, const EditSpecifier *);

	// red_black_tree.h:1300
	eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> find(const EditSpecifier &);

	// red_black_tree.h:1332
	eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> find(const EditSpecifier &) const;

	// red_black_tree.h:1378
	eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> lower_bound(const EditSpecifier &);

	// red_black_tree.h:1402
	eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> lower_bound(const EditSpecifier &) const;

	// red_black_tree.h:1411
	eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> upper_bound(const EditSpecifier &);

	// red_black_tree.h:1435
	eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> upper_bound(const EditSpecifier &) const;

	// red_black_tree.h:1444
	bool validate() const;

	// red_black_tree.h:1521
	int validate_iterator(eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,const eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>) const;

protected:
	// red_black_tree.h:1540
	eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > * DoAllocateNode();

	// red_black_tree.h:1547
	void DoFreeNode(eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > *);

	// red_black_tree.h:1556
	eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > * DoCreateNodeFromKey(const EditSpecifier &);

	// red_black_tree.h:1591
	eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > * DoCreateNode(const eastl::pair<const Attrib::EditSpecifier,Attrib::EditRecord> &);

	// red_black_tree.h:1625
	eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > * DoCreateNode(const eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > *, eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > *);

	// red_black_tree.h:1640
	eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > * DoCopySubtree(const eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > *, eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > *);

	// red_black_tree.h:1680
	void DoNukeSubtree(eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > *);

	// red_black_tree.h:856
	eastl::pair<eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>,bool> DoInsertValue(const eastl::pair<const Attrib::EditSpecifier,Attrib::EditRecord> &, integral_constant<bool,true>);

	// red_black_tree.h:914
	eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> DoInsertValue(const eastl::pair<const Attrib::EditSpecifier,Attrib::EditRecord> &, integral_constant<bool,false>);

	// red_black_tree.h:937
	eastl::pair<eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>,bool> DoInsertKey(const EditSpecifier &, integral_constant<bool,true>);

	// red_black_tree.h:994
	eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> DoInsertKey(const EditSpecifier &, integral_constant<bool,false>);

	// red_black_tree.h:1017
	eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> DoInsertValue(eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>, const eastl::pair<const Attrib::EditSpecifier,Attrib::EditRecord> &, integral_constant<bool,true>);

	// red_black_tree.h:1053
	eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> DoInsertValue(eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>, const eastl::pair<const Attrib::EditSpecifier,Attrib::EditRecord> &, integral_constant<bool,false>);

	// red_black_tree.h:1091
	eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> DoInsertKey(eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>, const EditSpecifier &, integral_constant<bool,true>);

	// red_black_tree.h:1127
	eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> DoInsertKey(eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>, const EditSpecifier &, integral_constant<bool,false>);

	// red_black_tree.h:1165
	eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> DoInsertValueImpl(eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > *, const eastl::pair<const Attrib::EditSpecifier,Attrib::EditRecord> &, bool);

	// red_black_tree.h:1188
	eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> DoInsertKeyImpl(eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > *, const EditSpecifier &, bool);

}

// red_black_tree.h:135
struct eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> {
	// red_black_tree.h:149
	eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > * mpNode;

public:
	// red_black_tree.h:509
	void rbtree_iterator();

	// red_black_tree.h:514
	void rbtree_iterator(const eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > *);

	// red_black_tree.h:519
	void rbtree_iterator(const rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> &);

	// red_black_tree.h:525
	eastl::pair<const Attrib::EditSpecifier,Attrib::EditRecord> & operator*() const;

	// red_black_tree.h:531
	eastl::pair<const Attrib::EditSpecifier,Attrib::EditRecord> * operator->() const;

	// red_black_tree.h:537
	rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> & operator++();

	// red_black_tree.h:546
	rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> operator++(int);

	// red_black_tree.h:556
	rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> & operator--();

	// red_black_tree.h:565
	rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> operator--(int);

}

// red_black_tree.h:99
struct eastl::rbtree_node<Attrib::TypeDesc> : public rbtree_node_base {
	// red_black_tree.h:100
	TypeDesc mValue;

}

// red_black_tree.h:99
struct eastl::rbtree_node<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > : public rbtree_node_base {
	// red_black_tree.h:100
	pair<const Attrib::EditSpecifier,Attrib::EditRecord> mValue;

}

// red_black_tree.h:340
extern const size_t kKeyAlignment;

// red_black_tree.h:341
extern const size_t kKeyAlignmentOffset;

// red_black_tree.h:342
extern const size_t kValueAlignment = 8;

// red_black_tree.h:343
extern const size_t kValueAlignmentOffset;


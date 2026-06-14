// utility.h:69
struct eastl::pair<eastl::rbtree_iterator<Attrib::TypeDesc, const Attrib::TypeDesc*, const Attrib::TypeDesc&>,bool> {
	// utility.h:73
	rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> first;

	// utility.h:74
	bool second;

public:
	// utility.h:146
	void pair();

	// utility.h:154
	void pair(const rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> &);

	// utility.h:162
	void pair(const rbtree_iterator<Attrib::TypeDesc,const Attrib::TypeDesc*,const Attrib::TypeDesc&> &, const bool &);

}

// utility.h:69
struct eastl::pair<const Attrib::EditSpecifier,Attrib::EditRecord> {
	// utility.h:73
	const EditSpecifier first;

	// utility.h:74
	EditRecord second;

public:
	// utility.h:146
	void pair();

	// utility.h:154
	void pair(const EditSpecifier &);

	// utility.h:162
	void pair(const EditSpecifier &, const EditRecord &);

}

// utility.h:69
struct eastl::pair<eastl::rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*, eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&>,bool> {
	// utility.h:73
	rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> first;

	// utility.h:74
	bool second;

public:
	// utility.h:146
	void pair();

	// utility.h:154
	void pair(const rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> &);

	// utility.h:162
	void pair(const rbtree_iterator<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>*,eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord>&> &, const bool &);

}

// utility.h:102
struct eastl::use_self<Attrib::TypeDesc> {
public:
	// utility.h:105
	const TypeDesc & operator()(const TypeDesc &) const;

}

// utility.h:117
struct eastl::use_first<eastl::pair<const Attrib::EditSpecifier, Attrib::EditRecord> > {
public:
	// utility.h:120
	const EditSpecifier & operator()(const eastl::pair<const Attrib::EditSpecifier,Attrib::EditRecord> &) const;

}

